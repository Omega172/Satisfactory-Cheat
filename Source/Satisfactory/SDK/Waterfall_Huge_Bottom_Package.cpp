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
	 * 		Name   -> PredefinedFunction UWaterfall_Huge_Bottom_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaterfall_Huge_Bottom_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Waterfall_Huge_Bottom.Waterfall_Huge_Bottom_C");
		return ptr;
	}

}


