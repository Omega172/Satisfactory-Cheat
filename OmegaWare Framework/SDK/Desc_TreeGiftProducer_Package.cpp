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
	 * 		Name   -> PredefinedFunction UDesc_TreeGiftProducer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDesc_TreeGiftProducer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Desc_TreeGiftProducer.Desc_TreeGiftProducer_C");
		return ptr;
	}

}


