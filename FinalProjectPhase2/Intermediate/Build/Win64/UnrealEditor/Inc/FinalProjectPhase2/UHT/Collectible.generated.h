// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Collectible.h"

#ifdef FINALPROJECTPHASE2_Collectible_generated_h
#error "Collectible.generated.h already included, missing '#pragma once' in Collectible.h"
#endif
#define FINALPROJECTPHASE2_Collectible_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class ACollectible *************************************************************
#define FID_FinalProjectPhase2_Source_FinalProjectPhase2_Collectible_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlap);


struct Z_Construct_UClass_ACollectible_Statics;
FINALPROJECTPHASE2_API UClass* Z_Construct_UClass_ACollectible_NoRegister();

#define FID_FinalProjectPhase2_Source_FinalProjectPhase2_Collectible_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACollectible(); \
	friend struct ::Z_Construct_UClass_ACollectible_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FINALPROJECTPHASE2_API UClass* ::Z_Construct_UClass_ACollectible_NoRegister(); \
public: \
	DECLARE_CLASS2(ACollectible, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FinalProjectPhase2"), Z_Construct_UClass_ACollectible_NoRegister) \
	DECLARE_SERIALIZER(ACollectible)


#define FID_FinalProjectPhase2_Source_FinalProjectPhase2_Collectible_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACollectible(ACollectible&&) = delete; \
	ACollectible(const ACollectible&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACollectible); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACollectible); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACollectible) \
	NO_API virtual ~ACollectible();


#define FID_FinalProjectPhase2_Source_FinalProjectPhase2_Collectible_h_9_PROLOG
#define FID_FinalProjectPhase2_Source_FinalProjectPhase2_Collectible_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FinalProjectPhase2_Source_FinalProjectPhase2_Collectible_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FinalProjectPhase2_Source_FinalProjectPhase2_Collectible_h_12_INCLASS_NO_PURE_DECLS \
	FID_FinalProjectPhase2_Source_FinalProjectPhase2_Collectible_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACollectible;

// ********** End Class ACollectible ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FinalProjectPhase2_Source_FinalProjectPhase2_Collectible_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
