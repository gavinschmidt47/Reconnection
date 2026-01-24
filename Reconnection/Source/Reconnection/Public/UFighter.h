// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UFighter.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStartTurn, UFighter*, Fighter);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHitAttack, UFighter*, Fighter);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHitMiss, UFighter*, Fighter);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEndTurn, UFighter*, Fighter);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDeath, UFighter*, Fighter);


UCLASS(Blueprintable, BlueprintType)
class RECONNECTION_API UFighter : public UActorComponent
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	UFighter();

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
	int32 MaxMovement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Buffs")
	float DamageBuff;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	float BaseAttack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Buffs")
	float AttackBuff;

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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Buffs")
	float HealBuff;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Buffs")
	float DamageReduction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Properties")
	FVector FighterPosition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Properties")
	FVector IntendedFighterPosition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Properties")
	int32 MovementLeft;

	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnStartTurn OnStartTurn;

	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnHitAttack OnHitAttack;

	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnHitMiss OnHitMiss;

	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnEndTurn OnEndTurn;

	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnDeath OnDeath;

	UFUNCTION(BlueprintCallable, Category="Turn Management")
	virtual void StartTurn();

	//Function to end this fighter's turn	
	UFUNCTION(BlueprintCallable, Category="Turn Management")
	virtual void EndTurn();

	UFUNCTION(BlueprintNativeEvent)
	void SendDamage(float Damage, UFighter *Target);
	void SendDamage_Implementation(float Damage, UFighter* Target);

	UFUNCTION(BlueprintNativeEvent)
	void ReceiveDamage(float Damage);
	void ReceiveDamage_Implementation(float Damage);

	UFUNCTION(BlueprintCallable, Category = "Defending")
	virtual float GetDefense();

	UFUNCTION(BlueprintCallable, Category = "Attacking")
	virtual float RollDamage();

	UFUNCTION(BlueprintCallable, Category = "Attacking")
	void CallHeal();

	UFUNCTION(BlueprintCallable, Category = "Attacking")
	void CallBlock();

	UFUNCTION(BlueprintNativeEvent)
	void Heal();
	void Heal_Implementation();

	UFUNCTION(BlueprintCallable, Category = "Attacking")
	virtual int RollToHit();

	UFUNCTION(BlueprintCallable, Category = "Attacking")
	virtual void AddBuff(float BuffAmount, const FString& Stat);

	UFUNCTION(BlueprintCallable, Category = "Attacking")
	virtual void RemoveBuff(float BuffAmount, const FString& Stat);

	UFUNCTION(BlueprintNativeEvent)
	void Block();
	void Block_Implementation();

	UFUNCTION(BlueprintCallable, Category = "Attacking")
	virtual void Attack(UFighter* Target);

	UFUNCTION(BlueprintNativeEvent)
	void Die();
	void Die_Implementation();

	UFUNCTION(BlueprintCallable, Category = "StatsManagement")
	TArray<float> GetAllStats();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
