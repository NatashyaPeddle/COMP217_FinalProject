// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AEnvironmentActor.h"

#ifdef FINALPROJECTPHASE2_AEnvironmentActor_generated_h
#error "AEnvironmentActor.generated.h already included, missing '#pragma once' in AEnvironmentActor.h"
#endif
#define FINALPROJECTPHASE2_AEnvironmentActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AEnvironmentActor ********************************************************
#define FID_Users_Elijah_Documents_GitHub_COMP217_FinalProject_FinalProjectPhase2_Source_FinalProjectPhase2_AEnvironmentActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCurrentTransform); \
	DECLARE_FUNCTION(execGetActorRotationCustom); \
	DECLARE_FUNCTION(execSetActorRotationCustom); \
	DECLARE_FUNCTION(execGetActorLocationCustom); \
	DECLARE_FUNCTION(execSetActorLocationCustom); \
	DECLARE_FUNCTION(execResetActorTransformation); \
	DECLARE_FUNCTION(execToggleLight);


struct Z_Construct_UClass_AEnvironmentActor_Statics;
FINALPROJECTPHASE2_API UClass* Z_Construct_UClass_AEnvironmentActor_NoRegister();

#define FID_Users_Elijah_Documents_GitHub_COMP217_FinalProject_FinalProjectPhase2_Source_FinalProjectPhase2_AEnvironmentActor_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnvironmentActor(); \
	friend struct ::Z_Construct_UClass_AEnvironmentActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FINALPROJECTPHASE2_API UClass* ::Z_Construct_UClass_AEnvironmentActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AEnvironmentActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FinalProjectPhase2"), Z_Construct_UClass_AEnvironmentActor_NoRegister) \
	DECLARE_SERIALIZER(AEnvironmentActor)


#define FID_Users_Elijah_Documents_GitHub_COMP217_FinalProject_FinalProjectPhase2_Source_FinalProjectPhase2_AEnvironmentActor_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AEnvironmentActor(AEnvironmentActor&&) = delete; \
	AEnvironmentActor(const AEnvironmentActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnvironmentActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnvironmentActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnvironmentActor) \
	NO_API virtual ~AEnvironmentActor();


#define FID_Users_Elijah_Documents_GitHub_COMP217_FinalProject_FinalProjectPhase2_Source_FinalProjectPhase2_AEnvironmentActor_h_13_PROLOG
#define FID_Users_Elijah_Documents_GitHub_COMP217_FinalProject_FinalProjectPhase2_Source_FinalProjectPhase2_AEnvironmentActor_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Elijah_Documents_GitHub_COMP217_FinalProject_FinalProjectPhase2_Source_FinalProjectPhase2_AEnvironmentActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Elijah_Documents_GitHub_COMP217_FinalProject_FinalProjectPhase2_Source_FinalProjectPhase2_AEnvironmentActor_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_Elijah_Documents_GitHub_COMP217_FinalProject_FinalProjectPhase2_Source_FinalProjectPhase2_AEnvironmentActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AEnvironmentActor;

// ********** End Class AEnvironmentActor **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Elijah_Documents_GitHub_COMP217_FinalProject_FinalProjectPhase2_Source_FinalProjectPhase2_AEnvironmentActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
