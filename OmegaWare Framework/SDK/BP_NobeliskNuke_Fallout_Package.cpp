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
	 * 		Name   -> Function BP_NobeliskNuke_Fallout.BP_NobeliskNuke_Fallout_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_NobeliskNuke_Fallout_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NobeliskNuke_Fallout.BP_NobeliskNuke_Fallout_C.ReceiveBeginPlay");
		
		ABP_NobeliskNuke_Fallout_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_NobeliskNuke_Fallout.BP_NobeliskNuke_Fallout_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NobeliskNuke_Fallout_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NobeliskNuke_Fallout.BP_NobeliskNuke_Fallout_C.ReceiveEndPlay");
		
		ABP_NobeliskNuke_Fallout_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_NobeliskNuke_Fallout.BP_NobeliskNuke_Fallout_C.UpdateDecay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_NobeliskNuke_Fallout_C::UpdateDecay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NobeliskNuke_Fallout.BP_NobeliskNuke_Fallout_C.UpdateDecay");
		
		ABP_NobeliskNuke_Fallout_C_UpdateDecay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_NobeliskNuke_Fallout.BP_NobeliskNuke_Fallout_C.ExecuteUbergraph_BP_NobeliskNuke_Fallout
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NobeliskNuke_Fallout_C::ExecuteUbergraph_BP_NobeliskNuke_Fallout(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NobeliskNuke_Fallout.BP_NobeliskNuke_Fallout_C.ExecuteUbergraph_BP_NobeliskNuke_Fallout");
		
		ABP_NobeliskNuke_Fallout_C_ExecuteUbergraph_BP_NobeliskNuke_Fallout_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_NobeliskNuke_Fallout_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_NobeliskNuke_Fallout_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_NobeliskNuke_Fallout.BP_NobeliskNuke_Fallout_C");
		return ptr;
	}

}


