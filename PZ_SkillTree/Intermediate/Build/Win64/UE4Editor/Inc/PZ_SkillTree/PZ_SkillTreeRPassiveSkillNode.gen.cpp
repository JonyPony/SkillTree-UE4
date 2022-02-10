// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PZ_SkillTree/Public/Nodes/PassiveSkillNode/PZ_SkillTreeRPassiveSkillNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePZ_SkillTreeRPassiveSkillNode() {}
// Cross Module References
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTreeRPassiveSkillNode_NoRegister();
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTreeRPassiveSkillNode();
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTreeRSkillNode();
	UPackage* Z_Construct_UPackage__Script_PZ_SkillTree();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
	void UPZ_SkillTreeRPassiveSkillNode::StaticRegisterNativesUPZ_SkillTreeRPassiveSkillNode()
	{
	}
	UClass* Z_Construct_UClass_UPZ_SkillTreeRPassiveSkillNode_NoRegister()
	{
		return UPZ_SkillTreeRPassiveSkillNode::StaticClass();
	}
	struct Z_Construct_UClass_UPZ_SkillTreeRPassiveSkillNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkillCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPZ_SkillTreeRPassiveSkillNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPZ_SkillTreeRSkillNode,
		(UObject* (*)())Z_Construct_UPackage__Script_PZ_SkillTree,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTreeRPassiveSkillNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Nodes/PassiveSkillNode/PZ_SkillTreeRPassiveSkillNode.h" },
		{ "ModuleRelativePath", "Public/Nodes/PassiveSkillNode/PZ_SkillTreeRPassiveSkillNode.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTreeRPassiveSkillNode_Statics::NewProp_SkillCurve_MetaData[] = {
		{ "Category", "Skill Settings" },
		{ "ModuleRelativePath", "Public/Nodes/PassiveSkillNode/PZ_SkillTreeRPassiveSkillNode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPZ_SkillTreeRPassiveSkillNode_Statics::NewProp_SkillCurve = { "SkillCurve", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPZ_SkillTreeRPassiveSkillNode, SkillCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTreeRPassiveSkillNode_Statics::NewProp_SkillCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeRPassiveSkillNode_Statics::NewProp_SkillCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPZ_SkillTreeRPassiveSkillNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPZ_SkillTreeRPassiveSkillNode_Statics::NewProp_SkillCurve,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPZ_SkillTreeRPassiveSkillNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPZ_SkillTreeRPassiveSkillNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPZ_SkillTreeRPassiveSkillNode_Statics::ClassParams = {
		&UPZ_SkillTreeRPassiveSkillNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPZ_SkillTreeRPassiveSkillNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeRPassiveSkillNode_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTreeRPassiveSkillNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeRPassiveSkillNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPZ_SkillTreeRPassiveSkillNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPZ_SkillTreeRPassiveSkillNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPZ_SkillTreeRPassiveSkillNode, 1557036039);
	template<> PZ_SKILLTREE_API UClass* StaticClass<UPZ_SkillTreeRPassiveSkillNode>()
	{
		return UPZ_SkillTreeRPassiveSkillNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPZ_SkillTreeRPassiveSkillNode(Z_Construct_UClass_UPZ_SkillTreeRPassiveSkillNode, &UPZ_SkillTreeRPassiveSkillNode::StaticClass, TEXT("/Script/PZ_SkillTree"), TEXT("UPZ_SkillTreeRPassiveSkillNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPZ_SkillTreeRPassiveSkillNode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
