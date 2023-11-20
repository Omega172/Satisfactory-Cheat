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
	 * 		Name   -> PredefinedFunction USkinData_ConveyorMk4_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USkinData_ConveyorMk4_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SkinData_ConveyorMk4.SkinData_ConveyorMk4_C");
		return ptr;
	}

}


