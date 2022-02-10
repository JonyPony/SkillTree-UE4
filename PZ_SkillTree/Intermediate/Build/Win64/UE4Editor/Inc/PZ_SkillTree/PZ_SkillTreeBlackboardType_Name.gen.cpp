// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PZ_SkillTree/Public/SkillTreeBlackBoard/BlackBoardType/PZ_SkillTreeBlackboardType_Name.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePZ_SkillTreeBlackboardType_Name() {}
// Cross Module References
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTreeBlackboardType_Name_NoRegister();
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTreeBlackboardType_Name();
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTreeBlackboardKeyType();
	UPackage* Z_Construct_UPackage__Script_PZ_SkillTree();
// End Cross Module References
	void UPZ_SkillTreeBlackboardType_Name::StaticRegisterNativesUPZ_SkillTreeBlackboardType_Name()
	{
	}
	UClass* Z_Construct_UClass_UPZ_SkillTreeBlackboardType_Name_NoRegister()
	{
		return UPZ_SkillTreeBlackboardType_Name::StaticClass();
	}
	struct Z_Construct_UClass_UPZ_SkillTreeBlackboardType_Name_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPZ_SkillTreeBlackboardType_Name_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPZ_SkillTreeBlackboardKeyType,
		(UObject* (*)())Z_Construct_UPackage__Script_PZ_SkillTree,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTreeBlackboardType_Name_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Name" },
		{ "IncludePath", "SkillTreeBlackBoard/BlackBoardType/PZ_SkillTreeBlackboardType_Name.h" },
		{ "ModuleRelativePath", "Public/SkillTreeBlackBoard/BlackBoardType/PZ_SkillTreeBlackboardType_Name.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPZ_SkillTreeBlackboardType_Name_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPZ_SkillTreeBlackboardType_Name>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPZ_SkillTreeBlackboardType_Name_Statics::ClassParams = {
		&UPZ_SkillTreeBlackboardType_Name::StaticClass,
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
		0x001030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTreeBlackboardType_Name_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeBlackboardType_Name_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPZ_SkillTreeBlackboardType_Name()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPZ_SkillTreeBlackboardType_Name_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPZ_SkillTreeBlackboardType_Name, 2565316966);
	template<> PZ_SKILLTREE_API UClass* StaticClass<UPZ_SkillTreeBlackboardType_Name>()
	{
		return UPZ_SkillTreeBlackboardType_Name::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPZ_SkillTreeBlackboardType_Name(Z_Construct_UClass_UPZ_SkillTreeBlackboardType_Name, &UPZ_SkillTreeBlackboardType_Name::StaticClass, TEXT("/Script/PZ_SkillTree"), TEXT("UPZ_SkillTreeBlackboardType_Name"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPZ_SkillTreeBlackboardType_Name);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
