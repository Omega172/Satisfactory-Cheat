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
	 * 		Name   -> PredefinedFunction UBuildMode_HorzToVert_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBuildMode_HorzToVert_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BuildMode_HorzToVert.BuildMode_HorzToVert_C");
		return ptr;
	}

}


