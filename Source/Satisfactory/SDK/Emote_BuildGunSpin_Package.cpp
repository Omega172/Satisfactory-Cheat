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
	 * 		Name   -> Function Emote_BuildGunSpin.Emote_BuildGunSpin_C.OnPlayEmoteLocally
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UEmote_BuildGunSpin_C::OnPlayEmoteLocally()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Emote_BuildGunSpin.Emote_BuildGunSpin_C.OnPlayEmoteLocally");
		
		UEmote_BuildGunSpin_C_OnPlayEmoteLocally_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Emote_BuildGunSpin.Emote_BuildGunSpin_C.OnPlayEmoteRemote
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UEmote_BuildGunSpin_C::OnPlayEmoteRemote()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Emote_BuildGunSpin.Emote_BuildGunSpin_C.OnPlayEmoteRemote");
		
		UEmote_BuildGunSpin_C_OnPlayEmoteRemote_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Emote_BuildGunSpin.Emote_BuildGunSpin_C.ExecuteUbergraph_Emote_BuildGunSpin
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEmote_BuildGunSpin_C::ExecuteUbergraph_Emote_BuildGunSpin(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Emote_BuildGunSpin.Emote_BuildGunSpin_C.ExecuteUbergraph_Emote_BuildGunSpin");
		
		UEmote_BuildGunSpin_C_ExecuteUbergraph_Emote_BuildGunSpin_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEmote_BuildGunSpin_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEmote_BuildGunSpin_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Emote_BuildGunSpin.Emote_BuildGunSpin_C");
		return ptr;
	}

}


