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
	 * 		Name   -> PredefinedFunction AHolo_BlueprintDesigner_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHolo_BlueprintDesigner_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Holo_BlueprintDesigner.Holo_BlueprintDesigner_C");
		return ptr;
	}

}


