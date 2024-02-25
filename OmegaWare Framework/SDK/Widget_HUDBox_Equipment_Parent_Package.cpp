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
	 * 		Name   -> Function Widget_HUDBox_Equipment_Parent.Widget_HUDBox_Equipment_Parent_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_HUDBox_Equipment_Parent_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_HUDBox_Equipment_Parent.Widget_HUDBox_Equipment_Parent_C.Destruct");
		
		UWidget_HUDBox_Equipment_Parent_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_HUDBox_Equipment_Parent.Widget_HUDBox_Equipment_Parent_C.ExecuteUbergraph_Widget_HUDBox_Equipment_Parent
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_HUDBox_Equipment_Parent_C::ExecuteUbergraph_Widget_HUDBox_Equipment_Parent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_HUDBox_Equipment_Parent.Widget_HUDBox_Equipment_Parent_C.ExecuteUbergraph_Widget_HUDBox_Equipment_Parent");
		
		UWidget_HUDBox_Equipment_Parent_C_ExecuteUbergraph_Widget_HUDBox_Equipment_Parent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_HUDBox_Equipment_Parent.Widget_HUDBox_Equipment_Parent_C.EventShowHideWarningAnim__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ShowAnim                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_HUDBox_Equipment_Parent_C::EventShowHideWarningAnim__DelegateSignature(bool ShowAnim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_HUDBox_Equipment_Parent.Widget_HUDBox_Equipment_Parent_C.EventShowHideWarningAnim__DelegateSignature");
		
		UWidget_HUDBox_Equipment_Parent_C_EventShowHideWarningAnim__DelegateSignature_Params params {};
		params.ShowAnim = ShowAnim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_HUDBox_Equipment_Parent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_HUDBox_Equipment_Parent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_HUDBox_Equipment_Parent.Widget_HUDBox_Equipment_Parent_C");
		return ptr;
	}

}


