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
	 * 		Name   -> Function BPW_PowerSwitch.BPW_PowerSwitch_C.Cleanup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_PowerSwitch_C::Cleanup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch.BPW_PowerSwitch_C.Cleanup");
		
		UBPW_PowerSwitch_C_Cleanup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch.BPW_PowerSwitch_C.OnPowerSwitchChanged
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_PowerSwitch_C::OnPowerSwitchChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch.BPW_PowerSwitch_C.OnPowerSwitchChanged");
		
		UBPW_PowerSwitch_C_OnPowerSwitchChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch.BPW_PowerSwitch_C.OnmGetPowerCircuit_2
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class UFGPowerCircuit* UBPW_PowerSwitch_C::OnmGetPowerCircuit_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch.BPW_PowerSwitch_C.OnmGetPowerCircuit_2");
		
		UBPW_PowerSwitch_C_OnmGetPowerCircuit_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch.BPW_PowerSwitch_C.OnmGetPowerCircuit_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class UFGPowerCircuit* UBPW_PowerSwitch_C::OnmGetPowerCircuit_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch.BPW_PowerSwitch_C.OnmGetPowerCircuit_1");
		
		UBPW_PowerSwitch_C_OnmGetPowerCircuit_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch.BPW_PowerSwitch_C.SetupGraphData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_PowerSwitch_C::SetupGraphData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch.BPW_PowerSwitch_C.SetupGraphData");
		
		UBPW_PowerSwitch_C_SetupGraphData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch.BPW_PowerSwitch_C.PlaySFXHandleClicks
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             HandleValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PowerSwitch_C::PlaySFXHandleClicks(double HandleValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch.BPW_PowerSwitch_C.PlaySFXHandleClicks");
		
		UBPW_PowerSwitch_C_PlaySFXHandleClicks_Params params {};
		params.HandleValue = HandleValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch.BPW_PowerSwitch_C.PlaySFXHandleSwitch
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               SwitchToggle                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PowerSwitch_C::PlaySFXHandleSwitch(bool SwitchToggle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch.BPW_PowerSwitch_C.PlaySFXHandleSwitch");
		
		UBPW_PowerSwitch_C_PlaySFXHandleSwitch_Params params {};
		params.SwitchToggle = SwitchToggle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch.BPW_PowerSwitch_C.SetSwitchHandlePosition
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PowerSwitch_C::SetSwitchHandlePosition(double InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch.BPW_PowerSwitch_C.SetSwitchHandlePosition");
		
		UBPW_PowerSwitch_C_SetSwitchHandlePosition_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch.BPW_PowerSwitch_C.OnLerpFinished
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_PowerSwitch_C::OnLerpFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch.BPW_PowerSwitch_C.OnLerpFinished");
		
		UBPW_PowerSwitch_C_OnLerpFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch.BPW_PowerSwitch_C.UpdateIndicatorPanel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_PowerSwitch_C::UpdateIndicatorPanel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch.BPW_PowerSwitch_C.UpdateIndicatorPanel");
		
		UBPW_PowerSwitch_C_UpdateIndicatorPanel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch.BPW_PowerSwitch_C.GetCurrentLerpValue
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	double UBPW_PowerSwitch_C::GetCurrentLerpValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch.BPW_PowerSwitch_C.GetCurrentLerpValue");
		
		UBPW_PowerSwitch_C_GetCurrentLerpValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch.BPW_PowerSwitch_C.StartLerpHandle
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               StartedUp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsReturning                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PowerSwitch_C::StartLerpHandle(bool StartedUp, bool IsReturning)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch.BPW_PowerSwitch_C.StartLerpHandle");
		
		UBPW_PowerSwitch_C_StartLerpHandle_Params params {};
		params.StartedUp = StartedUp;
		params.IsReturning = IsReturning;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch.BPW_PowerSwitch_C.GetFloatCurveHandleValue
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               StartedUp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	double UBPW_PowerSwitch_C::GetFloatCurveHandleValue(double Value, bool StartedUp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch.BPW_PowerSwitch_C.GetFloatCurveHandleValue");
		
		UBPW_PowerSwitch_C_GetFloatCurveHandleValue_Params params {};
		params.Value = Value;
		params.StartedUp = StartedUp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch.BPW_PowerSwitch_C.LerpHandle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_PowerSwitch_C::LerpHandle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch.BPW_PowerSwitch_C.LerpHandle");
		
		UBPW_PowerSwitch_C_LerpHandle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch.BPW_PowerSwitch_C.OnSwitchTriggered
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_PowerSwitch_C::OnSwitchTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch.BPW_PowerSwitch_C.OnSwitchTriggered");
		
		UBPW_PowerSwitch_C_OnSwitchTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch.BPW_PowerSwitch_C.CalculateSwitchHandleValue
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               GoingDown                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PowerSwitch_C::CalculateSwitchHandleValue(double InValue, bool GoingDown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch.BPW_PowerSwitch_C.CalculateSwitchHandleValue");
		
		UBPW_PowerSwitch_C_CalculateSwitchHandleValue_Params params {};
		params.InValue = InValue;
		params.GoingDown = GoingDown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch.BPW_PowerSwitch_C.RandomGraphData
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TArray<double>                                     Data                                                       (Parm, OutParm)
	 */
	void UBPW_PowerSwitch_C::RandomGraphData(TArray<double>* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch.BPW_PowerSwitch_C.RandomGraphData");
		
		UBPW_PowerSwitch_C_RandomGraphData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Data != nullptr)
			*Data = params.Data;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch.BPW_PowerSwitch_C.RandomizeGraph
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_PowerSwitch_C::RandomizeGraph()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch.BPW_PowerSwitch_C.RandomizeGraph");
		
		UBPW_PowerSwitch_C_RandomizeGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch.BPW_PowerSwitch_C.UpdateGraphInfo
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGPowerConnectionComponent*                 PowerConnection                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ConnectionIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PowerSwitch_C::UpdateGraphInfo(class UFGPowerConnectionComponent* PowerConnection, int32_t ConnectionIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch.BPW_PowerSwitch_C.UpdateGraphInfo");
		
		UBPW_PowerSwitch_C_UpdateGraphInfo_Params params {};
		params.PowerConnection = PowerConnection;
		params.ConnectionIndex = ConnectionIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch.BPW_PowerSwitch_C.GetGraphUpdateTime
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             UpdateTime                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PowerSwitch_C::GetGraphUpdateTime(double* UpdateTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch.BPW_PowerSwitch_C.GetGraphUpdateTime");
		
		UBPW_PowerSwitch_C_GetGraphUpdateTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UpdateTime != nullptr)
			*UpdateTime = params.UpdateTime;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch.BPW_PowerSwitch_C.GetGraphData
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UFGPowerConnectionComponent*                 PowerConnection                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            DataIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<double>                                     Data                                                       (Parm, OutParm)
	 */
	void UBPW_PowerSwitch_C::GetGraphData(class UFGPowerConnectionComponent* PowerConnection, int32_t DataIndex, TArray<double>* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch.BPW_PowerSwitch_C.GetGraphData");
		
		UBPW_PowerSwitch_C_GetGraphData_Params params {};
		params.PowerConnection = PowerConnection;
		params.DataIndex = DataIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Data != nullptr)
			*Data = params.Data;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch.BPW_PowerSwitch_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_PowerSwitch_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch.BPW_PowerSwitch_C.Construct");
		
		UBPW_PowerSwitch_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch.BPW_PowerSwitch_C.OnUpdateGraph
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_PowerSwitch_C::OnUpdateGraph()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch.BPW_PowerSwitch_C.OnUpdateGraph");
		
		UBPW_PowerSwitch_C_OnUpdateGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch.BPW_PowerSwitch_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_PowerSwitch_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch.BPW_PowerSwitch_C.Destruct");
		
		UBPW_PowerSwitch_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch.BPW_PowerSwitch_C.BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_1_OnClose__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_PowerSwitch_C::BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_1_OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch.BPW_PowerSwitch_C.BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_1_OnClose__DelegateSignature");
		
		UBPW_PowerSwitch_C_BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_1_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch.BPW_PowerSwitch_C.BndEvt__Slider_141_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PowerSwitch_C::BndEvt__Slider_141_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch.BPW_PowerSwitch_C.BndEvt__Slider_141_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature");
		
		UBPW_PowerSwitch_C_BndEvt__Slider_141_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch.BPW_PowerSwitch_C.BndEvt__mSwitchHandle_K2Node_ComponentBoundEvent_4_OnMouseCaptureEndEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_PowerSwitch_C::BndEvt__mSwitchHandle_K2Node_ComponentBoundEvent_4_OnMouseCaptureEndEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch.BPW_PowerSwitch_C.BndEvt__mSwitchHandle_K2Node_ComponentBoundEvent_4_OnMouseCaptureEndEvent__DelegateSignature");
		
		UBPW_PowerSwitch_C_BndEvt__mSwitchHandle_K2Node_ComponentBoundEvent_4_OnMouseCaptureEndEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch.BPW_PowerSwitch_C.BndEvt__BPW_PowerSwitch_Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnTabButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PowerSwitch_C::BndEvt__BPW_PowerSwitch_Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnTabButtonClicked__DelegateSignature(int32_t ButtonIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch.BPW_PowerSwitch_C.BndEvt__BPW_PowerSwitch_Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnTabButtonClicked__DelegateSignature");
		
		UBPW_PowerSwitch_C_BndEvt__BPW_PowerSwitch_Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnTabButtonClicked__DelegateSignature_Params params {};
		params.ButtonIndex = ButtonIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch.BPW_PowerSwitch_C.OnPowerSwitchUpdated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_PowerSwitch_C::OnPowerSwitchUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch.BPW_PowerSwitch_C.OnPowerSwitchUpdated");
		
		UBPW_PowerSwitch_C_OnPowerSwitchUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch.BPW_PowerSwitch_C.ExecuteUbergraph_BPW_PowerSwitch
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PowerSwitch_C::ExecuteUbergraph_BPW_PowerSwitch(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch.BPW_PowerSwitch_C.ExecuteUbergraph_BPW_PowerSwitch");
		
		UBPW_PowerSwitch_C_ExecuteUbergraph_BPW_PowerSwitch_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_PowerSwitch_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_PowerSwitch_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_PowerSwitch.BPW_PowerSwitch_C");
		return ptr;
	}

}


