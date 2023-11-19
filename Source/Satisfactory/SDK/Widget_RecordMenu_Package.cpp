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
	 * 		Name   -> Function Widget_RecordMenu.Widget_RecordMenu_C.OnStopRecording
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Success                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_RecordMenu_C::OnStopRecording(bool Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_RecordMenu.Widget_RecordMenu_C.OnStopRecording");
		
		UWidget_RecordMenu_C_OnStopRecording_Params params {};
		params.Success = Success;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_RecordMenu.Widget_RecordMenu_C.OnStartRecording
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_RecordMenu_C::OnStartRecording()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_RecordMenu.Widget_RecordMenu_C.OnStartRecording");
		
		UWidget_RecordMenu_C_OnStartRecording_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_RecordMenu.Widget_RecordMenu_C.UpdateButtons
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_RecordMenu_C::UpdateButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_RecordMenu.Widget_RecordMenu_C.UpdateButtons");
		
		UWidget_RecordMenu_C_UpdateButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_RecordMenu.Widget_RecordMenu_C.UpdateAutopilotButton
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsAutopilotEnabled                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_RecordMenu_C::UpdateAutopilotButton(bool IsAutopilotEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_RecordMenu.Widget_RecordMenu_C.UpdateAutopilotButton");
		
		UWidget_RecordMenu_C_UpdateAutopilotButton_Params params {};
		params.IsAutopilotEnabled = IsAutopilotEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_RecordMenu.Widget_RecordMenu_C.UpdatePathVisibilityButton
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsPathVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_RecordMenu_C::UpdatePathVisibilityButton(bool IsPathVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_RecordMenu.Widget_RecordMenu_C.UpdatePathVisibilityButton");
		
		UWidget_RecordMenu_C_UpdatePathVisibilityButton_Params params {};
		params.IsPathVisible = IsPathVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_RecordMenu.Widget_RecordMenu_C.UpdateRecordingButton
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               mIsRecording                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_RecordMenu_C::UpdateRecordingButton(bool mIsRecording)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_RecordMenu.Widget_RecordMenu_C.UpdateRecordingButton");
		
		UWidget_RecordMenu_C_UpdateRecordingButton_Params params {};
		params.mIsRecording = mIsRecording;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_RecordMenu.Widget_RecordMenu_C.Event Clear Path Recording
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_RecordMenu_C::EventClearPathRecording()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_RecordMenu.Widget_RecordMenu_C.Event Clear Path Recording");
		
		UWidget_RecordMenu_C_EventClearPathRecording_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_RecordMenu.Widget_RecordMenu_C.Event Toggle Autopilot
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_RecordMenu_C::EventToggleAutopilot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_RecordMenu.Widget_RecordMenu_C.Event Toggle Autopilot");
		
		UWidget_RecordMenu_C_EventToggleAutopilot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_RecordMenu.Widget_RecordMenu_C.Event Toggle Path Visibility
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_RecordMenu_C::EventTogglePathVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_RecordMenu.Widget_RecordMenu_C.Event Toggle Path Visibility");
		
		UWidget_RecordMenu_C_EventTogglePathVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_RecordMenu.Widget_RecordMenu_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_RecordMenu_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_RecordMenu.Widget_RecordMenu_C.Destruct");
		
		UWidget_RecordMenu_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_RecordMenu.Widget_RecordMenu_C.Event Toggle Recording
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_RecordMenu_C::EventToggleRecording()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_RecordMenu.Widget_RecordMenu_C.Event Toggle Recording");
		
		UWidget_RecordMenu_C_EventToggleRecording_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_RecordMenu.Widget_RecordMenu_C.BndEvt__mToggleRecording_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_RecordMenu_C::BndEvt__mToggleRecording_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_RecordMenu.Widget_RecordMenu_C.BndEvt__mToggleRecording_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature");
		
		UWidget_RecordMenu_C_BndEvt__mToggleRecording_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_RecordMenu.Widget_RecordMenu_C.BndEvt__mTogglePathVisibility_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_RecordMenu_C::BndEvt__mTogglePathVisibility_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_RecordMenu.Widget_RecordMenu_C.BndEvt__mTogglePathVisibility_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature");
		
		UWidget_RecordMenu_C_BndEvt__mTogglePathVisibility_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_RecordMenu.Widget_RecordMenu_C.BndEvt__mToggleAutopilot_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_RecordMenu_C::BndEvt__mToggleAutopilot_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_RecordMenu.Widget_RecordMenu_C.BndEvt__mToggleAutopilot_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature");
		
		UWidget_RecordMenu_C_BndEvt__mToggleAutopilot_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_RecordMenu.Widget_RecordMenu_C.BndEvt__mLoadPath_K2Node_ComponentBoundEvent_22_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_RecordMenu_C::BndEvt__mLoadPath_K2Node_ComponentBoundEvent_22_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_RecordMenu.Widget_RecordMenu_C.BndEvt__mLoadPath_K2Node_ComponentBoundEvent_22_OnClicked__DelegateSignature");
		
		UWidget_RecordMenu_C_BndEvt__mLoadPath_K2Node_ComponentBoundEvent_22_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_RecordMenu.Widget_RecordMenu_C.BndEvt__mSavePath_K2Node_ComponentBoundEvent_24_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_RecordMenu_C::BndEvt__mSavePath_K2Node_ComponentBoundEvent_24_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_RecordMenu.Widget_RecordMenu_C.BndEvt__mSavePath_K2Node_ComponentBoundEvent_24_OnClicked__DelegateSignature");
		
		UWidget_RecordMenu_C_BndEvt__mSavePath_K2Node_ComponentBoundEvent_24_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_RecordMenu.Widget_RecordMenu_C.Event Delete Path
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_RecordMenu_C::EventDeletePath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_RecordMenu.Widget_RecordMenu_C.Event Delete Path");
		
		UWidget_RecordMenu_C_EventDeletePath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_RecordMenu.Widget_RecordMenu_C.BndEvt__mDeletePath_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_RecordMenu_C::BndEvt__mDeletePath_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_RecordMenu.Widget_RecordMenu_C.BndEvt__mDeletePath_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UWidget_RecordMenu_C_BndEvt__mDeletePath_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_RecordMenu.Widget_RecordMenu_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_RecordMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_RecordMenu.Widget_RecordMenu_C.Construct");
		
		UWidget_RecordMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_RecordMenu.Widget_RecordMenu_C.UpdateLoadPathButton
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanLoadPath                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_RecordMenu_C::UpdateLoadPathButton(bool CanLoadPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_RecordMenu.Widget_RecordMenu_C.UpdateLoadPathButton");
		
		UWidget_RecordMenu_C_UpdateLoadPathButton_Params params {};
		params.CanLoadPath = CanLoadPath;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_RecordMenu.Widget_RecordMenu_C.UpdateSavePathButton
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanSavePath                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_RecordMenu_C::UpdateSavePathButton(bool CanSavePath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_RecordMenu.Widget_RecordMenu_C.UpdateSavePathButton");
		
		UWidget_RecordMenu_C_UpdateSavePathButton_Params params {};
		params.CanSavePath = CanSavePath;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_RecordMenu.Widget_RecordMenu_C.ExecuteUbergraph_Widget_RecordMenu
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_RecordMenu_C::ExecuteUbergraph_Widget_RecordMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_RecordMenu.Widget_RecordMenu_C.ExecuteUbergraph_Widget_RecordMenu");
		
		UWidget_RecordMenu_C_ExecuteUbergraph_Widget_RecordMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_RecordMenu.Widget_RecordMenu_C.OnClosed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_RecordMenu_C::OnClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_RecordMenu.Widget_RecordMenu_C.OnClosed__DelegateSignature");
		
		UWidget_RecordMenu_C_OnClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_RecordMenu.Widget_RecordMenu_C.OnSavePathClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_RecordMenu_C::OnSavePathClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_RecordMenu.Widget_RecordMenu_C.OnSavePathClicked__DelegateSignature");
		
		UWidget_RecordMenu_C_OnSavePathClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_RecordMenu.Widget_RecordMenu_C.OnLoadPathClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_RecordMenu_C::OnLoadPathClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_RecordMenu.Widget_RecordMenu_C.OnLoadPathClicked__DelegateSignature");
		
		UWidget_RecordMenu_C_OnLoadPathClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_RecordMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_RecordMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_RecordMenu.Widget_RecordMenu_C");
		return ptr;
	}

}


