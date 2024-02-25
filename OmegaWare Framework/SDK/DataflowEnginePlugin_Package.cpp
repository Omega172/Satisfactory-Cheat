/**
 * Name: Satisfactory
 * Version: Early_Access_CL#273254
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
	 * 		Name   -> PredefinedFunction ADataflowActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADataflowActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DataflowEnginePlugin.DataflowActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDataflowComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDataflowComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DataflowEnginePlugin.DataflowComponent");
		return ptr;
	}

}


