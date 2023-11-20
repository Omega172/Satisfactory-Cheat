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
	 * 		Name   -> PredefinedFunction UBP_CreatureFamily_SpaceRabbit_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_CreatureFamily_SpaceRabbit_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_CreatureFamily_SpaceRabbit.BP_CreatureFamily_SpaceRabbit_C");
		return ptr;
	}

}


