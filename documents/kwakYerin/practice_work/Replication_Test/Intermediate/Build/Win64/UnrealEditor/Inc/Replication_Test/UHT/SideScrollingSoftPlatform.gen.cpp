// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SideScrollingSoftPlatform.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSideScrollingSoftPlatform() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
REPLICATION_TEST_API UClass* Z_Construct_UClass_ASideScrollingSoftPlatform();
REPLICATION_TEST_API UClass* Z_Construct_UClass_ASideScrollingSoftPlatform_NoRegister();
UPackage* Z_Construct_UPackage__Script_Replication_Test();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASideScrollingSoftPlatform Function OnSoftCollisionOverlap ***************
struct Z_Construct_UFunction_ASideScrollingSoftPlatform_OnSoftCollisionOverlap_Statics
{
	struct SideScrollingSoftPlatform_eventOnSoftCollisionOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles soft collision check box overlaps */" },
#endif
		{ "ModuleRelativePath", "Variant_SideScrolling/Gameplay/SideScrollingSoftPlatform.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles soft collision check box overlaps" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnSoftCollisionOverlap constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnSoftCollisionOverlap constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnSoftCollisionOverlap Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASideScrollingSoftPlatform_OnSoftCollisionOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SideScrollingSoftPlatform_eventOnSoftCollisionOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASideScrollingSoftPlatform_OnSoftCollisionOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SideScrollingSoftPlatform_eventOnSoftCollisionOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASideScrollingSoftPlatform_OnSoftCollisionOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SideScrollingSoftPlatform_eventOnSoftCollisionOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASideScrollingSoftPlatform_OnSoftCollisionOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SideScrollingSoftPlatform_eventOnSoftCollisionOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ASideScrollingSoftPlatform_OnSoftCollisionOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((SideScrollingSoftPlatform_eventOnSoftCollisionOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASideScrollingSoftPlatform_OnSoftCollisionOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SideScrollingSoftPlatform_eventOnSoftCollisionOverlap_Parms), &Z_Construct_UFunction_ASideScrollingSoftPlatform_OnSoftCollisionOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASideScrollingSoftPlatform_OnSoftCollisionOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SideScrollingSoftPlatform_eventOnSoftCollisionOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 222120718
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASideScrollingSoftPlatform_OnSoftCollisionOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASideScrollingSoftPlatform_OnSoftCollisionOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASideScrollingSoftPlatform_OnSoftCollisionOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASideScrollingSoftPlatform_OnSoftCollisionOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASideScrollingSoftPlatform_OnSoftCollisionOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASideScrollingSoftPlatform_OnSoftCollisionOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASideScrollingSoftPlatform_OnSoftCollisionOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASideScrollingSoftPlatform_OnSoftCollisionOverlap_Statics::PropPointers) < 2048);
// ********** End Function OnSoftCollisionOverlap Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASideScrollingSoftPlatform_OnSoftCollisionOverlap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASideScrollingSoftPlatform, nullptr, "OnSoftCollisionOverlap", 	Z_Construct_UFunction_ASideScrollingSoftPlatform_OnSoftCollisionOverlap_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ASideScrollingSoftPlatform_OnSoftCollisionOverlap_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ASideScrollingSoftPlatform_OnSoftCollisionOverlap_Statics::SideScrollingSoftPlatform_eventOnSoftCollisionOverlap_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASideScrollingSoftPlatform_OnSoftCollisionOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASideScrollingSoftPlatform_OnSoftCollisionOverlap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASideScrollingSoftPlatform_OnSoftCollisionOverlap_Statics::SideScrollingSoftPlatform_eventOnSoftCollisionOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASideScrollingSoftPlatform_OnSoftCollisionOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASideScrollingSoftPlatform_OnSoftCollisionOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASideScrollingSoftPlatform::execOnSoftCollisionOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSoftCollisionOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// ********** End Class ASideScrollingSoftPlatform Function OnSoftCollisionOverlap *****************

// ********** Begin Class ASideScrollingSoftPlatform ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ASideScrollingSoftPlatform;
UClass* ASideScrollingSoftPlatform::GetPrivateStaticClass()
{
	using TClass = ASideScrollingSoftPlatform;
	if (!Z_Registration_Info_UClass_ASideScrollingSoftPlatform.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SideScrollingSoftPlatform"),
			Z_Registration_Info_UClass_ASideScrollingSoftPlatform.InnerSingleton,
			StaticRegisterNativesASideScrollingSoftPlatform,
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
	return Z_Registration_Info_UClass_ASideScrollingSoftPlatform.InnerSingleton;
}
UClass* Z_Construct_UClass_ASideScrollingSoftPlatform_NoRegister()
{
	return ASideScrollingSoftPlatform::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASideScrollingSoftPlatform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  A side scrolling game platform that the character can jump or drop through.\n */" },
#endif
		{ "IncludePath", "Variant_SideScrolling/Gameplay/SideScrollingSoftPlatform.h" },
		{ "ModuleRelativePath", "Variant_SideScrolling/Gameplay/SideScrollingSoftPlatform.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A side scrolling game platform that the character can jump or drop through." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Root component */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Variant_SideScrolling/Gameplay/SideScrollingSoftPlatform.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Root component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Platform mesh. The part we collide against and see */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Variant_SideScrolling/Gameplay/SideScrollingSoftPlatform.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Platform mesh. The part we collide against and see" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionCheckBox_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Collision volume that toggles soft collision on the character when they're below the platform. */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Variant_SideScrolling/Gameplay/SideScrollingSoftPlatform.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Collision volume that toggles soft collision on the character when they're below the platform." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class ASideScrollingSoftPlatform constinit property declarations ***************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionCheckBox;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ASideScrollingSoftPlatform constinit property declarations *****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("OnSoftCollisionOverlap"), .Pointer = &ASideScrollingSoftPlatform::execOnSoftCollisionOverlap },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASideScrollingSoftPlatform_OnSoftCollisionOverlap, "OnSoftCollisionOverlap" }, // 1368253716
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASideScrollingSoftPlatform>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ASideScrollingSoftPlatform_Statics

// ********** Begin Class ASideScrollingSoftPlatform Property Definitions **************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASideScrollingSoftPlatform_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASideScrollingSoftPlatform, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Root_MetaData), NewProp_Root_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASideScrollingSoftPlatform_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASideScrollingSoftPlatform, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASideScrollingSoftPlatform_Statics::NewProp_CollisionCheckBox = { "CollisionCheckBox", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASideScrollingSoftPlatform, CollisionCheckBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionCheckBox_MetaData), NewProp_CollisionCheckBox_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASideScrollingSoftPlatform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASideScrollingSoftPlatform_Statics::NewProp_Root,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASideScrollingSoftPlatform_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASideScrollingSoftPlatform_Statics::NewProp_CollisionCheckBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASideScrollingSoftPlatform_Statics::PropPointers) < 2048);
// ********** End Class ASideScrollingSoftPlatform Property Definitions ****************************
UObject* (*const Z_Construct_UClass_ASideScrollingSoftPlatform_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Replication_Test,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASideScrollingSoftPlatform_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASideScrollingSoftPlatform_Statics::ClassParams = {
	&ASideScrollingSoftPlatform::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASideScrollingSoftPlatform_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASideScrollingSoftPlatform_Statics::PropPointers),
	0,
	0x008000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASideScrollingSoftPlatform_Statics::Class_MetaDataParams), Z_Construct_UClass_ASideScrollingSoftPlatform_Statics::Class_MetaDataParams)
};
void ASideScrollingSoftPlatform::StaticRegisterNativesASideScrollingSoftPlatform()
{
	UClass* Class = ASideScrollingSoftPlatform::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_ASideScrollingSoftPlatform_Statics::Funcs));
}
UClass* Z_Construct_UClass_ASideScrollingSoftPlatform()
{
	if (!Z_Registration_Info_UClass_ASideScrollingSoftPlatform.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASideScrollingSoftPlatform.OuterSingleton, Z_Construct_UClass_ASideScrollingSoftPlatform_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASideScrollingSoftPlatform.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ASideScrollingSoftPlatform);
ASideScrollingSoftPlatform::~ASideScrollingSoftPlatform() {}
// ********** End Class ASideScrollingSoftPlatform *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Variant_SideScrolling_Gameplay_SideScrollingSoftPlatform_h__Script_Replication_Test_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASideScrollingSoftPlatform, ASideScrollingSoftPlatform::StaticClass, TEXT("ASideScrollingSoftPlatform"), &Z_Registration_Info_UClass_ASideScrollingSoftPlatform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASideScrollingSoftPlatform), 4056823130U) },
	};
}; // Z_CompiledInDeferFile_FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Variant_SideScrolling_Gameplay_SideScrollingSoftPlatform_h__Script_Replication_Test_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Variant_SideScrolling_Gameplay_SideScrollingSoftPlatform_h__Script_Replication_Test_3805555610{
	TEXT("/Script/Replication_Test"),
	Z_CompiledInDeferFile_FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Variant_SideScrolling_Gameplay_SideScrollingSoftPlatform_h__Script_Replication_Test_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Variant_SideScrolling_Gameplay_SideScrollingSoftPlatform_h__Script_Replication_Test_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
