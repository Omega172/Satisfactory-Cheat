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
	 * 		Name   -> PredefinedFunction UWidget_StingerSmallIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_StingerSmallIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_StingerSmallIcon.Widget_StingerSmallIcon_C");
		return ptr;
	}

}


