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
	 * 		Name   -> Function BPW_Option_GraphicsAPI.BPW_Option_GraphicsAPI_C.GetOverwriteTooltip
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        ToolTip                                                    (Parm, OutParm)
	 */
	void UBPW_Option_GraphicsAPI_C::GetOverwriteTooltip(class FText* ToolTip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Option_GraphicsAPI.BPW_Option_GraphicsAPI_C.GetOverwriteTooltip");
		
		UBPW_Option_GraphicsAPI_C_GetOverwriteTooltip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ToolTip != nullptr)
			*ToolTip = params.ToolTip;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Option_GraphicsAPI.BPW_Option_GraphicsAPI_C.UpdateEnabledState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Option_GraphicsAPI_C::UpdateEnabledState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Option_GraphicsAPI.BPW_Option_GraphicsAPI_C.UpdateEnabledState");
		
		UBPW_Option_GraphicsAPI_C_UpdateEnabledState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Option_GraphicsAPI.BPW_Option_GraphicsAPI_C.UpdateGraphicAPIValue
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Option_GraphicsAPI_C::UpdateGraphicAPIValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Option_GraphicsAPI.BPW_Option_GraphicsAPI_C.UpdateGraphicAPIValue");
		
		UBPW_Option_GraphicsAPI_C_UpdateGraphicAPIValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Option_GraphicsAPI.BPW_Option_GraphicsAPI_C.IsPendingApply
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool UBPW_Option_GraphicsAPI_C::IsPendingApply()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Option_GraphicsAPI.BPW_Option_GraphicsAPI_C.IsPendingApply");
		
		UBPW_Option_GraphicsAPI_C_IsPendingApply_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Option_GraphicsAPI.BPW_Option_GraphicsAPI_C.IsPendingRestart
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool UBPW_Option_GraphicsAPI_C::IsPendingRestart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Option_GraphicsAPI.BPW_Option_GraphicsAPI_C.IsPendingRestart");
		
		UBPW_Option_GraphicsAPI_C_IsPendingRestart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Option_GraphicsAPI.BPW_Option_GraphicsAPI_C.SetupGraphicsAPIDropdown
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Option_GraphicsAPI_C::SetupGraphicsAPIDropdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Option_GraphicsAPI.BPW_Option_GraphicsAPI_C.SetupGraphicsAPIDropdown");
		
		UBPW_Option_GraphicsAPI_C_SetupGraphicsAPIDropdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Option_GraphicsAPI.BPW_Option_GraphicsAPI_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Option_GraphicsAPI_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Option_GraphicsAPI.BPW_Option_GraphicsAPI_C.PreConstruct");
		
		UBPW_Option_GraphicsAPI_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Option_GraphicsAPI.BPW_Option_GraphicsAPI_C.OnOptionApplied
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Option_GraphicsAPI_C::OnOptionApplied()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Option_GraphicsAPI.BPW_Option_GraphicsAPI_C.OnOptionApplied");
		
		UBPW_Option_GraphicsAPI_C_OnOptionApplied_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Option_GraphicsAPI.BPW_Option_GraphicsAPI_C.OnOptionReverted
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Option_GraphicsAPI_C::OnOptionReverted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Option_GraphicsAPI.BPW_Option_GraphicsAPI_C.OnOptionReverted");
		
		UBPW_Option_GraphicsAPI_C_OnOptionReverted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Option_GraphicsAPI.BPW_Option_GraphicsAPI_C.OnOptionValueUpdated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Option_GraphicsAPI_C::OnOptionValueUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Option_GraphicsAPI.BPW_Option_GraphicsAPI_C.OnOptionValueUpdated");
		
		UBPW_Option_GraphicsAPI_C_OnOptionValueUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Option_GraphicsAPI.BPW_Option_GraphicsAPI_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_Option_GraphicsAPI_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Option_GraphicsAPI.BPW_Option_GraphicsAPI_C.Construct");
		
		UBPW_Option_GraphicsAPI_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Option_GraphicsAPI.BPW_Option_GraphicsAPI_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_Option_GraphicsAPI_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Option_GraphicsAPI.BPW_Option_GraphicsAPI_C.Destruct");
		
		UBPW_Option_GraphicsAPI_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Option_GraphicsAPI.BPW_Option_GraphicsAPI_C.OnOpeningDropDown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Option_GraphicsAPI_C::OnOpeningDropDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Option_GraphicsAPI.BPW_Option_GraphicsAPI_C.OnOpeningDropDown");
		
		UBPW_Option_GraphicsAPI_C_OnOpeningDropDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Option_GraphicsAPI.BPW_Option_GraphicsAPI_C.CheckOpened
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Option_GraphicsAPI_C::CheckOpened()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Option_GraphicsAPI.BPW_Option_GraphicsAPI_C.CheckOpened");
		
		UBPW_Option_GraphicsAPI_C_CheckOpened_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Option_GraphicsAPI.BPW_Option_GraphicsAPI_C.ExecuteUbergraph_BPW_Option_GraphicsAPI
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Option_GraphicsAPI_C::ExecuteUbergraph_BPW_Option_GraphicsAPI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Option_GraphicsAPI.BPW_Option_GraphicsAPI_C.ExecuteUbergraph_BPW_Option_GraphicsAPI");
		
		UBPW_Option_GraphicsAPI_C_ExecuteUbergraph_BPW_Option_GraphicsAPI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_Option_GraphicsAPI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_Option_GraphicsAPI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_Option_GraphicsAPI.BPW_Option_GraphicsAPI_C");
		return ptr;
	}

}


