// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePZ_SkillTree_init() {}
	PZ_SKILLTREE_API UFunction* Z_Construct_UDelegateFunction_PZ_SkillTree_OnIsOpenChangeBind__DelegateSignature();
	PZ_SKILLTREE_API UFunction* Z_Construct_UDelegateFunction_PZ_SkillTree_OnLvlChangeBind__DelegateSignature();
	PZ_SKILLTREE_API UFunction* Z_Construct_UDelegateFunction_PZ_SkillTree_OnCanBeOpenChangeBind__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_PZ_SkillTree()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_PZ_SkillTree_OnIsOpenChangeBind__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_PZ_SkillTree_OnLvlChangeBind__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_PZ_SkillTree_OnCanBeOpenChangeBind__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/PZ_SkillTree",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x63871B40,
				0x17B95BAD,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
