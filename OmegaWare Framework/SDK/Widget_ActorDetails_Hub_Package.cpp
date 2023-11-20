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
	 * 		Name   -> Function Widget_ActorDetails_Hub.Widget_ActorDetails_Hub_C.FromSecondsToText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             Seconds                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Result                                                     (Parm, OutParm)
	 */
	void UWidget_ActorDetails_Hub_C::FromSecondsToText(double Seconds, class FText* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ActorDetails_Hub.Widget_ActorDetails_Hub_C.FromSecondsToText");
		
		UWidget_ActorDetails_Hub_C_FromSecondsToText_Params params {};
		params.Seconds = Seconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ActorDetails_Hub.Widget_ActorDetails_Hub_C.UpdateInfo
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ActorDetails_Hub_C::UpdateInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ActorDetails_Hub.Widget_ActorDetails_Hub_C.UpdateInfo");
		
		UWidget_ActorDetails_Hub_C_UpdateInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ActorDetails_Hub.Widget_ActorDetails_Hub_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_ActorDetails_Hub_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ActorDetails_Hub.Widget_ActorDetails_Hub_C.Construct");
		
		UWidget_ActorDetails_Hub_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ActorDetails_Hub.Widget_ActorDetails_Hub_C.UpdateInfoEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ActorDetails_Hub_C::UpdateInfoEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ActorDetails_Hub.Widget_ActorDetails_Hub_C.UpdateInfoEvent");
		
		UWidget_ActorDetails_Hub_C_UpdateInfoEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ActorDetails_Hub.Widget_ActorDetails_Hub_C.UpdateMAMInfo
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ActorDetails_Hub_C::UpdateMAMInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ActorDetails_Hub.Widget_ActorDetails_Hub_C.UpdateMAMInfo");
		
		UWidget_ActorDetails_Hub_C_UpdateMAMInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ActorDetails_Hub.Widget_ActorDetails_Hub_C.ExecuteUbergraph_Widget_ActorDetails_Hub
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ActorDetails_Hub_C::ExecuteUbergraph_Widget_ActorDetails_Hub(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ActorDetails_Hub.Widget_ActorDetails_Hub_C.ExecuteUbergraph_Widget_ActorDetails_Hub");
		
		UWidget_ActorDetails_Hub_C_ExecuteUbergraph_Widget_ActorDetails_Hub_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_ActorDetails_Hub_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_ActorDetails_Hub_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_ActorDetails_Hub.Widget_ActorDetails_Hub_C");
		return ptr;
	}

}


