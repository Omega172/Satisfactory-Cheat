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
	 * 		Name   -> PredefinedFunction UBuildMode_Diagonal_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBuildMode_Diagonal_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BuildMode_Diagonal.BuildMode_Diagonal_C");
		return ptr;
	}

}


