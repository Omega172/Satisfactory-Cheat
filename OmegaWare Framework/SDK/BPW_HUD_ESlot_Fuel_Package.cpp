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
	 * 		Name   -> Function BPW_HUD_ESlot_Fuel.BPW_HUD_ESlot_Fuel_C.SetFuelType
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      mFuelClass                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_HUD_ESlot_Fuel_C::SetFuelType(class UClass* mFuelClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_HUD_ESlot_Fuel.BPW_HUD_ESlot_Fuel_C.SetFuelType");
		
		UBPW_HUD_ESlot_Fuel_C_SetFuelType_Params params {};
		params.mFuelClass = mFuelClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_HUD_ESlot_Fuel.BPW_HUD_ESlot_Fuel_C.SetFuelInInventory
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_HUD_ESlot_Fuel_C::SetFuelInInventory(int32_t Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_HUD_ESlot_Fuel.BPW_HUD_ESlot_Fuel_C.SetFuelInInventory");
		
		UBPW_HUD_ESlot_Fuel_C_SetFuelInInventory_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_HUD_ESlot_Fuel.BPW_HUD_ESlot_Fuel_C.UpdateESlotData
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_HUD_ESlot_Fuel_C::UpdateESlotData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_HUD_ESlot_Fuel.BPW_HUD_ESlot_Fuel_C.UpdateESlotData");
		
		UBPW_HUD_ESlot_Fuel_C_UpdateESlotData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_HUD_ESlot_Fuel.BPW_HUD_ESlot_Fuel_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_HUD_ESlot_Fuel_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_HUD_ESlot_Fuel.BPW_HUD_ESlot_Fuel_C.Construct");
		
		UBPW_HUD_ESlot_Fuel_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_HUD_ESlot_Fuel.BPW_HUD_ESlot_Fuel_C.UpdateFuelPercent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_HUD_ESlot_Fuel_C::UpdateFuelPercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_HUD_ESlot_Fuel.BPW_HUD_ESlot_Fuel_C.UpdateFuelPercent");
		
		UBPW_HUD_ESlot_Fuel_C_UpdateFuelPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_HUD_ESlot_Fuel.BPW_HUD_ESlot_Fuel_C.UpdateFuelClass
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_HUD_ESlot_Fuel_C::UpdateFuelClass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_HUD_ESlot_Fuel.BPW_HUD_ESlot_Fuel_C.UpdateFuelClass");
		
		UBPW_HUD_ESlot_Fuel_C_UpdateFuelClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_HUD_ESlot_Fuel.BPW_HUD_ESlot_Fuel_C.UpdateFuelInInventory
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_HUD_ESlot_Fuel_C::UpdateFuelInInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_HUD_ESlot_Fuel.BPW_HUD_ESlot_Fuel_C.UpdateFuelInInventory");
		
		UBPW_HUD_ESlot_Fuel_C_UpdateFuelInInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_HUD_ESlot_Fuel.BPW_HUD_ESlot_Fuel_C.SetFuelPercent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             mCurrentFuelPercent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_HUD_ESlot_Fuel_C::SetFuelPercent(double mCurrentFuelPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_HUD_ESlot_Fuel.BPW_HUD_ESlot_Fuel_C.SetFuelPercent");
		
		UBPW_HUD_ESlot_Fuel_C_SetFuelPercent_Params params {};
		params.mCurrentFuelPercent = mCurrentFuelPercent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_HUD_ESlot_Fuel.BPW_HUD_ESlot_Fuel_C.ExecuteUbergraph_BPW_HUD_ESlot_Fuel
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_HUD_ESlot_Fuel_C::ExecuteUbergraph_BPW_HUD_ESlot_Fuel(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_HUD_ESlot_Fuel.BPW_HUD_ESlot_Fuel_C.ExecuteUbergraph_BPW_HUD_ESlot_Fuel");
		
		UBPW_HUD_ESlot_Fuel_C_ExecuteUbergraph_BPW_HUD_ESlot_Fuel_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_HUD_ESlot_Fuel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_HUD_ESlot_Fuel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_HUD_ESlot_Fuel.BPW_HUD_ESlot_Fuel_C");
		return ptr;
	}

}


