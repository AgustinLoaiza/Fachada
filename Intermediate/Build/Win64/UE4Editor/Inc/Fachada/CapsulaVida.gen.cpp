// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Fachada/CapsulaVida.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCapsulaVida() {}
// Cross Module References
	FACHADA_API UClass* Z_Construct_UClass_ACapsulaVida_NoRegister();
	FACHADA_API UClass* Z_Construct_UClass_ACapsulaVida();
	FACHADA_API UClass* Z_Construct_UClass_ACapsulas();
	UPackage* Z_Construct_UPackage__Script_Fachada();
// End Cross Module References
	void ACapsulaVida::StaticRegisterNativesACapsulaVida()
	{
	}
	UClass* Z_Construct_UClass_ACapsulaVida_NoRegister()
	{
		return ACapsulaVida::StaticClass();
	}
	struct Z_Construct_UClass_ACapsulaVida_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACapsulaVida_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACapsulas,
		(UObject* (*)())Z_Construct_UPackage__Script_Fachada,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapsulaVida_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input" },
		{ "IncludePath", "CapsulaVida.h" },
		{ "ModuleRelativePath", "CapsulaVida.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACapsulaVida_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACapsulaVida>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACapsulaVida_Statics::ClassParams = {
		&ACapsulaVida::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACapsulaVida_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACapsulaVida_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACapsulaVida()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACapsulaVida_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACapsulaVida, 85027933);
	template<> FACHADA_API UClass* StaticClass<ACapsulaVida>()
	{
		return ACapsulaVida::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACapsulaVida(Z_Construct_UClass_ACapsulaVida, &ACapsulaVida::StaticClass, TEXT("/Script/Fachada"), TEXT("ACapsulaVida"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACapsulaVida);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
