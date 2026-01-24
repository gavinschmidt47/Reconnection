// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UFighter.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStartTurn, class UFighter*, Fighter);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEndTurn, class UFighter*, Fighter);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDeath, class UFighter*, Fighter);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHitAttack, class UFighter*, Target);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHitMiss, class UFighter*, Target);

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class RECONNECTION_API UFighter : public UActorComponent
{
	GENERATED_BODY()

public:
	UFighter();

protected:
	virtual void BeginPlay() override;

public:
	// Turn State
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Fighter|Turn")
	bool bIsTurn;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Fighter|Turn")
	float InitiativeScore;

	// Movement
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Fighter|Movement")
	float MaxMovement;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Fighter|Movement")
	float MovementLeft;

	// Health
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Fighter|Health")
	float MaxHealth;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Fighter|Health")
	float CurrentHealth;

	// Damage
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Fighter|Damage")
	float MinDamage;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Fighter|Damage")
	float MaxDamage;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Fighter|Damage")
	float DamageBuff;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Fighter|Damage")
	float DamageReduction;

	// Attack
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Fighter|Attack")
	float BaseAttack;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Fighter|Attack")
	float AttackBuff;

	// Defense
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Fighter|Defense")
	float BaseDefense;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Fighter|Defense")
	float DefenseBuff;

	// Block
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Fighter|Block")
	float BaseBlock;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Fighter|Block")
	float BlockBuff;

	// Heal
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Fighter|Heal")
	float BaseHeal;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Fighter|Heal")
	float HealBuff;

	// Events
	UPROPERTY(BlueprintAssignable, Category = "Fighter|Events")
	FOnStartTurn OnStartTurn;

	UPROPERTY(BlueprintAssignable, Category = "Fighter|Events")
	FOnEndTurn OnEndTurn;

	UPROPERTY(BlueprintAssignable, Category = "Fighter|Events")
	FOnDeath OnDeath;

	UPROPERTY(BlueprintAssignable, Category = "Fighter|Events")
	FOnHitAttack OnHitAttack;

	UPROPERTY(BlueprintAssignable, Category = "Fighter|Events")
	FOnHitMiss OnHitMiss;

	// Functions
	UFUNCTION(BlueprintCallable, Category = "Fighter|Turn")
	virtual void StartTurn();

	UFUNCTION(BlueprintCallable, Category = "Fighter|Turn")
	virtual void EndTurn();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Fighter|Combat")
	void SendDamage(float Damage, UFighter* Target);
	virtual void SendDamage_Implementation(float Damage, UFighter* Target);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Fighter|Combat")
	void ReceiveDamage(float Damage);
	virtual void ReceiveDamage_Implementation(float Damage);

	UFUNCTION(BlueprintCallable, Category = "Fighter|Combat")
	float GetDefense();

	UFUNCTION(BlueprintCallable, Category = "Fighter|Combat")
	float RollDamage();

	UFUNCTION(BlueprintCallable, Category = "Fighter|Combat")
	int RollToHit();

	UFUNCTION(BlueprintCallable, Category = "Fighter|Combat")
	void Attack(UFighter* Target);

	UFUNCTION(BlueprintCallable, Category = "Fighter|Actions")
	void CallHeal();

	UFUNCTION(BlueprintCallable, Category = "Fighter|Actions")
	void CallBlock();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Fighter|Actions")
	void Heal();
	virtual void Heal_Implementation();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Fighter|Actions")
	void Block();
	virtual void Block_Implementation();

	UFUNCTION(BlueprintCallable, Category = "Fighter|Buffs")
	void AddBuff(float BuffAmount, const FString& stat);

	UFUNCTION(BlueprintCallable, Category = "Fighter|Buffs")
	void RemoveBuff(float BuffAmount, const FString& stat);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Fighter|Combat")
	void Die();
	virtual void Die_Implementation();

	UFUNCTION(BlueprintCallable, Category = "Fighter|Stats")
	TArray<float> GetAllStats();
};