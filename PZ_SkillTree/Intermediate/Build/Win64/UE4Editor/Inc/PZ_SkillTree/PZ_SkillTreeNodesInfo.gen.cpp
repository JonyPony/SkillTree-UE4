// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PZ_SkillTree/Public/PZ_SkillTreeNodesInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePZ_SkillTreeNodesInfo() {}
// Cross Module References
	PZ_SKILLTREE_API UEnum* Z_Construct_UEnum_PZ_SkillTree_ESkillTreeConnectionType();
	UPackage* Z_Construct_UPackage__Script_PZ_SkillTree();
	PZ_SKILLTREE_API UEnum* Z_Construct_UEnum_PZ_SkillTree_ESkillTreeNodeType();
// End Cross Module References
	static UEnum* ESkillTreeConnectionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PZ_SkillTree_ESkillTreeConnectionType, Z_Construct_UPackage__Script_PZ_SkillTree(), TEXT("ESkillTreeConnectionType"));
		}
		return Singleton;
	}
	template<> PZ_SKILLTREE_API UEnum* StaticEnum<ESkillTreeConnectionType>()
	{
		return ESkillTreeConnectionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESkillTreeConnectionType(ESkillTreeConnectionType_StaticEnum, TEXT("/Script/PZ_SkillTree"), TEXT("ESkillTreeConnectionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PZ_SkillTree_ESkillTreeConnectionType_Hash() { return 1959295808U; }
	UEnum* Z_Construct_UEnum_PZ_SkillTree_ESkillTreeConnectionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PZ_SkillTree();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESkillTreeConnectionType"), 0, Get_Z_Construct_UEnum_PZ_SkillTree_ESkillTreeConnectionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESkillTreeConnectionType::None", (int64)ESkillTreeConnectionType::None },
				{ "ESkillTreeConnectionType::InConnection", (int64)ESkillTreeConnectionType::InConnection },
				{ "ESkillTreeConnectionType::OutConnection", (int64)ESkillTreeConnectionType::OutConnection },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "InConnection.DisplayName", "In Connection Node" },
				{ "InConnection.Name", "ESkillTreeConnectionType::InConnection" },
				{ "ModuleRelativePath", "Public/PZ_SkillTreeNodesInfo.h" },
				{ "None.DisplayName", "None" },
				{ "None.Name", "ESkillTreeConnectionType::None" },
				{ "OutConnection.DisplayName", "Out Connection Node" },
				{ "OutConnection.Name", "ESkillTreeConnectionType::OutConnection" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PZ_SkillTree,
				nullptr,
				"ESkillTreeConnectionType",
				"ESkillTreeConnectionType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESkillTreeNodeType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PZ_SkillTree_ESkillTreeNodeType, Z_Construct_UPackage__Script_PZ_SkillTree(), TEXT("ESkillTreeNodeType"));
		}
		return Singleton;
	}
	template<> PZ_SKILLTREE_API UEnum* StaticEnum<ESkillTreeNodeType>()
	{
		return ESkillTreeNodeType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESkillTreeNodeType(ESkillTreeNodeType_StaticEnum, TEXT("/Script/PZ_SkillTree"), TEXT("ESkillTreeNodeType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PZ_SkillTree_ESkillTreeNodeType_Hash() { return 394809764U; }
	UEnum* Z_Construct_UEnum_PZ_SkillTree_ESkillTreeNodeType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PZ_SkillTree();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESkillTreeNodeType"), 0, Get_Z_Construct_UEnum_PZ_SkillTree_ESkillTreeNodeType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESkillTreeNodeType::None", (int64)ESkillTreeNodeType::None },
				{ "ESkillTreeNodeType::SkillNode", (int64)ESkillTreeNodeType::SkillNode },
				{ "ESkillTreeNodeType::RootSkillNode", (int64)ESkillTreeNodeType::RootSkillNode },
				{ "ESkillTreeNodeType::ActiveSkillNode", (int64)ESkillTreeNodeType::ActiveSkillNode },
				{ "ESkillTreeNodeType::PassiveSkillNode", (int64)ESkillTreeNodeType::PassiveSkillNode },
				{ "ESkillTreeNodeType::EventSkillNode", (int64)ESkillTreeNodeType::EventSkillNode },
				{ "ESkillTreeNodeType::ConditionSkillNode", (int64)ESkillTreeNodeType::ConditionSkillNode },
				{ "ESkillTreeNodeType::SkillActionNode", (int64)ESkillTreeNodeType::SkillActionNode },
				{ "ESkillTreeNodeType::SwitcherNode", (int64)ESkillTreeNodeType::SwitcherNode },
				{ "ESkillTreeNodeType::ConnectionNode", (int64)ESkillTreeNodeType::ConnectionNode },
				{ "ESkillTreeNodeType::CustomNode", (int64)ESkillTreeNodeType::CustomNode },
				{ "ESkillTreeNodeType::UINode", (int64)ESkillTreeNodeType::UINode },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ActiveSkillNode.DisplayName", "Active Skill Node" },
				{ "ActiveSkillNode.Name", "ESkillTreeNodeType::ActiveSkillNode" },
				{ "BlueprintType", "true" },
				{ "ConditionSkillNode.DisplayName", "Condition Skill Node" },
				{ "ConditionSkillNode.Name", "ESkillTreeNodeType::ConditionSkillNode" },
				{ "ConnectionNode.DisplayName", "Connection Node" },
				{ "ConnectionNode.Name", "ESkillTreeNodeType::ConnectionNode" },
				{ "CustomNode.DisplayName", "Custom Node" },
				{ "CustomNode.Name", "ESkillTreeNodeType::CustomNode" },
				{ "EventSkillNode.DisplayName", "Event Skill Node" },
				{ "EventSkillNode.Name", "ESkillTreeNodeType::EventSkillNode" },
				{ "ModuleRelativePath", "Public/PZ_SkillTreeNodesInfo.h" },
				{ "None.DisplayName", "None" },
				{ "None.Name", "ESkillTreeNodeType::None" },
				{ "PassiveSkillNode.DisplayName", "Passive Skill Node" },
				{ "PassiveSkillNode.Name", "ESkillTreeNodeType::PassiveSkillNode" },
				{ "RootSkillNode.DisplayName", "Root Skill Node" },
				{ "RootSkillNode.Name", "ESkillTreeNodeType::RootSkillNode" },
				{ "SkillActionNode.DisplayName", "Action Skill Node" },
				{ "SkillActionNode.Name", "ESkillTreeNodeType::SkillActionNode" },
				{ "SkillNode.DisplayName", "Skill Node" },
				{ "SkillNode.Name", "ESkillTreeNodeType::SkillNode" },
				{ "SwitcherNode.DisplayName", "Switcher Node" },
				{ "SwitcherNode.Name", "ESkillTreeNodeType::SwitcherNode" },
				{ "UINode.DisplayName", "UI Node" },
				{ "UINode.Name", "ESkillTreeNodeType::UINode" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PZ_SkillTree,
				nullptr,
				"ESkillTreeNodeType",
				"ESkillTreeNodeType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
