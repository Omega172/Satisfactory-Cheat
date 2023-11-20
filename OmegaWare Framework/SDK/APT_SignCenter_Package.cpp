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
	 * 		Name   -> PredefinedFunction UAPT_SignCenter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAPT_SignCenter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass APT_SignCenter.APT_SignCenter_C");
		return ptr;
	}

}


