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
	 * 		Name   -> Function BPI_GeneratorNuclear.BPI_GeneratorNuclear_C.ReloadTimerEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPI_GeneratorNuclear_C::ReloadTimerEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_GeneratorNuclear.BPI_GeneratorNuclear_C.ReloadTimerEvent");
		
		UBPI_GeneratorNuclear_C_ReloadTimerEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_GeneratorNuclear_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_GeneratorNuclear_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_GeneratorNuclear.BPI_GeneratorNuclear_C");
		return ptr;
	}

}


