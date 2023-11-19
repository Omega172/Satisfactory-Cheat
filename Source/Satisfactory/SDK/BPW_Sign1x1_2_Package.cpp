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
	 * 		Name   -> Function BPW_Sign1x1_2.BPW_Sign1x1_1_C.ExecuteUbergraph_BPW_Sign1x1_2
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Sign1x1_1_C::ExecuteUbergraph_BPW_Sign1x1_2(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Sign1x1_2.BPW_Sign1x1_1_C.ExecuteUbergraph_BPW_Sign1x1_2");
		
		UBPW_Sign1x1_1_C_ExecuteUbergraph_BPW_Sign1x1_2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_Sign1x1_1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_Sign1x1_1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_Sign1x1_2.BPW_Sign1x1_1_C");
		return ptr;
	}

}


