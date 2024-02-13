// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterGame/BTService_UPDPlayerLocIfSeen.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_UPDPlayerLocIfSeen() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTService_BlackboardBase();
	SHOOTERGAME_API UClass* Z_Construct_UClass_UBTService_UPDPlayerLocIfSeen();
	SHOOTERGAME_API UClass* Z_Construct_UClass_UBTService_UPDPlayerLocIfSeen_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ShooterGame();
// End Cross Module References
	void UBTService_UPDPlayerLocIfSeen::StaticRegisterNativesUBTService_UPDPlayerLocIfSeen()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTService_UPDPlayerLocIfSeen);
	UClass* Z_Construct_UClass_UBTService_UPDPlayerLocIfSeen_NoRegister()
	{
		return UBTService_UPDPlayerLocIfSeen::StaticClass();
	}
	struct Z_Construct_UClass_UBTService_UPDPlayerLocIfSeen_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTService_UPDPlayerLocIfSeen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_UPDPlayerLocIfSeen_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BTService_UPDPlayerLocIfSeen.h" },
		{ "ModuleRelativePath", "BTService_UPDPlayerLocIfSeen.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTService_UPDPlayerLocIfSeen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_UPDPlayerLocIfSeen>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTService_UPDPlayerLocIfSeen_Statics::ClassParams = {
		&UBTService_UPDPlayerLocIfSeen::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTService_UPDPlayerLocIfSeen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_UPDPlayerLocIfSeen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTService_UPDPlayerLocIfSeen()
	{
		if (!Z_Registration_Info_UClass_UBTService_UPDPlayerLocIfSeen.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTService_UPDPlayerLocIfSeen.OuterSingleton, Z_Construct_UClass_UBTService_UPDPlayerLocIfSeen_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTService_UPDPlayerLocIfSeen.OuterSingleton;
	}
	template<> SHOOTERGAME_API UClass* StaticClass<UBTService_UPDPlayerLocIfSeen>()
	{
		return UBTService_UPDPlayerLocIfSeen::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_UPDPlayerLocIfSeen);
	UBTService_UPDPlayerLocIfSeen::~UBTService_UPDPlayerLocIfSeen() {}
	struct Z_CompiledInDeferFile_FID_shooter_game_prototype_ShooterGame_Source_ShooterGame_BTService_UPDPlayerLocIfSeen_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_shooter_game_prototype_ShooterGame_Source_ShooterGame_BTService_UPDPlayerLocIfSeen_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTService_UPDPlayerLocIfSeen, UBTService_UPDPlayerLocIfSeen::StaticClass, TEXT("UBTService_UPDPlayerLocIfSeen"), &Z_Registration_Info_UClass_UBTService_UPDPlayerLocIfSeen, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTService_UPDPlayerLocIfSeen), 3808602333U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_shooter_game_prototype_ShooterGame_Source_ShooterGame_BTService_UPDPlayerLocIfSeen_h_1290223839(TEXT("/Script/ShooterGame"),
		Z_CompiledInDeferFile_FID_shooter_game_prototype_ShooterGame_Source_ShooterGame_BTService_UPDPlayerLocIfSeen_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_shooter_game_prototype_ShooterGame_Source_ShooterGame_BTService_UPDPlayerLocIfSeen_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
