// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyGameMode.h"

#ifdef FINALPROJECTPHASE2_MyGameMode_generated_h
#error "MyGameMode.generated.h already included, missing '#pragma once' in MyGameMode.h"
#endif
#define FINALPROJECTPHASE2_MyGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMyGameMode **************************************************************
struct Z_Construct_UClass_AMyGameMode_Statics;
FINALPROJECTPHASE2_API UClass* Z_Construct_UClass_AMyGameMode_NoRegister();

#define FID_Users_Elijah_Documents_GitHub_COMP217_FinalProject_FinalProjectPhase2_Source_FinalProjectPhase2_MyGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyGameMode(); \
	friend struct ::Z_Construct_UClass_AMyGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FINALPROJECTPHASE2_API UClass* ::Z_Construct_UClass_AMyGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(AMyGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/FinalProjectPhase2"), Z_Construct_UClass_AMyGameMode_NoRegister) \
	DECLARE_SERIALIZER(AMyGameMode)


#define FID_Users_Elijah_Documents_GitHub_COMP217_FinalProject_FinalProjectPhase2_Source_FinalProjectPhase2_MyGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMyGameMode(AMyGameMode&&) = delete; \
	AMyGameMode(const AMyGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyGameMode) \
	NO_API virtual ~AMyGameMode();


#define FID_Users_Elijah_Documents_GitHub_COMP217_FinalProject_FinalProjectPhase2_Source_FinalProjectPhase2_MyGameMode_h_12_PROLOG
#define FID_Users_Elijah_Documents_GitHub_COMP217_FinalProject_FinalProjectPhase2_Source_FinalProjectPhase2_MyGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Elijah_Documents_GitHub_COMP217_FinalProject_FinalProjectPhase2_Source_FinalProjectPhase2_MyGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_Elijah_Documents_GitHub_COMP217_FinalProject_FinalProjectPhase2_Source_FinalProjectPhase2_MyGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMyGameMode;

// ********** End Class AMyGameMode ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Elijah_Documents_GitHub_COMP217_FinalProject_FinalProjectPhase2_Source_FinalProjectPhase2_MyGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
