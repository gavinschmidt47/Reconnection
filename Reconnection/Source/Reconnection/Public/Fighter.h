// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Fighter.generated.h"

UCLASS()
class RECONNECTION_API AFighter : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFighter();

	//Boolean to check if it's this fighter's turn
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Stored Variables")
	bool bIsTurn;

	//Initiative score for turn order
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Stored Variables")
	int32 InitiativeScore;

	//Function to start this fighter's turn
	UFUNCTION(BlueprintCallable, Category="Stored Functions")
	void StartTurn();

	//Function to end this fighter's turn	
	UFUNCTION(BlueprintCallable, Category="Stored Functions")
	void EndTurn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
