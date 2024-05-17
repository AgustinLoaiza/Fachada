// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Fachada/NaveFugaz.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveFugaz() {}
// Cross Module References
	FACHADA_API UClass* Z_Construct_UClass_ANaveFugaz_NoRegister();
	FACHADA_API UClass* Z_Construct_UClass_ANaveFugaz();
	FACHADA_API UClass* Z_Construct_UClass_ANaveEnemiga();
	UPackage* Z_Construct_UPackage__Script_Fachada();
// End Cross Module References
	void ANaveFugaz::StaticRegisterNativesANaveFugaz()
	{
	}
	UClass* Z_Construct_UClass_ANaveFugaz_NoRegister()
	{
		return ANaveFugaz::StaticClass();
	}
	struct Z_Construct_UClass_ANaveFugaz_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveFugaz_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemiga,
		(UObject* (*)())Z_Construct_UPackage__Script_Fachada,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveFugaz_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveFugaz.h" },
		{ "ModuleRelativePath", "NaveFugaz.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveFugaz_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveFugaz>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveFugaz_Statics::ClassParams = {
		&ANaveFugaz::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANaveFugaz_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveFugaz_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveFugaz()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveFugaz_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveFugaz, 208185604);
	template<> FACHADA_API UClass* StaticClass<ANaveFugaz>()
	{
		return ANaveFugaz::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveFugaz(Z_Construct_UClass_ANaveFugaz, &ANaveFugaz::StaticClass, TEXT("/Script/Fachada"), TEXT("ANaveFugaz"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveFugaz);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
