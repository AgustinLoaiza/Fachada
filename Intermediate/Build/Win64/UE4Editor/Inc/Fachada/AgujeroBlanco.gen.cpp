// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Fachada/AgujeroBlanco.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAgujeroBlanco() {}
// Cross Module References
	FACHADA_API UClass* Z_Construct_UClass_AAgujeroBlanco_NoRegister();
	FACHADA_API UClass* Z_Construct_UClass_AAgujeroBlanco();
	FACHADA_API UClass* Z_Construct_UClass_AFuerzaNatural();
	UPackage* Z_Construct_UPackage__Script_Fachada();
// End Cross Module References
	void AAgujeroBlanco::StaticRegisterNativesAAgujeroBlanco()
	{
	}
	UClass* Z_Construct_UClass_AAgujeroBlanco_NoRegister()
	{
		return AAgujeroBlanco::StaticClass();
	}
	struct Z_Construct_UClass_AAgujeroBlanco_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAgujeroBlanco_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFuerzaNatural,
		(UObject* (*)())Z_Construct_UPackage__Script_Fachada,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAgujeroBlanco_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AgujeroBlanco.h" },
		{ "ModuleRelativePath", "AgujeroBlanco.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAgujeroBlanco_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAgujeroBlanco>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAgujeroBlanco_Statics::ClassParams = {
		&AAgujeroBlanco::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AAgujeroBlanco_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAgujeroBlanco_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAgujeroBlanco()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAgujeroBlanco_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAgujeroBlanco, 1781169174);
	template<> FACHADA_API UClass* StaticClass<AAgujeroBlanco>()
	{
		return AAgujeroBlanco::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAgujeroBlanco(Z_Construct_UClass_AAgujeroBlanco, &AAgujeroBlanco::StaticClass, TEXT("/Script/Fachada"), TEXT("AAgujeroBlanco"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAgujeroBlanco);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
