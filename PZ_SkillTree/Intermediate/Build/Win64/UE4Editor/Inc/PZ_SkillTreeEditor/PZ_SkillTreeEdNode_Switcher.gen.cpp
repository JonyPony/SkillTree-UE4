// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PZ_SkillTreeEditor/Private/SkillTreeEditor/StructureGraph/Nodes/SwitcherNode/PZ_SkillTreeEdNode_Switcher.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePZ_SkillTreeEdNode_Switcher() {}
// Cross Module References
	PZ_SKILLTREEEDITOR_API UClass* Z_Construct_UClass_UPZ_SkillTreeEdNode_Switcher_NoRegister();
	PZ_SKILLTREEEDITOR_API UClass* Z_Construct_UClass_UPZ_SkillTreeEdNode_Switcher();
	PZ_SKILLTREEEDITOR_API UClass* Z_Construct_UClass_UPZ_SkillTreeEdNode_Base();
	UPackage* Z_Construct_UPackage__Script_PZ_SkillTreeEditor();
// End Cross Module References
	void UPZ_SkillTreeEdNode_Switcher::StaticRegisterNativesUPZ_SkillTreeEdNode_Switcher()
	{
	}
	UClass* Z_Construct_UClass_UPZ_SkillTreeEdNode_Switcher_NoRegister()
	{
		return UPZ_SkillTreeEdNode_Switcher::StaticClass();
	}
	struct Z_Construct_UClass_UPZ_SkillTreeEdNode_Switcher_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPZ_SkillTreeEdNode_Switcher_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPZ_SkillTreeEdNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_PZ_SkillTreeEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTreeEdNode_Switcher_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SkillTreeEditor/StructureGraph/Nodes/SwitcherNode/PZ_SkillTreeEdNode_Switcher.h" },
		{ "ModuleRelativePath", "Private/SkillTreeEditor/StructureGraph/Nodes/SwitcherNode/PZ_SkillTreeEdNode_Switcher.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPZ_SkillTreeEdNode_Switcher_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPZ_SkillTreeEdNode_Switcher>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPZ_SkillTreeEdNode_Switcher_Statics::ClassParams = {
		&UPZ_SkillTreeEdNode_Switcher::StaticClass,
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
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTreeEdNode_Switcher_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeEdNode_Switcher_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPZ_SkillTreeEdNode_Switcher()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPZ_SkillTreeEdNode_Switcher_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPZ_SkillTreeEdNode_Switcher, 3651292641);
	template<> PZ_SKILLTREEEDITOR_API UClass* StaticClass<UPZ_SkillTreeEdNode_Switcher>()
	{
		return UPZ_SkillTreeEdNode_Switcher::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPZ_SkillTreeEdNode_Switcher(Z_Construct_UClass_UPZ_SkillTreeEdNode_Switcher, &UPZ_SkillTreeEdNode_Switcher::StaticClass, TEXT("/Script/PZ_SkillTreeEditor"), TEXT("UPZ_SkillTreeEdNode_Switcher"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPZ_SkillTreeEdNode_Switcher);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
