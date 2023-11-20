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
	 * 		Name   -> PredefinedFunction UBP_WaterPostProcess_SulfurPond_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_WaterPostProcess_SulfurPond_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_WaterPostProcess_SulfurPond.BP_WaterPostProcess_SulfurPond_C");
		return ptr;
	}

}


