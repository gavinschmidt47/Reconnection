#include "UEnemy.h"
#include "MathUtil.h"
#include "UTurnManager.h"
void UEnemy::OnFighterListChanged(UFighter* /*ChangedFighter*/)
{
	// Get the current list of fighters from the TurnManager
	UWorld* World = GetWorld();
	if (!World) return;
	for (TObjectIterator<UTurnManager> It; It; ++It)
	{
		if (It->GetWorld() == World)
		{
			UpdateAlliesAndEnemies(It->Fighters);
			break;
		}
	}
}

void UEnemy::StartTurn()
{
	UE_LOG(LogTemp, Warning, TEXT("UEnemy::StartTurn - Called for %s"), *GetOwner()->GetName());
	Super::StartTurn();
	ChooseAction();
}

void UEnemy::ChooseAction_Implementation()
{
	// Default implementation does nothing - override this in Blueprint
}

void UEnemy::InitializeEnemy(const TArray<UFighter*>& AllFighters)
{
	Allies.Empty();
	for (UFighter* Fighter : AllFighters)
	{
		if (Fighter && Fighter->GetOwner() != GetOwner())
		{
			if (Fighter->GetOwner()->FindComponentByClass<UEnemy>())
			{
				Allies.Add(Fighter);
			}
			else
			{
				// It's a non-enemy fighter, presumably an ally
				Enemies.Add(Fighter);
			}
		}
	}
}

void UEnemy::UpdateAlliesAndEnemies(const TArray<UFighter*>& AllFighters)
{
	Allies.Empty();
	Enemies.Empty();
	for (UFighter* Fighter : AllFighters)
	{
		if (Fighter && Fighter->GetOwner() != GetOwner())
		{
			if (Fighter->GetOwner()->FindComponentByClass<UEnemy>())
			{
				Allies.Add(Fighter);
			}
			else
			{
				// It's a non-enemy fighter, presumably an ally
				Enemies.Add(Fighter);
			}
		}
	}
}

void UEnemy::ReceiveDamage(float Damage)
{
	Super::ReceiveDamage(Damage);
	LastDamageReceived = Damage;
}

float UEnemy::GetAttackUtility()
{
	float CurrUtility = 0;
	ClosestEnemyIndex = 0;
	float ClosestDistance = Enemies[ClosestEnemyIndex]->GetOwner()->GetHorizontalDistanceTo(this->GetOwner());
	bool bHasLineOfSight = false;
	bool bWithinMelee = false;

	int i = 0;
	
	for ( UFighter* CurrFighter : Enemies )
	{
		if ( CurrFighter->GetOwner()->GetHorizontalDistanceTo(this->GetOwner()) < ClosestDistance)
		{
			ClosestEnemyIndex = i;
			ClosestDistance = CurrFighter->GetOwner()->GetHorizontalDistanceTo(this->GetOwner());
		}
		if (CheckSightToTarget(CurrFighter))
		{
			bHasLineOfSight = true;
		}
		if (ClosestDistance <= MaxMovement)
		{
			bWithinMelee = true;
		}
		++i;
	}
	
	if ((ClosestDistance > MovementLeft && !bHasRanged) || !Enemies[ClosestEnemyIndex] || !bHasLineOfSight)
	{
		return CurrUtility;
	}
	else
	{
		float HealthRatio = FMath::Clamp(Enemies[ClosestEnemyIndex]->CurrentHealth / Enemies[ClosestEnemyIndex]->MaxHealth, 0.01f, 1.0f);
		CurrUtility += -FMath::Loge(HealthRatio);
	}

	return CurrUtility * AttackUtilityWeight;
}

float UEnemy::GetMeleeUtility()
{
	float CurrUtility = 0;
	if (!bHasMelee) return CurrUtility;
	if (CurrentWeaponType == EWeaponType::Melee)
	{
		CurrUtility = 1;
	}
	else
	{
		CurrUtility = 0.3f;
	}
	return CurrUtility;
}

float UEnemy::GetRangedUtility()
{
	float CurrUtility = 0;
	if (!bHasRanged) return CurrUtility;
	if (CurrentWeaponType == EWeaponType::Ranged)
	{
		CurrUtility = 1;
	}
	else
	{
		CurrUtility = 0.5f;
	}
	return CurrUtility;
}

float UEnemy::GetMagicUtility()
{
	float CurrUtility = 0;
	if (!bHasMagic) return CurrUtility;
	if (CurrentWeaponType == EWeaponType::Magic)
	{
		CurrUtility = 1;
	}
	else
	{
		CurrUtility = 0.6f;
	}
	return CurrUtility;
}

float UEnemy::GetSelfHealUtility()
{
	float CurrUtility = 0;
	if (!bHasSelfHeal) return CurrUtility;

	float HealthRatio = FMath::Clamp(CurrentHealth / MaxHealth, 0.01f, 1.0f);

	if (HealthRatio <= 0.1f)
	{
		// Force heal at 10% health or lower
		CurrUtility = FLT_MAX;
	}
	else
	{
		// Exponentially increase utility as health decreases
		CurrUtility = FMath::Exp(-HealthRatio * 5.0f);
	}

	return CurrUtility * HealUtilityWeight;
}

float UEnemy::GetAllyHealUtility()
{
	float CurrUtility = 0;
	if (!bHasAllyHeal) return CurrUtility;

	float LowestHealthRatio = FLT_MAX;
	LowestAllyIndex = 0;

	bool bFoundAlly = false;

	int i = 0;
	
	for (auto Ally : Allies)
	{
		if (CheckSightToTarget(Ally))
		{
			float CurrHealthRatio = Ally->CurrentHealth / Ally->MaxHealth;
			if (CurrHealthRatio < LowestHealthRatio)
			{
				LowestAllyIndex = i;
				LowestHealthRatio = CurrHealthRatio;
				bFoundAlly = true;
			}
		}
		++i;
	}

	CurrUtility = FMath::Exp(-LowestHealthRatio * 5.0f);
	return CurrUtility * HealUtilityWeight;
}

float UEnemy::GetBlockUtility()
{
	float CurrUtility = 0;
	if (!bHasBlock) return CurrUtility;

	float HealthRatio = FMath::Clamp(CurrentHealth / MaxHealth, 0.01f, 1.0f);
	float DamageRatio = FMath::Clamp(LastDamageReceived / MaxHealth, 0.0f, 1.0f);
	CurrUtility = FMath::Exp(DamageRatio * BlockUtilityWeight) - 1.0f;

	return CurrUtility * BlockUtilityWeight;
}

float UEnemy::GetBuffUtility()
{
	float CurrUtility = 0;
	if (!bHasBuff) return CurrUtility;

	if (BuffTracker.Num() == 0)
	{
		CurrUtility = 1.0f; // Very high utility if no buffs are active
	}
	else
	{
		CurrUtility = 0.5f / BuffTracker.Num(); // Higher utility for fewer buffs
	}
	return CurrUtility * BuffUtilityWeight;
}

UFighter* UEnemy::GetClosestEnemy()
{
	return Enemies[ClosestEnemyIndex];
}

UFighter* UEnemy::GetLowestAlly()
{
	return Allies[LowestAllyIndex];
}
