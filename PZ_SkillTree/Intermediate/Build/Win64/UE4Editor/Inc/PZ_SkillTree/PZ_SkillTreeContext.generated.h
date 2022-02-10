// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRotator;
struct FVector;
class UObject;
struct FVector2D;
class UPZ_SkillTreeRSkillNode;
class UPZ_SkillTree_Editor;
#ifdef PZ_SKILLTREE_PZ_SkillTreeContext_generated_h
#error "PZ_SkillTreeContext.generated.h already included, missing '#pragma once' in PZ_SkillTreeContext.h"
#endif
#define PZ_SKILLTREE_PZ_SkillTreeContext_generated_h

#define Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_PZ_SkillTreeContext_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FContextNodeInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> PZ_SKILLTREE_API UScriptStruct* StaticStruct<struct FContextNodeInfo>();

#define Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_PZ_SkillTreeContext_h_29_DELEGATE \
struct _Script_PZ_SkillTree_eventOnCanBeOpenChangeBind_Parms \
{ \
	int32 SkillIndex; \
}; \
static inline void FOnCanBeOpenChangeBind_DelegateWrapper(const FMulticastScriptDelegate& OnCanBeOpenChangeBind, int32 SkillIndex) \
{ \
	_Script_PZ_SkillTree_eventOnCanBeOpenChangeBind_Parms Parms; \
	Parms.SkillIndex=SkillIndex; \
	OnCanBeOpenChangeBind.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_PZ_SkillTreeContext_h_28_DELEGATE \
struct _Script_PZ_SkillTree_eventOnLvlChangeBind_Parms \
{ \
	int32 SkillIndex; \
}; \
static inline void FOnLvlChangeBind_DelegateWrapper(const FMulticastScriptDelegate& OnLvlChangeBind, int32 SkillIndex) \
{ \
	_Script_PZ_SkillTree_eventOnLvlChangeBind_Parms Parms; \
	Parms.SkillIndex=SkillIndex; \
	OnLvlChangeBind.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_PZ_SkillTreeContext_h_27_DELEGATE \
struct _Script_PZ_SkillTree_eventOnIsOpenChangeBind_Parms \
{ \
	int32 SkillIndex; \
}; \
static inline void FOnIsOpenChangeBind_DelegateWrapper(const FMulticastScriptDelegate& OnIsOpenChangeBind, int32 SkillIndex) \
{ \
	_Script_PZ_SkillTree_eventOnIsOpenChangeBind_Parms Parms; \
	Parms.SkillIndex=SkillIndex; \
	OnIsOpenChangeBind.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_PZ_SkillTreeContext_h_94_SPARSE_DATA
#define Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_PZ_SkillTreeContext_h_94_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetValueAsRotator); \
	DECLARE_FUNCTION(execSetValueAsVector); \
	DECLARE_FUNCTION(execSetValueAsName); \
	DECLARE_FUNCTION(execSetValueAsString); \
	DECLARE_FUNCTION(execSetValueAsBool); \
	DECLARE_FUNCTION(execSetValueAsFloat); \
	DECLARE_FUNCTION(execSetValueAsInt); \
	DECLARE_FUNCTION(execSetValueAsEnum); \
	DECLARE_FUNCTION(execSetValueAsClass); \
	DECLARE_FUNCTION(execSetValueAsObject); \
	DECLARE_FUNCTION(execGetValueAsRotator); \
	DECLARE_FUNCTION(execGetValueAsVector); \
	DECLARE_FUNCTION(execGetValueAsName); \
	DECLARE_FUNCTION(execGetValueAsString); \
	DECLARE_FUNCTION(execGetValueAsBool); \
	DECLARE_FUNCTION(execGetValueAsFloat); \
	DECLARE_FUNCTION(execGetValueAsInt); \
	DECLARE_FUNCTION(execGetValueAsEnum); \
	DECLARE_FUNCTION(execGetValueAsClass); \
	DECLARE_FUNCTION(execGetValueAsObject); \
	DECLARE_FUNCTION(execGetNodeUILocationByIndex); \
	DECLARE_FUNCTION(execCanExecuteSkillNode); \
	DECLARE_FUNCTION(execExecudeEventNode); \
	DECLARE_FUNCTION(execCanExecuteEventByName); \
	DECLARE_FUNCTION(execGetImplementedSkillTree);


#define Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_PZ_SkillTreeContext_h_94_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetValueAsRotator); \
	DECLARE_FUNCTION(execSetValueAsVector); \
	DECLARE_FUNCTION(execSetValueAsName); \
	DECLARE_FUNCTION(execSetValueAsString); \
	DECLARE_FUNCTION(execSetValueAsBool); \
	DECLARE_FUNCTION(execSetValueAsFloat); \
	DECLARE_FUNCTION(execSetValueAsInt); \
	DECLARE_FUNCTION(execSetValueAsEnum); \
	DECLARE_FUNCTION(execSetValueAsClass); \
	DECLARE_FUNCTION(execSetValueAsObject); \
	DECLARE_FUNCTION(execGetValueAsRotator); \
	DECLARE_FUNCTION(execGetValueAsVector); \
	DECLARE_FUNCTION(execGetValueAsName); \
	DECLARE_FUNCTION(execGetValueAsString); \
	DECLARE_FUNCTION(execGetValueAsBool); \
	DECLARE_FUNCTION(execGetValueAsFloat); \
	DECLARE_FUNCTION(execGetValueAsInt); \
	DECLARE_FUNCTION(execGetValueAsEnum); \
	DECLARE_FUNCTION(execGetValueAsClass); \
	DECLARE_FUNCTION(execGetValueAsObject); \
	DECLARE_FUNCTION(execGetNodeUILocationByIndex); \
	DECLARE_FUNCTION(execCanExecuteSkillNode); \
	DECLARE_FUNCTION(execExecudeEventNode); \
	DECLARE_FUNCTION(execCanExecuteEventByName); \
	DECLARE_FUNCTION(execGetImplementedSkillTree);


#define Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_PZ_SkillTreeContext_h_94_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPZ_SkillTreeContext(); \
	friend struct Z_Construct_UClass_UPZ_SkillTreeContext_Statics; \
public: \
	DECLARE_CLASS(UPZ_SkillTreeContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PZ_SkillTree"), NO_API) \
	DECLARE_SERIALIZER(UPZ_SkillTreeContext)


#define Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_PZ_SkillTreeContext_h_94_INCLASS \
private: \
	static void StaticRegisterNativesUPZ_SkillTreeContext(); \
	friend struct Z_Construct_UClass_UPZ_SkillTreeContext_Statics; \
public: \
	DECLARE_CLASS(UPZ_SkillTreeContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PZ_SkillTree"), NO_API) \
	DECLARE_SERIALIZER(UPZ_SkillTreeContext)


#define Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_PZ_SkillTreeContext_h_94_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPZ_SkillTreeContext(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPZ_SkillTreeContext) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPZ_SkillTreeContext); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPZ_SkillTreeContext); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPZ_SkillTreeContext(UPZ_SkillTreeContext&&); \
	NO_API UPZ_SkillTreeContext(const UPZ_SkillTreeContext&); \
public:


#define Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_PZ_SkillTreeContext_h_94_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPZ_SkillTreeContext(UPZ_SkillTreeContext&&); \
	NO_API UPZ_SkillTreeContext(const UPZ_SkillTreeContext&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPZ_SkillTreeContext); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPZ_SkillTreeContext); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPZ_SkillTreeContext)


#define Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_PZ_SkillTreeContext_h_94_PRIVATE_PROPERTY_OFFSET
#define Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_PZ_SkillTreeContext_h_91_PROLOG
#define Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_PZ_SkillTreeContext_h_94_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_PZ_SkillTreeContext_h_94_PRIVATE_PROPERTY_OFFSET \
	Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_PZ_SkillTreeContext_h_94_SPARSE_DATA \
	Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_PZ_SkillTreeContext_h_94_RPC_WRAPPERS \
	Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_PZ_SkillTreeContext_h_94_INCLASS \
	Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_PZ_SkillTreeContext_h_94_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_PZ_SkillTreeContext_h_94_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_PZ_SkillTreeContext_h_94_PRIVATE_PROPERTY_OFFSET \
	Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_PZ_SkillTreeContext_h_94_SPARSE_DATA \
	Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_PZ_SkillTreeContext_h_94_RPC_WRAPPERS_NO_PURE_DECLS \
	Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_PZ_SkillTreeContext_h_94_INCLASS_NO_PURE_DECLS \
	Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_PZ_SkillTreeContext_h_94_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PZ_SKILLTREE_API UClass* StaticClass<class UPZ_SkillTreeContext>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Atrophia_Plugins_PZ_SkillTree_Source_PZ_SkillTree_Public_PZ_SkillTreeContext_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
