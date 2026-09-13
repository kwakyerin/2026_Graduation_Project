// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReplication_Test_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	REPLICATION_TEST_API UFunction* Z_Construct_UDelegateFunction_Replication_Test_OnEnemyDied__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Replication_Test;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Replication_Test()
	{
		if (!Z_Registration_Info_UPackage__Script_Replication_Test.OuterSingleton)
		{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_Replication_Test_OnEnemyDied__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/Replication_Test",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0xFE2C24C2,
			0x40809828,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Replication_Test.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_Replication_Test.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Replication_Test(Z_Construct_UPackage__Script_Replication_Test, TEXT("/Script/Replication_Test"), Z_Registration_Info_UPackage__Script_Replication_Test, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xFE2C24C2, 0x40809828));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
