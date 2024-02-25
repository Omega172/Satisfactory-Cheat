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
	 * 		Name   -> Function BPW_DronePort_ListEntry.BPW_DronePort_ListEntry_C.CreateTooltip
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class UWidget* UBPW_DronePort_ListEntry_C::CreateTooltip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_DronePort_ListEntry.BPW_DronePort_ListEntry_C.CreateTooltip");
		
		UBPW_DronePort_ListEntry_C_CreateTooltip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_DronePort_ListEntry.BPW_DronePort_ListEntry_C.SearchAndAddStations
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_DronePort_ListEntry_C::SearchAndAddStations()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_DronePort_ListEntry.BPW_DronePort_ListEntry_C.SearchAndAddStations");
		
		UBPW_DronePort_ListEntry_C_SearchAndAddStations_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_DronePort_ListEntry.BPW_DronePort_ListEntry_C.UpdateDroneStatus
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_DronePort_ListEntry_C::UpdateDroneStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_DronePort_ListEntry.BPW_DronePort_ListEntry_C.UpdateDroneStatus");
		
		UBPW_DronePort_ListEntry_C_UpdateDroneStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_DronePort_ListEntry.BPW_DronePort_ListEntry_C.SetStationNameAndDistance
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_DronePort_ListEntry_C::SetStationNameAndDistance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_DronePort_ListEntry.BPW_DronePort_ListEntry_C.SetStationNameAndDistance");
		
		UBPW_DronePort_ListEntry_C_SetStationNameAndDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_DronePort_ListEntry.BPW_DronePort_ListEntry_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_DronePort_ListEntry_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_DronePort_ListEntry.BPW_DronePort_ListEntry_C.Construct");
		
		UBPW_DronePort_ListEntry_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_DronePort_ListEntry.BPW_DronePort_ListEntry_C.BndEvt__mSearchableCombobox_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SelectedOption                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            selectedIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_DronePort_ListEntry_C::BndEvt__mSearchableCombobox_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature(const class FString& SelectedOption, int32_t selectedIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_DronePort_ListEntry.BPW_DronePort_ListEntry_C.BndEvt__mSearchableCombobox_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature");
		
		UBPW_DronePort_ListEntry_C_BndEvt__mSearchableCombobox_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature_Params params {};
		params.SelectedOption = SelectedOption;
		params.selectedIndex = selectedIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_DronePort_ListEntry.BPW_DronePort_ListEntry_C.ExecuteUbergraph_BPW_DronePort_ListEntry
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_DronePort_ListEntry_C::ExecuteUbergraph_BPW_DronePort_ListEntry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_DronePort_ListEntry.BPW_DronePort_ListEntry_C.ExecuteUbergraph_BPW_DronePort_ListEntry");
		
		UBPW_DronePort_ListEntry_C_ExecuteUbergraph_BPW_DronePort_ListEntry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_DronePort_ListEntry.BPW_DronePort_ListEntry_C.OnSelectionChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_DronePort_ListEntry_C::OnSelectionChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_DronePort_ListEntry.BPW_DronePort_ListEntry_C.OnSelectionChanged__DelegateSignature");
		
		UBPW_DronePort_ListEntry_C_OnSelectionChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_DronePort_ListEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_DronePort_ListEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_DronePort_ListEntry.BPW_DronePort_ListEntry_C");
		return ptr;
	}

}


