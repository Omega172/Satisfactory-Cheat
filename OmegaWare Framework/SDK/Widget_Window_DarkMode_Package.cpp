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
	 * 		Name   -> Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.OnRelevantItemHotkeyPressed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Window_DarkMode_C::OnRelevantItemHotkeyPressed(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.OnRelevantItemHotkeyPressed");
		
		UWidget_Window_DarkMode_C_OnRelevantItemHotkeyPressed_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.SetTitleForTab
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Window_DarkMode_C::SetTitleForTab(const class FText& Text, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.SetTitleForTab");
		
		UWidget_Window_DarkMode_C_SetTitleForTab_Params params {};
		params.Text = Text;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.SetShowCloseButton
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Window_DarkMode_C::SetShowCloseButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.SetShowCloseButton");
		
		UWidget_Window_DarkMode_C_SetShowCloseButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.SetTabVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            TabIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Window_DarkMode_C::SetTabVisibility(int32_t TabIndex, bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.SetTabVisibility");
		
		UWidget_Window_DarkMode_C_SetTabVisibility_Params params {};
		params.TabIndex = TabIndex;
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.HideReplicationLoader
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      replicationDetailActorOwner                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Window_DarkMode_C::HideReplicationLoader(class AActor* replicationDetailActorOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.HideReplicationLoader");
		
		UWidget_Window_DarkMode_C_HideReplicationLoader_Params params {};
		params.replicationDetailActorOwner = replicationDetailActorOwner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.SetUsesReplication
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               mUsesReplication                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Window_DarkMode_C::SetUsesReplication(bool mUsesReplication)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.SetUsesReplication");
		
		UWidget_Window_DarkMode_C_SetUsesReplication_Params params {};
		params.mUsesReplication = mUsesReplication;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.PlayCloseAnim
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Window_DarkMode_C::PlayCloseAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.PlayCloseAnim");
		
		UWidget_Window_DarkMode_C_PlayCloseAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.Debug
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Window_DarkMode_C::Debug()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.Debug");
		
		UWidget_Window_DarkMode_C_Debug_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.OnMouseButtonUp
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UWidget_Window_DarkMode_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.OnMouseButtonUp");
		
		UWidget_Window_DarkMode_C_OnMouseButtonUp_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.OnNumKeyDown
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FKeyEvent                                   KeyEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UWidget_Window_DarkMode_C::OnNumKeyDown(const struct FKeyEvent& KeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.OnNumKeyDown");
		
		UWidget_Window_DarkMode_C_OnNumKeyDown_Params params {};
		params.KeyEvent = KeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.OnMouseButtonDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UWidget_Window_DarkMode_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.OnMouseButtonDown");
		
		UWidget_Window_DarkMode_C_OnMouseButtonDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.InitTabs
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Window_DarkMode_C::InitTabs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.InitTabs");
		
		UWidget_Window_DarkMode_C_InitTabs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.SetInventoryVisibility
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               mShowInventory                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Animate                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Window_DarkMode_C::SetInventoryVisibility(bool mShowInventory, bool Animate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.SetInventoryVisibility");
		
		UWidget_Window_DarkMode_C_SetInventoryVisibility_Params params {};
		params.mShowInventory = mShowInventory;
		params.Animate = Animate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.GetInventoryBodyVisibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UWidget_Window_DarkMode_C::GetInventoryBodyVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.GetInventoryBodyVisibility");
		
		UWidget_Window_DarkMode_C_GetInventoryBodyVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.OnDrop
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               PointerEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UDragDropOperation*                          Operation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	bool UWidget_Window_DarkMode_C::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.OnDrop");
		
		UWidget_Window_DarkMode_C_OnDrop_Params params {};
		params.MyGeometry = MyGeometry;
		params.PointerEvent = PointerEvent;
		params.Operation = Operation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.SetTitle
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Title                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWidget_Window_DarkMode_C::SetTitle(const class FText& Title)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.SetTitle");
		
		UWidget_Window_DarkMode_C_SetTitle_Params params {};
		params.Title = Title;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.InpActEvt_IA_RelevantItem_0_K2Node_EnhancedInputActionEvent_10
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputActionValue                           ActionValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		float                                              ElapsedTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TriggeredTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInputAction*                                SourceAction                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Window_DarkMode_C::InpActEvt_IA_RelevantItem_0_K2Node_EnhancedInputActionEvent_10(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.InpActEvt_IA_RelevantItem_0_K2Node_EnhancedInputActionEvent_10");
		
		UWidget_Window_DarkMode_C_InpActEvt_IA_RelevantItem_0_K2Node_EnhancedInputActionEvent_10_Params params {};
		params.ActionValue = ActionValue;
		params.ElapsedTime = ElapsedTime;
		params.TriggeredTime = TriggeredTime;
		params.SourceAction = SourceAction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.InpActEvt_IA_RelevantItem_1_K2Node_EnhancedInputActionEvent_9
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputActionValue                           ActionValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		float                                              ElapsedTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TriggeredTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInputAction*                                SourceAction                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Window_DarkMode_C::InpActEvt_IA_RelevantItem_1_K2Node_EnhancedInputActionEvent_9(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.InpActEvt_IA_RelevantItem_1_K2Node_EnhancedInputActionEvent_9");
		
		UWidget_Window_DarkMode_C_InpActEvt_IA_RelevantItem_1_K2Node_EnhancedInputActionEvent_9_Params params {};
		params.ActionValue = ActionValue;
		params.ElapsedTime = ElapsedTime;
		params.TriggeredTime = TriggeredTime;
		params.SourceAction = SourceAction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.InpActEvt_IA_RelevantItem_2_K2Node_EnhancedInputActionEvent_8
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputActionValue                           ActionValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		float                                              ElapsedTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TriggeredTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInputAction*                                SourceAction                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Window_DarkMode_C::InpActEvt_IA_RelevantItem_2_K2Node_EnhancedInputActionEvent_8(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.InpActEvt_IA_RelevantItem_2_K2Node_EnhancedInputActionEvent_8");
		
		UWidget_Window_DarkMode_C_InpActEvt_IA_RelevantItem_2_K2Node_EnhancedInputActionEvent_8_Params params {};
		params.ActionValue = ActionValue;
		params.ElapsedTime = ElapsedTime;
		params.TriggeredTime = TriggeredTime;
		params.SourceAction = SourceAction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.InpActEvt_IA_RelevantItem_3_K2Node_EnhancedInputActionEvent_7
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputActionValue                           ActionValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		float                                              ElapsedTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TriggeredTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInputAction*                                SourceAction                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Window_DarkMode_C::InpActEvt_IA_RelevantItem_3_K2Node_EnhancedInputActionEvent_7(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.InpActEvt_IA_RelevantItem_3_K2Node_EnhancedInputActionEvent_7");
		
		UWidget_Window_DarkMode_C_InpActEvt_IA_RelevantItem_3_K2Node_EnhancedInputActionEvent_7_Params params {};
		params.ActionValue = ActionValue;
		params.ElapsedTime = ElapsedTime;
		params.TriggeredTime = TriggeredTime;
		params.SourceAction = SourceAction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.InpActEvt_IA_RelevantItem_4_K2Node_EnhancedInputActionEvent_6
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputActionValue                           ActionValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		float                                              ElapsedTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TriggeredTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInputAction*                                SourceAction                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Window_DarkMode_C::InpActEvt_IA_RelevantItem_4_K2Node_EnhancedInputActionEvent_6(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.InpActEvt_IA_RelevantItem_4_K2Node_EnhancedInputActionEvent_6");
		
		UWidget_Window_DarkMode_C_InpActEvt_IA_RelevantItem_4_K2Node_EnhancedInputActionEvent_6_Params params {};
		params.ActionValue = ActionValue;
		params.ElapsedTime = ElapsedTime;
		params.TriggeredTime = TriggeredTime;
		params.SourceAction = SourceAction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.InpActEvt_IA_RelevantItem_5_K2Node_EnhancedInputActionEvent_5
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputActionValue                           ActionValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		float                                              ElapsedTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TriggeredTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInputAction*                                SourceAction                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Window_DarkMode_C::InpActEvt_IA_RelevantItem_5_K2Node_EnhancedInputActionEvent_5(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.InpActEvt_IA_RelevantItem_5_K2Node_EnhancedInputActionEvent_5");
		
		UWidget_Window_DarkMode_C_InpActEvt_IA_RelevantItem_5_K2Node_EnhancedInputActionEvent_5_Params params {};
		params.ActionValue = ActionValue;
		params.ElapsedTime = ElapsedTime;
		params.TriggeredTime = TriggeredTime;
		params.SourceAction = SourceAction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.InpActEvt_IA_RelevantItem_6_K2Node_EnhancedInputActionEvent_4
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputActionValue                           ActionValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		float                                              ElapsedTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TriggeredTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInputAction*                                SourceAction                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Window_DarkMode_C::InpActEvt_IA_RelevantItem_6_K2Node_EnhancedInputActionEvent_4(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.InpActEvt_IA_RelevantItem_6_K2Node_EnhancedInputActionEvent_4");
		
		UWidget_Window_DarkMode_C_InpActEvt_IA_RelevantItem_6_K2Node_EnhancedInputActionEvent_4_Params params {};
		params.ActionValue = ActionValue;
		params.ElapsedTime = ElapsedTime;
		params.TriggeredTime = TriggeredTime;
		params.SourceAction = SourceAction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.InpActEvt_IA_RelevantItem_7_K2Node_EnhancedInputActionEvent_3
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputActionValue                           ActionValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		float                                              ElapsedTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TriggeredTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInputAction*                                SourceAction                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Window_DarkMode_C::InpActEvt_IA_RelevantItem_7_K2Node_EnhancedInputActionEvent_3(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.InpActEvt_IA_RelevantItem_7_K2Node_EnhancedInputActionEvent_3");
		
		UWidget_Window_DarkMode_C_InpActEvt_IA_RelevantItem_7_K2Node_EnhancedInputActionEvent_3_Params params {};
		params.ActionValue = ActionValue;
		params.ElapsedTime = ElapsedTime;
		params.TriggeredTime = TriggeredTime;
		params.SourceAction = SourceAction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.InpActEvt_IA_RelevantItem_8_K2Node_EnhancedInputActionEvent_2
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputActionValue                           ActionValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		float                                              ElapsedTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TriggeredTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInputAction*                                SourceAction                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Window_DarkMode_C::InpActEvt_IA_RelevantItem_8_K2Node_EnhancedInputActionEvent_2(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.InpActEvt_IA_RelevantItem_8_K2Node_EnhancedInputActionEvent_2");
		
		UWidget_Window_DarkMode_C_InpActEvt_IA_RelevantItem_8_K2Node_EnhancedInputActionEvent_2_Params params {};
		params.ActionValue = ActionValue;
		params.ElapsedTime = ElapsedTime;
		params.TriggeredTime = TriggeredTime;
		params.SourceAction = SourceAction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.InpActEvt_IA_RelevantItem_9_K2Node_EnhancedInputActionEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputActionValue                           ActionValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		float                                              ElapsedTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TriggeredTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInputAction*                                SourceAction                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Window_DarkMode_C::InpActEvt_IA_RelevantItem_9_K2Node_EnhancedInputActionEvent_1(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.InpActEvt_IA_RelevantItem_9_K2Node_EnhancedInputActionEvent_1");
		
		UWidget_Window_DarkMode_C_InpActEvt_IA_RelevantItem_9_K2Node_EnhancedInputActionEvent_1_Params params {};
		params.ActionValue = ActionValue;
		params.ElapsedTime = ElapsedTime;
		params.TriggeredTime = TriggeredTime;
		params.SourceAction = SourceAction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_Window_DarkMode_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.Construct");
		
		UWidget_Window_DarkMode_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.OnEscapePressed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Window_DarkMode_C::OnEscapePressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.OnEscapePressed");
		
		UWidget_Window_DarkMode_C_OnEscapePressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_Window_DarkMode_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.Destruct");
		
		UWidget_Window_DarkMode_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Window_DarkMode_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.Tick");
		
		UWidget_Window_DarkMode_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.OnClosetAnimFinished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Window_DarkMode_C::OnClosetAnimFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.OnClosetAnimFinished");
		
		UWidget_Window_DarkMode_C_OnClosetAnimFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Window_DarkMode_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.PreConstruct");
		
		UWidget_Window_DarkMode_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.OnCloseButtonClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Window_DarkMode_C::OnCloseButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.OnCloseButtonClicked");
		
		UWidget_Window_DarkMode_C_OnCloseButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.LerpShowInventory
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Window_DarkMode_C::LerpShowInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.LerpShowInventory");
		
		UWidget_Window_DarkMode_C_LerpShowInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.BndEvt__Widget_TabsContainer_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Window_DarkMode_C::BndEvt__Widget_TabsContainer_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature(int32_t ButtonIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.BndEvt__Widget_TabsContainer_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature");
		
		UWidget_Window_DarkMode_C_BndEvt__Widget_TabsContainer_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature_Params params {};
		params.ButtonIndex = ButtonIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.BndEvt__Widget_TabsContainer_K2Node_ComponentBoundEvent_0_OnNoTabsGenerated__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_Window_DarkMode_C::BndEvt__Widget_TabsContainer_K2Node_ComponentBoundEvent_0_OnNoTabsGenerated__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.BndEvt__Widget_TabsContainer_K2Node_ComponentBoundEvent_0_OnNoTabsGenerated__DelegateSignature");
		
		UWidget_Window_DarkMode_C_BndEvt__Widget_TabsContainer_K2Node_ComponentBoundEvent_0_OnNoTabsGenerated__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.BndEvt__Widget_TabsContainer_K2Node_ComponentBoundEvent_1_OnTabsGenerated__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_Window_DarkMode_C::BndEvt__Widget_TabsContainer_K2Node_ComponentBoundEvent_1_OnTabsGenerated__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.BndEvt__Widget_TabsContainer_K2Node_ComponentBoundEvent_1_OnTabsGenerated__DelegateSignature");
		
		UWidget_Window_DarkMode_C_BndEvt__Widget_TabsContainer_K2Node_ComponentBoundEvent_1_OnTabsGenerated__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.SetupRelevantInventory
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UClass*>                              relevantClasses                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWidget_Window_DarkMode_C::SetupRelevantInventory(TArray<class UClass*> relevantClasses)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.SetupRelevantInventory");
		
		UWidget_Window_DarkMode_C_SetupRelevantInventory_Params params {};
		params.relevantClasses = relevantClasses;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.SlotStackMoveEvent_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget_InventorySlot_C*                     InventorySlot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		EInteractionDirection                              Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Window_DarkMode_C::SlotStackMoveEvent_Event_1(class UWidget_InventorySlot_C* InventorySlot, EInteractionDirection Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.SlotStackMoveEvent_Event_1");
		
		UWidget_Window_DarkMode_C_SlotStackMoveEvent_Event_1_Params params {};
		params.InventorySlot = InventorySlot;
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.ExecuteUbergraph_Widget_Window_DarkMode
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Window_DarkMode_C::ExecuteUbergraph_Widget_Window_DarkMode(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.ExecuteUbergraph_Widget_Window_DarkMode");
		
		UWidget_Window_DarkMode_C_ExecuteUbergraph_Widget_Window_DarkMode_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.OnStackMoved__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget_InventorySlot_C*                     SourceInventorySlot                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Window_DarkMode_C::OnStackMoved__DelegateSignature(class UWidget_InventorySlot_C* SourceInventorySlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.OnStackMoved__DelegateSignature");
		
		UWidget_Window_DarkMode_C_OnStackMoved__DelegateSignature_Params params {};
		params.SourceInventorySlot = SourceInventorySlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.OnRelevantShortcutPressed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget_InventorySlot_C*                     InventorySlot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Window_DarkMode_C::OnRelevantShortcutPressed__DelegateSignature(class UWidget_InventorySlot_C* InventorySlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.OnRelevantShortcutPressed__DelegateSignature");
		
		UWidget_Window_DarkMode_C_OnRelevantShortcutPressed__DelegateSignature_Params params {};
		params.InventorySlot = InventorySlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.OnTabButtonClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Window_DarkMode_C::OnTabButtonClicked__DelegateSignature(int32_t ButtonIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.OnTabButtonClicked__DelegateSignature");
		
		UWidget_Window_DarkMode_C_OnTabButtonClicked__DelegateSignature_Params params {};
		params.ButtonIndex = ButtonIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.OnClose__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Window_DarkMode_C::OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.OnClose__DelegateSignature");
		
		UWidget_Window_DarkMode_C_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_Window_DarkMode_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_Window_DarkMode_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Window_DarkMode.Widget_Window_DarkMode_C");
		return ptr;
	}

}


