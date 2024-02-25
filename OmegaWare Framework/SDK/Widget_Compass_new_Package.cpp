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
	 * 		Name   -> Function Widget_Compass_new.Widget_Compass_new_C.GetCompassObjectWidgetClass
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGActorRepresentation*                      actorRepresentation                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	class UClass* UWidget_Compass_new_C::GetCompassObjectWidgetClass(class UFGActorRepresentation* actorRepresentation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Compass_new.Widget_Compass_new_C.GetCompassObjectWidgetClass");
		
		UWidget_Compass_new_C_GetCompassObjectWidgetClass_Params params {};
		params.actorRepresentation = actorRepresentation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Compass_new.Widget_Compass_new_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_Compass_new_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Compass_new.Widget_Compass_new_C.Construct");
		
		UWidget_Compass_new_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Compass_new.Widget_Compass_new_C.EventUpdateBackgroundOpacity
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      updatedCvar                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWidget_Compass_new_C::EventUpdateBackgroundOpacity(const class FString& updatedCvar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Compass_new.Widget_Compass_new_C.EventUpdateBackgroundOpacity");
		
		UWidget_Compass_new_C_EventUpdateBackgroundOpacity_Params params {};
		params.updatedCvar = updatedCvar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Compass_new.Widget_Compass_new_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_Compass_new_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Compass_new.Widget_Compass_new_C.Destruct");
		
		UWidget_Compass_new_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Compass_new.Widget_Compass_new_C.ExecuteUbergraph_Widget_Compass_new
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Compass_new_C::ExecuteUbergraph_Widget_Compass_new(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Compass_new.Widget_Compass_new_C.ExecuteUbergraph_Widget_Compass_new");
		
		UWidget_Compass_new_C_ExecuteUbergraph_Widget_Compass_new_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_Compass_new_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_Compass_new_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Compass_new.Widget_Compass_new_C");
		return ptr;
	}

}


