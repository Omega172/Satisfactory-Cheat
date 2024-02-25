/**
 * Name: Satisfactory
 * Version: Early_Access_CL#273254
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_PlayerNameTag.BPW_PlayerNameTag_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_PlayerNameTag_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PlayerNameTag.BPW_PlayerNameTag_C.Construct");
		
		UBPW_PlayerNameTag_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_PlayerNameTag.BPW_PlayerNameTag_C.OnPlayerDataUpdated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UBPW_PlayerNameTag_C::OnPlayerDataUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PlayerNameTag.BPW_PlayerNameTag_C.OnPlayerDataUpdated");
		
		UBPW_PlayerNameTag_C_OnPlayerDataUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_PlayerNameTag.BPW_PlayerNameTag_C.OnPumpiModeChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               HideHUD                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PlayerNameTag_C::OnPumpiModeChanged(bool HideHUD)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PlayerNameTag.BPW_PlayerNameTag_C.OnPumpiModeChanged");
		
		UBPW_PlayerNameTag_C_OnPumpiModeChanged_Params params {};
		params.HideHUD = HideHUD;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_PlayerNameTag.BPW_PlayerNameTag_C.ExecuteUbergraph_BPW_PlayerNameTag
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PlayerNameTag_C::ExecuteUbergraph_BPW_PlayerNameTag(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PlayerNameTag.BPW_PlayerNameTag_C.ExecuteUbergraph_BPW_PlayerNameTag");
		
		UBPW_PlayerNameTag_C_ExecuteUbergraph_BPW_PlayerNameTag_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_PlayerNameTag_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_PlayerNameTag_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_PlayerNameTag.BPW_PlayerNameTag_C");
		return ptr;
	}

}


