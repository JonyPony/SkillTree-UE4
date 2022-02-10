// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PZ_SkillTree/Public/Nodes/ConnectionNode/PZ_SkillTreeRConnectionNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePZ_SkillTreeRConnectionNode() {}
// Cross Module References
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTreeRConnectionNode_NoRegister();
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTreeRConnectionNode();
	PZ_SKILLTREE_API UClass* Z_Construct_UClass_UPZ_SkillTreeRBaseNode();
	UPackage* Z_Construct_UPackage__Script_PZ_SkillTree();
	PZ_SKILLTREE_API UEnum* Z_Construct_UEnum_PZ_SkillTree_ESkillTreeConnectionType();
// End Cross Module References
	void UPZ_SkillTreeRConnectionNode::StaticRegisterNativesUPZ_SkillTreeRConnectionNode()
	{
	}
	UClass* Z_Construct_UClass_UPZ_SkillTreeRConnectionNode_NoRegister()
	{
		return UPZ_SkillTreeRConnectionNode::StaticClass();
	}
	struct Z_Construct_UClass_UPZ_SkillTreeRConnectionNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ConnectionName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ConnectionType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ConnectionType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPZ_SkillTreeRConnectionNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPZ_SkillTreeRBaseNode,
		(UObject* (*)())Z_Construct_UPackage__Script_PZ_SkillTree,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTreeRConnectionNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Nodes/ConnectionNode/PZ_SkillTreeRConnectionNode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Nodes/ConnectionNode/PZ_SkillTreeRConnectionNode.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTreeRConnectionNode_Statics::NewProp_ConnectionName_MetaData[] = {
		{ "Category", "Connection Settings" },
		{ "ModuleRelativePath", "Public/Nodes/ConnectionNode/PZ_SkillTreeRConnectionNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPZ_SkillTreeRConnectionNode_Statics::NewProp_ConnectionName = { "ConnectionName", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPZ_SkillTreeRConnectionNode, ConnectionName), METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTreeRConnectionNode_Statics::NewProp_ConnectionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeRConnectionNode_Statics::NewProp_ConnectionName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPZ_SkillTreeRConnectionNode_Statics::NewProp_ConnectionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPZ_SkillTreeRConnectionNode_Statics::NewProp_ConnectionType_MetaData[] = {
		{ "Category", "Connection Settings" },
		{ "ModuleRelativePath", "Public/Nodes/ConnectionNode/PZ_SkillTreeRConnectionNode.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPZ_SkillTreeRConnectionNode_Statics::NewProp_ConnectionType = { "ConnectionType", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPZ_SkillTreeRConnectionNode, ConnectionType), Z_Construct_UEnum_PZ_SkillTree_ESkillTreeConnectionType, METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTreeRConnectionNode_Statics::NewProp_ConnectionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeRConnectionNode_Statics::NewProp_ConnectionType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPZ_SkillTreeRConnectionNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPZ_SkillTreeRConnectionNode_Statics::NewProp_ConnectionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPZ_SkillTreeRConnectionNode_Statics::NewProp_ConnectionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPZ_SkillTreeRConnectionNode_Statics::NewProp_ConnectionType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPZ_SkillTreeRConnectionNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPZ_SkillTreeRConnectionNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPZ_SkillTreeRConnectionNode_Statics::ClassParams = {
		&UPZ_SkillTreeRConnectionNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPZ_SkillTreeRConnectionNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeRConnectionNode_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPZ_SkillTreeRConnectionNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPZ_SkillTreeRConnectionNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPZ_SkillTreeRConnectionNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPZ_SkillTreeRConnectionNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPZ_SkillTreeRConnectionNode, 1956896010);
	template<> PZ_SKILLTREE_API UClass* StaticClass<UPZ_SkillTreeRConnectionNode>()
	{
		return UPZ_SkillTreeRConnectionNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPZ_SkillTreeRConnectionNode(Z_Construct_UClass_UPZ_SkillTreeRConnectionNode, &UPZ_SkillTreeRConnectionNode::StaticClass, TEXT("/Script/PZ_SkillTree"), TEXT("UPZ_SkillTreeRConnectionNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPZ_SkillTreeRConnectionNode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
