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
	 * 		Name   -> Function BPW_HUD_ESlot_Consumable.BPW_HUD_ESlot_Consumable_C.SetEquipmentObject
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGEquipment*                                mEquipmentObject                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_HUD_ESlot_Consumable_C::SetEquipmentObject(class AFGEquipment* mEquipmentObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_HUD_ESlot_Consumable.BPW_HUD_ESlot_Consumable_C.SetEquipmentObject");
		
		UBPW_HUD_ESlot_Consumable_C_SetEquipmentObject_Params params {};
		params.mEquipmentObject = mEquipmentObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_HUD_ESlot_Consumable.BPW_HUD_ESlot_Consumable_C.UpdateESlotData
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_HUD_ESlot_Consumable_C::UpdateESlotData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_HUD_ESlot_Consumable.BPW_HUD_ESlot_Consumable_C.UpdateESlotData");
		
		UBPW_HUD_ESlot_Consumable_C_UpdateESlotData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_HUD_ESlot_Consumable.BPW_HUD_ESlot_Consumable_C.ExecuteUbergraph_BPW_HUD_ESlot_Consumable
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_HUD_ESlot_Consumable_C::ExecuteUbergraph_BPW_HUD_ESlot_Consumable(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_HUD_ESlot_Consumable.BPW_HUD_ESlot_Consumable_C.ExecuteUbergraph_BPW_HUD_ESlot_Consumable");
		
		UBPW_HUD_ESlot_Consumable_C_ExecuteUbergraph_BPW_HUD_ESlot_Consumable_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_HUD_ESlot_Consumable_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_HUD_ESlot_Consumable_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_HUD_ESlot_Consumable.BPW_HUD_ESlot_Consumable_C");
		return ptr;
	}

}


