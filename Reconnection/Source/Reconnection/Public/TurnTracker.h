// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FighterInterface.h"
#include "TurnTracker.generated.h"

/**
 * Turn tracker system for managing turn-based combat
 */
UCLASS(BlueprintType)
class RECONNECTION_API UTurnTracker : public UObject
{
	GENERATED_BODY()
	
public:
	// Constructor
	UTurnTracker();

	// Add a fighter to the turn tracker
	UFUNCTION(BlueprintCallable, Category = "Turn Tracker")
	void AddFighter(AActor* Fighter);

	// Remove a fighter from the turn tracker
	UFUNCTION(BlueprintCallable, Category = "Turn Tracker")
	void RemoveFighter(AActor* Fighter);

	// Advance to the next turn
	UFUNCTION(BlueprintCallable, Category = "Turn Tracker")
	void NextTurn();

private:
	// List of fighters in the turn order
	UPROPERTY()
	TArray<TScriptInterface<IFighterInterface>> Fighters;

	// Current turn index
	int32 CurrentTurnIndex;
};
