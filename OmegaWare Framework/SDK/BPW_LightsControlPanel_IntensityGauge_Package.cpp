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
	 * 		Name   -> Function BPW_LightsControlPanel_IntensityGauge.BPW_LightsControlPanel_IntensityGauge_C.SetValue
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             mValue                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_LightsControlPanel_IntensityGauge_C::SetValue(double mValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LightsControlPanel_IntensityGauge.BPW_LightsControlPanel_IntensityGauge_C.SetValue");
		
		UBPW_LightsControlPanel_IntensityGauge_C_SetValue_Params params {};
		params.mValue = mValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_LightsControlPanel_IntensityGauge.BPW_LightsControlPanel_IntensityGauge_C.SetupGauge
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_LightsControlPanel_IntensityGauge_C::SetupGauge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LightsControlPanel_IntensityGauge.BPW_LightsControlPanel_IntensityGauge_C.SetupGauge");
		
		UBPW_LightsControlPanel_IntensityGauge_C_SetupGauge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_LightsControlPanel_IntensityGauge.BPW_LightsControlPanel_IntensityGauge_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_LightsControlPanel_IntensityGauge_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LightsControlPanel_IntensityGauge.BPW_LightsControlPanel_IntensityGauge_C.PreConstruct");
		
		UBPW_LightsControlPanel_IntensityGauge_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_LightsControlPanel_IntensityGauge.BPW_LightsControlPanel_IntensityGauge_C.ExecuteUbergraph_BPW_LightsControlPanel_IntensityGauge
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_LightsControlPanel_IntensityGauge_C::ExecuteUbergraph_BPW_LightsControlPanel_IntensityGauge(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_LightsControlPanel_IntensityGauge.BPW_LightsControlPanel_IntensityGauge_C.ExecuteUbergraph_BPW_LightsControlPanel_IntensityGauge");
		
		UBPW_LightsControlPanel_IntensityGauge_C_ExecuteUbergraph_BPW_LightsControlPanel_IntensityGauge_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_LightsControlPanel_IntensityGauge_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_LightsControlPanel_IntensityGauge_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_LightsControlPanel_IntensityGauge.BPW_LightsControlPanel_IntensityGauge_C");
		return ptr;
	}

}


