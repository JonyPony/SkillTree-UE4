// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PZ_SkillTree/Public/SkillTreeComponent/PZ_SkillTreeComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePZ_SkillTreeComponent() {}
// Cross Module References
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTreeComponent_NoRegister();
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTreeComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_PZ_SkillTree();
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTreeContext_NoRegister();
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTree_Editor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPZ_SkillTreeComponent::execGetSkillTreeEditorByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_GraphName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPZ_SkillTree_Editor**)Z_Param__Result=P_THIS->GetSkillTreeEditorByName(Z_Param_GraphName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPZ_SkillTreeComponent::execGetSkillTreeByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_GraphName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPZ_SkillTreeContext**)Z_Param__Result=P_THIS->GetSkillTreeByName(Z_Param_GraphName);
		P_NATIVE_END;
	}
	void UPZ_SkillTreeComponent::StaticRegisterNativesUPZ_SkillTreeComponent()
	{
		UClass* Class = UPZ_SkillTreeComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSkillTreeByName", &UPZ_SkillTreeComponent::execGetSkillTreeByName },
			{ "GetSkillTreeEditorByName", &UPZ_SkillTreeComponent::execGetSkillTreeEditorByName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPZ_SkillTreeComponent_GetSkillTreeByName_Statics
	{
		struct PZ_SkillTreeComponent_eventGetSkillTreeByName_Parms
		{
			FString GraphName;
			UPZ_SkillTreeContext* ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GraphName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPZ_SkillTreeComponent_GetSkillTreeByName_Statics::NewProp_GraphName = { "GraphName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PZ_SkillTreeComponent_eventGetSkillTreeByName_Parms, GraphName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPZ_SkillTreeComponent_GetSkillTreeByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PZ_SkillTreeComponent_eventGetSkillTreeByName_Parms, ReturnValue), Z_Construct_UClass_UPZ_SkillTreeContext_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPZ_SkillTreeComponent_GetSkillTreeByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPZ_SkillTreeComponent_GetSkillTreeByName_Statics::NewProp_GraphName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPZ_SkillTreeComponent_GetSkillTreeByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPZ_SkillTreeComponent_GetSkillTreeByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkillTree | SkillTreeComponent" },
		{ "ModuleRelativePath", "Public/SkillTreeComponent/PZ_SkillTreeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPZ_SkillTreeComponent_GetSkillTreeByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPZ_SkillTreeComponent, nullptr, "GetSkillTreeByName", nullptr, nullptr, sizeof(PZ_SkillTreeComponent_eventGetSkillTreeByName_Parms), Z_Construct_UFunction_UPZ_SkillTreeComponent_GetSkillTreeByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPZ_SkillTreeComponent_GetSkillTreeByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPZ_SkillTreeComponent_GetSkillTreeByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPZ_SkillTreeComponent_GetSkillTreeByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPZ_SkillTreeComponent_GetSkillTreeByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPZ_SkillTreeComponent_GetSkillTreeByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPZ_SkillTreeComponent_GetSkillTreeEditorByName_Statics
	{
		struct PZ_SkillTreeComponent_eventGetSkillTreeEditorByName_Parms
		{
			FString GraphName;
			UPZ_SkillTree_Editor* ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GraphName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPZ_SkillTreeComponent_GetSkillTreeEditorByName_Statics::NewProp_GraphName = { "GraphName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PZ_SkillTreeComponent_eventGetSkillTreeEditorByName_Parms, GraphName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPZ_SkillTreeComponent_GetSkillTreeEditorByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PZ_SkillTreeComponent_eventGetSkillTreeEditorByName_Parms, ReturnValue), Z_Construct_UClass_UPZ_SkillTree_Editor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPZ_SkillTreeComponent_GetSkillTreeEditorByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPZ_SkillTreeComponent_GetSkillTreeEditorByName_Statics::NewProp_GraphName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPZ_SkillTreeComponent_GetSkillTreeEditorByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPZ_SkillTreeComponent_GetSkillTreeEditorByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkillTree | SkillTreeComponent" },
		{ "ModuleRelativePath", "Public/SkillTreeComponent/PZ_SkillTreeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPZ_SkillTreeComponent_GetSkillTreeEditorByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPZ_SkillTreeComponent, nullptr, "GetSkillTreeEditorByName", nullptr, nullptr, sizeof(PZ_SkillTreeComponent_eventGetSkillTreeEditorByName_Parms), Z_Construct_UFunction_UPZ_SkillTreeComponent_GetSkillTreeEditorByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPZ_SkillTreeComponent_GetSkillTreeEditorByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPZ_SkillTreeComponent_GetSkillTreeEditorByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPZ_SkillTreeComponent_GetSkillTreeEditorByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPZ_SkillTreeComponent_GetSkillTreeEditorByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPZ_SkillTreeComponent_GetSkillTreeEditorByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPZ_SkillTreeComponent_NoRegister()
	{
		return UPZ_SkillTreeComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPZ_SkillTreeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkillContexts_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SkillContexts_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillContexts_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SkillContexts;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkillGraphs_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SkillGraphs_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillGraphs_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SkillGraphs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPZ_SkillTreeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PZ_SkillTree,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPZ_SkillTreeComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPZ_SkillTreeComponent_GetSkillTreeByName, "GetSkillTreeByName" }, // 2316505561
		{ &Z_Construct_UFunction_UPZ_SkillTreeComponent_GetSkillTreeEditorByName, "GetSkillTreeEditorByName" }, // 2635318495
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTreeComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SkillTreeComponent/PZ_SkillTreeComponent.h" },
		{ "ModuleRelativePath", "Public/SkillTreeComponent/PZ_SkillTreeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPZ_SkillTreeComponent_Statics::NewProp_SkillContexts_ValueProp = { "SkillContexts", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UPZ_SkillTreeContext_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPZ_SkillTreeComponent_Statics::NewProp_SkillContexts_Key_KeyProp = { "SkillContexts_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTreeComponent_Statics::NewProp_SkillContexts_MetaData[] = {
		{ "Category", "PZ_SkillTreeComponent" },
		{ "ModuleRelativePath", "Public/SkillTreeComponent/PZ_SkillTreeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPZ_SkillTreeComponent_Statics::NewProp_SkillContexts = { "SkillContexts", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPZ_SkillTreeComponent, SkillContexts), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTreeComponent_Statics::NewProp_SkillContexts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeComponent_Statics::NewProp_SkillContexts_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPZ_SkillTreeComponent_Statics::NewProp_SkillGraphs_ValueProp = { "SkillGraphs", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UPZ_SkillTree_Editor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPZ_SkillTreeComponent_Statics::NewProp_SkillGraphs_Key_KeyProp = { "SkillGraphs_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTreeComponent_Statics::NewProp_SkillGraphs_MetaData[] = {
		{ "Category", "PZ_SkillTreeComponent" },
		{ "ModuleRelativePath", "Public/SkillTreeComponent/PZ_SkillTreeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPZ_SkillTreeComponent_Statics::NewProp_SkillGraphs = { "SkillGraphs", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPZ_SkillTreeComponent, SkillGraphs), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTreeComponent_Statics::NewProp_SkillGraphs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeComponent_Statics::NewProp_SkillGraphs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPZ_SkillTreeComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPZ_SkillTreeComponent_Statics::NewProp_SkillContexts_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPZ_SkillTreeComponent_Statics::NewProp_SkillContexts_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPZ_SkillTreeComponent_Statics::NewProp_SkillContexts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPZ_SkillTreeComponent_Statics::NewProp_SkillGraphs_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPZ_SkillTreeComponent_Statics::NewProp_SkillGraphs_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPZ_SkillTreeComponent_Statics::NewProp_SkillGraphs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPZ_SkillTreeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPZ_SkillTreeComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPZ_SkillTreeComponent_Statics::ClassParams = {
		&UPZ_SkillTreeComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPZ_SkillTreeComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTreeComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPZ_SkillTreeComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPZ_SkillTreeComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPZ_SkillTreeComponent, 2371652422);
	template<> PZ_SKILLTREE_API UClass* StaticClass<UPZ_SkillTreeComponent>()
	{
		return UPZ_SkillTreeComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPZ_SkillTreeComponent(Z_Construct_UClass_UPZ_SkillTreeComponent, &UPZ_SkillTreeComponent::StaticClass, TEXT("/Script/PZ_SkillTree"), TEXT("UPZ_SkillTreeComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPZ_SkillTreeComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
