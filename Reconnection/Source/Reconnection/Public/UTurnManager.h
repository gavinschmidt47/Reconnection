// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <string>
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UFighter.h"
#include "UEnemy.h"
#include "UTurnManager.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTurnChanged, UFighter*, CurrentFighter);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnRoundStarted);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCombatEnded);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFighterDeath, UFighter*, DeadFighter);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFighterJoined, UFighter*, NewFighter);

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class RECONNECTION_API UTurnManager : public UActorComponent
{
	GENERATED_BODY()

public:
	UTurnManager();

protected:
	virtual void BeginPlay() override;

public:
	// Array of all fighters in the level
	UPROPERTY(BlueprintReadOnly, Category = "Turn Manager")
	TArray<UFighter*> Fighters;

	// Current turn index
	UPROPERTY(BlueprintReadOnly, Category = "Turn Manager")
	int32 CurrentTurnIndex;

	// Current round number
	UPROPERTY(BlueprintReadOnly, Category = "Turn Manager")
	int32 CurrentRound;

	// Whether combat is active
	UPROPERTY(BlueprintReadWrite, Category = "Turn Manager")
	bool bCombatActive;
	
	UPROPERTY(BlueprintReadOnly, Category = "Turn Manager")
	int32 EnemiesLeft = 0;

	UPROPERTY(BlueprintReadWrite, Category = "Turn Manager")
	FName NextLevel;

	// Events
	UPROPERTY(BlueprintAssignable, Category = "Turn Manager|Events")
	FOnTurnChanged OnTurnChanged;

	UPROPERTY(BlueprintAssignable, Category = "Turn Manager|Events")
	FOnRoundStarted OnRoundStarted;

	UPROPERTY(BlueprintAssignable, Category = "Turn Manager|Events")
	FOnCombatEnded OnCombatEnded;

	UPROPERTY(BlueprintAssignable, Category = "Turn Manager|Events")
	FOnFighterDeath OnFighterDeath;

	UPROPERTY(BlueprintAssignable, Category = "Turn Manager|Events")
	FOnFighterJoined OnFighterJoined;

	// Find all fighters in the level and initialize
	UFUNCTION(BlueprintCallable, Category = "Turn Manager")
	void InitializeCombat();

	// Start the combat sequence
	UFUNCTION(BlueprintCallable, Category = "Turn Manager")
	void StartCombat();

	// Advance to the next turn
	UFUNCTION(BlueprintCallable, Category = "Turn Manager")
	void NextTurn();

	// Get the current fighter
	UFUNCTION(BlueprintCallable, Category = "Turn Manager")
	UFighter* GetCurrentFighter();

	// Sort fighters by initiative
	UFUNCTION(BlueprintCallable, Category = "Turn Manager")
	void SortFightersByInitiative();

	// Remove a fighter from combat (when they die)
	UFUNCTION(BlueprintCallable, Category = "Turn Manager")
	void RemoveFighter(UFighter* Fighter);

	// End combat
	UFUNCTION(BlueprintCallable, Category = "Turn Manager")
	void EndCombat();

private:
	// Called when a fighter dies
	UFUNCTION()
	void HandleFighterDeath(UFighter* DeadFighter);

	// Called when a fighter ends their turn
	UFUNCTION()
	void HandleFighterEndTurn(UFighter* Fighter);
};