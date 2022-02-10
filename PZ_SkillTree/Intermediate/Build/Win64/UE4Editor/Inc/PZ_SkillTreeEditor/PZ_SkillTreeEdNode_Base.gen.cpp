// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PZ_SkillTreeEditor/Private/SkillTreeEditor/StructureGraph/Nodes/BaseNode/PZ_SkillTreeEdNode_Base.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePZ_SkillTreeEdNode_Base() {}
// Cross Module References
	PZ_SKILLTREEEDITOR_API UClass* Z_Construct_UClass_UPZ_SkillTreeEdNode_Base_NoRegister();
	PZ_SKILLTREEEDITOR_API UClass* Z_Construct_UClass_UPZ_SkillTreeEdNode_Base();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
	UPackage* Z_Construct_UPackage__Script_PZ_SkillTreeEditor();
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTreeRBaseNode_NoRegister();
	PZ_SKILLTREEEDITOR_API UClass* Z_Construct_UClass_UPZ_SkillTreeNodeInterface_NoRegister();
// End Cross Module References
	void UPZ_SkillTreeEdNode_Base::StaticRegisterNativesUPZ_SkillTreeEdNode_Base()
	{
	}
	UClass* Z_Construct_UClass_UPZ_SkillTreeEdNode_Base_NoRegister()
	{
		return UPZ_SkillTreeEdNode_Base::StaticClass();
	}
	struct Z_Construct_UClass_UPZ_SkillTreeEdNode_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentNode;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SubNodes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CopySubNodeIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CopySubNodeIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RNode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPZ_SkillTreeEdNode_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_PZ_SkillTreeEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTreeEdNode_Base_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SkillTreeEditor/StructureGraph/Nodes/BaseNode/PZ_SkillTreeEdNode_Base.h" },
		{ "ModuleRelativePath", "Private/SkillTreeEditor/StructureGraph/Nodes/BaseNode/PZ_SkillTreeEdNode_Base.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTreeEdNode_Base_Statics::NewProp_ParentNode_MetaData[] = {
		{ "ModuleRelativePath", "Private/SkillTreeEditor/StructureGraph/Nodes/BaseNode/PZ_SkillTreeEdNode_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPZ_SkillTreeEdNode_Base_Statics::NewProp_ParentNode = { "ParentNode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPZ_SkillTreeEdNode_Base, ParentNode), Z_Construct_UClass_UPZ_SkillTreeEdNode_Base_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTreeEdNode_Base_Statics::NewProp_ParentNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeEdNode_Base_Statics::NewProp_ParentNode_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPZ_SkillTreeEdNode_Base_Statics::NewProp_SubNodes_Inner = { "SubNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPZ_SkillTreeEdNode_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTreeEdNode_Base_Statics::NewProp_SubNodes_MetaData[] = {
		{ "ModuleRelativePath", "Private/SkillTreeEditor/StructureGraph/Nodes/BaseNode/PZ_SkillTreeEdNode_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPZ_SkillTreeEdNode_Base_Statics::NewProp_SubNodes = { "SubNodes", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPZ_SkillTreeEdNode_Base, SubNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTreeEdNode_Base_Statics::NewProp_SubNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeEdNode_Base_Statics::NewProp_SubNodes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTreeEdNode_Base_Statics::NewProp_CopySubNodeIndex_MetaData[] = {
		{ "ModuleRelativePath", "Private/SkillTreeEditor/StructureGraph/Nodes/BaseNode/PZ_SkillTreeEdNode_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPZ_SkillTreeEdNode_Base_Statics::NewProp_CopySubNodeIndex = { "CopySubNodeIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPZ_SkillTreeEdNode_Base, CopySubNodeIndex), METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTreeEdNode_Base_Statics::NewProp_CopySubNodeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeEdNode_Base_Statics::NewProp_CopySubNodeIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTreeEdNode_Base_Statics::NewProp_RNode_MetaData[] = {
		{ "Category", "PZ_SkillTreeEdNode_Base" },
		{ "Comment", "/*\n\x09????? ???????? ????????????? ????????? ????. ????? ???? ??????????????? ?? ????? CompileThisNodeInfo\n\x09????????? ?????? ????????? ? EdGraphSchema ??? ???????? ????\n\x09????????? ????? ??? ????????? ???????? ???? ? RNode, ?? ?????????? ????? ??????????\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/SkillTreeEditor/StructureGraph/Nodes/BaseNode/PZ_SkillTreeEdNode_Base.h" },
		{ "ToolTip", "????? ???????? ????????????? ????????? ????. ????? ???? ??????????????? ?? ????? CompileThisNodeInfo\n????????? ?????? ????????? ? EdGraphSchema ??? ???????? ????\n????????? ????? ??? ????????? ???????? ???? ? RNode, ?? ?????????? ????? ??????????" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPZ_SkillTreeEdNode_Base_Statics::NewProp_RNode = { "RNode", nullptr, (EPropertyFlags)0x00120000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPZ_SkillTreeEdNode_Base, RNode), Z_Construct_UClass_UPZ_SkillTreeRBaseNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTreeEdNode_Base_Statics::NewProp_RNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeEdNode_Base_Statics::NewProp_RNode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPZ_SkillTreeEdNode_Base_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPZ_SkillTreeEdNode_Base_Statics::NewProp_ParentNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPZ_SkillTreeEdNode_Base_Statics::NewProp_SubNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPZ_SkillTreeEdNode_Base_Statics::NewProp_SubNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPZ_SkillTreeEdNode_Base_Statics::NewProp_CopySubNodeIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPZ_SkillTreeEdNode_Base_Statics::NewProp_RNode,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UPZ_SkillTreeEdNode_Base_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPZ_SkillTreeNodeInterface_NoRegister, (int32)VTABLE_OFFSET(UPZ_SkillTreeEdNode_Base, IPZ_SkillTreeNodeInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPZ_SkillTreeEdNode_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPZ_SkillTreeEdNode_Base>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPZ_SkillTreeEdNode_Base_Statics::ClassParams = {
		&UPZ_SkillTreeEdNode_Base::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPZ_SkillTreeEdNode_Base_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeEdNode_Base_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTreeEdNode_Base_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeEdNode_Base_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPZ_SkillTreeEdNode_Base()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPZ_SkillTreeEdNode_Base_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPZ_SkillTreeEdNode_Base, 670163766);
	template<> PZ_SKILLTREEEDITOR_API UClass* StaticClass<UPZ_SkillTreeEdNode_Base>()
	{
		return UPZ_SkillTreeEdNode_Base::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPZ_SkillTreeEdNode_Base(Z_Construct_UClass_UPZ_SkillTreeEdNode_Base, &UPZ_SkillTreeEdNode_Base::StaticClass, TEXT("/Script/PZ_SkillTreeEditor"), TEXT("UPZ_SkillTreeEdNode_Base"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPZ_SkillTreeEdNode_Base);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
