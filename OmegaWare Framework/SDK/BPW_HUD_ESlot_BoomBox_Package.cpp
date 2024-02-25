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
	 * 		Name   -> Function BPW_HUD_ESlot_BoomBox.BPW_HUD_ESlot_BoomBox_C.UpdateESlotData
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_HUD_ESlot_BoomBox_C::UpdateESlotData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_HUD_ESlot_BoomBox.BPW_HUD_ESlot_BoomBox_C.UpdateESlotData");
		
		UBPW_HUD_ESlot_BoomBox_C_UpdateESlotData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_HUD_ESlot_BoomBox.BPW_HUD_ESlot_BoomBox_C.OnSlotSizeChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsSmall                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_HUD_ESlot_BoomBox_C::OnSlotSizeChanged(bool IsSmall)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_HUD_ESlot_BoomBox.BPW_HUD_ESlot_BoomBox_C.OnSlotSizeChanged");
		
		UBPW_HUD_ESlot_BoomBox_C_OnSlotSizeChanged_Params params {};
		params.IsSmall = IsSmall;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_HUD_ESlot_BoomBox.BPW_HUD_ESlot_BoomBox_C.IconLoaded
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_HUD_ESlot_BoomBox_C::IconLoaded(class UTexture2D* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_HUD_ESlot_BoomBox.BPW_HUD_ESlot_BoomBox_C.IconLoaded");
		
		UBPW_HUD_ESlot_BoomBox_C_IconLoaded_Params params {};
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_HUD_ESlot_BoomBox.BPW_HUD_ESlot_BoomBox_C.ExecuteUbergraph_BPW_HUD_ESlot_BoomBox
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_HUD_ESlot_BoomBox_C::ExecuteUbergraph_BPW_HUD_ESlot_BoomBox(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_HUD_ESlot_BoomBox.BPW_HUD_ESlot_BoomBox_C.ExecuteUbergraph_BPW_HUD_ESlot_BoomBox");
		
		UBPW_HUD_ESlot_BoomBox_C_ExecuteUbergraph_BPW_HUD_ESlot_BoomBox_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_HUD_ESlot_BoomBox_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_HUD_ESlot_BoomBox_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_HUD_ESlot_BoomBox.BPW_HUD_ESlot_BoomBox_C");
		return ptr;
	}

}


