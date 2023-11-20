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
	 * 		Name   -> Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.Internal_UpdateRelevantInventory
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_PlayerInventoryAddon_C::Internal_UpdateRelevantInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.Internal_UpdateRelevantInventory");
		
		UWidget_PlayerInventoryAddon_C_Internal_UpdateRelevantInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.AnimateNewInventorySlots
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            InputPin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_PlayerInventoryAddon_C::AnimateNewInventorySlots(int32_t InputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.AnimateNewInventorySlots");
		
		UWidget_PlayerInventoryAddon_C_AnimateNewInventorySlots_Params params {};
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.FindInventorySlotWithIdx
	 * 		Flags  -> (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            slotIdx                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget_InventorySlot_C*                     ArrayElement                                               (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_PlayerInventoryAddon_C::FindInventorySlotWithIdx(int32_t slotIdx, class UWidget_InventorySlot_C** ArrayElement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.FindInventorySlotWithIdx");
		
		UWidget_PlayerInventoryAddon_C_FindInventorySlotWithIdx_Params params {};
		params.slotIdx = slotIdx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ArrayElement != nullptr)
			*ArrayElement = params.ArrayElement;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.SetDividerVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_PlayerInventoryAddon_C::SetDividerVisibility(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.SetDividerVisibility");
		
		UWidget_PlayerInventoryAddon_C_SetDividerVisibility_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.SetRelevantItemsText
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        mRelevantItemsText                                         (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWidget_PlayerInventoryAddon_C::SetRelevantItemsText(const class FText& mRelevantItemsText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.SetRelevantItemsText");
		
		UWidget_PlayerInventoryAddon_C_SetRelevantItemsText_Params params {};
		params.mRelevantItemsText = mRelevantItemsText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.ShouldItemClassUpdateRelevantInventory
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UClass*                                      UpdatedItemClass                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Return                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_PlayerInventoryAddon_C::ShouldItemClassUpdateRelevantInventory(class UClass* UpdatedItemClass, bool* Return)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.ShouldItemClassUpdateRelevantInventory");
		
		UWidget_PlayerInventoryAddon_C_ShouldItemClassUpdateRelevantInventory_Params params {};
		params.UpdatedItemClass = UpdatedItemClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return != nullptr)
			*Return = params.Return;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.SetupRelevantInventory
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UClass*>                              mRelevantClasses                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWidget_PlayerInventoryAddon_C::SetupRelevantInventory(TArray<class UClass*>* mRelevantClasses)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.SetupRelevantInventory");
		
		UWidget_PlayerInventoryAddon_C_SetupRelevantInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (mRelevantClasses != nullptr)
			*mRelevantClasses = params.mRelevantClasses;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.UpdateRelevantInventory
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_PlayerInventoryAddon_C::UpdateRelevantInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.UpdateRelevantInventory");
		
		UWidget_PlayerInventoryAddon_C_UpdateRelevantInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.OnInventorySlotMoveStack
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget_InventorySlot_C*                     InventorySlotSender                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_PlayerInventoryAddon_C::OnInventorySlotMoveStack(class UWidget_InventorySlot_C* InventorySlotSender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.OnInventorySlotMoveStack");
		
		UWidget_PlayerInventoryAddon_C_OnInventorySlotMoveStack_Params params {};
		params.InventorySlotSender = InventorySlotSender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.SetInventoryComponents
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGInventoryComponent*                       InventoryComponent                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		class UFGInventoryComponent*                       trash                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_PlayerInventoryAddon_C::SetInventoryComponents(class UFGInventoryComponent* InventoryComponent, class UFGInventoryComponent* trash)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.SetInventoryComponents");
		
		UWidget_PlayerInventoryAddon_C_SetInventoryComponents_Params params {};
		params.InventoryComponent = InventoryComponent;
		params.trash = trash;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_PlayerInventoryAddon_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.Construct");
		
		UWidget_PlayerInventoryAddon_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.BndEvt__mSortButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_PlayerInventoryAddon_C::BndEvt__mSortButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.BndEvt__mSortButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UWidget_PlayerInventoryAddon_C_BndEvt__mSortButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.OnUpdateRelevantInventory
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      ItemClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		int32_t                                            numAdded                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_PlayerInventoryAddon_C::OnUpdateRelevantInventory(class UClass* ItemClass, int32_t numAdded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.OnUpdateRelevantInventory");
		
		UWidget_PlayerInventoryAddon_C_OnUpdateRelevantInventory_Params params {};
		params.ItemClass = ItemClass;
		params.numAdded = numAdded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_PlayerInventoryAddon_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.PreConstruct");
		
		UWidget_PlayerInventoryAddon_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.BndEvt__mTrashInventoryWidget_K2Node_ComponentBoundEvent_1_OnInventoryDragEnter__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_PlayerInventoryAddon_C::BndEvt__mTrashInventoryWidget_K2Node_ComponentBoundEvent_1_OnInventoryDragEnter__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.BndEvt__mTrashInventoryWidget_K2Node_ComponentBoundEvent_1_OnInventoryDragEnter__DelegateSignature");
		
		UWidget_PlayerInventoryAddon_C_BndEvt__mTrashInventoryWidget_K2Node_ComponentBoundEvent_1_OnInventoryDragEnter__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.BndEvt__mTrashInventoryWidget_K2Node_ComponentBoundEvent_2_OnInventoryDragLeave__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_PlayerInventoryAddon_C::BndEvt__mTrashInventoryWidget_K2Node_ComponentBoundEvent_2_OnInventoryDragLeave__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.BndEvt__mTrashInventoryWidget_K2Node_ComponentBoundEvent_2_OnInventoryDragLeave__DelegateSignature");
		
		UWidget_PlayerInventoryAddon_C_BndEvt__mTrashInventoryWidget_K2Node_ComponentBoundEvent_2_OnInventoryDragLeave__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.BndEvt__mTrashInventoryWidget_K2Node_ComponentBoundEvent_3_OnInventoryMouseLeave__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_PlayerInventoryAddon_C::BndEvt__mTrashInventoryWidget_K2Node_ComponentBoundEvent_3_OnInventoryMouseLeave__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.BndEvt__mTrashInventoryWidget_K2Node_ComponentBoundEvent_3_OnInventoryMouseLeave__DelegateSignature");
		
		UWidget_PlayerInventoryAddon_C_BndEvt__mTrashInventoryWidget_K2Node_ComponentBoundEvent_3_OnInventoryMouseLeave__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.Init
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UWidget_PlayerInventoryAddon_C::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.Init");
		
		UWidget_PlayerInventoryAddon_C_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.ExecuteUbergraph_Widget_PlayerInventoryAddon
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_PlayerInventoryAddon_C::ExecuteUbergraph_Widget_PlayerInventoryAddon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.ExecuteUbergraph_Widget_PlayerInventoryAddon");
		
		UWidget_PlayerInventoryAddon_C_ExecuteUbergraph_Widget_PlayerInventoryAddon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.SlotStackMoveEvent__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget_InventorySlot_C*                     InventorySlot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		EInteractionDirection                              Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_PlayerInventoryAddon_C::SlotStackMoveEvent__DelegateSignature(class UWidget_InventorySlot_C* InventorySlot, EInteractionDirection Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.SlotStackMoveEvent__DelegateSignature");
		
		UWidget_PlayerInventoryAddon_C_SlotStackMoveEvent__DelegateSignature_Params params {};
		params.InventorySlot = InventorySlot;
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_PlayerInventoryAddon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_PlayerInventoryAddon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C");
		return ptr;
	}

}


