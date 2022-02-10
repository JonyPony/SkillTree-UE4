// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PZ_SkillTree/Public/Nodes/EdgePoint/PZ_SkillTreeREdgeNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePZ_SkillTreeREdgeNode() {}
// Cross Module References
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTreeREdgeNode_NoRegister();
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTreeREdgeNode();
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTreeRBaseTreeElement();
	UPackage* Z_Construct_UPackage__Script_PZ_SkillTree();
// End Cross Module References
	void UPZ_SkillTreeREdgeNode::StaticRegisterNativesUPZ_SkillTreeREdgeNode()
	{
	}
	UClass* Z_Construct_UClass_UPZ_SkillTreeREdgeNode_NoRegister()
	{
		return UPZ_SkillTreeREdgeNode::StaticClass();
	}
	struct Z_Construct_UClass_UPZ_SkillTreeREdgeNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlwaysTrue_MetaData[];
#endif
		static void NewProp_AlwaysTrue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AlwaysTrue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsNeedCompile_MetaData[];
#endif
		static void NewProp_IsNeedCompile_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsNeedCompile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPZ_SkillTreeREdgeNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPZ_SkillTreeRBaseTreeElement,
		(UObject* (*)())Z_Construct_UPackage__Script_PZ_SkillTree,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTreeREdgeNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Nodes/EdgePoint/PZ_SkillTreeREdgeNode.h" },
		{ "ModuleRelativePath", "Public/Nodes/EdgePoint/PZ_SkillTreeREdgeNode.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTreeREdgeNode_Statics::NewProp_AlwaysTrue_MetaData[] = {
		{ "Category", "PZ_SkillTreeREdgeNode" },
		{ "ModuleRelativePath", "Public/Nodes/EdgePoint/PZ_SkillTreeREdgeNode.h" },
	};
#endif
	void Z_Construct_UClass_UPZ_SkillTreeREdgeNode_Statics::NewProp_AlwaysTrue_SetBit(void* Obj)
	{
		((UPZ_SkillTreeREdgeNode*)Obj)->AlwaysTrue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPZ_SkillTreeREdgeNode_Statics::NewProp_AlwaysTrue = { "AlwaysTrue", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPZ_SkillTreeREdgeNode), &Z_Construct_UClass_UPZ_SkillTreeREdgeNode_Statics::NewProp_AlwaysTrue_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTreeREdgeNode_Statics::NewProp_AlwaysTrue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeREdgeNode_Statics::NewProp_AlwaysTrue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTreeREdgeNode_Statics::NewProp_IsNeedCompile_MetaData[] = {
		{ "Category", "PZ_SkillTreeREdgeNode" },
		{ "ModuleRelativePath", "Public/Nodes/EdgePoint/PZ_SkillTreeREdgeNode.h" },
	};
#endif
	void Z_Construct_UClass_UPZ_SkillTreeREdgeNode_Statics::NewProp_IsNeedCompile_SetBit(void* Obj)
	{
		((UPZ_SkillTreeREdgeNode*)Obj)->IsNeedCompile = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPZ_SkillTreeREdgeNode_Statics::NewProp_IsNeedCompile = { "IsNeedCompile", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPZ_SkillTreeREdgeNode), &Z_Construct_UClass_UPZ_SkillTreeREdgeNode_Statics::NewProp_IsNeedCompile_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTreeREdgeNode_Statics::NewProp_IsNeedCompile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeREdgeNode_Statics::NewProp_IsNeedCompile_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPZ_SkillTreeREdgeNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPZ_SkillTreeREdgeNode_Statics::NewProp_AlwaysTrue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPZ_SkillTreeREdgeNode_Statics::NewProp_IsNeedCompile,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPZ_SkillTreeREdgeNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPZ_SkillTreeREdgeNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPZ_SkillTreeREdgeNode_Statics::ClassParams = {
		&UPZ_SkillTreeREdgeNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPZ_SkillTreeREdgeNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeREdgeNode_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTreeREdgeNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeREdgeNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPZ_SkillTreeREdgeNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPZ_SkillTreeREdgeNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPZ_SkillTreeREdgeNode, 2394183602);
	template<> PZ_SKILLTREE_API UClass* StaticClass<UPZ_SkillTreeREdgeNode>()
	{
		return UPZ_SkillTreeREdgeNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPZ_SkillTreeREdgeNode(Z_Construct_UClass_UPZ_SkillTreeREdgeNode, &UPZ_SkillTreeREdgeNode::StaticClass, TEXT("/Script/PZ_SkillTree"), TEXT("UPZ_SkillTreeREdgeNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPZ_SkillTreeREdgeNode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
