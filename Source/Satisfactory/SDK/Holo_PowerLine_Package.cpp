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
	 * 		Name   -> Function Holo_PowerLine.Holo_PowerLine_C.OnAutomaticPoleDisableToggle
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Disabled                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHolo_PowerLine_C::OnAutomaticPoleDisableToggle(bool Disabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Holo_PowerLine.Holo_PowerLine_C.OnAutomaticPoleDisableToggle");
		
		AHolo_PowerLine_C_OnAutomaticPoleDisableToggle_Params params {};
		params.Disabled = Disabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Holo_PowerLine.Holo_PowerLine_C.ExecuteUbergraph_Holo_PowerLine
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHolo_PowerLine_C::ExecuteUbergraph_Holo_PowerLine(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Holo_PowerLine.Holo_PowerLine_C.ExecuteUbergraph_Holo_PowerLine");
		
		AHolo_PowerLine_C_ExecuteUbergraph_Holo_PowerLine_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHolo_PowerLine_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHolo_PowerLine_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Holo_PowerLine.Holo_PowerLine_C");
		return ptr;
	}

}


