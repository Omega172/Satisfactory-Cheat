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
	 * 		Name   -> PredefinedFunction UNobeliskExplosion_01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNobeliskExplosion_01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass NobeliskExplosion_01.NobeliskExplosion_01_C");
		return ptr;
	}

}


