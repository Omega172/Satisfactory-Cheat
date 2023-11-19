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
	 * 		Name   -> Function Attach_GolfCartDispenser.Attach_GolfCartDispenser_C.PlayAttachEffects3P
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AAttach_GolfCartDispenser_C::PlayAttachEffects3P()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Attach_GolfCartDispenser.Attach_GolfCartDispenser_C.PlayAttachEffects3P");
		
		AAttach_GolfCartDispenser_C_PlayAttachEffects3P_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Attach_GolfCartDispenser.Attach_GolfCartDispenser_C.PlayDetachEffects3P
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AAttach_GolfCartDispenser_C::PlayDetachEffects3P()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Attach_GolfCartDispenser.Attach_GolfCartDispenser_C.PlayDetachEffects3P");
		
		AAttach_GolfCartDispenser_C_PlayDetachEffects3P_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Attach_GolfCartDispenser.Attach_GolfCartDispenser_C.ExecuteUbergraph_Attach_GolfCartDispenser
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAttach_GolfCartDispenser_C::ExecuteUbergraph_Attach_GolfCartDispenser(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Attach_GolfCartDispenser.Attach_GolfCartDispenser_C.ExecuteUbergraph_Attach_GolfCartDispenser");
		
		AAttach_GolfCartDispenser_C_ExecuteUbergraph_Attach_GolfCartDispenser_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAttach_GolfCartDispenser_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAttach_GolfCartDispenser_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Attach_GolfCartDispenser.Attach_GolfCartDispenser_C");
		return ptr;
	}

}


