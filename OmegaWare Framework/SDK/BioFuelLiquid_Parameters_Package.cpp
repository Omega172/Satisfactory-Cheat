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
	 * 		Name   -> PredefinedFunction UBioFuelLiquid_Parameters_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBioFuelLiquid_Parameters_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BioFuelLiquid_Parameters.BioFuelLiquid_Parameters_C");
		return ptr;
	}

}


