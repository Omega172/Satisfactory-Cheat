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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Wheel_Truck_Middle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Wheel_Truck_Middle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Wheel_Truck_Middle.BP_Wheel_Truck_Middle_C");
		return ptr;
	}

}


