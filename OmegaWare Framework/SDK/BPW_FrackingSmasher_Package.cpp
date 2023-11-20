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
	 * 		Name   -> Function BPW_FrackingSmasher.BPW_FrackingSmasher_C.UpdatePowerStats
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Power                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_FrackingSmasher_C::UpdatePowerStats(double Power)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_FrackingSmasher.BPW_FrackingSmasher_C.UpdatePowerStats");
		
		UBPW_FrackingSmasher_C_UpdatePowerStats_Params params {};
		params.Power = Power;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_FrackingSmasher.BPW_FrackingSmasher_C.UpdateFlowrateText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_FrackingSmasher_C::UpdateFlowrateText(double Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_FrackingSmasher.BPW_FrackingSmasher_C.UpdateFlowrateText");
		
		UBPW_FrackingSmasher_C_UpdateFlowrateText_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_FrackingSmasher.BPW_FrackingSmasher_C.UpdateNodeIndicators
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ConnectedExtractors                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_FrackingSmasher_C::UpdateNodeIndicators(int32_t ConnectedExtractors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_FrackingSmasher.BPW_FrackingSmasher_C.UpdateNodeIndicators");
		
		UBPW_FrackingSmasher_C_UpdateNodeIndicators_Params params {};
		params.ConnectedExtractors = ConnectedExtractors;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_FrackingSmasher.BPW_FrackingSmasher_C.UnbindAllEvents
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_FrackingSmasher_C::UnbindAllEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_FrackingSmasher.BPW_FrackingSmasher_C.UnbindAllEvents");
		
		UBPW_FrackingSmasher_C_UnbindAllEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_FrackingSmasher.BPW_FrackingSmasher_C.BindAllEvents
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_FrackingSmasher_C::BindAllEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_FrackingSmasher.BPW_FrackingSmasher_C.BindAllEvents");
		
		UBPW_FrackingSmasher_C_BindAllEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_FrackingSmasher.BPW_FrackingSmasher_C.SetWindowTitle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_FrackingSmasher_C::SetWindowTitle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_FrackingSmasher.BPW_FrackingSmasher_C.SetWindowTitle");
		
		UBPW_FrackingSmasher_C_SetWindowTitle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_FrackingSmasher.BPW_FrackingSmasher_C.DropInventorySlotStack
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget_InventorySlot_C*                     InventorySlot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               WasStackMoved                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_FrackingSmasher_C::DropInventorySlotStack(class UWidget_InventorySlot_C* InventorySlot, bool* WasStackMoved)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_FrackingSmasher.BPW_FrackingSmasher_C.DropInventorySlotStack");
		
		UBPW_FrackingSmasher_C_DropInventorySlotStack_Params params {};
		params.InventorySlot = InventorySlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WasStackMoved != nullptr)
			*WasStackMoved = params.WasStackMoved;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_FrackingSmasher.BPW_FrackingSmasher_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_FrackingSmasher_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_FrackingSmasher.BPW_FrackingSmasher_C.Construct");
		
		UBPW_FrackingSmasher_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_FrackingSmasher.BPW_FrackingSmasher_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_FrackingSmasher_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_FrackingSmasher.BPW_FrackingSmasher_C.Destruct");
		
		UBPW_FrackingSmasher_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_FrackingSmasher.BPW_FrackingSmasher_C.Event OnConnectedExtractorCountChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            connectedExtractorCount                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_FrackingSmasher_C::EventOnConnectedExtractorCountChanged(int32_t connectedExtractorCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_FrackingSmasher.BPW_FrackingSmasher_C.Event OnConnectedExtractorCountChanged");
		
		UBPW_FrackingSmasher_C_EventOnConnectedExtractorCountChanged_Params params {};
		params.connectedExtractorCount = connectedExtractorCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_FrackingSmasher.BPW_FrackingSmasher_C.Event OnCurrentPotentialChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              currentPotential                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_FrackingSmasher_C::EventOnCurrentPotentialChanged(float currentPotential)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_FrackingSmasher.BPW_FrackingSmasher_C.Event OnCurrentPotentialChanged");
		
		UBPW_FrackingSmasher_C_EventOnCurrentPotentialChanged_Params params {};
		params.currentPotential = currentPotential;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_FrackingSmasher.BPW_FrackingSmasher_C.OnHasStandbyChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_FrackingSmasher_C::OnHasStandbyChanged(bool State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_FrackingSmasher.BPW_FrackingSmasher_C.OnHasStandbyChanged");
		
		UBPW_FrackingSmasher_C_OnHasStandbyChanged_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_FrackingSmasher.BPW_FrackingSmasher_C.BndEvt__mStandbyButton_K2Node_ComponentBoundEvent_2_OnStandbyClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_FrackingSmasher_C::BndEvt__mStandbyButton_K2Node_ComponentBoundEvent_2_OnStandbyClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_FrackingSmasher.BPW_FrackingSmasher_C.BndEvt__mStandbyButton_K2Node_ComponentBoundEvent_2_OnStandbyClicked__DelegateSignature");
		
		UBPW_FrackingSmasher_C_BndEvt__mStandbyButton_K2Node_ComponentBoundEvent_2_OnStandbyClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_FrackingSmasher.BPW_FrackingSmasher_C.ExecuteUbergraph_BPW_FrackingSmasher
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_FrackingSmasher_C::ExecuteUbergraph_BPW_FrackingSmasher(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_FrackingSmasher.BPW_FrackingSmasher_C.ExecuteUbergraph_BPW_FrackingSmasher");
		
		UBPW_FrackingSmasher_C_ExecuteUbergraph_BPW_FrackingSmasher_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_FrackingSmasher_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_FrackingSmasher_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_FrackingSmasher.BPW_FrackingSmasher_C");
		return ptr;
	}

}


