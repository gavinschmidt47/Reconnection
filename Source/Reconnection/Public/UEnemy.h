// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UFighter.h"

UENUM(BlueprintType)
enum class EWeaponType : uint8
{
	Melee UMETA(DisplayName = "Melee"),
	Ranged UMETA(DisplayName = "Ranged"),
	Magic UMETA(DisplayName = "Magic")
};

#include "UEnemy.generated.h"

UCLASS(ClassGroup = (Fighters), meta = (BlueprintSpawnableComponent))
class RECONNECTION_API UEnemy : public UFighter
{
	GENERATED_BODY()
	
public:
	virtual void StartTurn() override;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Enemy|Combat")
	void ChooseAction();
	virtual void ChooseAction_Implementation();

	UFUNCTION(BlueprintCallable, Category = "Enemy|Setup")
	void InitializeEnemy(const TArray<UFighter*>& AllFighters);
	UFUNCTION(BlueprintCallable, Category = "Enemy|Setup")
	void UpdateAlliesAndEnemies(const TArray<UFighter*>& AllFighters);
	UFUNCTION(BlueprintCallable, Category = "Enemy|Setup")
	void OnFighterListChanged(UFighter* ChangedFighter);

	virtual void ReceiveDamage(float Damage) override;

	UFUNCTION(BlueprintCallable, Category = "Enemy|Utility")
	float GetAttackUtility();
	UFUNCTION(BlueprintCallable, Category = "Enemy|Utility")
	float GetMeleeUtility();
	UFUNCTION(BlueprintCallable, Category = "Enemy|Utility")
	float GetRangedUtility();
	UFUNCTION(BlueprintCallable, Category = "Enemy|Utility")
	float GetMagicUtility();
	UFUNCTION(BlueprintCallable, Category = "Enemy|Utility")
	float GetSelfHealUtility();
	UFUNCTION(BlueprintCallable, Category = "Enemy|Utility")
	float GetAllyHealUtility();
	UFUNCTION(BlueprintCallable, Category = "Enemy|Utility")
	float GetBlockUtility();
	UFUNCTION(BlueprintCallable, Category = "Enemy|Utility")
	float GetBuffUtility();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Enemy|Utility|Weight")
	float AttackUtilityWeight;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Enemy|Utility|Weight")
	bool bHasMelee;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Enemy|Utility|Weight")
	bool bHasRanged;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Enemy|Utility|Weight")
	bool bHasMagic;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Enemy|Utility|Weight")
	float HealUtilityWeight;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Enemy|Utility|Weight")
	bool bHasSelfHeal;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Enemy|Utility|Weight")
	bool bHasAllyHeal;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Enemy|Utility|Weight")
	float BuffUtilityWeight;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Enemy|Utility|Weight")
	bool bHasBuff;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Enemy|Utility|Weight")
	float BlockUtilityWeight;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Enemy|Utility|Weight")
	bool bHasBlock;

	// Buff action config — which stat the enemy buffs and by how much
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Enemy|Utility|Weight")
	EStats EnemyBuffStat = EStats::Damage;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Enemy|Utility|Weight")
	float EnemyBuffAmount = 20.0f;

	UFUNCTION(BlueprintCallable, Category = "Enemy|StorageAccess")
	UFighter* GetClosestEnemy();
	UFUNCTION(BlueprintCallable, Category = "Enemy|StorageAccess")
	UFighter* GetLowestAlly();

private:
	UPROPERTY()
	TArray<UFighter*> Allies;

	UPROPERTY()
	float LastDamageReceived;

	// Current weapon type for this enemy
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy|Weapon", meta = (AllowPrivateAccess = "true"))
	EWeaponType CurrentWeaponType = EWeaponType::Melee;

	UPROPERTY()
	TArray<UFighter*> Enemies;

	UPROPERTY()
	int ClosestEnemyIndex;

	UPROPERTY()
	int LowestAllyIndex;
};
