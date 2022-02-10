// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PZ_SkillTree/Public/SkillTreeBlackBoard/BlackBoardType/PZ_SkillTreeBlackboardType_Enum.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePZ_SkillTreeBlackboardType_Enum() {}
// Cross Module References
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTreeBlackboardType_Enum_NoRegister();
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTreeBlackboardType_Enum();
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTreeBlackboardKeyType();
	UPackage* Z_Construct_UPackage__Script_PZ_SkillTree();
	COREUOBJECT_API UClass* Z_Construct_UClass_UEnum();
// End Cross Module References
	void UPZ_SkillTreeBlackboardType_Enum::StaticRegisterNativesUPZ_SkillTreeBlackboardType_Enum()
	{
	}
	UClass* Z_Construct_UClass_UPZ_SkillTreeBlackboardType_Enum_NoRegister()
	{
		return UPZ_SkillTreeBlackboardType_Enum::StaticClass();
	}
	struct Z_Construct_UClass_UPZ_SkillTreeBlackboardType_Enum_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnumType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EnumType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnumName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EnumName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsEnumNameValid_MetaData[];
#endif
		static void NewProp_bIsEnumNameValid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEnumNameValid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPZ_SkillTreeBlackboardType_Enum_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPZ_SkillTreeBlackboardKeyType,
		(UObject* (*)())Z_Construct_UPackage__Script_PZ_SkillTree,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTreeBlackboardType_Enum_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Enum" },
		{ "IncludePath", "SkillTreeBlackBoard/BlackBoardType/PZ_SkillTreeBlackboardType_Enum.h" },
		{ "ModuleRelativePath", "Public/SkillTreeBlackBoard/BlackBoardType/PZ_SkillTreeBlackboardType_Enum.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTreeBlackboardType_Enum_Statics::NewProp_EnumType_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Public/SkillTreeBlackBoard/BlackBoardType/PZ_SkillTreeBlackboardType_Enum.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPZ_SkillTreeBlackboardType_Enum_Statics::NewProp_EnumType = { "EnumType", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPZ_SkillTreeBlackboardType_Enum, EnumType), Z_Construct_UClass_UEnum, METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTreeBlackboardType_Enum_Statics::NewProp_EnumType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeBlackboardType_Enum_Statics::NewProp_EnumType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTreeBlackboardType_Enum_Statics::NewProp_EnumName_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "/** name of enum defined in c++ code, will take priority over asset from EnumType property */" },
		{ "ModuleRelativePath", "Public/SkillTreeBlackBoard/BlackBoardType/PZ_SkillTreeBlackboardType_Enum.h" },
		{ "ToolTip", "name of enum defined in c++ code, will take priority over asset from EnumType property" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPZ_SkillTreeBlackboardType_Enum_Statics::NewProp_EnumName = { "EnumName", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPZ_SkillTreeBlackboardType_Enum, EnumName), METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTreeBlackboardType_Enum_Statics::NewProp_EnumName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeBlackboardType_Enum_Statics::NewProp_EnumName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTreeBlackboardType_Enum_Statics::NewProp_bIsEnumNameValid_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "/** set when EnumName override is valid and active */" },
		{ "ModuleRelativePath", "Public/SkillTreeBlackBoard/BlackBoardType/PZ_SkillTreeBlackboardType_Enum.h" },
		{ "ToolTip", "set when EnumName override is valid and active" },
	};
#endif
	void Z_Construct_UClass_UPZ_SkillTreeBlackboardType_Enum_Statics::NewProp_bIsEnumNameValid_SetBit(void* Obj)
	{
		((UPZ_SkillTreeBlackboardType_Enum*)Obj)->bIsEnumNameValid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPZ_SkillTreeBlackboardType_Enum_Statics::NewProp_bIsEnumNameValid = { "bIsEnumNameValid", nullptr, (EPropertyFlags)0x0010000000030001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UPZ_SkillTreeBlackboardType_Enum), &Z_Construct_UClass_UPZ_SkillTreeBlackboardType_Enum_Statics::NewProp_bIsEnumNameValid_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTreeBlackboardType_Enum_Statics::NewProp_bIsEnumNameValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeBlackboardType_Enum_Statics::NewProp_bIsEnumNameValid_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPZ_SkillTreeBlackboardType_Enum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPZ_SkillTreeBlackboardType_Enum_Statics::NewProp_EnumType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPZ_SkillTreeBlackboardType_Enum_Statics::NewProp_EnumName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPZ_SkillTreeBlackboardType_Enum_Statics::NewProp_bIsEnumNameValid,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPZ_SkillTreeBlackboardType_Enum_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPZ_SkillTreeBlackboardType_Enum>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPZ_SkillTreeBlackboardType_Enum_Statics::ClassParams = {
		&UPZ_SkillTreeBlackboardType_Enum::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPZ_SkillTreeBlackboardType_Enum_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeBlackboardType_Enum_Statics::PropPointers),
		0,
		0x001030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTreeBlackboardType_Enum_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeBlackboardType_Enum_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPZ_SkillTreeBlackboardType_Enum()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPZ_SkillTreeBlackboardType_Enum_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPZ_SkillTreeBlackboardType_Enum, 3509970778);
	template<> PZ_SKILLTREE_API UClass* StaticClass<UPZ_SkillTreeBlackboardType_Enum>()
	{
		return UPZ_SkillTreeBlackboardType_Enum::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPZ_SkillTreeBlackboardType_Enum(Z_Construct_UClass_UPZ_SkillTreeBlackboardType_Enum, &UPZ_SkillTreeBlackboardType_Enum::StaticClass, TEXT("/Script/PZ_SkillTree"), TEXT("UPZ_SkillTreeBlackboardType_Enum"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPZ_SkillTreeBlackboardType_Enum);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
