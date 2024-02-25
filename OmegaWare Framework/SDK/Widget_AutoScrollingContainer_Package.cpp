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
	 * 		Name   -> Function Widget_AutoScrollingContainer.Widget_AutoScrollingContainer_C.StopAutoScroll
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_AutoScrollingContainer_C::StopAutoScroll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_AutoScrollingContainer.Widget_AutoScrollingContainer_C.StopAutoScroll");
		
		UWidget_AutoScrollingContainer_C_StopAutoScroll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_AutoScrollingContainer.Widget_AutoScrollingContainer_C.StartAutoScroll
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_AutoScrollingContainer_C::StartAutoScroll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_AutoScrollingContainer.Widget_AutoScrollingContainer_C.StartAutoScroll");
		
		UWidget_AutoScrollingContainer_C_StartAutoScroll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_AutoScrollingContainer.Widget_AutoScrollingContainer_C.AutoScroll
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_AutoScrollingContainer_C::AutoScroll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_AutoScrollingContainer.Widget_AutoScrollingContainer_C.AutoScroll");
		
		UWidget_AutoScrollingContainer_C_AutoScroll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_AutoScrollingContainer.Widget_AutoScrollingContainer_C.BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_AutoScrollingContainer_C::BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_AutoScrollingContainer.Widget_AutoScrollingContainer_C.BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UWidget_AutoScrollingContainer_C_BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_AutoScrollingContainer.Widget_AutoScrollingContainer_C.BndEvt__mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_AutoScrollingContainer_C::BndEvt__mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_AutoScrollingContainer.Widget_AutoScrollingContainer_C.BndEvt__mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UWidget_AutoScrollingContainer_C_BndEvt__mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_AutoScrollingContainer.Widget_AutoScrollingContainer_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_AutoScrollingContainer_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_AutoScrollingContainer.Widget_AutoScrollingContainer_C.PreConstruct");
		
		UWidget_AutoScrollingContainer_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_AutoScrollingContainer.Widget_AutoScrollingContainer_C.DelayedStartAutoScroll
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             SecondsDelayed                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_AutoScrollingContainer_C::DelayedStartAutoScroll(double SecondsDelayed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_AutoScrollingContainer.Widget_AutoScrollingContainer_C.DelayedStartAutoScroll");
		
		UWidget_AutoScrollingContainer_C_DelayedStartAutoScroll_Params params {};
		params.SecondsDelayed = SecondsDelayed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_AutoScrollingContainer.Widget_AutoScrollingContainer_C.ExecuteUbergraph_Widget_AutoScrollingContainer
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_AutoScrollingContainer_C::ExecuteUbergraph_Widget_AutoScrollingContainer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_AutoScrollingContainer.Widget_AutoScrollingContainer_C.ExecuteUbergraph_Widget_AutoScrollingContainer");
		
		UWidget_AutoScrollingContainer_C_ExecuteUbergraph_Widget_AutoScrollingContainer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_AutoScrollingContainer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_AutoScrollingContainer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_AutoScrollingContainer.Widget_AutoScrollingContainer_C");
		return ptr;
	}

}


