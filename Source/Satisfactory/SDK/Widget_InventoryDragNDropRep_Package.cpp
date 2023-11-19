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
	 * 		Name   -> Function Widget_InventoryDragNDropRep.Widget_InventoryDragNDropRep_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_InventoryDragNDropRep_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_InventoryDragNDropRep.Widget_InventoryDragNDropRep_C.Construct");
		
		UWidget_InventoryDragNDropRep_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_InventoryDragNDropRep.Widget_InventoryDragNDropRep_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_InventoryDragNDropRep_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_InventoryDragNDropRep.Widget_InventoryDragNDropRep_C.Destruct");
		
		UWidget_InventoryDragNDropRep_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_InventoryDragNDropRep.Widget_InventoryDragNDropRep_C.CheckSlot
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      ItemClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		int32_t                                            numRemoved                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_InventoryDragNDropRep_C::CheckSlot(class UClass* ItemClass, int32_t numRemoved)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_InventoryDragNDropRep.Widget_InventoryDragNDropRep_C.CheckSlot");
		
		UWidget_InventoryDragNDropRep_C_CheckSlot_Params params {};
		params.ItemClass = ItemClass;
		params.numRemoved = numRemoved;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_InventoryDragNDropRep.Widget_InventoryDragNDropRep_C.ExecuteUbergraph_Widget_InventoryDragNDropRep
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_InventoryDragNDropRep_C::ExecuteUbergraph_Widget_InventoryDragNDropRep(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_InventoryDragNDropRep.Widget_InventoryDragNDropRep_C.ExecuteUbergraph_Widget_InventoryDragNDropRep");
		
		UWidget_InventoryDragNDropRep_C_ExecuteUbergraph_Widget_InventoryDragNDropRep_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_InventoryDragNDropRep_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_InventoryDragNDropRep_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_InventoryDragNDropRep.Widget_InventoryDragNDropRep_C");
		return ptr;
	}

}


