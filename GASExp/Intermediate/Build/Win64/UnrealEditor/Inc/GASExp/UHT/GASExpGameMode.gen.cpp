// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASExpGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeGASExpGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
GASEXP_API UClass* Z_Construct_UClass_AGASExpGameMode();
GASEXP_API UClass* Z_Construct_UClass_AGASExpGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_GASExp();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AGASExpGameMode **********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AGASExpGameMode;
UClass* AGASExpGameMode::GetPrivateStaticClass()
{
	using TClass = AGASExpGameMode;
	if (!Z_Registration_Info_UClass_AGASExpGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("GASExpGameMode"),
			Z_Registration_Info_UClass_AGASExpGameMode.InnerSingleton,
			StaticRegisterNativesAGASExpGameMode,
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
	return Z_Registration_Info_UClass_AGASExpGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AGASExpGameMode_NoRegister()
{
	return AGASExpGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AGASExpGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple Game Mode for a top-down perspective game\n *  Sets the default gameplay framework classes\n *  Check the Blueprint derived class for the set values\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GASExpGameMode.h" },
		{ "ModuleRelativePath", "GASExpGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple Game Mode for a top-down perspective game\nSets the default gameplay framework classes\nCheck the Blueprint derived class for the set values" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class AGASExpGameMode constinit property declarations **************************
// ********** End Class AGASExpGameMode constinit property declarations ****************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGASExpGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AGASExpGameMode_Statics
UObject* (*const Z_Construct_UClass_AGASExpGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_GASExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGASExpGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGASExpGameMode_Statics::ClassParams = {
	&AGASExpGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGASExpGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AGASExpGameMode_Statics::Class_MetaDataParams)
};
void AGASExpGameMode::StaticRegisterNativesAGASExpGameMode()
{
}
UClass* Z_Construct_UClass_AGASExpGameMode()
{
	if (!Z_Registration_Info_UClass_AGASExpGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGASExpGameMode.OuterSingleton, Z_Construct_UClass_AGASExpGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGASExpGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AGASExpGameMode);
AGASExpGameMode::~AGASExpGameMode() {}
// ********** End Class AGASExpGameMode ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEnigne_GAS_Experiment_GASExp_Source_GASExp_GASExpGameMode_h__Script_GASExp_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGASExpGameMode, AGASExpGameMode::StaticClass, TEXT("AGASExpGameMode"), &Z_Registration_Info_UClass_AGASExpGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGASExpGameMode), 1545097373U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEnigne_GAS_Experiment_GASExp_Source_GASExp_GASExpGameMode_h__Script_GASExp_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEnigne_GAS_Experiment_GASExp_Source_GASExp_GASExpGameMode_h__Script_GASExp_3418082275{
	TEXT("/Script/GASExp"),
	Z_CompiledInDeferFile_FID_UnrealEnigne_GAS_Experiment_GASExp_Source_GASExp_GASExpGameMode_h__Script_GASExp_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEnigne_GAS_Experiment_GASExp_Source_GASExp_GASExpGameMode_h__Script_GASExp_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
