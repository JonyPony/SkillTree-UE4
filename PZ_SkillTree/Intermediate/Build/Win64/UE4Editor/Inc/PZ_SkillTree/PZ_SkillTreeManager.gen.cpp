// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PZ_SkillTree/Public/PZ_SkillTreeManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePZ_SkillTreeManager() {}
// Cross Module References
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTreeManager_NoRegister();
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTreeManager();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_PZ_SkillTree();
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTree_Editor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTreeComponent_NoRegister();
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTreeContext_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPZ_SkillTreeManager::execCreateSkillTreeContext)
	{
		P_GET_OBJECT(UPZ_SkillTree_Editor,Z_Param_SkillTree);
		P_GET_OBJECT(AActor,Z_Param_Outer);
		P_GET_OBJECT(UPZ_SkillTreeComponent,Z_Param_STComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPZ_SkillTreeContext**)Z_Param__Result=UPZ_SkillTreeManager::CreateSkillTreeContext(Z_Param_SkillTree,Z_Param_Outer,Z_Param_STComponent);
		P_NATIVE_END;
	}
	void UPZ_SkillTreeManager::StaticRegisterNativesUPZ_SkillTreeManager()
	{
		UClass* Class = UPZ_SkillTreeManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateSkillTreeContext", &UPZ_SkillTreeManager::execCreateSkillTreeContext },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPZ_SkillTreeManager_CreateSkillTreeContext_Statics
	{
		struct PZ_SkillTreeManager_eventCreateSkillTreeContext_Parms
		{
			UPZ_SkillTree_Editor* SkillTree;
			AActor* Outer;
			UPZ_SkillTreeComponent* STComponent;
			UPZ_SkillTreeContext* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkillTree;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Outer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_STComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_STComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPZ_SkillTreeManager_CreateSkillTreeContext_Statics::NewProp_SkillTree = { "SkillTree", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PZ_SkillTreeManager_eventCreateSkillTreeContext_Parms, SkillTree), Z_Construct_UClass_UPZ_SkillTree_Editor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPZ_SkillTreeManager_CreateSkillTreeContext_Statics::NewProp_Outer = { "Outer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PZ_SkillTreeManager_eventCreateSkillTreeContext_Parms, Outer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPZ_SkillTreeManager_CreateSkillTreeContext_Statics::NewProp_STComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPZ_SkillTreeManager_CreateSkillTreeContext_Statics::NewProp_STComponent = { "STComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PZ_SkillTreeManager_eventCreateSkillTreeContext_Parms, STComponent), Z_Construct_UClass_UPZ_SkillTreeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPZ_SkillTreeManager_CreateSkillTreeContext_Statics::NewProp_STComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPZ_SkillTreeManager_CreateSkillTreeContext_Statics::NewProp_STComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPZ_SkillTreeManager_CreateSkillTreeContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PZ_SkillTreeManager_eventCreateSkillTreeContext_Parms, ReturnValue), Z_Construct_UClass_UPZ_SkillTreeContext_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPZ_SkillTreeManager_CreateSkillTreeContext_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPZ_SkillTreeManager_CreateSkillTreeContext_Statics::NewProp_SkillTree,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPZ_SkillTreeManager_CreateSkillTreeContext_Statics::NewProp_Outer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPZ_SkillTreeManager_CreateSkillTreeContext_Statics::NewProp_STComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPZ_SkillTreeManager_CreateSkillTreeContext_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPZ_SkillTreeManager_CreateSkillTreeContext_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkillTree" },
		{ "ModuleRelativePath", "Public/PZ_SkillTreeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPZ_SkillTreeManager_CreateSkillTreeContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPZ_SkillTreeManager, nullptr, "CreateSkillTreeContext", nullptr, nullptr, sizeof(PZ_SkillTreeManager_eventCreateSkillTreeContext_Parms), Z_Construct_UFunction_UPZ_SkillTreeManager_CreateSkillTreeContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPZ_SkillTreeManager_CreateSkillTreeContext_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPZ_SkillTreeManager_CreateSkillTreeContext_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPZ_SkillTreeManager_CreateSkillTreeContext_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPZ_SkillTreeManager_CreateSkillTreeContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPZ_SkillTreeManager_CreateSkillTreeContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPZ_SkillTreeManager_NoRegister()
	{
		return UPZ_SkillTreeManager::StaticClass();
	}
	struct Z_Construct_UClass_UPZ_SkillTreeManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPZ_SkillTreeManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PZ_SkillTree,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPZ_SkillTreeManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPZ_SkillTreeManager_CreateSkillTreeContext, "CreateSkillTreeContext" }, // 3656366933
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTreeManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PZ_SkillTreeManager.h" },
		{ "ModuleRelativePath", "Public/PZ_SkillTreeManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPZ_SkillTreeManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPZ_SkillTreeManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPZ_SkillTreeManager_Statics::ClassParams = {
		&UPZ_SkillTreeManager::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTreeManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPZ_SkillTreeManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPZ_SkillTreeManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPZ_SkillTreeManager, 3462263689);
	template<> PZ_SKILLTREE_API UClass* StaticClass<UPZ_SkillTreeManager>()
	{
		return UPZ_SkillTreeManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPZ_SkillTreeManager(Z_Construct_UClass_UPZ_SkillTreeManager, &UPZ_SkillTreeManager::StaticClass, TEXT("/Script/PZ_SkillTree"), TEXT("UPZ_SkillTreeManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPZ_SkillTreeManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
