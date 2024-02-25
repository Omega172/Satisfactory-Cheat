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
	 * 		Name   -> PredefinedFunction URecipe_BlueprintDesigner_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URecipe_BlueprintDesigner_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Recipe_BlueprintDesigner.Recipe_BlueprintDesigner_C");
		return ptr;
	}

}


