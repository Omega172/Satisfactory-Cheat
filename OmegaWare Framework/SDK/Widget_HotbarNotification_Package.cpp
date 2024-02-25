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
	 * 		Name   -> Function Widget_HotbarNotification.Widget_HotbarNotification_C.WidgetAnimationEvt_HotbarPopUp_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_HotbarNotification_C::WidgetAnimationEvt_HotbarPopUp_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_HotbarNotification.Widget_HotbarNotification_C.WidgetAnimationEvt_HotbarPopUp_K2Node_WidgetAnimationEvent_1");
		
		UWidget_HotbarNotification_C_WidgetAnimationEvt_HotbarPopUp_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_HotbarNotification.Widget_HotbarNotification_C.WidgetAnimationEvt_HotbarPopUp_K2Node_WidgetAnimationEvent_2
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_HotbarNotification_C::WidgetAnimationEvt_HotbarPopUp_K2Node_WidgetAnimationEvent_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_HotbarNotification.Widget_HotbarNotification_C.WidgetAnimationEvt_HotbarPopUp_K2Node_WidgetAnimationEvent_2");
		
		UWidget_HotbarNotification_C_WidgetAnimationEvt_HotbarPopUp_K2Node_WidgetAnimationEvent_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_HotbarNotification.Widget_HotbarNotification_C.ExecuteUbergraph_Widget_HotbarNotification
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_HotbarNotification_C::ExecuteUbergraph_Widget_HotbarNotification(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_HotbarNotification.Widget_HotbarNotification_C.ExecuteUbergraph_Widget_HotbarNotification");
		
		UWidget_HotbarNotification_C_ExecuteUbergraph_Widget_HotbarNotification_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_HotbarNotification_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_HotbarNotification_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_HotbarNotification.Widget_HotbarNotification_C");
		return ptr;
	}

}


