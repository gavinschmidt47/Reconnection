// Fill out your copyright notice in the Description page of Project Settings.


#include "Fighter.h"

// Sets default values
AFighter::AFighter()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	bIsTurn = false;

	InitiativeScore = 0;
}

// Called when the game starts or when spawned
void AFighter::BeginPlay()
{
	Super::BeginPlay();
	
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