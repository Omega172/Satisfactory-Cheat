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
	 * 		Name   -> Function Widget_ButtonShine.Widget_ButtonShine_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_ButtonShine_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ButtonShine.Widget_ButtonShine_C.Construct");
		
		UWidget_ButtonShine_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_ButtonShine.Widget_ButtonShine_C.HoverCheck
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ButtonShine_C::HoverCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ButtonShine.Widget_ButtonShine_C.HoverCheck");
		
		UWidget_ButtonShine_C_HoverCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_ButtonShine.Widget_ButtonShine_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_ButtonShine_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ButtonShine.Widget_ButtonShine_C.Destruct");
		
		UWidget_ButtonShine_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_ButtonShine.Widget_ButtonShine_C.PlayShineAnim
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ButtonShine_C::PlayShineAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ButtonShine.Widget_ButtonShine_C.PlayShineAnim");
		
		UWidget_ButtonShine_C_PlayShineAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_ButtonShine.Widget_ButtonShine_C.ExecuteUbergraph_Widget_ButtonShine
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ButtonShine_C::ExecuteUbergraph_Widget_ButtonShine(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ButtonShine.Widget_ButtonShine_C.ExecuteUbergraph_Widget_ButtonShine");
		
		UWidget_ButtonShine_C_ExecuteUbergraph_Widget_ButtonShine_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_ButtonShine_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_ButtonShine_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_ButtonShine.Widget_ButtonShine_C");
		return ptr;
	}

}


