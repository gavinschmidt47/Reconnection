// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AEnemy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAEnemy() {}

// ********** Begin Cross Module References ********************************************************
RECONNECTION_API UClass* Z_Construct_UClass_AEnemy();
RECONNECTION_API UClass* Z_Construct_UClass_AEnemy_NoRegister();
RECONNECTION_API UClass* Z_Construct_UClass_AFighter();
UPackage* Z_Construct_UPackage__Script_Reconnection();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AEnemy Function ChooseAction *********************************************
static FName NAME_AEnemy_ChooseAction = FName(TEXT("ChooseAction"));
void AEnemy::ChooseAction()
{
	UFunction* Func = FindFunctionChecked(NAME_AEnemy_ChooseAction);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		ChooseAction_Implementation();
	}
}
struct Z_Construct_UFunction_AEnemy_ChooseAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AEnemy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemy_ChooseAction_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEnemy, nullptr, "ChooseAction", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_ChooseAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemy_ChooseAction_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AEnemy_ChooseAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemy_ChooseAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemy::execChooseAction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChooseAction_Implementation();
	P_NATIVE_END;
}
// ********** End Class AEnemy Function ChooseAction ***********************************************

// ********** Begin Class AEnemy *******************************************************************
void AEnemy::StaticRegisterNativesAEnemy()
{
	UClass* Class = AEnemy::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ChooseAction", &AEnemy::execChooseAction },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AEnemy;
UClass* AEnemy::GetPrivateStaticClass()
{
	using TClass = AEnemy;
	if (!Z_Registration_Info_UClass_AEnemy.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Enemy"),
			Z_Registration_Info_UClass_AEnemy.InnerSingleton,
			StaticRegisterNativesAEnemy,
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
	return Z_Registration_Info_UClass_AEnemy.InnerSingleton;
}
UClass* Z_Construct_UClass_AEnemy_NoRegister()
{
	return AEnemy::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AEnemy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AEnemy.h" },
		{ "ModuleRelativePath", "Public/AEnemy.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemy_ChooseAction, "ChooseAction" }, // 1047028266
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AEnemy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AFighter,
	(UObject* (*)())Z_Construct_UPackage__Script_Reconnection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemy_Statics::ClassParams = {
	&AEnemy::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemy()
{
	if (!Z_Registration_Info_UClass_AEnemy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemy.OuterSingleton, Z_Construct_UClass_AEnemy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemy.OuterSingleton;
}
AEnemy::AEnemy() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemy);
AEnemy::~AEnemy() {}
// ********** End Class AEnemy *********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_woyat_OneDrive_Projects_Reconnection_Reconnection_Source_Reconnection_Public_AEnemy_h__Script_Reconnection_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemy, AEnemy::StaticClass, TEXT("AEnemy"), &Z_Registration_Info_UClass_AEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemy), 910957930U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_woyat_OneDrive_Projects_Reconnection_Reconnection_Source_Reconnection_Public_AEnemy_h__Script_Reconnection_3689130642(TEXT("/Script/Reconnection"),
	Z_CompiledInDeferFile_FID_Users_woyat_OneDrive_Projects_Reconnection_Reconnection_Source_Reconnection_Public_AEnemy_h__Script_Reconnection_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_woyat_OneDrive_Projects_Reconnection_Reconnection_Source_Reconnection_Public_AEnemy_h__Script_Reconnection_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
