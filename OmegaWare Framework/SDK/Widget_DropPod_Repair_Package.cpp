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
	 * 		Name   -> Function Widget_DropPod_Repair.Widget_DropPod_Repair_C.GetHasAllRepairParts
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               HasAllParts                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_DropPod_Repair_C::GetHasAllRepairParts(bool* HasAllParts)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_DropPod_Repair.Widget_DropPod_Repair_C.GetHasAllRepairParts");
		
		UWidget_DropPod_Repair_C_GetHasAllRepairParts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasAllParts != nullptr)
			*HasAllParts = params.HasAllParts;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_DropPod_Repair.Widget_DropPod_Repair_C.SetHasDoorBeenOpened
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_DropPod_Repair_C::SetHasDoorBeenOpened()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_DropPod_Repair.Widget_DropPod_Repair_C.SetHasDoorBeenOpened");
		
		UWidget_DropPod_Repair_C_SetHasDoorBeenOpened_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_DropPod_Repair.Widget_DropPod_Repair_C.SetupScreenText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_DropPod_Repair_C::SetupScreenText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_DropPod_Repair.Widget_DropPod_Repair_C.SetupScreenText");
		
		UWidget_DropPod_Repair_C_SetupScreenText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_DropPod_Repair.Widget_DropPod_Repair_C.SetupCostSlot
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_DropPod_Repair_C::SetupCostSlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_DropPod_Repair.Widget_DropPod_Repair_C.SetupCostSlot");
		
		UWidget_DropPod_Repair_C_SetupCostSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_DropPod_Repair.Widget_DropPod_Repair_C.GetHasPartsAndPower
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool UWidget_DropPod_Repair_C::GetHasPartsAndPower()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_DropPod_Repair.Widget_DropPod_Repair_C.GetHasPartsAndPower");
		
		UWidget_DropPod_Repair_C_GetHasPartsAndPower_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_DropPod_Repair.Widget_DropPod_Repair_C.GetRepairButtonVisibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UWidget_DropPod_Repair_C::GetRepairButtonVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_DropPod_Repair.Widget_DropPod_Repair_C.GetRepairButtonVisibility");
		
		UWidget_DropPod_Repair_C_GetRepairButtonVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_DropPod_Repair.Widget_DropPod_Repair_C.GetRepairConditionText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UWidget_DropPod_Repair_C::GetRepairConditionText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_DropPod_Repair.Widget_DropPod_Repair_C.GetRepairConditionText");
		
		UWidget_DropPod_Repair_C_GetRepairConditionText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_DropPod_Repair.Widget_DropPod_Repair_C.BndEvt__mGrabAllButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_DropPod_Repair_C::BndEvt__mGrabAllButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_DropPod_Repair.Widget_DropPod_Repair_C.BndEvt__mGrabAllButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");
		
		UWidget_DropPod_Repair_C_BndEvt__mGrabAllButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_DropPod_Repair.Widget_DropPod_Repair_C.Init
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UWidget_DropPod_Repair_C::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_DropPod_Repair.Widget_DropPod_Repair_C.Init");
		
		UWidget_DropPod_Repair_C_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_DropPod_Repair.Widget_DropPod_Repair_C.OnDoorOpen
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_DropPod_Repair_C::OnDoorOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_DropPod_Repair.Widget_DropPod_Repair_C.OnDoorOpen");
		
		UWidget_DropPod_Repair_C_OnDoorOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_DropPod_Repair.Widget_DropPod_Repair_C.PodUnlocked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_DropPod_Repair_C::PodUnlocked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_DropPod_Repair.Widget_DropPod_Repair_C.PodUnlocked");
		
		UWidget_DropPod_Repair_C_PodUnlocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_DropPod_Repair.Widget_DropPod_Repair_C.SpawnSmoke
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_DropPod_Repair_C::SpawnSmoke()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_DropPod_Repair.Widget_DropPod_Repair_C.SpawnSmoke");
		
		UWidget_DropPod_Repair_C_SpawnSmoke_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_DropPod_Repair.Widget_DropPod_Repair_C.ExecuteUbergraph_Widget_DropPod_Repair
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_DropPod_Repair_C::ExecuteUbergraph_Widget_DropPod_Repair(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_DropPod_Repair.Widget_DropPod_Repair_C.ExecuteUbergraph_Widget_DropPod_Repair");
		
		UWidget_DropPod_Repair_C_ExecuteUbergraph_Widget_DropPod_Repair_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_DropPod_Repair_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_DropPod_Repair_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_DropPod_Repair.Widget_DropPod_Repair_C");
		return ptr;
	}

}


