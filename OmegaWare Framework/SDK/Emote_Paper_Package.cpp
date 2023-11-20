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
	 * 		Name   -> Function Emote_Paper.Emote_Paper_C.OnPlayEmoteLocally
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UEmote_Paper_C::OnPlayEmoteLocally()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Emote_Paper.Emote_Paper_C.OnPlayEmoteLocally");
		
		UEmote_Paper_C_OnPlayEmoteLocally_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Emote_Paper.Emote_Paper_C.OnPlayEmoteRemote
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UEmote_Paper_C::OnPlayEmoteRemote()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Emote_Paper.Emote_Paper_C.OnPlayEmoteRemote");
		
		UEmote_Paper_C_OnPlayEmoteRemote_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Emote_Paper.Emote_Paper_C.ExecuteUbergraph_Emote_Paper
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEmote_Paper_C::ExecuteUbergraph_Emote_Paper(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Emote_Paper.Emote_Paper_C.ExecuteUbergraph_Emote_Paper");
		
		UEmote_Paper_C_ExecuteUbergraph_Emote_Paper_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEmote_Paper_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEmote_Paper_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Emote_Paper.Emote_Paper_C");
		return ptr;
	}

}


