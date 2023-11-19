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
	 * 		Name   -> PredefinedFunction UBioFuel_Parameters_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBioFuel_Parameters_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BioFuel_Parameters.BioFuel_Parameters_C");
		return ptr;
	}

}


