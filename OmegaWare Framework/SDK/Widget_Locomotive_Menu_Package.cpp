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
	 * 		Name   -> Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.UpdateZoomSlider
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Locomotive_Menu_C::UpdateZoomSlider()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.UpdateZoomSlider");
		
		UWidget_Locomotive_Menu_C_UpdateZoomSlider_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.NormalizedValueToZoomValue
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             NormalizedValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   ZoomValue                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Locomotive_Menu_C::NormalizedValueToZoomValue(double NormalizedValue, struct FVector2D* ZoomValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.NormalizedValueToZoomValue");
		
		UWidget_Locomotive_Menu_C_NormalizedValueToZoomValue_Params params {};
		params.NormalizedValue = NormalizedValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ZoomValue != nullptr)
			*ZoomValue = params.ZoomValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.UpdateSelfdrivingFeedback
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsSelfDriving                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Locomotive_Menu_C::UpdateSelfdrivingFeedback(bool IsSelfDriving)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.UpdateSelfdrivingFeedback");
		
		UWidget_Locomotive_Menu_C_UpdateSelfdrivingFeedback_Params params {};
		params.IsSelfDriving = IsSelfDriving;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.UpdateCancelDockingButtonState
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Locomotive_Menu_C::UpdateCancelDockingButtonState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.UpdateCancelDockingButtonState");
		
		UWidget_Locomotive_Menu_C_UpdateCancelDockingButtonState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.SetShowCancelDockingButton
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ShowButton                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Animate                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Locomotive_Menu_C::SetShowCancelDockingButton(bool ShowButton, bool Animate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.SetShowCancelDockingButton");
		
		UWidget_Locomotive_Menu_C_SetShowCancelDockingButton_Params params {};
		params.ShowButton = ShowButton;
		params.Animate = Animate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.UpdateTimeTableNoticeVisibility
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Locomotive_Menu_C::UpdateTimeTableNoticeVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.UpdateTimeTableNoticeVisibility");
		
		UWidget_Locomotive_Menu_C_UpdateTimeTableNoticeVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.SetMapFilters
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Locomotive_Menu_C::SetMapFilters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.SetMapFilters");
		
		UWidget_Locomotive_Menu_C_SetMapFilters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.OnEditSettingClosed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               SettingChanged                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Locomotive_Menu_C::OnEditSettingClosed(bool SettingChanged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.OnEditSettingClosed");
		
		UWidget_Locomotive_Menu_C_OnEditSettingClosed_Params params {};
		params.SettingChanged = SettingChanged;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.SetSelfDriving
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsEnabled                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Locomotive_Menu_C::SetSelfDriving(bool IsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.SetSelfDriving");
		
		UWidget_Locomotive_Menu_C_SetSelfDriving_Params params {};
		params.IsEnabled = IsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.SetIsOpenedThroughStation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsOpenedThroughStation                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Locomotive_Menu_C::SetIsOpenedThroughStation(bool IsOpenedThroughStation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.SetIsOpenedThroughStation");
		
		UWidget_Locomotive_Menu_C_SetIsOpenedThroughStation_Params params {};
		params.IsOpenedThroughStation = IsOpenedThroughStation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.SetStatVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Locomotive_Menu_C::SetStatVisibility(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.SetStatVisibility");
		
		UWidget_Locomotive_Menu_C_SetStatVisibility_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.RevertName
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Locomotive_Menu_C::RevertName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.RevertName");
		
		UWidget_Locomotive_Menu_C_RevertName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.SetName
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        NewName                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWidget_Locomotive_Menu_C::SetName(const class FText& NewName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.SetName");
		
		UWidget_Locomotive_Menu_C_SetName_Params params {};
		params.NewName = NewName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.UpdateSpeed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Locomotive_Menu_C::UpdateSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.UpdateSpeed");
		
		UWidget_Locomotive_Menu_C_UpdateSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.UpdatePowerUsage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Locomotive_Menu_C::UpdatePowerUsage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.UpdatePowerUsage");
		
		UWidget_Locomotive_Menu_C_UpdatePowerUsage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.UpdateStations
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Locomotive_Menu_C::UpdateStations()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.UpdateStations");
		
		UWidget_Locomotive_Menu_C_UpdateStations_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_Locomotive_Menu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.Construct");
		
		UWidget_Locomotive_Menu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.BndEvt__mWindow_K2Node_ComponentBoundEvent_2_OnClose__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_Locomotive_Menu_C::BndEvt__mWindow_K2Node_ComponentBoundEvent_2_OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.BndEvt__mWindow_K2Node_ComponentBoundEvent_2_OnClose__DelegateSignature");
		
		UWidget_Locomotive_Menu_C_BndEvt__mWindow_K2Node_ComponentBoundEvent_2_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.BndEvt__Widget_StandardButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_Locomotive_Menu_C::BndEvt__Widget_StandardButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.BndEvt__Widget_StandardButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");
		
		UWidget_Locomotive_Menu_C_BndEvt__Widget_StandardButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.BndEvt__BPW_Train_TimeTable_Setup_K2Node_ComponentBoundEvent_4_OnDiscard__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_Locomotive_Menu_C::BndEvt__BPW_Train_TimeTable_Setup_K2Node_ComponentBoundEvent_4_OnDiscard__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.BndEvt__BPW_Train_TimeTable_Setup_K2Node_ComponentBoundEvent_4_OnDiscard__DelegateSignature");
		
		UWidget_Locomotive_Menu_C_BndEvt__BPW_Train_TimeTable_Setup_K2Node_ComponentBoundEvent_4_OnDiscard__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.BndEvt__BPW_Train_TimeTable_Setup_K2Node_ComponentBoundEvent_5_OnSave__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_Locomotive_Menu_C::BndEvt__BPW_Train_TimeTable_Setup_K2Node_ComponentBoundEvent_5_OnSave__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.BndEvt__BPW_Train_TimeTable_Setup_K2Node_ComponentBoundEvent_5_OnSave__DelegateSignature");
		
		UWidget_Locomotive_Menu_C_BndEvt__BPW_Train_TimeTable_Setup_K2Node_ComponentBoundEvent_5_OnSave__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.OnCustomTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              UpdateTime                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Locomotive_Menu_C::OnCustomTick(float UpdateTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.OnCustomTick");
		
		UWidget_Locomotive_Menu_C_OnCustomTick_Params params {};
		params.UpdateTime = UpdateTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.BndEvt__mName_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Locomotive_Menu_C::BndEvt__mName_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.BndEvt__mName_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature");
		
		UWidget_Locomotive_Menu_C_BndEvt__mName_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.BndEvt__mEditTimeTableButton_1_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_Locomotive_Menu_C::BndEvt__mEditTimeTableButton_1_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.BndEvt__mEditTimeTableButton_1_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UWidget_Locomotive_Menu_C_BndEvt__mEditTimeTableButton_1_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_Locomotive_Menu_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.Destruct");
		
		UWidget_Locomotive_Menu_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.BndEvt__BPW_Train_TimeTable_Setup_K2Node_ComponentBoundEvent_6_OnStationEditClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FTimeTableStop                              mStation                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UBPW_Train_TimeTable_SetupStation_C*         StationWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Locomotive_Menu_C::BndEvt__BPW_Train_TimeTable_Setup_K2Node_ComponentBoundEvent_6_OnStationEditClicked__DelegateSignature(const struct FTimeTableStop& mStation, class UBPW_Train_TimeTable_SetupStation_C* StationWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.BndEvt__BPW_Train_TimeTable_Setup_K2Node_ComponentBoundEvent_6_OnStationEditClicked__DelegateSignature");
		
		UWidget_Locomotive_Menu_C_BndEvt__BPW_Train_TimeTable_Setup_K2Node_ComponentBoundEvent_6_OnStationEditClicked__DelegateSignature_Params params {};
		params.mStation = mStation;
		params.StationWidget = StationWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.BndEvt__BPW_Train_TimeTable_Setup_K2Node_ComponentBoundEvent_7_OnStationUnhovered__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FTimeTableStop                              Station                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWidget_Locomotive_Menu_C::BndEvt__BPW_Train_TimeTable_Setup_K2Node_ComponentBoundEvent_7_OnStationUnhovered__DelegateSignature(const struct FTimeTableStop& Station)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.BndEvt__BPW_Train_TimeTable_Setup_K2Node_ComponentBoundEvent_7_OnStationUnhovered__DelegateSignature");
		
		UWidget_Locomotive_Menu_C_BndEvt__BPW_Train_TimeTable_Setup_K2Node_ComponentBoundEvent_7_OnStationUnhovered__DelegateSignature_Params params {};
		params.Station = Station;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.BndEvt__BPW_Train_TimeTable_Setup_K2Node_ComponentBoundEvent_9_OnStationHovered__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FTimeTableStop                              Station                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWidget_Locomotive_Menu_C::BndEvt__BPW_Train_TimeTable_Setup_K2Node_ComponentBoundEvent_9_OnStationHovered__DelegateSignature(const struct FTimeTableStop& Station)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.BndEvt__BPW_Train_TimeTable_Setup_K2Node_ComponentBoundEvent_9_OnStationHovered__DelegateSignature");
		
		UWidget_Locomotive_Menu_C_BndEvt__BPW_Train_TimeTable_Setup_K2Node_ComponentBoundEvent_9_OnStationHovered__DelegateSignature_Params params {};
		params.Station = Station;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.BndEvt__BPW_Train_TimeTable_ActiveList_K2Node_ComponentBoundEvent_8_OnStationHovered__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FTimeTableStop                              Station                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWidget_Locomotive_Menu_C::BndEvt__BPW_Train_TimeTable_ActiveList_K2Node_ComponentBoundEvent_8_OnStationHovered__DelegateSignature(const struct FTimeTableStop& Station)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.BndEvt__BPW_Train_TimeTable_ActiveList_K2Node_ComponentBoundEvent_8_OnStationHovered__DelegateSignature");
		
		UWidget_Locomotive_Menu_C_BndEvt__BPW_Train_TimeTable_ActiveList_K2Node_ComponentBoundEvent_8_OnStationHovered__DelegateSignature_Params params {};
		params.Station = Station;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.BndEvt__BPW_Train_TimeTable_ActiveList_K2Node_ComponentBoundEvent_10_OnStationUnhovered__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FTimeTableStop                              Station                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWidget_Locomotive_Menu_C::BndEvt__BPW_Train_TimeTable_ActiveList_K2Node_ComponentBoundEvent_10_OnStationUnhovered__DelegateSignature(const struct FTimeTableStop& Station)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.BndEvt__BPW_Train_TimeTable_ActiveList_K2Node_ComponentBoundEvent_10_OnStationUnhovered__DelegateSignature");
		
		UWidget_Locomotive_Menu_C_BndEvt__BPW_Train_TimeTable_ActiveList_K2Node_ComponentBoundEvent_10_OnStationUnhovered__DelegateSignature_Params params {};
		params.Station = Station;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.BndEvt__mCancelDockingButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_Locomotive_Menu_C::BndEvt__mCancelDockingButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.BndEvt__mCancelDockingButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature");
		
		UWidget_Locomotive_Menu_C_BndEvt__mCancelDockingButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.OnDockingStateChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ETrainDockingState                                 State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Locomotive_Menu_C::OnDockingStateChanged(ETrainDockingState State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.OnDockingStateChanged");
		
		UWidget_Locomotive_Menu_C_OnDockingStateChanged_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.BndEvt__Widget_Locomotive_Menu_Widget_Map_K2Node_ComponentBoundEvent_12_ZoomChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_Locomotive_Menu_C::BndEvt__Widget_Locomotive_Menu_Widget_Map_K2Node_ComponentBoundEvent_12_ZoomChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.BndEvt__Widget_Locomotive_Menu_Widget_Map_K2Node_ComponentBoundEvent_12_ZoomChanged__DelegateSignature");
		
		UWidget_Locomotive_Menu_C_BndEvt__Widget_Locomotive_Menu_Widget_Map_K2Node_ComponentBoundEvent_12_ZoomChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.BndEvt__Widget_Locomotive_Menu_mZoomSlider_K2Node_ComponentBoundEvent_13_OnFloatValueChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Locomotive_Menu_C::BndEvt__Widget_Locomotive_Menu_mZoomSlider_K2Node_ComponentBoundEvent_13_OnFloatValueChangedEvent__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.BndEvt__Widget_Locomotive_Menu_mZoomSlider_K2Node_ComponentBoundEvent_13_OnFloatValueChangedEvent__DelegateSignature");
		
		UWidget_Locomotive_Menu_C_BndEvt__Widget_Locomotive_Menu_mZoomSlider_K2Node_ComponentBoundEvent_13_OnFloatValueChangedEvent__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.ExecuteUbergraph_Widget_Locomotive_Menu
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Locomotive_Menu_C::ExecuteUbergraph_Widget_Locomotive_Menu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.ExecuteUbergraph_Widget_Locomotive_Menu");
		
		UWidget_Locomotive_Menu_C_ExecuteUbergraph_Widget_Locomotive_Menu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.OnMenuClosed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Locomotive_Menu_C::OnMenuClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Locomotive_Menu.Widget_Locomotive_Menu_C.OnMenuClosed__DelegateSignature");
		
		UWidget_Locomotive_Menu_C_OnMenuClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_Locomotive_Menu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_Locomotive_Menu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Locomotive_Menu.Widget_Locomotive_Menu_C");
		return ptr;
	}

}


