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
	 * 		Name   -> PredefinedFunction USC_UpperDiagonalWalls_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USC_UpperDiagonalWalls_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SC_UpperDiagonalWalls.SC_UpperDiagonalWalls_C");
		return ptr;
	}

}


