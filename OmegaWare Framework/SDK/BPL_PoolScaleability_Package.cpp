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
	 * 		Name   -> Function BPL_PoolScaleability.BPL_PoolScaleability_C.GetLightScaleablity
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<bool>                                       ShadowSettings                                             (Parm, OutParm)
	 * 		TArray<bool>                                       DFShadowSettings                                           (Parm, OutParm)
	 */
	void UBPL_PoolScaleability_C::STATIC_GetLightScaleablity(class UObject* __WorldContext, TArray<bool>* ShadowSettings, TArray<bool>* DFShadowSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_PoolScaleability.BPL_PoolScaleability_C.GetLightScaleablity");
		
		UBPL_PoolScaleability_C_GetLightScaleablity_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShadowSettings != nullptr)
			*ShadowSettings = params.ShadowSettings;
		if (DFShadowSettings != nullptr)
			*DFShadowSettings = params.DFShadowSettings;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPL_PoolScaleability_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPL_PoolScaleability_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPL_PoolScaleability.BPL_PoolScaleability_C");
		return ptr;
	}

}


