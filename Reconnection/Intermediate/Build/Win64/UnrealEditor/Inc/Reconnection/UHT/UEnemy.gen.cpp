// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEnemy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUEnemy() {}

// ********** Begin Cross Module References ********************************************************
RECONNECTION_API UClass* Z_Construct_UClass_UEnemy();
RECONNECTION_API UClass* Z_Construct_UClass_UEnemy_NoRegister();
RECONNECTION_API UClass* Z_Construct_UClass_UFighter();
RECONNECTION_API UClass* Z_Construct_UClass_UFighter_NoRegister();
RECONNECTION_API UEnum* Z_Construct_UEnum_Reconnection_EWeaponType();
UPackage* Z_Construct_UPackage__Script_Reconnection();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EWeaponType ***************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWeaponType;
static UEnum* EWeaponType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWeaponType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWeaponType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Reconnection_EWeaponType, (UObject*)Z_Construct_UPackage__Script_Reconnection(), TEXT("EWeaponType"));
	}
	return Z_Registration_Info_UEnum_EWeaponType.OuterSingleton;
}
template<> RECONNECTION_API UEnum* StaticEnum<EWeaponType>()
{
	return EWeaponType_StaticEnum();
}
struct Z_Construct_UEnum_Reconnection_EWeaponType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Magic.DisplayName", "Magic" },
		{ "Magic.Name", "EWeaponType::Magic" },
		{ "Melee.DisplayName", "Melee" },
		{ "Melee.Name", "EWeaponType::Melee" },
		{ "ModuleRelativePath", "Public/UEnemy.h" },
		{ "Ranged.DisplayName", "Ranged" },
		{ "Ranged.Name", "EWeaponType::Ranged" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWeaponType::Melee", (int64)EWeaponType::Melee },
		{ "EWeaponType::Ranged", (int64)EWeaponType::Ranged },
		{ "EWeaponType::Magic", (int64)EWeaponType::Magic },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Reconnection_EWeaponType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Reconnection,
	nullptr,
	"EWeaponType",
	"EWeaponType",
	Z_Construct_UEnum_Reconnection_EWeaponType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Reconnection_EWeaponType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Reconnection_EWeaponType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Reconnection_EWeaponType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Reconnection_EWeaponType()
{
	if (!Z_Registration_Info_UEnum_EWeaponType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWeaponType.InnerSingleton, Z_Construct_UEnum_Reconnection_EWeaponType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWeaponType.InnerSingleton;
}
// ********** End Enum EWeaponType *****************************************************************

// ********** Begin Class UEnemy Function ChooseAction *********************************************
struct Z_Construct_UFunction_UEnemy_ChooseAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemy|Combat" },
		{ "ModuleRelativePath", "Public/UEnemy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemy_ChooseAction_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEnemy, nullptr, "ChooseAction", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemy_ChooseAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnemy_ChooseAction_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UEnemy_ChooseAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnemy_ChooseAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnemy::execChooseAction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChooseAction();
	P_NATIVE_END;
}
// ********** End Class UEnemy Function ChooseAction ***********************************************

// ********** Begin Class UEnemy Function GetAllyHealUtility ***************************************
struct Z_Construct_UFunction_UEnemy_GetAllyHealUtility_Statics
{
	struct Enemy_eventGetAllyHealUtility_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemy|Utility" },
		{ "ModuleRelativePath", "Public/UEnemy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEnemy_GetAllyHealUtility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Enemy_eventGetAllyHealUtility_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnemy_GetAllyHealUtility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnemy_GetAllyHealUtility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemy_GetAllyHealUtility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemy_GetAllyHealUtility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEnemy, nullptr, "GetAllyHealUtility", Z_Construct_UFunction_UEnemy_GetAllyHealUtility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemy_GetAllyHealUtility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnemy_GetAllyHealUtility_Statics::Enemy_eventGetAllyHealUtility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemy_GetAllyHealUtility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnemy_GetAllyHealUtility_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEnemy_GetAllyHealUtility_Statics::Enemy_eventGetAllyHealUtility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnemy_GetAllyHealUtility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnemy_GetAllyHealUtility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnemy::execGetAllyHealUtility)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetAllyHealUtility();
	P_NATIVE_END;
}
// ********** End Class UEnemy Function GetAllyHealUtility *****************************************

// ********** Begin Class UEnemy Function GetAttackUtility *****************************************
struct Z_Construct_UFunction_UEnemy_GetAttackUtility_Statics
{
	struct Enemy_eventGetAttackUtility_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemy|Utility" },
		{ "ModuleRelativePath", "Public/UEnemy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEnemy_GetAttackUtility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Enemy_eventGetAttackUtility_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnemy_GetAttackUtility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnemy_GetAttackUtility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemy_GetAttackUtility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemy_GetAttackUtility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEnemy, nullptr, "GetAttackUtility", Z_Construct_UFunction_UEnemy_GetAttackUtility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemy_GetAttackUtility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnemy_GetAttackUtility_Statics::Enemy_eventGetAttackUtility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemy_GetAttackUtility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnemy_GetAttackUtility_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEnemy_GetAttackUtility_Statics::Enemy_eventGetAttackUtility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnemy_GetAttackUtility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnemy_GetAttackUtility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnemy::execGetAttackUtility)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetAttackUtility();
	P_NATIVE_END;
}
// ********** End Class UEnemy Function GetAttackUtility *******************************************

// ********** Begin Class UEnemy Function GetBlockUtility ******************************************
struct Z_Construct_UFunction_UEnemy_GetBlockUtility_Statics
{
	struct Enemy_eventGetBlockUtility_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemy|Utility" },
		{ "ModuleRelativePath", "Public/UEnemy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEnemy_GetBlockUtility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Enemy_eventGetBlockUtility_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnemy_GetBlockUtility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnemy_GetBlockUtility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemy_GetBlockUtility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemy_GetBlockUtility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEnemy, nullptr, "GetBlockUtility", Z_Construct_UFunction_UEnemy_GetBlockUtility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemy_GetBlockUtility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnemy_GetBlockUtility_Statics::Enemy_eventGetBlockUtility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemy_GetBlockUtility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnemy_GetBlockUtility_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEnemy_GetBlockUtility_Statics::Enemy_eventGetBlockUtility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnemy_GetBlockUtility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnemy_GetBlockUtility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnemy::execGetBlockUtility)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetBlockUtility();
	P_NATIVE_END;
}
// ********** End Class UEnemy Function GetBlockUtility ********************************************

// ********** Begin Class UEnemy Function GetBuffUtility *******************************************
struct Z_Construct_UFunction_UEnemy_GetBuffUtility_Statics
{
	struct Enemy_eventGetBuffUtility_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemy|Utility" },
		{ "ModuleRelativePath", "Public/UEnemy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEnemy_GetBuffUtility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Enemy_eventGetBuffUtility_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnemy_GetBuffUtility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnemy_GetBuffUtility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemy_GetBuffUtility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemy_GetBuffUtility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEnemy, nullptr, "GetBuffUtility", Z_Construct_UFunction_UEnemy_GetBuffUtility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemy_GetBuffUtility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnemy_GetBuffUtility_Statics::Enemy_eventGetBuffUtility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemy_GetBuffUtility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnemy_GetBuffUtility_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEnemy_GetBuffUtility_Statics::Enemy_eventGetBuffUtility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnemy_GetBuffUtility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnemy_GetBuffUtility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnemy::execGetBuffUtility)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetBuffUtility();
	P_NATIVE_END;
}
// ********** End Class UEnemy Function GetBuffUtility *********************************************

// ********** Begin Class UEnemy Function GetClosestEnemy ******************************************
struct Z_Construct_UFunction_UEnemy_GetClosestEnemy_Statics
{
	struct Enemy_eventGetClosestEnemy_Parms
	{
		UFighter* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemy|StorageAccess" },
		{ "ModuleRelativePath", "Public/UEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnemy_GetClosestEnemy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Enemy_eventGetClosestEnemy_Parms, ReturnValue), Z_Construct_UClass_UFighter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnemy_GetClosestEnemy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnemy_GetClosestEnemy_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemy_GetClosestEnemy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemy_GetClosestEnemy_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEnemy, nullptr, "GetClosestEnemy", Z_Construct_UFunction_UEnemy_GetClosestEnemy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemy_GetClosestEnemy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnemy_GetClosestEnemy_Statics::Enemy_eventGetClosestEnemy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemy_GetClosestEnemy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnemy_GetClosestEnemy_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEnemy_GetClosestEnemy_Statics::Enemy_eventGetClosestEnemy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnemy_GetClosestEnemy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnemy_GetClosestEnemy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnemy::execGetClosestEnemy)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UFighter**)Z_Param__Result=P_THIS->GetClosestEnemy();
	P_NATIVE_END;
}
// ********** End Class UEnemy Function GetClosestEnemy ********************************************

// ********** Begin Class UEnemy Function GetLowestAlly ********************************************
struct Z_Construct_UFunction_UEnemy_GetLowestAlly_Statics
{
	struct Enemy_eventGetLowestAlly_Parms
	{
		UFighter* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemy|StorageAccess" },
		{ "ModuleRelativePath", "Public/UEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnemy_GetLowestAlly_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Enemy_eventGetLowestAlly_Parms, ReturnValue), Z_Construct_UClass_UFighter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnemy_GetLowestAlly_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnemy_GetLowestAlly_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemy_GetLowestAlly_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemy_GetLowestAlly_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEnemy, nullptr, "GetLowestAlly", Z_Construct_UFunction_UEnemy_GetLowestAlly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemy_GetLowestAlly_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnemy_GetLowestAlly_Statics::Enemy_eventGetLowestAlly_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemy_GetLowestAlly_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnemy_GetLowestAlly_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEnemy_GetLowestAlly_Statics::Enemy_eventGetLowestAlly_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnemy_GetLowestAlly()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnemy_GetLowestAlly_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnemy::execGetLowestAlly)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UFighter**)Z_Param__Result=P_THIS->GetLowestAlly();
	P_NATIVE_END;
}
// ********** End Class UEnemy Function GetLowestAlly **********************************************

// ********** Begin Class UEnemy Function GetMagicUtility ******************************************
struct Z_Construct_UFunction_UEnemy_GetMagicUtility_Statics
{
	struct Enemy_eventGetMagicUtility_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemy|Utility" },
		{ "ModuleRelativePath", "Public/UEnemy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEnemy_GetMagicUtility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Enemy_eventGetMagicUtility_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnemy_GetMagicUtility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnemy_GetMagicUtility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemy_GetMagicUtility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemy_GetMagicUtility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEnemy, nullptr, "GetMagicUtility", Z_Construct_UFunction_UEnemy_GetMagicUtility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemy_GetMagicUtility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnemy_GetMagicUtility_Statics::Enemy_eventGetMagicUtility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemy_GetMagicUtility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnemy_GetMagicUtility_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEnemy_GetMagicUtility_Statics::Enemy_eventGetMagicUtility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnemy_GetMagicUtility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnemy_GetMagicUtility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnemy::execGetMagicUtility)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMagicUtility();
	P_NATIVE_END;
}
// ********** End Class UEnemy Function GetMagicUtility ********************************************

// ********** Begin Class UEnemy Function GetMeleeUtility ******************************************
struct Z_Construct_UFunction_UEnemy_GetMeleeUtility_Statics
{
	struct Enemy_eventGetMeleeUtility_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemy|Utility" },
		{ "ModuleRelativePath", "Public/UEnemy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEnemy_GetMeleeUtility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Enemy_eventGetMeleeUtility_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnemy_GetMeleeUtility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnemy_GetMeleeUtility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemy_GetMeleeUtility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemy_GetMeleeUtility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEnemy, nullptr, "GetMeleeUtility", Z_Construct_UFunction_UEnemy_GetMeleeUtility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemy_GetMeleeUtility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnemy_GetMeleeUtility_Statics::Enemy_eventGetMeleeUtility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemy_GetMeleeUtility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnemy_GetMeleeUtility_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEnemy_GetMeleeUtility_Statics::Enemy_eventGetMeleeUtility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnemy_GetMeleeUtility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnemy_GetMeleeUtility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnemy::execGetMeleeUtility)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMeleeUtility();
	P_NATIVE_END;
}
// ********** End Class UEnemy Function GetMeleeUtility ********************************************

// ********** Begin Class UEnemy Function GetRangedUtility *****************************************
struct Z_Construct_UFunction_UEnemy_GetRangedUtility_Statics
{
	struct Enemy_eventGetRangedUtility_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemy|Utility" },
		{ "ModuleRelativePath", "Public/UEnemy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEnemy_GetRangedUtility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Enemy_eventGetRangedUtility_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnemy_GetRangedUtility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnemy_GetRangedUtility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemy_GetRangedUtility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemy_GetRangedUtility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEnemy, nullptr, "GetRangedUtility", Z_Construct_UFunction_UEnemy_GetRangedUtility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemy_GetRangedUtility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnemy_GetRangedUtility_Statics::Enemy_eventGetRangedUtility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemy_GetRangedUtility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnemy_GetRangedUtility_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEnemy_GetRangedUtility_Statics::Enemy_eventGetRangedUtility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnemy_GetRangedUtility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnemy_GetRangedUtility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnemy::execGetRangedUtility)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetRangedUtility();
	P_NATIVE_END;
}
// ********** End Class UEnemy Function GetRangedUtility *******************************************

// ********** Begin Class UEnemy Function GetSelfHealUtility ***************************************
struct Z_Construct_UFunction_UEnemy_GetSelfHealUtility_Statics
{
	struct Enemy_eventGetSelfHealUtility_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemy|Utility" },
		{ "ModuleRelativePath", "Public/UEnemy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEnemy_GetSelfHealUtility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Enemy_eventGetSelfHealUtility_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnemy_GetSelfHealUtility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnemy_GetSelfHealUtility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemy_GetSelfHealUtility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemy_GetSelfHealUtility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEnemy, nullptr, "GetSelfHealUtility", Z_Construct_UFunction_UEnemy_GetSelfHealUtility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemy_GetSelfHealUtility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnemy_GetSelfHealUtility_Statics::Enemy_eventGetSelfHealUtility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemy_GetSelfHealUtility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnemy_GetSelfHealUtility_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEnemy_GetSelfHealUtility_Statics::Enemy_eventGetSelfHealUtility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnemy_GetSelfHealUtility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnemy_GetSelfHealUtility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnemy::execGetSelfHealUtility)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetSelfHealUtility();
	P_NATIVE_END;
}
// ********** End Class UEnemy Function GetSelfHealUtility *****************************************

// ********** Begin Class UEnemy Function InitializeEnemy ******************************************
struct Z_Construct_UFunction_UEnemy_InitializeEnemy_Statics
{
	struct Enemy_eventInitializeEnemy_Parms
	{
		TArray<UFighter*> AllFighters;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemy|Setup" },
		{ "ModuleRelativePath", "Public/UEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllFighters_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AllFighters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllFighters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnemy_InitializeEnemy_Statics::NewProp_AllFighters_Inner = { "AllFighters", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UFighter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEnemy_InitializeEnemy_Statics::NewProp_AllFighters = { "AllFighters", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Enemy_eventInitializeEnemy_Parms, AllFighters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllFighters_MetaData), NewProp_AllFighters_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnemy_InitializeEnemy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnemy_InitializeEnemy_Statics::NewProp_AllFighters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnemy_InitializeEnemy_Statics::NewProp_AllFighters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemy_InitializeEnemy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemy_InitializeEnemy_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEnemy, nullptr, "InitializeEnemy", Z_Construct_UFunction_UEnemy_InitializeEnemy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemy_InitializeEnemy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnemy_InitializeEnemy_Statics::Enemy_eventInitializeEnemy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemy_InitializeEnemy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnemy_InitializeEnemy_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEnemy_InitializeEnemy_Statics::Enemy_eventInitializeEnemy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnemy_InitializeEnemy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnemy_InitializeEnemy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnemy::execInitializeEnemy)
{
	P_GET_TARRAY_REF(UFighter*,Z_Param_Out_AllFighters);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeEnemy(Z_Param_Out_AllFighters);
	P_NATIVE_END;
}
// ********** End Class UEnemy Function InitializeEnemy ********************************************

// ********** Begin Class UEnemy Function OnFighterListChanged *************************************
struct Z_Construct_UFunction_UEnemy_OnFighterListChanged_Statics
{
	struct Enemy_eventOnFighterListChanged_Parms
	{
		UFighter* ChangedFighter;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemy|Setup" },
		{ "ModuleRelativePath", "Public/UEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChangedFighter_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChangedFighter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnemy_OnFighterListChanged_Statics::NewProp_ChangedFighter = { "ChangedFighter", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Enemy_eventOnFighterListChanged_Parms, ChangedFighter), Z_Construct_UClass_UFighter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChangedFighter_MetaData), NewProp_ChangedFighter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnemy_OnFighterListChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnemy_OnFighterListChanged_Statics::NewProp_ChangedFighter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemy_OnFighterListChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemy_OnFighterListChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEnemy, nullptr, "OnFighterListChanged", Z_Construct_UFunction_UEnemy_OnFighterListChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemy_OnFighterListChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnemy_OnFighterListChanged_Statics::Enemy_eventOnFighterListChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemy_OnFighterListChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnemy_OnFighterListChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEnemy_OnFighterListChanged_Statics::Enemy_eventOnFighterListChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnemy_OnFighterListChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnemy_OnFighterListChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnemy::execOnFighterListChanged)
{
	P_GET_OBJECT(UFighter,Z_Param_ChangedFighter);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnFighterListChanged(Z_Param_ChangedFighter);
	P_NATIVE_END;
}
// ********** End Class UEnemy Function OnFighterListChanged ***************************************

// ********** Begin Class UEnemy Function UpdateAlliesAndEnemies ***********************************
struct Z_Construct_UFunction_UEnemy_UpdateAlliesAndEnemies_Statics
{
	struct Enemy_eventUpdateAlliesAndEnemies_Parms
	{
		TArray<UFighter*> AllFighters;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemy|Setup" },
		{ "ModuleRelativePath", "Public/UEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllFighters_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AllFighters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllFighters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnemy_UpdateAlliesAndEnemies_Statics::NewProp_AllFighters_Inner = { "AllFighters", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UFighter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEnemy_UpdateAlliesAndEnemies_Statics::NewProp_AllFighters = { "AllFighters", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Enemy_eventUpdateAlliesAndEnemies_Parms, AllFighters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllFighters_MetaData), NewProp_AllFighters_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnemy_UpdateAlliesAndEnemies_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnemy_UpdateAlliesAndEnemies_Statics::NewProp_AllFighters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnemy_UpdateAlliesAndEnemies_Statics::NewProp_AllFighters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemy_UpdateAlliesAndEnemies_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemy_UpdateAlliesAndEnemies_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEnemy, nullptr, "UpdateAlliesAndEnemies", Z_Construct_UFunction_UEnemy_UpdateAlliesAndEnemies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemy_UpdateAlliesAndEnemies_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnemy_UpdateAlliesAndEnemies_Statics::Enemy_eventUpdateAlliesAndEnemies_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemy_UpdateAlliesAndEnemies_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnemy_UpdateAlliesAndEnemies_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEnemy_UpdateAlliesAndEnemies_Statics::Enemy_eventUpdateAlliesAndEnemies_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnemy_UpdateAlliesAndEnemies()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnemy_UpdateAlliesAndEnemies_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnemy::execUpdateAlliesAndEnemies)
{
	P_GET_TARRAY_REF(UFighter*,Z_Param_Out_AllFighters);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateAlliesAndEnemies(Z_Param_Out_AllFighters);
	P_NATIVE_END;
}
// ********** End Class UEnemy Function UpdateAlliesAndEnemies *************************************

// ********** Begin Class UEnemy *******************************************************************
void UEnemy::StaticRegisterNativesUEnemy()
{
	UClass* Class = UEnemy::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ChooseAction", &UEnemy::execChooseAction },
		{ "GetAllyHealUtility", &UEnemy::execGetAllyHealUtility },
		{ "GetAttackUtility", &UEnemy::execGetAttackUtility },
		{ "GetBlockUtility", &UEnemy::execGetBlockUtility },
		{ "GetBuffUtility", &UEnemy::execGetBuffUtility },
		{ "GetClosestEnemy", &UEnemy::execGetClosestEnemy },
		{ "GetLowestAlly", &UEnemy::execGetLowestAlly },
		{ "GetMagicUtility", &UEnemy::execGetMagicUtility },
		{ "GetMeleeUtility", &UEnemy::execGetMeleeUtility },
		{ "GetRangedUtility", &UEnemy::execGetRangedUtility },
		{ "GetSelfHealUtility", &UEnemy::execGetSelfHealUtility },
		{ "InitializeEnemy", &UEnemy::execInitializeEnemy },
		{ "OnFighterListChanged", &UEnemy::execOnFighterListChanged },
		{ "UpdateAlliesAndEnemies", &UEnemy::execUpdateAlliesAndEnemies },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UEnemy;
UClass* UEnemy::GetPrivateStaticClass()
{
	using TClass = UEnemy;
	if (!Z_Registration_Info_UClass_UEnemy.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Enemy"),
			Z_Registration_Info_UClass_UEnemy.InnerSingleton,
			StaticRegisterNativesUEnemy,
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
	return Z_Registration_Info_UClass_UEnemy.InnerSingleton;
}
UClass* Z_Construct_UClass_UEnemy_NoRegister()
{
	return UEnemy::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEnemy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Fighters" },
		{ "IncludePath", "UEnemy.h" },
		{ "ModuleRelativePath", "Public/UEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackUtilityWeight_MetaData[] = {
		{ "Category", "Enemy|Utility|Weight" },
		{ "ModuleRelativePath", "Public/UEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasMelee_MetaData[] = {
		{ "Category", "Enemy|Utility|Weight" },
		{ "ModuleRelativePath", "Public/UEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasRanged_MetaData[] = {
		{ "Category", "Enemy|Utility|Weight" },
		{ "ModuleRelativePath", "Public/UEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasMagic_MetaData[] = {
		{ "Category", "Enemy|Utility|Weight" },
		{ "ModuleRelativePath", "Public/UEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealUtilityWeight_MetaData[] = {
		{ "Category", "Enemy|Utility|Weight" },
		{ "ModuleRelativePath", "Public/UEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasSelfHeal_MetaData[] = {
		{ "Category", "Enemy|Utility|Weight" },
		{ "ModuleRelativePath", "Public/UEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasAllyHeal_MetaData[] = {
		{ "Category", "Enemy|Utility|Weight" },
		{ "ModuleRelativePath", "Public/UEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuffUtilityWeight_MetaData[] = {
		{ "Category", "Enemy|Utility|Weight" },
		{ "ModuleRelativePath", "Public/UEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasBuff_MetaData[] = {
		{ "Category", "Enemy|Utility|Weight" },
		{ "ModuleRelativePath", "Public/UEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockUtilityWeight_MetaData[] = {
		{ "Category", "Enemy|Utility|Weight" },
		{ "ModuleRelativePath", "Public/UEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasBlock_MetaData[] = {
		{ "Category", "Enemy|Utility|Weight" },
		{ "ModuleRelativePath", "Public/UEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Allies_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastDamageReceived_MetaData[] = {
		{ "ModuleRelativePath", "Public/UEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWeaponType_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Enemy|Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Current weapon type for this enemy\n" },
#endif
		{ "ModuleRelativePath", "Public/UEnemy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current weapon type for this enemy" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Enemies_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClosestEnemyIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/UEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LowestAllyIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/UEnemy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackUtilityWeight;
	static void NewProp_bHasMelee_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasMelee;
	static void NewProp_bHasRanged_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasRanged;
	static void NewProp_bHasMagic_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasMagic;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HealUtilityWeight;
	static void NewProp_bHasSelfHeal_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasSelfHeal;
	static void NewProp_bHasAllyHeal_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasAllyHeal;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BuffUtilityWeight;
	static void NewProp_bHasBuff_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasBuff;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlockUtilityWeight;
	static void NewProp_bHasBlock_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasBlock;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Allies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Allies;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LastDamageReceived;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentWeaponType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentWeaponType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Enemies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Enemies;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ClosestEnemyIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LowestAllyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEnemy_ChooseAction, "ChooseAction" }, // 2552182653
		{ &Z_Construct_UFunction_UEnemy_GetAllyHealUtility, "GetAllyHealUtility" }, // 3610300957
		{ &Z_Construct_UFunction_UEnemy_GetAttackUtility, "GetAttackUtility" }, // 1860539213
		{ &Z_Construct_UFunction_UEnemy_GetBlockUtility, "GetBlockUtility" }, // 1342516898
		{ &Z_Construct_UFunction_UEnemy_GetBuffUtility, "GetBuffUtility" }, // 3642174251
		{ &Z_Construct_UFunction_UEnemy_GetClosestEnemy, "GetClosestEnemy" }, // 3283241416
		{ &Z_Construct_UFunction_UEnemy_GetLowestAlly, "GetLowestAlly" }, // 2101523114
		{ &Z_Construct_UFunction_UEnemy_GetMagicUtility, "GetMagicUtility" }, // 934736592
		{ &Z_Construct_UFunction_UEnemy_GetMeleeUtility, "GetMeleeUtility" }, // 3133853315
		{ &Z_Construct_UFunction_UEnemy_GetRangedUtility, "GetRangedUtility" }, // 3914083282
		{ &Z_Construct_UFunction_UEnemy_GetSelfHealUtility, "GetSelfHealUtility" }, // 298073071
		{ &Z_Construct_UFunction_UEnemy_InitializeEnemy, "InitializeEnemy" }, // 1187421031
		{ &Z_Construct_UFunction_UEnemy_OnFighterListChanged, "OnFighterListChanged" }, // 603951525
		{ &Z_Construct_UFunction_UEnemy_UpdateAlliesAndEnemies, "UpdateAlliesAndEnemies" }, // 174959362
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemy_Statics::NewProp_AttackUtilityWeight = { "AttackUtilityWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnemy, AttackUtilityWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackUtilityWeight_MetaData), NewProp_AttackUtilityWeight_MetaData) };
void Z_Construct_UClass_UEnemy_Statics::NewProp_bHasMelee_SetBit(void* Obj)
{
	((UEnemy*)Obj)->bHasMelee = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnemy_Statics::NewProp_bHasMelee = { "bHasMelee", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEnemy), &Z_Construct_UClass_UEnemy_Statics::NewProp_bHasMelee_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasMelee_MetaData), NewProp_bHasMelee_MetaData) };
void Z_Construct_UClass_UEnemy_Statics::NewProp_bHasRanged_SetBit(void* Obj)
{
	((UEnemy*)Obj)->bHasRanged = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnemy_Statics::NewProp_bHasRanged = { "bHasRanged", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEnemy), &Z_Construct_UClass_UEnemy_Statics::NewProp_bHasRanged_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasRanged_MetaData), NewProp_bHasRanged_MetaData) };
void Z_Construct_UClass_UEnemy_Statics::NewProp_bHasMagic_SetBit(void* Obj)
{
	((UEnemy*)Obj)->bHasMagic = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnemy_Statics::NewProp_bHasMagic = { "bHasMagic", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEnemy), &Z_Construct_UClass_UEnemy_Statics::NewProp_bHasMagic_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasMagic_MetaData), NewProp_bHasMagic_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemy_Statics::NewProp_HealUtilityWeight = { "HealUtilityWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnemy, HealUtilityWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealUtilityWeight_MetaData), NewProp_HealUtilityWeight_MetaData) };
void Z_Construct_UClass_UEnemy_Statics::NewProp_bHasSelfHeal_SetBit(void* Obj)
{
	((UEnemy*)Obj)->bHasSelfHeal = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnemy_Statics::NewProp_bHasSelfHeal = { "bHasSelfHeal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEnemy), &Z_Construct_UClass_UEnemy_Statics::NewProp_bHasSelfHeal_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasSelfHeal_MetaData), NewProp_bHasSelfHeal_MetaData) };
void Z_Construct_UClass_UEnemy_Statics::NewProp_bHasAllyHeal_SetBit(void* Obj)
{
	((UEnemy*)Obj)->bHasAllyHeal = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnemy_Statics::NewProp_bHasAllyHeal = { "bHasAllyHeal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEnemy), &Z_Construct_UClass_UEnemy_Statics::NewProp_bHasAllyHeal_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasAllyHeal_MetaData), NewProp_bHasAllyHeal_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemy_Statics::NewProp_BuffUtilityWeight = { "BuffUtilityWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnemy, BuffUtilityWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuffUtilityWeight_MetaData), NewProp_BuffUtilityWeight_MetaData) };
void Z_Construct_UClass_UEnemy_Statics::NewProp_bHasBuff_SetBit(void* Obj)
{
	((UEnemy*)Obj)->bHasBuff = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnemy_Statics::NewProp_bHasBuff = { "bHasBuff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEnemy), &Z_Construct_UClass_UEnemy_Statics::NewProp_bHasBuff_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasBuff_MetaData), NewProp_bHasBuff_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemy_Statics::NewProp_BlockUtilityWeight = { "BlockUtilityWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnemy, BlockUtilityWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockUtilityWeight_MetaData), NewProp_BlockUtilityWeight_MetaData) };
void Z_Construct_UClass_UEnemy_Statics::NewProp_bHasBlock_SetBit(void* Obj)
{
	((UEnemy*)Obj)->bHasBlock = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnemy_Statics::NewProp_bHasBlock = { "bHasBlock", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEnemy), &Z_Construct_UClass_UEnemy_Statics::NewProp_bHasBlock_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasBlock_MetaData), NewProp_bHasBlock_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemy_Statics::NewProp_Allies_Inner = { "Allies", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UFighter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEnemy_Statics::NewProp_Allies = { "Allies", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnemy, Allies), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Allies_MetaData), NewProp_Allies_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemy_Statics::NewProp_LastDamageReceived = { "LastDamageReceived", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnemy, LastDamageReceived), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastDamageReceived_MetaData), NewProp_LastDamageReceived_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEnemy_Statics::NewProp_CurrentWeaponType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEnemy_Statics::NewProp_CurrentWeaponType = { "CurrentWeaponType", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnemy, CurrentWeaponType), Z_Construct_UEnum_Reconnection_EWeaponType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentWeaponType_MetaData), NewProp_CurrentWeaponType_MetaData) }; // 200093190
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemy_Statics::NewProp_Enemies_Inner = { "Enemies", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UFighter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEnemy_Statics::NewProp_Enemies = { "Enemies", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnemy, Enemies), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Enemies_MetaData), NewProp_Enemies_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEnemy_Statics::NewProp_ClosestEnemyIndex = { "ClosestEnemyIndex", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnemy, ClosestEnemyIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClosestEnemyIndex_MetaData), NewProp_ClosestEnemyIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEnemy_Statics::NewProp_LowestAllyIndex = { "LowestAllyIndex", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnemy, LowestAllyIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LowestAllyIndex_MetaData), NewProp_LowestAllyIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnemy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_Statics::NewProp_AttackUtilityWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_Statics::NewProp_bHasMelee,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_Statics::NewProp_bHasRanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_Statics::NewProp_bHasMagic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_Statics::NewProp_HealUtilityWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_Statics::NewProp_bHasSelfHeal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_Statics::NewProp_bHasAllyHeal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_Statics::NewProp_BuffUtilityWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_Statics::NewProp_bHasBuff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_Statics::NewProp_BlockUtilityWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_Statics::NewProp_bHasBlock,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_Statics::NewProp_Allies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_Statics::NewProp_Allies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_Statics::NewProp_LastDamageReceived,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_Statics::NewProp_CurrentWeaponType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_Statics::NewProp_CurrentWeaponType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_Statics::NewProp_Enemies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_Statics::NewProp_Enemies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_Statics::NewProp_ClosestEnemyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_Statics::NewProp_LowestAllyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEnemy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFighter,
	(UObject* (*)())Z_Construct_UPackage__Script_Reconnection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemy_Statics::ClassParams = {
	&UEnemy::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEnemy_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnemy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnemy()
{
	if (!Z_Registration_Info_UClass_UEnemy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemy.OuterSingleton, Z_Construct_UClass_UEnemy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnemy.OuterSingleton;
}
UEnemy::UEnemy() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemy);
UEnemy::~UEnemy() {}
// ********** End Class UEnemy *********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_woyat_OneDrive_Projects_Reconnection_Reconnection_Source_Reconnection_Public_UEnemy_h__Script_Reconnection_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EWeaponType_StaticEnum, TEXT("EWeaponType"), &Z_Registration_Info_UEnum_EWeaponType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 200093190U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnemy, UEnemy::StaticClass, TEXT("UEnemy"), &Z_Registration_Info_UClass_UEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemy), 3742125320U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_woyat_OneDrive_Projects_Reconnection_Reconnection_Source_Reconnection_Public_UEnemy_h__Script_Reconnection_2656651841(TEXT("/Script/Reconnection"),
	Z_CompiledInDeferFile_FID_Users_woyat_OneDrive_Projects_Reconnection_Reconnection_Source_Reconnection_Public_UEnemy_h__Script_Reconnection_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_woyat_OneDrive_Projects_Reconnection_Reconnection_Source_Reconnection_Public_UEnemy_h__Script_Reconnection_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_woyat_OneDrive_Projects_Reconnection_Reconnection_Source_Reconnection_Public_UEnemy_h__Script_Reconnection_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_woyat_OneDrive_Projects_Reconnection_Reconnection_Source_Reconnection_Public_UEnemy_h__Script_Reconnection_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
