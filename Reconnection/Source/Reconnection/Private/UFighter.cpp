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

	OnStartTurn.Broadcast(this);
}

void UFighter::EndTurn()
{
	bIsTurn = false;

	OnEndTurn.Broadcast(this);
}

void UFighter::SendDamage_Implementation(float Damage, UFighter *Target)
{
	Target->ReceiveDamage(Damage);
}

void UFighter::ReceiveDamage_Implementation(float Damage)
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
	float Damage = FMath::RandRange(MinDamage, MaxDamage) + AttackBuff;
	return Damage;
}

void UFighter::CallHeal()
{
	Heal();
}

void UFighter::CallBlock()
{
	Block();
}

void UFighter::Heal_Implementation()
{
	CurrentHealth = FMath::Clamp(CurrentHealth + BaseHeal, 0.0f, MaxHealth);
}

void UFighter::Block_Implementation()
{
	DamageReduction = BaseBlock + BlockBuff;
}

int UFighter::RollToHit()
{
	int Roll = FMath::RandRange(1, 20);
	return Roll + BaseAttack + AttackBuff;
}

void UFighter::Attack(UFighter *Target)
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

void UFighter::AddBuff(float BuffAmount, const FString& stat)
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

void UFighter::RemoveBuff(float BuffAmount, const FString& stat)
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

void UFighter::Die()
{
	// Handle death logic here
}