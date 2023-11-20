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
	 * 		Name   -> Function BPW_InputTextWarning.BPW_InputTextWarning_C.GetCurrentStatesTooltip
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FStruct_TooltipText UBPW_InputTextWarning_C::GetCurrentStatesTooltip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_InputTextWarning.BPW_InputTextWarning_C.GetCurrentStatesTooltip");
		
		UBPW_InputTextWarning_C_GetCurrentStatesTooltip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_InputTextWarning.BPW_InputTextWarning_C.GetToolTip
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class UWidget* UBPW_InputTextWarning_C::GetToolTip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_InputTextWarning.BPW_InputTextWarning_C.GetToolTip");
		
		UBPW_InputTextWarning_C_GetToolTip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_InputTextWarning.BPW_InputTextWarning_C.SetState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EInputTextWarningState                             mState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_InputTextWarning_C::SetState(EInputTextWarningState mState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_InputTextWarning.BPW_InputTextWarning_C.SetState");
		
		UBPW_InputTextWarning_C_SetState_Params params {};
		params.mState = mState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_InputTextWarning.BPW_InputTextWarning_C.SetErrorTooltip
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FStruct_TooltipText                         mErrorTooltip                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UBPW_InputTextWarning_C::SetErrorTooltip(const struct FStruct_TooltipText& mErrorTooltip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_InputTextWarning.BPW_InputTextWarning_C.SetErrorTooltip");
		
		UBPW_InputTextWarning_C_SetErrorTooltip_Params params {};
		params.mErrorTooltip = mErrorTooltip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_InputTextWarning.BPW_InputTextWarning_C.SetWarningTooltip
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FStruct_TooltipText                         mWarningTooltip                                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UBPW_InputTextWarning_C::SetWarningTooltip(const struct FStruct_TooltipText& mWarningTooltip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_InputTextWarning.BPW_InputTextWarning_C.SetWarningTooltip");
		
		UBPW_InputTextWarning_C_SetWarningTooltip_Params params {};
		params.mWarningTooltip = mWarningTooltip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_InputTextWarning.BPW_InputTextWarning_C.SetSize
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector2D                                   mSize                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_InputTextWarning_C::SetSize(const struct FVector2D& mSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_InputTextWarning.BPW_InputTextWarning_C.SetSize");
		
		UBPW_InputTextWarning_C_SetSize_Params params {};
		params.mSize = mSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_InputTextWarning.BPW_InputTextWarning_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_InputTextWarning_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_InputTextWarning.BPW_InputTextWarning_C.PreConstruct");
		
		UBPW_InputTextWarning_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_InputTextWarning.BPW_InputTextWarning_C.ExecuteUbergraph_BPW_InputTextWarning
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_InputTextWarning_C::ExecuteUbergraph_BPW_InputTextWarning(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_InputTextWarning.BPW_InputTextWarning_C.ExecuteUbergraph_BPW_InputTextWarning");
		
		UBPW_InputTextWarning_C_ExecuteUbergraph_BPW_InputTextWarning_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_InputTextWarning_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_InputTextWarning_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_InputTextWarning.BPW_InputTextWarning_C");
		return ptr;
	}

}


