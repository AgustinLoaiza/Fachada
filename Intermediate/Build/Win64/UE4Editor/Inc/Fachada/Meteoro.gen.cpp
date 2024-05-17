// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Fachada/Meteoro.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeteoro() {}
// Cross Module References
	FACHADA_API UClass* Z_Construct_UClass_AMeteoro_NoRegister();
	FACHADA_API UClass* Z_Construct_UClass_AMeteoro();
	FACHADA_API UClass* Z_Construct_UClass_AObstaculo();
	UPackage* Z_Construct_UPackage__Script_Fachada();
// End Cross Module References
	void AMeteoro::StaticRegisterNativesAMeteoro()
	{
	}
	UClass* Z_Construct_UClass_AMeteoro_NoRegister()
	{
		return AMeteoro::StaticClass();
	}
	struct Z_Construct_UClass_AMeteoro_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMeteoro_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AObstaculo,
		(UObject* (*)())Z_Construct_UPackage__Script_Fachada,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeteoro_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Meteoro.h" },
		{ "ModuleRelativePath", "Meteoro.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMeteoro_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMeteoro>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMeteoro_Statics::ClassParams = {
		&AMeteoro::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMeteoro_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMeteoro_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMeteoro()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMeteoro_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMeteoro, 1651096998);
	template<> FACHADA_API UClass* StaticClass<AMeteoro>()
	{
		return AMeteoro::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMeteoro(Z_Construct_UClass_AMeteoro, &AMeteoro::StaticClass, TEXT("/Script/Fachada"), TEXT("AMeteoro"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMeteoro);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
