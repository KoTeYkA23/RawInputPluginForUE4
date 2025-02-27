// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RawInput/Public/RawInputSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRawInputSettings() {}
// Cross Module References
	RAWINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FRawInputDeviceConfiguration();
	UPackage* Z_Construct_UPackage__Script_RawInput();
	RAWINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties();
	RAWINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	RAWINPUT_API UClass* Z_Construct_UClass_URawInputSettings_NoRegister();
	RAWINPUT_API UClass* Z_Construct_UClass_URawInputSettings();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
// End Cross Module References
class UScriptStruct* FRawInputDeviceConfiguration::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern RAWINPUT_API uint32 Get_Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRawInputDeviceConfiguration, Z_Construct_UPackage__Script_RawInput(), TEXT("RawInputDeviceConfiguration"), sizeof(FRawInputDeviceConfiguration), Get_Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Hash());
	}
	return Singleton;
}
template<> RAWINPUT_API UScriptStruct* StaticStruct<FRawInputDeviceConfiguration>()
{
	return FRawInputDeviceConfiguration::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRawInputDeviceConfiguration(FRawInputDeviceConfiguration::StaticStruct, TEXT("/Script/RawInput"), TEXT("RawInputDeviceConfiguration"), false, nullptr, nullptr);
static struct FScriptStruct_RawInput_StaticRegisterNativesFRawInputDeviceConfiguration
{
	FScriptStruct_RawInput_StaticRegisterNativesFRawInputDeviceConfiguration()
	{
		UScriptStruct::DeferCppStructOps<FRawInputDeviceConfiguration>(FName(TEXT("RawInputDeviceConfiguration")));
	}
} ScriptStruct_RawInput_StaticRegisterNativesFRawInputDeviceConfiguration;
	struct Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VendorID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VendorID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProductID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProductID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AxisProperties_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisProperties_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AxisProperties;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ButtonProperties_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonProperties_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ButtonProperties;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/*ue4 \xe8\xae\xbe\xe7\xbd\xae\xe7\x95\x8c\xe9\x9d\xa2*/" },
		{ "ModuleRelativePath", "Public/RawInputSettings.h" },
		{ "ToolTip", "ue4 \xe8\xae\xbe\xe7\xbd\xae\xe7\x95\x8c\xe9\x9d\xa2" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRawInputDeviceConfiguration>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewProp_VendorID_MetaData[] = {
		{ "Category", "Device Config" },
		{ "Comment", "// The hexadecimal vendor ID in string form (i.e. 0x046D)\n" },
		{ "ModuleRelativePath", "Public/RawInputSettings.h" },
		{ "ToolTip", "The hexadecimal vendor ID in string form (i.e. 0x046D)" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewProp_VendorID = { "VendorID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRawInputDeviceConfiguration, VendorID), METADATA_PARAMS(Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewProp_VendorID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewProp_VendorID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewProp_ProductID_MetaData[] = {
		{ "Category", "Device Config" },
		{ "Comment", "// The hexadecimal product ID in string form (i.e. 0xC262)\n" },
		{ "ModuleRelativePath", "Public/RawInputSettings.h" },
		{ "ToolTip", "The hexadecimal product ID in string form (i.e. 0xC262)" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewProp_ProductID = { "ProductID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRawInputDeviceConfiguration, ProductID), METADATA_PARAMS(Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewProp_ProductID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewProp_ProductID_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewProp_AxisProperties_Inner = { "AxisProperties", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewProp_AxisProperties_MetaData[] = {
		{ "Category", "Device Config" },
		{ "ModuleRelativePath", "Public/RawInputSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewProp_AxisProperties = { "AxisProperties", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRawInputDeviceConfiguration, AxisProperties), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewProp_AxisProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewProp_AxisProperties_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewProp_ButtonProperties_Inner = { "ButtonProperties", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewProp_ButtonProperties_MetaData[] = {
		{ "Category", "Device Config" },
		{ "ModuleRelativePath", "Public/RawInputSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewProp_ButtonProperties = { "ButtonProperties", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRawInputDeviceConfiguration, ButtonProperties), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewProp_ButtonProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewProp_ButtonProperties_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewProp_VendorID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewProp_ProductID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewProp_AxisProperties_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewProp_AxisProperties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewProp_ButtonProperties_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewProp_ButtonProperties,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RawInput,
		nullptr,
		&NewStructOps,
		"RawInputDeviceConfiguration",
		sizeof(FRawInputDeviceConfiguration),
		alignof(FRawInputDeviceConfiguration),
		Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRawInputDeviceConfiguration()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_RawInput();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RawInputDeviceConfiguration"), sizeof(FRawInputDeviceConfiguration), Get_Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Hash() { return 1653381035U; }
class UScriptStruct* FRawInputDeviceButtonProperties::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern RAWINPUT_API uint32 Get_Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties, Z_Construct_UPackage__Script_RawInput(), TEXT("RawInputDeviceButtonProperties"), sizeof(FRawInputDeviceButtonProperties), Get_Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Hash());
	}
	return Singleton;
}
template<> RAWINPUT_API UScriptStruct* StaticStruct<FRawInputDeviceButtonProperties>()
{
	return FRawInputDeviceButtonProperties::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRawInputDeviceButtonProperties(FRawInputDeviceButtonProperties::StaticStruct, TEXT("/Script/RawInput"), TEXT("RawInputDeviceButtonProperties"), false, nullptr, nullptr);
static struct FScriptStruct_RawInput_StaticRegisterNativesFRawInputDeviceButtonProperties
{
	FScriptStruct_RawInput_StaticRegisterNativesFRawInputDeviceButtonProperties()
	{
		UScriptStruct::DeferCppStructOps<FRawInputDeviceButtonProperties>(FName(TEXT("RawInputDeviceButtonProperties")));
	}
} ScriptStruct_RawInput_StaticRegisterNativesFRawInputDeviceButtonProperties;
	struct Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RawInputSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRawInputDeviceButtonProperties>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "Button Properties" },
		{ "Comment", "/** Whether the button is enabled. */" },
		{ "ModuleRelativePath", "Public/RawInputSettings.h" },
		{ "ToolTip", "Whether the button is enabled." },
	};
#endif
	void Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FRawInputDeviceButtonProperties*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FRawInputDeviceButtonProperties), &Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "Button Properties" },
		{ "Comment", "/** Which key to emit the values from this button to. */" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Public/RawInputSettings.h" },
		{ "ToolTip", "Which key to emit the values from this button to." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRawInputDeviceButtonProperties, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Statics::NewProp_Key,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RawInput,
		nullptr,
		&NewStructOps,
		"RawInputDeviceButtonProperties",
		sizeof(FRawInputDeviceButtonProperties),
		alignof(FRawInputDeviceButtonProperties),
		Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_RawInput();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RawInputDeviceButtonProperties"), sizeof(FRawInputDeviceButtonProperties), Get_Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Hash() { return 2518312707U; }
class UScriptStruct* FRawInputDeviceAxisProperties::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern RAWINPUT_API uint32 Get_Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties, Z_Construct_UPackage__Script_RawInput(), TEXT("RawInputDeviceAxisProperties"), sizeof(FRawInputDeviceAxisProperties), Get_Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Hash());
	}
	return Singleton;
}
template<> RAWINPUT_API UScriptStruct* StaticStruct<FRawInputDeviceAxisProperties>()
{
	return FRawInputDeviceAxisProperties::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRawInputDeviceAxisProperties(FRawInputDeviceAxisProperties::StaticStruct, TEXT("/Script/RawInput"), TEXT("RawInputDeviceAxisProperties"), false, nullptr, nullptr);
static struct FScriptStruct_RawInput_StaticRegisterNativesFRawInputDeviceAxisProperties
{
	FScriptStruct_RawInput_StaticRegisterNativesFRawInputDeviceAxisProperties()
	{
		UScriptStruct::DeferCppStructOps<FRawInputDeviceAxisProperties>(FName(TEXT("RawInputDeviceAxisProperties")));
	}
} ScriptStruct_RawInput_StaticRegisterNativesFRawInputDeviceAxisProperties;
	struct Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInverted_MetaData[];
#endif
		static void NewProp_bInverted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInverted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RawInputSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRawInputDeviceAxisProperties>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "Axis Properties" },
		{ "Comment", "/** Whether the axis is enabled. */" },
		{ "ModuleRelativePath", "Public/RawInputSettings.h" },
		{ "ToolTip", "Whether the axis is enabled." },
	};
#endif
	void Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FRawInputDeviceAxisProperties*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FRawInputDeviceAxisProperties), &Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "Axis Properties" },
		{ "Comment", "/** Which key to emit the values from this axis to. */" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Public/RawInputSettings.h" },
		{ "ToolTip", "Which key to emit the values from this axis to." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRawInputDeviceAxisProperties, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_bInverted_MetaData[] = {
		{ "Category", "Axis Properties" },
		{ "Comment", "/** Whether the value of the axis as supplied from the driver should be inverted. */" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Public/RawInputSettings.h" },
		{ "ToolTip", "Whether the value of the axis as supplied from the driver should be inverted." },
	};
#endif
	void Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_bInverted_SetBit(void* Obj)
	{
		((FRawInputDeviceAxisProperties*)Obj)->bInverted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_bInverted = { "bInverted", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FRawInputDeviceAxisProperties), &Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_bInverted_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_bInverted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_bInverted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_Offset_MetaData[] = {
		{ "Category", "Axis Properties" },
		{ "Comment", "/** The amount to offset the axis value by to get the desired range (note that this offset is applied after the value has been inverted). */" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Public/RawInputSettings.h" },
		{ "ToolTip", "The amount to offset the axis value by to get the desired range (note that this offset is applied after the value has been inverted)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRawInputDeviceAxisProperties, Offset), METADATA_PARAMS(Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Axis Properties" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Public/RawInputSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRawInputDeviceAxisProperties, Scale), METADATA_PARAMS(Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_Scale_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_bInverted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_Scale,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RawInput,
		nullptr,
		&NewStructOps,
		"RawInputDeviceAxisProperties",
		sizeof(FRawInputDeviceAxisProperties),
		alignof(FRawInputDeviceAxisProperties),
		Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_RawInput();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RawInputDeviceAxisProperties"), sizeof(FRawInputDeviceAxisProperties), Get_Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Hash() { return 291255920U; }
	void URawInputSettings::StaticRegisterNativesURawInputSettings()
	{
	}
	UClass* Z_Construct_UClass_URawInputSettings_NoRegister()
	{
		return URawInputSettings::StaticClass();
	}
	struct Z_Construct_UClass_URawInputSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DeviceConfigurations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceConfigurations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DeviceConfigurations;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URawInputSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_RawInput,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URawInputSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RawInputSettings.h" },
		{ "ModuleRelativePath", "Public/RawInputSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URawInputSettings_Statics::NewProp_DeviceConfigurations_Inner = { "DeviceConfigurations", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRawInputDeviceConfiguration, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URawInputSettings_Statics::NewProp_DeviceConfigurations_MetaData[] = {
		{ "Category", "Device Configurations" },
		{ "Comment", "// End UDeveloperSettings Interface\n" },
		{ "ModuleRelativePath", "Public/RawInputSettings.h" },
		{ "ToolTip", "End UDeveloperSettings Interface" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URawInputSettings_Statics::NewProp_DeviceConfigurations = { "DeviceConfigurations", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URawInputSettings, DeviceConfigurations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URawInputSettings_Statics::NewProp_DeviceConfigurations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URawInputSettings_Statics::NewProp_DeviceConfigurations_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URawInputSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URawInputSettings_Statics::NewProp_DeviceConfigurations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URawInputSettings_Statics::NewProp_DeviceConfigurations,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URawInputSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URawInputSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URawInputSettings_Statics::ClassParams = {
		&URawInputSettings::StaticClass,
		"Input",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URawInputSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URawInputSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_URawInputSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URawInputSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URawInputSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URawInputSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URawInputSettings, 2529378868);
	template<> RAWINPUT_API UClass* StaticClass<URawInputSettings>()
	{
		return URawInputSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URawInputSettings(Z_Construct_UClass_URawInputSettings, &URawInputSettings::StaticClass, TEXT("/Script/RawInput"), TEXT("URawInputSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URawInputSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
