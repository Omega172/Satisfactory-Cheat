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
	 * 		Name   -> PredefinedFunction UBP_NFBHideableFoliage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_NFBHideableFoliage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_NFBHideableFoliage.BP_NFBHideableFoliage_C");
		return ptr;
	}

}


