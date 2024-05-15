// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Fachada/AccionesFacade.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccionesFacade() {}
// Cross Module References
	FACHADA_API UClass* Z_Construct_UClass_AAccionesFacade_NoRegister();
	FACHADA_API UClass* Z_Construct_UClass_AAccionesFacade();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Fachada();
// End Cross Module References
	void AAccionesFacade::StaticRegisterNativesAAccionesFacade()
	{
	}
	UClass* Z_Construct_UClass_AAccionesFacade_NoRegister()
	{
		return AAccionesFacade::StaticClass();
	}
	struct Z_Construct_UClass_AAccionesFacade_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAccionesFacade_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Fachada,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAccionesFacade_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AccionesFacade.h" },
		{ "ModuleRelativePath", "AccionesFacade.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAccionesFacade_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAccionesFacade>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAccionesFacade_Statics::ClassParams = {
		&AAccionesFacade::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAccionesFacade_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAccionesFacade_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAccionesFacade()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAccionesFacade_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAccionesFacade, 2363112294);
	template<> FACHADA_API UClass* StaticClass<AAccionesFacade>()
	{
		return AAccionesFacade::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAccionesFacade(Z_Construct_UClass_AAccionesFacade, &AAccionesFacade::StaticClass, TEXT("/Script/Fachada"), TEXT("AAccionesFacade"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAccionesFacade);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
