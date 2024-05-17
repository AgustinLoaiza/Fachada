// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Fachada/SpawnFacade.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnFacade() {}
// Cross Module References
	FACHADA_API UClass* Z_Construct_UClass_ASpawnFacade_NoRegister();
	FACHADA_API UClass* Z_Construct_UClass_ASpawnFacade();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Fachada();
	FACHADA_API UClass* Z_Construct_UClass_ANaveEnemiga_NoRegister();
	FACHADA_API UClass* Z_Construct_UClass_AObstaculo_NoRegister();
	FACHADA_API UClass* Z_Construct_UClass_ACapsulas_NoRegister();
// End Cross Module References
	void ASpawnFacade::StaticRegisterNativesASpawnFacade()
	{
	}
	UClass* Z_Construct_UClass_ASpawnFacade_NoRegister()
	{
		return ASpawnFacade::StaticClass();
	}
	struct Z_Construct_UClass_ASpawnFacade_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Acciones_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Acciones_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Acciones;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NaveEnemiga_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NaveEnemiga;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Obstaculo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Obstaculo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Capsula_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Capsula;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpawnFacade_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Fachada,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnFacade_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpawnFacade.h" },
		{ "ModuleRelativePath", "SpawnFacade.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ASpawnFacade_Statics::NewProp_Acciones_Inner = { "Acciones", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnFacade_Statics::NewProp_Acciones_MetaData[] = {
		{ "Category", "FachadaSpawn" },
		{ "Comment", "////Lista de objetos a spawnear\n//TArray<class AAccionesFacade> Astros;\n" },
		{ "ModuleRelativePath", "SpawnFacade.h" },
		{ "ToolTip", "/Lista de objetos a spawnear\nTArray<class AAccionesFacade> Astros;" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASpawnFacade_Statics::NewProp_Acciones = { "Acciones", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpawnFacade, Acciones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASpawnFacade_Statics::NewProp_Acciones_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnFacade_Statics::NewProp_Acciones_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnFacade_Statics::NewProp_NaveEnemiga_MetaData[] = {
		{ "Category", "FachadaSpawn" },
		{ "ModuleRelativePath", "SpawnFacade.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpawnFacade_Statics::NewProp_NaveEnemiga = { "NaveEnemiga", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpawnFacade, NaveEnemiga), Z_Construct_UClass_ANaveEnemiga_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpawnFacade_Statics::NewProp_NaveEnemiga_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnFacade_Statics::NewProp_NaveEnemiga_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnFacade_Statics::NewProp_Obstaculo_MetaData[] = {
		{ "Category", "FachadaSpawn" },
		{ "ModuleRelativePath", "SpawnFacade.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpawnFacade_Statics::NewProp_Obstaculo = { "Obstaculo", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpawnFacade, Obstaculo), Z_Construct_UClass_AObstaculo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpawnFacade_Statics::NewProp_Obstaculo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnFacade_Statics::NewProp_Obstaculo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnFacade_Statics::NewProp_Capsula_MetaData[] = {
		{ "Category", "FachadaSpawn" },
		{ "ModuleRelativePath", "SpawnFacade.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpawnFacade_Statics::NewProp_Capsula = { "Capsula", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpawnFacade, Capsula), Z_Construct_UClass_ACapsulas_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpawnFacade_Statics::NewProp_Capsula_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnFacade_Statics::NewProp_Capsula_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpawnFacade_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnFacade_Statics::NewProp_Acciones_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnFacade_Statics::NewProp_Acciones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnFacade_Statics::NewProp_NaveEnemiga,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnFacade_Statics::NewProp_Obstaculo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnFacade_Statics::NewProp_Capsula,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpawnFacade_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpawnFacade>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpawnFacade_Statics::ClassParams = {
		&ASpawnFacade::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASpawnFacade_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnFacade_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASpawnFacade_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnFacade_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpawnFacade()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpawnFacade_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpawnFacade, 716687527);
	template<> FACHADA_API UClass* StaticClass<ASpawnFacade>()
	{
		return ASpawnFacade::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpawnFacade(Z_Construct_UClass_ASpawnFacade, &ASpawnFacade::StaticClass, TEXT("/Script/Fachada"), TEXT("ASpawnFacade"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpawnFacade);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
