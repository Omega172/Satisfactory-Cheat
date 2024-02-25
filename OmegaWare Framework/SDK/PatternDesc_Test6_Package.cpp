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
	 * 		Name   -> PredefinedFunction UPatternDesc_Test6_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPatternDesc_Test6_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PatternDesc_Test6.PatternDesc_Test6_C");
		return ptr;
	}

}


