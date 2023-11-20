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
	 * 		Name   -> PredefinedFunction UWwiseAudioLinkComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWwiseAudioLinkComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Wwise.WwiseAudioLinkComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWwiseAudioLinkSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWwiseAudioLinkSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Wwise.WwiseAudioLinkSettings");
		return ptr;
	}

}


