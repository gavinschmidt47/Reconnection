// Fill out your copyright notice in the Description page of Project Settings.


#include "UFighter.h"
void UFighter::BeginPlay()
{
	
}

// Sets default values
UFighter::UFighter()
{
	bIsTurn = false;
}

void UFighter::StartTurn()
{
		bIsTurn = true;

		// List of all EStats values
		static const EStats AllStats[] = {
			EStats::Movement,
			EStats::Health,
			EStats::Damage,
			EStats::Attack,
			EStats::Defense,
			EStats::Block,
			EStats::Heal
		};

		for (EStats CurrBuffStat : AllStats)
		{
			if (BuffTracker.Contains(CurrBuffStat))
			{
				if (BuffTracker[CurrBuffStat] - 1 <= 0)
				{
					RemoveBuff(100.0f, CurrBuffStat);
					BuffTracker.Remove(CurrBuffStat);
				}
				else
				{
					--BuffTracker[CurrBuffStat];
				}
			}
		}

	MovementLeft = MaxMovement;

	DamageReduction = 0;

	OnStartTurn.Broadcast(this);
}

void UFighter::EndTurn()
{
	bIsTurn = false;

	OnEndTurn.Broadcast(this);
}

void UFighter::SendDamage(float Damage, UFighter* Target)
{
	Target->ReceiveDamage(Damage);
}

void UFighter::ReceiveDamage(float Damage)
{
	CurrentHealth = FMath::Clamp(CurrentHealth - (Damage - DamageReduction), 0.0f, MaxHealth);
	if (CurrentHealth <= 0)
	{
		Die();
		UE_LOG(LogTemp, Warning, TEXT("Fighter has been defeated"));
	}
}

float UFighter::GetDefense()
{
	return BaseDefense + DefenseBuff;
}

float UFighter::RollDamage()
{
	float Damage = FMath::RandRange(MinDamage, MaxDamage) + DamageBuff;
	return Damage;
}

void UFighter::Heal()
{
	CurrentHealth = FMath::Clamp(CurrentHealth + BaseHeal, 0.0f, MaxHealth);
	EndTurn();
}

void UFighter::Block()
{
	DamageReduction = BaseBlock + BlockBuff;
	EndTurn();
}

int UFighter::RollToHit()
{
	int Roll = FMath::RandRange(1, 20);
	return Roll + BaseAttack + AttackBuff;
}

FAttackData UFighter::Attack(UFighter *Target)
{
	FAttackData AttackData;
	AttackData.HitRoll = RollToHit();
	if (AttackData.HitRoll >= Target->GetDefense())
	{
		AttackData.DamageAmount = RollDamage();
		SendDamage(AttackData.DamageAmount, Target);
		OnHitAttack.Broadcast(Target);
		AttackData.bDidhit = true;
	}
	else
	{
		OnHitMiss.Broadcast(Target);
		AttackData.DamageAmount = 0.0f;
		AttackData.bDidhit = false;
	}
	EndTurn();
	return AttackData;
}

bool UFighter::CheckSightToTarget(UFighter* Target)
{
	if (!Target) return false;

	FVector Start = GetOwner()->GetActorLocation();
	FVector End = Target->GetOwner()->GetActorLocation();

	// Clamp distance to 50 units
	FVector Direction = (End - Start).GetSafeNormal();
	End = Start + Direction * 50.0f;

	FHitResult OutHit;
	FCollisionQueryParams Params;
	Params.AddIgnoredActor(GetOwner());

	bool bHit = GetWorld()->LineTraceSingleByChannel(
		OutHit,
		Start,
		End,
		ECC_Visibility,
		Params
	);

	return bHit;
}

void UFighter::AddBuff(float BuffAmount, const EStats& Stat, int NumberOfRounds)
{
	if (!BuffTracker[Stat])
 	{
 		BuffTracker.Add(Stat, NumberOfRounds);
 	}
 	else
 	{
 		BuffTracker[Stat] += NumberOfRounds;
 	}
	
	switch (Stat)
	{
	case EStats::Movement:
		{
			MaxMovement += BuffAmount;
		}
	case EStats::Health:
		{
			MaxHealth += BuffAmount;
		}
	case EStats::Damage:
		{
			DamageBuff += BuffAmount;
		}
	case EStats::Attack:
		{
			AttackBuff += BuffAmount;
		}
	case EStats::Defense:
		{
			DefenseBuff += BuffAmount;
		}
	case EStats::Block:
		{
			BlockBuff += BuffAmount;
		}
	case EStats::Heal:
		{
			HealBuff += BuffAmount;
		}
	default:
		{
			return;
		}
	}
}

void UFighter::RemoveBuff(float BuffAmount, const EStats& Stat)
{
		switch (Stat)
		{
		case EStats::Movement:
			MaxMovement = FMath::Max(MaxMovement - BuffAmount, 0.0f);
			break;
		case EStats::Health:
			MaxHealth = FMath::Max(MaxHealth - BuffAmount, 0.0f);
			break;
		case EStats::Damage:
			DamageBuff = FMath::Max(DamageBuff - BuffAmount, 0.0f);
			break;
		case EStats::Attack:
			AttackBuff = FMath::Max(AttackBuff - BuffAmount, 0.0f);
			break;
		case EStats::Defense:
			DefenseBuff = FMath::Max(DefenseBuff - BuffAmount, 0.0f);
			break;
		case EStats::Block:
			BlockBuff = FMath::Max(BlockBuff - BuffAmount, 0.0f);
			break;
		case EStats::Heal:
			HealBuff = FMath::Max(HealBuff - BuffAmount, 0.0f);
			break;
		default:
			return;
		}
}

void UFighter::Die()
{
	OnDeath.Broadcast(this);
}