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
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Turn Management")
	bool bIsTurn;

	//Initiative score for turn order
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Stats")
	int32 InitiativeScore;

	//Stored Variables

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	float MaxHealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	float CurrentHealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	float MinDamage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	float MaxDamage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	float BaseAttack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Buffs")
	float AttackBuff;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	float BaseDamage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Buffs")
	float DamageBuff;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	float BaseDefense;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Buffs")
	float DefenseBuff;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	float BaseBlock;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Buffs")
	float BlockBuff;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	float BaseHeal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BUffs")
	float HealBuff;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Buffs")
	float DamageReduction;

	UFUNCTION(BlueprintNativeEvent)
	void OnStartTurn();
	void OnStartTurn_Implementation();

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
	UFUNCTION(BlueprintCallable, Category="Turn Management")
	virtual void StartTurn();

	//Function to end this fighter's turn	
	UFUNCTION(BlueprintCallable, Category="Turn Management")
	virtual void EndTurn();

	UFUNCTION(BlueprintNativeEvent)
	void SendDamage(float Damage, AFighter *Target);
	void SendDamage_Implementation(float Damage, AFighter* Target);

	UFUNCTION(BlueprintNativeEvent)
	void ReceiveDamage(float Damage);
	void ReceiveDamage_Implementation(float Damage);

	UFUNCTION(BlueprintCallable, Category = "Defending")
	virtual float GetDefense();

	UFUNCTION(BlueprintCallable, Category = "Attacking")
	virtual float RollDamage();

	UFUNCTION(BlueprintCallable, Category = "Attacking")
	virtual void Heal();

	UFUNCTION(BlueprintCallable, Category = "Attacking")
	virtual int RollToHit();

	UFUNCTION(BlueprintCallable, Category = "Attacking")
	virtual void AddBuff(float BuffAmount, const FString& Stat);

	UFUNCTION(BlueprintCallable, Category = "Attacking")
	virtual void RemoveBuff(float BuffAmount, const FString& Stat);

	UFUNCTION(BlueprintCallable, Category = "Attacking")
	virtual void Block();

	UFUNCTION(BlueprintCallable, Category = "Attacking")
	virtual void Attack(AFighter* Target);

	UFUNCTION(BlueprintCallable, Category = "Defending")
	virtual void Die();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
