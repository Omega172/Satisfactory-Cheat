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
	 * 		Name   -> PredefinedFunction UDesc_GeneratorBiomass_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDesc_GeneratorBiomass_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Desc_GeneratorBiomass.Desc_GeneratorBiomass_C");
		return ptr;
	}

}


