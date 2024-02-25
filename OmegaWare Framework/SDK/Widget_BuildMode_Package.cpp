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
	 * 		Name   -> Function Widget_BuildMode.Widget_BuildMode_C.OnHologramNudgeFailed
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGHologram*                                 Hologram                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		ENudgeFailReason                                   Reason                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMode_C::OnHologramNudgeFailed(class AFGHologram* Hologram, ENudgeFailReason Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMode.Widget_BuildMode_C.OnHologramNudgeFailed");
		
		UWidget_BuildMode_C_OnHologramNudgeFailed_Params params {};
		params.Hologram = Hologram;
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMode.Widget_BuildMode_C.OnHologramLockStateChanged
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGHologram*                                 Hologram                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Locked                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMode_C::OnHologramLockStateChanged(class AFGHologram* Hologram, bool Locked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMode.Widget_BuildMode_C.OnHologramLockStateChanged");
		
		UWidget_BuildMode_C_OnHologramLockStateChanged_Params params {};
		params.Hologram = Hologram;
		params.Locked = Locked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMode.Widget_BuildMode_C.GetGameModeFeedback
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_BuildMode_C::GetGameModeFeedback()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMode.Widget_BuildMode_C.GetGameModeFeedback");
		
		UWidget_BuildMode_C_GetGameModeFeedback_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMode.Widget_BuildMode_C.SortAndTruncateCost
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FItemAmount>                         cost                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FItemAmount>                         SortedCostSlots                                            (Parm, OutParm)
	 */
	void UWidget_BuildMode_C::SortAndTruncateCost(TArray<struct FItemAmount>* cost, TArray<struct FItemAmount>* SortedCostSlots)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMode.Widget_BuildMode_C.SortAndTruncateCost");
		
		UWidget_BuildMode_C_SortAndTruncateCost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (cost != nullptr)
			*cost = params.cost;
		if (SortedCostSlots != nullptr)
			*SortedCostSlots = params.SortedCostSlots;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMode.Widget_BuildMode_C.SetKeybindingHints
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FStruct_KeybindingHint>              mKeybinds                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWidget_BuildMode_C::SetKeybindingHints(TArray<struct FStruct_KeybindingHint>* mKeybinds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMode.Widget_BuildMode_C.SetKeybindingHints");
		
		UWidget_BuildMode_C_SetKeybindingHints_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (mKeybinds != nullptr)
			*mKeybinds = params.mKeybinds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMode.Widget_BuildMode_C.ShowHideBuildModeHUD
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               mHideBuildModeHUD                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMode_C::ShowHideBuildModeHUD(bool mHideBuildModeHUD)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMode.Widget_BuildMode_C.ShowHideBuildModeHUD");
		
		UWidget_BuildMode_C_ShowHideBuildModeHUD_Params params {};
		params.mHideBuildModeHUD = mHideBuildModeHUD;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMode.Widget_BuildMode_C.FormatName
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UClass*                                      Descriptor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ZoopAmount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void UWidget_BuildMode_C::FormatName(class UClass* Descriptor, double ZoopAmount, class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMode.Widget_BuildMode_C.FormatName");
		
		UWidget_BuildMode_C_FormatName_Params params {};
		params.Descriptor = Descriptor;
		params.ZoopAmount = ZoopAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMode.Widget_BuildMode_C.OpenQuickSwitchBuilding
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      mItemDescriptor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMode_C::OpenQuickSwitchBuilding(class UClass* mItemDescriptor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMode.Widget_BuildMode_C.OpenQuickSwitchBuilding");
		
		UWidget_BuildMode_C_OpenQuickSwitchBuilding_Params params {};
		params.mItemDescriptor = mItemDescriptor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMode.Widget_BuildMode_C.SetCurrentBuildModeText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      buildMode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void UWidget_BuildMode_C::SetCurrentBuildModeText(class UClass* buildMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMode.Widget_BuildMode_C.SetCurrentBuildModeText");
		
		UWidget_BuildMode_C_SetCurrentBuildModeText_Params params {};
		params.buildMode = buildMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMode.Widget_BuildMode_C.SetHideAllHints
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               mHideAllHints                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMode_C::SetHideAllHints(bool mHideAllHints)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMode.Widget_BuildMode_C.SetHideAllHints");
		
		UWidget_BuildMode_C_SetHideAllHints_Params params {};
		params.mHideAllHints = mHideAllHints;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMode.Widget_BuildMode_C.SetName
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        InText                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWidget_BuildMode_C::SetName(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMode.Widget_BuildMode_C.SetName");
		
		UWidget_BuildMode_C_SetName_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMode.Widget_BuildMode_C.GetHasMultipleSplineModes
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool UWidget_BuildMode_C::GetHasMultipleSplineModes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMode.Widget_BuildMode_C.GetHasMultipleSplineModes");
		
		UWidget_BuildMode_C_GetHasMultipleSplineModes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMode.Widget_BuildMode_C.UpdateHintVisibility
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_BuildMode_C::UpdateHintVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMode.Widget_BuildMode_C.UpdateHintVisibility");
		
		UWidget_BuildMode_C_UpdateHintVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMode.Widget_BuildMode_C.SetHologramCost
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FItemAmount>                         mCurrentHologramCost                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               HasValidState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMode_C::SetHologramCost(TArray<struct FItemAmount>* mCurrentHologramCost, bool HasValidState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMode.Widget_BuildMode_C.SetHologramCost");
		
		UWidget_BuildMode_C_SetHologramCost_Params params {};
		params.HasValidState = HasValidState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (mCurrentHologramCost != nullptr)
			*mCurrentHologramCost = params.mCurrentHologramCost;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMode.Widget_BuildMode_C.UpdateBuildDisqualifiersText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UClass*>                              Disqualifiers                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWidget_BuildMode_C::UpdateBuildDisqualifiersText(TArray<class UClass*>* Disqualifiers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMode.Widget_BuildMode_C.UpdateBuildDisqualifiersText");
		
		UWidget_BuildMode_C_UpdateBuildDisqualifiersText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Disqualifiers != nullptr)
			*Disqualifiers = params.Disqualifiers;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMode.Widget_BuildMode_C.UpdateCost
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_BuildMode_C::UpdateCost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMode.Widget_BuildMode_C.UpdateCost");
		
		UWidget_BuildMode_C_UpdateCost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMode.Widget_BuildMode_C.CreateCostSlots
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FItemAmount>                         cost                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWidget_BuildMode_C::CreateCostSlots(TArray<struct FItemAmount>* cost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMode.Widget_BuildMode_C.CreateCostSlots");
		
		UWidget_BuildMode_C_CreateCostSlots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (cost != nullptr)
			*cost = params.cost;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMode.Widget_BuildMode_C.InpActEvt_IA_QuickSwitch_K2Node_EnhancedInputActionEvent_7
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputActionValue                           ActionValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		float                                              ElapsedTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TriggeredTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInputAction*                                SourceAction                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMode_C::InpActEvt_IA_QuickSwitch_K2Node_EnhancedInputActionEvent_7(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMode.Widget_BuildMode_C.InpActEvt_IA_QuickSwitch_K2Node_EnhancedInputActionEvent_7");
		
		UWidget_BuildMode_C_InpActEvt_IA_QuickSwitch_K2Node_EnhancedInputActionEvent_7_Params params {};
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
	 * 		Name   -> Function Widget_BuildMode.Widget_BuildMode_C.InpActEvt_IA_QuickSwitch_K2Node_EnhancedInputActionEvent_6
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputActionValue                           ActionValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		float                                              ElapsedTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TriggeredTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInputAction*                                SourceAction                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMode_C::InpActEvt_IA_QuickSwitch_K2Node_EnhancedInputActionEvent_6(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMode.Widget_BuildMode_C.InpActEvt_IA_QuickSwitch_K2Node_EnhancedInputActionEvent_6");
		
		UWidget_BuildMode_C_InpActEvt_IA_QuickSwitch_K2Node_EnhancedInputActionEvent_6_Params params {};
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
	 * 		Name   -> Function Widget_BuildMode.Widget_BuildMode_C.InpActEvt_IA_QuickSwitch_K2Node_EnhancedInputActionEvent_5
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputActionValue                           ActionValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		float                                              ElapsedTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TriggeredTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInputAction*                                SourceAction                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMode_C::InpActEvt_IA_QuickSwitch_K2Node_EnhancedInputActionEvent_5(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMode.Widget_BuildMode_C.InpActEvt_IA_QuickSwitch_K2Node_EnhancedInputActionEvent_5");
		
		UWidget_BuildMode_C_InpActEvt_IA_QuickSwitch_K2Node_EnhancedInputActionEvent_5_Params params {};
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
	 * 		Name   -> Function Widget_BuildMode.Widget_BuildMode_C.InpActEvt_IA_ModeSelect_K2Node_EnhancedInputActionEvent_4
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputActionValue                           ActionValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		float                                              ElapsedTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TriggeredTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInputAction*                                SourceAction                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMode_C::InpActEvt_IA_ModeSelect_K2Node_EnhancedInputActionEvent_4(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMode.Widget_BuildMode_C.InpActEvt_IA_ModeSelect_K2Node_EnhancedInputActionEvent_4");
		
		UWidget_BuildMode_C_InpActEvt_IA_ModeSelect_K2Node_EnhancedInputActionEvent_4_Params params {};
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
	 * 		Name   -> Function Widget_BuildMode.Widget_BuildMode_C.InpActEvt_IA_ModeSelect_K2Node_EnhancedInputActionEvent_3
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputActionValue                           ActionValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		float                                              ElapsedTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TriggeredTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInputAction*                                SourceAction                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMode_C::InpActEvt_IA_ModeSelect_K2Node_EnhancedInputActionEvent_3(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMode.Widget_BuildMode_C.InpActEvt_IA_ModeSelect_K2Node_EnhancedInputActionEvent_3");
		
		UWidget_BuildMode_C_InpActEvt_IA_ModeSelect_K2Node_EnhancedInputActionEvent_3_Params params {};
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
	 * 		Name   -> Function Widget_BuildMode.Widget_BuildMode_C.InpActEvt_IA_ModeSelect_K2Node_EnhancedInputActionEvent_2
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputActionValue                           ActionValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		float                                              ElapsedTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TriggeredTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInputAction*                                SourceAction                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMode_C::InpActEvt_IA_ModeSelect_K2Node_EnhancedInputActionEvent_2(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMode.Widget_BuildMode_C.InpActEvt_IA_ModeSelect_K2Node_EnhancedInputActionEvent_2");
		
		UWidget_BuildMode_C_InpActEvt_IA_ModeSelect_K2Node_EnhancedInputActionEvent_2_Params params {};
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
	 * 		Name   -> Function Widget_BuildMode.Widget_BuildMode_C.InpActEvt_IA_HideHUD_K2Node_EnhancedInputActionEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputActionValue                           ActionValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		float                                              ElapsedTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TriggeredTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInputAction*                                SourceAction                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMode_C::InpActEvt_IA_HideHUD_K2Node_EnhancedInputActionEvent_1(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMode.Widget_BuildMode_C.InpActEvt_IA_HideHUD_K2Node_EnhancedInputActionEvent_1");
		
		UWidget_BuildMode_C_InpActEvt_IA_HideHUD_K2Node_EnhancedInputActionEvent_1_Params params {};
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
	 * 		Name   -> Function Widget_BuildMode.Widget_BuildMode_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_BuildMode_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMode.Widget_BuildMode_C.Construct");
		
		UWidget_BuildMode_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMode.Widget_BuildMode_C.OnEscapePressed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_BuildMode_C::OnEscapePressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMode.Widget_BuildMode_C.OnEscapePressed");
		
		UWidget_BuildMode_C_OnEscapePressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMode.Widget_BuildMode_C.OnCustomTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              UpdateTime                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMode_C::OnCustomTick(float UpdateTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMode.Widget_BuildMode_C.OnCustomTick");
		
		UWidget_BuildMode_C_OnCustomTick_Params params {};
		params.UpdateTime = UpdateTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMode.Widget_BuildMode_C.PlayOnBuildModeChangedAnimation
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      buildMode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMode_C::PlayOnBuildModeChangedAnimation(class UClass* buildMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMode.Widget_BuildMode_C.PlayOnBuildModeChangedAnimation");
		
		UWidget_BuildMode_C_PlayOnBuildModeChangedAnimation_Params params {};
		params.buildMode = buildMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMode.Widget_BuildMode_C.OnRecipeSampled
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      newRecipe                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMode_C::OnRecipeSampled(class UClass* newRecipe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMode.Widget_BuildMode_C.OnRecipeSampled");
		
		UWidget_BuildMode_C_OnRecipeSampled_Params params {};
		params.newRecipe = newRecipe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMode.Widget_BuildMode_C.OnOpenQuickSwitchBuildings
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_BuildMode_C::OnOpenQuickSwitchBuildings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMode.Widget_BuildMode_C.OnOpenQuickSwitchBuildings");
		
		UWidget_BuildMode_C_OnOpenQuickSwitchBuildings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMode.Widget_BuildMode_C.OnCloseQuickSwitchBuilding
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_BuildMode_C::OnCloseQuickSwitchBuilding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMode.Widget_BuildMode_C.OnCloseQuickSwitchBuilding");
		
		UWidget_BuildMode_C_OnCloseQuickSwitchBuilding_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMode.Widget_BuildMode_C.EnableHighContrastBuildMode
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_BuildMode_C::EnableHighContrastBuildMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMode.Widget_BuildMode_C.EnableHighContrastBuildMode");
		
		UWidget_BuildMode_C_EnableHighContrastBuildMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMode.Widget_BuildMode_C.SetSmallSlots
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_BuildMode_C::SetSmallSlots()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMode.Widget_BuildMode_C.SetSmallSlots");
		
		UWidget_BuildMode_C_SetSmallSlots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMode.Widget_BuildMode_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMode_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMode.Widget_BuildMode_C.PreConstruct");
		
		UWidget_BuildMode_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMode.Widget_BuildMode_C.OnOpenQuickSwitchBuildModes
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_BuildMode_C::OnOpenQuickSwitchBuildModes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMode.Widget_BuildMode_C.OnOpenQuickSwitchBuildModes");
		
		UWidget_BuildMode_C_OnOpenQuickSwitchBuildModes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMode.Widget_BuildMode_C.BndEvt__BPW_Build_QuickSwitch_K2Node_ComponentBoundEvent_1_OnBuildingClose__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      recipe                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMode_C::BndEvt__BPW_Build_QuickSwitch_K2Node_ComponentBoundEvent_1_OnBuildingClose__DelegateSignature(class UClass* recipe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMode.Widget_BuildMode_C.BndEvt__BPW_Build_QuickSwitch_K2Node_ComponentBoundEvent_1_OnBuildingClose__DelegateSignature");
		
		UWidget_BuildMode_C_BndEvt__BPW_Build_QuickSwitch_K2Node_ComponentBoundEvent_1_OnBuildingClose__DelegateSignature_Params params {};
		params.recipe = recipe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMode.Widget_BuildMode_C.BndEvt__BPW_Build_QuickSwitch_K2Node_ComponentBoundEvent_2_OnBuildModeClosed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      buildMode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMode_C::BndEvt__BPW_Build_QuickSwitch_K2Node_ComponentBoundEvent_2_OnBuildModeClosed__DelegateSignature(class UClass* buildMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMode.Widget_BuildMode_C.BndEvt__BPW_Build_QuickSwitch_K2Node_ComponentBoundEvent_2_OnBuildModeClosed__DelegateSignature");
		
		UWidget_BuildMode_C_BndEvt__BPW_Build_QuickSwitch_K2Node_ComponentBoundEvent_2_OnBuildModeClosed__DelegateSignature_Params params {};
		params.buildMode = buildMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMode.Widget_BuildMode_C.OnCloseQuickSwitchBuildMode
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_BuildMode_C::OnCloseQuickSwitchBuildMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMode.Widget_BuildMode_C.OnCloseQuickSwitchBuildMode");
		
		UWidget_BuildMode_C_OnCloseQuickSwitchBuildMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMode.Widget_BuildMode_C.OnHotbarUpdatedForMaterialDescriptor
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      MaterialDesc                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void UWidget_BuildMode_C::OnHotbarUpdatedForMaterialDescriptor(class UClass* MaterialDesc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMode.Widget_BuildMode_C.OnHotbarUpdatedForMaterialDescriptor");
		
		UWidget_BuildMode_C_OnHotbarUpdatedForMaterialDescriptor_Params params {};
		params.MaterialDesc = MaterialDesc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMode.Widget_BuildMode_C.OnZoopUpdated
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              currentZoop                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              maxZoop                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     zoopLocation                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMode_C::OnZoopUpdated(float currentZoop, float maxZoop, const struct FVector& zoopLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMode.Widget_BuildMode_C.OnZoopUpdated");
		
		UWidget_BuildMode_C_OnZoopUpdated_Params params {};
		params.currentZoop = currentZoop;
		params.maxZoop = maxZoop;
		params.zoopLocation = zoopLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMode.Widget_BuildMode_C.OnRecipeChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      newRecipe                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void UWidget_BuildMode_C::OnRecipeChanged(class UClass* newRecipe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMode.Widget_BuildMode_C.OnRecipeChanged");
		
		UWidget_BuildMode_C_OnRecipeChanged_Params params {};
		params.newRecipe = newRecipe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMode.Widget_BuildMode_C.SetOwningState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGBuildGunState*                            mOwningState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMode_C::SetOwningState(class UFGBuildGunState* mOwningState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMode.Widget_BuildMode_C.SetOwningState");
		
		UWidget_BuildMode_C_SetOwningState_Params params {};
		params.mOwningState = mOwningState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMode.Widget_BuildMode_C.BndEvt__Widget_BuildMode_BPW_Build_QuickSwitch_K2Node_ComponentBoundEvent_0_OnBlueprintClosed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UFGBlueprintDescriptor*                      Blueprint                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMode_C::BndEvt__Widget_BuildMode_BPW_Build_QuickSwitch_K2Node_ComponentBoundEvent_0_OnBlueprintClosed__DelegateSignature(class UFGBlueprintDescriptor* Blueprint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMode.Widget_BuildMode_C.BndEvt__Widget_BuildMode_BPW_Build_QuickSwitch_K2Node_ComponentBoundEvent_0_OnBlueprintClosed__DelegateSignature");
		
		UWidget_BuildMode_C_BndEvt__Widget_BuildMode_BPW_Build_QuickSwitch_K2Node_ComponentBoundEvent_0_OnBlueprintClosed__DelegateSignature_Params params {};
		params.Blueprint = Blueprint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMode.Widget_BuildMode_C.ExecuteUbergraph_Widget_BuildMode
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMode_C::ExecuteUbergraph_Widget_BuildMode(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMode.Widget_BuildMode_C.ExecuteUbergraph_Widget_BuildMode");
		
		UWidget_BuildMode_C_ExecuteUbergraph_Widget_BuildMode_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMode.Widget_BuildMode_C.OnQuickSwitchBuildModeButtonDown__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_BuildMode_C::OnQuickSwitchBuildModeButtonDown__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMode.Widget_BuildMode_C.OnQuickSwitchBuildModeButtonDown__DelegateSignature");
		
		UWidget_BuildMode_C_OnQuickSwitchBuildModeButtonDown__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMode.Widget_BuildMode_C.OnQuickSwitchClosed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      recipe                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMode_C::OnQuickSwitchClosed__DelegateSignature(class UClass* recipe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMode.Widget_BuildMode_C.OnQuickSwitchClosed__DelegateSignature");
		
		UWidget_BuildMode_C_OnQuickSwitchClosed__DelegateSignature_Params params {};
		params.recipe = recipe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_BuildMode.Widget_BuildMode_C.OnQuickSwitchBuildingButtonDown__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_BuildMode_C::OnQuickSwitchBuildingButtonDown__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMode.Widget_BuildMode_C.OnQuickSwitchBuildingButtonDown__DelegateSignature");
		
		UWidget_BuildMode_C_OnQuickSwitchBuildingButtonDown__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_BuildMode_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_BuildMode_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_BuildMode.Widget_BuildMode_C");
		return ptr;
	}

}


