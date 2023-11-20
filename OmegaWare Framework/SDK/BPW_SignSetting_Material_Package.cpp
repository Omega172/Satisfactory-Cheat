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
	 * 		Name   -> Function BPW_SignSetting_Material.BPW_SignSetting_Material_C.SetIsButtonSelected
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UButton*                                     Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		bool                                               IsSelected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_SignSetting_Material_C::SetIsButtonSelected(class UButton* Button, bool IsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignSetting_Material.BPW_SignSetting_Material_C.SetIsButtonSelected");
		
		UBPW_SignSetting_Material_C_SetIsButtonSelected_Params params {};
		params.Button = Button;
		params.IsSelected = IsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignSetting_Material.BPW_SignSetting_Material_C.SetGlossiness
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             mGlossiness                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CallDelegate                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_SignSetting_Material_C::SetGlossiness(double mGlossiness, bool CallDelegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignSetting_Material.BPW_SignSetting_Material_C.SetGlossiness");
		
		UBPW_SignSetting_Material_C_SetGlossiness_Params params {};
		params.mGlossiness = mGlossiness;
		params.CallDelegate = CallDelegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignSetting_Material.BPW_SignSetting_Material_C.SetEmission
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Emisssion                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CallDelegate                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_SignSetting_Material_C::SetEmission(double Emisssion, bool CallDelegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignSetting_Material.BPW_SignSetting_Material_C.SetEmission");
		
		UBPW_SignSetting_Material_C_SetEmission_Params params {};
		params.Emisssion = Emisssion;
		params.CallDelegate = CallDelegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignSetting_Material.BPW_SignSetting_Material_C.GetEmissionIndex
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             Emission                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	int32_t UBPW_SignSetting_Material_C::GetEmissionIndex(double Emission)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignSetting_Material.BPW_SignSetting_Material_C.GetEmissionIndex");
		
		UBPW_SignSetting_Material_C_GetEmissionIndex_Params params {};
		params.Emission = Emission;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignSetting_Material.BPW_SignSetting_Material_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_SignSetting_Material_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignSetting_Material.BPW_SignSetting_Material_C.Construct");
		
		UBPW_SignSetting_Material_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignSetting_Material.BPW_SignSetting_Material_C.BndEvt__e0_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_SignSetting_Material_C::BndEvt__e0_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignSetting_Material.BPW_SignSetting_Material_C.BndEvt__e0_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");
		
		UBPW_SignSetting_Material_C_BndEvt__e0_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignSetting_Material.BPW_SignSetting_Material_C.BndEvt__e0_1_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_SignSetting_Material_C::BndEvt__e0_1_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignSetting_Material.BPW_SignSetting_Material_C.BndEvt__e0_1_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");
		
		UBPW_SignSetting_Material_C_BndEvt__e0_1_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignSetting_Material.BPW_SignSetting_Material_C.BndEvt__e0_2_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_SignSetting_Material_C::BndEvt__e0_2_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignSetting_Material.BPW_SignSetting_Material_C.BndEvt__e0_2_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");
		
		UBPW_SignSetting_Material_C_BndEvt__e0_2_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignSetting_Material.BPW_SignSetting_Material_C.BndEvt__e0_3_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_SignSetting_Material_C::BndEvt__e0_3_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignSetting_Material.BPW_SignSetting_Material_C.BndEvt__e0_3_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature");
		
		UBPW_SignSetting_Material_C_BndEvt__e0_3_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignSetting_Material.BPW_SignSetting_Material_C.BndEvt__s_Glossy_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_SignSetting_Material_C::BndEvt__s_Glossy_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignSetting_Material.BPW_SignSetting_Material_C.BndEvt__s_Glossy_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");
		
		UBPW_SignSetting_Material_C_BndEvt__s_Glossy_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignSetting_Material.BPW_SignSetting_Material_C.BndEvt__s_Matte_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_SignSetting_Material_C::BndEvt__s_Matte_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignSetting_Material.BPW_SignSetting_Material_C.BndEvt__s_Matte_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature");
		
		UBPW_SignSetting_Material_C_BndEvt__s_Matte_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignSetting_Material.BPW_SignSetting_Material_C.ExecuteUbergraph_BPW_SignSetting_Material
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_SignSetting_Material_C::ExecuteUbergraph_BPW_SignSetting_Material(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignSetting_Material.BPW_SignSetting_Material_C.ExecuteUbergraph_BPW_SignSetting_Material");
		
		UBPW_SignSetting_Material_C_ExecuteUbergraph_BPW_SignSetting_Material_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignSetting_Material.BPW_SignSetting_Material_C.OnGlossinessChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             NewGlossiness                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_SignSetting_Material_C::OnGlossinessChanged__DelegateSignature(double NewGlossiness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignSetting_Material.BPW_SignSetting_Material_C.OnGlossinessChanged__DelegateSignature");
		
		UBPW_SignSetting_Material_C_OnGlossinessChanged__DelegateSignature_Params params {};
		params.NewGlossiness = NewGlossiness;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignSetting_Material.BPW_SignSetting_Material_C.OnEmissionChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             mNewEmission                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_SignSetting_Material_C::OnEmissionChanged__DelegateSignature(double mNewEmission)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignSetting_Material.BPW_SignSetting_Material_C.OnEmissionChanged__DelegateSignature");
		
		UBPW_SignSetting_Material_C_OnEmissionChanged__DelegateSignature_Params params {};
		params.mNewEmission = mNewEmission;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_SignSetting_Material_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_SignSetting_Material_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_SignSetting_Material.BPW_SignSetting_Material_C");
		return ptr;
	}

}


