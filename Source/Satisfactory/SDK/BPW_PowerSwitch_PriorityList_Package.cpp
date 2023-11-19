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
	 * 		Name   -> Function BPW_PowerSwitch_PriorityList.BPW_PowerSwitch_PriorityList_C.Update Group IDs
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_PowerSwitch_PriorityList_C::UpdateGroupIDs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch_PriorityList.BPW_PowerSwitch_PriorityList_C.Update Group IDs");
		
		UBPW_PowerSwitch_PriorityList_C_UpdateGroupIDs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch_PriorityList.BPW_PowerSwitch_PriorityList_C.Is Same Group ID
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            A                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            B                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBPW_PowerSwitch_PriorityList_C::IsSameGroupID(int32_t A, int32_t B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch_PriorityList.BPW_PowerSwitch_PriorityList_C.Is Same Group ID");
		
		UBPW_PowerSwitch_PriorityList_C_IsSameGroupID_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch_PriorityList.BPW_PowerSwitch_PriorityList_C.AddRule
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGPriorityPowerSwitchInfo*                  PowerSwtichInfo                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PowerSwitch_PriorityList_C::AddRule(class AFGPriorityPowerSwitchInfo* PowerSwtichInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch_PriorityList.BPW_PowerSwitch_PriorityList_C.AddRule");
		
		UBPW_PowerSwitch_PriorityList_C_AddRule_Params params {};
		params.PowerSwtichInfo = PowerSwtichInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch_PriorityList.BPW_PowerSwitch_PriorityList_C.MoveRule
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBPW_PowerSwitch_PriorityRule_C*             Rule                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Priority                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PowerSwitch_PriorityList_C::MoveRule(class UBPW_PowerSwitch_PriorityRule_C* Rule, int32_t Priority)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch_PriorityList.BPW_PowerSwitch_PriorityList_C.MoveRule");
		
		UBPW_PowerSwitch_PriorityList_C_MoveRule_Params params {};
		params.Rule = Rule;
		params.Priority = Priority;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch_PriorityList.BPW_PowerSwitch_PriorityList_C.IsSwitchInfoPartOfCircuit
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AFGPriorityPowerSwitchInfo*                  PowerSwitchInfo                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBPW_PowerSwitch_PriorityList_C::IsSwitchInfoPartOfCircuit(class AFGPriorityPowerSwitchInfo* PowerSwitchInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch_PriorityList.BPW_PowerSwitch_PriorityList_C.IsSwitchInfoPartOfCircuit");
		
		UBPW_PowerSwitch_PriorityList_C_IsSwitchInfoPartOfCircuit_Params params {};
		params.PowerSwitchInfo = PowerSwitchInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch_PriorityList.BPW_PowerSwitch_PriorityList_C.OnSearch
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        SearchText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_PowerSwitch_PriorityList_C::OnSearch(const class FText& SearchText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch_PriorityList.BPW_PowerSwitch_PriorityList_C.OnSearch");
		
		UBPW_PowerSwitch_PriorityList_C_OnSearch_Params params {};
		params.SearchText = SearchText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch_PriorityList.BPW_PowerSwitch_PriorityList_C.SetPriorityPowerSwitch
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGBuildablePriorityPowerSwitch*             mPriorityPowerSwitch                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PowerSwitch_PriorityList_C::SetPriorityPowerSwitch(class AFGBuildablePriorityPowerSwitch* mPriorityPowerSwitch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch_PriorityList.BPW_PowerSwitch_PriorityList_C.SetPriorityPowerSwitch");
		
		UBPW_PowerSwitch_PriorityList_C_SetPriorityPowerSwitch_Params params {};
		params.mPriorityPowerSwitch = mPriorityPowerSwitch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch_PriorityList.BPW_PowerSwitch_PriorityList_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PowerSwitch_PriorityList_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch_PriorityList.BPW_PowerSwitch_PriorityList_C.PreConstruct");
		
		UBPW_PowerSwitch_PriorityList_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch_PriorityList.BPW_PowerSwitch_PriorityList_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_PowerSwitch_PriorityList_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch_PriorityList.BPW_PowerSwitch_PriorityList_C.Construct");
		
		UBPW_PowerSwitch_PriorityList_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch_PriorityList.BPW_PowerSwitch_PriorityList_C.BndEvt__BPW_PowerSwitch_PriorityList_mSearchText_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBPW_PowerSwitch_PriorityList_C::BndEvt__BPW_PowerSwitch_PriorityList_mSearchText_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch_PriorityList.BPW_PowerSwitch_PriorityList_C.BndEvt__BPW_PowerSwitch_PriorityList_mSearchText_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature");
		
		UBPW_PowerSwitch_PriorityList_C_BndEvt__BPW_PowerSwitch_PriorityList_mSearchText_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch_PriorityList.BPW_PowerSwitch_PriorityList_C.Delegate Update Group IDs
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_PowerSwitch_PriorityList_C::DelegateUpdateGroupIDs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch_PriorityList.BPW_PowerSwitch_PriorityList_C.Delegate Update Group IDs");
		
		UBPW_PowerSwitch_PriorityList_C_DelegateUpdateGroupIDs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch_PriorityList.BPW_PowerSwitch_PriorityList_C.Timer Update Group IDs
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_PowerSwitch_PriorityList_C::TimerUpdateGroupIDs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch_PriorityList.BPW_PowerSwitch_PriorityList_C.Timer Update Group IDs");
		
		UBPW_PowerSwitch_PriorityList_C_TimerUpdateGroupIDs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch_PriorityList.BPW_PowerSwitch_PriorityList_C.ExecuteUbergraph_BPW_PowerSwitch_PriorityList
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PowerSwitch_PriorityList_C::ExecuteUbergraph_BPW_PowerSwitch_PriorityList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch_PriorityList.BPW_PowerSwitch_PriorityList_C.ExecuteUbergraph_BPW_PowerSwitch_PriorityList");
		
		UBPW_PowerSwitch_PriorityList_C_ExecuteUbergraph_BPW_PowerSwitch_PriorityList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_PowerSwitch_PriorityList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_PowerSwitch_PriorityList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_PowerSwitch_PriorityList.BPW_PowerSwitch_PriorityList_C");
		return ptr;
	}

}


