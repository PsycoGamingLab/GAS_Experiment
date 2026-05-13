// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GASExpCharacter.h"

#ifdef GASEXP_GASExpCharacter_generated_h
#error "GASExpCharacter.generated.h already included, missing '#pragma once' in GASExpCharacter.h"
#endif
#define GASEXP_GASExpCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AGASExpCharacter *********************************************************
struct Z_Construct_UClass_AGASExpCharacter_Statics;
GASEXP_API UClass* Z_Construct_UClass_AGASExpCharacter_NoRegister();

#define FID_UnrealEnigne_GAS_Experiment_GASExp_Source_GASExp_GASExpCharacter_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGASExpCharacter(); \
	friend struct ::Z_Construct_UClass_AGASExpCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GASEXP_API UClass* ::Z_Construct_UClass_AGASExpCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AGASExpCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/GASExp"), Z_Construct_UClass_AGASExpCharacter_NoRegister) \
	DECLARE_SERIALIZER(AGASExpCharacter)


#define FID_UnrealEnigne_GAS_Experiment_GASExp_Source_GASExp_GASExpCharacter_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGASExpCharacter(AGASExpCharacter&&) = delete; \
	AGASExpCharacter(const AGASExpCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGASExpCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGASExpCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AGASExpCharacter) \
	NO_API virtual ~AGASExpCharacter();


#define FID_UnrealEnigne_GAS_Experiment_GASExp_Source_GASExp_GASExpCharacter_h_15_PROLOG
#define FID_UnrealEnigne_GAS_Experiment_GASExp_Source_GASExp_GASExpCharacter_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEnigne_GAS_Experiment_GASExp_Source_GASExp_GASExpCharacter_h_18_INCLASS_NO_PURE_DECLS \
	FID_UnrealEnigne_GAS_Experiment_GASExp_Source_GASExp_GASExpCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGASExpCharacter;

// ********** End Class AGASExpCharacter ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEnigne_GAS_Experiment_GASExp_Source_GASExp_GASExpCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
