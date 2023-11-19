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
	 * 		Name   -> Function BPW_PowerSwitch_PriorityRule.BPW_PowerSwitch_PriorityRule_C.ClearBindnings
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_PowerSwitch_PriorityRule_C::ClearBindnings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch_PriorityRule.BPW_PowerSwitch_PriorityRule_C.ClearBindnings");
		
		UBPW_PowerSwitch_PriorityRule_C_ClearBindnings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch_PriorityRule.BPW_PowerSwitch_PriorityRule_C.OnPrioChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Priority                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PowerSwitch_PriorityRule_C::OnPrioChanged(int32_t Priority)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch_PriorityRule.BPW_PowerSwitch_PriorityRule_C.OnPrioChanged");
		
		UBPW_PowerSwitch_PriorityRule_C_OnPrioChanged_Params params {};
		params.Priority = Priority;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch_PriorityRule.BPW_PowerSwitch_PriorityRule_C.OnRuleRemoved
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_PowerSwitch_PriorityRule_C::OnRuleRemoved()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch_PriorityRule.BPW_PowerSwitch_PriorityRule_C.OnRuleRemoved");
		
		UBPW_PowerSwitch_PriorityRule_C_OnRuleRemoved_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch_PriorityRule.BPW_PowerSwitch_PriorityRule_C.SetSwitchState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               mIsOn                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PowerSwitch_PriorityRule_C::SetSwitchState(bool mIsOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch_PriorityRule.BPW_PowerSwitch_PriorityRule_C.SetSwitchState");
		
		UBPW_PowerSwitch_PriorityRule_C_SetSwitchState_Params params {};
		params.mIsOn = mIsOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch_PriorityRule.BPW_PowerSwitch_PriorityRule_C.SetName
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      InString                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBPW_PowerSwitch_PriorityRule_C::SetName(const class FString& InString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch_PriorityRule.BPW_PowerSwitch_PriorityRule_C.SetName");
		
		UBPW_PowerSwitch_PriorityRule_C_SetName_Params params {};
		params.InString = InString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch_PriorityRule.BPW_PowerSwitch_PriorityRule_C.SetIsDragAndDropRep
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               mIsDragAndDropRep                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PowerSwitch_PriorityRule_C::SetIsDragAndDropRep(bool mIsDragAndDropRep)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch_PriorityRule.BPW_PowerSwitch_PriorityRule_C.SetIsDragAndDropRep");
		
		UBPW_PowerSwitch_PriorityRule_C_SetIsDragAndDropRep_Params params {};
		params.mIsDragAndDropRep = mIsDragAndDropRep;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch_PriorityRule.BPW_PowerSwitch_PriorityRule_C.SetIsPartOfCurrentCircuit
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               mIsPartOfCurrentCircuit                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PowerSwitch_PriorityRule_C::SetIsPartOfCurrentCircuit(bool mIsPartOfCurrentCircuit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch_PriorityRule.BPW_PowerSwitch_PriorityRule_C.SetIsPartOfCurrentCircuit");
		
		UBPW_PowerSwitch_PriorityRule_C_SetIsPartOfCurrentCircuit_Params params {};
		params.mIsPartOfCurrentCircuit = mIsPartOfCurrentCircuit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch_PriorityRule.BPW_PowerSwitch_PriorityRule_C.SetPrioritySwitchInfo
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGPriorityPowerSwitchInfo*                  mPriorityPowerSwitchInfo                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PowerSwitch_PriorityRule_C::SetPrioritySwitchInfo(class AFGPriorityPowerSwitchInfo* mPriorityPowerSwitchInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch_PriorityRule.BPW_PowerSwitch_PriorityRule_C.SetPrioritySwitchInfo");
		
		UBPW_PowerSwitch_PriorityRule_C_SetPrioritySwitchInfo_Params params {};
		params.mPriorityPowerSwitchInfo = mPriorityPowerSwitchInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch_PriorityRule.BPW_PowerSwitch_PriorityRule_C.OnDragDetected
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               PointerEvent                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UDragDropOperation*                          Operation                                                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PowerSwitch_PriorityRule_C::OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch_PriorityRule.BPW_PowerSwitch_PriorityRule_C.OnDragDetected");
		
		UBPW_PowerSwitch_PriorityRule_C_OnDragDetected_Params params {};
		params.MyGeometry = MyGeometry;
		params.PointerEvent = PointerEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Operation != nullptr)
			*Operation = params.Operation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch_PriorityRule.BPW_PowerSwitch_PriorityRule_C.OnMouseButtonDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UBPW_PowerSwitch_PriorityRule_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch_PriorityRule.BPW_PowerSwitch_PriorityRule_C.OnMouseButtonDown");
		
		UBPW_PowerSwitch_PriorityRule_C_OnMouseButtonDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch_PriorityRule.BPW_PowerSwitch_PriorityRule_C.OnMouseEnter
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBPW_PowerSwitch_PriorityRule_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch_PriorityRule.BPW_PowerSwitch_PriorityRule_C.OnMouseEnter");
		
		UBPW_PowerSwitch_PriorityRule_C_OnMouseEnter_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch_PriorityRule.BPW_PowerSwitch_PriorityRule_C.OnMouseLeave
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBPW_PowerSwitch_PriorityRule_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch_PriorityRule.BPW_PowerSwitch_PriorityRule_C.OnMouseLeave");
		
		UBPW_PowerSwitch_PriorityRule_C_OnMouseLeave_Params params {};
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch_PriorityRule.BPW_PowerSwitch_PriorityRule_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_PowerSwitch_PriorityRule_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch_PriorityRule.BPW_PowerSwitch_PriorityRule_C.Construct");
		
		UBPW_PowerSwitch_PriorityRule_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch_PriorityRule.BPW_PowerSwitch_PriorityRule_C.BndEvt__BPW_PowerSwitch_PriorityRule_BPW_Monochrome_Switch_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsTrue                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PowerSwitch_PriorityRule_C::BndEvt__BPW_PowerSwitch_PriorityRule_BPW_Monochrome_Switch_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature(bool IsTrue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch_PriorityRule.BPW_PowerSwitch_PriorityRule_C.BndEvt__BPW_PowerSwitch_PriorityRule_BPW_Monochrome_Switch_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature");
		
		UBPW_PowerSwitch_PriorityRule_C_BndEvt__BPW_PowerSwitch_PriorityRule_BPW_Monochrome_Switch_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature_Params params {};
		params.IsTrue = IsTrue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch_PriorityRule.BPW_PowerSwitch_PriorityRule_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PowerSwitch_PriorityRule_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch_PriorityRule.BPW_PowerSwitch_PriorityRule_C.PreConstruct");
		
		UBPW_PowerSwitch_PriorityRule_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch_PriorityRule.BPW_PowerSwitch_PriorityRule_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_PowerSwitch_PriorityRule_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch_PriorityRule.BPW_PowerSwitch_PriorityRule_C.Destruct");
		
		UBPW_PowerSwitch_PriorityRule_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch_PriorityRule.BPW_PowerSwitch_PriorityRule_C.ExecuteUbergraph_BPW_PowerSwitch_PriorityRule
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PowerSwitch_PriorityRule_C::ExecuteUbergraph_BPW_PowerSwitch_PriorityRule(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch_PriorityRule.BPW_PowerSwitch_PriorityRule_C.ExecuteUbergraph_BPW_PowerSwitch_PriorityRule");
		
		UBPW_PowerSwitch_PriorityRule_C_ExecuteUbergraph_BPW_PowerSwitch_PriorityRule_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch_PriorityRule.BPW_PowerSwitch_PriorityRule_C.OnPriorityChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBPW_PowerSwitch_PriorityRule_C*             Instigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Priority                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PowerSwitch_PriorityRule_C::OnPriorityChanged__DelegateSignature(class UBPW_PowerSwitch_PriorityRule_C* Instigator, int32_t Priority)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch_PriorityRule.BPW_PowerSwitch_PriorityRule_C.OnPriorityChanged__DelegateSignature");
		
		UBPW_PowerSwitch_PriorityRule_C_OnPriorityChanged__DelegateSignature_Params params {};
		params.Instigator = Instigator;
		params.Priority = Priority;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_PowerSwitch_PriorityRule_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_PowerSwitch_PriorityRule_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_PowerSwitch_PriorityRule.BPW_PowerSwitch_PriorityRule_C");
		return ptr;
	}

}


