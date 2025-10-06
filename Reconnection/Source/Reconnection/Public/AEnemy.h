// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AFighter.h"
#include "AEnemy.generated.h"

/**
 * 
 */
UCLASS()
class RECONNECTION_API AEnemy : public AFighter
{
	GENERATED_BODY()
	
public:
	virtual void StartTurn() override;

	UFUNCTION(BlueprintNativeEvent)
	void ChooseAction();
	void ChooseAction_Implementation();
};
