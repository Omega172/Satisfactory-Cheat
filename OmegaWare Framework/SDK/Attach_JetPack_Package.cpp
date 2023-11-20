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
	 * 		Name   -> Function Attach_JetPack.Attach_JetPack_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AAttach_JetPack_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Attach_JetPack.Attach_JetPack_C.ReceiveBeginPlay");
		
		AAttach_JetPack_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Attach_JetPack.Attach_JetPack_C.OnStopThrusting
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AAttach_JetPack_C::OnStopThrusting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Attach_JetPack.Attach_JetPack_C.OnStopThrusting");
		
		AAttach_JetPack_C_OnStopThrusting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Attach_JetPack.Attach_JetPack_C.OnStartThrusting
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AAttach_JetPack_C::OnStartThrusting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Attach_JetPack.Attach_JetPack_C.OnStartThrusting");
		
		AAttach_JetPack_C_OnStartThrusting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Attach_JetPack.Attach_JetPack_C.ExecuteUbergraph_Attach_JetPack
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAttach_JetPack_C::ExecuteUbergraph_Attach_JetPack(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Attach_JetPack.Attach_JetPack_C.ExecuteUbergraph_Attach_JetPack");
		
		AAttach_JetPack_C_ExecuteUbergraph_Attach_JetPack_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAttach_JetPack_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAttach_JetPack_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Attach_JetPack.Attach_JetPack_C");
		return ptr;
	}

}


