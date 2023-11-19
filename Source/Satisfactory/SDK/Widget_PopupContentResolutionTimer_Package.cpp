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
	 * 		Name   -> Function Widget_PopupContentResolutionTimer.Widget_PopupContentResolutionTimer_C.GetShouldOkayBeEnabled
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool UWidget_PopupContentResolutionTimer_C::GetShouldOkayBeEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PopupContentResolutionTimer.Widget_PopupContentResolutionTimer_C.GetShouldOkayBeEnabled");
		
		UWidget_PopupContentResolutionTimer_C_GetShouldOkayBeEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_PopupContentResolutionTimer.Widget_PopupContentResolutionTimer_C.Get_TimerText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UWidget_PopupContentResolutionTimer_C::Get_TimerText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PopupContentResolutionTimer.Widget_PopupContentResolutionTimer_C.Get_TimerText");
		
		UWidget_PopupContentResolutionTimer_C_Get_TimerText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_PopupContentResolutionTimer.Widget_PopupContentResolutionTimer_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_PopupContentResolutionTimer_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PopupContentResolutionTimer.Widget_PopupContentResolutionTimer_C.Construct");
		
		UWidget_PopupContentResolutionTimer_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_PopupContentResolutionTimer.Widget_PopupContentResolutionTimer_C.TriggerCancel
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_PopupContentResolutionTimer_C::TriggerCancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PopupContentResolutionTimer.Widget_PopupContentResolutionTimer_C.TriggerCancel");
		
		UWidget_PopupContentResolutionTimer_C_TriggerCancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_PopupContentResolutionTimer.Widget_PopupContentResolutionTimer_C.SetOptionalTextElements
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Title                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FText                                        Desc                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWidget_PopupContentResolutionTimer_C::SetOptionalTextElements(const class FText& Title, const class FText& Desc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PopupContentResolutionTimer.Widget_PopupContentResolutionTimer_C.SetOptionalTextElements");
		
		UWidget_PopupContentResolutionTimer_C_SetOptionalTextElements_Params params {};
		params.Title = Title;
		params.Desc = Desc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_PopupContentResolutionTimer.Widget_PopupContentResolutionTimer_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_PopupContentResolutionTimer_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PopupContentResolutionTimer.Widget_PopupContentResolutionTimer_C.Destruct");
		
		UWidget_PopupContentResolutionTimer_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_PopupContentResolutionTimer.Widget_PopupContentResolutionTimer_C.ExecuteUbergraph_Widget_PopupContentResolutionTimer
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_PopupContentResolutionTimer_C::ExecuteUbergraph_Widget_PopupContentResolutionTimer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PopupContentResolutionTimer.Widget_PopupContentResolutionTimer_C.ExecuteUbergraph_Widget_PopupContentResolutionTimer");
		
		UWidget_PopupContentResolutionTimer_C_ExecuteUbergraph_Widget_PopupContentResolutionTimer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_PopupContentResolutionTimer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_PopupContentResolutionTimer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_PopupContentResolutionTimer.Widget_PopupContentResolutionTimer_C");
		return ptr;
	}

}


