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
	 * 		Name   -> Function BPI_FrackingSmasher.BPI_FrackingSmasher_C.PlayCameraShake
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPI_FrackingSmasher_C::PlayCameraShake()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_FrackingSmasher.BPI_FrackingSmasher_C.PlayCameraShake");
		
		UBPI_FrackingSmasher_C_PlayCameraShake_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_FrackingSmasher_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_FrackingSmasher_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_FrackingSmasher.BPI_FrackingSmasher_C");
		return ptr;
	}

}


