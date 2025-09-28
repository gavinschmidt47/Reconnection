// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AFighter.generated.h"

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

	//Stored Variables

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stored Variables")
	float MaxHealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stored Variables")
	float CurrentHealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stored Variables")
	float MinDamage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stored Variables")
	float MaxDamage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stored Variables")
	float BaseAttack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stored Variables")
	float AttackBuff;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stored Variables")
	float BaseDamage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stored Variables")
	float DamageBuff;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stored Variables")
	float BaseDefense;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stored Variables")
	float DefenseBuff;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stored Variables")
	float BaseBlock;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stored Variables")
	float BlockBuff;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stored Variables")
	float BaseHeal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stored Variables")
	float HealBuff;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stored Variables")
	float DamageReduction;

	//Event to signal a hit attack
	UFUNCTION(BlueprintNativeEvent)
	void OnHitAttack();
	void OnHitAttack_Implementation();

	UFUNCTION(BlueprintNativeEvent)
	void OnHitMiss();
	void OnHitMiss_Implementation();

	UFUNCTION(BlueprintNativeEvent)
	void OnEndTurn();
	void OnEndTurn_Implementation();

	//Function to start this fighter's turn
	UFUNCTION(BlueprintCallable, Category="Stored Functions")
	void StartTurn();

	//Function to end this fighter's turn	
	UFUNCTION(BlueprintCallable, Category="Stored Functions")
	void EndTurn();

	UFUNCTION(BlueprintCallable, Category = "Stored Functions")
	void SendDamage(float Damage, AFighter *Target);

	UFUNCTION(BlueprintCallable, Category = "Stored Functions")
	virtual void ReceiveDamage(float Damage);

	UFUNCTION(BlueprintCallable, Category = "Stored Functions")
	virtual float GetDefense();

	UFUNCTION(BlueprintCallable, Category = "Stored Functions")
	virtual float RollDamage();

	UFUNCTION(BlueprintCallable, Category = "Stored Functions")
	virtual void Heal();

	UFUNCTION(BlueprintCallable, Category = "Stored Functions")
	virtual int RollToHit();

	UFUNCTION(BlueprintCallable, Category = "Stored Functions")
	virtual void AddBuff(float BuffAmount, const FString& Stat);

	UFUNCTION(BlueprintCallable, Category = "Stored Functions")
	virtual void RemoveBuff(float BuffAmount, const FString& Stat);

	UFUNCTION(BlueprintCallable, Category = "Stored Functions")
	virtual void Block();

	UFUNCTION(BlueprintCallable, Category = "Stored Functions")
	virtual void Attack(AFighter* Target);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
