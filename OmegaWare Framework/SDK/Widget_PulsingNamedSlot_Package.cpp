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
	 * 		Name   -> Function Widget_PulsingNamedSlot.Widget_PulsingNamedSlot_C.mPlayPulseAnim
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_PulsingNamedSlot_C::mPlayPulseAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PulsingNamedSlot.Widget_PulsingNamedSlot_C.mPlayPulseAnim");
		
		UWidget_PulsingNamedSlot_C_mPlayPulseAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_PulsingNamedSlot.Widget_PulsingNamedSlot_C.mStopPulseAnim
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_PulsingNamedSlot_C::mStopPulseAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PulsingNamedSlot.Widget_PulsingNamedSlot_C.mStopPulseAnim");
		
		UWidget_PulsingNamedSlot_C_mStopPulseAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_PulsingNamedSlot.Widget_PulsingNamedSlot_C.ExecuteUbergraph_Widget_PulsingNamedSlot
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_PulsingNamedSlot_C::ExecuteUbergraph_Widget_PulsingNamedSlot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PulsingNamedSlot.Widget_PulsingNamedSlot_C.ExecuteUbergraph_Widget_PulsingNamedSlot");
		
		UWidget_PulsingNamedSlot_C_ExecuteUbergraph_Widget_PulsingNamedSlot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_PulsingNamedSlot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_PulsingNamedSlot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_PulsingNamedSlot.Widget_PulsingNamedSlot_C");
		return ptr;
	}

}


