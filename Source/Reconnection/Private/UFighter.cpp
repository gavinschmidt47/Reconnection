// Fill out your copyright notice in the Description page of Project Settings.

#include "UFighter.h"
#include "NavigationSystem.h"
#include "NavigationPath.h"

void UFighter::BeginPlay()
{
	BuffTracker.Empty();
	BuffAmountTracker.Empty();

	// If CurrentHealth was not explicitly set in the Blueprint defaults,
	// initialize it to MaxHealth so the fighter doesn't start at 0 HP.
	if (CurrentHealth <= 0.0f)
	{
		CurrentHealth = MaxHealth;
		UE_LOG(LogTemp, Warning, TEXT("[Init] %s CurrentHealth initialized to MaxHealth (%.1f)"),
			*GetOwner()->GetName(), MaxHealth);
	}
}

UFighter::UFighter()
{
	bIsTurn = false;
}

void UFighter::StartTurn()
{
	if (bIsTurn)
	{
		UE_LOG(LogTemp, Warning, TEXT("UFighter::StartTurn - %s already has active turn, skipping"), *GetOwner()->GetName());
		return;
	}

	bIsTurn = true;

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
				// Use the stored amount so we reverse exactly what was applied
				float StoredAmount = BuffAmountTracker.Contains(CurrBuffStat) ? BuffAmountTracker[CurrBuffStat] : 0.0f;
				UE_LOG(LogTemp, Warning, TEXT("[Buff] Expiring buff on %s | Stat: %d | Amount: %.1f"),
					*GetOwner()->GetName(), (int32)CurrBuffStat, StoredAmount);
				RemoveBuff(StoredAmount, CurrBuffStat);
				BuffTracker.Remove(CurrBuffStat);
				BuffAmountTracker.Remove(CurrBuffStat);
			}
			else
			{
				--BuffTracker[CurrBuffStat];
			}
		}
	}

	// Restore full NavMesh movement budget for this turn
	MovementLeft = MaxMovement;
	DamageReduction = 0;

	UE_LOG(LogTemp, Warning, TEXT("[Turn] START - %s | HP: %.1f/%.1f | MovementLeft: %.1f | Initiative: %.1f"),
		*GetOwner()->GetName(), CurrentHealth, MaxHealth, MovementLeft, InitiativeScore);

	OnStartTurn.Broadcast(this);
}

void UFighter::EndTurn()
{
	// Guard: Blueprint's OnTurnChanged can fire after an enemy already completed its
	// turn synchronously, causing a second EndTurn → NextTurn → recursion → crash.
	if (!bIsTurn) return;

	bIsTurn = false;

	UE_LOG(LogTemp, Warning, TEXT("[Turn] END - %s | HP: %.1f/%.1f | MovementLeft: %.1f"),
		*GetOwner()->GetName(), CurrentHealth, MaxHealth, MovementLeft);

	OnEndTurn.Broadcast(this);
}

void UFighter::ConditionalEndTurn()
{
	if (!bWaitForAnimation)
	{
		UE_LOG(LogTemp, Warning, TEXT("[Turn] ConditionalEndTurn - %s ending turn (no animation pending)"),
			*GetOwner()->GetName());
		EndTurn();
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("[Turn] ConditionalEndTurn - %s waiting for animation, turn held"),
			*GetOwner()->GetName());
	}
}

void UFighter::SendDamage(float Damage, UFighter* Target)
{
	UE_LOG(LogTemp, Warning, TEXT("[Combat] SendDamage - %s sending %.1f damage to %s"),
		*GetOwner()->GetName(), Damage, *Target->GetOwner()->GetName());
	Target->ReceiveDamage(Damage);
}

void UFighter::ReceiveDamage(float Damage)
{
	float NetDamage = FMath::Max(Damage - DamageReduction, 0.0f);
	float PrevHealth = CurrentHealth;
	CurrentHealth = FMath::Clamp(CurrentHealth - NetDamage, 0.0f, MaxHealth);

	UE_LOG(LogTemp, Warning, TEXT("[Combat] ReceiveDamage - %s | Raw: %.1f | Reduction: %.1f | Net: %.1f | HP: %.1f → %.1f"),
		*GetOwner()->GetName(), Damage, DamageReduction, NetDamage, PrevHealth, CurrentHealth);

	if (CurrentHealth <= 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("[Combat] Fighter %s has been defeated!"), *GetOwner()->GetName());
		Die();
	}
}

void UFighter::ReceiveHeal(float Amount)
{
	float ActualHeal = FMath::Min(Amount, MaxHealth - CurrentHealth);
	float PrevHealth = CurrentHealth;
	CurrentHealth = FMath::Clamp(CurrentHealth + Amount, 0.0f, MaxHealth);

	UE_LOG(LogTemp, Warning, TEXT("[Action] Heal - %s restored %.1f HP (attempted %.1f) | HP: %.1f → %.1f"),
		*GetOwner()->GetName(), ActualHeal, Amount, PrevHealth, CurrentHealth);

	OnHealPerformed.Broadcast(this, ActualHeal);
}

float UFighter::GetDefense()
{
	return BaseDefense + DefenseBuff;
}

float UFighter::RollDamage()
{
	return FMath::RandRange(MinDamage, MaxDamage) + DamageBuff;
}

void UFighter::Heal()
{
	UE_LOG(LogTemp, Warning, TEXT("[Action] Heal triggered by %s | BaseHeal: %.1f | HealBuff: %.1f"),
		*GetOwner()->GetName(), BaseHeal, HealBuff);
	ReceiveHeal(BaseHeal + HealBuff);
	EndTurn();
}

void UFighter::Block()
{
	DamageReduction = BaseBlock + BlockBuff;
	UE_LOG(LogTemp, Warning, TEXT("[Action] Block - %s is blocking | DamageReduction set to %.1f (Base: %.1f + Buff: %.1f)"),
		*GetOwner()->GetName(), DamageReduction, BaseBlock, BlockBuff);
	EndTurn();
}

int UFighter::RollToHit()
{
	return FMath::RandRange(1, 20) + BaseAttack + AttackBuff;
}

FAttackData UFighter::Attack(UFighter* Target)
{
	FAttackData AttackData;

	if (!Target)
	{
		UE_LOG(LogTemp, Warning, TEXT("[Combat] Attack - %s called Attack with NULL target!"),
			*GetOwner()->GetName());
		AttackData.HitRoll = 0;
		AttackData.DamageAmount = 0.0f;
		AttackData.bDidHit = false;
		return AttackData;
	}

	AttackData.HitRoll = RollToHit();
	float TargetDefense = Target->GetDefense();

	UE_LOG(LogTemp, Warning, TEXT("[Combat] Attack - %s attacks %s | HitRoll: %d (needs >= %.1f)"),
		*GetOwner()->GetName(), *Target->GetOwner()->GetName(), AttackData.HitRoll, TargetDefense);

	if (AttackData.HitRoll >= TargetDefense)
	{
		AttackData.DamageAmount = RollDamage();
		UE_LOG(LogTemp, Warning, TEXT("[Combat] HIT! %s → %s | Damage: %.1f"),
			*GetOwner()->GetName(), *Target->GetOwner()->GetName(), AttackData.DamageAmount);
		SendDamage(AttackData.DamageAmount, Target);
		OnDamageDealt.Broadcast(this, Target, AttackData.DamageAmount);
		OnHitAttack.Broadcast(Target);
		AttackData.bDidHit = true;
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("[Combat] MISS! %s → %s | Roll %d < Defense %.1f"),
			*GetOwner()->GetName(), *Target->GetOwner()->GetName(), AttackData.HitRoll, TargetDefense);
		OnHitMiss.Broadcast(Target);
		AttackData.DamageAmount = 0.0f;
		AttackData.bDidHit = false;
	}

	EndTurn();
	return AttackData;
}

bool UFighter::CheckSightToTarget(UFighter* Target)
{
	if (!Target) return false;

	FVector Start = GetOwner()->GetActorLocation();
	FVector End = Target->GetOwner()->GetActorLocation();

	FVector Direction = (End - Start).GetSafeNormal();
	End = Start + Direction * 50.0f;

	FHitResult OutHit;
	FCollisionQueryParams Params;
	Params.AddIgnoredActor(GetOwner());

	return GetWorld()->LineTraceSingleByChannel(OutHit, Start, End, ECC_Visibility, Params);
}

void UFighter::AddBuff(float BuffAmount, const EStats& Stat, int NumberOfRounds)
{
	UE_LOG(LogTemp, Warning, TEXT("[Buff] AddBuff - %s | Stat: %d | Amount: %.1f | Rounds: %d"),
		*GetOwner()->GetName(), (int32)Stat, BuffAmount, NumberOfRounds);

	if (!BuffTracker.Contains(Stat))
	{
		BuffTracker.Add(Stat, NumberOfRounds);
		BuffAmountTracker.Add(Stat, BuffAmount);
	}
	else
	{
		BuffTracker[Stat] += NumberOfRounds;
		BuffAmountTracker[Stat] += BuffAmount; // accumulate if stacked
	}

	switch (Stat)
	{
	case EStats::Movement:
		MaxMovement += BuffAmount;
		break;
	case EStats::Health:
		MaxHealth += BuffAmount;
		break;
	case EStats::Damage:
		DamageBuff += BuffAmount;
		break;
	case EStats::Attack:
		AttackBuff += BuffAmount;
		break;
	case EStats::Defense:
		DefenseBuff += BuffAmount;
		break;
	case EStats::Block:
		BlockBuff += BuffAmount;
		break;
	case EStats::Heal:
		HealBuff += BuffAmount;
		break;
	default:
		break;
	}
}

void UFighter::RemoveBuff(float BuffAmount, const EStats& Stat)
{
	UE_LOG(LogTemp, Warning, TEXT("[Buff] RemoveBuff - %s | Stat: %d | Amount: %.1f"),
		*GetOwner()->GetName(), (int32)Stat, BuffAmount);

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
		break;
	}
}

void UFighter::Die()
{
	UE_LOG(LogTemp, Warning, TEXT("[Combat] Die - %s has died and is broadcasting OnDeath"),
		*GetOwner()->GetName());
	OnDeath.Broadcast(this);
}

float UFighter::GetPathLengthTo(FVector Destination)
{
	UNavigationSystemV1* NavSys = FNavigationSystem::GetCurrent<UNavigationSystemV1>(GetWorld());
	if (!NavSys) return FLT_MAX;

	UNavigationPath* NavPath = NavSys->FindPathToLocationSynchronously(
		this,
		GetOwner()->GetActorLocation(),
		Destination
	);

	if (!NavPath || !NavPath->IsValid() || NavPath->IsPartial())
	{
		return FLT_MAX;
	}

	return NavPath->GetPathLength();
}

bool UFighter::CanMoveToLocation(FVector Destination)
{
	return GetPathLengthTo(Destination) <= MovementLeft;
}

bool UFighter::TryConsumeMovement(FVector Destination)
{
	float PathLength = GetPathLengthTo(Destination);

	UE_LOG(LogTemp, Warning, TEXT("[Movement] TryConsumeMovement - %s | PathLength: %.1f | MovementLeft: %.1f | Destination: %s"),
		*GetOwner()->GetName(), PathLength, MovementLeft, *Destination.ToString());

	if (PathLength > MovementLeft)
	{
		UE_LOG(LogTemp, Warning, TEXT("[Movement] BLOCKED - %s cannot reach destination (%.1f > %.1f)"),
			*GetOwner()->GetName(), PathLength, MovementLeft);
		return false;
	}

	MovementLeft -= PathLength;
	UE_LOG(LogTemp, Warning, TEXT("[Movement] MOVED - %s consumed %.1f movement | Remaining: %.1f"),
		*GetOwner()->GetName(), PathLength, MovementLeft);

	OnFighterMoved.Broadcast(this, Destination);
	return true;
}