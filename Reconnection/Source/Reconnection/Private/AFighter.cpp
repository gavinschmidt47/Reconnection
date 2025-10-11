// Fill out your copyright notice in the Description page of Project Settings.


#include "AFighter.h"
void AFighter::BeginPlay()
{
	
}

// Sets default values
AFighter::AFighter()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	bIsTurn = false;
}

void AFighter::StartTurn()
{
	bIsTurn = true;

	OnStartTurn.Broadcast(this);
}

void AFighter::EndTurn()
{
	bIsTurn = false;

	OnEndTurn.Broadcast(this);
}

void AFighter::SendDamage_Implementation(float Damage, AFighter *Target)
{
	Target->ReceiveDamage(Damage);
}

void AFighter::ReceiveDamage_Implementation(float Damage)
{
	CurrentHealth = FMath::Clamp(CurrentHealth - (Damage - DamageReduction), 0.0f, MaxHealth);
	if (CurrentHealth <= 0)
	{
		Die();
		UE_LOG(LogTemp, Warning, TEXT("Fighter has been defeated"));
	}
}

float AFighter::GetDefense()
{
	return BaseDefense + DefenseBuff;
}

float AFighter::RollDamage()
{
	float Damage = FMath::RandRange(MinDamage, MaxDamage) + AttackBuff;
	return Damage;
}

void AFighter::Heal()
{
	CurrentHealth = FMath::Clamp(CurrentHealth + BaseHeal, 0.0f, MaxHealth);
}

void AFighter::Block()
{
	DamageReduction = BaseBlock + BlockBuff;
}

int AFighter::RollToHit()
{
	int Roll = FMath::RandRange(1, 20);
	return Roll + BaseAttack + AttackBuff;
}

void AFighter::Attack(AFighter *Target)
{
	if (RollToHit() >= Target->GetDefense())
	{
		SendDamage(RollDamage(), Target);
		OnHitAttack.Broadcast(Target);
	}
	else
	{
		OnHitMiss.Broadcast(Target);
	}
	EndTurn();
}

void AFighter::AddBuff(float BuffAmount, const FString& stat)
{
	if (stat == "Attack")
	{
		AttackBuff += BuffAmount;
	}
	else if (stat == "Damage")
	{
		DamageBuff += BuffAmount;
	}
	else if (stat == "Defense")
	{
		DefenseBuff += BuffAmount;
	}
	else if (stat == "Block")
	{
		BlockBuff += BuffAmount;
	}
	else if (stat == "Heal")
	{
		HealBuff += BuffAmount;
	}
}

void AFighter::RemoveBuff(float BuffAmount, const FString& stat)
{
	if (stat == "Attack")
	{
		AttackBuff -= BuffAmount;
	}
	else if (stat == "Damage")
	{
		DamageBuff -= BuffAmount;
	}
	else if (stat == "Defense")
	{
		DefenseBuff -= BuffAmount;
	}
	else if (stat == "Block")
	{
		BlockBuff -= BuffAmount;
	}
	else if (stat == "Heal")
	{
		HealBuff -= BuffAmount;
	}
}

void AFighter::Die()
{
	// Handle death logic here
}