// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Fachada/FuerzaNatural.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFuerzaNatural() {}
// Cross Module References
	FACHADA_API UClass* Z_Construct_UClass_AFuerzaNatural_NoRegister();
	FACHADA_API UClass* Z_Construct_UClass_AFuerzaNatural();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Fachada();
// End Cross Module References
	void AFuerzaNatural::StaticRegisterNativesAFuerzaNatural()
	{
	}
	UClass* Z_Construct_UClass_AFuerzaNatural_NoRegister()
	{
		return AFuerzaNatural::StaticClass();
	}
	struct Z_Construct_UClass_AFuerzaNatural_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFuerzaNatural_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Fachada,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFuerzaNatural_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FuerzaNatural.h" },
		{ "ModuleRelativePath", "FuerzaNatural.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFuerzaNatural_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFuerzaNatural>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFuerzaNatural_Statics::ClassParams = {
		&AFuerzaNatural::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFuerzaNatural_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFuerzaNatural_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFuerzaNatural()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFuerzaNatural_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFuerzaNatural, 2168969436);
	template<> FACHADA_API UClass* StaticClass<AFuerzaNatural>()
	{
		return AFuerzaNatural::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFuerzaNatural(Z_Construct_UClass_AFuerzaNatural, &AFuerzaNatural::StaticClass, TEXT("/Script/Fachada"), TEXT("AFuerzaNatural"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFuerzaNatural);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
