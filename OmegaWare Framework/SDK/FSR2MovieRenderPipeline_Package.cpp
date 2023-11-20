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
	 * 		Name   -> PredefinedFunction UFSR2MoviePipelineSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFSR2MoviePipelineSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSR2MovieRenderPipeline.FSR2MoviePipelineSettings");
		return ptr;
	}

}


