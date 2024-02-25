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
	 * 		Name   -> Function BPW_HUDNotification_Default.BPW_HUDNotification_Default_C.SetIcon
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  mIcon                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_HUDNotification_Default_C::SetIcon(class UTexture2D* mIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_HUDNotification_Default.BPW_HUDNotification_Default_C.SetIcon");
		
		UBPW_HUDNotification_Default_C_SetIcon_Params params {};
		params.mIcon = mIcon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_HUDNotification_Default.BPW_HUDNotification_Default_C.SetDescription
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        mDescription                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_HUDNotification_Default_C::SetDescription(const class FText& mDescription)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_HUDNotification_Default.BPW_HUDNotification_Default_C.SetDescription");
		
		UBPW_HUDNotification_Default_C_SetDescription_Params params {};
		params.mDescription = mDescription;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_HUDNotification_Default.BPW_HUDNotification_Default_C.SetTitle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        mTitle                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_HUDNotification_Default_C::SetTitle(const class FText& mTitle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_HUDNotification_Default.BPW_HUDNotification_Default_C.SetTitle");
		
		UBPW_HUDNotification_Default_C_SetTitle_Params params {};
		params.mTitle = mTitle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_HUDNotification_Default.BPW_HUDNotification_Default_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_HUDNotification_Default_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_HUDNotification_Default.BPW_HUDNotification_Default_C.Construct");
		
		UBPW_HUDNotification_Default_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_HUDNotification_Default.BPW_HUDNotification_Default_C.ExecuteUbergraph_BPW_HUDNotification_Default
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_HUDNotification_Default_C::ExecuteUbergraph_BPW_HUDNotification_Default(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_HUDNotification_Default.BPW_HUDNotification_Default_C.ExecuteUbergraph_BPW_HUDNotification_Default");
		
		UBPW_HUDNotification_Default_C_ExecuteUbergraph_BPW_HUDNotification_Default_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_HUDNotification_Default_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_HUDNotification_Default_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_HUDNotification_Default.BPW_HUDNotification_Default_C");
		return ptr;
	}

}


