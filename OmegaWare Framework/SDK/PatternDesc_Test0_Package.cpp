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
	 * 		Name   -> PredefinedFunction UPatternDesc_Test0_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPatternDesc_Test0_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PatternDesc_Test0.PatternDesc_Test0_C");
		return ptr;
	}

}


