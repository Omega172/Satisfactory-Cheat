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
	 * 		Name   -> PredefinedFunction UNoise_NobeliskExplosion_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNoise_NobeliskExplosion_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Noise_NobeliskExplosion.Noise_NobeliskExplosion_C");
		return ptr;
	}

}


