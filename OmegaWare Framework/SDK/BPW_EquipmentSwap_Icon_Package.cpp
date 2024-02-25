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
	 * 		Name   -> Function BPW_EquipmentSwap_Icon.BPW_EquipmentSwap_Icon_C.UpdateEquipment
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_EquipmentSwap_Icon_C::UpdateEquipment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_EquipmentSwap_Icon.BPW_EquipmentSwap_Icon_C.UpdateEquipment");
		
		UBPW_EquipmentSwap_Icon_C_UpdateEquipment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_EquipmentSwap_Icon.BPW_EquipmentSwap_Icon_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_EquipmentSwap_Icon_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_EquipmentSwap_Icon.BPW_EquipmentSwap_Icon_C.Construct");
		
		UBPW_EquipmentSwap_Icon_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_EquipmentSwap_Icon.BPW_EquipmentSwap_Icon_C.Set Selected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsSelected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_EquipmentSwap_Icon_C::SetSelected(bool IsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_EquipmentSwap_Icon.BPW_EquipmentSwap_Icon_C.Set Selected");
		
		UBPW_EquipmentSwap_Icon_C_SetSelected_Params params {};
		params.IsSelected = IsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_EquipmentSwap_Icon.BPW_EquipmentSwap_Icon_C.ExecuteUbergraph_BPW_EquipmentSwap_Icon
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_EquipmentSwap_Icon_C::ExecuteUbergraph_BPW_EquipmentSwap_Icon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_EquipmentSwap_Icon.BPW_EquipmentSwap_Icon_C.ExecuteUbergraph_BPW_EquipmentSwap_Icon");
		
		UBPW_EquipmentSwap_Icon_C_ExecuteUbergraph_BPW_EquipmentSwap_Icon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_EquipmentSwap_Icon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_EquipmentSwap_Icon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_EquipmentSwap_Icon.BPW_EquipmentSwap_Icon_C");
		return ptr;
	}

}


