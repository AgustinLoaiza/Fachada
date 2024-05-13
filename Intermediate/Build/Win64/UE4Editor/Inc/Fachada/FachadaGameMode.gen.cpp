// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Fachada/FachadaGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFachadaGameMode() {}
// Cross Module References
	FACHADA_API UClass* Z_Construct_UClass_AFachadaGameMode_NoRegister();
	FACHADA_API UClass* Z_Construct_UClass_AFachadaGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Fachada();
// End Cross Module References
	void AFachadaGameMode::StaticRegisterNativesAFachadaGameMode()
	{
	}
	UClass* Z_Construct_UClass_AFachadaGameMode_NoRegister()
	{
		return AFachadaGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AFachadaGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFachadaGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Fachada,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFachadaGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FachadaGameMode.h" },
		{ "ModuleRelativePath", "FachadaGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFachadaGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFachadaGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFachadaGameMode_Statics::ClassParams = {
		&AFachadaGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFachadaGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFachadaGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFachadaGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFachadaGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFachadaGameMode, 4271760305);
	template<> FACHADA_API UClass* StaticClass<AFachadaGameMode>()
	{
		return AFachadaGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFachadaGameMode(Z_Construct_UClass_AFachadaGameMode, &AFachadaGameMode::StaticClass, TEXT("/Script/Fachada"), TEXT("AFachadaGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFachadaGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
