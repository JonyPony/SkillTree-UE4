// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PZ_SkillTree/Public/Nodes/BaseTreeElement/PZ_SkillTreeRBaseTreeElement.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePZ_SkillTreeRBaseTreeElement() {}
// Cross Module References
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTreeRBaseTreeElement_NoRegister();
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTreeRBaseTreeElement();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_PZ_SkillTree();
	PZ_SKILLTREE_API UEnum* Z_Construct_UEnum_PZ_SkillTree_ESkillTreeNodeType();
// End Cross Module References
	void UPZ_SkillTreeRBaseTreeElement::StaticRegisterNativesUPZ_SkillTreeRBaseTreeElement()
	{
	}
	UClass* Z_Construct_UClass_UPZ_SkillTreeRBaseTreeElement_NoRegister()
	{
		return UPZ_SkillTreeRBaseTreeElement::StaticClass();
	}
	struct Z_Construct_UClass_UPZ_SkillTreeRBaseTreeElement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsRootNode_MetaData[];
#endif
		static void NewProp_IsRootNode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsRootNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MyIndex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NodeType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NodeType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NextNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NextNodes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ParentNodes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPZ_SkillTreeRBaseTreeElement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PZ_SkillTree,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTreeRBaseTreeElement_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Nodes/BaseTreeElement/PZ_SkillTreeRBaseTreeElement.h" },
		{ "ModuleRelativePath", "Public/Nodes/BaseTreeElement/PZ_SkillTreeRBaseTreeElement.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTreeRBaseTreeElement_Statics::NewProp_IsRootNode_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Nodes/BaseTreeElement/PZ_SkillTreeRBaseTreeElement.h" },
	};
#endif
	void Z_Construct_UClass_UPZ_SkillTreeRBaseTreeElement_Statics::NewProp_IsRootNode_SetBit(void* Obj)
	{
		((UPZ_SkillTreeRBaseTreeElement*)Obj)->IsRootNode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPZ_SkillTreeRBaseTreeElement_Statics::NewProp_IsRootNode = { "IsRootNode", nullptr, (EPropertyFlags)0x0010000000030015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPZ_SkillTreeRBaseTreeElement), &Z_Construct_UClass_UPZ_SkillTreeRBaseTreeElement_Statics::NewProp_IsRootNode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTreeRBaseTreeElement_Statics::NewProp_IsRootNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeRBaseTreeElement_Statics::NewProp_IsRootNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTreeRBaseTreeElement_Statics::NewProp_MyIndex_MetaData[] = {
		{ "Category", "PZ_SkillTreeRBaseTreeElement" },
		{ "Comment", "//UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Instanced, Category = \"Settings\")\n//\x09UWidget IsNeedCompile = false;\n" },
		{ "ModuleRelativePath", "Public/Nodes/BaseTreeElement/PZ_SkillTreeRBaseTreeElement.h" },
		{ "ToolTip", "UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Instanced, Category = \"Settings\")\n       UWidget IsNeedCompile = false;" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPZ_SkillTreeRBaseTreeElement_Statics::NewProp_MyIndex = { "MyIndex", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPZ_SkillTreeRBaseTreeElement, MyIndex), METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTreeRBaseTreeElement_Statics::NewProp_MyIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeRBaseTreeElement_Statics::NewProp_MyIndex_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPZ_SkillTreeRBaseTreeElement_Statics::NewProp_NodeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTreeRBaseTreeElement_Statics::NewProp_NodeType_MetaData[] = {
		{ "Category", "PZ_SkillTreeRBaseTreeElement" },
		{ "ModuleRelativePath", "Public/Nodes/BaseTreeElement/PZ_SkillTreeRBaseTreeElement.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPZ_SkillTreeRBaseTreeElement_Statics::NewProp_NodeType = { "NodeType", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPZ_SkillTreeRBaseTreeElement, NodeType), Z_Construct_UEnum_PZ_SkillTree_ESkillTreeNodeType, METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTreeRBaseTreeElement_Statics::NewProp_NodeType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeRBaseTreeElement_Statics::NewProp_NodeType_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPZ_SkillTreeRBaseTreeElement_Statics::NewProp_NextNodes_Inner = { "NextNodes", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPZ_SkillTreeRBaseTreeElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTreeRBaseTreeElement_Statics::NewProp_NextNodes_MetaData[] = {
		{ "Category", "PZ_SkillTreeRBaseTreeElement" },
		{ "ModuleRelativePath", "Public/Nodes/BaseTreeElement/PZ_SkillTreeRBaseTreeElement.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPZ_SkillTreeRBaseTreeElement_Statics::NewProp_NextNodes = { "NextNodes", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPZ_SkillTreeRBaseTreeElement, NextNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTreeRBaseTreeElement_Statics::NewProp_NextNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeRBaseTreeElement_Statics::NewProp_NextNodes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPZ_SkillTreeRBaseTreeElement_Statics::NewProp_ParentNodes_Inner = { "ParentNodes", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPZ_SkillTreeRBaseTreeElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTreeRBaseTreeElement_Statics::NewProp_ParentNodes_MetaData[] = {
		{ "Category", "PZ_SkillTreeRBaseTreeElement" },
		{ "Comment", "//??????????????? ?? ????? ???????? ?? ????? ??????????\n" },
		{ "ModuleRelativePath", "Public/Nodes/BaseTreeElement/PZ_SkillTreeRBaseTreeElement.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPZ_SkillTreeRBaseTreeElement_Statics::NewProp_ParentNodes = { "ParentNodes", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPZ_SkillTreeRBaseTreeElement, ParentNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTreeRBaseTreeElement_Statics::NewProp_ParentNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeRBaseTreeElement_Statics::NewProp_ParentNodes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPZ_SkillTreeRBaseTreeElement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPZ_SkillTreeRBaseTreeElement_Statics::NewProp_IsRootNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPZ_SkillTreeRBaseTreeElement_Statics::NewProp_MyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPZ_SkillTreeRBaseTreeElement_Statics::NewProp_NodeType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPZ_SkillTreeRBaseTreeElement_Statics::NewProp_NodeType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPZ_SkillTreeRBaseTreeElement_Statics::NewProp_NextNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPZ_SkillTreeRBaseTreeElement_Statics::NewProp_NextNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPZ_SkillTreeRBaseTreeElement_Statics::NewProp_ParentNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPZ_SkillTreeRBaseTreeElement_Statics::NewProp_ParentNodes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPZ_SkillTreeRBaseTreeElement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPZ_SkillTreeRBaseTreeElement>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPZ_SkillTreeRBaseTreeElement_Statics::ClassParams = {
		&UPZ_SkillTreeRBaseTreeElement::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPZ_SkillTreeRBaseTreeElement_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeRBaseTreeElement_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTreeRBaseTreeElement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeRBaseTreeElement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPZ_SkillTreeRBaseTreeElement()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPZ_SkillTreeRBaseTreeElement_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPZ_SkillTreeRBaseTreeElement, 3209404741);
	template<> PZ_SKILLTREE_API UClass* StaticClass<UPZ_SkillTreeRBaseTreeElement>()
	{
		return UPZ_SkillTreeRBaseTreeElement::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPZ_SkillTreeRBaseTreeElement(Z_Construct_UClass_UPZ_SkillTreeRBaseTreeElement, &UPZ_SkillTreeRBaseTreeElement::StaticClass, TEXT("/Script/PZ_SkillTree"), TEXT("UPZ_SkillTreeRBaseTreeElement"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPZ_SkillTreeRBaseTreeElement);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
