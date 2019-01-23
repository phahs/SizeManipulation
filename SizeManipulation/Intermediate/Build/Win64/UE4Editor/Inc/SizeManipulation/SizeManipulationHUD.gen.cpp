// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SizeManipulation/SizeManipulationHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSizeManipulationHUD() {}
// Cross Module References
	SIZEMANIPULATION_API UClass* Z_Construct_UClass_ASizeManipulationHUD_NoRegister();
	SIZEMANIPULATION_API UClass* Z_Construct_UClass_ASizeManipulationHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_SizeManipulation();
// End Cross Module References
	void ASizeManipulationHUD::StaticRegisterNativesASizeManipulationHUD()
	{
	}
	UClass* Z_Construct_UClass_ASizeManipulationHUD_NoRegister()
	{
		return ASizeManipulationHUD::StaticClass();
	}
	struct Z_Construct_UClass_ASizeManipulationHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASizeManipulationHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_SizeManipulation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASizeManipulationHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "SizeManipulationHUD.h" },
		{ "ModuleRelativePath", "SizeManipulationHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASizeManipulationHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASizeManipulationHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASizeManipulationHUD_Statics::ClassParams = {
		&ASizeManipulationHUD::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008002ACu,
		nullptr, 0,
		nullptr, 0,
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ASizeManipulationHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASizeManipulationHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASizeManipulationHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASizeManipulationHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASizeManipulationHUD, 1120935275);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASizeManipulationHUD(Z_Construct_UClass_ASizeManipulationHUD, &ASizeManipulationHUD::StaticClass, TEXT("/Script/SizeManipulation"), TEXT("ASizeManipulationHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASizeManipulationHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
