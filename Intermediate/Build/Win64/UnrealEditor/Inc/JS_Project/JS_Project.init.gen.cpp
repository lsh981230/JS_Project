// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJS_Project_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_JS_Project;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_JS_Project()
	{
		if (!Z_Registration_Info_UPackage__Script_JS_Project.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/JS_Project",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x62F46CEA,
				0x67DBFD4A,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_JS_Project.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_JS_Project.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_JS_Project(Z_Construct_UPackage__Script_JS_Project, TEXT("/Script/JS_Project"), Z_Registration_Info_UPackage__Script_JS_Project, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x62F46CEA, 0x67DBFD4A));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
