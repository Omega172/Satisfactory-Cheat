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
	 * 		Name   -> PredefinedFunction ABuild_BlueprintDesigner_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuild_BlueprintDesigner_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Build_BlueprintDesigner.Build_BlueprintDesigner_C");
		return ptr;
	}

}


