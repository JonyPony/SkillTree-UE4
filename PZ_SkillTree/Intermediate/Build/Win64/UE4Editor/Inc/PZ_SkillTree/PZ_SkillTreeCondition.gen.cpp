// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PZ_SkillTree/Public/SkillTreeEvent/PZ_SkillTreeCondition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePZ_SkillTreeCondition() {}
// Cross Module References
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTreeCondition_NoRegister();
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTreeCondition();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_PZ_SkillTree();
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTreeContext_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPZ_SkillTreeCondition::execExecute)
	{
		P_GET_OBJECT(UPZ_SkillTreeContext,Z_Param_SkillTreeContext);
		P_GET_OBJECT(AActor,Z_Param_SkillTreePlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Execute_Implementation(Z_Param_SkillTreeContext,Z_Param_SkillTreePlayer);
		P_NATIVE_END;
	}
	static FName NAME_UPZ_SkillTreeCondition_Execute = FName(TEXT("Execute"));
	bool UPZ_SkillTreeCondition::Execute(UPZ_SkillTreeContext* SkillTreeContext, AActor* SkillTreePlayer)
	{
		PZ_SkillTreeCondition_eventExecute_Parms Parms;
		Parms.SkillTreeContext=SkillTreeContext;
		Parms.SkillTreePlayer=SkillTreePlayer;
		ProcessEvent(FindFunctionChecked(NAME_UPZ_SkillTreeCondition_Execute),&Parms);
		return !!Parms.ReturnValue;
	}
	void UPZ_SkillTreeCondition::StaticRegisterNativesUPZ_SkillTreeCondition()
	{
		UClass* Class = UPZ_SkillTreeCondition::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Execute", &UPZ_SkillTreeCondition::execExecute },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPZ_SkillTreeCondition_Execute_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkillTreeContext;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkillTreePlayer;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPZ_SkillTreeCondition_Execute_Statics::NewProp_SkillTreeContext = { "SkillTreeContext", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PZ_SkillTreeCondition_eventExecute_Parms, SkillTreeContext), Z_Construct_UClass_UPZ_SkillTreeContext_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPZ_SkillTreeCondition_Execute_Statics::NewProp_SkillTreePlayer = { "SkillTreePlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PZ_SkillTreeCondition_eventExecute_Parms, SkillTreePlayer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPZ_SkillTreeCondition_Execute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PZ_SkillTreeCondition_eventExecute_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPZ_SkillTreeCondition_Execute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PZ_SkillTreeCondition_eventExecute_Parms), &Z_Construct_UFunction_UPZ_SkillTreeCondition_Execute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPZ_SkillTreeCondition_Execute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPZ_SkillTreeCondition_Execute_Statics::NewProp_SkillTreeContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPZ_SkillTreeCondition_Execute_Statics::NewProp_SkillTreePlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPZ_SkillTreeCondition_Execute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPZ_SkillTreeCondition_Execute_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkillTree | SkillTreeEvent" },
		{ "ModuleRelativePath", "Public/SkillTreeEvent/PZ_SkillTreeCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPZ_SkillTreeCondition_Execute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPZ_SkillTreeCondition, nullptr, "Execute", nullptr, nullptr, sizeof(PZ_SkillTreeCondition_eventExecute_Parms), Z_Construct_UFunction_UPZ_SkillTreeCondition_Execute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPZ_SkillTreeCondition_Execute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPZ_SkillTreeCondition_Execute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPZ_SkillTreeCondition_Execute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPZ_SkillTreeCondition_Execute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPZ_SkillTreeCondition_Execute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPZ_SkillTreeCondition_NoRegister()
	{
		return UPZ_SkillTreeCondition::StaticClass();
	}
	struct Z_Construct_UClass_UPZ_SkillTreeCondition_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPZ_SkillTreeCondition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PZ_SkillTree,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPZ_SkillTreeCondition_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPZ_SkillTreeCondition_Execute, "Execute" }, // 2074279212
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTreeCondition_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SkillTreeEvent/PZ_SkillTreeCondition.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SkillTreeEvent/PZ_SkillTreeCondition.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPZ_SkillTreeCondition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPZ_SkillTreeCondition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPZ_SkillTreeCondition_Statics::ClassParams = {
		&UPZ_SkillTreeCondition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTreeCondition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeCondition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPZ_SkillTreeCondition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPZ_SkillTreeCondition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPZ_SkillTreeCondition, 565135819);
	template<> PZ_SKILLTREE_API UClass* StaticClass<UPZ_SkillTreeCondition>()
	{
		return UPZ_SkillTreeCondition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPZ_SkillTreeCondition(Z_Construct_UClass_UPZ_SkillTreeCondition, &UPZ_SkillTreeCondition::StaticClass, TEXT("/Script/PZ_SkillTree"), TEXT("UPZ_SkillTreeCondition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPZ_SkillTreeCondition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
