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
	 * 		Name   -> Function BPW_HUD_ESlot_Jetpack.BPW_HUD_ESlot_Jetpack_C.CREATEDELEGATE_PROXYFUNCTION_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              newBurnPercent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_HUD_ESlot_Jetpack_C::CREATEDELEGATE_PROXYFUNCTION_1(float newBurnPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_HUD_ESlot_Jetpack.BPW_HUD_ESlot_Jetpack_C.CREATEDELEGATE_PROXYFUNCTION_1");
		
		UBPW_HUD_ESlot_Jetpack_C_CREATEDELEGATE_PROXYFUNCTION_1_Params params {};
		params.newBurnPercent = newBurnPercent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_HUD_ESlot_Jetpack.BPW_HUD_ESlot_Jetpack_C.OnFuelTypeChanged
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            newFuelIndex                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_HUD_ESlot_Jetpack_C::OnFuelTypeChanged(int32_t newFuelIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_HUD_ESlot_Jetpack.BPW_HUD_ESlot_Jetpack_C.OnFuelTypeChanged");
		
		UBPW_HUD_ESlot_Jetpack_C_OnFuelTypeChanged_Params params {};
		params.newFuelIndex = newFuelIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_HUD_ESlot_Jetpack.BPW_HUD_ESlot_Jetpack_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_HUD_ESlot_Jetpack_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_HUD_ESlot_Jetpack.BPW_HUD_ESlot_Jetpack_C.Construct");
		
		UBPW_HUD_ESlot_Jetpack_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_HUD_ESlot_Jetpack.BPW_HUD_ESlot_Jetpack_C.UpdateFuelClass
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_HUD_ESlot_Jetpack_C::UpdateFuelClass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_HUD_ESlot_Jetpack.BPW_HUD_ESlot_Jetpack_C.UpdateFuelClass");
		
		UBPW_HUD_ESlot_Jetpack_C_UpdateFuelClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_HUD_ESlot_Jetpack.BPW_HUD_ESlot_Jetpack_C.UpdateFuelInInventory
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_HUD_ESlot_Jetpack_C::UpdateFuelInInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_HUD_ESlot_Jetpack.BPW_HUD_ESlot_Jetpack_C.UpdateFuelInInventory");
		
		UBPW_HUD_ESlot_Jetpack_C_UpdateFuelInInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_HUD_ESlot_Jetpack.BPW_HUD_ESlot_Jetpack_C.UpdateFuelPercent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_HUD_ESlot_Jetpack_C::UpdateFuelPercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_HUD_ESlot_Jetpack.BPW_HUD_ESlot_Jetpack_C.UpdateFuelPercent");
		
		UBPW_HUD_ESlot_Jetpack_C_UpdateFuelPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_HUD_ESlot_Jetpack.BPW_HUD_ESlot_Jetpack_C.ExecuteUbergraph_BPW_HUD_ESlot_Jetpack
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_HUD_ESlot_Jetpack_C::ExecuteUbergraph_BPW_HUD_ESlot_Jetpack(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_HUD_ESlot_Jetpack.BPW_HUD_ESlot_Jetpack_C.ExecuteUbergraph_BPW_HUD_ESlot_Jetpack");
		
		UBPW_HUD_ESlot_Jetpack_C_ExecuteUbergraph_BPW_HUD_ESlot_Jetpack_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_HUD_ESlot_Jetpack_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_HUD_ESlot_Jetpack_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_HUD_ESlot_Jetpack.BPW_HUD_ESlot_Jetpack_C");
		return ptr;
	}

}


