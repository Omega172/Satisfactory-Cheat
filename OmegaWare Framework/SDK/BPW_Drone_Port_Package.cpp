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
	 * 		Name   -> Function BPW_Drone_Port.BPW_Drone_Port_C.InitInventoryWidgetCallbacks
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget_Inventory_C*                         InventoryComponent                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Drone_Port_C::InitInventoryWidgetCallbacks(class UWidget_Inventory_C* InventoryComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Drone_Port.BPW_Drone_Port_C.InitInventoryWidgetCallbacks");
		
		UBPW_Drone_Port_C_InitInventoryWidgetCallbacks_Params params {};
		params.InventoryComponent = InventoryComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Drone_Port.BPW_Drone_Port_C.TryDropOnSlot
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget_InventorySlot_C*                     TargetSlot                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget_InventorySlot_C*                     OtherSlot                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               SwapItemIfOccupied                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Drone_Port_C::TryDropOnSlot(class UWidget_InventorySlot_C* TargetSlot, class UWidget_InventorySlot_C* OtherSlot, bool SwapItemIfOccupied, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Drone_Port.BPW_Drone_Port_C.TryDropOnSlot");
		
		UBPW_Drone_Port_C_TryDropOnSlot_Params params {};
		params.TargetSlot = TargetSlot;
		params.OtherSlot = OtherSlot;
		params.SwapItemIfOccupied = SwapItemIfOccupied;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Drone_Port.BPW_Drone_Port_C.GetInOutTransferTooltip
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class UWidget* UBPW_Drone_Port_C::GetInOutTransferTooltip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Drone_Port.BPW_Drone_Port_C.GetInOutTransferTooltip");
		
		UBPW_Drone_Port_C_GetInOutTransferTooltip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Drone_Port.BPW_Drone_Port_C.GetMaxTransferTooltip
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class UWidget* UBPW_Drone_Port_C::GetMaxTransferTooltip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Drone_Port.BPW_Drone_Port_C.GetMaxTransferTooltip");
		
		UBPW_Drone_Port_C_GetMaxTransferTooltip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Drone_Port.BPW_Drone_Port_C.DropInventorySlotStack
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget_InventorySlot_C*                     InventorySlot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               WasStackMoved                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Drone_Port_C::DropInventorySlotStack(class UWidget_InventorySlot_C* InventorySlot, bool* WasStackMoved)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Drone_Port.BPW_Drone_Port_C.DropInventorySlotStack");
		
		UBPW_Drone_Port_C_DropInventorySlotStack_Params params {};
		params.InventorySlot = InventorySlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WasStackMoved != nullptr)
			*WasStackMoved = params.WasStackMoved;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Drone_Port.BPW_Drone_Port_C.GetBatteriesPerMinTooltip
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class UWidget* UBPW_Drone_Port_C::GetBatteriesPerMinTooltip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Drone_Port.BPW_Drone_Port_C.GetBatteriesPerMinTooltip");
		
		UBPW_Drone_Port_C_GetBatteriesPerMinTooltip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Drone_Port.BPW_Drone_Port_C.SetAmountSearchResultsText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            StationLength                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsStationName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Drone_Port_C::SetAmountSearchResultsText(int32_t StationLength, bool IsStationName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Drone_Port.BPW_Drone_Port_C.SetAmountSearchResultsText");
		
		UBPW_Drone_Port_C_SetAmountSearchResultsText_Params params {};
		params.StationLength = StationLength;
		params.IsStationName = IsStationName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Drone_Port.BPW_Drone_Port_C.SetAmountOfStationsText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            StationLength                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Drone_Port_C::SetAmountOfStationsText(int32_t StationLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Drone_Port.BPW_Drone_Port_C.SetAmountOfStationsText");
		
		UBPW_Drone_Port_C_SetAmountOfStationsText_Params params {};
		params.StationLength = StationLength;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Drone_Port.BPW_Drone_Port_C.ClearAndHideSearchResults
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Drone_Port_C::ClearAndHideSearchResults()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Drone_Port.BPW_Drone_Port_C.ClearAndHideSearchResults");
		
		UBPW_Drone_Port_C_ClearAndHideSearchResults_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Drone_Port.BPW_Drone_Port_C.OnSearchCreateResults
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_Drone_Port_C::OnSearchCreateResults(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Drone_Port.BPW_Drone_Port_C.OnSearchCreateResults");
		
		UBPW_Drone_Port_C_OnSearchCreateResults_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Drone_Port.BPW_Drone_Port_C.PopulateAllStationsList
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               connectionsOnly                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Filter                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UVerticalBox*                                VerticalBox                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Drone_Port_C::PopulateAllStationsList(bool connectionsOnly, const class FString& Filter, class UVerticalBox* VerticalBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Drone_Port.BPW_Drone_Port_C.PopulateAllStationsList");
		
		UBPW_Drone_Port_C_PopulateAllStationsList_Params params {};
		params.connectionsOnly = connectionsOnly;
		params.Filter = Filter;
		params.VerticalBox = VerticalBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Drone_Port.BPW_Drone_Port_C.UnbindAllEvents
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Drone_Port_C::UnbindAllEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Drone_Port.BPW_Drone_Port_C.UnbindAllEvents");
		
		UBPW_Drone_Port_C_UnbindAllEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Drone_Port.BPW_Drone_Port_C.GetPowerTooltip
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class UWidget* UBPW_Drone_Port_C::GetPowerTooltip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Drone_Port.BPW_Drone_Port_C.GetPowerTooltip");
		
		UBPW_Drone_Port_C_GetPowerTooltip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Drone_Port.BPW_Drone_Port_C.GetRoundtripTooltip
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class UWidget* UBPW_Drone_Port_C::GetRoundtripTooltip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Drone_Port.BPW_Drone_Port_C.GetRoundtripTooltip");
		
		UBPW_Drone_Port_C_GetRoundtripTooltip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Drone_Port.BPW_Drone_Port_C.GetBatteryTooltip
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class UWidget* UBPW_Drone_Port_C::GetBatteryTooltip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Drone_Port.BPW_Drone_Port_C.GetBatteryTooltip");
		
		UBPW_Drone_Port_C_GetBatteryTooltip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Drone_Port.BPW_Drone_Port_C.PopulateConnectedStationsList
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               connectionsOnly                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Filter                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UVerticalBox*                                ConnectedStationsList                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		class UVerticalBox*                                CurrentStationList                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Drone_Port_C::PopulateConnectedStationsList(bool connectionsOnly, const class FString& Filter, class UVerticalBox* ConnectedStationsList, class UVerticalBox* CurrentStationList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Drone_Port.BPW_Drone_Port_C.PopulateConnectedStationsList");
		
		UBPW_Drone_Port_C_PopulateConnectedStationsList_Params params {};
		params.connectionsOnly = connectionsOnly;
		params.Filter = Filter;
		params.ConnectedStationsList = ConnectedStationsList;
		params.CurrentStationList = CurrentStationList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Drone_Port.BPW_Drone_Port_C.UpdateDroneTransferRate
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Drone_Port_C::UpdateDroneTransferRate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Drone_Port.BPW_Drone_Port_C.UpdateDroneTransferRate");
		
		UBPW_Drone_Port_C_UpdateDroneTransferRate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Drone_Port.BPW_Drone_Port_C.UpdateDronePortStats
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Drone_Port_C::UpdateDronePortStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Drone_Port.BPW_Drone_Port_C.UpdateDronePortStats");
		
		UBPW_Drone_Port_C_UpdateDronePortStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Drone_Port.BPW_Drone_Port_C.UpdateDroneStatus
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Drone_Port_C::UpdateDroneStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Drone_Port.BPW_Drone_Port_C.UpdateDroneStatus");
		
		UBPW_Drone_Port_C_UpdateDroneStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Drone_Port.BPW_Drone_Port_C.SetStationNameInputText
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        mStationNameText                                           (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_Drone_Port_C::SetStationNameInputText(const class FText& mStationNameText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Drone_Port.BPW_Drone_Port_C.SetStationNameInputText");
		
		UBPW_Drone_Port_C_SetStationNameInputText_Params params {};
		params.mStationNameText = mStationNameText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Drone_Port.BPW_Drone_Port_C.Init Station Name Input Text
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGDroneStationInfo*                         stationInfo                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Drone_Port_C::InitStationNameInputText(class AFGDroneStationInfo* stationInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Drone_Port.BPW_Drone_Port_C.Init Station Name Input Text");
		
		UBPW_Drone_Port_C_InitStationNameInputText_Params params {};
		params.stationInfo = stationInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Drone_Port.BPW_Drone_Port_C.GetManufacturingWarningVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABuild_DroneStation_C*                       DroneStation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Drone_Port_C::GetManufacturingWarningVisibility(class ABuild_DroneStation_C* DroneStation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Drone_Port.BPW_Drone_Port_C.GetManufacturingWarningVisibility");
		
		UBPW_Drone_Port_C_GetManufacturingWarningVisibility_Params params {};
		params.DroneStation = DroneStation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Drone_Port.BPW_Drone_Port_C.UpdateWindowText
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Drone_Port_C::UpdateWindowText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Drone_Port.BPW_Drone_Port_C.UpdateWindowText");
		
		UBPW_Drone_Port_C_UpdateWindowText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Drone_Port.BPW_Drone_Port_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_Drone_Port_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Drone_Port.BPW_Drone_Port_C.Construct");
		
		UBPW_Drone_Port_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Drone_Port.BPW_Drone_Port_C.BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_Drone_Port_C::BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Drone_Port.BPW_Drone_Port_C.BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature");
		
		UBPW_Drone_Port_C_BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Drone_Port.BPW_Drone_Port_C.Init
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPW_Drone_Port_C::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Drone_Port.BPW_Drone_Port_C.Init");
		
		UBPW_Drone_Port_C_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Drone_Port.BPW_Drone_Port_C.BndEvt__mStationNameTextObject_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Drone_Port_C::BndEvt__mStationNameTextObject_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Drone_Port.BPW_Drone_Port_C.BndEvt__mStationNameTextObject_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature");
		
		UBPW_Drone_Port_C_BndEvt__mStationNameTextObject_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Drone_Port.BPW_Drone_Port_C.BndEvt__mSortButtonInput_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_Drone_Port_C::BndEvt__mSortButtonInput_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Drone_Port.BPW_Drone_Port_C.BndEvt__mSortButtonInput_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");
		
		UBPW_Drone_Port_C_BndEvt__mSortButtonInput_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Drone_Port.BPW_Drone_Port_C.BndEvt__mSortButtonOutput_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_Drone_Port_C::BndEvt__mSortButtonOutput_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Drone_Port.BPW_Drone_Port_C.BndEvt__mSortButtonOutput_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");
		
		UBPW_Drone_Port_C_BndEvt__mSortButtonOutput_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Drone_Port.BPW_Drone_Port_C.OnDroneStatusChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EDroneStatus                                       droneStatus                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Drone_Port_C::OnDroneStatusChanged(EDroneStatus droneStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Drone_Port.BPW_Drone_Port_C.OnDroneStatusChanged");
		
		UBPW_Drone_Port_C_OnDroneStatusChanged_Params params {};
		params.droneStatus = droneStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Drone_Port.BPW_Drone_Port_C.OnEstimatedRoundTripTimeChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              estimatedRoundTripTime                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Drone_Port_C::OnEstimatedRoundTripTimeChanged(float estimatedRoundTripTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Drone_Port.BPW_Drone_Port_C.OnEstimatedRoundTripTimeChanged");
		
		UBPW_Drone_Port_C_OnEstimatedRoundTripTimeChanged_Params params {};
		params.estimatedRoundTripTime = estimatedRoundTripTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Drone_Port.BPW_Drone_Port_C.OnHasPowerChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Drone_Port_C::OnHasPowerChanged(bool State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Drone_Port.BPW_Drone_Port_C.OnHasPowerChanged");
		
		UBPW_Drone_Port_C_OnHasPowerChanged_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Drone_Port.BPW_Drone_Port_C.OnHasStandbyChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Drone_Port_C::OnHasStandbyChanged(bool State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Drone_Port.BPW_Drone_Port_C.OnHasStandbyChanged");
		
		UBPW_Drone_Port_C_OnHasStandbyChanged_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Drone_Port.BPW_Drone_Port_C.BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_1_OnTabButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Drone_Port_C::BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_1_OnTabButtonClicked__DelegateSignature(int32_t ButtonIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Drone_Port.BPW_Drone_Port_C.BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_1_OnTabButtonClicked__DelegateSignature");
		
		UBPW_Drone_Port_C_BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_1_OnTabButtonClicked__DelegateSignature_Params params {};
		params.ButtonIndex = ButtonIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Drone_Port.BPW_Drone_Port_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_Drone_Port_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Drone_Port.BPW_Drone_Port_C.Destruct");
		
		UBPW_Drone_Port_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Drone_Port.BPW_Drone_Port_C.BndEvt__mSearchbar_K2Node_ComponentBoundEvent_2_OnTextChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_Drone_Port_C::BndEvt__mSearchbar_K2Node_ComponentBoundEvent_2_OnTextChanged__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Drone_Port.BPW_Drone_Port_C.BndEvt__mSearchbar_K2Node_ComponentBoundEvent_2_OnTextChanged__DelegateSignature");
		
		UBPW_Drone_Port_C_BndEvt__mSearchbar_K2Node_ComponentBoundEvent_2_OnTextChanged__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Drone_Port.BPW_Drone_Port_C.EventSetPairedStationText
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Drone_Port_C::EventSetPairedStationText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Drone_Port.BPW_Drone_Port_C.EventSetPairedStationText");
		
		UBPW_Drone_Port_C_EventSetPairedStationText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Drone_Port.BPW_Drone_Port_C.OnEstimatedTransportRateChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            estimatedTransportRate                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Drone_Port_C::OnEstimatedTransportRateChanged(int32_t estimatedTransportRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Drone_Port.BPW_Drone_Port_C.OnEstimatedTransportRateChanged");
		
		UBPW_Drone_Port_C_OnEstimatedTransportRateChanged_Params params {};
		params.estimatedTransportRate = estimatedTransportRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Drone_Port.BPW_Drone_Port_C.Event UpdateConnectedStationList
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Drone_Port_C::EventUpdateConnectedStationList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Drone_Port.BPW_Drone_Port_C.Event UpdateConnectedStationList");
		
		UBPW_Drone_Port_C_EventUpdateConnectedStationList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Drone_Port.BPW_Drone_Port_C.OnDroneStatisticsChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FFGDroneTripStatistics                      droneTripStatistics                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBPW_Drone_Port_C::OnDroneStatisticsChanged(const struct FFGDroneTripStatistics& droneTripStatistics)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Drone_Port.BPW_Drone_Port_C.OnDroneStatisticsChanged");
		
		UBPW_Drone_Port_C_OnDroneStatisticsChanged_Params params {};
		params.droneTripStatistics = droneTripStatistics;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Drone_Port.BPW_Drone_Port_C.OnSetupInventories
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      replicationDetailActorOwner                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Drone_Port_C::OnSetupInventories(class AActor* replicationDetailActorOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Drone_Port.BPW_Drone_Port_C.OnSetupInventories");
		
		UBPW_Drone_Port_C_OnSetupInventories_Params params {};
		params.replicationDetailActorOwner = replicationDetailActorOwner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Drone_Port.BPW_Drone_Port_C.DronePort WarningMessageCheck
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Drone_Port_C::DronePortWarningMessageCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Drone_Port.BPW_Drone_Port_C.DronePort WarningMessageCheck");
		
		UBPW_Drone_Port_C_DronePortWarningMessageCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Drone_Port.BPW_Drone_Port_C.BndEvt__Widget_StandbyButton_K2Node_ComponentBoundEvent_1_OnStandbyClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_Drone_Port_C::BndEvt__Widget_StandbyButton_K2Node_ComponentBoundEvent_1_OnStandbyClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Drone_Port.BPW_Drone_Port_C.BndEvt__Widget_StandbyButton_K2Node_ComponentBoundEvent_1_OnStandbyClicked__DelegateSignature");
		
		UBPW_Drone_Port_C_BndEvt__Widget_StandbyButton_K2Node_ComponentBoundEvent_1_OnStandbyClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Drone_Port.BPW_Drone_Port_C.BndEvt__BPW_Drone_Port_mStationNameTextObject_K2Node_ComponentBoundEvent_7_OnEditableTextChangedEvent__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBPW_Drone_Port_C::BndEvt__BPW_Drone_Port_mStationNameTextObject_K2Node_ComponentBoundEvent_7_OnEditableTextChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Drone_Port.BPW_Drone_Port_C.BndEvt__BPW_Drone_Port_mStationNameTextObject_K2Node_ComponentBoundEvent_7_OnEditableTextChangedEvent__DelegateSignature");
		
		UBPW_Drone_Port_C_BndEvt__BPW_Drone_Port_mStationNameTextObject_K2Node_ComponentBoundEvent_7_OnEditableTextChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Drone_Port.BPW_Drone_Port_C.ExecuteUbergraph_BPW_Drone_Port
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Drone_Port_C::ExecuteUbergraph_BPW_Drone_Port(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Drone_Port.BPW_Drone_Port_C.ExecuteUbergraph_BPW_Drone_Port");
		
		UBPW_Drone_Port_C_ExecuteUbergraph_BPW_Drone_Port_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_Drone_Port_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_Drone_Port_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_Drone_Port.BPW_Drone_Port_C");
		return ptr;
	}

}


