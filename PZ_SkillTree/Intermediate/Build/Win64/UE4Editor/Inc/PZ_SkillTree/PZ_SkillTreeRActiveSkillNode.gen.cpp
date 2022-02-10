// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PZ_SkillTree/Public/Nodes/ActiveSkillNode/PZ_SkillTreeRActiveSkillNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePZ_SkillTreeRActiveSkillNode() {}
// Cross Module References
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTreeRActiveSkillNode_NoRegister();
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTreeRActiveSkillNode();
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTreeRSkillNode();
	UPackage* Z_Construct_UPackage__Script_PZ_SkillTree();
// End Cross Module References
	void UPZ_SkillTreeRActiveSkillNode::StaticRegisterNativesUPZ_SkillTreeRActiveSkillNode()
	{
	}
	UClass* Z_Construct_UClass_UPZ_SkillTreeRActiveSkillNode_NoRegister()
	{
		return UPZ_SkillTreeRActiveSkillNode::StaticClass();
	}
	struct Z_Construct_UClass_UPZ_SkillTreeRActiveSkillNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSkillLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxSkillLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanAlwaysUpdate_MetaData[];
#endif
		static void NewProp_CanAlwaysUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanAlwaysUpdate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPZ_SkillTreeRActiveSkillNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPZ_SkillTreeRSkillNode,
		(UObject* (*)())Z_Construct_UPackage__Script_PZ_SkillTree,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTreeRActiveSkillNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Nodes/ActiveSkillNode/PZ_SkillTreeRActiveSkillNode.h" },
		{ "ModuleRelativePath", "Public/Nodes/ActiveSkillNode/PZ_SkillTreeRActiveSkillNode.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTreeRActiveSkillNode_Statics::NewProp_MaxSkillLevel_MetaData[] = {
		{ "Category", "Skill Settings" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/Nodes/ActiveSkillNode/PZ_SkillTreeRActiveSkillNode.h" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UPZ_SkillTreeRActiveSkillNode_Statics::NewProp_MaxSkillLevel = { "MaxSkillLevel", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPZ_SkillTreeRActiveSkillNode, MaxSkillLevel), METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTreeRActiveSkillNode_Statics::NewProp_MaxSkillLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeRActiveSkillNode_Statics::NewProp_MaxSkillLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTreeRActiveSkillNode_Statics::NewProp_CanAlwaysUpdate_MetaData[] = {
		{ "Category", "Skill Settings" },
		{ "ModuleRelativePath", "Public/Nodes/ActiveSkillNode/PZ_SkillTreeRActiveSkillNode.h" },
	};
#endif
	void Z_Construct_UClass_UPZ_SkillTreeRActiveSkillNode_Statics::NewProp_CanAlwaysUpdate_SetBit(void* Obj)
	{
		((UPZ_SkillTreeRActiveSkillNode*)Obj)->CanAlwaysUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPZ_SkillTreeRActiveSkillNode_Statics::NewProp_CanAlwaysUpdate = { "CanAlwaysUpdate", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPZ_SkillTreeRActiveSkillNode), &Z_Construct_UClass_UPZ_SkillTreeRActiveSkillNode_Statics::NewProp_CanAlwaysUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTreeRActiveSkillNode_Statics::NewProp_CanAlwaysUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeRActiveSkillNode_Statics::NewProp_CanAlwaysUpdate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPZ_SkillTreeRActiveSkillNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPZ_SkillTreeRActiveSkillNode_Statics::NewProp_MaxSkillLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPZ_SkillTreeRActiveSkillNode_Statics::NewProp_CanAlwaysUpdate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPZ_SkillTreeRActiveSkillNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPZ_SkillTreeRActiveSkillNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPZ_SkillTreeRActiveSkillNode_Statics::ClassParams = {
		&UPZ_SkillTreeRActiveSkillNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPZ_SkillTreeRActiveSkillNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeRActiveSkillNode_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTreeRActiveSkillNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeRActiveSkillNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPZ_SkillTreeRActiveSkillNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPZ_SkillTreeRActiveSkillNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPZ_SkillTreeRActiveSkillNode, 3155213423);
	template<> PZ_SKILLTREE_API UClass* StaticClass<UPZ_SkillTreeRActiveSkillNode>()
	{
		return UPZ_SkillTreeRActiveSkillNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPZ_SkillTreeRActiveSkillNode(Z_Construct_UClass_UPZ_SkillTreeRActiveSkillNode, &UPZ_SkillTreeRActiveSkillNode::StaticClass, TEXT("/Script/PZ_SkillTree"), TEXT("UPZ_SkillTreeRActiveSkillNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPZ_SkillTreeRActiveSkillNode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
