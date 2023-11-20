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
	 * 		Name   -> PredefinedFunction UAPT_Sign800x800Bottom_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAPT_Sign800x800Bottom_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass APT_Sign800x800Bottom.APT_Sign800x800Bottom_C");
		return ptr;
	}

}


