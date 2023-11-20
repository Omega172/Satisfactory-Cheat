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
	 * 		Name   -> PredefinedFunction UAmbient_Settings_Crater_Lake_Atmos_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAmbient_Settings_Crater_Lake_Atmos_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ambient_Settings_Crater_Lake_Atmos.Ambient_Settings_Crater_Lake_Atmos_C");
		return ptr;
	}

}


