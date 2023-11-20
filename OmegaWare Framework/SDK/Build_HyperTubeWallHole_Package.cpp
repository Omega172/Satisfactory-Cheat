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
	 * 		Name   -> PredefinedFunction ABuild_HyperTubeWallHole_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuild_HyperTubeWallHole_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Build_HyperTubeWallHole.Build_HyperTubeWallHole_C");
		return ptr;
	}

}


