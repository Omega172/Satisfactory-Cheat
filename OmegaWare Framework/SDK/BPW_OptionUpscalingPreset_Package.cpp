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
	 * 		Name   -> Function BPW_OptionUpscalingPreset.BPW_OptionUpscalingPreset_C.UpdateOptionText
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_OptionUpscalingPreset_C::UpdateOptionText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_OptionUpscalingPreset.BPW_OptionUpscalingPreset_C.UpdateOptionText");
		
		UBPW_OptionUpscalingPreset_C_UpdateOptionText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_OptionUpscalingPreset_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_OptionUpscalingPreset_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_OptionUpscalingPreset.BPW_OptionUpscalingPreset_C");
		return ptr;
	}

}


