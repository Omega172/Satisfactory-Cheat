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
	 * 		Name   -> Function BPW_VehiclePaths_List.BPW_VehiclePaths_List_C.BndEvt__mListView_K2Node_ComponentBoundEvent_0_OnListItemSelectionChangedDynamic__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsSelected                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_VehiclePaths_List_C::BndEvt__mListView_K2Node_ComponentBoundEvent_0_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_VehiclePaths_List.BPW_VehiclePaths_List_C.BndEvt__mListView_K2Node_ComponentBoundEvent_0_OnListItemSelectionChangedDynamic__DelegateSignature");
		
		UBPW_VehiclePaths_List_C_BndEvt__mListView_K2Node_ComponentBoundEvent_0_OnListItemSelectionChangedDynamic__DelegateSignature_Params params {};
		params.Item = Item;
		params.bIsSelected = bIsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_VehiclePaths_List.BPW_VehiclePaths_List_C.Event Add Item To List
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_VehiclePaths_List_C::EventAddItemToList(class UObject* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_VehiclePaths_List.BPW_VehiclePaths_List_C.Event Add Item To List");
		
		UBPW_VehiclePaths_List_C_EventAddItemToList_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_VehiclePaths_List.BPW_VehiclePaths_List_C.Event Clear List
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_VehiclePaths_List_C::EventClearList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_VehiclePaths_List.BPW_VehiclePaths_List_C.Event Clear List");
		
		UBPW_VehiclePaths_List_C_EventClearList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_VehiclePaths_List.BPW_VehiclePaths_List_C.Event Collapse Vehicle Type Row
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isCollapsed                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_VehiclePaths_List_C::EventCollapseVehicleTypeRow(bool isCollapsed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_VehiclePaths_List.BPW_VehiclePaths_List_C.Event Collapse Vehicle Type Row");
		
		UBPW_VehiclePaths_List_C_EventCollapseVehicleTypeRow_Params params {};
		params.isCollapsed = isCollapsed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_VehiclePaths_List.BPW_VehiclePaths_List_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_VehiclePaths_List_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_VehiclePaths_List.BPW_VehiclePaths_List_C.PreConstruct");
		
		UBPW_VehiclePaths_List_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_VehiclePaths_List.BPW_VehiclePaths_List_C.BndEvt__mListView_K2Node_ComponentBoundEvent_2_OnListEntryGeneratedDynamic__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UUserWidget*                                 Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_VehiclePaths_List_C::BndEvt__mListView_K2Node_ComponentBoundEvent_2_OnListEntryGeneratedDynamic__DelegateSignature(class UUserWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_VehiclePaths_List.BPW_VehiclePaths_List_C.BndEvt__mListView_K2Node_ComponentBoundEvent_2_OnListEntryGeneratedDynamic__DelegateSignature");
		
		UBPW_VehiclePaths_List_C_BndEvt__mListView_K2Node_ComponentBoundEvent_2_OnListEntryGeneratedDynamic__DelegateSignature_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_VehiclePaths_List.BPW_VehiclePaths_List_C.ExecuteUbergraph_BPW_VehiclePaths_List
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_VehiclePaths_List_C::ExecuteUbergraph_BPW_VehiclePaths_List(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_VehiclePaths_List.BPW_VehiclePaths_List_C.ExecuteUbergraph_BPW_VehiclePaths_List");
		
		UBPW_VehiclePaths_List_C_ExecuteUbergraph_BPW_VehiclePaths_List_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_VehiclePaths_List.BPW_VehiclePaths_List_C.OnItemSelectionChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsSelected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_VehiclePaths_List_C::OnItemSelectionChanged__DelegateSignature(class UObject* Item, bool IsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_VehiclePaths_List.BPW_VehiclePaths_List_C.OnItemSelectionChanged__DelegateSignature");
		
		UBPW_VehiclePaths_List_C_OnItemSelectionChanged__DelegateSignature_Params params {};
		params.Item = Item;
		params.IsSelected = IsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_VehiclePaths_List_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_VehiclePaths_List_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_VehiclePaths_List.BPW_VehiclePaths_List_C");
		return ptr;
	}

}


