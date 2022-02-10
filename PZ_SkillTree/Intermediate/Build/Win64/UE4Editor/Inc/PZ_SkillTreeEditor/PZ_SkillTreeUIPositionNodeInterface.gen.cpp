// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PZ_SkillTreeEditor/Private/SkillTreeEditor/UIPositionGraph/Nodes/PZ_SkillTreeUIPositionNodeInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePZ_SkillTreeUIPositionNodeInterface() {}
// Cross Module References
	PZ_SKILLTREEEDITOR_API UClass* Z_Construct_UClass_UPZ_SkillTreeUIPositionNodeInterface_NoRegister();
	PZ_SKILLTREEEDITOR_API UClass* Z_Construct_UClass_UPZ_SkillTreeUIPositionNodeInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_PZ_SkillTreeEditor();
// End Cross Module References
	void UPZ_SkillTreeUIPositionNodeInterface::StaticRegisterNativesUPZ_SkillTreeUIPositionNodeInterface()
	{
	}
	UClass* Z_Construct_UClass_UPZ_SkillTreeUIPositionNodeInterface_NoRegister()
	{
		return UPZ_SkillTreeUIPositionNodeInterface::StaticClass();
	}
	struct Z_Construct_UClass_UPZ_SkillTreeUIPositionNodeInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPZ_SkillTreeUIPositionNodeInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_PZ_SkillTreeEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTreeUIPositionNodeInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/SkillTreeEditor/UIPositionGraph/Nodes/PZ_SkillTreeUIPositionNodeInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPZ_SkillTreeUIPositionNodeInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPZ_SkillTreeUIPositionNodeInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPZ_SkillTreeUIPositionNodeInterface_Statics::ClassParams = {
		&UPZ_SkillTreeUIPositionNodeInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTreeUIPositionNodeInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeUIPositionNodeInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPZ_SkillTreeUIPositionNodeInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPZ_SkillTreeUIPositionNodeInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPZ_SkillTreeUIPositionNodeInterface, 651841942);
	template<> PZ_SKILLTREEEDITOR_API UClass* StaticClass<UPZ_SkillTreeUIPositionNodeInterface>()
	{
		return UPZ_SkillTreeUIPositionNodeInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPZ_SkillTreeUIPositionNodeInterface(Z_Construct_UClass_UPZ_SkillTreeUIPositionNodeInterface, &UPZ_SkillTreeUIPositionNodeInterface::StaticClass, TEXT("/Script/PZ_SkillTreeEditor"), TEXT("UPZ_SkillTreeUIPositionNodeInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPZ_SkillTreeUIPositionNodeInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
