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
	 * 		Name   -> Function BPW_TooltipRecipe_OverclockSettings.BPW_TooltipRecipe_OverclockSettings_C.SetAmount
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             mAmount                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	double UBPW_TooltipRecipe_OverclockSettings_C::SetAmount(double mAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TooltipRecipe_OverclockSettings.BPW_TooltipRecipe_OverclockSettings_C.SetAmount");
		
		UBPW_TooltipRecipe_OverclockSettings_C_SetAmount_Params params {};
		params.mAmount = mAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_TooltipRecipe_OverclockSettings.BPW_TooltipRecipe_OverclockSettings_C.SetPercentText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_TooltipRecipe_OverclockSettings_C::SetPercentText(double Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TooltipRecipe_OverclockSettings.BPW_TooltipRecipe_OverclockSettings_C.SetPercentText");
		
		UBPW_TooltipRecipe_OverclockSettings_C_SetPercentText_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_TooltipRecipe_OverclockSettings.BPW_TooltipRecipe_OverclockSettings_C.SetTargetRateText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_TooltipRecipe_OverclockSettings_C::SetTargetRateText(double Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TooltipRecipe_OverclockSettings.BPW_TooltipRecipe_OverclockSettings_C.SetTargetRateText");
		
		UBPW_TooltipRecipe_OverclockSettings_C_SetTargetRateText_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_TooltipRecipe_OverclockSettings.BPW_TooltipRecipe_OverclockSettings_C.SetStandardProductionRate
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             mStandardProductionRate                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_TooltipRecipe_OverclockSettings_C::SetStandardProductionRate(double mStandardProductionRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TooltipRecipe_OverclockSettings.BPW_TooltipRecipe_OverclockSettings_C.SetStandardProductionRate");
		
		UBPW_TooltipRecipe_OverclockSettings_C_SetStandardProductionRate_Params params {};
		params.mStandardProductionRate = mStandardProductionRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_TooltipRecipe_OverclockSettings.BPW_TooltipRecipe_OverclockSettings_C.ConvertTargetRate
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ToTargetRate                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	double UBPW_TooltipRecipe_OverclockSettings_C::ConvertTargetRate(double Value, bool ToTargetRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TooltipRecipe_OverclockSettings.BPW_TooltipRecipe_OverclockSettings_C.ConvertTargetRate");
		
		UBPW_TooltipRecipe_OverclockSettings_C_ConvertTargetRate_Params params {};
		params.Value = Value;
		params.ToTargetRate = ToTargetRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_TooltipRecipe_OverclockSettings.BPW_TooltipRecipe_OverclockSettings_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_TooltipRecipe_OverclockSettings_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TooltipRecipe_OverclockSettings.BPW_TooltipRecipe_OverclockSettings_C.PreConstruct");
		
		UBPW_TooltipRecipe_OverclockSettings_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_TooltipRecipe_OverclockSettings.BPW_TooltipRecipe_OverclockSettings_C.BndEvt__BPW_TooltipRecipe_OverclockSettings_mOverclockPercent_K2Node_ComponentBoundEvent_2_OnEditableTextCommittedEvent__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_TooltipRecipe_OverclockSettings_C::BndEvt__BPW_TooltipRecipe_OverclockSettings_mOverclockPercent_K2Node_ComponentBoundEvent_2_OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TooltipRecipe_OverclockSettings.BPW_TooltipRecipe_OverclockSettings_C.BndEvt__BPW_TooltipRecipe_OverclockSettings_mOverclockPercent_K2Node_ComponentBoundEvent_2_OnEditableTextCommittedEvent__DelegateSignature");
		
		UBPW_TooltipRecipe_OverclockSettings_C_BndEvt__BPW_TooltipRecipe_OverclockSettings_mOverclockPercent_K2Node_ComponentBoundEvent_2_OnEditableTextCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_TooltipRecipe_OverclockSettings.BPW_TooltipRecipe_OverclockSettings_C.BndEvt__BPW_TooltipRecipe_OverclockSettings_mOverclockTargetRate_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_TooltipRecipe_OverclockSettings_C::BndEvt__BPW_TooltipRecipe_OverclockSettings_mOverclockTargetRate_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TooltipRecipe_OverclockSettings.BPW_TooltipRecipe_OverclockSettings_C.BndEvt__BPW_TooltipRecipe_OverclockSettings_mOverclockTargetRate_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature");
		
		UBPW_TooltipRecipe_OverclockSettings_C_BndEvt__BPW_TooltipRecipe_OverclockSettings_mOverclockTargetRate_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_TooltipRecipe_OverclockSettings.BPW_TooltipRecipe_OverclockSettings_C.ExecuteUbergraph_BPW_TooltipRecipe_OverclockSettings
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_TooltipRecipe_OverclockSettings_C::ExecuteUbergraph_BPW_TooltipRecipe_OverclockSettings(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TooltipRecipe_OverclockSettings.BPW_TooltipRecipe_OverclockSettings_C.ExecuteUbergraph_BPW_TooltipRecipe_OverclockSettings");
		
		UBPW_TooltipRecipe_OverclockSettings_C_ExecuteUbergraph_BPW_TooltipRecipe_OverclockSettings_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_TooltipRecipe_OverclockSettings.BPW_TooltipRecipe_OverclockSettings_C.OnOverclockChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_TooltipRecipe_OverclockSettings_C::OnOverclockChanged__DelegateSignature(double Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TooltipRecipe_OverclockSettings.BPW_TooltipRecipe_OverclockSettings_C.OnOverclockChanged__DelegateSignature");
		
		UBPW_TooltipRecipe_OverclockSettings_C_OnOverclockChanged__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_TooltipRecipe_OverclockSettings_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_TooltipRecipe_OverclockSettings_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_TooltipRecipe_OverclockSettings.BPW_TooltipRecipe_OverclockSettings_C");
		return ptr;
	}

}


