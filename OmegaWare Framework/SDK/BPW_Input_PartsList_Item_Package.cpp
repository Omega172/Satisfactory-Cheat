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
	 * 		Name   -> Function BPW_Input_PartsList_Item.BPW_Input_PartsList_Item_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_Input_PartsList_Item_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Input_PartsList_Item.BPW_Input_PartsList_Item_C.Construct");
		
		UBPW_Input_PartsList_Item_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Input_PartsList_Item.BPW_Input_PartsList_Item_C.BndEvt__BPW_ComboboxSearch_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SelectedOption                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            selectedIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Input_PartsList_Item_C::BndEvt__BPW_ComboboxSearch_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature(const class FString& SelectedOption, int32_t selectedIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Input_PartsList_Item.BPW_Input_PartsList_Item_C.BndEvt__BPW_ComboboxSearch_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature");
		
		UBPW_Input_PartsList_Item_C_BndEvt__BPW_ComboboxSearch_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature_Params params {};
		params.SelectedOption = SelectedOption;
		params.selectedIndex = selectedIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Input_PartsList_Item.BPW_Input_PartsList_Item_C.BndEvt__mRemoveButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_Input_PartsList_Item_C::BndEvt__mRemoveButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Input_PartsList_Item.BPW_Input_PartsList_Item_C.BndEvt__mRemoveButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UBPW_Input_PartsList_Item_C_BndEvt__mRemoveButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Input_PartsList_Item.BPW_Input_PartsList_Item_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_Input_PartsList_Item_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Input_PartsList_Item.BPW_Input_PartsList_Item_C.Destruct");
		
		UBPW_Input_PartsList_Item_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Input_PartsList_Item.BPW_Input_PartsList_Item_C.ExecuteUbergraph_BPW_Input_PartsList_Item
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Input_PartsList_Item_C::ExecuteUbergraph_BPW_Input_PartsList_Item(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Input_PartsList_Item.BPW_Input_PartsList_Item_C.ExecuteUbergraph_BPW_Input_PartsList_Item");
		
		UBPW_Input_PartsList_Item_C_ExecuteUbergraph_BPW_Input_PartsList_Item_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Input_PartsList_Item.BPW_Input_PartsList_Item_C.OnRemoved__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Input_PartsList_Item_C::OnRemoved__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Input_PartsList_Item.BPW_Input_PartsList_Item_C.OnRemoved__DelegateSignature");
		
		UBPW_Input_PartsList_Item_C_OnRemoved__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Input_PartsList_Item.BPW_Input_PartsList_Item_C.OnSelectionChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Input_PartsList_Item_C::OnSelectionChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Input_PartsList_Item.BPW_Input_PartsList_Item_C.OnSelectionChanged__DelegateSignature");
		
		UBPW_Input_PartsList_Item_C_OnSelectionChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_Input_PartsList_Item_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_Input_PartsList_Item_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_Input_PartsList_Item.BPW_Input_PartsList_Item_C");
		return ptr;
	}

}


