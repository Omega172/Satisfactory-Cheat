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
	 * 		Name   -> Function Attach_PortableMinerDispenser.Attach_PortableMinerDispenser_C.PlayAttachEffects3P
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AAttach_PortableMinerDispenser_C::PlayAttachEffects3P()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Attach_PortableMinerDispenser.Attach_PortableMinerDispenser_C.PlayAttachEffects3P");
		
		AAttach_PortableMinerDispenser_C_PlayAttachEffects3P_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Attach_PortableMinerDispenser.Attach_PortableMinerDispenser_C.PlayDetachEffects3P
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AAttach_PortableMinerDispenser_C::PlayDetachEffects3P()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Attach_PortableMinerDispenser.Attach_PortableMinerDispenser_C.PlayDetachEffects3P");
		
		AAttach_PortableMinerDispenser_C_PlayDetachEffects3P_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Attach_PortableMinerDispenser.Attach_PortableMinerDispenser_C.ExecuteUbergraph_Attach_PortableMinerDispenser
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAttach_PortableMinerDispenser_C::ExecuteUbergraph_Attach_PortableMinerDispenser(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Attach_PortableMinerDispenser.Attach_PortableMinerDispenser_C.ExecuteUbergraph_Attach_PortableMinerDispenser");
		
		AAttach_PortableMinerDispenser_C_ExecuteUbergraph_Attach_PortableMinerDispenser_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAttach_PortableMinerDispenser_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAttach_PortableMinerDispenser_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Attach_PortableMinerDispenser.Attach_PortableMinerDispenser_C");
		return ptr;
	}

}


