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
	 * 		Name   -> PredefinedFunction URecipe_GeneratorNuclear_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URecipe_GeneratorNuclear_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Recipe_GeneratorNuclear.Recipe_GeneratorNuclear_C");
		return ptr;
	}

}


