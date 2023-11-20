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
	 * 		Name   -> PredefinedFunction AHolo_ConveyorWallAttachment_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHolo_ConveyorWallAttachment_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Holo_ConveyorWallAttachment.Holo_ConveyorWallAttachment_C");
		return ptr;
	}

}


