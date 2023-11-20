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
	 * 		Name   -> PredefinedFunction UCBG_Ramps_Corners_Asphalt_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCBG_Ramps_Corners_Asphalt_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CBG_Ramps_Corners_Asphalt.CBG_Ramps_Corners_Asphalt_C");
		return ptr;
	}

}


