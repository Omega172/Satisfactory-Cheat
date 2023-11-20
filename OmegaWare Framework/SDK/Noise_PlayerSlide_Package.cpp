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
	 * 		Name   -> PredefinedFunction UNoise_PlayerSlide_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNoise_PlayerSlide_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Noise_PlayerSlide.Noise_PlayerSlide_C");
		return ptr;
	}

}


