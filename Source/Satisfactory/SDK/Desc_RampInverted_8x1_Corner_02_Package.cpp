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
	 * 		Name   -> PredefinedFunction UDesc_RampInverted_8x1_Corner_02_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDesc_RampInverted_8x1_Corner_02_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Desc_RampInverted_8x1_Corner_02.Desc_RampInverted_8x1_Corner_02_C");
		return ptr;
	}

}


