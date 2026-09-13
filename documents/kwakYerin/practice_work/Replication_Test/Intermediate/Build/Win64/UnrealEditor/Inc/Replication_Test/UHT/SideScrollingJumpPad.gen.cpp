// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SideScrollingJumpPad.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSideScrollingJumpPad() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
REPLICATION_TEST_API UClass* Z_Construct_UClass_ASideScrollingJumpPad();
REPLICATION_TEST_API UClass* Z_Construct_UClass_ASideScrollingJumpPad_NoRegister();
UPackage* Z_Construct_UPackage__Script_Replication_Test();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASideScrollingJumpPad Function BeginOverlap ******************************
struct Z_Construct_UFunction_ASideScrollingJumpPad_BeginOverlap_Statics
{
	struct SideScrollingJumpPad_eventBeginOverlap_Parms
	{
		AActor* OverlappedActor;
		AActor* OtherActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Variant_SideScrolling/Gameplay/SideScrollingJumpPad.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function BeginOverlap constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BeginOverlap constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BeginOverlap Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASideScrollingJumpPad_BeginOverlap_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SideScrollingJumpPad_eventBeginOverlap_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASideScrollingJumpPad_BeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SideScrollingJumpPad_eventBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASideScrollingJumpPad_BeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASideScrollingJumpPad_BeginOverlap_Statics::NewProp_OverlappedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASideScrollingJumpPad_BeginOverlap_Statics::NewProp_OtherActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASideScrollingJumpPad_BeginOverlap_Statics::PropPointers) < 2048);
// ********** End Function BeginOverlap Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASideScrollingJumpPad_BeginOverlap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASideScrollingJumpPad, nullptr, "BeginOverlap", 	Z_Construct_UFunction_ASideScrollingJumpPad_BeginOverlap_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ASideScrollingJumpPad_BeginOverlap_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ASideScrollingJumpPad_BeginOverlap_Statics::SideScrollingJumpPad_eventBeginOverlap_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASideScrollingJumpPad_BeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASideScrollingJumpPad_BeginOverlap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASideScrollingJumpPad_BeginOverlap_Statics::SideScrollingJumpPad_eventBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASideScrollingJumpPad_BeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASideScrollingJumpPad_BeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASideScrollingJumpPad::execBeginOverlap)
{
	P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BeginOverlap(Z_Param_OverlappedActor,Z_Param_OtherActor);
	P_NATIVE_END;
}
// ********** End Class ASideScrollingJumpPad Function BeginOverlap ********************************

// ********** Begin Class ASideScrollingJumpPad ****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ASideScrollingJumpPad;
UClass* ASideScrollingJumpPad::GetPrivateStaticClass()
{
	using TClass = ASideScrollingJumpPad;
	if (!Z_Registration_Info_UClass_ASideScrollingJumpPad.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SideScrollingJumpPad"),
			Z_Registration_Info_UClass_ASideScrollingJumpPad.InnerSingleton,
			StaticRegisterNativesASideScrollingJumpPad,
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
	return Z_Registration_Info_UClass_ASideScrollingJumpPad.InnerSingleton;
}
UClass* Z_Construct_UClass_ASideScrollingJumpPad_NoRegister()
{
	return ASideScrollingJumpPad::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASideScrollingJumpPad_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  A simple jump pad that launches characters into the air\n */" },
#endif
		{ "IncludePath", "Variant_SideScrolling/Gameplay/SideScrollingJumpPad.h" },
		{ "ModuleRelativePath", "Variant_SideScrolling/Gameplay/SideScrollingJumpPad.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A simple jump pad that launches characters into the air" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump pad bounding box */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Variant_SideScrolling/Gameplay/SideScrollingJumpPad.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump pad bounding box" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZStrength_MetaData[] = {
		{ "Category", "Jump Pad" },
		{ "ClampMax", "10000" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Vertical velocity to set the character to when they use the jump pad */" },
#endif
		{ "ModuleRelativePath", "Variant_SideScrolling/Gameplay/SideScrollingJumpPad.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vertical velocity to set the character to when they use the jump pad" },
#endif
		{ "Units", "cm/s" },
	};
#endif // WITH_METADATA

// ********** Begin Class ASideScrollingJumpPad constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Box;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZStrength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ASideScrollingJumpPad constinit property declarations **********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("BeginOverlap"), .Pointer = &ASideScrollingJumpPad::execBeginOverlap },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASideScrollingJumpPad_BeginOverlap, "BeginOverlap" }, // 3765512133
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASideScrollingJumpPad>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ASideScrollingJumpPad_Statics

// ********** Begin Class ASideScrollingJumpPad Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASideScrollingJumpPad_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASideScrollingJumpPad, Box), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Box_MetaData), NewProp_Box_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASideScrollingJumpPad_Statics::NewProp_ZStrength = { "ZStrength", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASideScrollingJumpPad, ZStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZStrength_MetaData), NewProp_ZStrength_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASideScrollingJumpPad_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASideScrollingJumpPad_Statics::NewProp_Box,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASideScrollingJumpPad_Statics::NewProp_ZStrength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASideScrollingJumpPad_Statics::PropPointers) < 2048);
// ********** End Class ASideScrollingJumpPad Property Definitions *********************************
UObject* (*const Z_Construct_UClass_ASideScrollingJumpPad_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Replication_Test,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASideScrollingJumpPad_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASideScrollingJumpPad_Statics::ClassParams = {
	&ASideScrollingJumpPad::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASideScrollingJumpPad_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASideScrollingJumpPad_Statics::PropPointers),
	0,
	0x008000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASideScrollingJumpPad_Statics::Class_MetaDataParams), Z_Construct_UClass_ASideScrollingJumpPad_Statics::Class_MetaDataParams)
};
void ASideScrollingJumpPad::StaticRegisterNativesASideScrollingJumpPad()
{
	UClass* Class = ASideScrollingJumpPad::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_ASideScrollingJumpPad_Statics::Funcs));
}
UClass* Z_Construct_UClass_ASideScrollingJumpPad()
{
	if (!Z_Registration_Info_UClass_ASideScrollingJumpPad.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASideScrollingJumpPad.OuterSingleton, Z_Construct_UClass_ASideScrollingJumpPad_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASideScrollingJumpPad.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ASideScrollingJumpPad);
ASideScrollingJumpPad::~ASideScrollingJumpPad() {}
// ********** End Class ASideScrollingJumpPad ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Variant_SideScrolling_Gameplay_SideScrollingJumpPad_h__Script_Replication_Test_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASideScrollingJumpPad, ASideScrollingJumpPad::StaticClass, TEXT("ASideScrollingJumpPad"), &Z_Registration_Info_UClass_ASideScrollingJumpPad, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASideScrollingJumpPad), 2459151027U) },
	};
}; // Z_CompiledInDeferFile_FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Variant_SideScrolling_Gameplay_SideScrollingJumpPad_h__Script_Replication_Test_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Variant_SideScrolling_Gameplay_SideScrollingJumpPad_h__Script_Replication_Test_590746415{
	TEXT("/Script/Replication_Test"),
	Z_CompiledInDeferFile_FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Variant_SideScrolling_Gameplay_SideScrollingJumpPad_h__Script_Replication_Test_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Variant_SideScrolling_Gameplay_SideScrollingJumpPad_h__Script_Replication_Test_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
