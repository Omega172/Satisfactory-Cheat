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
	 * 		Name   -> Function BPW_TetrominoBonusPointer.BPW_TetrominoBonusPointer_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_TetrominoBonusPointer_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TetrominoBonusPointer.BPW_TetrominoBonusPointer_C.Construct");
		
		UBPW_TetrominoBonusPointer_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_TetrominoBonusPointer.BPW_TetrominoBonusPointer_C.ExecuteUbergraph_BPW_TetrominoBonusPointer
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_TetrominoBonusPointer_C::ExecuteUbergraph_BPW_TetrominoBonusPointer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TetrominoBonusPointer.BPW_TetrominoBonusPointer_C.ExecuteUbergraph_BPW_TetrominoBonusPointer");
		
		UBPW_TetrominoBonusPointer_C_ExecuteUbergraph_BPW_TetrominoBonusPointer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_TetrominoBonusPointer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_TetrominoBonusPointer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_TetrominoBonusPointer.BPW_TetrominoBonusPointer_C");
		return ptr;
	}

}


