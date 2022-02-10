// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PZ_SkillTreeEditor/Private/SkillTreeEditor/UIPositionGraph/Graph/PZ_SkillTreeUIPositionEdGraph.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePZ_SkillTreeUIPositionEdGraph() {}
// Cross Module References
	PZ_SKILLTREEEDITOR_API UClass* Z_Construct_UClass_UPZ_SkillTreeUIPositionEdGraph_NoRegister();
	PZ_SKILLTREEEDITOR_API UClass* Z_Construct_UClass_UPZ_SkillTreeUIPositionEdGraph();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph();
	UPackage* Z_Construct_UPackage__Script_PZ_SkillTreeEditor();
// End Cross Module References
	void UPZ_SkillTreeUIPositionEdGraph::StaticRegisterNativesUPZ_SkillTreeUIPositionEdGraph()
	{
	}
	UClass* Z_Construct_UClass_UPZ_SkillTreeUIPositionEdGraph_NoRegister()
	{
		return UPZ_SkillTreeUIPositionEdGraph::StaticClass();
	}
	struct Z_Construct_UClass_UPZ_SkillTreeUIPositionEdGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPZ_SkillTreeUIPositionEdGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_PZ_SkillTreeEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTreeUIPositionEdGraph_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SkillTreeEditor/UIPositionGraph/Graph/PZ_SkillTreeUIPositionEdGraph.h" },
		{ "ModuleRelativePath", "Private/SkillTreeEditor/UIPositionGraph/Graph/PZ_SkillTreeUIPositionEdGraph.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPZ_SkillTreeUIPositionEdGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPZ_SkillTreeUIPositionEdGraph>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPZ_SkillTreeUIPositionEdGraph_Statics::ClassParams = {
		&UPZ_SkillTreeUIPositionEdGraph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTreeUIPositionEdGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeUIPositionEdGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPZ_SkillTreeUIPositionEdGraph()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPZ_SkillTreeUIPositionEdGraph_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPZ_SkillTreeUIPositionEdGraph, 2649235126);
	template<> PZ_SKILLTREEEDITOR_API UClass* StaticClass<UPZ_SkillTreeUIPositionEdGraph>()
	{
		return UPZ_SkillTreeUIPositionEdGraph::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPZ_SkillTreeUIPositionEdGraph(Z_Construct_UClass_UPZ_SkillTreeUIPositionEdGraph, &UPZ_SkillTreeUIPositionEdGraph::StaticClass, TEXT("/Script/PZ_SkillTreeEditor"), TEXT("UPZ_SkillTreeUIPositionEdGraph"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPZ_SkillTreeUIPositionEdGraph);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
