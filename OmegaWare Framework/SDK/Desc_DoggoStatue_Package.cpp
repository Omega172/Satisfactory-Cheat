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
	 * 		Name   -> PredefinedFunction UDesc_DoggoStatue_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDesc_DoggoStatue_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Desc_DoggoStatue.Desc_DoggoStatue_C");
		return ptr;
	}

}


