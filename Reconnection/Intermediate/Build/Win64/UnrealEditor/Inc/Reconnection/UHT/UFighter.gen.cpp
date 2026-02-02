// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UFighter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUFighter() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
RECONNECTION_API UClass* Z_Construct_UClass_UFighter();
RECONNECTION_API UClass* Z_Construct_UClass_UFighter_NoRegister();
RECONNECTION_API UFunction* Z_Construct_UDelegateFunction_Reconnection_OnDeath__DelegateSignature();
RECONNECTION_API UFunction* Z_Construct_UDelegateFunction_Reconnection_OnEndTurn__DelegateSignature();
RECONNECTION_API UFunction* Z_Construct_UDelegateFunction_Reconnection_OnHitAttack__DelegateSignature();
RECONNECTION_API UFunction* Z_Construct_UDelegateFunction_Reconnection_OnHitMiss__DelegateSignature();
RECONNECTION_API UFunction* Z_Construct_UDelegateFunction_Reconnection_OnStartTurn__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_Reconnection();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnStartTurn **********************************************************
struct Z_Construct_UDelegateFunction_Reconnection_OnStartTurn__DelegateSignature_Statics
{
	struct _Script_Reconnection_eventOnStartTurn_Parms
	{
		UFighter* Fighter;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UFighter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fighter_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Fighter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Reconnection_OnStartTurn__DelegateSignature_Statics::NewProp_Fighter = { "Fighter", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Reconnection_eventOnStartTurn_Parms, Fighter), Z_Construct_UClass_UFighter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fighter_MetaData), NewProp_Fighter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Reconnection_OnStartTurn__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Reconnection_OnStartTurn__DelegateSignature_Statics::NewProp_Fighter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Reconnection_OnStartTurn__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Reconnection_OnStartTurn__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Reconnection, nullptr, "OnStartTurn__DelegateSignature", Z_Construct_UDelegateFunction_Reconnection_OnStartTurn__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Reconnection_OnStartTurn__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Reconnection_OnStartTurn__DelegateSignature_Statics::_Script_Reconnection_eventOnStartTurn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Reconnection_OnStartTurn__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Reconnection_OnStartTurn__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Reconnection_OnStartTurn__DelegateSignature_Statics::_Script_Reconnection_eventOnStartTurn_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Reconnection_OnStartTurn__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Reconnection_OnStartTurn__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnStartTurn_DelegateWrapper(const FMulticastScriptDelegate& OnStartTurn, UFighter* Fighter)
{
	struct _Script_Reconnection_eventOnStartTurn_Parms
	{
		UFighter* Fighter;
	};
	_Script_Reconnection_eventOnStartTurn_Parms Parms;
	Parms.Fighter=Fighter;
	OnStartTurn.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnStartTurn ************************************************************

// ********** Begin Delegate FOnEndTurn ************************************************************
struct Z_Construct_UDelegateFunction_Reconnection_OnEndTurn__DelegateSignature_Statics
{
	struct _Script_Reconnection_eventOnEndTurn_Parms
	{
		UFighter* Fighter;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UFighter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fighter_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Fighter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Reconnection_OnEndTurn__DelegateSignature_Statics::NewProp_Fighter = { "Fighter", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Reconnection_eventOnEndTurn_Parms, Fighter), Z_Construct_UClass_UFighter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fighter_MetaData), NewProp_Fighter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Reconnection_OnEndTurn__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Reconnection_OnEndTurn__DelegateSignature_Statics::NewProp_Fighter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Reconnection_OnEndTurn__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Reconnection_OnEndTurn__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Reconnection, nullptr, "OnEndTurn__DelegateSignature", Z_Construct_UDelegateFunction_Reconnection_OnEndTurn__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Reconnection_OnEndTurn__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Reconnection_OnEndTurn__DelegateSignature_Statics::_Script_Reconnection_eventOnEndTurn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Reconnection_OnEndTurn__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Reconnection_OnEndTurn__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Reconnection_OnEndTurn__DelegateSignature_Statics::_Script_Reconnection_eventOnEndTurn_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Reconnection_OnEndTurn__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Reconnection_OnEndTurn__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnEndTurn_DelegateWrapper(const FMulticastScriptDelegate& OnEndTurn, UFighter* Fighter)
{
	struct _Script_Reconnection_eventOnEndTurn_Parms
	{
		UFighter* Fighter;
	};
	_Script_Reconnection_eventOnEndTurn_Parms Parms;
	Parms.Fighter=Fighter;
	OnEndTurn.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnEndTurn **************************************************************

// ********** Begin Delegate FOnDeath **************************************************************
struct Z_Construct_UDelegateFunction_Reconnection_OnDeath__DelegateSignature_Statics
{
	struct _Script_Reconnection_eventOnDeath_Parms
	{
		UFighter* Fighter;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UFighter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fighter_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Fighter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Reconnection_OnDeath__DelegateSignature_Statics::NewProp_Fighter = { "Fighter", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Reconnection_eventOnDeath_Parms, Fighter), Z_Construct_UClass_UFighter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fighter_MetaData), NewProp_Fighter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Reconnection_OnDeath__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Reconnection_OnDeath__DelegateSignature_Statics::NewProp_Fighter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Reconnection_OnDeath__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Reconnection_OnDeath__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Reconnection, nullptr, "OnDeath__DelegateSignature", Z_Construct_UDelegateFunction_Reconnection_OnDeath__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Reconnection_OnDeath__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Reconnection_OnDeath__DelegateSignature_Statics::_Script_Reconnection_eventOnDeath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Reconnection_OnDeath__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Reconnection_OnDeath__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Reconnection_OnDeath__DelegateSignature_Statics::_Script_Reconnection_eventOnDeath_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Reconnection_OnDeath__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Reconnection_OnDeath__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDeath_DelegateWrapper(const FMulticastScriptDelegate& OnDeath, UFighter* Fighter)
{
	struct _Script_Reconnection_eventOnDeath_Parms
	{
		UFighter* Fighter;
	};
	_Script_Reconnection_eventOnDeath_Parms Parms;
	Parms.Fighter=Fighter;
	OnDeath.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnDeath ****************************************************************

// ********** Begin Delegate FOnHitAttack **********************************************************
struct Z_Construct_UDelegateFunction_Reconnection_OnHitAttack__DelegateSignature_Statics
{
	struct _Script_Reconnection_eventOnHitAttack_Parms
	{
		UFighter* Target;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UFighter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Reconnection_OnHitAttack__DelegateSignature_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Reconnection_eventOnHitAttack_Parms, Target), Z_Construct_UClass_UFighter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Reconnection_OnHitAttack__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Reconnection_OnHitAttack__DelegateSignature_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Reconnection_OnHitAttack__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Reconnection_OnHitAttack__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Reconnection, nullptr, "OnHitAttack__DelegateSignature", Z_Construct_UDelegateFunction_Reconnection_OnHitAttack__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Reconnection_OnHitAttack__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Reconnection_OnHitAttack__DelegateSignature_Statics::_Script_Reconnection_eventOnHitAttack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Reconnection_OnHitAttack__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Reconnection_OnHitAttack__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Reconnection_OnHitAttack__DelegateSignature_Statics::_Script_Reconnection_eventOnHitAttack_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Reconnection_OnHitAttack__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Reconnection_OnHitAttack__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnHitAttack_DelegateWrapper(const FMulticastScriptDelegate& OnHitAttack, UFighter* Target)
{
	struct _Script_Reconnection_eventOnHitAttack_Parms
	{
		UFighter* Target;
	};
	_Script_Reconnection_eventOnHitAttack_Parms Parms;
	Parms.Target=Target;
	OnHitAttack.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnHitAttack ************************************************************

// ********** Begin Delegate FOnHitMiss ************************************************************
struct Z_Construct_UDelegateFunction_Reconnection_OnHitMiss__DelegateSignature_Statics
{
	struct _Script_Reconnection_eventOnHitMiss_Parms
	{
		UFighter* Target;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UFighter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Reconnection_OnHitMiss__DelegateSignature_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Reconnection_eventOnHitMiss_Parms, Target), Z_Construct_UClass_UFighter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Reconnection_OnHitMiss__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Reconnection_OnHitMiss__DelegateSignature_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Reconnection_OnHitMiss__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Reconnection_OnHitMiss__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Reconnection, nullptr, "OnHitMiss__DelegateSignature", Z_Construct_UDelegateFunction_Reconnection_OnHitMiss__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Reconnection_OnHitMiss__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Reconnection_OnHitMiss__DelegateSignature_Statics::_Script_Reconnection_eventOnHitMiss_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Reconnection_OnHitMiss__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Reconnection_OnHitMiss__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Reconnection_OnHitMiss__DelegateSignature_Statics::_Script_Reconnection_eventOnHitMiss_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Reconnection_OnHitMiss__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Reconnection_OnHitMiss__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnHitMiss_DelegateWrapper(const FMulticastScriptDelegate& OnHitMiss, UFighter* Target)
{
	struct _Script_Reconnection_eventOnHitMiss_Parms
	{
		UFighter* Target;
	};
	_Script_Reconnection_eventOnHitMiss_Parms Parms;
	Parms.Target=Target;
	OnHitMiss.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnHitMiss **************************************************************

// ********** Begin Class UFighter Function AddBuff ************************************************
struct Z_Construct_UFunction_UFighter_AddBuff_Statics
{
	struct Fighter_eventAddBuff_Parms
	{
		float BuffAmount;
		FString stat;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fighter|Buffs" },
		{ "ModuleRelativePath", "Public/UFighter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_stat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BuffAmount;
	static const UECodeGen_Private::FStrPropertyParams NewProp_stat;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFighter_AddBuff_Statics::NewProp_BuffAmount = { "BuffAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Fighter_eventAddBuff_Parms, BuffAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFighter_AddBuff_Statics::NewProp_stat = { "stat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Fighter_eventAddBuff_Parms, stat), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_stat_MetaData), NewProp_stat_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFighter_AddBuff_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFighter_AddBuff_Statics::NewProp_BuffAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFighter_AddBuff_Statics::NewProp_stat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFighter_AddBuff_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFighter_AddBuff_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFighter, nullptr, "AddBuff", Z_Construct_UFunction_UFighter_AddBuff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFighter_AddBuff_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFighter_AddBuff_Statics::Fighter_eventAddBuff_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFighter_AddBuff_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFighter_AddBuff_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFighter_AddBuff_Statics::Fighter_eventAddBuff_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFighter_AddBuff()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFighter_AddBuff_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFighter::execAddBuff)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_BuffAmount);
	P_GET_PROPERTY(FStrProperty,Z_Param_stat);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddBuff(Z_Param_BuffAmount,Z_Param_stat);
	P_NATIVE_END;
}
// ********** End Class UFighter Function AddBuff **************************************************

// ********** Begin Class UFighter Function Attack *************************************************
struct Z_Construct_UFunction_UFighter_Attack_Statics
{
	struct Fighter_eventAttack_Parms
	{
		UFighter* Target;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fighter|Combat" },
		{ "ModuleRelativePath", "Public/UFighter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFighter_Attack_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Fighter_eventAttack_Parms, Target), Z_Construct_UClass_UFighter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFighter_Attack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFighter_Attack_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFighter_Attack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFighter_Attack_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFighter, nullptr, "Attack", Z_Construct_UFunction_UFighter_Attack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFighter_Attack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFighter_Attack_Statics::Fighter_eventAttack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFighter_Attack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFighter_Attack_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFighter_Attack_Statics::Fighter_eventAttack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFighter_Attack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFighter_Attack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFighter::execAttack)
{
	P_GET_OBJECT(UFighter,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Attack(Z_Param_Target);
	P_NATIVE_END;
}
// ********** End Class UFighter Function Attack ***************************************************

// ********** Begin Class UFighter Function Block **************************************************
static FName NAME_UFighter_Block = FName(TEXT("Block"));
void UFighter::Block()
{
	UFunction* Func = FindFunctionChecked(NAME_UFighter_Block);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		Block_Implementation();
	}
}
struct Z_Construct_UFunction_UFighter_Block_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fighter|Actions" },
		{ "ModuleRelativePath", "Public/UFighter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFighter_Block_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFighter, nullptr, "Block", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFighter_Block_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFighter_Block_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UFighter_Block()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFighter_Block_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFighter::execBlock)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Block_Implementation();
	P_NATIVE_END;
}
// ********** End Class UFighter Function Block ****************************************************

// ********** Begin Class UFighter Function CallBlock **********************************************
struct Z_Construct_UFunction_UFighter_CallBlock_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fighter|Actions" },
		{ "ModuleRelativePath", "Public/UFighter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFighter_CallBlock_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFighter, nullptr, "CallBlock", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFighter_CallBlock_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFighter_CallBlock_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UFighter_CallBlock()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFighter_CallBlock_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFighter::execCallBlock)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CallBlock();
	P_NATIVE_END;
}
// ********** End Class UFighter Function CallBlock ************************************************

// ********** Begin Class UFighter Function CallHeal ***********************************************
struct Z_Construct_UFunction_UFighter_CallHeal_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fighter|Actions" },
		{ "ModuleRelativePath", "Public/UFighter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFighter_CallHeal_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFighter, nullptr, "CallHeal", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFighter_CallHeal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFighter_CallHeal_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UFighter_CallHeal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFighter_CallHeal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFighter::execCallHeal)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CallHeal();
	P_NATIVE_END;
}
// ********** End Class UFighter Function CallHeal *************************************************

// ********** Begin Class UFighter Function Die ****************************************************
static FName NAME_UFighter_Die = FName(TEXT("Die"));
void UFighter::Die()
{
	UFunction* Func = FindFunctionChecked(NAME_UFighter_Die);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		Die_Implementation();
	}
}
struct Z_Construct_UFunction_UFighter_Die_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fighter|Combat" },
		{ "ModuleRelativePath", "Public/UFighter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFighter_Die_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFighter, nullptr, "Die", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFighter_Die_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFighter_Die_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UFighter_Die()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFighter_Die_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFighter::execDie)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Die_Implementation();
	P_NATIVE_END;
}
// ********** End Class UFighter Function Die ******************************************************

// ********** Begin Class UFighter Function EndTurn ************************************************
struct Z_Construct_UFunction_UFighter_EndTurn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fighter|Turn" },
		{ "ModuleRelativePath", "Public/UFighter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFighter_EndTurn_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFighter, nullptr, "EndTurn", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFighter_EndTurn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFighter_EndTurn_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UFighter_EndTurn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFighter_EndTurn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFighter::execEndTurn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndTurn();
	P_NATIVE_END;
}
// ********** End Class UFighter Function EndTurn **************************************************

// ********** Begin Class UFighter Function GetAllStats ********************************************
struct Z_Construct_UFunction_UFighter_GetAllStats_Statics
{
	struct Fighter_eventGetAllStats_Parms
	{
		TArray<float> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fighter|Stats" },
		{ "ModuleRelativePath", "Public/UFighter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFighter_GetAllStats_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFighter_GetAllStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Fighter_eventGetAllStats_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFighter_GetAllStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFighter_GetAllStats_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFighter_GetAllStats_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFighter_GetAllStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFighter_GetAllStats_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFighter, nullptr, "GetAllStats", Z_Construct_UFunction_UFighter_GetAllStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFighter_GetAllStats_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFighter_GetAllStats_Statics::Fighter_eventGetAllStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFighter_GetAllStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFighter_GetAllStats_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFighter_GetAllStats_Statics::Fighter_eventGetAllStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFighter_GetAllStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFighter_GetAllStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFighter::execGetAllStats)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<float>*)Z_Param__Result=P_THIS->GetAllStats();
	P_NATIVE_END;
}
// ********** End Class UFighter Function GetAllStats **********************************************

// ********** Begin Class UFighter Function GetDefense *********************************************
struct Z_Construct_UFunction_UFighter_GetDefense_Statics
{
	struct Fighter_eventGetDefense_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fighter|Combat" },
		{ "ModuleRelativePath", "Public/UFighter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFighter_GetDefense_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Fighter_eventGetDefense_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFighter_GetDefense_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFighter_GetDefense_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFighter_GetDefense_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFighter_GetDefense_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFighter, nullptr, "GetDefense", Z_Construct_UFunction_UFighter_GetDefense_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFighter_GetDefense_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFighter_GetDefense_Statics::Fighter_eventGetDefense_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFighter_GetDefense_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFighter_GetDefense_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFighter_GetDefense_Statics::Fighter_eventGetDefense_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFighter_GetDefense()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFighter_GetDefense_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFighter::execGetDefense)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDefense();
	P_NATIVE_END;
}
// ********** End Class UFighter Function GetDefense ***********************************************

// ********** Begin Class UFighter Function Heal ***************************************************
static FName NAME_UFighter_Heal = FName(TEXT("Heal"));
void UFighter::Heal()
{
	UFunction* Func = FindFunctionChecked(NAME_UFighter_Heal);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		Heal_Implementation();
	}
}
struct Z_Construct_UFunction_UFighter_Heal_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fighter|Actions" },
		{ "ModuleRelativePath", "Public/UFighter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFighter_Heal_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFighter, nullptr, "Heal", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFighter_Heal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFighter_Heal_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UFighter_Heal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFighter_Heal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFighter::execHeal)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Heal_Implementation();
	P_NATIVE_END;
}
// ********** End Class UFighter Function Heal *****************************************************

// ********** Begin Class UFighter Function ReceiveDamage ******************************************
struct Fighter_eventReceiveDamage_Parms
{
	float Damage;
};
static FName NAME_UFighter_ReceiveDamage = FName(TEXT("ReceiveDamage"));
void UFighter::ReceiveDamage(float Damage)
{
	UFunction* Func = FindFunctionChecked(NAME_UFighter_ReceiveDamage);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		Fighter_eventReceiveDamage_Parms Parms;
		Parms.Damage=Damage;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		ReceiveDamage_Implementation(Damage);
	}
}
struct Z_Construct_UFunction_UFighter_ReceiveDamage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fighter|Combat" },
		{ "ModuleRelativePath", "Public/UFighter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFighter_ReceiveDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Fighter_eventReceiveDamage_Parms, Damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFighter_ReceiveDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFighter_ReceiveDamage_Statics::NewProp_Damage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFighter_ReceiveDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFighter_ReceiveDamage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFighter, nullptr, "ReceiveDamage", Z_Construct_UFunction_UFighter_ReceiveDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFighter_ReceiveDamage_Statics::PropPointers), sizeof(Fighter_eventReceiveDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFighter_ReceiveDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFighter_ReceiveDamage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Fighter_eventReceiveDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFighter_ReceiveDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFighter_ReceiveDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFighter::execReceiveDamage)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReceiveDamage_Implementation(Z_Param_Damage);
	P_NATIVE_END;
}
// ********** End Class UFighter Function ReceiveDamage ********************************************

// ********** Begin Class UFighter Function RemoveBuff *********************************************
struct Z_Construct_UFunction_UFighter_RemoveBuff_Statics
{
	struct Fighter_eventRemoveBuff_Parms
	{
		float BuffAmount;
		FString stat;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fighter|Buffs" },
		{ "ModuleRelativePath", "Public/UFighter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_stat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BuffAmount;
	static const UECodeGen_Private::FStrPropertyParams NewProp_stat;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFighter_RemoveBuff_Statics::NewProp_BuffAmount = { "BuffAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Fighter_eventRemoveBuff_Parms, BuffAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFighter_RemoveBuff_Statics::NewProp_stat = { "stat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Fighter_eventRemoveBuff_Parms, stat), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_stat_MetaData), NewProp_stat_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFighter_RemoveBuff_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFighter_RemoveBuff_Statics::NewProp_BuffAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFighter_RemoveBuff_Statics::NewProp_stat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFighter_RemoveBuff_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFighter_RemoveBuff_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFighter, nullptr, "RemoveBuff", Z_Construct_UFunction_UFighter_RemoveBuff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFighter_RemoveBuff_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFighter_RemoveBuff_Statics::Fighter_eventRemoveBuff_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFighter_RemoveBuff_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFighter_RemoveBuff_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFighter_RemoveBuff_Statics::Fighter_eventRemoveBuff_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFighter_RemoveBuff()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFighter_RemoveBuff_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFighter::execRemoveBuff)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_BuffAmount);
	P_GET_PROPERTY(FStrProperty,Z_Param_stat);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveBuff(Z_Param_BuffAmount,Z_Param_stat);
	P_NATIVE_END;
}
// ********** End Class UFighter Function RemoveBuff ***********************************************

// ********** Begin Class UFighter Function RollDamage *********************************************
struct Z_Construct_UFunction_UFighter_RollDamage_Statics
{
	struct Fighter_eventRollDamage_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fighter|Combat" },
		{ "ModuleRelativePath", "Public/UFighter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFighter_RollDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Fighter_eventRollDamage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFighter_RollDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFighter_RollDamage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFighter_RollDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFighter_RollDamage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFighter, nullptr, "RollDamage", Z_Construct_UFunction_UFighter_RollDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFighter_RollDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFighter_RollDamage_Statics::Fighter_eventRollDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFighter_RollDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFighter_RollDamage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFighter_RollDamage_Statics::Fighter_eventRollDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFighter_RollDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFighter_RollDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFighter::execRollDamage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->RollDamage();
	P_NATIVE_END;
}
// ********** End Class UFighter Function RollDamage ***********************************************

// ********** Begin Class UFighter Function RollToHit **********************************************
struct Z_Construct_UFunction_UFighter_RollToHit_Statics
{
	struct Fighter_eventRollToHit_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fighter|Combat" },
		{ "ModuleRelativePath", "Public/UFighter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFighter_RollToHit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Fighter_eventRollToHit_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFighter_RollToHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFighter_RollToHit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFighter_RollToHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFighter_RollToHit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFighter, nullptr, "RollToHit", Z_Construct_UFunction_UFighter_RollToHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFighter_RollToHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFighter_RollToHit_Statics::Fighter_eventRollToHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFighter_RollToHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFighter_RollToHit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFighter_RollToHit_Statics::Fighter_eventRollToHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFighter_RollToHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFighter_RollToHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFighter::execRollToHit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->RollToHit();
	P_NATIVE_END;
}
// ********** End Class UFighter Function RollToHit ************************************************

// ********** Begin Class UFighter Function SendDamage *********************************************
struct Fighter_eventSendDamage_Parms
{
	float Damage;
	UFighter* Target;
};
static FName NAME_UFighter_SendDamage = FName(TEXT("SendDamage"));
void UFighter::SendDamage(float Damage, UFighter* Target)
{
	UFunction* Func = FindFunctionChecked(NAME_UFighter_SendDamage);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		Fighter_eventSendDamage_Parms Parms;
		Parms.Damage=Damage;
		Parms.Target=Target;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		SendDamage_Implementation(Damage, Target);
	}
}
struct Z_Construct_UFunction_UFighter_SendDamage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fighter|Combat" },
		{ "ModuleRelativePath", "Public/UFighter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFighter_SendDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Fighter_eventSendDamage_Parms, Damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFighter_SendDamage_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Fighter_eventSendDamage_Parms, Target), Z_Construct_UClass_UFighter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFighter_SendDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFighter_SendDamage_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFighter_SendDamage_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFighter_SendDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFighter_SendDamage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFighter, nullptr, "SendDamage", Z_Construct_UFunction_UFighter_SendDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFighter_SendDamage_Statics::PropPointers), sizeof(Fighter_eventSendDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFighter_SendDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFighter_SendDamage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Fighter_eventSendDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFighter_SendDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFighter_SendDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFighter::execSendDamage)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
	P_GET_OBJECT(UFighter,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendDamage_Implementation(Z_Param_Damage,Z_Param_Target);
	P_NATIVE_END;
}
// ********** End Class UFighter Function SendDamage ***********************************************

// ********** Begin Class UFighter Function StartTurn **********************************************
struct Z_Construct_UFunction_UFighter_StartTurn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fighter|Turn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Functions\n" },
#endif
		{ "ModuleRelativePath", "Public/UFighter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFighter_StartTurn_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFighter, nullptr, "StartTurn", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFighter_StartTurn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFighter_StartTurn_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UFighter_StartTurn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFighter_StartTurn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFighter::execStartTurn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartTurn();
	P_NATIVE_END;
}
// ********** End Class UFighter Function StartTurn ************************************************

// ********** Begin Class UFighter *****************************************************************
void UFighter::StaticRegisterNativesUFighter()
{
	UClass* Class = UFighter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddBuff", &UFighter::execAddBuff },
		{ "Attack", &UFighter::execAttack },
		{ "Block", &UFighter::execBlock },
		{ "CallBlock", &UFighter::execCallBlock },
		{ "CallHeal", &UFighter::execCallHeal },
		{ "Die", &UFighter::execDie },
		{ "EndTurn", &UFighter::execEndTurn },
		{ "GetAllStats", &UFighter::execGetAllStats },
		{ "GetDefense", &UFighter::execGetDefense },
		{ "Heal", &UFighter::execHeal },
		{ "ReceiveDamage", &UFighter::execReceiveDamage },
		{ "RemoveBuff", &UFighter::execRemoveBuff },
		{ "RollDamage", &UFighter::execRollDamage },
		{ "RollToHit", &UFighter::execRollToHit },
		{ "SendDamage", &UFighter::execSendDamage },
		{ "StartTurn", &UFighter::execStartTurn },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UFighter;
UClass* UFighter::GetPrivateStaticClass()
{
	using TClass = UFighter;
	if (!Z_Registration_Info_UClass_UFighter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Fighter"),
			Z_Registration_Info_UClass_UFighter.InnerSingleton,
			StaticRegisterNativesUFighter,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UFighter.InnerSingleton;
}
UClass* Z_Construct_UClass_UFighter_NoRegister()
{
	return UFighter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFighter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "UFighter.h" },
		{ "ModuleRelativePath", "Public/UFighter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsTurn_MetaData[] = {
		{ "Category", "Fighter|Turn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Turn State\n" },
#endif
		{ "ModuleRelativePath", "Public/UFighter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Turn State" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitiativeScore_MetaData[] = {
		{ "Category", "Fighter|Turn" },
		{ "ModuleRelativePath", "Public/UFighter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxMovement_MetaData[] = {
		{ "Category", "Fighter|Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Movement\n" },
#endif
		{ "ModuleRelativePath", "Public/UFighter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Movement" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementLeft_MetaData[] = {
		{ "Category", "Fighter|Movement" },
		{ "ModuleRelativePath", "Public/UFighter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Fighter|Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Health\n" },
#endif
		{ "ModuleRelativePath", "Public/UFighter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Health" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "Fighter|Health" },
		{ "ModuleRelativePath", "Public/UFighter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinDamage_MetaData[] = {
		{ "Category", "Fighter|Damage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Damage\n" },
#endif
		{ "ModuleRelativePath", "Public/UFighter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Damage" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDamage_MetaData[] = {
		{ "Category", "Fighter|Damage" },
		{ "ModuleRelativePath", "Public/UFighter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageBuff_MetaData[] = {
		{ "Category", "Fighter|Damage" },
		{ "ModuleRelativePath", "Public/UFighter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageReduction_MetaData[] = {
		{ "Category", "Fighter|Damage" },
		{ "ModuleRelativePath", "Public/UFighter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseAttack_MetaData[] = {
		{ "Category", "Fighter|Attack" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Attack\n" },
#endif
		{ "ModuleRelativePath", "Public/UFighter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attack" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackBuff_MetaData[] = {
		{ "Category", "Fighter|Attack" },
		{ "ModuleRelativePath", "Public/UFighter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseDefense_MetaData[] = {
		{ "Category", "Fighter|Defense" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Defense\n" },
#endif
		{ "ModuleRelativePath", "Public/UFighter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defense" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefenseBuff_MetaData[] = {
		{ "Category", "Fighter|Defense" },
		{ "ModuleRelativePath", "Public/UFighter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseBlock_MetaData[] = {
		{ "Category", "Fighter|Block" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Block\n" },
#endif
		{ "ModuleRelativePath", "Public/UFighter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Block" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockBuff_MetaData[] = {
		{ "Category", "Fighter|Block" },
		{ "ModuleRelativePath", "Public/UFighter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseHeal_MetaData[] = {
		{ "Category", "Fighter|Heal" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Heal\n" },
#endif
		{ "ModuleRelativePath", "Public/UFighter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Heal" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealBuff_MetaData[] = {
		{ "Category", "Fighter|Heal" },
		{ "ModuleRelativePath", "Public/UFighter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStartTurn_MetaData[] = {
		{ "Category", "Fighter|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Events\n" },
#endif
		{ "ModuleRelativePath", "Public/UFighter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Events" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnEndTurn_MetaData[] = {
		{ "Category", "Fighter|Events" },
		{ "ModuleRelativePath", "Public/UFighter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDeath_MetaData[] = {
		{ "Category", "Fighter|Events" },
		{ "ModuleRelativePath", "Public/UFighter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHitAttack_MetaData[] = {
		{ "Category", "Fighter|Events" },
		{ "ModuleRelativePath", "Public/UFighter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHitMiss_MetaData[] = {
		{ "Category", "Fighter|Events" },
		{ "ModuleRelativePath", "Public/UFighter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsTurn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTurn;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InitiativeScore;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxMovement;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementLeft;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageBuff;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageReduction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseAttack;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackBuff;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseDefense;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefenseBuff;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseBlock;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlockBuff;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseHeal;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HealBuff;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStartTurn;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEndTurn;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDeath;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHitAttack;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHitMiss;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFighter_AddBuff, "AddBuff" }, // 774337488
		{ &Z_Construct_UFunction_UFighter_Attack, "Attack" }, // 2520822920
		{ &Z_Construct_UFunction_UFighter_Block, "Block" }, // 2380559032
		{ &Z_Construct_UFunction_UFighter_CallBlock, "CallBlock" }, // 1957357211
		{ &Z_Construct_UFunction_UFighter_CallHeal, "CallHeal" }, // 1288248084
		{ &Z_Construct_UFunction_UFighter_Die, "Die" }, // 632315012
		{ &Z_Construct_UFunction_UFighter_EndTurn, "EndTurn" }, // 1459744166
		{ &Z_Construct_UFunction_UFighter_GetAllStats, "GetAllStats" }, // 1088567788
		{ &Z_Construct_UFunction_UFighter_GetDefense, "GetDefense" }, // 2178232587
		{ &Z_Construct_UFunction_UFighter_Heal, "Heal" }, // 264148293
		{ &Z_Construct_UFunction_UFighter_ReceiveDamage, "ReceiveDamage" }, // 3113714685
		{ &Z_Construct_UFunction_UFighter_RemoveBuff, "RemoveBuff" }, // 3086328862
		{ &Z_Construct_UFunction_UFighter_RollDamage, "RollDamage" }, // 933531726
		{ &Z_Construct_UFunction_UFighter_RollToHit, "RollToHit" }, // 566342604
		{ &Z_Construct_UFunction_UFighter_SendDamage, "SendDamage" }, // 652445813
		{ &Z_Construct_UFunction_UFighter_StartTurn, "StartTurn" }, // 1117246804
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFighter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UFighter_Statics::NewProp_bIsTurn_SetBit(void* Obj)
{
	((UFighter*)Obj)->bIsTurn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFighter_Statics::NewProp_bIsTurn = { "bIsTurn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFighter), &Z_Construct_UClass_UFighter_Statics::NewProp_bIsTurn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsTurn_MetaData), NewProp_bIsTurn_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFighter_Statics::NewProp_InitiativeScore = { "InitiativeScore", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFighter, InitiativeScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitiativeScore_MetaData), NewProp_InitiativeScore_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFighter_Statics::NewProp_MaxMovement = { "MaxMovement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFighter, MaxMovement), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxMovement_MetaData), NewProp_MaxMovement_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFighter_Statics::NewProp_MovementLeft = { "MovementLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFighter, MovementLeft), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementLeft_MetaData), NewProp_MovementLeft_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFighter_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFighter, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFighter_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFighter, CurrentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHealth_MetaData), NewProp_CurrentHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFighter_Statics::NewProp_MinDamage = { "MinDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFighter, MinDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinDamage_MetaData), NewProp_MinDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFighter_Statics::NewProp_MaxDamage = { "MaxDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFighter, MaxDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDamage_MetaData), NewProp_MaxDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFighter_Statics::NewProp_DamageBuff = { "DamageBuff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFighter, DamageBuff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageBuff_MetaData), NewProp_DamageBuff_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFighter_Statics::NewProp_DamageReduction = { "DamageReduction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFighter, DamageReduction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageReduction_MetaData), NewProp_DamageReduction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFighter_Statics::NewProp_BaseAttack = { "BaseAttack", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFighter, BaseAttack), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseAttack_MetaData), NewProp_BaseAttack_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFighter_Statics::NewProp_AttackBuff = { "AttackBuff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFighter, AttackBuff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackBuff_MetaData), NewProp_AttackBuff_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFighter_Statics::NewProp_BaseDefense = { "BaseDefense", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFighter, BaseDefense), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseDefense_MetaData), NewProp_BaseDefense_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFighter_Statics::NewProp_DefenseBuff = { "DefenseBuff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFighter, DefenseBuff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefenseBuff_MetaData), NewProp_DefenseBuff_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFighter_Statics::NewProp_BaseBlock = { "BaseBlock", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFighter, BaseBlock), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseBlock_MetaData), NewProp_BaseBlock_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFighter_Statics::NewProp_BlockBuff = { "BlockBuff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFighter, BlockBuff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockBuff_MetaData), NewProp_BlockBuff_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFighter_Statics::NewProp_BaseHeal = { "BaseHeal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFighter, BaseHeal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseHeal_MetaData), NewProp_BaseHeal_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFighter_Statics::NewProp_HealBuff = { "HealBuff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFighter, HealBuff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealBuff_MetaData), NewProp_HealBuff_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFighter_Statics::NewProp_OnStartTurn = { "OnStartTurn", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFighter, OnStartTurn), Z_Construct_UDelegateFunction_Reconnection_OnStartTurn__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStartTurn_MetaData), NewProp_OnStartTurn_MetaData) }; // 672317339
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFighter_Statics::NewProp_OnEndTurn = { "OnEndTurn", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFighter, OnEndTurn), Z_Construct_UDelegateFunction_Reconnection_OnEndTurn__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnEndTurn_MetaData), NewProp_OnEndTurn_MetaData) }; // 725217656
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFighter_Statics::NewProp_OnDeath = { "OnDeath", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFighter, OnDeath), Z_Construct_UDelegateFunction_Reconnection_OnDeath__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDeath_MetaData), NewProp_OnDeath_MetaData) }; // 541176296
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFighter_Statics::NewProp_OnHitAttack = { "OnHitAttack", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFighter, OnHitAttack), Z_Construct_UDelegateFunction_Reconnection_OnHitAttack__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHitAttack_MetaData), NewProp_OnHitAttack_MetaData) }; // 2115309835
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFighter_Statics::NewProp_OnHitMiss = { "OnHitMiss", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFighter, OnHitMiss), Z_Construct_UDelegateFunction_Reconnection_OnHitMiss__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHitMiss_MetaData), NewProp_OnHitMiss_MetaData) }; // 3743584328
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFighter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFighter_Statics::NewProp_bIsTurn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFighter_Statics::NewProp_InitiativeScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFighter_Statics::NewProp_MaxMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFighter_Statics::NewProp_MovementLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFighter_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFighter_Statics::NewProp_CurrentHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFighter_Statics::NewProp_MinDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFighter_Statics::NewProp_MaxDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFighter_Statics::NewProp_DamageBuff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFighter_Statics::NewProp_DamageReduction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFighter_Statics::NewProp_BaseAttack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFighter_Statics::NewProp_AttackBuff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFighter_Statics::NewProp_BaseDefense,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFighter_Statics::NewProp_DefenseBuff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFighter_Statics::NewProp_BaseBlock,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFighter_Statics::NewProp_BlockBuff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFighter_Statics::NewProp_BaseHeal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFighter_Statics::NewProp_HealBuff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFighter_Statics::NewProp_OnStartTurn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFighter_Statics::NewProp_OnEndTurn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFighter_Statics::NewProp_OnDeath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFighter_Statics::NewProp_OnHitAttack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFighter_Statics::NewProp_OnHitMiss,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFighter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFighter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Reconnection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFighter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFighter_Statics::ClassParams = {
	&UFighter::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UFighter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UFighter_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFighter_Statics::Class_MetaDataParams), Z_Construct_UClass_UFighter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFighter()
{
	if (!Z_Registration_Info_UClass_UFighter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFighter.OuterSingleton, Z_Construct_UClass_UFighter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFighter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFighter);
UFighter::~UFighter() {}
// ********** End Class UFighter *******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_ma046125_Documents_GitHub_Reconnection_Reconnection_Source_Reconnection_Public_UFighter_h__Script_Reconnection_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFighter, UFighter::StaticClass, TEXT("UFighter"), &Z_Registration_Info_UClass_UFighter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFighter), 3428404077U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ma046125_Documents_GitHub_Reconnection_Reconnection_Source_Reconnection_Public_UFighter_h__Script_Reconnection_2006893192(TEXT("/Script/Reconnection"),
	Z_CompiledInDeferFile_FID_Users_ma046125_Documents_GitHub_Reconnection_Reconnection_Source_Reconnection_Public_UFighter_h__Script_Reconnection_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ma046125_Documents_GitHub_Reconnection_Reconnection_Source_Reconnection_Public_UFighter_h__Script_Reconnection_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
