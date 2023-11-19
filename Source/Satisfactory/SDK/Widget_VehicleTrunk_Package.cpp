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
	 * 		Name   -> Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.TryDropOntoSlot
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget_InventorySlot_C*                     TargetSlot                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget_InventorySlot_C*                     OtherSlot                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               SwapItemIfOccupied                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_VehicleTrunk_C::TryDropOntoSlot(class UWidget_InventorySlot_C* TargetSlot, class UWidget_InventorySlot_C* OtherSlot, bool SwapItemIfOccupied, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.TryDropOntoSlot");
		
		UWidget_VehicleTrunk_C_TryDropOntoSlot_Params params {};
		params.TargetSlot = TargetSlot;
		params.OtherSlot = OtherSlot;
		params.SwapItemIfOccupied = SwapItemIfOccupied;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.UpdateRelevantClasses
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_VehicleTrunk_C::UpdateRelevantClasses()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.UpdateRelevantClasses");
		
		UWidget_VehicleTrunk_C_UpdateRelevantClasses_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.SetTitle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_VehicleTrunk_C::SetTitle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.SetTitle");
		
		UWidget_VehicleTrunk_C_SetTitle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.InitCallbacks
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_VehicleTrunk_C::InitCallbacks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.InitCallbacks");
		
		UWidget_VehicleTrunk_C_InitCallbacks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.DropInventorySlotStack
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget_InventorySlot_C*                     InventorySlot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               WasStackMoved                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_VehicleTrunk_C::DropInventorySlotStack(class UWidget_InventorySlot_C* InventorySlot, bool* WasStackMoved)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.DropInventorySlotStack");
		
		UWidget_VehicleTrunk_C_DropInventorySlotStack_Params params {};
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
	 * 		Name   -> Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.SetWindowAlignment
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_VehicleTrunk_C::SetWindowAlignment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.SetWindowAlignment");
		
		UWidget_VehicleTrunk_C_SetWindowAlignment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.CloseVehicle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_VehicleTrunk_C::CloseVehicle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.CloseVehicle");
		
		UWidget_VehicleTrunk_C_CloseVehicle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.Cleanup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_VehicleTrunk_C::Cleanup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.Cleanup");
		
		UWidget_VehicleTrunk_C_Cleanup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_VehicleTrunk_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.Destruct");
		
		UWidget_VehicleTrunk_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.Init
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UWidget_VehicleTrunk_C::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.Init");
		
		UWidget_VehicleTrunk_C_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_VehicleTrunk_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.Construct");
		
		UWidget_VehicleTrunk_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.GrabAllFromVehicleStorage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_VehicleTrunk_C::GrabAllFromVehicleStorage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.GrabAllFromVehicleStorage");
		
		UWidget_VehicleTrunk_C_GrabAllFromVehicleStorage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.StoreAllInVehicleStorage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_VehicleTrunk_C::StoreAllInVehicleStorage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.StoreAllInVehicleStorage");
		
		UWidget_VehicleTrunk_C_StoreAllInVehicleStorage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.BndEvt__mSortButton_1_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_VehicleTrunk_C::BndEvt__mSortButton_1_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.BndEvt__mSortButton_1_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");
		
		UWidget_VehicleTrunk_C_BndEvt__mSortButton_1_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.ExecuteUbergraph_Widget_VehicleTrunk
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_VehicleTrunk_C::ExecuteUbergraph_Widget_VehicleTrunk(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.ExecuteUbergraph_Widget_VehicleTrunk");
		
		UWidget_VehicleTrunk_C_ExecuteUbergraph_Widget_VehicleTrunk_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_VehicleTrunk_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_VehicleTrunk_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_VehicleTrunk.Widget_VehicleTrunk_C");
		return ptr;
	}

}


