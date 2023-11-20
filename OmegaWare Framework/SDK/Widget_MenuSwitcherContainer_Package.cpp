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
	 * 		Name   -> Function Widget_MenuSwitcherContainer.Widget_MenuSwitcherContainer_C.GetFirstChildOfSwitcher
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPanelWidget*                                SwitcherWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget*                                     Child                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_MenuSwitcherContainer_C::GetFirstChildOfSwitcher(class UPanelWidget* SwitcherWidget, class UWidget** Child)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MenuSwitcherContainer.Widget_MenuSwitcherContainer_C.GetFirstChildOfSwitcher");
		
		UWidget_MenuSwitcherContainer_C_GetFirstChildOfSwitcher_Params params {};
		params.SwitcherWidget = SwitcherWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Child != nullptr)
			*Child = params.Child;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MenuSwitcherContainer.Widget_MenuSwitcherContainer_C.SetSwitcherWidget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidgetSwitcher*                             WidgetSwitcher                                             (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_MenuSwitcherContainer_C::SetSwitcherWidget(class UWidgetSwitcher** WidgetSwitcher)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MenuSwitcherContainer.Widget_MenuSwitcherContainer_C.SetSwitcherWidget");
		
		UWidget_MenuSwitcherContainer_C_SetSwitcherWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WidgetSwitcher != nullptr)
			*WidgetSwitcher = params.WidgetSwitcher;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MenuSwitcherContainer.Widget_MenuSwitcherContainer_C.SetNoneActive
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_MenuSwitcherContainer_C::SetNoneActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MenuSwitcherContainer.Widget_MenuSwitcherContainer_C.SetNoneActive");
		
		UWidget_MenuSwitcherContainer_C_SetNoneActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MenuSwitcherContainer.Widget_MenuSwitcherContainer_C.SetActiveWidget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_MenuSwitcherContainer_C::SetActiveWidget(class UWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MenuSwitcherContainer.Widget_MenuSwitcherContainer_C.SetActiveWidget");
		
		UWidget_MenuSwitcherContainer_C_SetActiveWidget_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MenuSwitcherContainer.Widget_MenuSwitcherContainer_C.WidgetAnimationEvt_HideSwitcher_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_MenuSwitcherContainer_C::WidgetAnimationEvt_HideSwitcher_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MenuSwitcherContainer.Widget_MenuSwitcherContainer_C.WidgetAnimationEvt_HideSwitcher_K2Node_WidgetAnimationEvent_1");
		
		UWidget_MenuSwitcherContainer_C_WidgetAnimationEvt_HideSwitcher_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MenuSwitcherContainer.Widget_MenuSwitcherContainer_C.ExecuteUbergraph_Widget_MenuSwitcherContainer
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_MenuSwitcherContainer_C::ExecuteUbergraph_Widget_MenuSwitcherContainer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MenuSwitcherContainer.Widget_MenuSwitcherContainer_C.ExecuteUbergraph_Widget_MenuSwitcherContainer");
		
		UWidget_MenuSwitcherContainer_C_ExecuteUbergraph_Widget_MenuSwitcherContainer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MenuSwitcherContainer.Widget_MenuSwitcherContainer_C.OnWidgetSet__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               mHasChangedActiveWidget                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_MenuSwitcherContainer_C::OnWidgetSet__DelegateSignature(bool mHasChangedActiveWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MenuSwitcherContainer.Widget_MenuSwitcherContainer_C.OnWidgetSet__DelegateSignature");
		
		UWidget_MenuSwitcherContainer_C_OnWidgetSet__DelegateSignature_Params params {};
		params.mHasChangedActiveWidget = mHasChangedActiveWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_MenuSwitcherContainer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_MenuSwitcherContainer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_MenuSwitcherContainer.Widget_MenuSwitcherContainer_C");
		return ptr;
	}

}


