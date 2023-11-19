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
	 * 		Name   -> Function Widget_TradingPost_LanuchButtonPlatform.Widget_TradingPost_LanuchButtonPlatform_C.ResetState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_TradingPost_LanuchButtonPlatform_C::ResetState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TradingPost_LanuchButtonPlatform.Widget_TradingPost_LanuchButtonPlatform_C.ResetState");
		
		UWidget_TradingPost_LanuchButtonPlatform_C_ResetState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TradingPost_LanuchButtonPlatform.Widget_TradingPost_LanuchButtonPlatform_C.OnMouseButtonDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UWidget_TradingPost_LanuchButtonPlatform_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TradingPost_LanuchButtonPlatform.Widget_TradingPost_LanuchButtonPlatform_C.OnMouseButtonDown");
		
		UWidget_TradingPost_LanuchButtonPlatform_C_OnMouseButtonDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TradingPost_LanuchButtonPlatform.Widget_TradingPost_LanuchButtonPlatform_C.GetVisibility_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UWidget_TradingPost_LanuchButtonPlatform_C::GetVisibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TradingPost_LanuchButtonPlatform.Widget_TradingPost_LanuchButtonPlatform_C.GetVisibility_1");
		
		UWidget_TradingPost_LanuchButtonPlatform_C_GetVisibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TradingPost_LanuchButtonPlatform.Widget_TradingPost_LanuchButtonPlatform_C.mShowLaunchButton
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_TradingPost_LanuchButtonPlatform_C::mShowLaunchButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TradingPost_LanuchButtonPlatform.Widget_TradingPost_LanuchButtonPlatform_C.mShowLaunchButton");
		
		UWidget_TradingPost_LanuchButtonPlatform_C_mShowLaunchButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TradingPost_LanuchButtonPlatform.Widget_TradingPost_LanuchButtonPlatform_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_TradingPost_LanuchButtonPlatform_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TradingPost_LanuchButtonPlatform.Widget_TradingPost_LanuchButtonPlatform_C.Tick");
		
		UWidget_TradingPost_LanuchButtonPlatform_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TradingPost_LanuchButtonPlatform.Widget_TradingPost_LanuchButtonPlatform_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_63_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_TradingPost_LanuchButtonPlatform_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_63_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TradingPost_LanuchButtonPlatform.Widget_TradingPost_LanuchButtonPlatform_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_63_OnButtonHoverEvent__DelegateSignature");
		
		UWidget_TradingPost_LanuchButtonPlatform_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_63_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TradingPost_LanuchButtonPlatform.Widget_TradingPost_LanuchButtonPlatform_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_92_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_TradingPost_LanuchButtonPlatform_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_92_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TradingPost_LanuchButtonPlatform.Widget_TradingPost_LanuchButtonPlatform_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_92_OnButtonHoverEvent__DelegateSignature");
		
		UWidget_TradingPost_LanuchButtonPlatform_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_92_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TradingPost_LanuchButtonPlatform.Widget_TradingPost_LanuchButtonPlatform_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_137_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_TradingPost_LanuchButtonPlatform_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_137_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TradingPost_LanuchButtonPlatform.Widget_TradingPost_LanuchButtonPlatform_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_137_OnButtonClickedEvent__DelegateSignature");
		
		UWidget_TradingPost_LanuchButtonPlatform_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_137_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TradingPost_LanuchButtonPlatform.Widget_TradingPost_LanuchButtonPlatform_C.OnUpgradeHub
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_TradingPost_LanuchButtonPlatform_C::OnUpgradeHub()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TradingPost_LanuchButtonPlatform.Widget_TradingPost_LanuchButtonPlatform_C.OnUpgradeHub");
		
		UWidget_TradingPost_LanuchButtonPlatform_C_OnUpgradeHub_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TradingPost_LanuchButtonPlatform.Widget_TradingPost_LanuchButtonPlatform_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_TradingPost_LanuchButtonPlatform_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TradingPost_LanuchButtonPlatform.Widget_TradingPost_LanuchButtonPlatform_C.Construct");
		
		UWidget_TradingPost_LanuchButtonPlatform_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TradingPost_LanuchButtonPlatform.Widget_TradingPost_LanuchButtonPlatform_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_TradingPost_LanuchButtonPlatform_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TradingPost_LanuchButtonPlatform.Widget_TradingPost_LanuchButtonPlatform_C.Destruct");
		
		UWidget_TradingPost_LanuchButtonPlatform_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TradingPost_LanuchButtonPlatform.Widget_TradingPost_LanuchButtonPlatform_C.CreateSmoke
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_TradingPost_LanuchButtonPlatform_C::CreateSmoke()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TradingPost_LanuchButtonPlatform.Widget_TradingPost_LanuchButtonPlatform_C.CreateSmoke");
		
		UWidget_TradingPost_LanuchButtonPlatform_C_CreateSmoke_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TradingPost_LanuchButtonPlatform.Widget_TradingPost_LanuchButtonPlatform_C.ExecuteUbergraph_Widget_TradingPost_LanuchButtonPlatform
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_TradingPost_LanuchButtonPlatform_C::ExecuteUbergraph_Widget_TradingPost_LanuchButtonPlatform(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TradingPost_LanuchButtonPlatform.Widget_TradingPost_LanuchButtonPlatform_C.ExecuteUbergraph_Widget_TradingPost_LanuchButtonPlatform");
		
		UWidget_TradingPost_LanuchButtonPlatform_C_ExecuteUbergraph_Widget_TradingPost_LanuchButtonPlatform_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_TradingPost_LanuchButtonPlatform_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_TradingPost_LanuchButtonPlatform_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_TradingPost_LanuchButtonPlatform.Widget_TradingPost_LanuchButtonPlatform_C");
		return ptr;
	}

}


