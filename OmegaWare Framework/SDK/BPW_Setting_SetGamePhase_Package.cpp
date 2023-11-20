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
	 * 		Name   -> Function BPW_Setting_SetGamePhase.BPW_Setting_SetGamePhase_C.DisplayValueToDropDownIndex
	 * 		Flags  -> (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            DisplayValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            DropDownIndex                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Setting_SetGamePhase_C::DisplayValueToDropDownIndex(int32_t DisplayValue, int32_t* DropDownIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Setting_SetGamePhase.BPW_Setting_SetGamePhase_C.DisplayValueToDropDownIndex");
		
		UBPW_Setting_SetGamePhase_C_DisplayValueToDropDownIndex_Params params {};
		params.DisplayValue = DisplayValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DropDownIndex != nullptr)
			*DropDownIndex = params.DropDownIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Setting_SetGamePhase.BPW_Setting_SetGamePhase_C.SyncGiveAllTiersSetting
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGamePhase                                         SelectedPhase                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Setting_SetGamePhase_C::SyncGiveAllTiersSetting(EGamePhase SelectedPhase)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Setting_SetGamePhase.BPW_Setting_SetGamePhase_C.SyncGiveAllTiersSetting");
		
		UBPW_Setting_SetGamePhase_C_SyncGiveAllTiersSetting_Params params {};
		params.SelectedPhase = SelectedPhase;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Setting_SetGamePhase.BPW_Setting_SetGamePhase_C.SyncStartingTierSetting
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGamePhase                                         SelectedPhase                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Setting_SetGamePhase_C::SyncStartingTierSetting(EGamePhase SelectedPhase)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Setting_SetGamePhase.BPW_Setting_SetGamePhase_C.SyncStartingTierSetting");
		
		UBPW_Setting_SetGamePhase_C_SyncStartingTierSetting_Params params {};
		params.SelectedPhase = SelectedPhase;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Setting_SetGamePhase.BPW_Setting_SetGamePhase_C.GetAvailableGamePhaseManager
	 * 		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AFGGamePhaseManager*                         GamePhaseManager                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Setting_SetGamePhase_C::GetAvailableGamePhaseManager(class AFGGamePhaseManager** GamePhaseManager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Setting_SetGamePhase.BPW_Setting_SetGamePhase_C.GetAvailableGamePhaseManager");
		
		UBPW_Setting_SetGamePhase_C_GetAvailableGamePhaseManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GamePhaseManager != nullptr)
			*GamePhaseManager = params.GamePhaseManager;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Setting_SetGamePhase.BPW_Setting_SetGamePhase_C.SetupDropdownOptions
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Setting_SetGamePhase_C::SetupDropdownOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Setting_SetGamePhase.BPW_Setting_SetGamePhase_C.SetupDropdownOptions");
		
		UBPW_Setting_SetGamePhase_C_SetupDropdownOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Setting_SetGamePhase.BPW_Setting_SetGamePhase_C.OnOptionReverted
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Setting_SetGamePhase_C::OnOptionReverted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Setting_SetGamePhase.BPW_Setting_SetGamePhase_C.OnOptionReverted");
		
		UBPW_Setting_SetGamePhase_C_OnOptionReverted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Setting_SetGamePhase.BPW_Setting_SetGamePhase_C.BndEvt__BPW_Setting_SetGamePhase_mDropdownBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Setting_SetGamePhase_C::BndEvt__BPW_Setting_SetGamePhase_mDropdownBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Setting_SetGamePhase.BPW_Setting_SetGamePhase_C.BndEvt__BPW_Setting_SetGamePhase_mDropdownBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature");
		
		UBPW_Setting_SetGamePhase_C_BndEvt__BPW_Setting_SetGamePhase_mDropdownBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Setting_SetGamePhase.BPW_Setting_SetGamePhase_C.OnOptionValueUpdated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Setting_SetGamePhase_C::OnOptionValueUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Setting_SetGamePhase.BPW_Setting_SetGamePhase_C.OnOptionValueUpdated");
		
		UBPW_Setting_SetGamePhase_C_OnOptionValueUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Setting_SetGamePhase.BPW_Setting_SetGamePhase_C.OnOptionApplied
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Setting_SetGamePhase_C::OnOptionApplied()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Setting_SetGamePhase.BPW_Setting_SetGamePhase_C.OnOptionApplied");
		
		UBPW_Setting_SetGamePhase_C_OnOptionApplied_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Setting_SetGamePhase.BPW_Setting_SetGamePhase_C.ExecuteUbergraph_BPW_Setting_SetGamePhase
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Setting_SetGamePhase_C::ExecuteUbergraph_BPW_Setting_SetGamePhase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Setting_SetGamePhase.BPW_Setting_SetGamePhase_C.ExecuteUbergraph_BPW_Setting_SetGamePhase");
		
		UBPW_Setting_SetGamePhase_C_ExecuteUbergraph_BPW_Setting_SetGamePhase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_Setting_SetGamePhase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_Setting_SetGamePhase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_Setting_SetGamePhase.BPW_Setting_SetGamePhase_C");
		return ptr;
	}

}


