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
	 * 		Name   -> PredefinedFunction ABuildEffect_Default_Small_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuildEffect_Default_Small_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BuildEffect_Default_Small.BuildEffect_Default_Small_C");
		return ptr;
	}

}


