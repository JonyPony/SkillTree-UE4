// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PZ_SkillTreeEditor/Private/SkillTreeEditor/StructureGraph/Nodes/EdgePoint/PZ_SkillTreeEdNode_Edge.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePZ_SkillTreeEdNode_Edge() {}
// Cross Module References
	PZ_SKILLTREEEDITOR_API UClass* Z_Construct_UClass_UPZ_SkillTreeEdNode_Edge_NoRegister();
	PZ_SKILLTREEEDITOR_API UClass* Z_Construct_UClass_UPZ_SkillTreeEdNode_Edge();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
	UPackage* Z_Construct_UPackage__Script_PZ_SkillTreeEditor();
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTreeREdgeNode_NoRegister();
	PZ_SKILLTREEEDITOR_API UClass* Z_Construct_UClass_UPZ_SkillTreeNodeInterface_NoRegister();
// End Cross Module References
	void UPZ_SkillTreeEdNode_Edge::StaticRegisterNativesUPZ_SkillTreeEdNode_Edge()
	{
	}
	UClass* Z_Construct_UClass_UPZ_SkillTreeEdNode_Edge_NoRegister()
	{
		return UPZ_SkillTreeEdNode_Edge::StaticClass();
	}
	struct Z_Construct_UClass_UPZ_SkillTreeEdNode_Edge_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_REdgeNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_REdgeNode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPZ_SkillTreeEdNode_Edge_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_PZ_SkillTreeEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTreeEdNode_Edge_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SkillTreeEditor/StructureGraph/Nodes/EdgePoint/PZ_SkillTreeEdNode_Edge.h" },
		{ "ModuleRelativePath", "Private/SkillTreeEditor/StructureGraph/Nodes/EdgePoint/PZ_SkillTreeEdNode_Edge.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTreeEdNode_Edge_Statics::NewProp_REdgeNode_MetaData[] = {
		{ "Category", "PZ_SkillTreeEdNode_Edge" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/SkillTreeEditor/StructureGraph/Nodes/EdgePoint/PZ_SkillTreeEdNode_Edge.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPZ_SkillTreeEdNode_Edge_Statics::NewProp_REdgeNode = { "REdgeNode", nullptr, (EPropertyFlags)0x00120000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPZ_SkillTreeEdNode_Edge, REdgeNode), Z_Construct_UClass_UPZ_SkillTreeREdgeNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTreeEdNode_Edge_Statics::NewProp_REdgeNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeEdNode_Edge_Statics::NewProp_REdgeNode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPZ_SkillTreeEdNode_Edge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPZ_SkillTreeEdNode_Edge_Statics::NewProp_REdgeNode,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UPZ_SkillTreeEdNode_Edge_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPZ_SkillTreeNodeInterface_NoRegister, (int32)VTABLE_OFFSET(UPZ_SkillTreeEdNode_Edge, IPZ_SkillTreeNodeInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPZ_SkillTreeEdNode_Edge_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPZ_SkillTreeEdNode_Edge>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPZ_SkillTreeEdNode_Edge_Statics::ClassParams = {
		&UPZ_SkillTreeEdNode_Edge::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPZ_SkillTreeEdNode_Edge_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeEdNode_Edge_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTreeEdNode_Edge_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeEdNode_Edge_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPZ_SkillTreeEdNode_Edge()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPZ_SkillTreeEdNode_Edge_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPZ_SkillTreeEdNode_Edge, 530020505);
	template<> PZ_SKILLTREEEDITOR_API UClass* StaticClass<UPZ_SkillTreeEdNode_Edge>()
	{
		return UPZ_SkillTreeEdNode_Edge::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPZ_SkillTreeEdNode_Edge(Z_Construct_UClass_UPZ_SkillTreeEdNode_Edge, &UPZ_SkillTreeEdNode_Edge::StaticClass, TEXT("/Script/PZ_SkillTreeEditor"), TEXT("UPZ_SkillTreeEdNode_Edge"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPZ_SkillTreeEdNode_Edge);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
