// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FACHADA_SpawnFacade_generated_h
#error "SpawnFacade.generated.h already included, missing '#pragma once' in SpawnFacade.h"
#endif
#define FACHADA_SpawnFacade_generated_h

#define Fachada_Source_Fachada_SpawnFacade_h_12_SPARSE_DATA
#define Fachada_Source_Fachada_SpawnFacade_h_12_RPC_WRAPPERS
#define Fachada_Source_Fachada_SpawnFacade_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Fachada_Source_Fachada_SpawnFacade_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpawnFacade(); \
	friend struct Z_Construct_UClass_ASpawnFacade_Statics; \
public: \
	DECLARE_CLASS(ASpawnFacade, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Fachada"), NO_API) \
	DECLARE_SERIALIZER(ASpawnFacade)


#define Fachada_Source_Fachada_SpawnFacade_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASpawnFacade(); \
	friend struct Z_Construct_UClass_ASpawnFacade_Statics; \
public: \
	DECLARE_CLASS(ASpawnFacade, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Fachada"), NO_API) \
	DECLARE_SERIALIZER(ASpawnFacade)


#define Fachada_Source_Fachada_SpawnFacade_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpawnFacade(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpawnFacade) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpawnFacade); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpawnFacade); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpawnFacade(ASpawnFacade&&); \
	NO_API ASpawnFacade(const ASpawnFacade&); \
public:


#define Fachada_Source_Fachada_SpawnFacade_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpawnFacade(ASpawnFacade&&); \
	NO_API ASpawnFacade(const ASpawnFacade&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpawnFacade); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpawnFacade); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpawnFacade)


#define Fachada_Source_Fachada_SpawnFacade_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Obstaculo() { return STRUCT_OFFSET(ASpawnFacade, Obstaculo); } \
	FORCEINLINE static uint32 __PPO__Capsula() { return STRUCT_OFFSET(ASpawnFacade, Capsula); } \
	FORCEINLINE static uint32 __PPO__Astros() { return STRUCT_OFFSET(ASpawnFacade, Astros); } \
	FORCEINLINE static uint32 __PPO__Comestibles() { return STRUCT_OFFSET(ASpawnFacade, Comestibles); }


#define Fachada_Source_Fachada_SpawnFacade_h_9_PROLOG
#define Fachada_Source_Fachada_SpawnFacade_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Fachada_Source_Fachada_SpawnFacade_h_12_PRIVATE_PROPERTY_OFFSET \
	Fachada_Source_Fachada_SpawnFacade_h_12_SPARSE_DATA \
	Fachada_Source_Fachada_SpawnFacade_h_12_RPC_WRAPPERS \
	Fachada_Source_Fachada_SpawnFacade_h_12_INCLASS \
	Fachada_Source_Fachada_SpawnFacade_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Fachada_Source_Fachada_SpawnFacade_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Fachada_Source_Fachada_SpawnFacade_h_12_PRIVATE_PROPERTY_OFFSET \
	Fachada_Source_Fachada_SpawnFacade_h_12_SPARSE_DATA \
	Fachada_Source_Fachada_SpawnFacade_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Fachada_Source_Fachada_SpawnFacade_h_12_INCLASS_NO_PURE_DECLS \
	Fachada_Source_Fachada_SpawnFacade_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACHADA_API UClass* StaticClass<class ASpawnFacade>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Fachada_Source_Fachada_SpawnFacade_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
