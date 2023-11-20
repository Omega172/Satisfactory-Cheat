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
	 * 		Name   -> PredefinedFunction URecipe_UnpackageBioFuel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URecipe_UnpackageBioFuel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Recipe_UnpackageBioFuel.Recipe_UnpackageBioFuel_C");
		return ptr;
	}

}


