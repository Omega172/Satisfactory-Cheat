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
	 * 		Name   -> Function BPW_ServerSettings.BPW_ServerSettings_C.Update Settings
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_ServerSettings_C::UpdateSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ServerSettings.BPW_ServerSettings_C.Update Settings");
		
		UBPW_ServerSettings_C_UpdateSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ServerSettings.BPW_ServerSettings_C.BP_OnServerComplexStateChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UFGServerObject*                             Server                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		EServerComplexState                                State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ServerSettings_C::BP_OnServerComplexStateChanged(class UFGServerObject* Server, EServerComplexState State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ServerSettings.BPW_ServerSettings_C.BP_OnServerComplexStateChanged");
		
		UBPW_ServerSettings_C_BP_OnServerComplexStateChanged_Params params {};
		params.Server = Server;
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ServerSettings.BPW_ServerSettings_C.BP_OnServerChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UFGServerObject*                             Server                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ServerSettings_C::BP_OnServerChanged(class UFGServerObject* Server)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ServerSettings.BPW_ServerSettings_C.BP_OnServerChanged");
		
		UBPW_ServerSettings_C_BP_OnServerChanged_Params params {};
		params.Server = Server;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ServerSettings.BPW_ServerSettings_C.BndEvt__BPW_Server_ConnectionIsPossible_K2Node_ComponentBoundEvent_0_OnConnect__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_ServerSettings_C::BndEvt__BPW_Server_ConnectionIsPossible_K2Node_ComponentBoundEvent_0_OnConnect__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ServerSettings.BPW_ServerSettings_C.BndEvt__BPW_Server_ConnectionIsPossible_K2Node_ComponentBoundEvent_0_OnConnect__DelegateSignature");
		
		UBPW_ServerSettings_C_BndEvt__BPW_Server_ConnectionIsPossible_K2Node_ComponentBoundEvent_0_OnConnect__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ServerSettings.BPW_ServerSettings_C.BndEvt__BPW_ServerAuthenticationRequired_K2Node_ComponentBoundEvent_1_OnAuthenticate__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_ServerSettings_C::BndEvt__BPW_ServerAuthenticationRequired_K2Node_ComponentBoundEvent_1_OnAuthenticate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ServerSettings.BPW_ServerSettings_C.BndEvt__BPW_ServerAuthenticationRequired_K2Node_ComponentBoundEvent_1_OnAuthenticate__DelegateSignature");
		
		UBPW_ServerSettings_C_BndEvt__BPW_ServerAuthenticationRequired_K2Node_ComponentBoundEvent_1_OnAuthenticate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ServerSettings.BPW_ServerSettings_C.BndEvt__BPW_Server_ConnectionFailed_K2Node_ComponentBoundEvent_2_OnRetry__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_ServerSettings_C::BndEvt__BPW_Server_ConnectionFailed_K2Node_ComponentBoundEvent_2_OnRetry__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ServerSettings.BPW_ServerSettings_C.BndEvt__BPW_Server_ConnectionFailed_K2Node_ComponentBoundEvent_2_OnRetry__DelegateSignature");
		
		UBPW_ServerSettings_C_BndEvt__BPW_Server_ConnectionFailed_K2Node_ComponentBoundEvent_2_OnRetry__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ServerSettings.BPW_ServerSettings_C.BP_OnServerBasicSettingsUpdate
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UFGServerObject*                             Server                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FServerBasicSettings                        BasicSettings                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBPW_ServerSettings_C::BP_OnServerBasicSettingsUpdate(class UFGServerObject* Server, const struct FServerBasicSettings& BasicSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ServerSettings.BPW_ServerSettings_C.BP_OnServerBasicSettingsUpdate");
		
		UBPW_ServerSettings_C_BP_OnServerBasicSettingsUpdate_Params params {};
		params.Server = Server;
		params.BasicSettings = BasicSettings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ServerSettings.BPW_ServerSettings_C.BP_OnServerRenamed
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UFGServerObject*                             Server                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBPW_ServerSettings_C::BP_OnServerRenamed(class UFGServerObject* Server, const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ServerSettings.BPW_ServerSettings_C.BP_OnServerRenamed");
		
		UBPW_ServerSettings_C_BP_OnServerRenamed_Params params {};
		params.Server = Server;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ServerSettings.BPW_ServerSettings_C.BndEvt__Checkbox_AutoPause_K2Node_ComponentBoundEvent_3_OnCheckChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ServerSettings_C::BndEvt__Checkbox_AutoPause_K2Node_ComponentBoundEvent_3_OnCheckChanged__DelegateSignature(bool IsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ServerSettings.BPW_ServerSettings_C.BndEvt__Checkbox_AutoPause_K2Node_ComponentBoundEvent_3_OnCheckChanged__DelegateSignature");
		
		UBPW_ServerSettings_C_BndEvt__Checkbox_AutoPause_K2Node_ComponentBoundEvent_3_OnCheckChanged__DelegateSignature_Params params {};
		params.IsChecked = IsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ServerSettings.BPW_ServerSettings_C.BndEvt__CheckBox_AutoSaveOnDisconnect_K2Node_ComponentBoundEvent_4_OnCheckChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ServerSettings_C::BndEvt__CheckBox_AutoSaveOnDisconnect_K2Node_ComponentBoundEvent_4_OnCheckChanged__DelegateSignature(bool IsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ServerSettings.BPW_ServerSettings_C.BndEvt__CheckBox_AutoSaveOnDisconnect_K2Node_ComponentBoundEvent_4_OnCheckChanged__DelegateSignature");
		
		UBPW_ServerSettings_C_BndEvt__CheckBox_AutoSaveOnDisconnect_K2Node_ComponentBoundEvent_4_OnCheckChanged__DelegateSignature_Params params {};
		params.IsChecked = IsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ServerSettings.BPW_ServerSettings_C.BndEvt__Text_SessionName_K2Node_ComponentBoundEvent_5_OnEditableTextCommittedEvent__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ServerSettings_C::BndEvt__Text_SessionName_K2Node_ComponentBoundEvent_5_OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ServerSettings.BPW_ServerSettings_C.BndEvt__Text_SessionName_K2Node_ComponentBoundEvent_5_OnEditableTextCommittedEvent__DelegateSignature");
		
		UBPW_ServerSettings_C_BndEvt__Text_SessionName_K2Node_ComponentBoundEvent_5_OnEditableTextCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ServerSettings.BPW_ServerSettings_C.BndEvt__Button_ChangeAdminPass_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_ServerSettings_C::BndEvt__Button_ChangeAdminPass_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ServerSettings.BPW_ServerSettings_C.BndEvt__Button_ChangeAdminPass_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");
		
		UBPW_ServerSettings_C_BndEvt__Button_ChangeAdminPass_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ServerSettings.BPW_ServerSettings_C.BndEvt__Button_ChangePlayerPass_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_ServerSettings_C::BndEvt__Button_ChangePlayerPass_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ServerSettings.BPW_ServerSettings_C.BndEvt__Button_ChangePlayerPass_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");
		
		UBPW_ServerSettings_C_BndEvt__Button_ChangePlayerPass_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ServerSettings.BPW_ServerSettings_C.BndEvt__Text_ServerName_K2Node_ComponentBoundEvent_9_OnEditableTextCommittedEvent__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ServerSettings_C::BndEvt__Text_ServerName_K2Node_ComponentBoundEvent_9_OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ServerSettings.BPW_ServerSettings_C.BndEvt__Text_ServerName_K2Node_ComponentBoundEvent_9_OnEditableTextCommittedEvent__DelegateSignature");
		
		UBPW_ServerSettings_C_BndEvt__Text_ServerName_K2Node_ComponentBoundEvent_9_OnEditableTextCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ServerSettings.BPW_ServerSettings_C.ExecuteUbergraph_BPW_ServerSettings
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ServerSettings_C::ExecuteUbergraph_BPW_ServerSettings(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ServerSettings.BPW_ServerSettings_C.ExecuteUbergraph_BPW_ServerSettings");
		
		UBPW_ServerSettings_C_ExecuteUbergraph_BPW_ServerSettings_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_ServerSettings_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_ServerSettings_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_ServerSettings.BPW_ServerSettings_C");
		return ptr;
	}

}


