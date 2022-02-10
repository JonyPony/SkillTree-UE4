// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PZ_SkillTree/Public/SkillTreeBlackBoard/BlackBoardType/PZ_SkillTreeBlackboardType_class.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePZ_SkillTreeBlackboardType_class() {}
// Cross Module References
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTreeBlackboardType_class_NoRegister();
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTreeBlackboardType_class();
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTreeBlackboardKeyType();
	UPackage* Z_Construct_UPackage__Script_PZ_SkillTree();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UPZ_SkillTreeBlackboardType_class::StaticRegisterNativesUPZ_SkillTreeBlackboardType_class()
	{
	}
	UClass* Z_Construct_UClass_UPZ_SkillTreeBlackboardType_class_NoRegister()
	{
		return UPZ_SkillTreeBlackboardType_class::StaticClass();
	}
	struct Z_Construct_UClass_UPZ_SkillTreeBlackboardType_class_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BaseClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPZ_SkillTreeBlackboardType_class_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPZ_SkillTreeBlackboardKeyType,
		(UObject* (*)())Z_Construct_UPackage__Script_PZ_SkillTree,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTreeBlackboardType_class_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Class" },
		{ "IncludePath", "SkillTreeBlackBoard/BlackBoardType/PZ_SkillTreeBlackboardType_class.h" },
		{ "ModuleRelativePath", "Public/SkillTreeBlackBoard/BlackBoardType/PZ_SkillTreeBlackboardType_class.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTreeBlackboardType_class_Statics::NewProp_BaseClass_MetaData[] = {
		{ "AllowAbstract", "1" },
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Public/SkillTreeBlackBoard/BlackBoardType/PZ_SkillTreeBlackboardType_class.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPZ_SkillTreeBlackboardType_class_Statics::NewProp_BaseClass = { "BaseClass", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPZ_SkillTreeBlackboardType_class, BaseClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTreeBlackboardType_class_Statics::NewProp_BaseClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeBlackboardType_class_Statics::NewProp_BaseClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPZ_SkillTreeBlackboardType_class_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPZ_SkillTreeBlackboardType_class_Statics::NewProp_BaseClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPZ_SkillTreeBlackboardType_class_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPZ_SkillTreeBlackboardType_class>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPZ_SkillTreeBlackboardType_class_Statics::ClassParams = {
		&UPZ_SkillTreeBlackboardType_class::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPZ_SkillTreeBlackboardType_class_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeBlackboardType_class_Statics::PropPointers),
		0,
		0x001030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTreeBlackboardType_class_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeBlackboardType_class_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPZ_SkillTreeBlackboardType_class()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPZ_SkillTreeBlackboardType_class_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPZ_SkillTreeBlackboardType_class, 2509736919);
	template<> PZ_SKILLTREE_API UClass* StaticClass<UPZ_SkillTreeBlackboardType_class>()
	{
		return UPZ_SkillTreeBlackboardType_class::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPZ_SkillTreeBlackboardType_class(Z_Construct_UClass_UPZ_SkillTreeBlackboardType_class, &UPZ_SkillTreeBlackboardType_class::StaticClass, TEXT("/Script/PZ_SkillTree"), TEXT("UPZ_SkillTreeBlackboardType_class"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPZ_SkillTreeBlackboardType_class);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
