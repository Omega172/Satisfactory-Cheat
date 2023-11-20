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
	 * 		Name   -> PredefinedFunction ABP_NuclearHogParts_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_NuclearHogParts_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_NuclearHogParts.BP_NuclearHogParts_C");
		return ptr;
	}

}


