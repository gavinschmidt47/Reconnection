// Fill out your copyright notice in the Description page of Project Settings.


#include "AFighter.h"
void AFighter::BeginPlay()
{
	Super::BeginPlay();
	
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

void AFighter::SendDamage(float damage, const FString& type, AFighter target)
{
	UE_LOG(LogTemp, Warning, TEXT("Sending %f %s damage to target"), damage, *type);
}

void AFighter::ReceiveDamage(float damage, const FString& type)
{
	UE_LOG(LogTemp, Warning, TEXT("Received %f %s damage from source"), damage, *type);
}