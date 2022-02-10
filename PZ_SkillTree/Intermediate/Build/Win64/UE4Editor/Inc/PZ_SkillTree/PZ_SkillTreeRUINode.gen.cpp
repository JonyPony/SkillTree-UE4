// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PZ_SkillTree/Public/Nodes/UINode/PZ_SkillTreeRUINode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePZ_SkillTreeRUINode() {}
// Cross Module References
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTreeRUINode_NoRegister();
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTreeRUINode();
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTreeRBaseTreeElement();
	UPackage* Z_Construct_UPackage__Script_PZ_SkillTree();
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTreeObjectCreator_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTreeRBaseNode_NoRegister();
// End Cross Module References
	void UPZ_SkillTreeRUINode::StaticRegisterNativesUPZ_SkillTreeRUINode()
	{
	}
	UClass* Z_Construct_UClass_UPZ_SkillTreeRUINode_NoRegister()
	{
		return UPZ_SkillTreeRUINode::StaticClass();
	}
	struct Z_Construct_UClass_UPZ_SkillTreeRUINode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectCreator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectCreator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UIPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UIPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsPlacedInUI_MetaData[];
#endif
		static void NewProp_IsPlacedInUI_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsPlacedInUI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsUIRootNode_MetaData[];
#endif
		static void NewProp_IsUIRootNode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsUIRootNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RNodeLink_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RNodeLink;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPZ_SkillTreeRUINode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPZ_SkillTreeRBaseTreeElement,
		(UObject* (*)())Z_Construct_UPackage__Script_PZ_SkillTree,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTreeRUINode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Nodes/UINode/PZ_SkillTreeRUINode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Nodes/UINode/PZ_SkillTreeRUINode.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTreeRUINode_Statics::NewProp_ObjectCreator_MetaData[] = {
		{ "Category", "UI Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Nodes/UINode/PZ_SkillTreeRUINode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPZ_SkillTreeRUINode_Statics::NewProp_ObjectCreator = { "ObjectCreator", nullptr, (EPropertyFlags)0x001200000009001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPZ_SkillTreeRUINode, ObjectCreator), Z_Construct_UClass_UPZ_SkillTreeObjectCreator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTreeRUINode_Statics::NewProp_ObjectCreator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeRUINode_Statics::NewProp_ObjectCreator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTreeRUINode_Statics::NewProp_UIPosition_MetaData[] = {
		{ "Category", "UI Settings" },
		{ "ModuleRelativePath", "Public/Nodes/UINode/PZ_SkillTreeRUINode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPZ_SkillTreeRUINode_Statics::NewProp_UIPosition = { "UIPosition", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPZ_SkillTreeRUINode, UIPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTreeRUINode_Statics::NewProp_UIPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeRUINode_Statics::NewProp_UIPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTreeRUINode_Statics::NewProp_IsPlacedInUI_MetaData[] = {
		{ "Category", "UI Settings" },
		{ "ModuleRelativePath", "Public/Nodes/UINode/PZ_SkillTreeRUINode.h" },
	};
#endif
	void Z_Construct_UClass_UPZ_SkillTreeRUINode_Statics::NewProp_IsPlacedInUI_SetBit(void* Obj)
	{
		((UPZ_SkillTreeRUINode*)Obj)->IsPlacedInUI = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPZ_SkillTreeRUINode_Statics::NewProp_IsPlacedInUI = { "IsPlacedInUI", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPZ_SkillTreeRUINode), &Z_Construct_UClass_UPZ_SkillTreeRUINode_Statics::NewProp_IsPlacedInUI_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTreeRUINode_Statics::NewProp_IsPlacedInUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeRUINode_Statics::NewProp_IsPlacedInUI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTreeRUINode_Statics::NewProp_IsUIRootNode_MetaData[] = {
		{ "Category", "UI Settings" },
		{ "Comment", "// ???? true ???? ??????? ? UIPosition mode, ? ?????????? ?? Struct ????? ?????? ?? ???????????\n" },
		{ "ModuleRelativePath", "Public/Nodes/UINode/PZ_SkillTreeRUINode.h" },
		{ "ToolTip", "???? true ???? ??????? ? UIPosition mode, ? ?????????? ?? Struct ????? ?????? ?? ???????????" },
	};
#endif
	void Z_Construct_UClass_UPZ_SkillTreeRUINode_Statics::NewProp_IsUIRootNode_SetBit(void* Obj)
	{
		((UPZ_SkillTreeRUINode*)Obj)->IsUIRootNode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPZ_SkillTreeRUINode_Statics::NewProp_IsUIRootNode = { "IsUIRootNode", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPZ_SkillTreeRUINode), &Z_Construct_UClass_UPZ_SkillTreeRUINode_Statics::NewProp_IsUIRootNode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTreeRUINode_Statics::NewProp_IsUIRootNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeRUINode_Statics::NewProp_IsUIRootNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTreeRUINode_Statics::NewProp_RNodeLink_MetaData[] = {
		{ "Category", "PZ_SkillTreeRUINode" },
		{ "Comment", "// ???? ???????????? ??????? ???????? ???? ? UIPosition mode\n" },
		{ "ModuleRelativePath", "Public/Nodes/UINode/PZ_SkillTreeRUINode.h" },
		{ "ToolTip", "???? ???????????? ??????? ???????? ???? ? UIPosition mode" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPZ_SkillTreeRUINode_Statics::NewProp_RNodeLink = { "RNodeLink", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPZ_SkillTreeRUINode, RNodeLink), Z_Construct_UClass_UPZ_SkillTreeRBaseNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTreeRUINode_Statics::NewProp_RNodeLink_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeRUINode_Statics::NewProp_RNodeLink_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPZ_SkillTreeRUINode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPZ_SkillTreeRUINode_Statics::NewProp_ObjectCreator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPZ_SkillTreeRUINode_Statics::NewProp_UIPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPZ_SkillTreeRUINode_Statics::NewProp_IsPlacedInUI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPZ_SkillTreeRUINode_Statics::NewProp_IsUIRootNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPZ_SkillTreeRUINode_Statics::NewProp_RNodeLink,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPZ_SkillTreeRUINode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPZ_SkillTreeRUINode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPZ_SkillTreeRUINode_Statics::ClassParams = {
		&UPZ_SkillTreeRUINode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPZ_SkillTreeRUINode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeRUINode_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTreeRUINode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeRUINode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPZ_SkillTreeRUINode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPZ_SkillTreeRUINode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPZ_SkillTreeRUINode, 2298017040);
	template<> PZ_SKILLTREE_API UClass* StaticClass<UPZ_SkillTreeRUINode>()
	{
		return UPZ_SkillTreeRUINode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPZ_SkillTreeRUINode(Z_Construct_UClass_UPZ_SkillTreeRUINode, &UPZ_SkillTreeRUINode::StaticClass, TEXT("/Script/PZ_SkillTree"), TEXT("UPZ_SkillTreeRUINode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPZ_SkillTreeRUINode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
