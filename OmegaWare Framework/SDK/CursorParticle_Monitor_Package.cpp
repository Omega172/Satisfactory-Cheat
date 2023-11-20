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
	 * 		Name   -> Function CursorParticle_Monitor.CursorParticle_Monitor_C.SwitchImage
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UCursorParticle_Monitor_C::SwitchImage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CursorParticle_Monitor.CursorParticle_Monitor_C.SwitchImage");
		
		UCursorParticle_Monitor_C_SwitchImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function CursorParticle_Monitor.CursorParticle_Monitor_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UCursorParticle_Monitor_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CursorParticle_Monitor.CursorParticle_Monitor_C.Construct");
		
		UCursorParticle_Monitor_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function CursorParticle_Monitor.CursorParticle_Monitor_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UCursorParticle_Monitor_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CursorParticle_Monitor.CursorParticle_Monitor_C.Destruct");
		
		UCursorParticle_Monitor_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function CursorParticle_Monitor.CursorParticle_Monitor_C.StartCrash
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UCursorParticle_Monitor_C::StartCrash()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CursorParticle_Monitor.CursorParticle_Monitor_C.StartCrash");
		
		UCursorParticle_Monitor_C_StartCrash_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function CursorParticle_Monitor.CursorParticle_Monitor_C.ExecuteUbergraph_CursorParticle_Monitor
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCursorParticle_Monitor_C::ExecuteUbergraph_CursorParticle_Monitor(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CursorParticle_Monitor.CursorParticle_Monitor_C.ExecuteUbergraph_CursorParticle_Monitor");
		
		UCursorParticle_Monitor_C_ExecuteUbergraph_CursorParticle_Monitor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCursorParticle_Monitor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCursorParticle_Monitor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CursorParticle_Monitor.CursorParticle_Monitor_C");
		return ptr;
	}

}


