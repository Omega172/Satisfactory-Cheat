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
	 * 		Name   -> Function BP_BuildGunStateMenu.BP_BuildGunStateMenu_C.EndState
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_BuildGunStateMenu_C::EndState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BuildGunStateMenu.BP_BuildGunStateMenu_C.EndState");
		
		UBP_BuildGunStateMenu_C_EndState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_BuildGunStateMenu.BP_BuildGunStateMenu_C.SecondaryFire
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_BuildGunStateMenu_C::SecondaryFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BuildGunStateMenu.BP_BuildGunStateMenu_C.SecondaryFire");
		
		UBP_BuildGunStateMenu_C_SecondaryFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_BuildGunStateMenu.BP_BuildGunStateMenu_C.BeginState
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_BuildGunStateMenu_C::BeginState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BuildGunStateMenu.BP_BuildGunStateMenu_C.BeginState");
		
		UBP_BuildGunStateMenu_C_BeginState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_BuildGunStateMenu.BP_BuildGunStateMenu_C.ExecuteUbergraph_BP_BuildGunStateMenu
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_BuildGunStateMenu_C::ExecuteUbergraph_BP_BuildGunStateMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BuildGunStateMenu.BP_BuildGunStateMenu_C.ExecuteUbergraph_BP_BuildGunStateMenu");
		
		UBP_BuildGunStateMenu_C_ExecuteUbergraph_BP_BuildGunStateMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_BuildGunStateMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_BuildGunStateMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BuildGunStateMenu.BP_BuildGunStateMenu_C");
		return ptr;
	}

}


