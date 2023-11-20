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
	 * 		Name   -> PredefinedFunction UAS_TitanForest_GiantTree_Creak_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAS_TitanForest_GiantTree_Creak_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AS_TitanForest_GiantTree_Creak.AS_TitanForest_GiantTree_Creak_C");
		return ptr;
	}

}


