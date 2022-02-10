// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PZ_SkillTree/Public/SkillTreeEvent/PZ_SkillTreeEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePZ_SkillTreeEvent() {}
// Cross Module References
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTreeEvent_NoRegister();
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTreeEvent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_PZ_SkillTree();
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTreeContext_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPZ_SkillTreeEvent::execExecute)
	{
		P_GET_OBJECT(UPZ_SkillTreeContext,Z_Param_SkillTreeContext);
		P_GET_OBJECT(AActor,Z_Param_SkillTreePlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Execute_Implementation(Z_Param_SkillTreeContext,Z_Param_SkillTreePlayer);
		P_NATIVE_END;
	}
	static FName NAME_UPZ_SkillTreeEvent_Execute = FName(TEXT("Execute"));
	void UPZ_SkillTreeEvent::Execute(UPZ_SkillTreeContext* SkillTreeContext, AActor* SkillTreePlayer)
	{
		PZ_SkillTreeEvent_eventExecute_Parms Parms;
		Parms.SkillTreeContext=SkillTreeContext;
		Parms.SkillTreePlayer=SkillTreePlayer;
		ProcessEvent(FindFunctionChecked(NAME_UPZ_SkillTreeEvent_Execute),&Parms);
	}
	void UPZ_SkillTreeEvent::StaticRegisterNativesUPZ_SkillTreeEvent()
	{
		UClass* Class = UPZ_SkillTreeEvent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Execute", &UPZ_SkillTreeEvent::execExecute },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPZ_SkillTreeEvent_Execute_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkillTreeContext;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkillTreePlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPZ_SkillTreeEvent_Execute_Statics::NewProp_SkillTreeContext = { "SkillTreeContext", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PZ_SkillTreeEvent_eventExecute_Parms, SkillTreeContext), Z_Construct_UClass_UPZ_SkillTreeContext_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPZ_SkillTreeEvent_Execute_Statics::NewProp_SkillTreePlayer = { "SkillTreePlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PZ_SkillTreeEvent_eventExecute_Parms, SkillTreePlayer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPZ_SkillTreeEvent_Execute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPZ_SkillTreeEvent_Execute_Statics::NewProp_SkillTreeContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPZ_SkillTreeEvent_Execute_Statics::NewProp_SkillTreePlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPZ_SkillTreeEvent_Execute_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkillTree | SkillTreeEvent" },
		{ "ModuleRelativePath", "Public/SkillTreeEvent/PZ_SkillTreeEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPZ_SkillTreeEvent_Execute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPZ_SkillTreeEvent, nullptr, "Execute", nullptr, nullptr, sizeof(PZ_SkillTreeEvent_eventExecute_Parms), Z_Construct_UFunction_UPZ_SkillTreeEvent_Execute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPZ_SkillTreeEvent_Execute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPZ_SkillTreeEvent_Execute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPZ_SkillTreeEvent_Execute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPZ_SkillTreeEvent_Execute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPZ_SkillTreeEvent_Execute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPZ_SkillTreeEvent_NoRegister()
	{
		return UPZ_SkillTreeEvent::StaticClass();
	}
	struct Z_Construct_UClass_UPZ_SkillTreeEvent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPZ_SkillTreeEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PZ_SkillTree,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPZ_SkillTreeEvent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPZ_SkillTreeEvent_Execute, "Execute" }, // 3282256656
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTreeEvent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SkillTreeEvent/PZ_SkillTreeEvent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SkillTreeEvent/PZ_SkillTreeEvent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPZ_SkillTreeEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPZ_SkillTreeEvent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPZ_SkillTreeEvent_Statics::ClassParams = {
		&UPZ_SkillTreeEvent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTreeEvent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPZ_SkillTreeEvent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPZ_SkillTreeEvent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPZ_SkillTreeEvent, 3875309145);
	template<> PZ_SKILLTREE_API UClass* StaticClass<UPZ_SkillTreeEvent>()
	{
		return UPZ_SkillTreeEvent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPZ_SkillTreeEvent(Z_Construct_UClass_UPZ_SkillTreeEvent, &UPZ_SkillTreeEvent::StaticClass, TEXT("/Script/PZ_SkillTree"), TEXT("UPZ_SkillTreeEvent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPZ_SkillTreeEvent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
