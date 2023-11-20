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
	 * 		Name   -> Function BPW_HUD_ESlot_HoverPack.BPW_HUD_ESlot_HoverPack_C.UpdateESlotData
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_HUD_ESlot_HoverPack_C::UpdateESlotData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_HUD_ESlot_HoverPack.BPW_HUD_ESlot_HoverPack_C.UpdateESlotData");
		
		UBPW_HUD_ESlot_HoverPack_C_UpdateESlotData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_HUD_ESlot_HoverPack.BPW_HUD_ESlot_HoverPack_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_HUD_ESlot_HoverPack_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_HUD_ESlot_HoverPack.BPW_HUD_ESlot_HoverPack_C.Construct");
		
		UBPW_HUD_ESlot_HoverPack_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_HUD_ESlot_HoverPack.BPW_HUD_ESlot_HoverPack_C.ExecuteUbergraph_BPW_HUD_ESlot_HoverPack
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_HUD_ESlot_HoverPack_C::ExecuteUbergraph_BPW_HUD_ESlot_HoverPack(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_HUD_ESlot_HoverPack.BPW_HUD_ESlot_HoverPack_C.ExecuteUbergraph_BPW_HUD_ESlot_HoverPack");
		
		UBPW_HUD_ESlot_HoverPack_C_ExecuteUbergraph_BPW_HUD_ESlot_HoverPack_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_HUD_ESlot_HoverPack_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_HUD_ESlot_HoverPack_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_HUD_ESlot_HoverPack.BPW_HUD_ESlot_HoverPack_C");
		return ptr;
	}

}


