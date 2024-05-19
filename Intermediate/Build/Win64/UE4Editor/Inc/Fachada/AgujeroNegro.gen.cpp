// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Fachada/AgujeroNegro.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAgujeroNegro() {}
// Cross Module References
	FACHADA_API UClass* Z_Construct_UClass_AAgujeroNegro_NoRegister();
	FACHADA_API UClass* Z_Construct_UClass_AAgujeroNegro();
	FACHADA_API UClass* Z_Construct_UClass_AFuerzaNatural();
	UPackage* Z_Construct_UPackage__Script_Fachada();
// End Cross Module References
	void AAgujeroNegro::StaticRegisterNativesAAgujeroNegro()
	{
	}
	UClass* Z_Construct_UClass_AAgujeroNegro_NoRegister()
	{
		return AAgujeroNegro::StaticClass();
	}
	struct Z_Construct_UClass_AAgujeroNegro_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAgujeroNegro_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFuerzaNatural,
		(UObject* (*)())Z_Construct_UPackage__Script_Fachada,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAgujeroNegro_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AgujeroNegro.h" },
		{ "ModuleRelativePath", "AgujeroNegro.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAgujeroNegro_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAgujeroNegro>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAgujeroNegro_Statics::ClassParams = {
		&AAgujeroNegro::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AAgujeroNegro_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAgujeroNegro_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAgujeroNegro()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAgujeroNegro_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAgujeroNegro, 4272134091);
	template<> FACHADA_API UClass* StaticClass<AAgujeroNegro>()
	{
		return AAgujeroNegro::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAgujeroNegro(Z_Construct_UClass_AAgujeroNegro, &AAgujeroNegro::StaticClass, TEXT("/Script/Fachada"), TEXT("AAgujeroNegro"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAgujeroNegro);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
