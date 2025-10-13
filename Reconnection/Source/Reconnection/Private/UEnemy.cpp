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