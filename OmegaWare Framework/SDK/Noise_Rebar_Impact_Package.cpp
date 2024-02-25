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
	 * 		Name   -> PredefinedFunction UNoise_Rebar_Impact_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNoise_Rebar_Impact_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Noise_Rebar_Impact.Noise_Rebar_Impact_C");
		return ptr;
	}

}


