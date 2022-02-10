// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PZ_SKILLTREEEDITOR_PZ_SkillTreeUIPositionNodeInterface_generated_h
#error "PZ_SkillTreeUIPositionNodeInterface.generated.h already included, missing '#pragma once' in PZ_SkillTreeUIPositionNodeInterface.h"
#endif
#define PZ_SKILLTREEEDITOR_PZ_SkillTreeUIPositionNodeInterface_generated_h

#define Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTreeEditor_Private_SkillTreeEditor_UIPositionGraph_Nodes_PZ_SkillTreeUIPositionNodeInterface_h_20_SPARSE_DATA
#define Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTreeEditor_Private_SkillTreeEditor_UIPositionGraph_Nodes_PZ_SkillTreeUIPositionNodeInterface_h_20_RPC_WRAPPERS
#define Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTreeEditor_Private_SkillTreeEditor_UIPositionGraph_Nodes_PZ_SkillTreeUIPositionNodeInterface_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTreeEditor_Private_SkillTreeEditor_UIPositionGraph_Nodes_PZ_SkillTreeUIPositionNodeInterface_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PZ_SKILLTREEEDITOR_API UPZ_SkillTreeUIPositionNodeInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPZ_SkillTreeUIPositionNodeInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PZ_SKILLTREEEDITOR_API, UPZ_SkillTreeUIPositionNodeInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPZ_SkillTreeUIPositionNodeInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PZ_SKILLTREEEDITOR_API UPZ_SkillTreeUIPositionNodeInterface(UPZ_SkillTreeUIPositionNodeInterface&&); \
	PZ_SKILLTREEEDITOR_API UPZ_SkillTreeUIPositionNodeInterface(const UPZ_SkillTreeUIPositionNodeInterface&); \
public:


#define Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTreeEditor_Private_SkillTreeEditor_UIPositionGraph_Nodes_PZ_SkillTreeUIPositionNodeInterface_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PZ_SKILLTREEEDITOR_API UPZ_SkillTreeUIPositionNodeInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PZ_SKILLTREEEDITOR_API UPZ_SkillTreeUIPositionNodeInterface(UPZ_SkillTreeUIPositionNodeInterface&&); \
	PZ_SKILLTREEEDITOR_API UPZ_SkillTreeUIPositionNodeInterface(const UPZ_SkillTreeUIPositionNodeInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PZ_SKILLTREEEDITOR_API, UPZ_SkillTreeUIPositionNodeInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPZ_SkillTreeUIPositionNodeInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPZ_SkillTreeUIPositionNodeInterface)


#define Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTreeEditor_Private_SkillTreeEditor_UIPositionGraph_Nodes_PZ_SkillTreeUIPositionNodeInterface_h_20_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPZ_SkillTreeUIPositionNodeInterface(); \
	friend struct Z_Construct_UClass_UPZ_SkillTreeUIPositionNodeInterface_Statics; \
public: \
	DECLARE_CLASS(UPZ_SkillTreeUIPositionNodeInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/PZ_SkillTreeEditor"), PZ_SKILLTREEEDITOR_API) \
	DECLARE_SERIALIZER(UPZ_SkillTreeUIPositionNodeInterface)


#define Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTreeEditor_Private_SkillTreeEditor_UIPositionGraph_Nodes_PZ_SkillTreeUIPositionNodeInterface_h_20_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTreeEditor_Private_SkillTreeEditor_UIPositionGraph_Nodes_PZ_SkillTreeUIPositionNodeInterface_h_20_GENERATED_UINTERFACE_BODY() \
	Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTreeEditor_Private_SkillTreeEditor_UIPositionGraph_Nodes_PZ_SkillTreeUIPositionNodeInterface_h_20_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTreeEditor_Private_SkillTreeEditor_UIPositionGraph_Nodes_PZ_SkillTreeUIPositionNodeInterface_h_20_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTreeEditor_Private_SkillTreeEditor_UIPositionGraph_Nodes_PZ_SkillTreeUIPositionNodeInterface_h_20_GENERATED_UINTERFACE_BODY() \
	Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTreeEditor_Private_SkillTreeEditor_UIPositionGraph_Nodes_PZ_SkillTreeUIPositionNodeInterface_h_20_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTreeEditor_Private_SkillTreeEditor_UIPositionGraph_Nodes_PZ_SkillTreeUIPositionNodeInterface_h_20_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPZ_SkillTreeUIPositionNodeInterface() {} \
public: \
	typedef UPZ_SkillTreeUIPositionNodeInterface UClassType; \
	typedef IPZ_SkillTreeUIPositionNodeInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTreeEditor_Private_SkillTreeEditor_UIPositionGraph_Nodes_PZ_SkillTreeUIPositionNodeInterface_h_20_INCLASS_IINTERFACE \
protected: \
	virtual ~IPZ_SkillTreeUIPositionNodeInterface() {} \
public: \
	typedef UPZ_SkillTreeUIPositionNodeInterface UClassType; \
	typedef IPZ_SkillTreeUIPositionNodeInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTreeEditor_Private_SkillTreeEditor_UIPositionGraph_Nodes_PZ_SkillTreeUIPositionNodeInterface_h_17_PROLOG
#define Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTreeEditor_Private_SkillTreeEditor_UIPositionGraph_Nodes_PZ_SkillTreeUIPositionNodeInterface_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTreeEditor_Private_SkillTreeEditor_UIPositionGraph_Nodes_PZ_SkillTreeUIPositionNodeInterface_h_20_SPARSE_DATA \
	Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTreeEditor_Private_SkillTreeEditor_UIPositionGraph_Nodes_PZ_SkillTreeUIPositionNodeInterface_h_20_RPC_WRAPPERS \
	Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTreeEditor_Private_SkillTreeEditor_UIPositionGraph_Nodes_PZ_SkillTreeUIPositionNodeInterface_h_20_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTreeEditor_Private_SkillTreeEditor_UIPositionGraph_Nodes_PZ_SkillTreeUIPositionNodeInterface_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTreeEditor_Private_SkillTreeEditor_UIPositionGraph_Nodes_PZ_SkillTreeUIPositionNodeInterface_h_20_SPARSE_DATA \
	Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTreeEditor_Private_SkillTreeEditor_UIPositionGraph_Nodes_PZ_SkillTreeUIPositionNodeInterface_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTreeEditor_Private_SkillTreeEditor_UIPositionGraph_Nodes_PZ_SkillTreeUIPositionNodeInterface_h_20_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PZ_SKILLTREEEDITOR_API UClass* StaticClass<class UPZ_SkillTreeUIPositionNodeInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTreeEditor_Private_SkillTreeEditor_UIPositionGraph_Nodes_PZ_SkillTreeUIPositionNodeInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
