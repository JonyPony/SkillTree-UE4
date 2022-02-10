// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PZ_SkillTree/Public/SkillTreeBlackBoard/BlackBoardType/PZ_SkillTreeBlackboardTypeVector.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePZ_SkillTreeBlackboardTypeVector() {}
// Cross Module References
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTreeBlackboardTypeVector_NoRegister();
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTreeBlackboardTypeVector();
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTreeBlackboardKeyType();
	UPackage* Z_Construct_UPackage__Script_PZ_SkillTree();
// End Cross Module References
	void UPZ_SkillTreeBlackboardTypeVector::StaticRegisterNativesUPZ_SkillTreeBlackboardTypeVector()
	{
	}
	UClass* Z_Construct_UClass_UPZ_SkillTreeBlackboardTypeVector_NoRegister()
	{
		return UPZ_SkillTreeBlackboardTypeVector::StaticClass();
	}
	struct Z_Construct_UClass_UPZ_SkillTreeBlackboardTypeVector_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPZ_SkillTreeBlackboardTypeVector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPZ_SkillTreeBlackboardKeyType,
		(UObject* (*)())Z_Construct_UPackage__Script_PZ_SkillTree,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTreeBlackboardTypeVector_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Vector" },
		{ "IncludePath", "SkillTreeBlackBoard/BlackBoardType/PZ_SkillTreeBlackboardTypeVector.h" },
		{ "ModuleRelativePath", "Public/SkillTreeBlackBoard/BlackBoardType/PZ_SkillTreeBlackboardTypeVector.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPZ_SkillTreeBlackboardTypeVector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPZ_SkillTreeBlackboardTypeVector>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPZ_SkillTreeBlackboardTypeVector_Statics::ClassParams = {
		&UPZ_SkillTreeBlackboardTypeVector::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTreeBlackboardTypeVector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeBlackboardTypeVector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPZ_SkillTreeBlackboardTypeVector()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPZ_SkillTreeBlackboardTypeVector_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPZ_SkillTreeBlackboardTypeVector, 2971356379);
	template<> PZ_SKILLTREE_API UClass* StaticClass<UPZ_SkillTreeBlackboardTypeVector>()
	{
		return UPZ_SkillTreeBlackboardTypeVector::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPZ_SkillTreeBlackboardTypeVector(Z_Construct_UClass_UPZ_SkillTreeBlackboardTypeVector, &UPZ_SkillTreeBlackboardTypeVector::StaticClass, TEXT("/Script/PZ_SkillTree"), TEXT("UPZ_SkillTreeBlackboardTypeVector"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPZ_SkillTreeBlackboardTypeVector);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
