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
	 * 		Name   -> PredefinedFunction UAPT_Sign800x800Center_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAPT_Sign800x800Center_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass APT_Sign800x800Center.APT_Sign800x800Center_C");
		return ptr;
	}

}


