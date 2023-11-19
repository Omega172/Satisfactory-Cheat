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
	 * 		Name   -> PredefinedFunction USignTypeDesc_4x1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USignTypeDesc_4x1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SignTypeDesc_4x1.SignTypeDesc_4x1_C");
		return ptr;
	}

}


