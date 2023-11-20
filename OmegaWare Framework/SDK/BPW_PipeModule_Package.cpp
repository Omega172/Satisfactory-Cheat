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
	 * 		Name   -> Function BPW_PipeModule.BPW_PipeModule_C.InternalUpdateValues
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             CurrentStorage                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             MaxStorage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             FlowIn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             FlowOut                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             MaxFlowRate                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PipeModule_C::InternalUpdateValues(double CurrentStorage, double MaxStorage, double FlowIn, double FlowOut, double MaxFlowRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PipeModule.BPW_PipeModule_C.InternalUpdateValues");
		
		UBPW_PipeModule_C_InternalUpdateValues_Params params {};
		params.CurrentStorage = CurrentStorage;
		params.MaxStorage = MaxStorage;
		params.FlowIn = FlowIn;
		params.FlowOut = FlowOut;
		params.MaxFlowRate = MaxFlowRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PipeModule.BPW_PipeModule_C.SetFluidType
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      fluidDescriptor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PipeModule_C::SetFluidType(class UClass* fluidDescriptor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PipeModule.BPW_PipeModule_C.SetFluidType");
		
		UBPW_PipeModule_C_SetFluidType_Params params {};
		params.fluidDescriptor = fluidDescriptor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PipeModule.BPW_PipeModule_C.UpdateValues
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             CurrentStorage                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             MaxStorage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             FlowIn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             FlowOut                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             MaxFlowRate                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PipeModule_C::UpdateValues(double CurrentStorage, double MaxStorage, double FlowIn, double FlowOut, double MaxFlowRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PipeModule.BPW_PipeModule_C.UpdateValues");
		
		UBPW_PipeModule_C_UpdateValues_Params params {};
		params.CurrentStorage = CurrentStorage;
		params.MaxStorage = MaxStorage;
		params.FlowIn = FlowIn;
		params.FlowOut = FlowOut;
		params.MaxFlowRate = MaxFlowRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PipeModule.BPW_PipeModule_C.UpdateTank
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PipeModule_C::UpdateTank(double NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PipeModule.BPW_PipeModule_C.UpdateTank");
		
		UBPW_PipeModule_C_UpdateTank_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PipeModule.BPW_PipeModule_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_PipeModule_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PipeModule.BPW_PipeModule_C.Construct");
		
		UBPW_PipeModule_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PipeModule.BPW_PipeModule_C.BndEvt__BPW_FlushModule_K2Node_ComponentBoundEvent_6_OnFlush__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		double                                             DrainDuration                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PipeModule_C::BndEvt__BPW_FlushModule_K2Node_ComponentBoundEvent_6_OnFlush__DelegateSignature(double DrainDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PipeModule.BPW_PipeModule_C.BndEvt__BPW_FlushModule_K2Node_ComponentBoundEvent_6_OnFlush__DelegateSignature");
		
		UBPW_PipeModule_C_BndEvt__BPW_FlushModule_K2Node_ComponentBoundEvent_6_OnFlush__DelegateSignature_Params params {};
		params.DrainDuration = DrainDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PipeModule.BPW_PipeModule_C.BndEvt__BPW_FlushModule_K2Node_ComponentBoundEvent_12_OnFullNetworkClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_PipeModule_C::BndEvt__BPW_FlushModule_K2Node_ComponentBoundEvent_12_OnFullNetworkClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PipeModule.BPW_PipeModule_C.BndEvt__BPW_FlushModule_K2Node_ComponentBoundEvent_12_OnFullNetworkClicked__DelegateSignature");
		
		UBPW_PipeModule_C_BndEvt__BPW_FlushModule_K2Node_ComponentBoundEvent_12_OnFullNetworkClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PipeModule.BPW_PipeModule_C.BndEvt__BPW_FlushModule_K2Node_ComponentBoundEvent_13_OnThisBufferClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_PipeModule_C::BndEvt__BPW_FlushModule_K2Node_ComponentBoundEvent_13_OnThisBufferClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PipeModule.BPW_PipeModule_C.BndEvt__BPW_FlushModule_K2Node_ComponentBoundEvent_13_OnThisBufferClicked__DelegateSignature");
		
		UBPW_PipeModule_C_BndEvt__BPW_FlushModule_K2Node_ComponentBoundEvent_13_OnThisBufferClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PipeModule.BPW_PipeModule_C.BndEvt__BPW_FlushModule_K2Node_ComponentBoundEvent_10_OnDrainCompleted__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_PipeModule_C::BndEvt__BPW_FlushModule_K2Node_ComponentBoundEvent_10_OnDrainCompleted__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PipeModule.BPW_PipeModule_C.BndEvt__BPW_FlushModule_K2Node_ComponentBoundEvent_10_OnDrainCompleted__DelegateSignature");
		
		UBPW_PipeModule_C_BndEvt__BPW_FlushModule_K2Node_ComponentBoundEvent_10_OnDrainCompleted__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PipeModule.BPW_PipeModule_C.BndEvt__BPW_FlushModule_K2Node_ComponentBoundEvent_8_OnFluidLerp__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		double                                             Alpha                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PipeModule_C::BndEvt__BPW_FlushModule_K2Node_ComponentBoundEvent_8_OnFluidLerp__DelegateSignature(double Alpha)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PipeModule.BPW_PipeModule_C.BndEvt__BPW_FlushModule_K2Node_ComponentBoundEvent_8_OnFluidLerp__DelegateSignature");
		
		UBPW_PipeModule_C_BndEvt__BPW_FlushModule_K2Node_ComponentBoundEvent_8_OnFluidLerp__DelegateSignature_Params params {};
		params.Alpha = Alpha;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PipeModule.BPW_PipeModule_C.BndEvt__BPW_FlushModule_K2Node_ComponentBoundEvent_9_OnFluidFilledUp__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_PipeModule_C::BndEvt__BPW_FlushModule_K2Node_ComponentBoundEvent_9_OnFluidFilledUp__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PipeModule.BPW_PipeModule_C.BndEvt__BPW_FlushModule_K2Node_ComponentBoundEvent_9_OnFluidFilledUp__DelegateSignature");
		
		UBPW_PipeModule_C_BndEvt__BPW_FlushModule_K2Node_ComponentBoundEvent_9_OnFluidFilledUp__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PipeModule.BPW_PipeModule_C.ExecuteUbergraph_BPW_PipeModule
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PipeModule_C::ExecuteUbergraph_BPW_PipeModule(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PipeModule.BPW_PipeModule_C.ExecuteUbergraph_BPW_PipeModule");
		
		UBPW_PipeModule_C_ExecuteUbergraph_BPW_PipeModule_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PipeModule.BPW_PipeModule_C.OnDrainCompleted__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_PipeModule_C::OnDrainCompleted__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PipeModule.BPW_PipeModule_C.OnDrainCompleted__DelegateSignature");
		
		UBPW_PipeModule_C_OnDrainCompleted__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PipeModule.BPW_PipeModule_C.OnFlush__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               FlushNetwork                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             DrainDuration                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PipeModule_C::OnFlush__DelegateSignature(bool FlushNetwork, double DrainDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PipeModule.BPW_PipeModule_C.OnFlush__DelegateSignature");
		
		UBPW_PipeModule_C_OnFlush__DelegateSignature_Params params {};
		params.FlushNetwork = FlushNetwork;
		params.DrainDuration = DrainDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_PipeModule_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_PipeModule_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_PipeModule.BPW_PipeModule_C");
		return ptr;
	}

}


