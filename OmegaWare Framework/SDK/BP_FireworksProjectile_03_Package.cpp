/**
 * Name: Satisfactory
 * Version: Early_Access_CL#273254
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_FireworksProjectile_03.BP_FireworksProjectile_03_C.ShouldSave
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	bool ABP_FireworksProjectile_03_C::ShouldSave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FireworksProjectile_03.BP_FireworksProjectile_03_C.ShouldSave");
		
		ABP_FireworksProjectile_03_C_ShouldSave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_FireworksProjectile_03.BP_FireworksProjectile_03_C.GatherDependencies
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UObject*>                             out_dependentObjects                                       (Parm, OutParm)
	 */
	void ABP_FireworksProjectile_03_C::GatherDependencies(TArray<class UObject*>* out_dependentObjects)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FireworksProjectile_03.BP_FireworksProjectile_03_C.GatherDependencies");
		
		ABP_FireworksProjectile_03_C_GatherDependencies_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (out_dependentObjects != nullptr)
			*out_dependentObjects = params.out_dependentObjects;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_FireworksProjectile_03.BP_FireworksProjectile_03_C.NeedTransform
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABP_FireworksProjectile_03_C::NeedTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FireworksProjectile_03.BP_FireworksProjectile_03_C.NeedTransform");
		
		ABP_FireworksProjectile_03_C_NeedTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_FireworksProjectile_03_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_FireworksProjectile_03_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_FireworksProjectile_03.BP_FireworksProjectile_03_C");
		return ptr;
	}

}


