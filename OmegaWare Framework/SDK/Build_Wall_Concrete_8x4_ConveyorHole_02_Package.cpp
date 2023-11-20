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
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_Wall_Concrete_8x4_ConveyorHole_02.Build_Wall_Concrete_8x4_ConveyorHole_02_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuild_Wall_Concrete_8x4_ConveyorHole_02_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_Wall_Concrete_8x4_ConveyorHole_02.Build_Wall_Concrete_8x4_ConveyorHole_02_C.UserConstructionScript");
		
		ABuild_Wall_Concrete_8x4_ConveyorHole_02_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuild_Wall_Concrete_8x4_ConveyorHole_02_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuild_Wall_Concrete_8x4_ConveyorHole_02_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Build_Wall_Concrete_8x4_ConveyorHole_02.Build_Wall_Concrete_8x4_ConveyorHole_02_C");
		return ptr;
	}

}


