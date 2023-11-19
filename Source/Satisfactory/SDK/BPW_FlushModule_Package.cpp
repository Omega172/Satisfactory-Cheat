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
	 * 		Name   -> Function BPW_FlushModule.BPW_FlushModule_C.SetFlushButtonVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               mCanFlushSegmentOnly                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_FlushModule_C::SetFlushButtonVisibility(bool mCanFlushSegmentOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_FlushModule.BPW_FlushModule_C.SetFlushButtonVisibility");
		
		UBPW_FlushModule_C_SetFlushButtonVisibility_Params params {};
		params.mCanFlushSegmentOnly = mCanFlushSegmentOnly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_FlushModule.BPW_FlushModule_C.BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_0_OnFlush__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		double                                             DrainDuration                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_FlushModule_C::BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_0_OnFlush__DelegateSignature(double DrainDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_FlushModule.BPW_FlushModule_C.BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_0_OnFlush__DelegateSignature");
		
		UBPW_FlushModule_C_BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_0_OnFlush__DelegateSignature_Params params {};
		params.DrainDuration = DrainDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_FlushModule.BPW_FlushModule_C.BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_2_OnFluidLerp__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		double                                             Alpha                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_FlushModule_C::BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_2_OnFluidLerp__DelegateSignature(double Alpha)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_FlushModule.BPW_FlushModule_C.BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_2_OnFluidLerp__DelegateSignature");
		
		UBPW_FlushModule_C_BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_2_OnFluidLerp__DelegateSignature_Params params {};
		params.Alpha = Alpha;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_FlushModule.BPW_FlushModule_C.BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_3_OnFluidFilledUp__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_FlushModule_C::BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_3_OnFluidFilledUp__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_FlushModule.BPW_FlushModule_C.BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_3_OnFluidFilledUp__DelegateSignature");
		
		UBPW_FlushModule_C_BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_3_OnFluidFilledUp__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_FlushModule.BPW_FlushModule_C.BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_4_OnDrainCompleted__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_FlushModule_C::BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_4_OnDrainCompleted__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_FlushModule.BPW_FlushModule_C.BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_4_OnDrainCompleted__DelegateSignature");
		
		UBPW_FlushModule_C_BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_4_OnDrainCompleted__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_FlushModule.BPW_FlushModule_C.BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_5_OnFlushCompleted__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_FlushModule_C::BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_5_OnFlushCompleted__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_FlushModule.BPW_FlushModule_C.BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_5_OnFlushCompleted__DelegateSignature");
		
		UBPW_FlushModule_C_BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_5_OnFlushCompleted__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_FlushModule.BPW_FlushModule_C.BndEvt__BPW_DarkButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_FlushModule_C::BndEvt__BPW_DarkButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_FlushModule.BPW_FlushModule_C.BndEvt__BPW_DarkButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature");
		
		UBPW_FlushModule_C_BndEvt__BPW_DarkButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_FlushModule.BPW_FlushModule_C.BndEvt__BPW_DarkButton_101_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_FlushModule_C::BndEvt__BPW_DarkButton_101_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_FlushModule.BPW_FlushModule_C.BndEvt__BPW_DarkButton_101_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature");
		
		UBPW_FlushModule_C_BndEvt__BPW_DarkButton_101_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_FlushModule.BPW_FlushModule_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_FlushModule_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_FlushModule.BPW_FlushModule_C.PreConstruct");
		
		UBPW_FlushModule_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_FlushModule.BPW_FlushModule_C.ExecuteUbergraph_BPW_FlushModule
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_FlushModule_C::ExecuteUbergraph_BPW_FlushModule(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_FlushModule.BPW_FlushModule_C.ExecuteUbergraph_BPW_FlushModule");
		
		UBPW_FlushModule_C_ExecuteUbergraph_BPW_FlushModule_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_FlushModule.BPW_FlushModule_C.OnThisBufferClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_FlushModule_C::OnThisBufferClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_FlushModule.BPW_FlushModule_C.OnThisBufferClicked__DelegateSignature");
		
		UBPW_FlushModule_C_OnThisBufferClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_FlushModule.BPW_FlushModule_C.OnFullNetworkClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_FlushModule_C::OnFullNetworkClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_FlushModule.BPW_FlushModule_C.OnFullNetworkClicked__DelegateSignature");
		
		UBPW_FlushModule_C_OnFullNetworkClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_FlushModule.BPW_FlushModule_C.OnFlushCompleted__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_FlushModule_C::OnFlushCompleted__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_FlushModule.BPW_FlushModule_C.OnFlushCompleted__DelegateSignature");
		
		UBPW_FlushModule_C_OnFlushCompleted__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_FlushModule.BPW_FlushModule_C.OnDrainCompleted__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_FlushModule_C::OnDrainCompleted__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_FlushModule.BPW_FlushModule_C.OnDrainCompleted__DelegateSignature");
		
		UBPW_FlushModule_C_OnDrainCompleted__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_FlushModule.BPW_FlushModule_C.OnFluidFilledUp__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_FlushModule_C::OnFluidFilledUp__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_FlushModule.BPW_FlushModule_C.OnFluidFilledUp__DelegateSignature");
		
		UBPW_FlushModule_C_OnFluidFilledUp__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_FlushModule.BPW_FlushModule_C.OnFluidLerp__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Alpha                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_FlushModule_C::OnFluidLerp__DelegateSignature(double Alpha)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_FlushModule.BPW_FlushModule_C.OnFluidLerp__DelegateSignature");
		
		UBPW_FlushModule_C_OnFluidLerp__DelegateSignature_Params params {};
		params.Alpha = Alpha;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_FlushModule.BPW_FlushModule_C.OnFlush__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             DrainDuration                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_FlushModule_C::OnFlush__DelegateSignature(double DrainDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_FlushModule.BPW_FlushModule_C.OnFlush__DelegateSignature");
		
		UBPW_FlushModule_C_OnFlush__DelegateSignature_Params params {};
		params.DrainDuration = DrainDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_FlushModule_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_FlushModule_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_FlushModule.BPW_FlushModule_C");
		return ptr;
	}

}


