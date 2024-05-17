// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Fachada/ComponenteCapsulas.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComponenteCapsulas() {}
// Cross Module References
	FACHADA_API UClass* Z_Construct_UClass_UComponenteCapsulas_NoRegister();
	FACHADA_API UClass* Z_Construct_UClass_UComponenteCapsulas();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Fachada();
// End Cross Module References
	void UComponenteCapsulas::StaticRegisterNativesUComponenteCapsulas()
	{
	}
	UClass* Z_Construct_UClass_UComponenteCapsulas_NoRegister()
	{
		return UComponenteCapsulas::StaticClass();
	}
	struct Z_Construct_UClass_UComponenteCapsulas_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComponenteCapsulas_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Fachada,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComponenteCapsulas_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ComponenteCapsulas.h" },
		{ "ModuleRelativePath", "ComponenteCapsulas.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComponenteCapsulas_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComponenteCapsulas>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UComponenteCapsulas_Statics::ClassParams = {
		&UComponenteCapsulas::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UComponenteCapsulas_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UComponenteCapsulas_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComponenteCapsulas()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UComponenteCapsulas_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UComponenteCapsulas, 1173063795);
	template<> FACHADA_API UClass* StaticClass<UComponenteCapsulas>()
	{
		return UComponenteCapsulas::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UComponenteCapsulas(Z_Construct_UClass_UComponenteCapsulas, &UComponenteCapsulas::StaticClass, TEXT("/Script/Fachada"), TEXT("UComponenteCapsulas"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComponenteCapsulas);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
