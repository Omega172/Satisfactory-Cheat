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
	 * 		RVA    -> 0x47F2329B0
	 * 		Name   -> Function NISBlueprint.NISLibrary.SetNISSharpness
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Sharpness                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNISLibrary::STATIC_SetNISSharpness(float Sharpness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NISBlueprint.NISLibrary.SetNISSharpness");
		
		UNISLibrary_SetNISSharpness_Params params {};
		params.Sharpness = Sharpness;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47F232940
	 * 		Name   -> Function NISBlueprint.NISLibrary.SetNISMode
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		EUNISMode                                          NISMode                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNISLibrary::STATIC_SetNISMode(EUNISMode NISMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NISBlueprint.NISLibrary.SetNISMode");
		
		UNISLibrary_SetNISMode_Params params {};
		params.NISMode = NISMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47F2328B0
	 * 		Name   -> Function NISBlueprint.NISLibrary.SetNISCustomScreenPercentage
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              CustomScreenPercentage                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNISLibrary::STATIC_SetNISCustomScreenPercentage(float CustomScreenPercentage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NISBlueprint.NISLibrary.SetNISCustomScreenPercentage");
		
		UNISLibrary_SetNISCustomScreenPercentage_Params params {};
		params.CustomScreenPercentage = CustomScreenPercentage;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47F232600
	 * 		Name   -> Function NISBlueprint.NISLibrary.IsNISSupported
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UNISLibrary::STATIC_IsNISSupported()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NISBlueprint.NISLibrary.IsNISSupported");
		
		UNISLibrary_IsNISSupported_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47F232830
	 * 		Name   -> Function NISBlueprint.NISLibrary.IsNISModeSupported
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		EUNISMode                                          NISMode                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UNISLibrary::STATIC_IsNISModeSupported(EUNISMode NISMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NISBlueprint.NISLibrary.IsNISModeSupported");
		
		UNISLibrary_IsNISModeSupported_Params params {};
		params.NISMode = NISMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47F2327B0
	 * 		Name   -> Function NISBlueprint.NISLibrary.GetSupportedNISModes
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	TArray<EUNISMode> UNISLibrary::STATIC_GetSupportedNISModes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NISBlueprint.NISLibrary.GetSupportedNISModes");
		
		UNISLibrary_GetSupportedNISModes_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47F2326C0
	 * 		Name   -> Function NISBlueprint.NISLibrary.GetNISScreenPercentageRange
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              MinScreenPercentage                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxScreenPercentage                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNISLibrary::STATIC_GetNISScreenPercentageRange(float* MinScreenPercentage, float* MaxScreenPercentage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NISBlueprint.NISLibrary.GetNISScreenPercentageRange");
		
		UNISLibrary_GetNISScreenPercentageRange_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MinScreenPercentage != nullptr)
			*MinScreenPercentage = params.MinScreenPercentage;
		if (MaxScreenPercentage != nullptr)
			*MaxScreenPercentage = params.MaxScreenPercentage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47F232640
	 * 		Name   -> Function NISBlueprint.NISLibrary.GetNISRecommendedScreenPercentage
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		EUNISMode                                          NISMode                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UNISLibrary::STATIC_GetNISRecommendedScreenPercentage(EUNISMode NISMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NISBlueprint.NISLibrary.GetNISRecommendedScreenPercentage");
		
		UNISLibrary_GetNISRecommendedScreenPercentage_Params params {};
		params.NISMode = NISMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47F232600
	 * 		Name   -> Function NISBlueprint.NISLibrary.GetDefaultNISMode
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	EUNISMode UNISLibrary::STATIC_GetDefaultNISMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NISBlueprint.NISLibrary.GetDefaultNISMode");
		
		UNISLibrary_GetDefaultNISMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNISLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNISLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NISBlueprint.NISLibrary");
		return ptr;
	}

}


