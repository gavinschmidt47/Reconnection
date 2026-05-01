// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UFighter.h"
#include "UPlayer.generated.h"

/**
 * Player-controlled fighter. Extends UFighter with the eight combat actions
 * exposed as Button actions in the UI. Buttons bind to OnStartTurn / OnEndTurn
 * (inherited from UFighter) to show when bIsTurn is true and hide otherwise.
 *
 * Eight actions:
 *   Buff Defense, Buff Damage, Buff Attack, Buff Block, Buff Heal  (self-only)
 *   Attack  (target required — call UFighter::Attack(Target) from Blueprint)
 *   Heal    (inherited from UFighter)
 *   Block   (inherited from UFighter)
 */
UCLASS(ClassGroup=(Fighters), meta=(BlueprintSpawnableComponent))
class RECONNECTION_API UFighterPlayer : public UFighter
{
	GENERATED_BODY()

public:
	// Amount added to the chosen stat when a Buff action is used
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Player|Buffs")
	float PlayerBuffAmount = 25.0f;

	// How many rounds the buff lasts
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Player|Buffs")
	int32 PlayerBuffRounds = 1;

	// The five Buff actions — each applies a one-round bonus and ends the player's turn

	UFUNCTION(BlueprintCallable, Category = "Player|Actions")
	void BuffDefense();

	UFUNCTION(BlueprintCallable, Category = "Player|Actions")
	void BuffDamage();

	UFUNCTION(BlueprintCallable, Category = "Player|Actions")
	void BuffAttack();

	UFUNCTION(BlueprintCallable, Category = "Player|Actions")
	void BuffBlock();

	UFUNCTION(BlueprintCallable, Category = "Player|Actions")
	void BuffHeal();
};