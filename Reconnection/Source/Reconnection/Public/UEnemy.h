// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UFighter.h"
#include "UEnemy.generated.h"

UCLASS(ClassGroup = (Fighters), meta = (BlueprintSpawnableComponent))
class RECONNECTION_API UEnemy : public UFighter
{
	GENERATED_BODY()
	
public:
	virtual void StartTurn() override;

	UFUNCTION(BlueprintNativeEvent)
	void ChooseAction();
	void ChooseAction_Implementation();
};
