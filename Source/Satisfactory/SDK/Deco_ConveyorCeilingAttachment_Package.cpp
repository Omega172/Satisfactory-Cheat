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
	 * 		Name   -> PredefinedFunction ADeco_ConveyorCeilingAttachment_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADeco_ConveyorCeilingAttachment_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Deco_ConveyorCeilingAttachment.Deco_ConveyorCeilingAttachment_C");
		return ptr;
	}

}


