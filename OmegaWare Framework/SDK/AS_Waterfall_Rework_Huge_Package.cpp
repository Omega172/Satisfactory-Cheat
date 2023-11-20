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
	 * 		Name   -> PredefinedFunction UAS_Waterfall_Rework_Huge_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAS_Waterfall_Rework_Huge_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AS_Waterfall_Rework_Huge.AS_Waterfall_Rework_Huge_C");
		return ptr;
	}

}


