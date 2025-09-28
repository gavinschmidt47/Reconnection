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

	InitiativeScore = 0;
}

void AFighter::StartTurn()
{
	bIsTurn = true;

	UE_LOG(LogTemp, Warning, TEXT("Turn started"));
}

void AFighter::EndTurn()
{
	bIsTurn = false;

	UE_LOG(LogTemp, Warning, TEXT("Turn ended"));
}

void AFighter::SendDamage(float Damage, AFighter *Target)
{
	UE_LOG(LogTemp, Warning, TEXT("Sending %f damage to target"), Damage);
}

void AFighter::ReceiveDamage(float Damage)
{
	UE_LOG(LogTemp, Warning, TEXT("Received %f damage from source"), Damage);
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
		OnHitAttack();
	}
	else
	{
		OnHitMiss();
	}
	OnEndTurn();
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

void AFighter::OnHitAttack_Implementation()
{
	// Default implementation does nothing
}

void AFighter::OnHitMiss_Implementation()
{
	// Default implementation does nothing
}

void AFighter::OnEndTurn_Implementation()
{
	// Default implementation does nothing
}