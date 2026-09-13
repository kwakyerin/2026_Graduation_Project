// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SideScrollingAIController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSideScrollingAIController() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
GAMEPLAYSTATETREEMODULE_API UClass* Z_Construct_UClass_UStateTreeAIComponent_NoRegister();
REPLICATION_TEST_API UClass* Z_Construct_UClass_ASideScrollingAIController();
REPLICATION_TEST_API UClass* Z_Construct_UClass_ASideScrollingAIController_NoRegister();
UPackage* Z_Construct_UPackage__Script_Replication_Test();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASideScrollingAIController ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ASideScrollingAIController;
UClass* ASideScrollingAIController::GetPrivateStaticClass()
{
	using TClass = ASideScrollingAIController;
	if (!Z_Registration_Info_UClass_ASideScrollingAIController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SideScrollingAIController"),
			Z_Registration_Info_UClass_ASideScrollingAIController.InnerSingleton,
			StaticRegisterNativesASideScrollingAIController,
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
	return Z_Registration_Info_UClass_ASideScrollingAIController.InnerSingleton;
}
UClass* Z_Construct_UClass_ASideScrollingAIController_NoRegister()
{
	return ASideScrollingAIController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASideScrollingAIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  A basic AI Controller capable of running StateTree\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Variant_SideScrolling/AI/SideScrollingAIController.h" },
		{ "ModuleRelativePath", "Variant_SideScrolling/AI/SideScrollingAIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A basic AI Controller capable of running StateTree" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateTreeAI_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** StateTree Component */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Variant_SideScrolling/AI/SideScrollingAIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "StateTree Component" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class ASideScrollingAIController constinit property declarations ***************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StateTreeAI;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ASideScrollingAIController constinit property declarations *****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASideScrollingAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ASideScrollingAIController_Statics

// ********** Begin Class ASideScrollingAIController Property Definitions **************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASideScrollingAIController_Statics::NewProp_StateTreeAI = { "StateTreeAI", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASideScrollingAIController, StateTreeAI), Z_Construct_UClass_UStateTreeAIComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateTreeAI_MetaData), NewProp_StateTreeAI_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASideScrollingAIController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASideScrollingAIController_Statics::NewProp_StateTreeAI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASideScrollingAIController_Statics::PropPointers) < 2048);
// ********** End Class ASideScrollingAIController Property Definitions ****************************
UObject* (*const Z_Construct_UClass_ASideScrollingAIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_Replication_Test,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASideScrollingAIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASideScrollingAIController_Statics::ClassParams = {
	&ASideScrollingAIController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASideScrollingAIController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASideScrollingAIController_Statics::PropPointers),
	0,
	0x008002A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASideScrollingAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_ASideScrollingAIController_Statics::Class_MetaDataParams)
};
void ASideScrollingAIController::StaticRegisterNativesASideScrollingAIController()
{
}
UClass* Z_Construct_UClass_ASideScrollingAIController()
{
	if (!Z_Registration_Info_UClass_ASideScrollingAIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASideScrollingAIController.OuterSingleton, Z_Construct_UClass_ASideScrollingAIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASideScrollingAIController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ASideScrollingAIController);
ASideScrollingAIController::~ASideScrollingAIController() {}
// ********** End Class ASideScrollingAIController *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Variant_SideScrolling_AI_SideScrollingAIController_h__Script_Replication_Test_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASideScrollingAIController, ASideScrollingAIController::StaticClass, TEXT("ASideScrollingAIController"), &Z_Registration_Info_UClass_ASideScrollingAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASideScrollingAIController), 1264451426U) },
	};
}; // Z_CompiledInDeferFile_FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Variant_SideScrolling_AI_SideScrollingAIController_h__Script_Replication_Test_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Variant_SideScrolling_AI_SideScrollingAIController_h__Script_Replication_Test_2100286480{
	TEXT("/Script/Replication_Test"),
	Z_CompiledInDeferFile_FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Variant_SideScrolling_AI_SideScrollingAIController_h__Script_Replication_Test_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Variant_SideScrolling_AI_SideScrollingAIController_h__Script_Replication_Test_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
