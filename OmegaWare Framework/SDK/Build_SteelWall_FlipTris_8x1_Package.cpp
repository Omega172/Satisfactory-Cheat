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
	 * 		Name   -> PredefinedFunction ABuild_SteelWall_FlipTris_8x1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuild_SteelWall_FlipTris_8x1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Build_SteelWall_FlipTris_8x1.Build_SteelWall_FlipTris_8x1_C");
		return ptr;
	}

}


