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
	 * 		Name   -> Function BPW_ShoppingList_ProductItem.BPW_ShoppingList_ProductItem_C.OnEntryAmountChanged
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBPW_ShoppingList_ProductItem_Entry_C*       Instigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NewAmount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ShoppingList_ProductItem_C::OnEntryAmountChanged(class UBPW_ShoppingList_ProductItem_Entry_C* Instigator, int32_t NewAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ShoppingList_ProductItem.BPW_ShoppingList_ProductItem_C.OnEntryAmountChanged");
		
		UBPW_ShoppingList_ProductItem_C_OnEntryAmountChanged_Params params {};
		params.Instigator = Instigator;
		params.NewAmount = NewAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ShoppingList_ProductItem.BPW_ShoppingList_ProductItem_C.OnObjectUpdated
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGShoppingListObject*                       shoppingListObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ShoppingList_ProductItem_C::OnObjectUpdated(class UFGShoppingListObject* shoppingListObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ShoppingList_ProductItem.BPW_ShoppingList_ProductItem_C.OnObjectUpdated");
		
		UBPW_ShoppingList_ProductItem_C_OnObjectUpdated_Params params {};
		params.shoppingListObject = shoppingListObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ShoppingList_ProductItem.BPW_ShoppingList_ProductItem_C.SetProductEntryDataFromObject
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGShoppingListObject*                       shoppingListObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ShoppingList_ProductItem_C::SetProductEntryDataFromObject(class UFGShoppingListObject* shoppingListObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ShoppingList_ProductItem.BPW_ShoppingList_ProductItem_C.SetProductEntryDataFromObject");
		
		UBPW_ShoppingList_ProductItem_C_SetProductEntryDataFromObject_Params params {};
		params.shoppingListObject = shoppingListObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ShoppingList_ProductItem.BPW_ShoppingList_ProductItem_C.SetProductEntryData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBPW_ShoppingList_ProductItem_Entry_C*       ProductEntry                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        mName                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            mAmount                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ShoppingList_ProductItem_C::SetProductEntryData(class UBPW_ShoppingList_ProductItem_Entry_C* ProductEntry, const class FText& mName, int32_t mAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ShoppingList_ProductItem.BPW_ShoppingList_ProductItem_C.SetProductEntryData");
		
		UBPW_ShoppingList_ProductItem_C_SetProductEntryData_Params params {};
		params.ProductEntry = ProductEntry;
		params.mName = mName;
		params.mAmount = mAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ShoppingList_ProductItem.BPW_ShoppingList_ProductItem_C.AddProductEntry
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_ShoppingList_ProductItem_C::AddProductEntry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ShoppingList_ProductItem.BPW_ShoppingList_ProductItem_C.AddProductEntry");
		
		UBPW_ShoppingList_ProductItem_C_AddProductEntry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ShoppingList_ProductItem.BPW_ShoppingList_ProductItem_C.RemoveProductEntry
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBPW_ShoppingList_ProductItem_Entry_C*       ProductEntry                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ShoppingList_ProductItem_C::RemoveProductEntry(class UBPW_ShoppingList_ProductItem_Entry_C* ProductEntry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ShoppingList_ProductItem.BPW_ShoppingList_ProductItem_C.RemoveProductEntry");
		
		UBPW_ShoppingList_ProductItem_C_RemoveProductEntry_Params params {};
		params.ProductEntry = ProductEntry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ShoppingList_ProductItem.BPW_ShoppingList_ProductItem_C.ConsolidateProductAmount
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ShoppingList_ProductItem_C::ConsolidateProductAmount(int32_t Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ShoppingList_ProductItem.BPW_ShoppingList_ProductItem_C.ConsolidateProductAmount");
		
		UBPW_ShoppingList_ProductItem_C_ConsolidateProductAmount_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ShoppingList_ProductItem.BPW_ShoppingList_ProductItem_C.UpdateRecipe
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGShoppingListObject_Class*                 ShoppingListObjectClass                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ShoppingList_ProductItem_C::UpdateRecipe(class UFGShoppingListObject_Class* ShoppingListObjectClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ShoppingList_ProductItem.BPW_ShoppingList_ProductItem_C.UpdateRecipe");
		
		UBPW_ShoppingList_ProductItem_C_UpdateRecipe_Params params {};
		params.ShoppingListObjectClass = ShoppingListObjectClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ShoppingList_ProductItem.BPW_ShoppingList_ProductItem_C.SetIsToDoListOpen
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               mIsTodoListOpen                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ShoppingList_ProductItem_C::SetIsToDoListOpen(bool mIsTodoListOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ShoppingList_ProductItem.BPW_ShoppingList_ProductItem_C.SetIsToDoListOpen");
		
		UBPW_ShoppingList_ProductItem_C_SetIsToDoListOpen_Params params {};
		params.mIsTodoListOpen = mIsTodoListOpen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ShoppingList_ProductItem.BPW_ShoppingList_ProductItem_C.BP_OnEntryReleased
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UBPW_ShoppingList_ProductItem_C::BP_OnEntryReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ShoppingList_ProductItem.BPW_ShoppingList_ProductItem_C.BP_OnEntryReleased");
		
		UBPW_ShoppingList_ProductItem_C_BP_OnEntryReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ShoppingList_ProductItem.BPW_ShoppingList_ProductItem_C.BP_OnItemExpansionChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsExpanded                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ShoppingList_ProductItem_C::BP_OnItemExpansionChanged(bool bIsExpanded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ShoppingList_ProductItem.BPW_ShoppingList_ProductItem_C.BP_OnItemExpansionChanged");
		
		UBPW_ShoppingList_ProductItem_C_BP_OnItemExpansionChanged_Params params {};
		params.bIsExpanded = bIsExpanded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ShoppingList_ProductItem.BPW_ShoppingList_ProductItem_C.BP_OnItemSelectionChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsSelected                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ShoppingList_ProductItem_C::BP_OnItemSelectionChanged(bool bIsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ShoppingList_ProductItem.BPW_ShoppingList_ProductItem_C.BP_OnItemSelectionChanged");
		
		UBPW_ShoppingList_ProductItem_C_BP_OnItemSelectionChanged_Params params {};
		params.bIsSelected = bIsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ShoppingList_ProductItem.BPW_ShoppingList_ProductItem_C.OnListItemObjectSet
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     ListItemObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ShoppingList_ProductItem_C::OnListItemObjectSet(class UObject* ListItemObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ShoppingList_ProductItem.BPW_ShoppingList_ProductItem_C.OnListItemObjectSet");
		
		UBPW_ShoppingList_ProductItem_C_OnListItemObjectSet_Params params {};
		params.ListItemObject = ListItemObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ShoppingList_ProductItem.BPW_ShoppingList_ProductItem_C.BndEvt__BPW_ShoppingList_ProductItem_mButtonAdd_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_ShoppingList_ProductItem_C::BndEvt__BPW_ShoppingList_ProductItem_mButtonAdd_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ShoppingList_ProductItem.BPW_ShoppingList_ProductItem_C.BndEvt__BPW_ShoppingList_ProductItem_mButtonAdd_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UBPW_ShoppingList_ProductItem_C_BndEvt__BPW_ShoppingList_ProductItem_mButtonAdd_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ShoppingList_ProductItem.BPW_ShoppingList_ProductItem_C.BndEvt__BPW_ShoppingList_ProductItem_mButtonRemove_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_ShoppingList_ProductItem_C::BndEvt__BPW_ShoppingList_ProductItem_mButtonRemove_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ShoppingList_ProductItem.BPW_ShoppingList_ProductItem_C.BndEvt__BPW_ShoppingList_ProductItem_mButtonRemove_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UBPW_ShoppingList_ProductItem_C_BndEvt__BPW_ShoppingList_ProductItem_mButtonRemove_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ShoppingList_ProductItem.BPW_ShoppingList_ProductItem_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ShoppingList_ProductItem_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ShoppingList_ProductItem.BPW_ShoppingList_ProductItem_C.PreConstruct");
		
		UBPW_ShoppingList_ProductItem_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ShoppingList_ProductItem.BPW_ShoppingList_ProductItem_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_ShoppingList_ProductItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ShoppingList_ProductItem.BPW_ShoppingList_ProductItem_C.Construct");
		
		UBPW_ShoppingList_ProductItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ShoppingList_ProductItem.BPW_ShoppingList_ProductItem_C.BndEvt__BPW_ShoppingList_ProductItem_mButtonAdd_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_ShoppingList_ProductItem_C::BndEvt__BPW_ShoppingList_ProductItem_mButtonAdd_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ShoppingList_ProductItem.BPW_ShoppingList_ProductItem_C.BndEvt__BPW_ShoppingList_ProductItem_mButtonAdd_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UBPW_ShoppingList_ProductItem_C_BndEvt__BPW_ShoppingList_ProductItem_mButtonAdd_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ShoppingList_ProductItem.BPW_ShoppingList_ProductItem_C.BndEvt__BPW_ShoppingList_ProductItem_mButtonAdd_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_ShoppingList_ProductItem_C::BndEvt__BPW_ShoppingList_ProductItem_mButtonAdd_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ShoppingList_ProductItem.BPW_ShoppingList_ProductItem_C.BndEvt__BPW_ShoppingList_ProductItem_mButtonAdd_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");
		
		UBPW_ShoppingList_ProductItem_C_BndEvt__BPW_ShoppingList_ProductItem_mButtonAdd_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ShoppingList_ProductItem.BPW_ShoppingList_ProductItem_C.BndEvt__BPW_ShoppingList_ProductItem_mButtonRemove_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_ShoppingList_ProductItem_C::BndEvt__BPW_ShoppingList_ProductItem_mButtonRemove_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ShoppingList_ProductItem.BPW_ShoppingList_ProductItem_C.BndEvt__BPW_ShoppingList_ProductItem_mButtonRemove_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");
		
		UBPW_ShoppingList_ProductItem_C_BndEvt__BPW_ShoppingList_ProductItem_mButtonRemove_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ShoppingList_ProductItem.BPW_ShoppingList_ProductItem_C.BndEvt__BPW_ShoppingList_ProductItem_mButtonRemove_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_ShoppingList_ProductItem_C::BndEvt__BPW_ShoppingList_ProductItem_mButtonRemove_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ShoppingList_ProductItem.BPW_ShoppingList_ProductItem_C.BndEvt__BPW_ShoppingList_ProductItem_mButtonRemove_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");
		
		UBPW_ShoppingList_ProductItem_C_BndEvt__BPW_ShoppingList_ProductItem_mButtonRemove_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ShoppingList_ProductItem.BPW_ShoppingList_ProductItem_C.ExecuteUbergraph_BPW_ShoppingList_ProductItem
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ShoppingList_ProductItem_C::ExecuteUbergraph_BPW_ShoppingList_ProductItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ShoppingList_ProductItem.BPW_ShoppingList_ProductItem_C.ExecuteUbergraph_BPW_ShoppingList_ProductItem");
		
		UBPW_ShoppingList_ProductItem_C_ExecuteUbergraph_BPW_ShoppingList_ProductItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_ShoppingList_ProductItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_ShoppingList_ProductItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_ShoppingList_ProductItem.BPW_ShoppingList_ProductItem_C");
		return ptr;
	}

}


