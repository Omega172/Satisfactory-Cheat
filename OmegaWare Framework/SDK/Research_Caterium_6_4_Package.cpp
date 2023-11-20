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
	 * 		Name   -> PredefinedFunction UResearch_Caterium_6_3_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UResearch_Caterium_6_3_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Research_Caterium_6_4.Research_Caterium_6_3_C");
		return ptr;
	}

}


