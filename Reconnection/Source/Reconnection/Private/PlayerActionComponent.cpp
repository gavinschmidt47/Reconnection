// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerActionComponent.h"

// Sets default values for this component's properties
UPlayerActionComponent::UPlayerActionComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}


// Called when the game starts
void UPlayerActionComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

void UPlayerActionComponent::PerformAttack(AFighter* Target)
{
	Player->Attack(Target);
}

