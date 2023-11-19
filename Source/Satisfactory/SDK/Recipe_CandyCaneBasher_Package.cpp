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
	 * 		Name   -> PredefinedFunction URecipe_CandyCaneBasher_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URecipe_CandyCaneBasher_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Recipe_CandyCaneBasher.Recipe_CandyCaneBasher_C");
		return ptr;
	}

}


