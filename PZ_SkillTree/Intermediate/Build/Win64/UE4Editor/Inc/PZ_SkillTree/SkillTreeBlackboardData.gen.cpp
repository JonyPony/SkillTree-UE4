// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PZ_SkillTree/Public/SkillTreeBlackBoard/SkillTreeBlackboardData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkillTreeBlackboardData() {}
// Cross Module References
	PZ_SKILLTREE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardInitializationData();
	UPackage* Z_Construct_UPackage__Script_PZ_SkillTree();
	PZ_SKILLTREE_API UScriptStruct* Z_Construct_UScriptStruct_FSkillTreeBlackboardEntry();
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTreeBlackboardKeyType_NoRegister();
// End Cross Module References
class UScriptStruct* FBlackboardInitializationData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PZ_SKILLTREE_API uint32 Get_Z_Construct_UScriptStruct_FBlackboardInitializationData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlackboardInitializationData, Z_Construct_UPackage__Script_PZ_SkillTree(), TEXT("BlackboardInitializationData"), sizeof(FBlackboardInitializationData), Get_Z_Construct_UScriptStruct_FBlackboardInitializationData_Hash());
	}
	return Singleton;
}
template<> PZ_SKILLTREE_API UScriptStruct* StaticStruct<FBlackboardInitializationData>()
{
	return FBlackboardInitializationData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBlackboardInitializationData(FBlackboardInitializationData::StaticStruct, TEXT("/Script/PZ_SkillTree"), TEXT("BlackboardInitializationData"), false, nullptr, nullptr);
static struct FScriptStruct_PZ_SkillTree_StaticRegisterNativesFBlackboardInitializationData
{
	FScriptStruct_PZ_SkillTree_StaticRegisterNativesFBlackboardInitializationData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BlackboardInitializationData")),new UScriptStruct::TCppStructOps<FBlackboardInitializationData>);
	}
} ScriptStruct_PZ_SkillTree_StaticRegisterNativesFBlackboardInitializationData;
	struct Z_Construct_UScriptStruct_FBlackboardInitializationData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlackboardInitializationData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkillTreeBlackBoard/SkillTreeBlackboardData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlackboardInitializationData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlackboardInitializationData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlackboardInitializationData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PZ_SkillTree,
		nullptr,
		&NewStructOps,
		"BlackboardInitializationData",
		sizeof(FBlackboardInitializationData),
		alignof(FBlackboardInitializationData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlackboardInitializationData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlackboardInitializationData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlackboardInitializationData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBlackboardInitializationData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PZ_SkillTree();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BlackboardInitializationData"), sizeof(FBlackboardInitializationData), Get_Z_Construct_UScriptStruct_FBlackboardInitializationData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBlackboardInitializationData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBlackboardInitializationData_Hash() { return 1656807276U; }
class UScriptStruct* FSkillTreeBlackboardEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PZ_SKILLTREE_API uint32 Get_Z_Construct_UScriptStruct_FSkillTreeBlackboardEntry_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkillTreeBlackboardEntry, Z_Construct_UPackage__Script_PZ_SkillTree(), TEXT("SkillTreeBlackboardEntry"), sizeof(FSkillTreeBlackboardEntry), Get_Z_Construct_UScriptStruct_FSkillTreeBlackboardEntry_Hash());
	}
	return Singleton;
}
template<> PZ_SKILLTREE_API UScriptStruct* StaticStruct<FSkillTreeBlackboardEntry>()
{
	return FSkillTreeBlackboardEntry::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSkillTreeBlackboardEntry(FSkillTreeBlackboardEntry::StaticStruct, TEXT("/Script/PZ_SkillTree"), TEXT("SkillTreeBlackboardEntry"), false, nullptr, nullptr);
static struct FScriptStruct_PZ_SkillTree_StaticRegisterNativesFSkillTreeBlackboardEntry
{
	FScriptStruct_PZ_SkillTree_StaticRegisterNativesFSkillTreeBlackboardEntry()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SkillTreeBlackboardEntry")),new UScriptStruct::TCppStructOps<FSkillTreeBlackboardEntry>);
	}
} ScriptStruct_PZ_SkillTree_StaticRegisterNativesFSkillTreeBlackboardEntry;
	struct Z_Construct_UScriptStruct_FSkillTreeBlackboardEntry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntryName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EntryName;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntryDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EntryDescription;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KeyType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInstanceSynced_MetaData[];
#endif
		static void NewProp_bInstanceSynced_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInstanceSynced;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkillTreeBlackboardEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** blackboard entry definition */" },
		{ "ModuleRelativePath", "Public/SkillTreeBlackBoard/SkillTreeBlackboardData.h" },
		{ "ToolTip", "blackboard entry definition" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkillTreeBlackboardEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkillTreeBlackboardEntry>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkillTreeBlackboardEntry_Statics::NewProp_EntryName_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Public/SkillTreeBlackBoard/SkillTreeBlackboardData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSkillTreeBlackboardEntry_Statics::NewProp_EntryName = { "EntryName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkillTreeBlackboardEntry, EntryName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkillTreeBlackboardEntry_Statics::NewProp_EntryName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillTreeBlackboardEntry_Statics::NewProp_EntryName_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkillTreeBlackboardEntry_Statics::NewProp_EntryDescription_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Public/SkillTreeBlackBoard/SkillTreeBlackboardData.h" },
		{ "ToolTip", "Optional description to explain what this blackboard entry does." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSkillTreeBlackboardEntry_Statics::NewProp_EntryDescription = { "EntryDescription", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkillTreeBlackboardEntry, EntryDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkillTreeBlackboardEntry_Statics::NewProp_EntryDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillTreeBlackboardEntry_Statics::NewProp_EntryDescription_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkillTreeBlackboardEntry_Statics::NewProp_KeyType_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "/** key type and additional properties */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SkillTreeBlackBoard/SkillTreeBlackboardData.h" },
		{ "ToolTip", "key type and additional properties" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSkillTreeBlackboardEntry_Statics::NewProp_KeyType = { "KeyType", nullptr, (EPropertyFlags)0x0012000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkillTreeBlackboardEntry, KeyType), Z_Construct_UClass_UPZ_SkillTreeBlackboardKeyType_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkillTreeBlackboardEntry_Statics::NewProp_KeyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillTreeBlackboardEntry_Statics::NewProp_KeyType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkillTreeBlackboardEntry_Statics::NewProp_bInstanceSynced_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "/** if set to true then this field will be synchronized across all instances of this blackboard */" },
		{ "ModuleRelativePath", "Public/SkillTreeBlackBoard/SkillTreeBlackboardData.h" },
		{ "ToolTip", "if set to true then this field will be synchronized across all instances of this blackboard" },
	};
#endif
	void Z_Construct_UScriptStruct_FSkillTreeBlackboardEntry_Statics::NewProp_bInstanceSynced_SetBit(void* Obj)
	{
		((FSkillTreeBlackboardEntry*)Obj)->bInstanceSynced = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkillTreeBlackboardEntry_Statics::NewProp_bInstanceSynced = { "bInstanceSynced", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSkillTreeBlackboardEntry), &Z_Construct_UScriptStruct_FSkillTreeBlackboardEntry_Statics::NewProp_bInstanceSynced_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkillTreeBlackboardEntry_Statics::NewProp_bInstanceSynced_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillTreeBlackboardEntry_Statics::NewProp_bInstanceSynced_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkillTreeBlackboardEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillTreeBlackboardEntry_Statics::NewProp_EntryName,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillTreeBlackboardEntry_Statics::NewProp_EntryDescription,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillTreeBlackboardEntry_Statics::NewProp_KeyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillTreeBlackboardEntry_Statics::NewProp_bInstanceSynced,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkillTreeBlackboardEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PZ_SkillTree,
		nullptr,
		&NewStructOps,
		"SkillTreeBlackboardEntry",
		sizeof(FSkillTreeBlackboardEntry),
		alignof(FSkillTreeBlackboardEntry),
		Z_Construct_UScriptStruct_FSkillTreeBlackboardEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillTreeBlackboardEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkillTreeBlackboardEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillTreeBlackboardEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkillTreeBlackboardEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSkillTreeBlackboardEntry_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PZ_SkillTree();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SkillTreeBlackboardEntry"), sizeof(FSkillTreeBlackboardEntry), Get_Z_Construct_UScriptStruct_FSkillTreeBlackboardEntry_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSkillTreeBlackboardEntry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSkillTreeBlackboardEntry_Hash() { return 2444372203U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
