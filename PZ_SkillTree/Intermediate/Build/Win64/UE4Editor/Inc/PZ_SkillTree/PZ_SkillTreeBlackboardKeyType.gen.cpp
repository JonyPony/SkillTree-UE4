// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PZ_SkillTree/Public/SkillTreeBlackBoard/PZ_SkillTreeBlackboardKeyType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePZ_SkillTreeBlackboardKeyType() {}
// Cross Module References
	PZ_SKILLTREE_API UEnum* Z_Construct_UEnum_PZ_SkillTree_ESkillTreeTextKeyOperation();
	UPackage* Z_Construct_UPackage__Script_PZ_SkillTree();
	PZ_SKILLTREE_API UEnum* Z_Construct_UEnum_PZ_SkillTree_ESkillTreeArithmeticKeyOperation();
	PZ_SKILLTREE_API UEnum* Z_Construct_UEnum_PZ_SkillTree_ESkillTreeBasicKeyOperation();
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTreeBlackboardKeyType_NoRegister();
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTreeBlackboardKeyType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* ESkillTreeTextKeyOperation_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PZ_SkillTree_ESkillTreeTextKeyOperation, Z_Construct_UPackage__Script_PZ_SkillTree(), TEXT("ESkillTreeTextKeyOperation"));
		}
		return Singleton;
	}
	template<> PZ_SKILLTREE_API UEnum* StaticEnum<ESkillTreeTextKeyOperation::Type>()
	{
		return ESkillTreeTextKeyOperation_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESkillTreeTextKeyOperation(ESkillTreeTextKeyOperation_StaticEnum, TEXT("/Script/PZ_SkillTree"), TEXT("ESkillTreeTextKeyOperation"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PZ_SkillTree_ESkillTreeTextKeyOperation_Hash() { return 1577281714U; }
	UEnum* Z_Construct_UEnum_PZ_SkillTree_ESkillTreeTextKeyOperation()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PZ_SkillTree();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESkillTreeTextKeyOperation"), 0, Get_Z_Construct_UEnum_PZ_SkillTree_ESkillTreeTextKeyOperation_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESkillTreeTextKeyOperation::Equal", (int64)ESkillTreeTextKeyOperation::Equal },
				{ "ESkillTreeTextKeyOperation::NotEqual", (int64)ESkillTreeTextKeyOperation::NotEqual },
				{ "ESkillTreeTextKeyOperation::Contain", (int64)ESkillTreeTextKeyOperation::Contain },
				{ "ESkillTreeTextKeyOperation::NotContain", (int64)ESkillTreeTextKeyOperation::NotContain },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Contain.DisplayName", "Contains" },
				{ "Contain.Name", "ESkillTreeTextKeyOperation::Contain" },
				{ "Equal.DisplayName", "Is Equal To" },
				{ "Equal.Name", "ESkillTreeTextKeyOperation::Equal" },
				{ "ModuleRelativePath", "Public/SkillTreeBlackBoard/PZ_SkillTreeBlackboardKeyType.h" },
				{ "NotContain.DisplayName", "Not Contains" },
				{ "NotContain.Name", "ESkillTreeTextKeyOperation::NotContain" },
				{ "NotEqual.DisplayName", "Is Not Equal To" },
				{ "NotEqual.Name", "ESkillTreeTextKeyOperation::NotEqual" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PZ_SkillTree,
				nullptr,
				"ESkillTreeTextKeyOperation",
				"ESkillTreeTextKeyOperation::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESkillTreeArithmeticKeyOperation_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PZ_SkillTree_ESkillTreeArithmeticKeyOperation, Z_Construct_UPackage__Script_PZ_SkillTree(), TEXT("ESkillTreeArithmeticKeyOperation"));
		}
		return Singleton;
	}
	template<> PZ_SKILLTREE_API UEnum* StaticEnum<ESkillTreeArithmeticKeyOperation::Type>()
	{
		return ESkillTreeArithmeticKeyOperation_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESkillTreeArithmeticKeyOperation(ESkillTreeArithmeticKeyOperation_StaticEnum, TEXT("/Script/PZ_SkillTree"), TEXT("ESkillTreeArithmeticKeyOperation"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PZ_SkillTree_ESkillTreeArithmeticKeyOperation_Hash() { return 1643954649U; }
	UEnum* Z_Construct_UEnum_PZ_SkillTree_ESkillTreeArithmeticKeyOperation()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PZ_SkillTree();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESkillTreeArithmeticKeyOperation"), 0, Get_Z_Construct_UEnum_PZ_SkillTree_ESkillTreeArithmeticKeyOperation_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESkillTreeArithmeticKeyOperation::Equal", (int64)ESkillTreeArithmeticKeyOperation::Equal },
				{ "ESkillTreeArithmeticKeyOperation::NotEqual", (int64)ESkillTreeArithmeticKeyOperation::NotEqual },
				{ "ESkillTreeArithmeticKeyOperation::Less", (int64)ESkillTreeArithmeticKeyOperation::Less },
				{ "ESkillTreeArithmeticKeyOperation::LessOrEqual", (int64)ESkillTreeArithmeticKeyOperation::LessOrEqual },
				{ "ESkillTreeArithmeticKeyOperation::Greater", (int64)ESkillTreeArithmeticKeyOperation::Greater },
				{ "ESkillTreeArithmeticKeyOperation::GreaterOrEqual", (int64)ESkillTreeArithmeticKeyOperation::GreaterOrEqual },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Equal.DisplayName", "Is Equal To" },
				{ "Equal.Name", "ESkillTreeArithmeticKeyOperation::Equal" },
				{ "Greater.DisplayName", "Is Greater Than" },
				{ "Greater.Name", "ESkillTreeArithmeticKeyOperation::Greater" },
				{ "GreaterOrEqual.DisplayName", "Is Greater Than Or Equal To" },
				{ "GreaterOrEqual.Name", "ESkillTreeArithmeticKeyOperation::GreaterOrEqual" },
				{ "Less.DisplayName", "Is Less Than" },
				{ "Less.Name", "ESkillTreeArithmeticKeyOperation::Less" },
				{ "LessOrEqual.DisplayName", "Is Less Than Or Equal To" },
				{ "LessOrEqual.Name", "ESkillTreeArithmeticKeyOperation::LessOrEqual" },
				{ "ModuleRelativePath", "Public/SkillTreeBlackBoard/PZ_SkillTreeBlackboardKeyType.h" },
				{ "NotEqual.DisplayName", "Is Not Equal To" },
				{ "NotEqual.Name", "ESkillTreeArithmeticKeyOperation::NotEqual" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PZ_SkillTree,
				nullptr,
				"ESkillTreeArithmeticKeyOperation",
				"ESkillTreeArithmeticKeyOperation::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESkillTreeBasicKeyOperation_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PZ_SkillTree_ESkillTreeBasicKeyOperation, Z_Construct_UPackage__Script_PZ_SkillTree(), TEXT("ESkillTreeBasicKeyOperation"));
		}
		return Singleton;
	}
	template<> PZ_SKILLTREE_API UEnum* StaticEnum<ESkillTreeBasicKeyOperation::Type>()
	{
		return ESkillTreeBasicKeyOperation_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESkillTreeBasicKeyOperation(ESkillTreeBasicKeyOperation_StaticEnum, TEXT("/Script/PZ_SkillTree"), TEXT("ESkillTreeBasicKeyOperation"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PZ_SkillTree_ESkillTreeBasicKeyOperation_Hash() { return 886767341U; }
	UEnum* Z_Construct_UEnum_PZ_SkillTree_ESkillTreeBasicKeyOperation()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PZ_SkillTree();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESkillTreeBasicKeyOperation"), 0, Get_Z_Construct_UEnum_PZ_SkillTree_ESkillTreeBasicKeyOperation_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESkillTreeBasicKeyOperation::Set", (int64)ESkillTreeBasicKeyOperation::Set },
				{ "ESkillTreeBasicKeyOperation::NotSet", (int64)ESkillTreeBasicKeyOperation::NotSet },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/SkillTreeBlackBoard/PZ_SkillTreeBlackboardKeyType.h" },
				{ "NotSet.DisplayName", "Is Not Set" },
				{ "NotSet.Name", "ESkillTreeBasicKeyOperation::NotSet" },
				{ "Set.DisplayName", "Is Set" },
				{ "Set.Name", "ESkillTreeBasicKeyOperation::Set" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PZ_SkillTree,
				nullptr,
				"ESkillTreeBasicKeyOperation",
				"ESkillTreeBasicKeyOperation::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UPZ_SkillTreeBlackboardKeyType::StaticRegisterNativesUPZ_SkillTreeBlackboardKeyType()
	{
	}
	UClass* Z_Construct_UClass_UPZ_SkillTreeBlackboardKeyType_NoRegister()
	{
		return UPZ_SkillTreeBlackboardKeyType::StaticClass();
	}
	struct Z_Construct_UClass_UPZ_SkillTreeBlackboardKeyType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPZ_SkillTreeBlackboardKeyType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PZ_SkillTree,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTreeBlackboardKeyType_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SkillTreeBlackBoard/PZ_SkillTreeBlackboardKeyType.h" },
		{ "ModuleRelativePath", "Public/SkillTreeBlackBoard/PZ_SkillTreeBlackboardKeyType.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPZ_SkillTreeBlackboardKeyType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPZ_SkillTreeBlackboardKeyType>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPZ_SkillTreeBlackboardKeyType_Statics::ClassParams = {
		&UPZ_SkillTreeBlackboardKeyType::StaticClass,
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
		0x001030A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTreeBlackboardKeyType_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeBlackboardKeyType_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPZ_SkillTreeBlackboardKeyType()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPZ_SkillTreeBlackboardKeyType_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPZ_SkillTreeBlackboardKeyType, 2238414625);
	template<> PZ_SKILLTREE_API UClass* StaticClass<UPZ_SkillTreeBlackboardKeyType>()
	{
		return UPZ_SkillTreeBlackboardKeyType::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPZ_SkillTreeBlackboardKeyType(Z_Construct_UClass_UPZ_SkillTreeBlackboardKeyType, &UPZ_SkillTreeBlackboardKeyType::StaticClass, TEXT("/Script/PZ_SkillTree"), TEXT("UPZ_SkillTreeBlackboardKeyType"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPZ_SkillTreeBlackboardKeyType);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
