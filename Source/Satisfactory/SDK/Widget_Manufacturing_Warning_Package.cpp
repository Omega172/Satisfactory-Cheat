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
	 * 		Name   -> Function Widget_Manufacturing_Warning.Widget_Manufacturing_Warning_C.UpdateState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGBuildableFactory*                         FGBuildableFactory                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Manufacturing_Warning_C::UpdateState(class AFGBuildableFactory* FGBuildableFactory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Manufacturing_Warning.Widget_Manufacturing_Warning_C.UpdateState");
		
		UWidget_Manufacturing_Warning_C_UpdateState_Params params {};
		params.FGBuildableFactory = FGBuildableFactory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Manufacturing_Warning.Widget_Manufacturing_Warning_C.OverrideText
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWidget_Manufacturing_Warning_C::OverrideText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Manufacturing_Warning.Widget_Manufacturing_Warning_C.OverrideText");
		
		UWidget_Manufacturing_Warning_C_OverrideText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Manufacturing_Warning.Widget_Manufacturing_Warning_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_Manufacturing_Warning_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Manufacturing_Warning.Widget_Manufacturing_Warning_C.Construct");
		
		UWidget_Manufacturing_Warning_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Manufacturing_Warning.Widget_Manufacturing_Warning_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Manufacturing_Warning_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Manufacturing_Warning.Widget_Manufacturing_Warning_C.PreConstruct");
		
		UWidget_Manufacturing_Warning_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Manufacturing_Warning.Widget_Manufacturing_Warning_C.StartAndShowAnim
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Manufacturing_Warning_C::StartAndShowAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Manufacturing_Warning.Widget_Manufacturing_Warning_C.StartAndShowAnim");
		
		UWidget_Manufacturing_Warning_C_StartAndShowAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Manufacturing_Warning.Widget_Manufacturing_Warning_C.StopAndCollapseAnim
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Manufacturing_Warning_C::StopAndCollapseAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Manufacturing_Warning.Widget_Manufacturing_Warning_C.StopAndCollapseAnim");
		
		UWidget_Manufacturing_Warning_C_StopAndCollapseAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Manufacturing_Warning.Widget_Manufacturing_Warning_C.ExecuteUbergraph_Widget_Manufacturing_Warning
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Manufacturing_Warning_C::ExecuteUbergraph_Widget_Manufacturing_Warning(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Manufacturing_Warning.Widget_Manufacturing_Warning_C.ExecuteUbergraph_Widget_Manufacturing_Warning");
		
		UWidget_Manufacturing_Warning_C_ExecuteUbergraph_Widget_Manufacturing_Warning_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_Manufacturing_Warning_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_Manufacturing_Warning_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Manufacturing_Warning.Widget_Manufacturing_Warning_C");
		return ptr;
	}

}


