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
	 * 		Name   -> Function Emote_Wave.Emote_Wave_C.OnPlayEmoteLocally
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UEmote_Wave_C::OnPlayEmoteLocally()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Emote_Wave.Emote_Wave_C.OnPlayEmoteLocally");
		
		UEmote_Wave_C_OnPlayEmoteLocally_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Emote_Wave.Emote_Wave_C.OnPlayEmoteRemote
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UEmote_Wave_C::OnPlayEmoteRemote()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Emote_Wave.Emote_Wave_C.OnPlayEmoteRemote");
		
		UEmote_Wave_C_OnPlayEmoteRemote_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Emote_Wave.Emote_Wave_C.ExecuteUbergraph_Emote_Wave
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEmote_Wave_C::ExecuteUbergraph_Emote_Wave(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Emote_Wave.Emote_Wave_C.ExecuteUbergraph_Emote_Wave");
		
		UEmote_Wave_C_ExecuteUbergraph_Emote_Wave_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEmote_Wave_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEmote_Wave_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Emote_Wave.Emote_Wave_C");
		return ptr;
	}

}


