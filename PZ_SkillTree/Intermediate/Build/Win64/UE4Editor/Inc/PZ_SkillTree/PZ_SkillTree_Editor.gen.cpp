// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PZ_SkillTree/Public/PZ_SkillTree_Editor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePZ_SkillTree_Editor() {}
// Cross Module References
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTree_Editor_NoRegister();
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTree_Editor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_PZ_SkillTree();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTreeRBaseTreeElement_NoRegister();
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTreeREventNode_NoRegister();
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTreeRConnectionNode_NoRegister();
	PZ_SKILLTREE_API UScriptStruct* Z_Construct_UScriptStruct_FSkillTreeBlackboardEntry();
// End Cross Module References
	void UPZ_SkillTree_Editor::StaticRegisterNativesUPZ_SkillTree_Editor()
	{
	}
	UClass* Z_Construct_UClass_UPZ_SkillTree_Editor_NoRegister()
	{
		return UPZ_SkillTree_Editor::StaticClass();
	}
	struct Z_Construct_UClass_UPZ_SkillTree_Editor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeedToRebuild_MetaData[];
#endif
		static void NewProp_NeedToRebuild_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NeedToRebuild;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StructureEdGraph_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StructureEdGraph;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UIPositionEdGraph_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UIPositionEdGraph;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CompiledNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompiledNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CompiledNodes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CompiledEventNodes_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CompiledEventNodes_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompiledEventNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_CompiledEventNodes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InConnectionNodes_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InConnectionNodes_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InConnectionNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_InConnectionNodes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutConnectionNodes_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OutConnectionNodes_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutConnectionNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_OutConnectionNodes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SkillTreeBlackBoard_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillTreeBlackBoard_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SkillTreeBlackBoard;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPZ_SkillTree_Editor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PZ_SkillTree,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTree_Editor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PZ_SkillTree_Editor.h" },
		{ "ModuleRelativePath", "Public/PZ_SkillTree_Editor.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTree_Editor_Statics::NewProp_NeedToRebuild_MetaData[] = {
		{ "ModuleRelativePath", "Public/PZ_SkillTree_Editor.h" },
	};
#endif
	void Z_Construct_UClass_UPZ_SkillTree_Editor_Statics::NewProp_NeedToRebuild_SetBit(void* Obj)
	{
		((UPZ_SkillTree_Editor*)Obj)->NeedToRebuild = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPZ_SkillTree_Editor_Statics::NewProp_NeedToRebuild = { "NeedToRebuild", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPZ_SkillTree_Editor), &Z_Construct_UClass_UPZ_SkillTree_Editor_Statics::NewProp_NeedToRebuild_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTree_Editor_Statics::NewProp_NeedToRebuild_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTree_Editor_Statics::NewProp_NeedToRebuild_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTree_Editor_Statics::NewProp_StructureEdGraph_MetaData[] = {
		{ "ModuleRelativePath", "Public/PZ_SkillTree_Editor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPZ_SkillTree_Editor_Statics::NewProp_StructureEdGraph = { "StructureEdGraph", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPZ_SkillTree_Editor, StructureEdGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTree_Editor_Statics::NewProp_StructureEdGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTree_Editor_Statics::NewProp_StructureEdGraph_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTree_Editor_Statics::NewProp_UIPositionEdGraph_MetaData[] = {
		{ "Comment", "//????? ?? ????????. ?? ?? ???????? ??????????? ?????????\n" },
		{ "ModuleRelativePath", "Public/PZ_SkillTree_Editor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPZ_SkillTree_Editor_Statics::NewProp_UIPositionEdGraph = { "UIPositionEdGraph", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPZ_SkillTree_Editor, UIPositionEdGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTree_Editor_Statics::NewProp_UIPositionEdGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTree_Editor_Statics::NewProp_UIPositionEdGraph_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPZ_SkillTree_Editor_Statics::NewProp_CompiledNodes_Inner = { "CompiledNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPZ_SkillTreeRBaseTreeElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTree_Editor_Statics::NewProp_CompiledNodes_MetaData[] = {
		{ "Category", "PZ_SkillTree_Editor" },
		{ "Comment", "///////compiled/////////////////////\n" },
		{ "ModuleRelativePath", "Public/PZ_SkillTree_Editor.h" },
		{ "ToolTip", "/compiled" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPZ_SkillTree_Editor_Statics::NewProp_CompiledNodes = { "CompiledNodes", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPZ_SkillTree_Editor, CompiledNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTree_Editor_Statics::NewProp_CompiledNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTree_Editor_Statics::NewProp_CompiledNodes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPZ_SkillTree_Editor_Statics::NewProp_CompiledEventNodes_ValueProp = { "CompiledEventNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UPZ_SkillTreeREventNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPZ_SkillTree_Editor_Statics::NewProp_CompiledEventNodes_Key_KeyProp = { "CompiledEventNodes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTree_Editor_Statics::NewProp_CompiledEventNodes_MetaData[] = {
		{ "Category", "PZ_SkillTree_Editor" },
		{ "ModuleRelativePath", "Public/PZ_SkillTree_Editor.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPZ_SkillTree_Editor_Statics::NewProp_CompiledEventNodes = { "CompiledEventNodes", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPZ_SkillTree_Editor, CompiledEventNodes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTree_Editor_Statics::NewProp_CompiledEventNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTree_Editor_Statics::NewProp_CompiledEventNodes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPZ_SkillTree_Editor_Statics::NewProp_InConnectionNodes_ValueProp = { "InConnectionNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UPZ_SkillTreeRConnectionNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPZ_SkillTree_Editor_Statics::NewProp_InConnectionNodes_Key_KeyProp = { "InConnectionNodes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTree_Editor_Statics::NewProp_InConnectionNodes_MetaData[] = {
		{ "Category", "PZ_SkillTree_Editor" },
		{ "ModuleRelativePath", "Public/PZ_SkillTree_Editor.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPZ_SkillTree_Editor_Statics::NewProp_InConnectionNodes = { "InConnectionNodes", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPZ_SkillTree_Editor, InConnectionNodes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTree_Editor_Statics::NewProp_InConnectionNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTree_Editor_Statics::NewProp_InConnectionNodes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPZ_SkillTree_Editor_Statics::NewProp_OutConnectionNodes_ValueProp = { "OutConnectionNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UPZ_SkillTreeRConnectionNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPZ_SkillTree_Editor_Statics::NewProp_OutConnectionNodes_Key_KeyProp = { "OutConnectionNodes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTree_Editor_Statics::NewProp_OutConnectionNodes_MetaData[] = {
		{ "Category", "PZ_SkillTree_Editor" },
		{ "ModuleRelativePath", "Public/PZ_SkillTree_Editor.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPZ_SkillTree_Editor_Statics::NewProp_OutConnectionNodes = { "OutConnectionNodes", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPZ_SkillTree_Editor, OutConnectionNodes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTree_Editor_Statics::NewProp_OutConnectionNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTree_Editor_Statics::NewProp_OutConnectionNodes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPZ_SkillTree_Editor_Statics::NewProp_SkillTreeBlackBoard_Inner = { "SkillTreeBlackBoard", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSkillTreeBlackboardEntry, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTree_Editor_Statics::NewProp_SkillTreeBlackBoard_MetaData[] = {
		{ "Category", "PZ_SkillTree_Editor" },
		{ "ModuleRelativePath", "Public/PZ_SkillTree_Editor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPZ_SkillTree_Editor_Statics::NewProp_SkillTreeBlackBoard = { "SkillTreeBlackBoard", nullptr, (EPropertyFlags)0x0010008000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPZ_SkillTree_Editor, SkillTreeBlackBoard), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTree_Editor_Statics::NewProp_SkillTreeBlackBoard_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTree_Editor_Statics::NewProp_SkillTreeBlackBoard_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPZ_SkillTree_Editor_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPZ_SkillTree_Editor_Statics::NewProp_NeedToRebuild,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPZ_SkillTree_Editor_Statics::NewProp_StructureEdGraph,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPZ_SkillTree_Editor_Statics::NewProp_UIPositionEdGraph,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPZ_SkillTree_Editor_Statics::NewProp_CompiledNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPZ_SkillTree_Editor_Statics::NewProp_CompiledNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPZ_SkillTree_Editor_Statics::NewProp_CompiledEventNodes_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPZ_SkillTree_Editor_Statics::NewProp_CompiledEventNodes_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPZ_SkillTree_Editor_Statics::NewProp_CompiledEventNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPZ_SkillTree_Editor_Statics::NewProp_InConnectionNodes_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPZ_SkillTree_Editor_Statics::NewProp_InConnectionNodes_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPZ_SkillTree_Editor_Statics::NewProp_InConnectionNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPZ_SkillTree_Editor_Statics::NewProp_OutConnectionNodes_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPZ_SkillTree_Editor_Statics::NewProp_OutConnectionNodes_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPZ_SkillTree_Editor_Statics::NewProp_OutConnectionNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPZ_SkillTree_Editor_Statics::NewProp_SkillTreeBlackBoard_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPZ_SkillTree_Editor_Statics::NewProp_SkillTreeBlackBoard,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPZ_SkillTree_Editor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPZ_SkillTree_Editor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPZ_SkillTree_Editor_Statics::ClassParams = {
		&UPZ_SkillTree_Editor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPZ_SkillTree_Editor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTree_Editor_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTree_Editor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTree_Editor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPZ_SkillTree_Editor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPZ_SkillTree_Editor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPZ_SkillTree_Editor, 2011953187);
	template<> PZ_SKILLTREE_API UClass* StaticClass<UPZ_SkillTree_Editor>()
	{
		return UPZ_SkillTree_Editor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPZ_SkillTree_Editor(Z_Construct_UClass_UPZ_SkillTree_Editor, &UPZ_SkillTree_Editor::StaticClass, TEXT("/Script/PZ_SkillTree"), TEXT("UPZ_SkillTree_Editor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPZ_SkillTree_Editor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
