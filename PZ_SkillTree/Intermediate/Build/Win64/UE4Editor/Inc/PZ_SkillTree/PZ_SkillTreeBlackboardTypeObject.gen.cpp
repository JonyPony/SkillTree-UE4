// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PZ_SkillTree/Public/SkillTreeBlackBoard/BlackBoardType/PZ_SkillTreeBlackboardTypeObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePZ_SkillTreeBlackboardTypeObject() {}
// Cross Module References
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTreeBlackboardTypeObject_NoRegister();
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTreeBlackboardTypeObject();
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTreeBlackboardKeyType();
	UPackage* Z_Construct_UPackage__Script_PZ_SkillTree();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UPZ_SkillTreeBlackboardTypeObject::StaticRegisterNativesUPZ_SkillTreeBlackboardTypeObject()
	{
	}
	UClass* Z_Construct_UClass_UPZ_SkillTreeBlackboardTypeObject_NoRegister()
	{
		return UPZ_SkillTreeBlackboardTypeObject::StaticClass();
	}
	struct Z_Construct_UClass_UPZ_SkillTreeBlackboardTypeObject_Statics
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
	UObject* (*const Z_Construct_UClass_UPZ_SkillTreeBlackboardTypeObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPZ_SkillTreeBlackboardKeyType,
		(UObject* (*)())Z_Construct_UPackage__Script_PZ_SkillTree,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTreeBlackboardTypeObject_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Object" },
		{ "IncludePath", "SkillTreeBlackBoard/BlackBoardType/PZ_SkillTreeBlackboardTypeObject.h" },
		{ "ModuleRelativePath", "Public/SkillTreeBlackBoard/BlackBoardType/PZ_SkillTreeBlackboardTypeObject.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTreeBlackboardTypeObject_Statics::NewProp_BaseClass_MetaData[] = {
		{ "AllowAbstract", "1" },
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Public/SkillTreeBlackBoard/BlackBoardType/PZ_SkillTreeBlackboardTypeObject.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPZ_SkillTreeBlackboardTypeObject_Statics::NewProp_BaseClass = { "BaseClass", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPZ_SkillTreeBlackboardTypeObject, BaseClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTreeBlackboardTypeObject_Statics::NewProp_BaseClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeBlackboardTypeObject_Statics::NewProp_BaseClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPZ_SkillTreeBlackboardTypeObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPZ_SkillTreeBlackboardTypeObject_Statics::NewProp_BaseClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPZ_SkillTreeBlackboardTypeObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPZ_SkillTreeBlackboardTypeObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPZ_SkillTreeBlackboardTypeObject_Statics::ClassParams = {
		&UPZ_SkillTreeBlackboardTypeObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPZ_SkillTreeBlackboardTypeObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeBlackboardTypeObject_Statics::PropPointers),
		0,
		0x001030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTreeBlackboardTypeObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeBlackboardTypeObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPZ_SkillTreeBlackboardTypeObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPZ_SkillTreeBlackboardTypeObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPZ_SkillTreeBlackboardTypeObject, 2688056273);
	template<> PZ_SKILLTREE_API UClass* StaticClass<UPZ_SkillTreeBlackboardTypeObject>()
	{
		return UPZ_SkillTreeBlackboardTypeObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPZ_SkillTreeBlackboardTypeObject(Z_Construct_UClass_UPZ_SkillTreeBlackboardTypeObject, &UPZ_SkillTreeBlackboardTypeObject::StaticClass, TEXT("/Script/PZ_SkillTree"), TEXT("UPZ_SkillTreeBlackboardTypeObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPZ_SkillTreeBlackboardTypeObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
