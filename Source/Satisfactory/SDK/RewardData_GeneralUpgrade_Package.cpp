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
	 * 		Name   -> PredefinedFunction URewardData_GeneralUpgrade_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URewardData_GeneralUpgrade_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RewardData_GeneralUpgrade.RewardData_GeneralUpgrade_C");
		return ptr;
	}

}


