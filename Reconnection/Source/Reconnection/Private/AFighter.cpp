// Fill out your copyright notice in the Description page of Project Settings.


#include "AFighter.h"
#include "TurnTracker.h"
void AFighter::BeginPlay()
{
	Super::BeginPlay();
	
	// Register with TurnTracker if available
	if (TurnTracker)
	{
		TurnTracker->AddFighter(this);
	}
}

// Sets default values
AFighter::AFighter()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	bIsTurn = false;

	InitiativeScore = 0;

	TurnTracker = nullptr;
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

void AFighter::SendDamage(float Damage, const FString& Type, AFighter *Target)
{
	UE_LOG(LogTemp, Warning, TEXT("Sending %f %s damage to target"), Damage, *Type);
}

void AFighter::ReceiveDamage(float Damage, const FString& Type)
{
	UE_LOG(LogTemp, Warning, TEXT("Received %f %s damage from source"), Damage, *Type);
}

// IFighterInterface implementation
int32 AFighter::GetTurnNumber() const
{
	return InitiativeScore;
}

void AFighter::SetIsTurn(bool bInIsTurn)
{
	bIsTurn = bInIsTurn;
	
	if (bIsTurn)
	{
		StartTurn();
	}
	else
	{
		EndTurn();
	}
}

bool AFighter::GetIsTurn() const
{
	return bIsTurn;
}