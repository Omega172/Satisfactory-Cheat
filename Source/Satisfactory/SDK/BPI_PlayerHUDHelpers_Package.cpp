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
	 * 		Name   -> Function BPI_PlayerHUDHelpers.BPI_PlayerHUDHelpers_C.ForceUpdateEquipmentCrosshair
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPI_PlayerHUDHelpers_C::ForceUpdateEquipmentCrosshair()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_PlayerHUDHelpers.BPI_PlayerHUDHelpers_C.ForceUpdateEquipmentCrosshair");
		
		UBPI_PlayerHUDHelpers_C_ForceUpdateEquipmentCrosshair_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPI_PlayerHUDHelpers.BPI_PlayerHUDHelpers_C.OnCloseAllHUD_ESlots
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPI_PlayerHUDHelpers_C::OnCloseAllHUD_ESlots()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_PlayerHUDHelpers.BPI_PlayerHUDHelpers_C.OnCloseAllHUD_ESlots");
		
		UBPI_PlayerHUDHelpers_C_OnCloseAllHUD_ESlots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPI_PlayerHUDHelpers.BPI_PlayerHUDHelpers_C.OnOpenAllHUD_ESlots
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPI_PlayerHUDHelpers_C::OnOpenAllHUD_ESlots()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_PlayerHUDHelpers.BPI_PlayerHUDHelpers_C.OnOpenAllHUD_ESlots");
		
		UBPI_PlayerHUDHelpers_C_OnOpenAllHUD_ESlots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPI_PlayerHUDHelpers.BPI_PlayerHUDHelpers_C.OnUpdateHUD_ESlot
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EEquipmentSlot                                     EquipmentSlotType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_PlayerHUDHelpers_C::OnUpdateHUD_ESlot(EEquipmentSlot EquipmentSlotType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_PlayerHUDHelpers.BPI_PlayerHUDHelpers_C.OnUpdateHUD_ESlot");
		
		UBPI_PlayerHUDHelpers_C_OnUpdateHUD_ESlot_Params params {};
		params.EquipmentSlotType = EquipmentSlotType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPI_PlayerHUDHelpers.BPI_PlayerHUDHelpers_C.SetBuildgunMode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EBuildMenu_Modes                                   Mode                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_PlayerHUDHelpers_C::SetBuildgunMode(EBuildMenu_Modes Mode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_PlayerHUDHelpers.BPI_PlayerHUDHelpers_C.SetBuildgunMode");
		
		UBPI_PlayerHUDHelpers_C_SetBuildgunMode_Params params {};
		params.Mode = Mode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_PlayerHUDHelpers_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_PlayerHUDHelpers_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_PlayerHUDHelpers.BPI_PlayerHUDHelpers_C");
		return ptr;
	}

}


