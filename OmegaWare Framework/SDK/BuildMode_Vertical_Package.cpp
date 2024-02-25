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
	 * 		Name   -> PredefinedFunction UBuildMode_Vertical_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBuildMode_Vertical_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BuildMode_Vertical.BuildMode_Vertical_C");
		return ptr;
	}

}


