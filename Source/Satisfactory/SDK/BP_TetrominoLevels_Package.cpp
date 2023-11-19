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
	 * 		Name   -> PredefinedFunction UBP_TetrominoLevels_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_TetrominoLevels_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_TetrominoLevels.BP_TetrominoLevels_C");
		return ptr;
	}

}


