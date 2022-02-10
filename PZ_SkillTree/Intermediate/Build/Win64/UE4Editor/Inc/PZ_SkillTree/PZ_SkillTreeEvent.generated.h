// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPZ_SkillTreeContext;
class AActor;
#ifdef PZ_SKILLTREE_PZ_SkillTreeEvent_generated_h
#error "PZ_SkillTreeEvent.generated.h already included, missing '#pragma once' in PZ_SkillTreeEvent.h"
#endif
#define PZ_SKILLTREE_PZ_SkillTreeEvent_generated_h

#define Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_SkillTreeEvent_PZ_SkillTreeEvent_h_17_SPARSE_DATA
#define Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_SkillTreeEvent_PZ_SkillTreeEvent_h_17_RPC_WRAPPERS \
	virtual void Execute_Implementation(UPZ_SkillTreeContext* SkillTreeContext, AActor* SkillTreePlayer); \
 \
	DECLARE_FUNCTION(execExecute);


#define Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_SkillTreeEvent_PZ_SkillTreeEvent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execExecute);


#define Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_SkillTreeEvent_PZ_SkillTreeEvent_h_17_EVENT_PARMS \
	struct PZ_SkillTreeEvent_eventExecute_Parms \
	{ \
		UPZ_SkillTreeContext* SkillTreeContext; \
		AActor* SkillTreePlayer; \
	};


#define Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_SkillTreeEvent_PZ_SkillTreeEvent_h_17_CALLBACK_WRAPPERS
#define Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_SkillTreeEvent_PZ_SkillTreeEvent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPZ_SkillTreeEvent(); \
	friend struct Z_Construct_UClass_UPZ_SkillTreeEvent_Statics; \
public: \
	DECLARE_CLASS(UPZ_SkillTreeEvent, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PZ_SkillTree"), NO_API) \
	DECLARE_SERIALIZER(UPZ_SkillTreeEvent)


#define Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_SkillTreeEvent_PZ_SkillTreeEvent_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUPZ_SkillTreeEvent(); \
	friend struct Z_Construct_UClass_UPZ_SkillTreeEvent_Statics; \
public: \
	DECLARE_CLASS(UPZ_SkillTreeEvent, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PZ_SkillTree"), NO_API) \
	DECLARE_SERIALIZER(UPZ_SkillTreeEvent)


#define Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_SkillTreeEvent_PZ_SkillTreeEvent_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPZ_SkillTreeEvent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPZ_SkillTreeEvent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPZ_SkillTreeEvent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPZ_SkillTreeEvent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPZ_SkillTreeEvent(UPZ_SkillTreeEvent&&); \
	NO_API UPZ_SkillTreeEvent(const UPZ_SkillTreeEvent&); \
public:


#define Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_SkillTreeEvent_PZ_SkillTreeEvent_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPZ_SkillTreeEvent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPZ_SkillTreeEvent(UPZ_SkillTreeEvent&&); \
	NO_API UPZ_SkillTreeEvent(const UPZ_SkillTreeEvent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPZ_SkillTreeEvent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPZ_SkillTreeEvent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPZ_SkillTreeEvent)


#define Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_SkillTreeEvent_PZ_SkillTreeEvent_h_17_PRIVATE_PROPERTY_OFFSET
#define Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_SkillTreeEvent_PZ_SkillTreeEvent_h_14_PROLOG \
	Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_SkillTreeEvent_PZ_SkillTreeEvent_h_17_EVENT_PARMS


#define Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_SkillTreeEvent_PZ_SkillTreeEvent_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_SkillTreeEvent_PZ_SkillTreeEvent_h_17_PRIVATE_PROPERTY_OFFSET \
	Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_SkillTreeEvent_PZ_SkillTreeEvent_h_17_SPARSE_DATA \
	Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_SkillTreeEvent_PZ_SkillTreeEvent_h_17_RPC_WRAPPERS \
	Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_SkillTreeEvent_PZ_SkillTreeEvent_h_17_CALLBACK_WRAPPERS \
	Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_SkillTreeEvent_PZ_SkillTreeEvent_h_17_INCLASS \
	Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_SkillTreeEvent_PZ_SkillTreeEvent_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_SkillTreeEvent_PZ_SkillTreeEvent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_SkillTreeEvent_PZ_SkillTreeEvent_h_17_PRIVATE_PROPERTY_OFFSET \
	Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_SkillTreeEvent_PZ_SkillTreeEvent_h_17_SPARSE_DATA \
	Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_SkillTreeEvent_PZ_SkillTreeEvent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_SkillTreeEvent_PZ_SkillTreeEvent_h_17_CALLBACK_WRAPPERS \
	Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_SkillTreeEvent_PZ_SkillTreeEvent_h_17_INCLASS_NO_PURE_DECLS \
	Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_SkillTreeEvent_PZ_SkillTreeEvent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PZ_SKILLTREE_API UClass* StaticClass<class UPZ_SkillTreeEvent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_SkillTreeEvent_PZ_SkillTreeEvent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
