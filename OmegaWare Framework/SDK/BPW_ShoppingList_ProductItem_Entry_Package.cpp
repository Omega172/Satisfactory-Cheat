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
	 * 		Name   -> Function BPW_ShoppingList_ProductItem_Entry.BPW_ShoppingList_ProductItem_Entry_C.SetAmount
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            mAmount                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ShoppingList_ProductItem_Entry_C::SetAmount(int32_t mAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ShoppingList_ProductItem_Entry.BPW_ShoppingList_ProductItem_Entry_C.SetAmount");
		
		UBPW_ShoppingList_ProductItem_Entry_C_SetAmount_Params params {};
		params.mAmount = mAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_ShoppingList_ProductItem_Entry.BPW_ShoppingList_ProductItem_Entry_C.SetName
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        mName                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_ShoppingList_ProductItem_Entry_C::SetName(const class FText& mName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ShoppingList_ProductItem_Entry.BPW_ShoppingList_ProductItem_Entry_C.SetName");
		
		UBPW_ShoppingList_ProductItem_Entry_C_SetName_Params params {};
		params.mName = mName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_ShoppingList_ProductItem_Entry.BPW_ShoppingList_ProductItem_Entry_C.BndEvt__BPW_ShoppingList_ProductItem_Entry_mAmountText_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ShoppingList_ProductItem_Entry_C::BndEvt__BPW_ShoppingList_ProductItem_Entry_mAmountText_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ShoppingList_ProductItem_Entry.BPW_ShoppingList_ProductItem_Entry_C.BndEvt__BPW_ShoppingList_ProductItem_Entry_mAmountText_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature");
		
		UBPW_ShoppingList_ProductItem_Entry_C_BndEvt__BPW_ShoppingList_ProductItem_Entry_mAmountText_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_ShoppingList_ProductItem_Entry.BPW_ShoppingList_ProductItem_Entry_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_ShoppingList_ProductItem_Entry_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ShoppingList_ProductItem_Entry.BPW_ShoppingList_ProductItem_Entry_C.Destruct");
		
		UBPW_ShoppingList_ProductItem_Entry_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_ShoppingList_ProductItem_Entry.BPW_ShoppingList_ProductItem_Entry_C.ExecuteUbergraph_BPW_ShoppingList_ProductItem_Entry
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ShoppingList_ProductItem_Entry_C::ExecuteUbergraph_BPW_ShoppingList_ProductItem_Entry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ShoppingList_ProductItem_Entry.BPW_ShoppingList_ProductItem_Entry_C.ExecuteUbergraph_BPW_ShoppingList_ProductItem_Entry");
		
		UBPW_ShoppingList_ProductItem_Entry_C_ExecuteUbergraph_BPW_ShoppingList_ProductItem_Entry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_ShoppingList_ProductItem_Entry.BPW_ShoppingList_ProductItem_Entry_C.OnAmountChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBPW_ShoppingList_ProductItem_Entry_C*       Instigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NewAmount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ShoppingList_ProductItem_Entry_C::OnAmountChanged__DelegateSignature(class UBPW_ShoppingList_ProductItem_Entry_C* Instigator, int32_t NewAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ShoppingList_ProductItem_Entry.BPW_ShoppingList_ProductItem_Entry_C.OnAmountChanged__DelegateSignature");
		
		UBPW_ShoppingList_ProductItem_Entry_C_OnAmountChanged__DelegateSignature_Params params {};
		params.Instigator = Instigator;
		params.NewAmount = NewAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_ShoppingList_ProductItem_Entry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_ShoppingList_ProductItem_Entry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_ShoppingList_ProductItem_Entry.BPW_ShoppingList_ProductItem_Entry_C");
		return ptr;
	}

}


