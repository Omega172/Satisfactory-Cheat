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
	 * 		Name   -> Function BP_DebrisActor_02.BP_DebrisActor_02_C.LostSignificance
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_DebrisActor_02_C::LostSignificance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebrisActor_02.BP_DebrisActor_02_C.LostSignificance");
		
		ABP_DebrisActor_02_C_LostSignificance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_DebrisActor_02.BP_DebrisActor_02_C.GainedSignificance
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_DebrisActor_02_C::GainedSignificance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebrisActor_02.BP_DebrisActor_02_C.GainedSignificance");
		
		ABP_DebrisActor_02_C_GainedSignificance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_DebrisActor_02.BP_DebrisActor_02_C.ExecuteUbergraph_BP_DebrisActor_02
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DebrisActor_02_C::ExecuteUbergraph_BP_DebrisActor_02(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebrisActor_02.BP_DebrisActor_02_C.ExecuteUbergraph_BP_DebrisActor_02");
		
		ABP_DebrisActor_02_C_ExecuteUbergraph_BP_DebrisActor_02_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_DebrisActor_02_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_DebrisActor_02_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_DebrisActor_02.BP_DebrisActor_02_C");
		return ptr;
	}

}


