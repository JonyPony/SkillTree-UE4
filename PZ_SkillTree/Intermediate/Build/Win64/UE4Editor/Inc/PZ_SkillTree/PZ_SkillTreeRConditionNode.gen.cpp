// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PZ_SkillTree/Public/Nodes/ConditionNode/PZ_SkillTreeRConditionNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePZ_SkillTreeRConditionNode() {}
// Cross Module References
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTreeRConditionNode_NoRegister();
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTreeRConditionNode();
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTreeRBaseNode();
	UPackage* Z_Construct_UPackage__Script_PZ_SkillTree();
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTreeCondition_NoRegister();
// End Cross Module References
	void UPZ_SkillTreeRConditionNode::StaticRegisterNativesUPZ_SkillTreeRConditionNode()
	{
	}
	UClass* Z_Construct_UClass_UPZ_SkillTreeRConditionNode_NoRegister()
	{
		return UPZ_SkillTreeRConditionNode::StaticClass();
	}
	struct Z_Construct_UClass_UPZ_SkillTreeRConditionNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SendConditionEvents_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SendConditionEvents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SendConditionEvents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SendConditionEvents;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPZ_SkillTreeRConditionNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPZ_SkillTreeRBaseNode,
		(UObject* (*)())Z_Construct_UPackage__Script_PZ_SkillTree,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTreeRConditionNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Nodes/ConditionNode/PZ_SkillTreeRConditionNode.h" },
		{ "ModuleRelativePath", "Public/Nodes/ConditionNode/PZ_SkillTreeRConditionNode.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTreeRConditionNode_Statics::NewProp_SendConditionEvents_Inner_MetaData[] = {
		{ "Category", "PZ_SkillTreeRConditionNode" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Nodes/ConditionNode/PZ_SkillTreeRConditionNode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPZ_SkillTreeRConditionNode_Statics::NewProp_SendConditionEvents_Inner = { "SendConditionEvents", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPZ_SkillTreeCondition_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTreeRConditionNode_Statics::NewProp_SendConditionEvents_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeRConditionNode_Statics::NewProp_SendConditionEvents_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTreeRConditionNode_Statics::NewProp_SendConditionEvents_MetaData[] = {
		{ "Category", "PZ_SkillTreeRConditionNode" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Nodes/ConditionNode/PZ_SkillTreeRConditionNode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPZ_SkillTreeRConditionNode_Statics::NewProp_SendConditionEvents = { "SendConditionEvents", nullptr, (EPropertyFlags)0x001000800001001d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPZ_SkillTreeRConditionNode, SendConditionEvents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTreeRConditionNode_Statics::NewProp_SendConditionEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeRConditionNode_Statics::NewProp_SendConditionEvents_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPZ_SkillTreeRConditionNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPZ_SkillTreeRConditionNode_Statics::NewProp_SendConditionEvents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPZ_SkillTreeRConditionNode_Statics::NewProp_SendConditionEvents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPZ_SkillTreeRConditionNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPZ_SkillTreeRConditionNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPZ_SkillTreeRConditionNode_Statics::ClassParams = {
		&UPZ_SkillTreeRConditionNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPZ_SkillTreeRConditionNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeRConditionNode_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTreeRConditionNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeRConditionNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPZ_SkillTreeRConditionNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPZ_SkillTreeRConditionNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPZ_SkillTreeRConditionNode, 3181519655);
	template<> PZ_SKILLTREE_API UClass* StaticClass<UPZ_SkillTreeRConditionNode>()
	{
		return UPZ_SkillTreeRConditionNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPZ_SkillTreeRConditionNode(Z_Construct_UClass_UPZ_SkillTreeRConditionNode, &UPZ_SkillTreeRConditionNode::StaticClass, TEXT("/Script/PZ_SkillTree"), TEXT("UPZ_SkillTreeRConditionNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPZ_SkillTreeRConditionNode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
