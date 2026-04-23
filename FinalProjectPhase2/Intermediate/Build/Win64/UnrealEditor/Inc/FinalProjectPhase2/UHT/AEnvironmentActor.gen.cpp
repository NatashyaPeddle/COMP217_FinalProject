// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FinalProjectPhase2/AEnvironmentActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAEnvironmentActor() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
FINALPROJECTPHASE2_API UClass* Z_Construct_UClass_AEnvironmentActor();
FINALPROJECTPHASE2_API UClass* Z_Construct_UClass_AEnvironmentActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_FinalProjectPhase2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AEnvironmentActor Function GetActorLocationCustom ************************
struct Z_Construct_UFunction_AEnvironmentActor_GetActorLocationCustom_Statics
{
	struct EnvironmentActor_eventGetActorLocationCustom_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Environment" },
		{ "ModuleRelativePath", "AEnvironmentActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetActorLocationCustom constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetActorLocationCustom constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetActorLocationCustom Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEnvironmentActor_GetActorLocationCustom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnvironmentActor_eventGetActorLocationCustom_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnvironmentActor_GetActorLocationCustom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnvironmentActor_GetActorLocationCustom_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnvironmentActor_GetActorLocationCustom_Statics::PropPointers) < 2048);
// ********** End Function GetActorLocationCustom Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnvironmentActor_GetActorLocationCustom_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEnvironmentActor, nullptr, "GetActorLocationCustom", 	Z_Construct_UFunction_AEnvironmentActor_GetActorLocationCustom_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AEnvironmentActor_GetActorLocationCustom_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AEnvironmentActor_GetActorLocationCustom_Statics::EnvironmentActor_eventGetActorLocationCustom_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnvironmentActor_GetActorLocationCustom_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnvironmentActor_GetActorLocationCustom_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AEnvironmentActor_GetActorLocationCustom_Statics::EnvironmentActor_eventGetActorLocationCustom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnvironmentActor_GetActorLocationCustom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnvironmentActor_GetActorLocationCustom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnvironmentActor::execGetActorLocationCustom)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetActorLocationCustom();
	P_NATIVE_END;
}
// ********** End Class AEnvironmentActor Function GetActorLocationCustom **************************

// ********** Begin Class AEnvironmentActor Function GetActorRotationCustom ************************
struct Z_Construct_UFunction_AEnvironmentActor_GetActorRotationCustom_Statics
{
	struct EnvironmentActor_eventGetActorRotationCustom_Parms
	{
		FRotator ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Environment" },
		{ "ModuleRelativePath", "AEnvironmentActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetActorRotationCustom constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetActorRotationCustom constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetActorRotationCustom Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEnvironmentActor_GetActorRotationCustom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnvironmentActor_eventGetActorRotationCustom_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnvironmentActor_GetActorRotationCustom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnvironmentActor_GetActorRotationCustom_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnvironmentActor_GetActorRotationCustom_Statics::PropPointers) < 2048);
// ********** End Function GetActorRotationCustom Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnvironmentActor_GetActorRotationCustom_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEnvironmentActor, nullptr, "GetActorRotationCustom", 	Z_Construct_UFunction_AEnvironmentActor_GetActorRotationCustom_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AEnvironmentActor_GetActorRotationCustom_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AEnvironmentActor_GetActorRotationCustom_Statics::EnvironmentActor_eventGetActorRotationCustom_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnvironmentActor_GetActorRotationCustom_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnvironmentActor_GetActorRotationCustom_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AEnvironmentActor_GetActorRotationCustom_Statics::EnvironmentActor_eventGetActorRotationCustom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnvironmentActor_GetActorRotationCustom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnvironmentActor_GetActorRotationCustom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnvironmentActor::execGetActorRotationCustom)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRotator*)Z_Param__Result=P_THIS->GetActorRotationCustom();
	P_NATIVE_END;
}
// ********** End Class AEnvironmentActor Function GetActorRotationCustom **************************

// ********** Begin Class AEnvironmentActor Function GetCurrentTransform ***************************
struct Z_Construct_UFunction_AEnvironmentActor_GetCurrentTransform_Statics
{
	struct EnvironmentActor_eventGetCurrentTransform_Parms
	{
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Environment" },
		{ "ModuleRelativePath", "AEnvironmentActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurrentTransform constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurrentTransform constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurrentTransform Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEnvironmentActor_GetCurrentTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnvironmentActor_eventGetCurrentTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnvironmentActor_GetCurrentTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnvironmentActor_GetCurrentTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnvironmentActor_GetCurrentTransform_Statics::PropPointers) < 2048);
// ********** End Function GetCurrentTransform Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnvironmentActor_GetCurrentTransform_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEnvironmentActor, nullptr, "GetCurrentTransform", 	Z_Construct_UFunction_AEnvironmentActor_GetCurrentTransform_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AEnvironmentActor_GetCurrentTransform_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AEnvironmentActor_GetCurrentTransform_Statics::EnvironmentActor_eventGetCurrentTransform_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnvironmentActor_GetCurrentTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnvironmentActor_GetCurrentTransform_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AEnvironmentActor_GetCurrentTransform_Statics::EnvironmentActor_eventGetCurrentTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnvironmentActor_GetCurrentTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnvironmentActor_GetCurrentTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnvironmentActor::execGetCurrentTransform)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=P_THIS->GetCurrentTransform();
	P_NATIVE_END;
}
// ********** End Class AEnvironmentActor Function GetCurrentTransform *****************************

// ********** Begin Class AEnvironmentActor Function ResetActorTransformation **********************
struct Z_Construct_UFunction_AEnvironmentActor_ResetActorTransformation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Environment" },
		{ "ModuleRelativePath", "AEnvironmentActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ResetActorTransformation constinit property declarations **************
// ********** End Function ResetActorTransformation constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnvironmentActor_ResetActorTransformation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEnvironmentActor, nullptr, "ResetActorTransformation", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnvironmentActor_ResetActorTransformation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnvironmentActor_ResetActorTransformation_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AEnvironmentActor_ResetActorTransformation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnvironmentActor_ResetActorTransformation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnvironmentActor::execResetActorTransformation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetActorTransformation();
	P_NATIVE_END;
}
// ********** End Class AEnvironmentActor Function ResetActorTransformation ************************

// ********** Begin Class AEnvironmentActor Function SetActorLocationCustom ************************
struct Z_Construct_UFunction_AEnvironmentActor_SetActorLocationCustom_Statics
{
	struct EnvironmentActor_eventSetActorLocationCustom_Parms
	{
		FVector NewLocation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Environment" },
		{ "ModuleRelativePath", "AEnvironmentActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetActorLocationCustom constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetActorLocationCustom constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetActorLocationCustom Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEnvironmentActor_SetActorLocationCustom_Statics::NewProp_NewLocation = { "NewLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnvironmentActor_eventSetActorLocationCustom_Parms, NewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnvironmentActor_SetActorLocationCustom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnvironmentActor_SetActorLocationCustom_Statics::NewProp_NewLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnvironmentActor_SetActorLocationCustom_Statics::PropPointers) < 2048);
// ********** End Function SetActorLocationCustom Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnvironmentActor_SetActorLocationCustom_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEnvironmentActor, nullptr, "SetActorLocationCustom", 	Z_Construct_UFunction_AEnvironmentActor_SetActorLocationCustom_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AEnvironmentActor_SetActorLocationCustom_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AEnvironmentActor_SetActorLocationCustom_Statics::EnvironmentActor_eventSetActorLocationCustom_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnvironmentActor_SetActorLocationCustom_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnvironmentActor_SetActorLocationCustom_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AEnvironmentActor_SetActorLocationCustom_Statics::EnvironmentActor_eventSetActorLocationCustom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnvironmentActor_SetActorLocationCustom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnvironmentActor_SetActorLocationCustom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnvironmentActor::execSetActorLocationCustom)
{
	P_GET_STRUCT(FVector,Z_Param_NewLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetActorLocationCustom(Z_Param_NewLocation);
	P_NATIVE_END;
}
// ********** End Class AEnvironmentActor Function SetActorLocationCustom **************************

// ********** Begin Class AEnvironmentActor Function SetActorRotationCustom ************************
struct Z_Construct_UFunction_AEnvironmentActor_SetActorRotationCustom_Statics
{
	struct EnvironmentActor_eventSetActorRotationCustom_Parms
	{
		FRotator NewRotation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Environment" },
		{ "ModuleRelativePath", "AEnvironmentActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetActorRotationCustom constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetActorRotationCustom constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetActorRotationCustom Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEnvironmentActor_SetActorRotationCustom_Statics::NewProp_NewRotation = { "NewRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnvironmentActor_eventSetActorRotationCustom_Parms, NewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnvironmentActor_SetActorRotationCustom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnvironmentActor_SetActorRotationCustom_Statics::NewProp_NewRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnvironmentActor_SetActorRotationCustom_Statics::PropPointers) < 2048);
// ********** End Function SetActorRotationCustom Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnvironmentActor_SetActorRotationCustom_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEnvironmentActor, nullptr, "SetActorRotationCustom", 	Z_Construct_UFunction_AEnvironmentActor_SetActorRotationCustom_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AEnvironmentActor_SetActorRotationCustom_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AEnvironmentActor_SetActorRotationCustom_Statics::EnvironmentActor_eventSetActorRotationCustom_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnvironmentActor_SetActorRotationCustom_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnvironmentActor_SetActorRotationCustom_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AEnvironmentActor_SetActorRotationCustom_Statics::EnvironmentActor_eventSetActorRotationCustom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnvironmentActor_SetActorRotationCustom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnvironmentActor_SetActorRotationCustom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnvironmentActor::execSetActorRotationCustom)
{
	P_GET_STRUCT(FRotator,Z_Param_NewRotation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetActorRotationCustom(Z_Param_NewRotation);
	P_NATIVE_END;
}
// ********** End Class AEnvironmentActor Function SetActorRotationCustom **************************

// ********** Begin Class AEnvironmentActor Function ToggleLight ***********************************
struct Z_Construct_UFunction_AEnvironmentActor_ToggleLight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Environment" },
		{ "ModuleRelativePath", "AEnvironmentActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ToggleLight constinit property declarations ***************************
// ********** End Function ToggleLight constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnvironmentActor_ToggleLight_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEnvironmentActor, nullptr, "ToggleLight", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnvironmentActor_ToggleLight_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnvironmentActor_ToggleLight_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AEnvironmentActor_ToggleLight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnvironmentActor_ToggleLight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnvironmentActor::execToggleLight)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToggleLight();
	P_NATIVE_END;
}
// ********** End Class AEnvironmentActor Function ToggleLight *************************************

// ********** Begin Class AEnvironmentActor ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AEnvironmentActor;
UClass* AEnvironmentActor::GetPrivateStaticClass()
{
	using TClass = AEnvironmentActor;
	if (!Z_Registration_Info_UClass_AEnvironmentActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("EnvironmentActor"),
			Z_Registration_Info_UClass_AEnvironmentActor.InnerSingleton,
			StaticRegisterNativesAEnvironmentActor,
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
	return Z_Registration_Info_UClass_AEnvironmentActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AEnvironmentActor_NoRegister()
{
	return AEnvironmentActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AEnvironmentActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AEnvironmentActor.h" },
		{ "ModuleRelativePath", "AEnvironmentActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///COMPONENT =============\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AEnvironmentActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "COMPONENT =============" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnvironmentMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AEnvironmentActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnvironmentLight_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AEnvironmentActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseLightIntensity_MetaData[] = {
		{ "Category", "Lights" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///LIGHT =========\n" },
#endif
		{ "ModuleRelativePath", "AEnvironmentActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "LIGHT =========" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLightIntensity_MetaData[] = {
		{ "Category", "Lights" },
		{ "ModuleRelativePath", "AEnvironmentActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightAnimationSpeed_MetaData[] = {
		{ "Category", "Lights" },
		{ "ModuleRelativePath", "AEnvironmentActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightColor_MetaData[] = {
		{ "Category", "Lights" },
		{ "ModuleRelativePath", "AEnvironmentActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDay_MetaData[] = {
		{ "Category", "Lights" },
		{ "ModuleRelativePath", "AEnvironmentActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorLocation_MetaData[] = {
		{ "Category", "EnvironmentActor" },
		{ "ModuleRelativePath", "AEnvironmentActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorRotation_MetaData[] = {
		{ "Category", "EnvironmentActor" },
		{ "ModuleRelativePath", "AEnvironmentActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "Transform" },
		{ "ModuleRelativePath", "AEnvironmentActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "Transform" },
		{ "ModuleRelativePath", "AEnvironmentActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OscillationSpeed_MetaData[] = {
		{ "Category", "Transform" },
		{ "ModuleRelativePath", "AEnvironmentActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialColor_MetaData[] = {
		{ "Category", "Material" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///MATERIALS==================\n" },
#endif
		{ "ModuleRelativePath", "AEnvironmentActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MATERIALS==================" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlowPower_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "AEnvironmentActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicMaterial_MetaData[] = {
		{ "ModuleRelativePath", "AEnvironmentActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AEnvironmentActor constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EnvironmentMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EnvironmentLight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseLightIntensity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxLightIntensity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LightAnimationSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LightColor;
	static void NewProp_bIsDay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDay;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActorLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActorRotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OscillationSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GlowPower;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AEnvironmentActor constinit property declarations **************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetActorLocationCustom"), .Pointer = &AEnvironmentActor::execGetActorLocationCustom },
		{ .NameUTF8 = UTF8TEXT("GetActorRotationCustom"), .Pointer = &AEnvironmentActor::execGetActorRotationCustom },
		{ .NameUTF8 = UTF8TEXT("GetCurrentTransform"), .Pointer = &AEnvironmentActor::execGetCurrentTransform },
		{ .NameUTF8 = UTF8TEXT("ResetActorTransformation"), .Pointer = &AEnvironmentActor::execResetActorTransformation },
		{ .NameUTF8 = UTF8TEXT("SetActorLocationCustom"), .Pointer = &AEnvironmentActor::execSetActorLocationCustom },
		{ .NameUTF8 = UTF8TEXT("SetActorRotationCustom"), .Pointer = &AEnvironmentActor::execSetActorRotationCustom },
		{ .NameUTF8 = UTF8TEXT("ToggleLight"), .Pointer = &AEnvironmentActor::execToggleLight },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnvironmentActor_GetActorLocationCustom, "GetActorLocationCustom" }, // 1157553878
		{ &Z_Construct_UFunction_AEnvironmentActor_GetActorRotationCustom, "GetActorRotationCustom" }, // 3262331079
		{ &Z_Construct_UFunction_AEnvironmentActor_GetCurrentTransform, "GetCurrentTransform" }, // 2132469879
		{ &Z_Construct_UFunction_AEnvironmentActor_ResetActorTransformation, "ResetActorTransformation" }, // 809681565
		{ &Z_Construct_UFunction_AEnvironmentActor_SetActorLocationCustom, "SetActorLocationCustom" }, // 2552757542
		{ &Z_Construct_UFunction_AEnvironmentActor_SetActorRotationCustom, "SetActorRotationCustom" }, // 219508690
		{ &Z_Construct_UFunction_AEnvironmentActor_ToggleLight, "ToggleLight" }, // 950867175
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnvironmentActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AEnvironmentActor_Statics

// ********** Begin Class AEnvironmentActor Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnvironmentActor_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnvironmentActor, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Root_MetaData), NewProp_Root_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnvironmentActor_Statics::NewProp_EnvironmentMesh = { "EnvironmentMesh", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnvironmentActor, EnvironmentMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnvironmentMesh_MetaData), NewProp_EnvironmentMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnvironmentActor_Statics::NewProp_EnvironmentLight = { "EnvironmentLight", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnvironmentActor, EnvironmentLight), Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnvironmentLight_MetaData), NewProp_EnvironmentLight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnvironmentActor_Statics::NewProp_BaseLightIntensity = { "BaseLightIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnvironmentActor, BaseLightIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseLightIntensity_MetaData), NewProp_BaseLightIntensity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnvironmentActor_Statics::NewProp_MaxLightIntensity = { "MaxLightIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnvironmentActor, MaxLightIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLightIntensity_MetaData), NewProp_MaxLightIntensity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnvironmentActor_Statics::NewProp_LightAnimationSpeed = { "LightAnimationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnvironmentActor, LightAnimationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightAnimationSpeed_MetaData), NewProp_LightAnimationSpeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEnvironmentActor_Statics::NewProp_LightColor = { "LightColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnvironmentActor, LightColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightColor_MetaData), NewProp_LightColor_MetaData) };
void Z_Construct_UClass_AEnvironmentActor_Statics::NewProp_bIsDay_SetBit(void* Obj)
{
	((AEnvironmentActor*)Obj)->bIsDay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEnvironmentActor_Statics::NewProp_bIsDay = { "bIsDay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AEnvironmentActor), &Z_Construct_UClass_AEnvironmentActor_Statics::NewProp_bIsDay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDay_MetaData), NewProp_bIsDay_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEnvironmentActor_Statics::NewProp_ActorLocation = { "ActorLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnvironmentActor, ActorLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorLocation_MetaData), NewProp_ActorLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEnvironmentActor_Statics::NewProp_ActorRotation = { "ActorRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnvironmentActor, ActorRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorRotation_MetaData), NewProp_ActorRotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnvironmentActor_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnvironmentActor, RotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationSpeed_MetaData), NewProp_RotationSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnvironmentActor_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnvironmentActor, MovementSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementSpeed_MetaData), NewProp_MovementSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnvironmentActor_Statics::NewProp_OscillationSpeed = { "OscillationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnvironmentActor, OscillationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OscillationSpeed_MetaData), NewProp_OscillationSpeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEnvironmentActor_Statics::NewProp_MaterialColor = { "MaterialColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnvironmentActor, MaterialColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialColor_MetaData), NewProp_MaterialColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnvironmentActor_Statics::NewProp_GlowPower = { "GlowPower", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnvironmentActor, GlowPower), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlowPower_MetaData), NewProp_GlowPower_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnvironmentActor_Statics::NewProp_DynamicMaterial = { "DynamicMaterial", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnvironmentActor, DynamicMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicMaterial_MetaData), NewProp_DynamicMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnvironmentActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnvironmentActor_Statics::NewProp_Root,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnvironmentActor_Statics::NewProp_EnvironmentMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnvironmentActor_Statics::NewProp_EnvironmentLight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnvironmentActor_Statics::NewProp_BaseLightIntensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnvironmentActor_Statics::NewProp_MaxLightIntensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnvironmentActor_Statics::NewProp_LightAnimationSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnvironmentActor_Statics::NewProp_LightColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnvironmentActor_Statics::NewProp_bIsDay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnvironmentActor_Statics::NewProp_ActorLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnvironmentActor_Statics::NewProp_ActorRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnvironmentActor_Statics::NewProp_RotationSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnvironmentActor_Statics::NewProp_MovementSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnvironmentActor_Statics::NewProp_OscillationSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnvironmentActor_Statics::NewProp_MaterialColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnvironmentActor_Statics::NewProp_GlowPower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnvironmentActor_Statics::NewProp_DynamicMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnvironmentActor_Statics::PropPointers) < 2048);
// ********** End Class AEnvironmentActor Property Definitions *************************************
UObject* (*const Z_Construct_UClass_AEnvironmentActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_FinalProjectPhase2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnvironmentActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnvironmentActor_Statics::ClassParams = {
	&AEnvironmentActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AEnvironmentActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AEnvironmentActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnvironmentActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnvironmentActor_Statics::Class_MetaDataParams)
};
void AEnvironmentActor::StaticRegisterNativesAEnvironmentActor()
{
	UClass* Class = AEnvironmentActor::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_AEnvironmentActor_Statics::Funcs));
}
UClass* Z_Construct_UClass_AEnvironmentActor()
{
	if (!Z_Registration_Info_UClass_AEnvironmentActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnvironmentActor.OuterSingleton, Z_Construct_UClass_AEnvironmentActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnvironmentActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AEnvironmentActor);
AEnvironmentActor::~AEnvironmentActor() {}
// ********** End Class AEnvironmentActor **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Elijah_Documents_GitHub_COMP217_FinalProject_FinalProjectPhase2_Source_FinalProjectPhase2_AEnvironmentActor_h__Script_FinalProjectPhase2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnvironmentActor, AEnvironmentActor::StaticClass, TEXT("AEnvironmentActor"), &Z_Registration_Info_UClass_AEnvironmentActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnvironmentActor), 2172468654U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Elijah_Documents_GitHub_COMP217_FinalProject_FinalProjectPhase2_Source_FinalProjectPhase2_AEnvironmentActor_h__Script_FinalProjectPhase2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Elijah_Documents_GitHub_COMP217_FinalProject_FinalProjectPhase2_Source_FinalProjectPhase2_AEnvironmentActor_h__Script_FinalProjectPhase2_1062844286{
	TEXT("/Script/FinalProjectPhase2"),
	Z_CompiledInDeferFile_FID_Users_Elijah_Documents_GitHub_COMP217_FinalProject_FinalProjectPhase2_Source_FinalProjectPhase2_AEnvironmentActor_h__Script_FinalProjectPhase2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Elijah_Documents_GitHub_COMP217_FinalProject_FinalProjectPhase2_Source_FinalProjectPhase2_AEnvironmentActor_h__Script_FinalProjectPhase2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
