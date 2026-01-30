// Fill out your copyright notice in the Description page of Project Settings.


#include "UEnemy.h"

void UEnemy::StartTurn()
{
	Super::StartTurn();
	ChooseAction();
}

void UEnemy::ChooseAction_Implementation()
{
	// Default implementation does nothing
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

float UEnemy::GetAttackUtility()
{
	float CurrUtility = 0;
	UFighter* ClosestFighter = Enemies[0];
	float ClosestDistance = ClosestFighter->GetOwner()->GetHorizontalDistanceTo(this->GetOwner());
	
	for ( UFighter* CurrFighter : Enemies )
	{
		if ( CurrFighter && CurrFighter->GetOwner() != GetOwner() && CurrFighter->GetOwner()->GetHorizontalDistanceTo(this->GetOwner()) < ClosestDistance)
		{
			ClosestFighter = CurrFighter;
			ClosestDistance = CurrFighter->GetOwner()->GetHorizontalDistanceTo(this->GetOwner());
		}
	}
	
	if (ClosestDistance > MovementLeft && ClosestFighter)
	{
		return CurrUtility;
	}

	CurrUtility += ClosestFighter->CurrentHealth/ClosestFighter->MaxHealth;

	
}
