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
	 * 		Name   -> Function Equip_JumpingStilts.Equip_JumpingStilts_C.WasEquipped
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AEquip_JumpingStilts_C::WasEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_JumpingStilts.Equip_JumpingStilts_C.WasEquipped");
		
		AEquip_JumpingStilts_C_WasEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_JumpingStilts.Equip_JumpingStilts_C.WasUnEquipped
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AEquip_JumpingStilts_C::WasUnEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_JumpingStilts.Equip_JumpingStilts_C.WasUnEquipped");
		
		AEquip_JumpingStilts_C_WasUnEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_JumpingStilts.Equip_JumpingStilts_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AEquip_JumpingStilts_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_JumpingStilts.Equip_JumpingStilts_C.ReceiveBeginPlay");
		
		AEquip_JumpingStilts_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Equip_JumpingStilts.Equip_JumpingStilts_C.ExecuteUbergraph_Equip_JumpingStilts
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquip_JumpingStilts_C::ExecuteUbergraph_Equip_JumpingStilts(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equip_JumpingStilts.Equip_JumpingStilts_C.ExecuteUbergraph_Equip_JumpingStilts");
		
		AEquip_JumpingStilts_C_ExecuteUbergraph_Equip_JumpingStilts_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AEquip_JumpingStilts_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AEquip_JumpingStilts_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Equip_JumpingStilts.Equip_JumpingStilts_C");
		return ptr;
	}

}


