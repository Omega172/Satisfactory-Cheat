﻿/**
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
	 * 		Name   -> Function BTT_SetMovementSpeed.BTT_SetMovementSpeed_C.ReceiveExecute
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_SetMovementSpeed_C::ReceiveExecute(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_SetMovementSpeed.BTT_SetMovementSpeed_C.ReceiveExecute");
		
		UBTT_SetMovementSpeed_C_ReceiveExecute_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BTT_SetMovementSpeed.BTT_SetMovementSpeed_C.ExecuteUbergraph_BTT_SetMovementSpeed
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_SetMovementSpeed_C::ExecuteUbergraph_BTT_SetMovementSpeed(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_SetMovementSpeed.BTT_SetMovementSpeed_C.ExecuteUbergraph_BTT_SetMovementSpeed");
		
		UBTT_SetMovementSpeed_C_ExecuteUbergraph_BTT_SetMovementSpeed_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTT_SetMovementSpeed_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTT_SetMovementSpeed_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BTT_SetMovementSpeed.BTT_SetMovementSpeed_C");
		return ptr;
	}

}


