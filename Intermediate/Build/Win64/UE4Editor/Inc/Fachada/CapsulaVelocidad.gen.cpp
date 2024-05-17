// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Fachada/CapsulaVelocidad.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCapsulaVelocidad() {}
// Cross Module References
	FACHADA_API UClass* Z_Construct_UClass_ACapsulaVelocidad_NoRegister();
	FACHADA_API UClass* Z_Construct_UClass_ACapsulaVelocidad();
	FACHADA_API UClass* Z_Construct_UClass_ACapsulas();
	UPackage* Z_Construct_UPackage__Script_Fachada();
// End Cross Module References
	void ACapsulaVelocidad::StaticRegisterNativesACapsulaVelocidad()
	{
	}
	UClass* Z_Construct_UClass_ACapsulaVelocidad_NoRegister()
	{
		return ACapsulaVelocidad::StaticClass();
	}
	struct Z_Construct_UClass_ACapsulaVelocidad_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACapsulaVelocidad_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACapsulas,
		(UObject* (*)())Z_Construct_UPackage__Script_Fachada,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapsulaVelocidad_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input" },
		{ "IncludePath", "CapsulaVelocidad.h" },
		{ "ModuleRelativePath", "CapsulaVelocidad.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACapsulaVelocidad_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACapsulaVelocidad>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACapsulaVelocidad_Statics::ClassParams = {
		&ACapsulaVelocidad::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACapsulaVelocidad_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACapsulaVelocidad_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACapsulaVelocidad()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACapsulaVelocidad_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACapsulaVelocidad, 8586726);
	template<> FACHADA_API UClass* StaticClass<ACapsulaVelocidad>()
	{
		return ACapsulaVelocidad::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACapsulaVelocidad(Z_Construct_UClass_ACapsulaVelocidad, &ACapsulaVelocidad::StaticClass, TEXT("/Script/Fachada"), TEXT("ACapsulaVelocidad"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACapsulaVelocidad);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
