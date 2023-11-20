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
	 * 		Name   -> Function BPW_Train_TimeTable_StationSettings.BPW_Train_TimeTable_StationSettings_C.GetNewStation
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTimeTableStop                              Station                                                    (Parm, OutParm)
	 */
	void UBPW_Train_TimeTable_StationSettings_C::GetNewStation(struct FTimeTableStop* Station)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_StationSettings.BPW_Train_TimeTable_StationSettings_C.GetNewStation");
		
		UBPW_Train_TimeTable_StationSettings_C_GetNewStation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Station != nullptr)
			*Station = params.Station;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_StationSettings.BPW_Train_TimeTable_StationSettings_C.SetupRulesDropdown
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Train_TimeTable_StationSettings_C::SetupRulesDropdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_StationSettings.BPW_Train_TimeTable_StationSettings_C.SetupRulesDropdown");
		
		UBPW_Train_TimeTable_StationSettings_C_SetupRulesDropdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_StationSettings.BPW_Train_TimeTable_StationSettings_C.SetStation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTimeTableStop                              mStation                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_Train_TimeTable_StationSettings_C::SetStation(const struct FTimeTableStop& mStation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_StationSettings.BPW_Train_TimeTable_StationSettings_C.SetStation");
		
		UBPW_Train_TimeTable_StationSettings_C_SetStation_Params params {};
		params.mStation = mStation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_StationSettings.BPW_Train_TimeTable_StationSettings_C.SetIsAndRule
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               mIsAndRule                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Train_TimeTable_StationSettings_C::SetIsAndRule(bool mIsAndRule)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_StationSettings.BPW_Train_TimeTable_StationSettings_C.SetIsAndRule");
		
		UBPW_Train_TimeTable_StationSettings_C_SetIsAndRule_Params params {};
		params.mIsAndRule = mIsAndRule;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_StationSettings.BPW_Train_TimeTable_StationSettings_C.Close
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               SettingChanged                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Train_TimeTable_StationSettings_C::Close(bool SettingChanged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_StationSettings.BPW_Train_TimeTable_StationSettings_C.Close");
		
		UBPW_Train_TimeTable_StationSettings_C_Close_Params params {};
		params.SettingChanged = SettingChanged;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_StationSettings.BPW_Train_TimeTable_StationSettings_C.UpdateTimeText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Train_TimeTable_StationSettings_C::UpdateTimeText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_StationSettings.BPW_Train_TimeTable_StationSettings_C.UpdateTimeText");
		
		UBPW_Train_TimeTable_StationSettings_C_UpdateTimeText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_StationSettings.BPW_Train_TimeTable_StationSettings_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_Train_TimeTable_StationSettings_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_StationSettings.BPW_Train_TimeTable_StationSettings_C.Construct");
		
		UBPW_Train_TimeTable_StationSettings_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_StationSettings.BPW_Train_TimeTable_StationSettings_C.BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_Train_TimeTable_StationSettings_C::BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_StationSettings.BPW_Train_TimeTable_StationSettings_C.BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature");
		
		UBPW_Train_TimeTable_StationSettings_C_BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_StationSettings.BPW_Train_TimeTable_StationSettings_C.BndEvt__mSave_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_Train_TimeTable_StationSettings_C::BndEvt__mSave_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_StationSettings.BPW_Train_TimeTable_StationSettings_C.BndEvt__mSave_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UBPW_Train_TimeTable_StationSettings_C_BndEvt__mSave_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_StationSettings.BPW_Train_TimeTable_StationSettings_C.BndEvt__ComboBoxString_577_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Train_TimeTable_StationSettings_C::BndEvt__ComboBoxString_577_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_StationSettings.BPW_Train_TimeTable_StationSettings_C.BndEvt__ComboBoxString_577_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature");
		
		UBPW_Train_TimeTable_StationSettings_C_BndEvt__ComboBoxString_577_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_StationSettings.BPW_Train_TimeTable_StationSettings_C.BndEvt__mTime_K2Node_ComponentBoundEvent_4_OnEditableTextCommittedEvent__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Train_TimeTable_StationSettings_C::BndEvt__mTime_K2Node_ComponentBoundEvent_4_OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_StationSettings.BPW_Train_TimeTable_StationSettings_C.BndEvt__mTime_K2Node_ComponentBoundEvent_4_OnEditableTextCommittedEvent__DelegateSignature");
		
		UBPW_Train_TimeTable_StationSettings_C_BndEvt__mTime_K2Node_ComponentBoundEvent_4_OnEditableTextCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_StationSettings.BPW_Train_TimeTable_StationSettings_C.BndEvt__mDiscard_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_Train_TimeTable_StationSettings_C::BndEvt__mDiscard_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_StationSettings.BPW_Train_TimeTable_StationSettings_C.BndEvt__mDiscard_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");
		
		UBPW_Train_TimeTable_StationSettings_C_BndEvt__mDiscard_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_StationSettings.BPW_Train_TimeTable_StationSettings_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_Train_TimeTable_StationSettings_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_StationSettings.BPW_Train_TimeTable_StationSettings_C.Destruct");
		
		UBPW_Train_TimeTable_StationSettings_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_StationSettings.BPW_Train_TimeTable_StationSettings_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_Train_TimeTable_StationSettings_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_StationSettings.BPW_Train_TimeTable_StationSettings_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");
		
		UBPW_Train_TimeTable_StationSettings_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_StationSettings.BPW_Train_TimeTable_StationSettings_C.ExecuteUbergraph_BPW_Train_TimeTable_StationSettings
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Train_TimeTable_StationSettings_C::ExecuteUbergraph_BPW_Train_TimeTable_StationSettings(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_StationSettings.BPW_Train_TimeTable_StationSettings_C.ExecuteUbergraph_BPW_Train_TimeTable_StationSettings");
		
		UBPW_Train_TimeTable_StationSettings_C_ExecuteUbergraph_BPW_Train_TimeTable_StationSettings_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_StationSettings.BPW_Train_TimeTable_StationSettings_C.OnSettingsClosed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               SettingChanged                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Train_TimeTable_StationSettings_C::OnSettingsClosed__DelegateSignature(bool SettingChanged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_StationSettings.BPW_Train_TimeTable_StationSettings_C.OnSettingsClosed__DelegateSignature");
		
		UBPW_Train_TimeTable_StationSettings_C_OnSettingsClosed__DelegateSignature_Params params {};
		params.SettingChanged = SettingChanged;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_Train_TimeTable_StationSettings_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_Train_TimeTable_StationSettings_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_Train_TimeTable_StationSettings.BPW_Train_TimeTable_StationSettings_C");
		return ptr;
	}

}


