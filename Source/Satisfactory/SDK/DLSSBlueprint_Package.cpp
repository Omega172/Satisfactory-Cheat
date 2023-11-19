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
	 * 		RVA    -> 0x482C93EE0
	 * 		Name   -> Function DLSSBlueprint.DLSSLibrary.SetDLSSSharpness
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Sharpness                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDLSSLibrary::STATIC_SetDLSSSharpness(float Sharpness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLSSBlueprint.DLSSLibrary.SetDLSSSharpness");
		
		UDLSSLibrary_SetDLSSSharpness_Params params {};
		params.Sharpness = Sharpness;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x482C93E20
	 * 		Name   -> Function DLSSBlueprint.DLSSLibrary.SetDLSSMode
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EUDLSSMode                                         DLSSMode                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDLSSLibrary::STATIC_SetDLSSMode(class UObject* WorldContextObject, EUDLSSMode DLSSMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLSSBlueprint.DLSSLibrary.SetDLSSMode");
		
		UDLSSLibrary_SetDLSSMode_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.DLSSMode = DLSSMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x482C93DC0
	 * 		Name   -> Function DLSSBlueprint.DLSSLibrary.QueryDLSSSupport
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	EUDLSSSupport UDLSSLibrary::STATIC_QueryDLSSSupport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLSSBlueprint.DLSSLibrary.QueryDLSSSupport");
		
		UDLSSLibrary_QueryDLSSSupport_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x482C93D90
	 * 		Name   -> Function DLSSBlueprint.DLSSLibrary.IsDLSSSupported
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UDLSSLibrary::STATIC_IsDLSSSupported()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLSSBlueprint.DLSSLibrary.IsDLSSSupported");
		
		UDLSSLibrary_IsDLSSSupported_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x482C93C50
	 * 		Name   -> Function DLSSBlueprint.DLSSLibrary.IsDLSSModeSupported
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		EUDLSSMode                                         DLSSMode                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDLSSLibrary::STATIC_IsDLSSModeSupported(EUDLSSMode DLSSMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLSSBlueprint.DLSSLibrary.IsDLSSModeSupported");
		
		UDLSSLibrary_IsDLSSModeSupported_Params params {};
		params.DLSSMode = DLSSMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x482C93C20
	 * 		Name   -> Function DLSSBlueprint.DLSSLibrary.IsDLSSEnabled
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UDLSSLibrary::STATIC_IsDLSSEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLSSBlueprint.DLSSLibrary.IsDLSSEnabled");
		
		UDLSSLibrary_IsDLSSEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x482C93BB0
	 * 		Name   -> Function DLSSBlueprint.DLSSLibrary.IsDLAAEnabled
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UDLSSLibrary::STATIC_IsDLAAEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLSSBlueprint.DLSSLibrary.IsDLAAEnabled");
		
		UDLSSLibrary_IsDLAAEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x482C93B30
	 * 		Name   -> Function DLSSBlueprint.DLSSLibrary.GetSupportedDLSSModes
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	TArray<EUDLSSMode> UDLSSLibrary::STATIC_GetSupportedDLSSModes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLSSBlueprint.DLSSLibrary.GetSupportedDLSSModes");
		
		UDLSSLibrary_GetSupportedDLSSModes_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x482C93AD0
	 * 		Name   -> Function DLSSBlueprint.DLSSLibrary.GetDLSSSharpness
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	float UDLSSLibrary::STATIC_GetDLSSSharpness()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLSSBlueprint.DLSSLibrary.GetDLSSSharpness");
		
		UDLSSLibrary_GetDLSSSharpness_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x482C939E0
	 * 		Name   -> Function DLSSBlueprint.DLSSLibrary.GetDLSSScreenPercentageRange
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              MinScreenPercentage                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxScreenPercentage                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDLSSLibrary::STATIC_GetDLSSScreenPercentageRange(float* MinScreenPercentage, float* MaxScreenPercentage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLSSBlueprint.DLSSLibrary.GetDLSSScreenPercentageRange");
		
		UDLSSLibrary_GetDLSSScreenPercentageRange_Params params {};
		
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
	 * 		RVA    -> 0x482C93700
	 * 		Name   -> Function DLSSBlueprint.DLSSLibrary.GetDLSSModeInformation
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		EUDLSSMode                                         DLSSMode                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   ScreenResolution                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsSupported                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OptimalScreenPercentage                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsFixedScreenPercentage                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MinScreenPercentage                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxScreenPercentage                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OptimalSharpness                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDLSSLibrary::STATIC_GetDLSSModeInformation(EUDLSSMode DLSSMode, const struct FVector2D& ScreenResolution, bool* bIsSupported, float* OptimalScreenPercentage, bool* bIsFixedScreenPercentage, float* MinScreenPercentage, float* MaxScreenPercentage, float* OptimalSharpness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLSSBlueprint.DLSSLibrary.GetDLSSModeInformation");
		
		UDLSSLibrary_GetDLSSModeInformation_Params params {};
		params.DLSSMode = DLSSMode;
		params.ScreenResolution = ScreenResolution;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsSupported != nullptr)
			*bIsSupported = params.bIsSupported;
		if (OptimalScreenPercentage != nullptr)
			*OptimalScreenPercentage = params.OptimalScreenPercentage;
		if (bIsFixedScreenPercentage != nullptr)
			*bIsFixedScreenPercentage = params.bIsFixedScreenPercentage;
		if (MinScreenPercentage != nullptr)
			*MinScreenPercentage = params.MinScreenPercentage;
		if (MaxScreenPercentage != nullptr)
			*MaxScreenPercentage = params.MaxScreenPercentage;
		if (OptimalSharpness != nullptr)
			*OptimalSharpness = params.OptimalSharpness;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x482C936D0
	 * 		Name   -> Function DLSSBlueprint.DLSSLibrary.GetDLSSMode
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	EUDLSSMode UDLSSLibrary::STATIC_GetDLSSMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLSSBlueprint.DLSSLibrary.GetDLSSMode");
		
		UDLSSLibrary_GetDLSSMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x482C935C0
	 * 		Name   -> Function DLSSBlueprint.DLSSLibrary.GetDLSSMinimumDriverVersion
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            MinDriverVersionMajor                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MinDriverVersionMinor                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDLSSLibrary::STATIC_GetDLSSMinimumDriverVersion(int32_t* MinDriverVersionMajor, int32_t* MinDriverVersionMinor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLSSBlueprint.DLSSLibrary.GetDLSSMinimumDriverVersion");
		
		UDLSSLibrary_GetDLSSMinimumDriverVersion_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MinDriverVersionMajor != nullptr)
			*MinDriverVersionMajor = params.MinDriverVersionMajor;
		if (MinDriverVersionMinor != nullptr)
			*MinDriverVersionMinor = params.MinDriverVersionMinor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x482C93B00
	 * 		Name   -> Function DLSSBlueprint.DLSSLibrary.GetDefaultDLSSMode
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	EUDLSSMode UDLSSLibrary::STATIC_GetDefaultDLSSMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLSSBlueprint.DLSSLibrary.GetDefaultDLSSMode");
		
		UDLSSLibrary_GetDefaultDLSSMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x482C93540
	 * 		Name   -> Function DLSSBlueprint.DLSSLibrary.EnableDLSS
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDLSSLibrary::STATIC_EnableDLSS(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLSSBlueprint.DLSSLibrary.EnableDLSS");
		
		UDLSSLibrary_EnableDLSS_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x482C934C0
	 * 		Name   -> Function DLSSBlueprint.DLSSLibrary.EnableDLAA
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDLSSLibrary::STATIC_EnableDLAA(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLSSBlueprint.DLSSLibrary.EnableDLAA");
		
		UDLSSLibrary_EnableDLAA_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDLSSLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDLSSLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DLSSBlueprint.DLSSLibrary");
		return ptr;
	}

}


