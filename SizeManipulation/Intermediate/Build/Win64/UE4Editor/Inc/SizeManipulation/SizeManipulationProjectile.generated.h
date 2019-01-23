// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
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
#ifdef SIZEMANIPULATION_SizeManipulationProjectile_generated_h
#error "SizeManipulationProjectile.generated.h already included, missing '#pragma once' in SizeManipulationProjectile.h"
#endif
#define SIZEMANIPULATION_SizeManipulationProjectile_generated_h

#define SizeManipulation_Source_SizeManipulation_SizeManipulationProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define SizeManipulation_Source_SizeManipulation_SizeManipulationProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define SizeManipulation_Source_SizeManipulation_SizeManipulationProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASizeManipulationProjectile(); \
	friend struct Z_Construct_UClass_ASizeManipulationProjectile_Statics; \
public: \
	DECLARE_CLASS(ASizeManipulationProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SizeManipulation"), NO_API) \
	DECLARE_SERIALIZER(ASizeManipulationProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define SizeManipulation_Source_SizeManipulation_SizeManipulationProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASizeManipulationProjectile(); \
	friend struct Z_Construct_UClass_ASizeManipulationProjectile_Statics; \
public: \
	DECLARE_CLASS(ASizeManipulationProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SizeManipulation"), NO_API) \
	DECLARE_SERIALIZER(ASizeManipulationProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define SizeManipulation_Source_SizeManipulation_SizeManipulationProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASizeManipulationProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASizeManipulationProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASizeManipulationProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASizeManipulationProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASizeManipulationProjectile(ASizeManipulationProjectile&&); \
	NO_API ASizeManipulationProjectile(const ASizeManipulationProjectile&); \
public:


#define SizeManipulation_Source_SizeManipulation_SizeManipulationProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASizeManipulationProjectile(ASizeManipulationProjectile&&); \
	NO_API ASizeManipulationProjectile(const ASizeManipulationProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASizeManipulationProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASizeManipulationProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASizeManipulationProjectile)


#define SizeManipulation_Source_SizeManipulation_SizeManipulationProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(ASizeManipulationProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ASizeManipulationProjectile, ProjectileMovement); }


#define SizeManipulation_Source_SizeManipulation_SizeManipulationProjectile_h_9_PROLOG
#define SizeManipulation_Source_SizeManipulation_SizeManipulationProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SizeManipulation_Source_SizeManipulation_SizeManipulationProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	SizeManipulation_Source_SizeManipulation_SizeManipulationProjectile_h_12_RPC_WRAPPERS \
	SizeManipulation_Source_SizeManipulation_SizeManipulationProjectile_h_12_INCLASS \
	SizeManipulation_Source_SizeManipulation_SizeManipulationProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SizeManipulation_Source_SizeManipulation_SizeManipulationProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SizeManipulation_Source_SizeManipulation_SizeManipulationProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	SizeManipulation_Source_SizeManipulation_SizeManipulationProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	SizeManipulation_Source_SizeManipulation_SizeManipulationProjectile_h_12_INCLASS_NO_PURE_DECLS \
	SizeManipulation_Source_SizeManipulation_SizeManipulationProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SizeManipulation_Source_SizeManipulation_SizeManipulationProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
