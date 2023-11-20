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
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_FloodlightPole.Build_FloodlightPole_C.DoesNeedCustomTransform
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	bool ABuild_FloodlightPole_C::DoesNeedCustomTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_FloodlightPole.Build_FloodlightPole_C.DoesNeedCustomTransform");
		
		ABuild_FloodlightPole_C_DoesNeedCustomTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_FloodlightPole.Build_FloodlightPole_C.GetCustomTransform
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 */
	struct FTransform ABuild_FloodlightPole_C::GetCustomTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_FloodlightPole.Build_FloodlightPole_C.GetCustomTransform");
		
		ABuild_FloodlightPole_C_GetCustomTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_FloodlightPole.Build_FloodlightPole_C.GetLightColor
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	struct FLinearColor ABuild_FloodlightPole_C::GetLightColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_FloodlightPole.Build_FloodlightPole_C.GetLightColor");
		
		ABuild_FloodlightPole_C_GetLightColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_FloodlightPole.Build_FloodlightPole_C.GetLightIntensity
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 */
	float ABuild_FloodlightPole_C::GetLightIntensity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_FloodlightPole.Build_FloodlightPole_C.GetLightIntensity");
		
		ABuild_FloodlightPole_C_GetLightIntensity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_FloodlightPole.Build_FloodlightPole_C.GetLightMaterialFunction
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	class UMaterialInterface* ABuild_FloodlightPole_C::GetLightMaterialFunction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_FloodlightPole.Build_FloodlightPole_C.GetLightMaterialFunction");
		
		ABuild_FloodlightPole_C_GetLightMaterialFunction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_FloodlightPole.Build_FloodlightPole_C.GetLightSettings
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	struct FPoolLightSettings ABuild_FloodlightPole_C::GetLightSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_FloodlightPole.Build_FloodlightPole_C.GetLightSettings");
		
		ABuild_FloodlightPole_C_GetLightSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_FloodlightPole.Build_FloodlightPole_C.GetMeshColor
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	struct FLinearColor ABuild_FloodlightPole_C::GetMeshColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_FloodlightPole.Build_FloodlightPole_C.GetMeshColor");
		
		ABuild_FloodlightPole_C_GetMeshColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_FloodlightPole.Build_FloodlightPole_C.GetMeshSettings
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 */
	struct FPoolMeshSettings ABuild_FloodlightPole_C::GetMeshSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_FloodlightPole.Build_FloodlightPole_C.GetMeshSettings");
		
		ABuild_FloodlightPole_C_GetMeshSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuild_FloodlightPole_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuild_FloodlightPole_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Build_FloodlightPole.Build_FloodlightPole_C");
		return ptr;
	}

}


