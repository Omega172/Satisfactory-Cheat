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
	 * 		Name   -> PredefinedFunction ABP_AlphaSpitterParts_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_AlphaSpitterParts_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_AlphaSpitterParts.BP_AlphaSpitterParts_C");
		return ptr;
	}

}


