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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUSubC_Gameplay_Camera_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUSubC_Gameplay_Camera_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass USubC_Gameplay_Camera.USubC_Gameplay_Camera_C");
		return ptr;
	}

}


