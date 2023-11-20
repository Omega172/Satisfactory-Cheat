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
	 * 		Name   -> Function CursorParticle_Plastic.CursorParticle_Plastic_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UCursorParticle_Plastic_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CursorParticle_Plastic.CursorParticle_Plastic_C.Construct");
		
		UCursorParticle_Plastic_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function CursorParticle_Plastic.CursorParticle_Plastic_C.ExecuteUbergraph_CursorParticle_Plastic
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCursorParticle_Plastic_C::ExecuteUbergraph_CursorParticle_Plastic(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CursorParticle_Plastic.CursorParticle_Plastic_C.ExecuteUbergraph_CursorParticle_Plastic");
		
		UCursorParticle_Plastic_C_ExecuteUbergraph_CursorParticle_Plastic_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCursorParticle_Plastic_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCursorParticle_Plastic_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CursorParticle_Plastic.CursorParticle_Plastic_C");
		return ptr;
	}

}


