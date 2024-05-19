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
class ACapsulas;
#ifdef FACHADA_FachadaPawn_generated_h
#error "FachadaPawn.generated.h already included, missing '#pragma once' in FachadaPawn.h"
#endif
#define FACHADA_FachadaPawn_generated_h

#define Fachada_Source_Fachada_FachadaPawn_h_22_SPARSE_DATA
#define Fachada_Source_Fachada_FachadaPawn_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execNotifyHit); \
	DECLARE_FUNCTION(execTakeItem);


#define Fachada_Source_Fachada_FachadaPawn_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execNotifyHit); \
	DECLARE_FUNCTION(execTakeItem);


#define Fachada_Source_Fachada_FachadaPawn_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFachadaPawn(); \
	friend struct Z_Construct_UClass_AFachadaPawn_Statics; \
public: \
	DECLARE_CLASS(AFachadaPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Fachada"), NO_API) \
	DECLARE_SERIALIZER(AFachadaPawn)


#define Fachada_Source_Fachada_FachadaPawn_h_22_INCLASS \
private: \
	static void StaticRegisterNativesAFachadaPawn(); \
	friend struct Z_Construct_UClass_AFachadaPawn_Statics; \
public: \
	DECLARE_CLASS(AFachadaPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Fachada"), NO_API) \
	DECLARE_SERIALIZER(AFachadaPawn)


#define Fachada_Source_Fachada_FachadaPawn_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFachadaPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFachadaPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFachadaPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFachadaPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFachadaPawn(AFachadaPawn&&); \
	NO_API AFachadaPawn(const AFachadaPawn&); \
public:


#define Fachada_Source_Fachada_FachadaPawn_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFachadaPawn(AFachadaPawn&&); \
	NO_API AFachadaPawn(const AFachadaPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFachadaPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFachadaPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFachadaPawn)


#define Fachada_Source_Fachada_FachadaPawn_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ShipMeshComponent() { return STRUCT_OFFSET(AFachadaPawn, ShipMeshComponent); } \
	FORCEINLINE static uint32 __PPO__CameraComponent() { return STRUCT_OFFSET(AFachadaPawn, CameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AFachadaPawn, CameraBoom); }


#define Fachada_Source_Fachada_FachadaPawn_h_19_PROLOG
#define Fachada_Source_Fachada_FachadaPawn_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Fachada_Source_Fachada_FachadaPawn_h_22_PRIVATE_PROPERTY_OFFSET \
	Fachada_Source_Fachada_FachadaPawn_h_22_SPARSE_DATA \
	Fachada_Source_Fachada_FachadaPawn_h_22_RPC_WRAPPERS \
	Fachada_Source_Fachada_FachadaPawn_h_22_INCLASS \
	Fachada_Source_Fachada_FachadaPawn_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Fachada_Source_Fachada_FachadaPawn_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Fachada_Source_Fachada_FachadaPawn_h_22_PRIVATE_PROPERTY_OFFSET \
	Fachada_Source_Fachada_FachadaPawn_h_22_SPARSE_DATA \
	Fachada_Source_Fachada_FachadaPawn_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	Fachada_Source_Fachada_FachadaPawn_h_22_INCLASS_NO_PURE_DECLS \
	Fachada_Source_Fachada_FachadaPawn_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACHADA_API UClass* StaticClass<class AFachadaPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Fachada_Source_Fachada_FachadaPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
