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
	 * 		Name   -> PredefinedFunction URewardData_ScannableResource_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URewardData_ScannableResource_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RewardData_ScannableResource.RewardData_ScannableResource_C");
		return ptr;
	}

}


