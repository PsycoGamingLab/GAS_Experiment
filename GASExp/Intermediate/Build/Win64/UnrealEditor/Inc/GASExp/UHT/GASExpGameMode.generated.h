// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GASExpGameMode.h"

#ifdef GASEXP_GASExpGameMode_generated_h
#error "GASExpGameMode.generated.h already included, missing '#pragma once' in GASExpGameMode.h"
#endif
#define GASEXP_GASExpGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AGASExpGameMode **********************************************************
struct Z_Construct_UClass_AGASExpGameMode_Statics;
GASEXP_API UClass* Z_Construct_UClass_AGASExpGameMode_NoRegister();

#define FID_UnrealEnigne_GAS_Experiment_GASExp_Source_GASExp_GASExpGameMode_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGASExpGameMode(); \
	friend struct ::Z_Construct_UClass_AGASExpGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GASEXP_API UClass* ::Z_Construct_UClass_AGASExpGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(AGASExpGameMode, AGameModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/GASExp"), Z_Construct_UClass_AGASExpGameMode_NoRegister) \
	DECLARE_SERIALIZER(AGASExpGameMode)


#define FID_UnrealEnigne_GAS_Experiment_GASExp_Source_GASExp_GASExpGameMode_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGASExpGameMode(AGASExpGameMode&&) = delete; \
	AGASExpGameMode(const AGASExpGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGASExpGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGASExpGameMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AGASExpGameMode) \
	NO_API virtual ~AGASExpGameMode();


#define FID_UnrealEnigne_GAS_Experiment_GASExp_Source_GASExp_GASExpGameMode_h_14_PROLOG
#define FID_UnrealEnigne_GAS_Experiment_GASExp_Source_GASExp_GASExpGameMode_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEnigne_GAS_Experiment_GASExp_Source_GASExp_GASExpGameMode_h_17_INCLASS_NO_PURE_DECLS \
	FID_UnrealEnigne_GAS_Experiment_GASExp_Source_GASExp_GASExpGameMode_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGASExpGameMode;

// ********** End Class AGASExpGameMode ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEnigne_GAS_Experiment_GASExp_Source_GASExp_GASExpGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
