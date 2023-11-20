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
	 * 		Name   -> Function Widget_Stinger.Widget_Stinger_C.SetStingerWidgetContent
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        TitleText                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        UnlockedText                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               AllCaps                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Stinger_C::SetStingerWidgetContent(const class FText& TitleText, const class FText& UnlockedText, bool AllCaps)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Stinger.Widget_Stinger_C.SetStingerWidgetContent");
		
		UWidget_Stinger_C_SetStingerWidgetContent_Params params {};
		params.TitleText = TitleText;
		params.UnlockedText = UnlockedText;
		params.AllCaps = AllCaps;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Stinger.Widget_Stinger_C.ShowSmallIcons
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Stinger_C::ShowSmallIcons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Stinger.Widget_Stinger_C.ShowSmallIcons");
		
		UWidget_Stinger_C_ShowSmallIcons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Stinger.Widget_Stinger_C.Collapse On Animation Finished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Stinger_C::CollapseOnAnimationFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Stinger.Widget_Stinger_C.Collapse On Animation Finished");
		
		UWidget_Stinger_C_CollapseOnAnimationFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Stinger.Widget_Stinger_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_Stinger_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Stinger.Widget_Stinger_C.Construct");
		
		UWidget_Stinger_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Stinger.Widget_Stinger_C.ExecuteUbergraph_Widget_Stinger
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Stinger_C::ExecuteUbergraph_Widget_Stinger(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Stinger.Widget_Stinger_C.ExecuteUbergraph_Widget_Stinger");
		
		UWidget_Stinger_C_ExecuteUbergraph_Widget_Stinger_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_Stinger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_Stinger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Stinger.Widget_Stinger_C");
		return ptr;
	}

}


