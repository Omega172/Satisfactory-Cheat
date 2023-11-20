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
	 * 		Name   -> Function BPW_RadarTower.BPW_RadarTower_C.UpdateZoomSlider
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_RadarTower_C::UpdateZoomSlider()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_RadarTower.BPW_RadarTower_C.UpdateZoomSlider");
		
		UBPW_RadarTower_C_UpdateZoomSlider_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_RadarTower.BPW_RadarTower_C.NormalizedValueToZoomValue
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             NormalizedValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ZoomX                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ZoomY                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_RadarTower_C::NormalizedValueToZoomValue(double NormalizedValue, double* ZoomX, double* ZoomY)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_RadarTower.BPW_RadarTower_C.NormalizedValueToZoomValue");
		
		UBPW_RadarTower_C_NormalizedValueToZoomValue_Params params {};
		params.NormalizedValue = NormalizedValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ZoomX != nullptr)
			*ZoomX = params.ZoomX;
		if (ZoomY != nullptr)
			*ZoomY = params.ZoomY;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_RadarTower.BPW_RadarTower_C.UpdatePowerState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_RadarTower_C::UpdatePowerState(bool State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_RadarTower.BPW_RadarTower_C.UpdatePowerState");
		
		UBPW_RadarTower_C_UpdatePowerState_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_RadarTower.BPW_RadarTower_C.UpdateName
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_RadarTower_C::UpdateName(const class FText& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_RadarTower.BPW_RadarTower_C.UpdateName");
		
		UBPW_RadarTower_C_UpdateName_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_RadarTower.BPW_RadarTower_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_RadarTower_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_RadarTower.BPW_RadarTower_C.Construct");
		
		UBPW_RadarTower_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_RadarTower.BPW_RadarTower_C.BndEvt__BPW_RadarTower_Widget_Window_DarkMode_K2Node_ComponentBoundEvent_1_OnClose__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_RadarTower_C::BndEvt__BPW_RadarTower_Widget_Window_DarkMode_K2Node_ComponentBoundEvent_1_OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_RadarTower.BPW_RadarTower_C.BndEvt__BPW_RadarTower_Widget_Window_DarkMode_K2Node_ComponentBoundEvent_1_OnClose__DelegateSignature");
		
		UBPW_RadarTower_C_BndEvt__BPW_RadarTower_Widget_Window_DarkMode_K2Node_ComponentBoundEvent_1_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_RadarTower.BPW_RadarTower_C.BndEvt__BPW_RadarTower_mNameTextObject_K2Node_ComponentBoundEvent_2_OnEditableTextCommittedEvent__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_RadarTower_C::BndEvt__BPW_RadarTower_mNameTextObject_K2Node_ComponentBoundEvent_2_OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_RadarTower.BPW_RadarTower_C.BndEvt__BPW_RadarTower_mNameTextObject_K2Node_ComponentBoundEvent_2_OnEditableTextCommittedEvent__DelegateSignature");
		
		UBPW_RadarTower_C_BndEvt__BPW_RadarTower_mNameTextObject_K2Node_ComponentBoundEvent_2_OnEditableTextCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_RadarTower.BPW_RadarTower_C.BndEvt__BPW_RadarTower_Widget_Map_K2Node_ComponentBoundEvent_0_ZoomChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_RadarTower_C::BndEvt__BPW_RadarTower_Widget_Map_K2Node_ComponentBoundEvent_0_ZoomChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_RadarTower.BPW_RadarTower_C.BndEvt__BPW_RadarTower_Widget_Map_K2Node_ComponentBoundEvent_0_ZoomChanged__DelegateSignature");
		
		UBPW_RadarTower_C_BndEvt__BPW_RadarTower_Widget_Map_K2Node_ComponentBoundEvent_0_ZoomChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_RadarTower.BPW_RadarTower_C.BndEvt__BPW_RadarTower_mZoomSlider_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_RadarTower_C::BndEvt__BPW_RadarTower_mZoomSlider_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_RadarTower.BPW_RadarTower_C.BndEvt__BPW_RadarTower_mZoomSlider_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature");
		
		UBPW_RadarTower_C_BndEvt__BPW_RadarTower_mZoomSlider_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_RadarTower.BPW_RadarTower_C.BndEvt__BPW_RadarTower_mNameTextObject_K2Node_ComponentBoundEvent_4_OnEditableTextChangedEvent__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBPW_RadarTower_C::BndEvt__BPW_RadarTower_mNameTextObject_K2Node_ComponentBoundEvent_4_OnEditableTextChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_RadarTower.BPW_RadarTower_C.BndEvt__BPW_RadarTower_mNameTextObject_K2Node_ComponentBoundEvent_4_OnEditableTextChangedEvent__DelegateSignature");
		
		UBPW_RadarTower_C_BndEvt__BPW_RadarTower_mNameTextObject_K2Node_ComponentBoundEvent_4_OnEditableTextChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_RadarTower.BPW_RadarTower_C.ExecuteUbergraph_BPW_RadarTower
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_RadarTower_C::ExecuteUbergraph_BPW_RadarTower(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_RadarTower.BPW_RadarTower_C.ExecuteUbergraph_BPW_RadarTower");
		
		UBPW_RadarTower_C_ExecuteUbergraph_BPW_RadarTower_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_RadarTower_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_RadarTower_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_RadarTower.BPW_RadarTower_C");
		return ptr;
	}

}


