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
	 * 		Name   -> PredefinedFunction URecipe_PackagedCrudeOil_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URecipe_PackagedCrudeOil_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Recipe_PackagedCrudeOil.Recipe_PackagedCrudeOil_C");
		return ptr;
	}

}


