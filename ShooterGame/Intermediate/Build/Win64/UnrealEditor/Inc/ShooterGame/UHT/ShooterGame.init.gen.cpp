// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterGame_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ShooterGame;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ShooterGame()
	{
		if (!Z_Registration_Info_UPackage__Script_ShooterGame.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ShooterGame",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x10534572,
				0x7D4C95BB,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ShooterGame.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ShooterGame.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ShooterGame(Z_Construct_UPackage__Script_ShooterGame, TEXT("/Script/ShooterGame"), Z_Registration_Info_UPackage__Script_ShooterGame, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x10534572, 0x7D4C95BB));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
