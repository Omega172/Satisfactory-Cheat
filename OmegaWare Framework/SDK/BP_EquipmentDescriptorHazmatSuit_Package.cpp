﻿/**
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_EquipmentDescriptorHazmatSuit_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_EquipmentDescriptorHazmatSuit_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_EquipmentDescriptorHazmatSuit.BP_EquipmentDescriptorHazmatSuit_C");
		return ptr;
	}

}


