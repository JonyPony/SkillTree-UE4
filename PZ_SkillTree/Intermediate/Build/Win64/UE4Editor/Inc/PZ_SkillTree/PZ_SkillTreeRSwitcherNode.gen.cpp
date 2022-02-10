// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PZ_SkillTree/Public/Nodes/SwitcherNode/PZ_SkillTreeRSwitcherNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePZ_SkillTreeRSwitcherNode() {}
// Cross Module References
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTreeRSwitcherNode_NoRegister();
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTreeRSwitcherNode();
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTreeRBaseNode();
	UPackage* Z_Construct_UPackage__Script_PZ_SkillTree();
// End Cross Module References
	void UPZ_SkillTreeRSwitcherNode::StaticRegisterNativesUPZ_SkillTreeRSwitcherNode()
	{
	}
	UClass* Z_Construct_UClass_UPZ_SkillTreeRSwitcherNode_NoRegister()
	{
		return UPZ_SkillTreeRSwitcherNode::StaticClass();
	}
	struct Z_Construct_UClass_UPZ_SkillTreeRSwitcherNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxIncludeNodeCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxIncludeNodeCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPZ_SkillTreeRSwitcherNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPZ_SkillTreeRBaseNode,
		(UObject* (*)())Z_Construct_UPackage__Script_PZ_SkillTree,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTreeRSwitcherNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Nodes/SwitcherNode/PZ_SkillTreeRSwitcherNode.h" },
		{ "ModuleRelativePath", "Public/Nodes/SwitcherNode/PZ_SkillTreeRSwitcherNode.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTreeRSwitcherNode_Statics::NewProp_MaxIncludeNodeCount_MetaData[] = {
		{ "Category", "Skill Settings" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/Nodes/SwitcherNode/PZ_SkillTreeRSwitcherNode.h" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UPZ_SkillTreeRSwitcherNode_Statics::NewProp_MaxIncludeNodeCount = { "MaxIncludeNodeCount", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPZ_SkillTreeRSwitcherNode, MaxIncludeNodeCount), METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTreeRSwitcherNode_Statics::NewProp_MaxIncludeNodeCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeRSwitcherNode_Statics::NewProp_MaxIncludeNodeCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPZ_SkillTreeRSwitcherNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPZ_SkillTreeRSwitcherNode_Statics::NewProp_MaxIncludeNodeCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPZ_SkillTreeRSwitcherNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPZ_SkillTreeRSwitcherNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPZ_SkillTreeRSwitcherNode_Statics::ClassParams = {
		&UPZ_SkillTreeRSwitcherNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPZ_SkillTreeRSwitcherNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeRSwitcherNode_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTreeRSwitcherNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeRSwitcherNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPZ_SkillTreeRSwitcherNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPZ_SkillTreeRSwitcherNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPZ_SkillTreeRSwitcherNode, 560102652);
	template<> PZ_SKILLTREE_API UClass* StaticClass<UPZ_SkillTreeRSwitcherNode>()
	{
		return UPZ_SkillTreeRSwitcherNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPZ_SkillTreeRSwitcherNode(Z_Construct_UClass_UPZ_SkillTreeRSwitcherNode, &UPZ_SkillTreeRSwitcherNode::StaticClass, TEXT("/Script/PZ_SkillTree"), TEXT("UPZ_SkillTreeRSwitcherNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPZ_SkillTreeRSwitcherNode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
