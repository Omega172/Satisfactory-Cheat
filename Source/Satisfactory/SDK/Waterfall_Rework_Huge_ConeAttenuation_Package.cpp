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
	 * 		Name   -> PredefinedFunction UWaterfall_Rework_Huge_ConeAttenuation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaterfall_Rework_Huge_ConeAttenuation_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Waterfall_Rework_Huge_ConeAttenuation.Waterfall_Rework_Huge_ConeAttenuation_C");
		return ptr;
	}

}


