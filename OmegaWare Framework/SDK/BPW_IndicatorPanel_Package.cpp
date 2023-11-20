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
	 * 		Name   -> Function BPW_IndicatorPanel.BPW_IndicatorPanel_C.SequenceEvent__ENTRYPOINTBPW_IndicatorPanel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_IndicatorPanel_C::SequenceEvent__ENTRYPOINTBPW_IndicatorPanel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_IndicatorPanel.BPW_IndicatorPanel_C.SequenceEvent__ENTRYPOINTBPW_IndicatorPanel");
		
		UBPW_IndicatorPanel_C_SequenceEvent__ENTRYPOINTBPW_IndicatorPanel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_IndicatorPanel.BPW_IndicatorPanel_C.PlayErrorBeep
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_IndicatorPanel_C::PlayErrorBeep()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_IndicatorPanel.BPW_IndicatorPanel_C.PlayErrorBeep");
		
		UBPW_IndicatorPanel_C_PlayErrorBeep_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_IndicatorPanel.BPW_IndicatorPanel_C.SetCustomState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_IndicatorPanel_States                            LightState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UTexture2D*                                  Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_IndicatorPanel_C::SetCustomState(E_IndicatorPanel_States LightState, const class FText& Text, class UTexture2D* Icon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_IndicatorPanel.BPW_IndicatorPanel_C.SetCustomState");
		
		UBPW_IndicatorPanel_C_SetCustomState_Params params {};
		params.LightState = LightState;
		params.Text = Text;
		params.Icon = Icon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_IndicatorPanel.BPW_IndicatorPanel_C.SetIndicatorIcon
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_IndicatorPanel_C::SetIndicatorIcon(class UTexture2D* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_IndicatorPanel.BPW_IndicatorPanel_C.SetIndicatorIcon");
		
		UBPW_IndicatorPanel_C_SetIndicatorIcon_Params params {};
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_IndicatorPanel.BPW_IndicatorPanel_C.SetIndicatorText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        mIndicatorText                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_IndicatorPanel_C::SetIndicatorText(const class FText& mIndicatorText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_IndicatorPanel.BPW_IndicatorPanel_C.SetIndicatorText");
		
		UBPW_IndicatorPanel_C_SetIndicatorText_Params params {};
		params.mIndicatorText = mIndicatorText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_IndicatorPanel.BPW_IndicatorPanel_C.SetStandardState
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_IndicatorPanel_States                            State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_IndicatorPanel_C::SetStandardState(E_IndicatorPanel_States State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_IndicatorPanel.BPW_IndicatorPanel_C.SetStandardState");
		
		UBPW_IndicatorPanel_C_SetStandardState_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_IndicatorPanel.BPW_IndicatorPanel_C.SetIndicatorLightState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_IndicatorPanel_States                            mIndicatorState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_IndicatorPanel_C::SetIndicatorLightState(E_IndicatorPanel_States mIndicatorState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_IndicatorPanel.BPW_IndicatorPanel_C.SetIndicatorLightState");
		
		UBPW_IndicatorPanel_C_SetIndicatorLightState_Params params {};
		params.mIndicatorState = mIndicatorState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_IndicatorPanel.BPW_IndicatorPanel_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_IndicatorPanel_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_IndicatorPanel.BPW_IndicatorPanel_C.PreConstruct");
		
		UBPW_IndicatorPanel_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_IndicatorPanel.BPW_IndicatorPanel_C.ExecuteUbergraph_BPW_IndicatorPanel
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_IndicatorPanel_C::ExecuteUbergraph_BPW_IndicatorPanel(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_IndicatorPanel.BPW_IndicatorPanel_C.ExecuteUbergraph_BPW_IndicatorPanel");
		
		UBPW_IndicatorPanel_C_ExecuteUbergraph_BPW_IndicatorPanel_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_IndicatorPanel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_IndicatorPanel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_IndicatorPanel.BPW_IndicatorPanel_C");
		return ptr;
	}

}


