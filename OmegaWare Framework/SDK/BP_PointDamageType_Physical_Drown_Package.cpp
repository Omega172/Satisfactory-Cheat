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
	 * 		Name   -> PredefinedFunction UBP_PointDamageType_Physical_Drown_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PointDamageType_Physical_Drown_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PointDamageType_Physical_Drown.BP_PointDamageType_Physical_Drown_C");
		return ptr;
	}

}


