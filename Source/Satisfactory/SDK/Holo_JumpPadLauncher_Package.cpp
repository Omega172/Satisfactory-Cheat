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
	 * 		Name   -> Function Holo_JumpPadLauncher.Holo_JumpPadLauncher_C.OnLaunchAngleAdjusted
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AHolo_JumpPadLauncher_C::OnLaunchAngleAdjusted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Holo_JumpPadLauncher.Holo_JumpPadLauncher_C.OnLaunchAngleAdjusted");
		
		AHolo_JumpPadLauncher_C_OnLaunchAngleAdjusted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Holo_JumpPadLauncher.Holo_JumpPadLauncher_C.ExecuteUbergraph_Holo_JumpPadLauncher
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHolo_JumpPadLauncher_C::ExecuteUbergraph_Holo_JumpPadLauncher(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Holo_JumpPadLauncher.Holo_JumpPadLauncher_C.ExecuteUbergraph_Holo_JumpPadLauncher");
		
		AHolo_JumpPadLauncher_C_ExecuteUbergraph_Holo_JumpPadLauncher_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHolo_JumpPadLauncher_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHolo_JumpPadLauncher_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Holo_JumpPadLauncher.Holo_JumpPadLauncher_C");
		return ptr;
	}

}


