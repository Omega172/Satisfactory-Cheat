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
	 * 		Name   -> PredefinedFunction USC_RSS_Electronics_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USC_RSS_Electronics_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SC_RSS_Electronics.SC_RSS_Electronics_C");
		return ptr;
	}

}


