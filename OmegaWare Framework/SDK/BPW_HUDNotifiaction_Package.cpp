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
	 * 		Name   -> Function BPW_HUDNotifiaction.BPW_HUDNotifiaction_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_HUDNotifiaction_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_HUDNotifiaction.BPW_HUDNotifiaction_C.Construct");
		
		UBPW_HUDNotifiaction_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_HUDNotifiaction.BPW_HUDNotifiaction_C.HideNotifiaction
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_HUDNotifiaction_C::HideNotifiaction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_HUDNotifiaction.BPW_HUDNotifiaction_C.HideNotifiaction");
		
		UBPW_HUDNotifiaction_C_HideNotifiaction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_HUDNotifiaction.BPW_HUDNotifiaction_C.ExecuteUbergraph_BPW_HUDNotifiaction
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_HUDNotifiaction_C::ExecuteUbergraph_BPW_HUDNotifiaction(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_HUDNotifiaction.BPW_HUDNotifiaction_C.ExecuteUbergraph_BPW_HUDNotifiaction");
		
		UBPW_HUDNotifiaction_C_ExecuteUbergraph_BPW_HUDNotifiaction_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_HUDNotifiaction_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_HUDNotifiaction_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_HUDNotifiaction.BPW_HUDNotifiaction_C");
		return ptr;
	}

}


