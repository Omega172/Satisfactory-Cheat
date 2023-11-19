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
	 * 		Name   -> PredefinedFunction URecipe_NobeliskShockwave_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URecipe_NobeliskShockwave_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Recipe_NobeliskShockwave.Recipe_NobeliskShockwave_C");
		return ptr;
	}

}


