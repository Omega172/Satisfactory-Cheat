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
	 * 		Name   -> Function Widget_PlayerEquipmentInventory.Widget_PlayerEquipmentInventory_C.ArmSelectionVisibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UWidget_PlayerEquipmentInventory_C::ArmSelectionVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayerEquipmentInventory.Widget_PlayerEquipmentInventory_C.ArmSelectionVisibility");
		
		UWidget_PlayerEquipmentInventory_C_ArmSelectionVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_PlayerEquipmentInventory.Widget_PlayerEquipmentInventory_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_PlayerEquipmentInventory_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayerEquipmentInventory.Widget_PlayerEquipmentInventory_C.Construct");
		
		UWidget_PlayerEquipmentInventory_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_PlayerEquipmentInventory.Widget_PlayerEquipmentInventory_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_PlayerEquipmentInventory_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayerEquipmentInventory.Widget_PlayerEquipmentInventory_C.Destruct");
		
		UWidget_PlayerEquipmentInventory_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_PlayerEquipmentInventory.Widget_PlayerEquipmentInventory_C.ExecuteUbergraph_Widget_PlayerEquipmentInventory
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_PlayerEquipmentInventory_C::ExecuteUbergraph_Widget_PlayerEquipmentInventory(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayerEquipmentInventory.Widget_PlayerEquipmentInventory_C.ExecuteUbergraph_Widget_PlayerEquipmentInventory");
		
		UWidget_PlayerEquipmentInventory_C_ExecuteUbergraph_Widget_PlayerEquipmentInventory_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_PlayerEquipmentInventory_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_PlayerEquipmentInventory_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_PlayerEquipmentInventory.Widget_PlayerEquipmentInventory_C");
		return ptr;
	}

}


