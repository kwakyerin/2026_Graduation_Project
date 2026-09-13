// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlatformingGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePlatformingGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
REPLICATION_TEST_API UClass* Z_Construct_UClass_APlatformingGameMode();
REPLICATION_TEST_API UClass* Z_Construct_UClass_APlatformingGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Replication_Test();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APlatformingGameMode *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_APlatformingGameMode;
UClass* APlatformingGameMode::GetPrivateStaticClass()
{
	using TClass = APlatformingGameMode;
	if (!Z_Registration_Info_UClass_APlatformingGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PlatformingGameMode"),
			Z_Registration_Info_UClass_APlatformingGameMode.InnerSingleton,
			StaticRegisterNativesAPlatformingGameMode,
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
	return Z_Registration_Info_UClass_APlatformingGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_APlatformingGameMode_NoRegister()
{
	return APlatformingGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APlatformingGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a third person platforming game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Variant_Platforming/PlatformingGameMode.h" },
		{ "ModuleRelativePath", "Variant_Platforming/PlatformingGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person platforming game" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class APlatformingGameMode constinit property declarations *********************
// ********** End Class APlatformingGameMode constinit property declarations ***********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlatformingGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_APlatformingGameMode_Statics
UObject* (*const Z_Construct_UClass_APlatformingGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Replication_Test,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformingGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlatformingGameMode_Statics::ClassParams = {
	&APlatformingGameMode::StaticClass,
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
	0x008002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformingGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_APlatformingGameMode_Statics::Class_MetaDataParams)
};
void APlatformingGameMode::StaticRegisterNativesAPlatformingGameMode()
{
}
UClass* Z_Construct_UClass_APlatformingGameMode()
{
	if (!Z_Registration_Info_UClass_APlatformingGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlatformingGameMode.OuterSingleton, Z_Construct_UClass_APlatformingGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlatformingGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, APlatformingGameMode);
APlatformingGameMode::~APlatformingGameMode() {}
// ********** End Class APlatformingGameMode *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Variant_Platforming_PlatformingGameMode_h__Script_Replication_Test_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlatformingGameMode, APlatformingGameMode::StaticClass, TEXT("APlatformingGameMode"), &Z_Registration_Info_UClass_APlatformingGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlatformingGameMode), 2960572120U) },
	};
}; // Z_CompiledInDeferFile_FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Variant_Platforming_PlatformingGameMode_h__Script_Replication_Test_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Variant_Platforming_PlatformingGameMode_h__Script_Replication_Test_300051877{
	TEXT("/Script/Replication_Test"),
	Z_CompiledInDeferFile_FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Variant_Platforming_PlatformingGameMode_h__Script_Replication_Test_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Variant_Platforming_PlatformingGameMode_h__Script_Replication_Test_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
