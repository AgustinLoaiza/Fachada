// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef FACHADA_FachadaProjectile_generated_h
#error "FachadaProjectile.generated.h already included, missing '#pragma once' in FachadaProjectile.h"
#endif
#define FACHADA_FachadaProjectile_generated_h

#define Fachada_Source_Fachada_FachadaProjectile_h_15_SPARSE_DATA
#define Fachada_Source_Fachada_FachadaProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Fachada_Source_Fachada_FachadaProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Fachada_Source_Fachada_FachadaProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFachadaProjectile(); \
	friend struct Z_Construct_UClass_AFachadaProjectile_Statics; \
public: \
	DECLARE_CLASS(AFachadaProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Fachada"), NO_API) \
	DECLARE_SERIALIZER(AFachadaProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Fachada_Source_Fachada_FachadaProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAFachadaProjectile(); \
	friend struct Z_Construct_UClass_AFachadaProjectile_Statics; \
public: \
	DECLARE_CLASS(AFachadaProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Fachada"), NO_API) \
	DECLARE_SERIALIZER(AFachadaProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Fachada_Source_Fachada_FachadaProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFachadaProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFachadaProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFachadaProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFachadaProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFachadaProjectile(AFachadaProjectile&&); \
	NO_API AFachadaProjectile(const AFachadaProjectile&); \
public:


#define Fachada_Source_Fachada_FachadaProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFachadaProjectile(AFachadaProjectile&&); \
	NO_API AFachadaProjectile(const AFachadaProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFachadaProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFachadaProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFachadaProjectile)


#define Fachada_Source_Fachada_FachadaProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(AFachadaProjectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AFachadaProjectile, ProjectileMovement); }


#define Fachada_Source_Fachada_FachadaProjectile_h_12_PROLOG
#define Fachada_Source_Fachada_FachadaProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Fachada_Source_Fachada_FachadaProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Fachada_Source_Fachada_FachadaProjectile_h_15_SPARSE_DATA \
	Fachada_Source_Fachada_FachadaProjectile_h_15_RPC_WRAPPERS \
	Fachada_Source_Fachada_FachadaProjectile_h_15_INCLASS \
	Fachada_Source_Fachada_FachadaProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Fachada_Source_Fachada_FachadaProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Fachada_Source_Fachada_FachadaProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Fachada_Source_Fachada_FachadaProjectile_h_15_SPARSE_DATA \
	Fachada_Source_Fachada_FachadaProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Fachada_Source_Fachada_FachadaProjectile_h_15_INCLASS_NO_PURE_DECLS \
	Fachada_Source_Fachada_FachadaProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACHADA_API UClass* StaticClass<class AFachadaProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Fachada_Source_Fachada_FachadaProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
