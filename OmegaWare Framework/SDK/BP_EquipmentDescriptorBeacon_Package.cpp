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
	 * 		Name   -> Function BP_EquipmentDescriptorBeacon.BP_EquipmentDescriptorBeacon_C.ConsumedBy
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class AFGCharacterPlayer*                          Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_EquipmentDescriptorBeacon_C::ConsumedBy(class AFGCharacterPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EquipmentDescriptorBeacon.BP_EquipmentDescriptorBeacon_C.ConsumedBy");
		
		UBP_EquipmentDescriptorBeacon_C_ConsumedBy_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_EquipmentDescriptorBeacon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_EquipmentDescriptorBeacon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_EquipmentDescriptorBeacon.BP_EquipmentDescriptorBeacon_C");
		return ptr;
	}

}


