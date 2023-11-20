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
	 * 		Name   -> PredefinedFunction UDesc_StoragePlayer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDesc_StoragePlayer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Desc_StoragePlayer.Desc_StoragePlayer_C");
		return ptr;
	}

}


