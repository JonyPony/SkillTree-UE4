// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PZ_SkillTree/Public/SkillTreeWidgetCreator/PZ_SkillTreeWidgetCreator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePZ_SkillTreeWidgetCreator() {}
// Cross Module References
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTreeObjectCreator_NoRegister();
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTreeObjectCreator();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_PZ_SkillTree();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPZ_SkillTreeObjectCreator::execCreateObject)
	{
		P_GET_OBJECT(UWorld,Z_Param_ObjectOwner);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->CreateObject_Implementation(Z_Param_ObjectOwner);
		P_NATIVE_END;
	}
	static FName NAME_UPZ_SkillTreeObjectCreator_CreateObject = FName(TEXT("CreateObject"));
	UObject* UPZ_SkillTreeObjectCreator::CreateObject(UWorld* ObjectOwner)
	{
		PZ_SkillTreeObjectCreator_eventCreateObject_Parms Parms;
		Parms.ObjectOwner=ObjectOwner;
		ProcessEvent(FindFunctionChecked(NAME_UPZ_SkillTreeObjectCreator_CreateObject),&Parms);
		return Parms.ReturnValue;
	}
	void UPZ_SkillTreeObjectCreator::StaticRegisterNativesUPZ_SkillTreeObjectCreator()
	{
		UClass* Class = UPZ_SkillTreeObjectCreator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateObject", &UPZ_SkillTreeObjectCreator::execCreateObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPZ_SkillTreeObjectCreator_CreateObject_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectOwner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPZ_SkillTreeObjectCreator_CreateObject_Statics::NewProp_ObjectOwner = { "ObjectOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PZ_SkillTreeObjectCreator_eventCreateObject_Parms, ObjectOwner), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPZ_SkillTreeObjectCreator_CreateObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PZ_SkillTreeObjectCreator_eventCreateObject_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPZ_SkillTreeObjectCreator_CreateObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPZ_SkillTreeObjectCreator_CreateObject_Statics::NewProp_ObjectOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPZ_SkillTreeObjectCreator_CreateObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPZ_SkillTreeObjectCreator_CreateObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkillTree | ObjectCreator" },
		{ "ModuleRelativePath", "Public/SkillTreeWidgetCreator/PZ_SkillTreeWidgetCreator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPZ_SkillTreeObjectCreator_CreateObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPZ_SkillTreeObjectCreator, nullptr, "CreateObject", nullptr, nullptr, sizeof(PZ_SkillTreeObjectCreator_eventCreateObject_Parms), Z_Construct_UFunction_UPZ_SkillTreeObjectCreator_CreateObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPZ_SkillTreeObjectCreator_CreateObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPZ_SkillTreeObjectCreator_CreateObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPZ_SkillTreeObjectCreator_CreateObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPZ_SkillTreeObjectCreator_CreateObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPZ_SkillTreeObjectCreator_CreateObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPZ_SkillTreeObjectCreator_NoRegister()
	{
		return UPZ_SkillTreeObjectCreator::StaticClass();
	}
	struct Z_Construct_UClass_UPZ_SkillTreeObjectCreator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPZ_SkillTreeObjectCreator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PZ_SkillTree,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPZ_SkillTreeObjectCreator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPZ_SkillTreeObjectCreator_CreateObject, "CreateObject" }, // 2205204919
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTreeObjectCreator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SkillTreeWidgetCreator/PZ_SkillTreeWidgetCreator.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SkillTreeWidgetCreator/PZ_SkillTreeWidgetCreator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPZ_SkillTreeObjectCreator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPZ_SkillTreeObjectCreator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPZ_SkillTreeObjectCreator_Statics::ClassParams = {
		&UPZ_SkillTreeObjectCreator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTreeObjectCreator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeObjectCreator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPZ_SkillTreeObjectCreator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPZ_SkillTreeObjectCreator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPZ_SkillTreeObjectCreator, 1755493937);
	template<> PZ_SKILLTREE_API UClass* StaticClass<UPZ_SkillTreeObjectCreator>()
	{
		return UPZ_SkillTreeObjectCreator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPZ_SkillTreeObjectCreator(Z_Construct_UClass_UPZ_SkillTreeObjectCreator, &UPZ_SkillTreeObjectCreator::StaticClass, TEXT("/Script/PZ_SkillTree"), TEXT("UPZ_SkillTreeObjectCreator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPZ_SkillTreeObjectCreator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
