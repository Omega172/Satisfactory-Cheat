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
	 * 		Name   -> Function BPW_SessionInformation.BPW_SessionInformation_C.SetVersionText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FFGOnlineSessionSettings                    Session                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_SessionInformation_C::SetVersionText(const struct FFGOnlineSessionSettings& Session)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SessionInformation.BPW_SessionInformation_C.SetVersionText");
		
		UBPW_SessionInformation_C_SetVersionText_Params params {};
		params.Session = Session;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SessionInformation.BPW_SessionInformation_C.UpdateSessionInformation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FFGOnlineSessionSettings                    Session                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_SessionInformation_C::UpdateSessionInformation(const struct FFGOnlineSessionSettings& Session)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SessionInformation.BPW_SessionInformation_C.UpdateSessionInformation");
		
		UBPW_SessionInformation_C_UpdateSessionInformation_Params params {};
		params.Session = Session;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SessionInformation.BPW_SessionInformation_C.SetHostName
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FFGOnlineSessionSettings                    Session                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_SessionInformation_C::SetHostName(const struct FFGOnlineSessionSettings& Session)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SessionInformation.BPW_SessionInformation_C.SetHostName");
		
		UBPW_SessionInformation_C_SetHostName_Params params {};
		params.Session = Session;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SessionInformation.BPW_SessionInformation_C.SetNATTypeColor
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ECachedNATType                                     NATType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_SessionInformation_C::SetNATTypeColor(ECachedNATType NATType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SessionInformation.BPW_SessionInformation_C.SetNATTypeColor");
		
		UBPW_SessionInformation_C_SetNATTypeColor_Params params {};
		params.NATType = NATType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SessionInformation.BPW_SessionInformation_C.SetNATTypeText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FFGOnlineSessionSettings                    Session                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_SessionInformation_C::SetNATTypeText(const struct FFGOnlineSessionSettings& Session)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SessionInformation.BPW_SessionInformation_C.SetNATTypeText");
		
		UBPW_SessionInformation_C_SetNATTypeText_Params params {};
		params.Session = Session;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SessionInformation.BPW_SessionInformation_C.SetGameSettingVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FFGOnlineSessionSettings                    Session                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_SessionInformation_C::SetGameSettingVisibility(const struct FFGOnlineSessionSettings& Session)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SessionInformation.BPW_SessionInformation_C.SetGameSettingVisibility");
		
		UBPW_SessionInformation_C_SetGameSettingVisibility_Params params {};
		params.Session = Session;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SessionInformation.BPW_SessionInformation_C.SetSessionName
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FFGOnlineSessionSettings                    Session                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_SessionInformation_C::SetSessionName(const struct FFGOnlineSessionSettings& Session)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SessionInformation.BPW_SessionInformation_C.SetSessionName");
		
		UBPW_SessionInformation_C_SetSessionName_Params params {};
		params.Session = Session;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SessionInformation.BPW_SessionInformation_C.SetPlayDurationText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FFGOnlineSessionSettings                    Session                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_SessionInformation_C::SetPlayDurationText(const struct FFGOnlineSessionSettings& Session)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SessionInformation.BPW_SessionInformation_C.SetPlayDurationText");
		
		UBPW_SessionInformation_C_SetPlayDurationText_Params params {};
		params.Session = Session;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SessionInformation.BPW_SessionInformation_C.SetAGSEnabledVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FFGOnlineSessionSettings                    Session                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_SessionInformation_C::SetAGSEnabledVisibility(const struct FFGOnlineSessionSettings& Session)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SessionInformation.BPW_SessionInformation_C.SetAGSEnabledVisibility");
		
		UBPW_SessionInformation_C_SetAGSEnabledVisibility_Params params {};
		params.Session = Session;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SessionInformation.BPW_SessionInformation_C.SetAmountOfPlayersText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FFGOnlineSessionSettings                    Session                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_SessionInformation_C::SetAmountOfPlayersText(const struct FFGOnlineSessionSettings& Session)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SessionInformation.BPW_SessionInformation_C.SetAmountOfPlayersText");
		
		UBPW_SessionInformation_C_SetAmountOfPlayersText_Params params {};
		params.Session = Session;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SessionInformation.BPW_SessionInformation_C.OnSessionUpdate
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FFGOnlineSessionSettings                    Session                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBPW_SessionInformation_C::OnSessionUpdate(const struct FFGOnlineSessionSettings& Session)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SessionInformation.BPW_SessionInformation_C.OnSessionUpdate");
		
		UBPW_SessionInformation_C_OnSessionUpdate_Params params {};
		params.Session = Session;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SessionInformation.BPW_SessionInformation_C.ExecuteUbergraph_BPW_SessionInformation
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_SessionInformation_C::ExecuteUbergraph_BPW_SessionInformation(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SessionInformation.BPW_SessionInformation_C.ExecuteUbergraph_BPW_SessionInformation");
		
		UBPW_SessionInformation_C_ExecuteUbergraph_BPW_SessionInformation_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_SessionInformation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_SessionInformation_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_SessionInformation.BPW_SessionInformation_C");
		return ptr;
	}

}


