// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PZ_SKILLTREE_PZ_SkillTreeNodesInfo_generated_h
#error "PZ_SkillTreeNodesInfo.generated.h already included, missing '#pragma once' in PZ_SkillTreeNodesInfo.h"
#endif
#define PZ_SKILLTREE_PZ_SkillTreeNodesInfo_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_PZ_SkillTreeNodesInfo_h


#define FOREACH_ENUM_ESKILLTREECONNECTIONTYPE(op) \
	op(ESkillTreeConnectionType::None) \
	op(ESkillTreeConnectionType::InConnection) \
	op(ESkillTreeConnectionType::OutConnection) 

enum class ESkillTreeConnectionType : uint8;
template<> PZ_SKILLTREE_API UEnum* StaticEnum<ESkillTreeConnectionType>();

#define FOREACH_ENUM_ESKILLTREENODETYPE(op) \
	op(ESkillTreeNodeType::None) \
	op(ESkillTreeNodeType::SkillNode) \
	op(ESkillTreeNodeType::RootSkillNode) \
	op(ESkillTreeNodeType::ActiveSkillNode) \
	op(ESkillTreeNodeType::PassiveSkillNode) \
	op(ESkillTreeNodeType::EventSkillNode) \
	op(ESkillTreeNodeType::ConditionSkillNode) \
	op(ESkillTreeNodeType::SkillActionNode) \
	op(ESkillTreeNodeType::SwitcherNode) \
	op(ESkillTreeNodeType::ConnectionNode) \
	op(ESkillTreeNodeType::CustomNode) \
	op(ESkillTreeNodeType::UINode) 

enum class ESkillTreeNodeType : uint8;
template<> PZ_SKILLTREE_API UEnum* StaticEnum<ESkillTreeNodeType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
