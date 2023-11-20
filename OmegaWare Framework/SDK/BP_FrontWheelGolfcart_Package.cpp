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
	 * 		Name   -> PredefinedFunction UBP_FrontWheelGolfcart_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_FrontWheelGolfcart_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_FrontWheelGolfcart.BP_FrontWheelGolfcart_C");
		return ptr;
	}

}


