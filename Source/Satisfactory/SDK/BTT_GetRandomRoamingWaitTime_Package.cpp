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
	 * 		Name   -> Function BTT_GetRandomRoamingWaitTime.BTT_GetRandomRoamingWaitTime_C.ReceiveExecute
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_GetRandomRoamingWaitTime_C::ReceiveExecute(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_GetRandomRoamingWaitTime.BTT_GetRandomRoamingWaitTime_C.ReceiveExecute");
		
		UBTT_GetRandomRoamingWaitTime_C_ReceiveExecute_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BTT_GetRandomRoamingWaitTime.BTT_GetRandomRoamingWaitTime_C.ExecuteUbergraph_BTT_GetRandomRoamingWaitTime
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_GetRandomRoamingWaitTime_C::ExecuteUbergraph_BTT_GetRandomRoamingWaitTime(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_GetRandomRoamingWaitTime.BTT_GetRandomRoamingWaitTime_C.ExecuteUbergraph_BTT_GetRandomRoamingWaitTime");
		
		UBTT_GetRandomRoamingWaitTime_C_ExecuteUbergraph_BTT_GetRandomRoamingWaitTime_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTT_GetRandomRoamingWaitTime_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTT_GetRandomRoamingWaitTime_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BTT_GetRandomRoamingWaitTime.BTT_GetRandomRoamingWaitTime_C");
		return ptr;
	}

}


