// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Replication_TestGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeReplication_TestGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
REPLICATION_TEST_API UClass* Z_Construct_UClass_AReplication_TestGameMode();
REPLICATION_TEST_API UClass* Z_Construct_UClass_AReplication_TestGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Replication_Test();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AReplication_TestGameMode ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AReplication_TestGameMode;
UClass* AReplication_TestGameMode::GetPrivateStaticClass()
{
	using TClass = AReplication_TestGameMode;
	if (!Z_Registration_Info_UClass_AReplication_TestGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("Replication_TestGameMode"),
			Z_Registration_Info_UClass_AReplication_TestGameMode.InnerSingleton,
			StaticRegisterNativesAReplication_TestGameMode,
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
	return Z_Registration_Info_UClass_AReplication_TestGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AReplication_TestGameMode_NoRegister()
{
	return AReplication_TestGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AReplication_TestGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a third person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Replication_TestGameMode.h" },
		{ "ModuleRelativePath", "Replication_TestGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person game" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class AReplication_TestGameMode constinit property declarations ****************
// ********** End Class AReplication_TestGameMode constinit property declarations ******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AReplication_TestGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AReplication_TestGameMode_Statics
UObject* (*const Z_Construct_UClass_AReplication_TestGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Replication_Test,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AReplication_TestGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AReplication_TestGameMode_Statics::ClassParams = {
	&AReplication_TestGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008002ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AReplication_TestGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AReplication_TestGameMode_Statics::Class_MetaDataParams)
};
void AReplication_TestGameMode::StaticRegisterNativesAReplication_TestGameMode()
{
}
UClass* Z_Construct_UClass_AReplication_TestGameMode()
{
	if (!Z_Registration_Info_UClass_AReplication_TestGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AReplication_TestGameMode.OuterSingleton, Z_Construct_UClass_AReplication_TestGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AReplication_TestGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AReplication_TestGameMode);
AReplication_TestGameMode::~AReplication_TestGameMode() {}
// ********** End Class AReplication_TestGameMode **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Replication_TestGameMode_h__Script_Replication_Test_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AReplication_TestGameMode, AReplication_TestGameMode::StaticClass, TEXT("AReplication_TestGameMode"), &Z_Registration_Info_UClass_AReplication_TestGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AReplication_TestGameMode), 4001244974U) },
	};
}; // Z_CompiledInDeferFile_FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Replication_TestGameMode_h__Script_Replication_Test_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Replication_TestGameMode_h__Script_Replication_Test_4058801591{
	TEXT("/Script/Replication_Test"),
	Z_CompiledInDeferFile_FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Replication_TestGameMode_h__Script_Replication_Test_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Replication_TestGameMode_h__Script_Replication_Test_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
