// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JS_Project/JS_ProjectGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJS_ProjectGameMode() {}
// Cross Module References
	JS_PROJECT_API UClass* Z_Construct_UClass_AJS_ProjectGameMode_NoRegister();
	JS_PROJECT_API UClass* Z_Construct_UClass_AJS_ProjectGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_JS_Project();
// End Cross Module References
	void AJS_ProjectGameMode::StaticRegisterNativesAJS_ProjectGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AJS_ProjectGameMode);
	UClass* Z_Construct_UClass_AJS_ProjectGameMode_NoRegister()
	{
		return AJS_ProjectGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AJS_ProjectGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AJS_ProjectGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_JS_Project,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJS_ProjectGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "JS_ProjectGameMode.h" },
		{ "ModuleRelativePath", "JS_ProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AJS_ProjectGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJS_ProjectGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AJS_ProjectGameMode_Statics::ClassParams = {
		&AJS_ProjectGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AJS_ProjectGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AJS_ProjectGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AJS_ProjectGameMode()
	{
		if (!Z_Registration_Info_UClass_AJS_ProjectGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AJS_ProjectGameMode.OuterSingleton, Z_Construct_UClass_AJS_ProjectGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AJS_ProjectGameMode.OuterSingleton;
	}
	template<> JS_PROJECT_API UClass* StaticClass<AJS_ProjectGameMode>()
	{
		return AJS_ProjectGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AJS_ProjectGameMode);
	struct Z_CompiledInDeferFile_FID_JS_Project_Source_JS_Project_JS_ProjectGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_JS_Project_Source_JS_Project_JS_ProjectGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AJS_ProjectGameMode, AJS_ProjectGameMode::StaticClass, TEXT("AJS_ProjectGameMode"), &Z_Registration_Info_UClass_AJS_ProjectGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AJS_ProjectGameMode), 296870258U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_JS_Project_Source_JS_Project_JS_ProjectGameMode_h_2946170843(TEXT("/Script/JS_Project"),
		Z_CompiledInDeferFile_FID_JS_Project_Source_JS_Project_JS_ProjectGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_JS_Project_Source_JS_Project_JS_ProjectGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
