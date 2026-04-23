// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FinalProjectPhase2/MyGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMyGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
FINALPROJECTPHASE2_API UClass* Z_Construct_UClass_AMyGameMode();
FINALPROJECTPHASE2_API UClass* Z_Construct_UClass_AMyGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_FinalProjectPhase2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMyGameMode **************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AMyGameMode;
UClass* AMyGameMode::GetPrivateStaticClass()
{
	using TClass = AMyGameMode;
	if (!Z_Registration_Info_UClass_AMyGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MyGameMode"),
			Z_Registration_Info_UClass_AMyGameMode.InnerSingleton,
			StaticRegisterNativesAMyGameMode,
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
	return Z_Registration_Info_UClass_AMyGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AMyGameMode_NoRegister()
{
	return AMyGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMyGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MyGameMode.h" },
		{ "ModuleRelativePath", "MyGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA

// ********** Begin Class AMyGameMode constinit property declarations ******************************
// ********** End Class AMyGameMode constinit property declarations ********************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AMyGameMode_Statics
UObject* (*const Z_Construct_UClass_AMyGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_FinalProjectPhase2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyGameMode_Statics::ClassParams = {
	&AMyGameMode::StaticClass,
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
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyGameMode_Statics::Class_MetaDataParams)
};
void AMyGameMode::StaticRegisterNativesAMyGameMode()
{
}
UClass* Z_Construct_UClass_AMyGameMode()
{
	if (!Z_Registration_Info_UClass_AMyGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyGameMode.OuterSingleton, Z_Construct_UClass_AMyGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AMyGameMode);
AMyGameMode::~AMyGameMode() {}
// ********** End Class AMyGameMode ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Elijah_Documents_GitHub_COMP217_FinalProject_FinalProjectPhase2_Source_FinalProjectPhase2_MyGameMode_h__Script_FinalProjectPhase2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyGameMode, AMyGameMode::StaticClass, TEXT("AMyGameMode"), &Z_Registration_Info_UClass_AMyGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyGameMode), 1353161147U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Elijah_Documents_GitHub_COMP217_FinalProject_FinalProjectPhase2_Source_FinalProjectPhase2_MyGameMode_h__Script_FinalProjectPhase2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Elijah_Documents_GitHub_COMP217_FinalProject_FinalProjectPhase2_Source_FinalProjectPhase2_MyGameMode_h__Script_FinalProjectPhase2_624371833{
	TEXT("/Script/FinalProjectPhase2"),
	Z_CompiledInDeferFile_FID_Users_Elijah_Documents_GitHub_COMP217_FinalProject_FinalProjectPhase2_Source_FinalProjectPhase2_MyGameMode_h__Script_FinalProjectPhase2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Elijah_Documents_GitHub_COMP217_FinalProject_FinalProjectPhase2_Source_FinalProjectPhase2_MyGameMode_h__Script_FinalProjectPhase2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
