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
	 * 		Name   -> Function BPW_PowerSwitch_PrioRule_DragRep.BPW_PowerSwitch_PrioRule_DragRep_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PowerSwitch_PrioRule_DragRep_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch_PrioRule_DragRep.BPW_PowerSwitch_PrioRule_DragRep_C.PreConstruct");
		
		UBPW_PowerSwitch_PrioRule_DragRep_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch_PrioRule_DragRep.BPW_PowerSwitch_PrioRule_DragRep_C.ExecuteUbergraph_BPW_PowerSwitch_PrioRule_DragRep
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PowerSwitch_PrioRule_DragRep_C::ExecuteUbergraph_BPW_PowerSwitch_PrioRule_DragRep(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch_PrioRule_DragRep.BPW_PowerSwitch_PrioRule_DragRep_C.ExecuteUbergraph_BPW_PowerSwitch_PrioRule_DragRep");
		
		UBPW_PowerSwitch_PrioRule_DragRep_C_ExecuteUbergraph_BPW_PowerSwitch_PrioRule_DragRep_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_PowerSwitch_PrioRule_DragRep_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_PowerSwitch_PrioRule_DragRep_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_PowerSwitch_PrioRule_DragRep.BPW_PowerSwitch_PrioRule_DragRep_C");
		return ptr;
	}

}


