// Fill out your copyright notice in the Description page of Project Settings.


#include "AEnemy.h"

void AEnemy::StartTurn()
{
	Super::StartTurn();
	ChooseAction();
}

void AEnemy::ChooseAction_Implementation()
{
	// Default implementation does nothing
}