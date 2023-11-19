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
	 * 		Name   -> PredefinedFunction USkinData_ConveyorMk2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USkinData_ConveyorMk2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SkinData_ConveyorMk2.SkinData_ConveyorMk2_C");
		return ptr;
	}

}


