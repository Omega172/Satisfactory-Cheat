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
	 * 		Name   -> PredefinedFunction UDesc_ConveyorLiftMk3_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDesc_ConveyorLiftMk3_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Desc_ConveyorLiftMk3.Desc_ConveyorLiftMk3_C");
		return ptr;
	}

}


