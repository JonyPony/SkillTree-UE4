// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PZ_SkillTreeEditor/Private/SkillTreeEditor/StructureGraph/Graph/PZ_SkillTreeStructureEdGraphSchema.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePZ_SkillTreeStructureEdGraphSchema() {}
// Cross Module References
	PZ_SKILLTREEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FAssetSchemaAction_SkillTreeGraph_NewEdge();
	UPackage* Z_Construct_UPackage__Script_PZ_SkillTreeEditor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
	PZ_SKILLTREEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FNewComment_SkillTreeGraphSchemaAction();
	PZ_SKILLTREEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FAssetSchemaAction_SkillTreeGraph_NewSubNode();
	PZ_SKILLTREEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FAssetSchemaAction_SkillTreeGraph_NewNode();
	PZ_SKILLTREEEDITOR_API UClass* Z_Construct_UClass_UPZ_SkillTreeEdGraphSchema_NoRegister();
	PZ_SKILLTREEEDITOR_API UClass* Z_Construct_UClass_UPZ_SkillTreeEdGraphSchema();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
// End Cross Module References

static_assert(std::is_polymorphic<FAssetSchemaAction_SkillTreeGraph_NewEdge>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FAssetSchemaAction_SkillTreeGraph_NewEdge cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

class UScriptStruct* FAssetSchemaAction_SkillTreeGraph_NewEdge::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PZ_SKILLTREEEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FAssetSchemaAction_SkillTreeGraph_NewEdge_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetSchemaAction_SkillTreeGraph_NewEdge, Z_Construct_UPackage__Script_PZ_SkillTreeEditor(), TEXT("AssetSchemaAction_SkillTreeGraph_NewEdge"), sizeof(FAssetSchemaAction_SkillTreeGraph_NewEdge), Get_Z_Construct_UScriptStruct_FAssetSchemaAction_SkillTreeGraph_NewEdge_Hash());
	}
	return Singleton;
}
template<> PZ_SKILLTREEEDITOR_API UScriptStruct* StaticStruct<FAssetSchemaAction_SkillTreeGraph_NewEdge>()
{
	return FAssetSchemaAction_SkillTreeGraph_NewEdge::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAssetSchemaAction_SkillTreeGraph_NewEdge(FAssetSchemaAction_SkillTreeGraph_NewEdge::StaticStruct, TEXT("/Script/PZ_SkillTreeEditor"), TEXT("AssetSchemaAction_SkillTreeGraph_NewEdge"), false, nullptr, nullptr);
static struct FScriptStruct_PZ_SkillTreeEditor_StaticRegisterNativesFAssetSchemaAction_SkillTreeGraph_NewEdge
{
	FScriptStruct_PZ_SkillTreeEditor_StaticRegisterNativesFAssetSchemaAction_SkillTreeGraph_NewEdge()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AssetSchemaAction_SkillTreeGraph_NewEdge")),new UScriptStruct::TCppStructOps<FAssetSchemaAction_SkillTreeGraph_NewEdge>);
	}
} ScriptStruct_PZ_SkillTreeEditor_StaticRegisterNativesFAssetSchemaAction_SkillTreeGraph_NewEdge;
	struct Z_Construct_UScriptStruct_FAssetSchemaAction_SkillTreeGraph_NewEdge_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetSchemaAction_SkillTreeGraph_NewEdge_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/SkillTreeEditor/StructureGraph/Graph/PZ_SkillTreeStructureEdGraphSchema.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAssetSchemaAction_SkillTreeGraph_NewEdge_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetSchemaAction_SkillTreeGraph_NewEdge>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssetSchemaAction_SkillTreeGraph_NewEdge_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PZ_SkillTreeEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"AssetSchemaAction_SkillTreeGraph_NewEdge",
		sizeof(FAssetSchemaAction_SkillTreeGraph_NewEdge),
		alignof(FAssetSchemaAction_SkillTreeGraph_NewEdge),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetSchemaAction_SkillTreeGraph_NewEdge_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetSchemaAction_SkillTreeGraph_NewEdge_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAssetSchemaAction_SkillTreeGraph_NewEdge()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAssetSchemaAction_SkillTreeGraph_NewEdge_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PZ_SkillTreeEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AssetSchemaAction_SkillTreeGraph_NewEdge"), sizeof(FAssetSchemaAction_SkillTreeGraph_NewEdge), Get_Z_Construct_UScriptStruct_FAssetSchemaAction_SkillTreeGraph_NewEdge_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAssetSchemaAction_SkillTreeGraph_NewEdge_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAssetSchemaAction_SkillTreeGraph_NewEdge_Hash() { return 1156946504U; }

static_assert(std::is_polymorphic<FNewComment_SkillTreeGraphSchemaAction>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FNewComment_SkillTreeGraphSchemaAction cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

class UScriptStruct* FNewComment_SkillTreeGraphSchemaAction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PZ_SKILLTREEEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FNewComment_SkillTreeGraphSchemaAction_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNewComment_SkillTreeGraphSchemaAction, Z_Construct_UPackage__Script_PZ_SkillTreeEditor(), TEXT("NewComment_SkillTreeGraphSchemaAction"), sizeof(FNewComment_SkillTreeGraphSchemaAction), Get_Z_Construct_UScriptStruct_FNewComment_SkillTreeGraphSchemaAction_Hash());
	}
	return Singleton;
}
template<> PZ_SKILLTREEEDITOR_API UScriptStruct* StaticStruct<FNewComment_SkillTreeGraphSchemaAction>()
{
	return FNewComment_SkillTreeGraphSchemaAction::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNewComment_SkillTreeGraphSchemaAction(FNewComment_SkillTreeGraphSchemaAction::StaticStruct, TEXT("/Script/PZ_SkillTreeEditor"), TEXT("NewComment_SkillTreeGraphSchemaAction"), false, nullptr, nullptr);
static struct FScriptStruct_PZ_SkillTreeEditor_StaticRegisterNativesFNewComment_SkillTreeGraphSchemaAction
{
	FScriptStruct_PZ_SkillTreeEditor_StaticRegisterNativesFNewComment_SkillTreeGraphSchemaAction()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NewComment_SkillTreeGraphSchemaAction")),new UScriptStruct::TCppStructOps<FNewComment_SkillTreeGraphSchemaAction>);
	}
} ScriptStruct_PZ_SkillTreeEditor_StaticRegisterNativesFNewComment_SkillTreeGraphSchemaAction;
	struct Z_Construct_UScriptStruct_FNewComment_SkillTreeGraphSchemaAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNewComment_SkillTreeGraphSchemaAction_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/SkillTreeEditor/StructureGraph/Graph/PZ_SkillTreeStructureEdGraphSchema.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNewComment_SkillTreeGraphSchemaAction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNewComment_SkillTreeGraphSchemaAction>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNewComment_SkillTreeGraphSchemaAction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PZ_SkillTreeEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"NewComment_SkillTreeGraphSchemaAction",
		sizeof(FNewComment_SkillTreeGraphSchemaAction),
		alignof(FNewComment_SkillTreeGraphSchemaAction),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNewComment_SkillTreeGraphSchemaAction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewComment_SkillTreeGraphSchemaAction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNewComment_SkillTreeGraphSchemaAction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNewComment_SkillTreeGraphSchemaAction_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PZ_SkillTreeEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NewComment_SkillTreeGraphSchemaAction"), sizeof(FNewComment_SkillTreeGraphSchemaAction), Get_Z_Construct_UScriptStruct_FNewComment_SkillTreeGraphSchemaAction_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNewComment_SkillTreeGraphSchemaAction_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNewComment_SkillTreeGraphSchemaAction_Hash() { return 3546482661U; }

static_assert(std::is_polymorphic<FAssetSchemaAction_SkillTreeGraph_NewSubNode>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FAssetSchemaAction_SkillTreeGraph_NewSubNode cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

class UScriptStruct* FAssetSchemaAction_SkillTreeGraph_NewSubNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PZ_SKILLTREEEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FAssetSchemaAction_SkillTreeGraph_NewSubNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetSchemaAction_SkillTreeGraph_NewSubNode, Z_Construct_UPackage__Script_PZ_SkillTreeEditor(), TEXT("AssetSchemaAction_SkillTreeGraph_NewSubNode"), sizeof(FAssetSchemaAction_SkillTreeGraph_NewSubNode), Get_Z_Construct_UScriptStruct_FAssetSchemaAction_SkillTreeGraph_NewSubNode_Hash());
	}
	return Singleton;
}
template<> PZ_SKILLTREEEDITOR_API UScriptStruct* StaticStruct<FAssetSchemaAction_SkillTreeGraph_NewSubNode>()
{
	return FAssetSchemaAction_SkillTreeGraph_NewSubNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAssetSchemaAction_SkillTreeGraph_NewSubNode(FAssetSchemaAction_SkillTreeGraph_NewSubNode::StaticStruct, TEXT("/Script/PZ_SkillTreeEditor"), TEXT("AssetSchemaAction_SkillTreeGraph_NewSubNode"), false, nullptr, nullptr);
static struct FScriptStruct_PZ_SkillTreeEditor_StaticRegisterNativesFAssetSchemaAction_SkillTreeGraph_NewSubNode
{
	FScriptStruct_PZ_SkillTreeEditor_StaticRegisterNativesFAssetSchemaAction_SkillTreeGraph_NewSubNode()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AssetSchemaAction_SkillTreeGraph_NewSubNode")),new UScriptStruct::TCppStructOps<FAssetSchemaAction_SkillTreeGraph_NewSubNode>);
	}
} ScriptStruct_PZ_SkillTreeEditor_StaticRegisterNativesFAssetSchemaAction_SkillTreeGraph_NewSubNode;
	struct Z_Construct_UScriptStruct_FAssetSchemaAction_SkillTreeGraph_NewSubNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetSchemaAction_SkillTreeGraph_NewSubNode_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/SkillTreeEditor/StructureGraph/Graph/PZ_SkillTreeStructureEdGraphSchema.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAssetSchemaAction_SkillTreeGraph_NewSubNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetSchemaAction_SkillTreeGraph_NewSubNode>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssetSchemaAction_SkillTreeGraph_NewSubNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PZ_SkillTreeEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"AssetSchemaAction_SkillTreeGraph_NewSubNode",
		sizeof(FAssetSchemaAction_SkillTreeGraph_NewSubNode),
		alignof(FAssetSchemaAction_SkillTreeGraph_NewSubNode),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetSchemaAction_SkillTreeGraph_NewSubNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetSchemaAction_SkillTreeGraph_NewSubNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAssetSchemaAction_SkillTreeGraph_NewSubNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAssetSchemaAction_SkillTreeGraph_NewSubNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PZ_SkillTreeEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AssetSchemaAction_SkillTreeGraph_NewSubNode"), sizeof(FAssetSchemaAction_SkillTreeGraph_NewSubNode), Get_Z_Construct_UScriptStruct_FAssetSchemaAction_SkillTreeGraph_NewSubNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAssetSchemaAction_SkillTreeGraph_NewSubNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAssetSchemaAction_SkillTreeGraph_NewSubNode_Hash() { return 3813181662U; }

static_assert(std::is_polymorphic<FAssetSchemaAction_SkillTreeGraph_NewNode>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FAssetSchemaAction_SkillTreeGraph_NewNode cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

class UScriptStruct* FAssetSchemaAction_SkillTreeGraph_NewNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PZ_SKILLTREEEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FAssetSchemaAction_SkillTreeGraph_NewNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetSchemaAction_SkillTreeGraph_NewNode, Z_Construct_UPackage__Script_PZ_SkillTreeEditor(), TEXT("AssetSchemaAction_SkillTreeGraph_NewNode"), sizeof(FAssetSchemaAction_SkillTreeGraph_NewNode), Get_Z_Construct_UScriptStruct_FAssetSchemaAction_SkillTreeGraph_NewNode_Hash());
	}
	return Singleton;
}
template<> PZ_SKILLTREEEDITOR_API UScriptStruct* StaticStruct<FAssetSchemaAction_SkillTreeGraph_NewNode>()
{
	return FAssetSchemaAction_SkillTreeGraph_NewNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAssetSchemaAction_SkillTreeGraph_NewNode(FAssetSchemaAction_SkillTreeGraph_NewNode::StaticStruct, TEXT("/Script/PZ_SkillTreeEditor"), TEXT("AssetSchemaAction_SkillTreeGraph_NewNode"), false, nullptr, nullptr);
static struct FScriptStruct_PZ_SkillTreeEditor_StaticRegisterNativesFAssetSchemaAction_SkillTreeGraph_NewNode
{
	FScriptStruct_PZ_SkillTreeEditor_StaticRegisterNativesFAssetSchemaAction_SkillTreeGraph_NewNode()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AssetSchemaAction_SkillTreeGraph_NewNode")),new UScriptStruct::TCppStructOps<FAssetSchemaAction_SkillTreeGraph_NewNode>);
	}
} ScriptStruct_PZ_SkillTreeEditor_StaticRegisterNativesFAssetSchemaAction_SkillTreeGraph_NewNode;
	struct Z_Construct_UScriptStruct_FAssetSchemaAction_SkillTreeGraph_NewNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetSchemaAction_SkillTreeGraph_NewNode_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/SkillTreeEditor/StructureGraph/Graph/PZ_SkillTreeStructureEdGraphSchema.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAssetSchemaAction_SkillTreeGraph_NewNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetSchemaAction_SkillTreeGraph_NewNode>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssetSchemaAction_SkillTreeGraph_NewNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PZ_SkillTreeEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"AssetSchemaAction_SkillTreeGraph_NewNode",
		sizeof(FAssetSchemaAction_SkillTreeGraph_NewNode),
		alignof(FAssetSchemaAction_SkillTreeGraph_NewNode),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetSchemaAction_SkillTreeGraph_NewNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetSchemaAction_SkillTreeGraph_NewNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAssetSchemaAction_SkillTreeGraph_NewNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAssetSchemaAction_SkillTreeGraph_NewNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PZ_SkillTreeEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AssetSchemaAction_SkillTreeGraph_NewNode"), sizeof(FAssetSchemaAction_SkillTreeGraph_NewNode), Get_Z_Construct_UScriptStruct_FAssetSchemaAction_SkillTreeGraph_NewNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAssetSchemaAction_SkillTreeGraph_NewNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAssetSchemaAction_SkillTreeGraph_NewNode_Hash() { return 3000915765U; }
	void UPZ_SkillTreeEdGraphSchema::StaticRegisterNativesUPZ_SkillTreeEdGraphSchema()
	{
	}
	UClass* Z_Construct_UClass_UPZ_SkillTreeEdGraphSchema_NoRegister()
	{
		return UPZ_SkillTreeEdGraphSchema::StaticClass();
	}
	struct Z_Construct_UClass_UPZ_SkillTreeEdGraphSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPZ_SkillTreeEdGraphSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_PZ_SkillTreeEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTreeEdGraphSchema_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SkillTreeEditor/StructureGraph/Graph/PZ_SkillTreeStructureEdGraphSchema.h" },
		{ "ModuleRelativePath", "Private/SkillTreeEditor/StructureGraph/Graph/PZ_SkillTreeStructureEdGraphSchema.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPZ_SkillTreeEdGraphSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPZ_SkillTreeEdGraphSchema>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPZ_SkillTreeEdGraphSchema_Statics::ClassParams = {
		&UPZ_SkillTreeEdGraphSchema::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTreeEdGraphSchema_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeEdGraphSchema_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPZ_SkillTreeEdGraphSchema()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPZ_SkillTreeEdGraphSchema_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPZ_SkillTreeEdGraphSchema, 2024424037);
	template<> PZ_SKILLTREEEDITOR_API UClass* StaticClass<UPZ_SkillTreeEdGraphSchema>()
	{
		return UPZ_SkillTreeEdGraphSchema::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPZ_SkillTreeEdGraphSchema(Z_Construct_UClass_UPZ_SkillTreeEdGraphSchema, &UPZ_SkillTreeEdGraphSchema::StaticClass, TEXT("/Script/PZ_SkillTreeEditor"), TEXT("UPZ_SkillTreeEdGraphSchema"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPZ_SkillTreeEdGraphSchema);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
