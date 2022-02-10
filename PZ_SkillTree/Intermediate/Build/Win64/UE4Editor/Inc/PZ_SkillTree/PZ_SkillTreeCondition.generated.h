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
#ifdef PZ_SKILLTREE_PZ_SkillTreeCondition_generated_h
#error "PZ_SkillTreeCondition.generated.h already included, missing '#pragma once' in PZ_SkillTreeCondition.h"
#endif
#define PZ_SKILLTREE_PZ_SkillTreeCondition_generated_h

#define Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_SkillTreeEvent_PZ_SkillTreeCondition_h_15_SPARSE_DATA
#define Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_SkillTreeEvent_PZ_SkillTreeCondition_h_15_RPC_WRAPPERS \
	virtual bool Execute_Implementation(UPZ_SkillTreeContext* SkillTreeContext, AActor* SkillTreePlayer); \
 \
	DECLARE_FUNCTION(execExecute);


#define Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_SkillTreeEvent_PZ_SkillTreeCondition_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execExecute);


#define Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_SkillTreeEvent_PZ_SkillTreeCondition_h_15_EVENT_PARMS \
	struct PZ_SkillTreeCondition_eventExecute_Parms \
	{ \
		UPZ_SkillTreeContext* SkillTreeContext; \
		AActor* SkillTreePlayer; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		PZ_SkillTreeCondition_eventExecute_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_SkillTreeEvent_PZ_SkillTreeCondition_h_15_CALLBACK_WRAPPERS
#define Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_SkillTreeEvent_PZ_SkillTreeCondition_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPZ_SkillTreeCondition(); \
	friend struct Z_Construct_UClass_UPZ_SkillTreeCondition_Statics; \
public: \
	DECLARE_CLASS(UPZ_SkillTreeCondition, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PZ_SkillTree"), NO_API) \
	DECLARE_SERIALIZER(UPZ_SkillTreeCondition)


#define Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_SkillTreeEvent_PZ_SkillTreeCondition_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUPZ_SkillTreeCondition(); \
	friend struct Z_Construct_UClass_UPZ_SkillTreeCondition_Statics; \
public: \
	DECLARE_CLASS(UPZ_SkillTreeCondition, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PZ_SkillTree"), NO_API) \
	DECLARE_SERIALIZER(UPZ_SkillTreeCondition)


#define Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_SkillTreeEvent_PZ_SkillTreeCondition_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPZ_SkillTreeCondition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPZ_SkillTreeCondition) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPZ_SkillTreeCondition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPZ_SkillTreeCondition); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPZ_SkillTreeCondition(UPZ_SkillTreeCondition&&); \
	NO_API UPZ_SkillTreeCondition(const UPZ_SkillTreeCondition&); \
public:


#define Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_SkillTreeEvent_PZ_SkillTreeCondition_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPZ_SkillTreeCondition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPZ_SkillTreeCondition(UPZ_SkillTreeCondition&&); \
	NO_API UPZ_SkillTreeCondition(const UPZ_SkillTreeCondition&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPZ_SkillTreeCondition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPZ_SkillTreeCondition); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPZ_SkillTreeCondition)


#define Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_SkillTreeEvent_PZ_SkillTreeCondition_h_15_PRIVATE_PROPERTY_OFFSET
#define Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_SkillTreeEvent_PZ_SkillTreeCondition_h_12_PROLOG \
	Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_SkillTreeEvent_PZ_SkillTreeCondition_h_15_EVENT_PARMS


#define Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_SkillTreeEvent_PZ_SkillTreeCondition_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_SkillTreeEvent_PZ_SkillTreeCondition_h_15_PRIVATE_PROPERTY_OFFSET \
	Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_SkillTreeEvent_PZ_SkillTreeCondition_h_15_SPARSE_DATA \
	Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_SkillTreeEvent_PZ_SkillTreeCondition_h_15_RPC_WRAPPERS \
	Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_SkillTreeEvent_PZ_SkillTreeCondition_h_15_CALLBACK_WRAPPERS \
	Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_SkillTreeEvent_PZ_SkillTreeCondition_h_15_INCLASS \
	Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_SkillTreeEvent_PZ_SkillTreeCondition_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_SkillTreeEvent_PZ_SkillTreeCondition_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_SkillTreeEvent_PZ_SkillTreeCondition_h_15_PRIVATE_PROPERTY_OFFSET \
	Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_SkillTreeEvent_PZ_SkillTreeCondition_h_15_SPARSE_DATA \
	Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_SkillTreeEvent_PZ_SkillTreeCondition_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_SkillTreeEvent_PZ_SkillTreeCondition_h_15_CALLBACK_WRAPPERS \
	Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_SkillTreeEvent_PZ_SkillTreeCondition_h_15_INCLASS_NO_PURE_DECLS \
	Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_SkillTreeEvent_PZ_SkillTreeCondition_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PZ_SKILLTREE_API UClass* StaticClass<class UPZ_SkillTreeCondition>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_SkillTreeEvent_PZ_SkillTreeCondition_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
