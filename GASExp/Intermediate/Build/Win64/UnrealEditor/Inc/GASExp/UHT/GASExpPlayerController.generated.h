// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GASExpPlayerController.h"

#ifdef GASEXP_GASExpPlayerController_generated_h
#error "GASExpPlayerController.generated.h already included, missing '#pragma once' in GASExpPlayerController.h"
#endif
#define GASEXP_GASExpPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AGASExpPlayerController **************************************************
struct Z_Construct_UClass_AGASExpPlayerController_Statics;
GASEXP_API UClass* Z_Construct_UClass_AGASExpPlayerController_NoRegister();

#define FID_UnrealEnigne_GAS_Experiment_GASExp_Source_GASExp_GASExpPlayerController_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGASExpPlayerController(); \
	friend struct ::Z_Construct_UClass_AGASExpPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GASEXP_API UClass* ::Z_Construct_UClass_AGASExpPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(AGASExpPlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/GASExp"), Z_Construct_UClass_AGASExpPlayerController_NoRegister) \
	DECLARE_SERIALIZER(AGASExpPlayerController)


#define FID_UnrealEnigne_GAS_Experiment_GASExp_Source_GASExp_GASExpPlayerController_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGASExpPlayerController(AGASExpPlayerController&&) = delete; \
	AGASExpPlayerController(const AGASExpPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGASExpPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGASExpPlayerController); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AGASExpPlayerController) \
	NO_API virtual ~AGASExpPlayerController();


#define FID_UnrealEnigne_GAS_Experiment_GASExp_Source_GASExp_GASExpPlayerController_h_21_PROLOG
#define FID_UnrealEnigne_GAS_Experiment_GASExp_Source_GASExp_GASExpPlayerController_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEnigne_GAS_Experiment_GASExp_Source_GASExp_GASExpPlayerController_h_24_INCLASS_NO_PURE_DECLS \
	FID_UnrealEnigne_GAS_Experiment_GASExp_Source_GASExp_GASExpPlayerController_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGASExpPlayerController;

// ********** End Class AGASExpPlayerController ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEnigne_GAS_Experiment_GASExp_Source_GASExp_GASExpPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
