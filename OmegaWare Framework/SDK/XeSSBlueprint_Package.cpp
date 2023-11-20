/**
 * Name: Satisfactory
 * Version: Early_Access_CL#264901
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x476B52450
	 * 		Name   -> Function XeSSBlueprint.XeSSBlueprintLibrary.SetXeSSQualityMode
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		EXeSSQualityMode                                   QualityMode                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UXeSSBlueprintLibrary::STATIC_SetXeSSQualityMode(EXeSSQualityMode QualityMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function XeSSBlueprint.XeSSBlueprintLibrary.SetXeSSQualityMode");
		
		UXeSSBlueprintLibrary_SetXeSSQualityMode_Params params {};
		params.QualityMode = QualityMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x476B52430
	 * 		Name   -> Function XeSSBlueprint.XeSSBlueprintLibrary.IsXeSSSupported
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UXeSSBlueprintLibrary::STATIC_IsXeSSSupported()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function XeSSBlueprint.XeSSBlueprintLibrary.IsXeSSSupported");
		
		UXeSSBlueprintLibrary_IsXeSSSupported_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x476B52350
	 * 		Name   -> Function XeSSBlueprint.XeSSBlueprintLibrary.GetXeSSQualityModeInformation
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		EXeSSQualityMode                                   QualityMode                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ScreenPercentage                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UXeSSBlueprintLibrary::STATIC_GetXeSSQualityModeInformation(EXeSSQualityMode QualityMode, float* ScreenPercentage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function XeSSBlueprint.XeSSBlueprintLibrary.GetXeSSQualityModeInformation");
		
		UXeSSBlueprintLibrary_GetXeSSQualityModeInformation_Params params {};
		params.QualityMode = QualityMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ScreenPercentage != nullptr)
			*ScreenPercentage = params.ScreenPercentage;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x476B52320
	 * 		Name   -> Function XeSSBlueprint.XeSSBlueprintLibrary.GetXeSSQualityMode
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	EXeSSQualityMode UXeSSBlueprintLibrary::STATIC_GetXeSSQualityMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function XeSSBlueprint.XeSSBlueprintLibrary.GetXeSSQualityMode");
		
		UXeSSBlueprintLibrary_GetXeSSQualityMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x476B522A0
	 * 		Name   -> Function XeSSBlueprint.XeSSBlueprintLibrary.GetSupportedXeSSQualityModes
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	TArray<EXeSSQualityMode> UXeSSBlueprintLibrary::STATIC_GetSupportedXeSSQualityModes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function XeSSBlueprint.XeSSBlueprintLibrary.GetSupportedXeSSQualityModes");
		
		UXeSSBlueprintLibrary_GetSupportedXeSSQualityModes_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x476B52210
	 * 		Name   -> Function XeSSBlueprint.XeSSBlueprintLibrary.GetDefaultXeSSQualityMode
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FIntPoint                                   ScreenResolution                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EXeSSQualityMode UXeSSBlueprintLibrary::STATIC_GetDefaultXeSSQualityMode(const struct FIntPoint& ScreenResolution)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function XeSSBlueprint.XeSSBlueprintLibrary.GetDefaultXeSSQualityMode");
		
		UXeSSBlueprintLibrary_GetDefaultXeSSQualityMode_Params params {};
		params.ScreenResolution = ScreenResolution;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UXeSSBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UXeSSBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class XeSSBlueprint.XeSSBlueprintLibrary");
		return ptr;
	}

}


