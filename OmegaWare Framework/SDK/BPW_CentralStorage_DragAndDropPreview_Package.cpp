/**
 * Name: Satisfactory
 * Version: Early_Access_CL#273254
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_CentralStorage_DragAndDropPreview.BPW_CentralStorage_DragAndDropPreview_C.GetItemDescriptor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      itemDescriptor                                             (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_CentralStorage_DragAndDropPreview_C::GetItemDescriptor(class UClass** itemDescriptor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_CentralStorage_DragAndDropPreview.BPW_CentralStorage_DragAndDropPreview_C.GetItemDescriptor");
		
		UBPW_CentralStorage_DragAndDropPreview_C_GetItemDescriptor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (itemDescriptor != nullptr)
			*itemDescriptor = params.itemDescriptor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_CentralStorage_DragAndDropPreview.BPW_CentralStorage_DragAndDropPreview_C.GetDragAndDropType
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EInventorySlot_DragAndDropTypes                    Type                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_CentralStorage_DragAndDropPreview_C::GetDragAndDropType(EInventorySlot_DragAndDropTypes* Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_CentralStorage_DragAndDropPreview.BPW_CentralStorage_DragAndDropPreview_C.GetDragAndDropType");
		
		UBPW_CentralStorage_DragAndDropPreview_C_GetDragAndDropType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Type != nullptr)
			*Type = params.Type;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_CentralStorage_DragAndDropPreview.BPW_CentralStorage_DragAndDropPreview_C.WasDropped
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AmountMoved                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UFGInventoryComponent*                       TargetInventory                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TargetIdx                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_CentralStorage_DragAndDropPreview_C::WasDropped(int32_t AmountMoved, class UFGInventoryComponent* TargetInventory, int32_t TargetIdx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_CentralStorage_DragAndDropPreview.BPW_CentralStorage_DragAndDropPreview_C.WasDropped");
		
		UBPW_CentralStorage_DragAndDropPreview_C_WasDropped_Params params {};
		params.AmountMoved = AmountMoved;
		params.TargetInventory = TargetInventory;
		params.TargetIdx = TargetIdx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_CentralStorage_DragAndDropPreview.BPW_CentralStorage_DragAndDropPreview_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_CentralStorage_DragAndDropPreview_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_CentralStorage_DragAndDropPreview.BPW_CentralStorage_DragAndDropPreview_C.Construct");
		
		UBPW_CentralStorage_DragAndDropPreview_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_CentralStorage_DragAndDropPreview.BPW_CentralStorage_DragAndDropPreview_C.CentralStorageSlotWasDropped
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGInventoryComponent*                       TargetInventory                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TargetIdx                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_CentralStorage_DragAndDropPreview_C::CentralStorageSlotWasDropped(class UFGInventoryComponent* TargetInventory, int32_t TargetIdx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_CentralStorage_DragAndDropPreview.BPW_CentralStorage_DragAndDropPreview_C.CentralStorageSlotWasDropped");
		
		UBPW_CentralStorage_DragAndDropPreview_C_CentralStorageSlotWasDropped_Params params {};
		params.TargetInventory = TargetInventory;
		params.TargetIdx = TargetIdx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_CentralStorage_DragAndDropPreview.BPW_CentralStorage_DragAndDropPreview_C.ExecuteUbergraph_BPW_CentralStorage_DragAndDropPreview
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_CentralStorage_DragAndDropPreview_C::ExecuteUbergraph_BPW_CentralStorage_DragAndDropPreview(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_CentralStorage_DragAndDropPreview.BPW_CentralStorage_DragAndDropPreview_C.ExecuteUbergraph_BPW_CentralStorage_DragAndDropPreview");
		
		UBPW_CentralStorage_DragAndDropPreview_C_ExecuteUbergraph_BPW_CentralStorage_DragAndDropPreview_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_CentralStorage_DragAndDropPreview.BPW_CentralStorage_DragAndDropPreview_C.OnWasDropped__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AmountMoved                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UFGInventoryComponent*                       TargetInventory                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TargetIdx                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_CentralStorage_DragAndDropPreview_C::OnWasDropped__DelegateSignature(int32_t AmountMoved, class UFGInventoryComponent* TargetInventory, int32_t TargetIdx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_CentralStorage_DragAndDropPreview.BPW_CentralStorage_DragAndDropPreview_C.OnWasDropped__DelegateSignature");
		
		UBPW_CentralStorage_DragAndDropPreview_C_OnWasDropped__DelegateSignature_Params params {};
		params.AmountMoved = AmountMoved;
		params.TargetInventory = TargetInventory;
		params.TargetIdx = TargetIdx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_CentralStorage_DragAndDropPreview_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_CentralStorage_DragAndDropPreview_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_CentralStorage_DragAndDropPreview.BPW_CentralStorage_DragAndDropPreview_C");
		return ptr;
	}

}


