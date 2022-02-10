// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PZ_SKILLTREEEDITOR_PZ_SkillTreeNodeInterface_generated_h
#error "PZ_SkillTreeNodeInterface.generated.h already included, missing '#pragma once' in PZ_SkillTreeNodeInterface.h"
#endif
#define PZ_SKILLTREEEDITOR_PZ_SkillTreeNodeInterface_generated_h

#define Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTreeEditor_Private_SkillTreeEditor_StructureGraph_Nodes_PZ_SkillTreeNodeInterface_h_20_SPARSE_DATA
#define Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTreeEditor_Private_SkillTreeEditor_StructureGraph_Nodes_PZ_SkillTreeNodeInterface_h_20_RPC_WRAPPERS
#define Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTreeEditor_Private_SkillTreeEditor_StructureGraph_Nodes_PZ_SkillTreeNodeInterface_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTreeEditor_Private_SkillTreeEditor_StructureGraph_Nodes_PZ_SkillTreeNodeInterface_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PZ_SKILLTREEEDITOR_API UPZ_SkillTreeNodeInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPZ_SkillTreeNodeInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PZ_SKILLTREEEDITOR_API, UPZ_SkillTreeNodeInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPZ_SkillTreeNodeInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PZ_SKILLTREEEDITOR_API UPZ_SkillTreeNodeInterface(UPZ_SkillTreeNodeInterface&&); \
	PZ_SKILLTREEEDITOR_API UPZ_SkillTreeNodeInterface(const UPZ_SkillTreeNodeInterface&); \
public:


#define Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTreeEditor_Private_SkillTreeEditor_StructureGraph_Nodes_PZ_SkillTreeNodeInterface_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PZ_SKILLTREEEDITOR_API UPZ_SkillTreeNodeInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PZ_SKILLTREEEDITOR_API UPZ_SkillTreeNodeInterface(UPZ_SkillTreeNodeInterface&&); \
	PZ_SKILLTREEEDITOR_API UPZ_SkillTreeNodeInterface(const UPZ_SkillTreeNodeInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PZ_SKILLTREEEDITOR_API, UPZ_SkillTreeNodeInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPZ_SkillTreeNodeInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPZ_SkillTreeNodeInterface)


#define Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTreeEditor_Private_SkillTreeEditor_StructureGraph_Nodes_PZ_SkillTreeNodeInterface_h_20_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPZ_SkillTreeNodeInterface(); \
	friend struct Z_Construct_UClass_UPZ_SkillTreeNodeInterface_Statics; \
public: \
	DECLARE_CLASS(UPZ_SkillTreeNodeInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/PZ_SkillTreeEditor"), PZ_SKILLTREEEDITOR_API) \
	DECLARE_SERIALIZER(UPZ_SkillTreeNodeInterface)


#define Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTreeEditor_Private_SkillTreeEditor_StructureGraph_Nodes_PZ_SkillTreeNodeInterface_h_20_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTreeEditor_Private_SkillTreeEditor_StructureGraph_Nodes_PZ_SkillTreeNodeInterface_h_20_GENERATED_UINTERFACE_BODY() \
	Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTreeEditor_Private_SkillTreeEditor_StructureGraph_Nodes_PZ_SkillTreeNodeInterface_h_20_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTreeEditor_Private_SkillTreeEditor_StructureGraph_Nodes_PZ_SkillTreeNodeInterface_h_20_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTreeEditor_Private_SkillTreeEditor_StructureGraph_Nodes_PZ_SkillTreeNodeInterface_h_20_GENERATED_UINTERFACE_BODY() \
	Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTreeEditor_Private_SkillTreeEditor_StructureGraph_Nodes_PZ_SkillTreeNodeInterface_h_20_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTreeEditor_Private_SkillTreeEditor_StructureGraph_Nodes_PZ_SkillTreeNodeInterface_h_20_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPZ_SkillTreeNodeInterface() {} \
public: \
	typedef UPZ_SkillTreeNodeInterface UClassType; \
	typedef IPZ_SkillTreeNodeInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTreeEditor_Private_SkillTreeEditor_StructureGraph_Nodes_PZ_SkillTreeNodeInterface_h_20_INCLASS_IINTERFACE \
protected: \
	virtual ~IPZ_SkillTreeNodeInterface() {} \
public: \
	typedef UPZ_SkillTreeNodeInterface UClassType; \
	typedef IPZ_SkillTreeNodeInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTreeEditor_Private_SkillTreeEditor_StructureGraph_Nodes_PZ_SkillTreeNodeInterface_h_17_PROLOG
#define Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTreeEditor_Private_SkillTreeEditor_StructureGraph_Nodes_PZ_SkillTreeNodeInterface_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTreeEditor_Private_SkillTreeEditor_StructureGraph_Nodes_PZ_SkillTreeNodeInterface_h_20_SPARSE_DATA \
	Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTreeEditor_Private_SkillTreeEditor_StructureGraph_Nodes_PZ_SkillTreeNodeInterface_h_20_RPC_WRAPPERS \
	Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTreeEditor_Private_SkillTreeEditor_StructureGraph_Nodes_PZ_SkillTreeNodeInterface_h_20_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTreeEditor_Private_SkillTreeEditor_StructureGraph_Nodes_PZ_SkillTreeNodeInterface_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTreeEditor_Private_SkillTreeEditor_StructureGraph_Nodes_PZ_SkillTreeNodeInterface_h_20_SPARSE_DATA \
	Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTreeEditor_Private_SkillTreeEditor_StructureGraph_Nodes_PZ_SkillTreeNodeInterface_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTreeEditor_Private_SkillTreeEditor_StructureGraph_Nodes_PZ_SkillTreeNodeInterface_h_20_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PZ_SKILLTREEEDITOR_API UClass* StaticClass<class UPZ_SkillTreeNodeInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTreeEditor_Private_SkillTreeEditor_StructureGraph_Nodes_PZ_SkillTreeNodeInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
