// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PZ_SkillTree/Public/Nodes/BaseNode/PZ_SkillTreeRBaseNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePZ_SkillTreeRBaseNode() {}
// Cross Module References
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTreeRBaseNode_NoRegister();
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTreeRBaseNode();
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTreeRBaseTreeElement();
	UPackage* Z_Construct_UPackage__Script_PZ_SkillTree();
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTreeRUINode_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	void UPZ_SkillTreeRBaseNode::StaticRegisterNativesUPZ_SkillTreeRBaseNode()
	{
	}
	UClass* Z_Construct_UClass_UPZ_SkillTreeRBaseNode_NoRegister()
	{
		return UPZ_SkillTreeRBaseNode::StaticClass();
	}
	struct Z_Construct_UClass_UPZ_SkillTreeRBaseNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UINode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UINode;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoUseCustomColor_MetaData[];
#endif
		static void NewProp_DoUseCustomColor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DoUseCustomColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CustomName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TempUIPositionOnCompile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TempUIPositionOnCompile;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPZ_SkillTreeRBaseNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPZ_SkillTreeRBaseTreeElement,
		(UObject* (*)())Z_Construct_UPackage__Script_PZ_SkillTree,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTreeRBaseNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Nodes/BaseNode/PZ_SkillTreeRBaseNode.h" },
		{ "ModuleRelativePath", "Public/Nodes/BaseNode/PZ_SkillTreeRBaseNode.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTreeRBaseNode_Statics::NewProp_UINode_MetaData[] = {
		{ "Category", "PZ_SkillTreeRBaseNode" },
		{ "ModuleRelativePath", "Public/Nodes/BaseNode/PZ_SkillTreeRBaseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPZ_SkillTreeRBaseNode_Statics::NewProp_UINode = { "UINode", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPZ_SkillTreeRBaseNode, UINode), Z_Construct_UClass_UPZ_SkillTreeRUINode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTreeRBaseNode_Statics::NewProp_UINode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeRBaseNode_Statics::NewProp_UINode_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTreeRBaseNode_Statics::NewProp_DoUseCustomColor_MetaData[] = {
		{ "Category", "PZ_SkillTreeRBaseNode" },
		{ "ModuleRelativePath", "Public/Nodes/BaseNode/PZ_SkillTreeRBaseNode.h" },
	};
#endif
	void Z_Construct_UClass_UPZ_SkillTreeRBaseNode_Statics::NewProp_DoUseCustomColor_SetBit(void* Obj)
	{
		((UPZ_SkillTreeRBaseNode*)Obj)->DoUseCustomColor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPZ_SkillTreeRBaseNode_Statics::NewProp_DoUseCustomColor = { "DoUseCustomColor", nullptr, (EPropertyFlags)0x0010000800000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPZ_SkillTreeRBaseNode), &Z_Construct_UClass_UPZ_SkillTreeRBaseNode_Statics::NewProp_DoUseCustomColor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTreeRBaseNode_Statics::NewProp_DoUseCustomColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeRBaseNode_Statics::NewProp_DoUseCustomColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTreeRBaseNode_Statics::NewProp_CustomColor_MetaData[] = {
		{ "Category", "PZ_SkillTreeRBaseNode" },
		{ "ModuleRelativePath", "Public/Nodes/BaseNode/PZ_SkillTreeRBaseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPZ_SkillTreeRBaseNode_Statics::NewProp_CustomColor = { "CustomColor", nullptr, (EPropertyFlags)0x0010000800000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPZ_SkillTreeRBaseNode, CustomColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTreeRBaseNode_Statics::NewProp_CustomColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeRBaseNode_Statics::NewProp_CustomColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTreeRBaseNode_Statics::NewProp_CustomName_MetaData[] = {
		{ "Category", "PZ_SkillTreeRBaseNode" },
		{ "ModuleRelativePath", "Public/Nodes/BaseNode/PZ_SkillTreeRBaseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPZ_SkillTreeRBaseNode_Statics::NewProp_CustomName = { "CustomName", nullptr, (EPropertyFlags)0x0010000800000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPZ_SkillTreeRBaseNode, CustomName), METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTreeRBaseNode_Statics::NewProp_CustomName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeRBaseNode_Statics::NewProp_CustomName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTreeRBaseNode_Statics::NewProp_TempUIPositionOnCompile_MetaData[] = {
		{ "Category", "Skill UI Settings" },
		{ "ModuleRelativePath", "Public/Nodes/BaseNode/PZ_SkillTreeRBaseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPZ_SkillTreeRBaseNode_Statics::NewProp_TempUIPositionOnCompile = { "TempUIPositionOnCompile", nullptr, (EPropertyFlags)0x0010000800020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPZ_SkillTreeRBaseNode, TempUIPositionOnCompile), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTreeRBaseNode_Statics::NewProp_TempUIPositionOnCompile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeRBaseNode_Statics::NewProp_TempUIPositionOnCompile_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPZ_SkillTreeRBaseNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPZ_SkillTreeRBaseNode_Statics::NewProp_UINode,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPZ_SkillTreeRBaseNode_Statics::NewProp_DoUseCustomColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPZ_SkillTreeRBaseNode_Statics::NewProp_CustomColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPZ_SkillTreeRBaseNode_Statics::NewProp_CustomName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPZ_SkillTreeRBaseNode_Statics::NewProp_TempUIPositionOnCompile,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPZ_SkillTreeRBaseNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPZ_SkillTreeRBaseNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPZ_SkillTreeRBaseNode_Statics::ClassParams = {
		&UPZ_SkillTreeRBaseNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPZ_SkillTreeRBaseNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeRBaseNode_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTreeRBaseNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeRBaseNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPZ_SkillTreeRBaseNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPZ_SkillTreeRBaseNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPZ_SkillTreeRBaseNode, 3413040245);
	template<> PZ_SKILLTREE_API UClass* StaticClass<UPZ_SkillTreeRBaseNode>()
	{
		return UPZ_SkillTreeRBaseNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPZ_SkillTreeRBaseNode(Z_Construct_UClass_UPZ_SkillTreeRBaseNode, &UPZ_SkillTreeRBaseNode::StaticClass, TEXT("/Script/PZ_SkillTree"), TEXT("UPZ_SkillTreeRBaseNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPZ_SkillTreeRBaseNode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
