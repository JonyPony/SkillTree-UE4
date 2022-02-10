// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PZ_SkillTree/Public/Nodes/SkillNode/PZ_SkillTreeRSkillNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePZ_SkillTreeRSkillNode() {}
// Cross Module References
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTreeRSkillNode_NoRegister();
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTreeRSkillNode();
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTreeRBaseNode();
	UPackage* Z_Construct_UPackage__Script_PZ_SkillTree();
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTreeRConditionNode_NoRegister();
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTreeRSkillActionNode_NoRegister();
// End Cross Module References
	void UPZ_SkillTreeRSkillNode::StaticRegisterNativesUPZ_SkillTreeRSkillNode()
	{
	}
	UClass* Z_Construct_UClass_UPZ_SkillTreeRSkillNode_NoRegister()
	{
		return UPZ_SkillTreeRSkillNode::StaticClass();
	}
	struct Z_Construct_UClass_UPZ_SkillTreeRSkillNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlwaysCanBeOpen_MetaData[];
#endif
		static void NewProp_AlwaysCanBeOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AlwaysCanBeOpen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsUIRootNode_MetaData[];
#endif
		static void NewProp_IsUIRootNode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsUIRootNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConditionNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConditionNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillActionNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkillActionNode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPZ_SkillTreeRSkillNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPZ_SkillTreeRBaseNode,
		(UObject* (*)())Z_Construct_UPackage__Script_PZ_SkillTree,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTreeRSkillNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Nodes/SkillNode/PZ_SkillTreeRSkillNode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Nodes/SkillNode/PZ_SkillTreeRSkillNode.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTreeRSkillNode_Statics::NewProp_AlwaysCanBeOpen_MetaData[] = {
		{ "Category", "Skill Settings" },
		{ "ModuleRelativePath", "Public/Nodes/SkillNode/PZ_SkillTreeRSkillNode.h" },
	};
#endif
	void Z_Construct_UClass_UPZ_SkillTreeRSkillNode_Statics::NewProp_AlwaysCanBeOpen_SetBit(void* Obj)
	{
		((UPZ_SkillTreeRSkillNode*)Obj)->AlwaysCanBeOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPZ_SkillTreeRSkillNode_Statics::NewProp_AlwaysCanBeOpen = { "AlwaysCanBeOpen", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPZ_SkillTreeRSkillNode), &Z_Construct_UClass_UPZ_SkillTreeRSkillNode_Statics::NewProp_AlwaysCanBeOpen_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTreeRSkillNode_Statics::NewProp_AlwaysCanBeOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeRSkillNode_Statics::NewProp_AlwaysCanBeOpen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTreeRSkillNode_Statics::NewProp_IsUIRootNode_MetaData[] = {
		{ "Category", "Skill UI Settings" },
		{ "Comment", "//UPROPERTY(BlueprintReadOnly, Category = \"Skill UI Settings\")\n//\x09""bool IsPlacedInUI = false; // ???? true ???? ??????? ? UIPosition mode, ? ?????????? ?? Struct ????? ?????? ?? ???????????\n" },
		{ "ModuleRelativePath", "Public/Nodes/SkillNode/PZ_SkillTreeRSkillNode.h" },
		{ "ToolTip", "UPROPERTY(BlueprintReadOnly, Category = \"Skill UI Settings\")\n       bool IsPlacedInUI = false;  ???? true ???? ??????? ? UIPosition mode, ? ?????????? ?? Struct ????? ?????? ?? ???????????" },
	};
#endif
	void Z_Construct_UClass_UPZ_SkillTreeRSkillNode_Statics::NewProp_IsUIRootNode_SetBit(void* Obj)
	{
		((UPZ_SkillTreeRSkillNode*)Obj)->IsUIRootNode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPZ_SkillTreeRSkillNode_Statics::NewProp_IsUIRootNode = { "IsUIRootNode", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPZ_SkillTreeRSkillNode), &Z_Construct_UClass_UPZ_SkillTreeRSkillNode_Statics::NewProp_IsUIRootNode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTreeRSkillNode_Statics::NewProp_IsUIRootNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeRSkillNode_Statics::NewProp_IsUIRootNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTreeRSkillNode_Statics::NewProp_ConditionNode_MetaData[] = {
		{ "Category", "PZ_SkillTreeRSkillNode" },
		{ "Comment", "// ???? ???????????? ??????? ???????? ???? ? UIPosition mode\n" },
		{ "ModuleRelativePath", "Public/Nodes/SkillNode/PZ_SkillTreeRSkillNode.h" },
		{ "ToolTip", "???? ???????????? ??????? ???????? ???? ? UIPosition mode" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPZ_SkillTreeRSkillNode_Statics::NewProp_ConditionNode = { "ConditionNode", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPZ_SkillTreeRSkillNode, ConditionNode), Z_Construct_UClass_UPZ_SkillTreeRConditionNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTreeRSkillNode_Statics::NewProp_ConditionNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeRSkillNode_Statics::NewProp_ConditionNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTreeRSkillNode_Statics::NewProp_SkillActionNode_MetaData[] = {
		{ "Category", "PZ_SkillTreeRSkillNode" },
		{ "ModuleRelativePath", "Public/Nodes/SkillNode/PZ_SkillTreeRSkillNode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPZ_SkillTreeRSkillNode_Statics::NewProp_SkillActionNode = { "SkillActionNode", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPZ_SkillTreeRSkillNode, SkillActionNode), Z_Construct_UClass_UPZ_SkillTreeRSkillActionNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTreeRSkillNode_Statics::NewProp_SkillActionNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeRSkillNode_Statics::NewProp_SkillActionNode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPZ_SkillTreeRSkillNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPZ_SkillTreeRSkillNode_Statics::NewProp_AlwaysCanBeOpen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPZ_SkillTreeRSkillNode_Statics::NewProp_IsUIRootNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPZ_SkillTreeRSkillNode_Statics::NewProp_ConditionNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPZ_SkillTreeRSkillNode_Statics::NewProp_SkillActionNode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPZ_SkillTreeRSkillNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPZ_SkillTreeRSkillNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPZ_SkillTreeRSkillNode_Statics::ClassParams = {
		&UPZ_SkillTreeRSkillNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPZ_SkillTreeRSkillNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeRSkillNode_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTreeRSkillNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeRSkillNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPZ_SkillTreeRSkillNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPZ_SkillTreeRSkillNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPZ_SkillTreeRSkillNode, 1536797452);
	template<> PZ_SKILLTREE_API UClass* StaticClass<UPZ_SkillTreeRSkillNode>()
	{
		return UPZ_SkillTreeRSkillNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPZ_SkillTreeRSkillNode(Z_Construct_UClass_UPZ_SkillTreeRSkillNode, &UPZ_SkillTreeRSkillNode::StaticClass, TEXT("/Script/PZ_SkillTree"), TEXT("UPZ_SkillTreeRSkillNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPZ_SkillTreeRSkillNode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
