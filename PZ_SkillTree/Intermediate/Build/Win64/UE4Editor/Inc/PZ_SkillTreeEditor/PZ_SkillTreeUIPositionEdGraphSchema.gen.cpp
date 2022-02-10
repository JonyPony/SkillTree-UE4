// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PZ_SkillTreeEditor/Private/SkillTreeEditor/UIPositionGraph/Graph/PZ_SkillTreeUIPositionEdGraphSchema.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePZ_SkillTreeUIPositionEdGraphSchema() {}
// Cross Module References
	PZ_SKILLTREEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FAssetSchemaAction_SkillTreeUIPositionGraph_NewSkillNode_FromRNode();
	UPackage* Z_Construct_UPackage__Script_PZ_SkillTreeEditor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
	PZ_SKILLTREEEDITOR_API UClass* Z_Construct_UClass_UPZ_SkillTreeUIPositionEdGraphSchema_NoRegister();
	PZ_SKILLTREEEDITOR_API UClass* Z_Construct_UClass_UPZ_SkillTreeUIPositionEdGraphSchema();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
// End Cross Module References

static_assert(std::is_polymorphic<FAssetSchemaAction_SkillTreeUIPositionGraph_NewSkillNode_FromRNode>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FAssetSchemaAction_SkillTreeUIPositionGraph_NewSkillNode_FromRNode cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

class UScriptStruct* FAssetSchemaAction_SkillTreeUIPositionGraph_NewSkillNode_FromRNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PZ_SKILLTREEEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FAssetSchemaAction_SkillTreeUIPositionGraph_NewSkillNode_FromRNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetSchemaAction_SkillTreeUIPositionGraph_NewSkillNode_FromRNode, Z_Construct_UPackage__Script_PZ_SkillTreeEditor(), TEXT("AssetSchemaAction_SkillTreeUIPositionGraph_NewSkillNode_FromRNode"), sizeof(FAssetSchemaAction_SkillTreeUIPositionGraph_NewSkillNode_FromRNode), Get_Z_Construct_UScriptStruct_FAssetSchemaAction_SkillTreeUIPositionGraph_NewSkillNode_FromRNode_Hash());
	}
	return Singleton;
}
template<> PZ_SKILLTREEEDITOR_API UScriptStruct* StaticStruct<FAssetSchemaAction_SkillTreeUIPositionGraph_NewSkillNode_FromRNode>()
{
	return FAssetSchemaAction_SkillTreeUIPositionGraph_NewSkillNode_FromRNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAssetSchemaAction_SkillTreeUIPositionGraph_NewSkillNode_FromRNode(FAssetSchemaAction_SkillTreeUIPositionGraph_NewSkillNode_FromRNode::StaticStruct, TEXT("/Script/PZ_SkillTreeEditor"), TEXT("AssetSchemaAction_SkillTreeUIPositionGraph_NewSkillNode_FromRNode"), false, nullptr, nullptr);
static struct FScriptStruct_PZ_SkillTreeEditor_StaticRegisterNativesFAssetSchemaAction_SkillTreeUIPositionGraph_NewSkillNode_FromRNode
{
	FScriptStruct_PZ_SkillTreeEditor_StaticRegisterNativesFAssetSchemaAction_SkillTreeUIPositionGraph_NewSkillNode_FromRNode()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AssetSchemaAction_SkillTreeUIPositionGraph_NewSkillNode_FromRNode")),new UScriptStruct::TCppStructOps<FAssetSchemaAction_SkillTreeUIPositionGraph_NewSkillNode_FromRNode>);
	}
} ScriptStruct_PZ_SkillTreeEditor_StaticRegisterNativesFAssetSchemaAction_SkillTreeUIPositionGraph_NewSkillNode_FromRNode;
	struct Z_Construct_UScriptStruct_FAssetSchemaAction_SkillTreeUIPositionGraph_NewSkillNode_FromRNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetSchemaAction_SkillTreeUIPositionGraph_NewSkillNode_FromRNode_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/SkillTreeEditor/UIPositionGraph/Graph/PZ_SkillTreeUIPositionEdGraphSchema.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAssetSchemaAction_SkillTreeUIPositionGraph_NewSkillNode_FromRNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetSchemaAction_SkillTreeUIPositionGraph_NewSkillNode_FromRNode>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssetSchemaAction_SkillTreeUIPositionGraph_NewSkillNode_FromRNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PZ_SkillTreeEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"AssetSchemaAction_SkillTreeUIPositionGraph_NewSkillNode_FromRNode",
		sizeof(FAssetSchemaAction_SkillTreeUIPositionGraph_NewSkillNode_FromRNode),
		alignof(FAssetSchemaAction_SkillTreeUIPositionGraph_NewSkillNode_FromRNode),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetSchemaAction_SkillTreeUIPositionGraph_NewSkillNode_FromRNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetSchemaAction_SkillTreeUIPositionGraph_NewSkillNode_FromRNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAssetSchemaAction_SkillTreeUIPositionGraph_NewSkillNode_FromRNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAssetSchemaAction_SkillTreeUIPositionGraph_NewSkillNode_FromRNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PZ_SkillTreeEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AssetSchemaAction_SkillTreeUIPositionGraph_NewSkillNode_FromRNode"), sizeof(FAssetSchemaAction_SkillTreeUIPositionGraph_NewSkillNode_FromRNode), Get_Z_Construct_UScriptStruct_FAssetSchemaAction_SkillTreeUIPositionGraph_NewSkillNode_FromRNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAssetSchemaAction_SkillTreeUIPositionGraph_NewSkillNode_FromRNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAssetSchemaAction_SkillTreeUIPositionGraph_NewSkillNode_FromRNode_Hash() { return 337638725U; }
	void UPZ_SkillTreeUIPositionEdGraphSchema::StaticRegisterNativesUPZ_SkillTreeUIPositionEdGraphSchema()
	{
	}
	UClass* Z_Construct_UClass_UPZ_SkillTreeUIPositionEdGraphSchema_NoRegister()
	{
		return UPZ_SkillTreeUIPositionEdGraphSchema::StaticClass();
	}
	struct Z_Construct_UClass_UPZ_SkillTreeUIPositionEdGraphSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPZ_SkillTreeUIPositionEdGraphSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_PZ_SkillTreeEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTreeUIPositionEdGraphSchema_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SkillTreeEditor/UIPositionGraph/Graph/PZ_SkillTreeUIPositionEdGraphSchema.h" },
		{ "ModuleRelativePath", "Private/SkillTreeEditor/UIPositionGraph/Graph/PZ_SkillTreeUIPositionEdGraphSchema.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPZ_SkillTreeUIPositionEdGraphSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPZ_SkillTreeUIPositionEdGraphSchema>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPZ_SkillTreeUIPositionEdGraphSchema_Statics::ClassParams = {
		&UPZ_SkillTreeUIPositionEdGraphSchema::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTreeUIPositionEdGraphSchema_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeUIPositionEdGraphSchema_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPZ_SkillTreeUIPositionEdGraphSchema()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPZ_SkillTreeUIPositionEdGraphSchema_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPZ_SkillTreeUIPositionEdGraphSchema, 237625327);
	template<> PZ_SKILLTREEEDITOR_API UClass* StaticClass<UPZ_SkillTreeUIPositionEdGraphSchema>()
	{
		return UPZ_SkillTreeUIPositionEdGraphSchema::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPZ_SkillTreeUIPositionEdGraphSchema(Z_Construct_UClass_UPZ_SkillTreeUIPositionEdGraphSchema, &UPZ_SkillTreeUIPositionEdGraphSchema::StaticClass, TEXT("/Script/PZ_SkillTreeEditor"), TEXT("UPZ_SkillTreeUIPositionEdGraphSchema"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPZ_SkillTreeUIPositionEdGraphSchema);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
