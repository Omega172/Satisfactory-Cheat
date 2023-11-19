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
	 * 		Name   -> PredefinedFunction ADeco_WalkwayRamp_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADeco_WalkwayRamp_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Deco_WalkwayRamp.Deco_WalkwayRamp_C");
		return ptr;
	}

}


