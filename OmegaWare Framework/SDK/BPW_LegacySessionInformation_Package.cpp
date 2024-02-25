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
	 * 		Name   -> Function BPW_LegacySessionInformation.BPW_LegacySessionInformation_C.SetLocalUserInfo
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ULocalUserInfo*                              ViewModel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_LegacySessionInformation_C::SetLocalUserInfo(class ULocalUserInfo* ViewModel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LegacySessionInformation.BPW_LegacySessionInformation_C.SetLocalUserInfo");
		
		UBPW_LegacySessionInformation_C_SetLocalUserInfo_Params params {};
		params.ViewModel = ViewModel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_LegacySessionInformation.BPW_LegacySessionInformation_C.UpdateCurrentSession
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCommonSession                              Session                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBPW_LegacySessionInformation_C::UpdateCurrentSession(const struct FCommonSession& Session)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LegacySessionInformation.BPW_LegacySessionInformation_C.UpdateCurrentSession");
		
		UBPW_LegacySessionInformation_C_UpdateCurrentSession_Params params {};
		params.Session = Session;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_LegacySessionInformation.BPW_LegacySessionInformation_C.GetActiveSwitcherWidget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_LegacySessionInformation_C::GetActiveSwitcherWidget(class UWidget** Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LegacySessionInformation.BPW_LegacySessionInformation_C.GetActiveSwitcherWidget");
		
		UBPW_LegacySessionInformation_C_GetActiveSwitcherWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Widget != nullptr)
			*Widget = params.Widget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_LegacySessionInformation.BPW_LegacySessionInformation_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_LegacySessionInformation_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LegacySessionInformation.BPW_LegacySessionInformation_C.Construct");
		
		UBPW_LegacySessionInformation_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_LegacySessionInformation.BPW_LegacySessionInformation_C.BndEvt__BPW_LegacySessionInformation_mSwitcher_K2Node_ComponentBoundEvent_0_OnActiveWidgetSet__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     oldWidget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget*                                     newWidget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_LegacySessionInformation_C::BndEvt__BPW_LegacySessionInformation_mSwitcher_K2Node_ComponentBoundEvent_0_OnActiveWidgetSet__DelegateSignature(class UWidget* oldWidget, class UWidget* newWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LegacySessionInformation.BPW_LegacySessionInformation_C.BndEvt__BPW_LegacySessionInformation_mSwitcher_K2Node_ComponentBoundEvent_0_OnActiveWidgetSet__DelegateSignature");
		
		UBPW_LegacySessionInformation_C_BndEvt__BPW_LegacySessionInformation_mSwitcher_K2Node_ComponentBoundEvent_0_OnActiveWidgetSet__DelegateSignature_Params params {};
		params.oldWidget = oldWidget;
		params.newWidget = newWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_LegacySessionInformation.BPW_LegacySessionInformation_C.BndEvt__BPW_LegacySessionInformation_mCopyToClipboardButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_LegacySessionInformation_C::BndEvt__BPW_LegacySessionInformation_mCopyToClipboardButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LegacySessionInformation.BPW_LegacySessionInformation_C.BndEvt__BPW_LegacySessionInformation_mCopyToClipboardButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UBPW_LegacySessionInformation_C_BndEvt__BPW_LegacySessionInformation_mCopyToClipboardButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_LegacySessionInformation.BPW_LegacySessionInformation_C.BndEvt__BPW_LegacySessionInformation_mShowHideSessionIDButton_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_LegacySessionInformation_C::BndEvt__BPW_LegacySessionInformation_mShowHideSessionIDButton_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LegacySessionInformation.BPW_LegacySessionInformation_C.BndEvt__BPW_LegacySessionInformation_mShowHideSessionIDButton_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature");
		
		UBPW_LegacySessionInformation_C_BndEvt__BPW_LegacySessionInformation_mShowHideSessionIDButton_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_LegacySessionInformation.BPW_LegacySessionInformation_C.BndEvt__BPW_LegacySessionInformation_mShowHideSessionIDButton_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_LegacySessionInformation_C::BndEvt__BPW_LegacySessionInformation_mShowHideSessionIDButton_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LegacySessionInformation.BPW_LegacySessionInformation_C.BndEvt__BPW_LegacySessionInformation_mShowHideSessionIDButton_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature");
		
		UBPW_LegacySessionInformation_C_BndEvt__BPW_LegacySessionInformation_mShowHideSessionIDButton_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_LegacySessionInformation.BPW_LegacySessionInformation_C.BndEvt__Widget_Options_DropdownBox_K2Node_ComponentBoundEvent_0_onSelectionChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SelectedOption                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBPW_LegacySessionInformation_C::BndEvt__Widget_Options_DropdownBox_K2Node_ComponentBoundEvent_0_onSelectionChanged__DelegateSignature(const class FString& SelectedOption)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LegacySessionInformation.BPW_LegacySessionInformation_C.BndEvt__Widget_Options_DropdownBox_K2Node_ComponentBoundEvent_0_onSelectionChanged__DelegateSignature");
		
		UBPW_LegacySessionInformation_C_BndEvt__Widget_Options_DropdownBox_K2Node_ComponentBoundEvent_0_onSelectionChanged__DelegateSignature_Params params {};
		params.SelectedOption = SelectedOption;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_LegacySessionInformation.BPW_LegacySessionInformation_C.ExecuteUbergraph_BPW_LegacySessionInformation
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_LegacySessionInformation_C::ExecuteUbergraph_BPW_LegacySessionInformation(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LegacySessionInformation.BPW_LegacySessionInformation_C.ExecuteUbergraph_BPW_LegacySessionInformation");
		
		UBPW_LegacySessionInformation_C_ExecuteUbergraph_BPW_LegacySessionInformation_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_LegacySessionInformation.BPW_LegacySessionInformation_C.OnSwitcherWidgetChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     OldWidget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget*                                     NewWidget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_LegacySessionInformation_C::OnSwitcherWidgetChanged__DelegateSignature(class UWidget* OldWidget, class UWidget* NewWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LegacySessionInformation.BPW_LegacySessionInformation_C.OnSwitcherWidgetChanged__DelegateSignature");
		
		UBPW_LegacySessionInformation_C_OnSwitcherWidgetChanged__DelegateSignature_Params params {};
		params.OldWidget = OldWidget;
		params.NewWidget = NewWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_LegacySessionInformation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_LegacySessionInformation_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_LegacySessionInformation.BPW_LegacySessionInformation_C");
		return ptr;
	}

}


