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
	 * 		Name   -> PredefinedFunction USignTypeDesc_StandaloneVertical_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USignTypeDesc_StandaloneVertical_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SignTypeDesc_StandaloneVertical.SignTypeDesc_StandaloneVertical_C");
		return ptr;
	}

}


