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

	// Defer action to the next tick so StartTurn() returns before ChooseAction runs.
	// Without this, the entire enemy turn (including EndTurn→NextTurn) executes inside
	// StartTurn(), causing UTurnManager to broadcast OnTurnChanged with a stale fighter
	// after the turn has already advanced — which makes Blueprint skip the player's turn.
	if (UWorld* World = GetWorld())
	{
		TWeakObjectPtr<UEnemy> WeakSelf(this);
		World->GetTimerManager().SetTimerForNextTick([WeakSelf]()
		{
			if (UEnemy* Self = WeakSelf.Get())
			{
				Self->ChooseAction();
			}
		});
	}
}

void UEnemy::ChooseAction_Implementation()
{
	// Guard: OnTurnChanged can trigger ChooseAction after the turn already ended.
	if (!bIsTurn) return;

	// Evaluate weighted utility scores for every available action.
	// Call GetAttackUtility first — it also sets ClosestEnemyIndex as a side-effect.
	float AttackScore    = GetAttackUtility();
	float SelfHealScore  = bHasSelfHeal  ? GetSelfHealUtility()  : -1.0f;
	float AllyHealScore  = bHasAllyHeal  ? GetAllyHealUtility()  : -1.0f;
	float BlockScore     = bHasBlock     ? GetBlockUtility()     : -1.0f;
	float BuffScore      = bHasBuff      ? GetBuffUtility()      : -1.0f;

	// 0=Attack, 1=SelfHeal, 2=AllyHeal, 3=Block, 4=Buff
	float BestScore  = AttackScore;
	int32 BestAction = 0;

	if (SelfHealScore > BestScore) { BestScore = SelfHealScore; BestAction = 1; }
	if (AllyHealScore > BestScore) { BestScore = AllyHealScore; BestAction = 2; }
	if (BlockScore    > BestScore) { BestScore = BlockScore;    BestAction = 3; }
	if (BuffScore     > BestScore) { BestScore = BuffScore;     BestAction = 4; }

	UE_LOG(LogTemp, Log, TEXT("UEnemy ChooseAction: best=%d score=%.2f hp=%.0f/%.0f"),
		BestAction, BestScore, CurrentHealth, MaxHealth);

	switch (BestAction)
	{
	case 1: // Self Heal
		Heal();
		break;

	case 2: // Heal the most-injured ally in sight (LowestAllyIndex set by GetAllyHealUtility)
		if (Allies.IsValidIndex(LowestAllyIndex))
		{
			Allies[LowestAllyIndex]->ReceiveHeal(BaseHeal + HealBuff);
		}
		EndTurn();
		break;

	case 3: // Block
		Block();
		break;

	case 4: // Buff self
		AddBuff(EnemyBuffAmount, EnemyBuffStat, 1);
		EndTurn();
		break;

	default: // Attack the closest reachable enemy
		{
			UFighter* Target = Enemies.IsValidIndex(ClosestEnemyIndex) ? Enemies[ClosestEnemyIndex] : nullptr;
			if (Target)
			{
				Attack(Target);
			}
			else
			{
				EndTurn();
			}
		}
		break;
	}
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
	if (Enemies.Num() <= 0) return CurrUtility;

	AActor* MyOwner = GetOwner();
	if (!MyOwner) return CurrUtility;

	// Skip enemies whose actor has already been destroyed
	AActor* FirstOwner = Enemies[0] ? Enemies[0]->GetOwner() : nullptr;
	if (!FirstOwner) return CurrUtility;

	float ClosestDistance = FirstOwner->GetHorizontalDistanceTo(MyOwner);
	bool bHasLineOfSight = false;
	bool bWithinMelee = false;

	int i = 0;

	for (UFighter* CurrFighter : Enemies)
	{
		AActor* FighterOwner = CurrFighter ? CurrFighter->GetOwner() : nullptr;
		if (!FighterOwner)
		{
			++i;
			continue;
		}

		float Dist = FighterOwner->GetHorizontalDistanceTo(MyOwner);
		if (Dist < ClosestDistance)
		{
			ClosestEnemyIndex = i;
			ClosestDistance = Dist;
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
