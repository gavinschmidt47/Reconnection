// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReconnection_init() {}
	RECONNECTION_API UFunction* Z_Construct_UDelegateFunction_Reconnection_OnEndTurn__DelegateSignature();
	RECONNECTION_API UFunction* Z_Construct_UDelegateFunction_Reconnection_OnHitAttack__DelegateSignature();
	RECONNECTION_API UFunction* Z_Construct_UDelegateFunction_Reconnection_OnHitMiss__DelegateSignature();
	RECONNECTION_API UFunction* Z_Construct_UDelegateFunction_Reconnection_OnStartTurn__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Reconnection;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Reconnection()
	{
		if (!Z_Registration_Info_UPackage__Script_Reconnection.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Reconnection_OnEndTurn__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Reconnection_OnHitAttack__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Reconnection_OnHitMiss__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Reconnection_OnStartTurn__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Reconnection",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x50CC4C31,
				0x63AC81FC,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Reconnection.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Reconnection.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Reconnection(Z_Construct_UPackage__Script_Reconnection, TEXT("/Script/Reconnection"), Z_Registration_Info_UPackage__Script_Reconnection, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x50CC4C31, 0x63AC81FC));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
