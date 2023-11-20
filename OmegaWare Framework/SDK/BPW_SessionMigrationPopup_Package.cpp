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
	 * 		Name   -> Function BPW_SessionMigrationPopup.BPW_SessionMigrationPopup_C.GetShouldOkayBeEnabled
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool UBPW_SessionMigrationPopup_C::GetShouldOkayBeEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SessionMigrationPopup.BPW_SessionMigrationPopup_C.GetShouldOkayBeEnabled");
		
		UBPW_SessionMigrationPopup_C_GetShouldOkayBeEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SessionMigrationPopup.BPW_SessionMigrationPopup_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_SessionMigrationPopup_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SessionMigrationPopup.BPW_SessionMigrationPopup_C.Construct");
		
		UBPW_SessionMigrationPopup_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SessionMigrationPopup.BPW_SessionMigrationPopup_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_SessionMigrationPopup_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SessionMigrationPopup.BPW_SessionMigrationPopup_C.Destruct");
		
		UBPW_SessionMigrationPopup_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SessionMigrationPopup.BPW_SessionMigrationPopup_C.OnOeprationCompleted
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_SessionMigrationPopup_C::OnOeprationCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SessionMigrationPopup.BPW_SessionMigrationPopup_C.OnOeprationCompleted");
		
		UBPW_SessionMigrationPopup_C_OnOeprationCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SessionMigrationPopup.BPW_SessionMigrationPopup_C.ExecuteUbergraph_BPW_SessionMigrationPopup
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_SessionMigrationPopup_C::ExecuteUbergraph_BPW_SessionMigrationPopup(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SessionMigrationPopup.BPW_SessionMigrationPopup_C.ExecuteUbergraph_BPW_SessionMigrationPopup");
		
		UBPW_SessionMigrationPopup_C_ExecuteUbergraph_BPW_SessionMigrationPopup_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_SessionMigrationPopup_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_SessionMigrationPopup_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_SessionMigrationPopup.BPW_SessionMigrationPopup_C");
		return ptr;
	}

}


