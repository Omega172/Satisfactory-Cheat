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
	 * 		Name   -> Function BPW_CustomiserDefaultSwatchMenu.BPW_CustomiserDefaultSwatchMenu_C.OnDefaultSwatchChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      SwatchGroup                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_CustomiserDefaultSwatchMenu_C::OnDefaultSwatchChanged(class UClass* SwatchGroup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_CustomiserDefaultSwatchMenu.BPW_CustomiserDefaultSwatchMenu_C.OnDefaultSwatchChanged");
		
		UBPW_CustomiserDefaultSwatchMenu_C_OnDefaultSwatchChanged_Params params {};
		params.SwatchGroup = SwatchGroup;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_CustomiserDefaultSwatchMenu.BPW_CustomiserDefaultSwatchMenu_C.CreateMenu
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_CustomiserDefaultSwatchMenu_C::CreateMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_CustomiserDefaultSwatchMenu.BPW_CustomiserDefaultSwatchMenu_C.CreateMenu");
		
		UBPW_CustomiserDefaultSwatchMenu_C_CreateMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_CustomiserDefaultSwatchMenu.BPW_CustomiserDefaultSwatchMenu_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_CustomiserDefaultSwatchMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_CustomiserDefaultSwatchMenu.BPW_CustomiserDefaultSwatchMenu_C.Construct");
		
		UBPW_CustomiserDefaultSwatchMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_CustomiserDefaultSwatchMenu.BPW_CustomiserDefaultSwatchMenu_C.ExecuteUbergraph_BPW_CustomiserDefaultSwatchMenu
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_CustomiserDefaultSwatchMenu_C::ExecuteUbergraph_BPW_CustomiserDefaultSwatchMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_CustomiserDefaultSwatchMenu.BPW_CustomiserDefaultSwatchMenu_C.ExecuteUbergraph_BPW_CustomiserDefaultSwatchMenu");
		
		UBPW_CustomiserDefaultSwatchMenu_C_ExecuteUbergraph_BPW_CustomiserDefaultSwatchMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_CustomiserDefaultSwatchMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_CustomiserDefaultSwatchMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_CustomiserDefaultSwatchMenu.BPW_CustomiserDefaultSwatchMenu_C");
		return ptr;
	}

}


