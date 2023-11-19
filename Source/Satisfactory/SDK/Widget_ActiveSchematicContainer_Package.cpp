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
	 * 		Name   -> Function Widget_ActiveSchematicContainer.Widget_ActiveSchematicContainer_C.GetPodTimerText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UWidget_ActiveSchematicContainer_C::GetPodTimerText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ActiveSchematicContainer.Widget_ActiveSchematicContainer_C.GetPodTimerText");
		
		UWidget_ActiveSchematicContainer_C_GetPodTimerText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ActiveSchematicContainer.Widget_ActiveSchematicContainer_C.GetShouldShowPodTimerText
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool UWidget_ActiveSchematicContainer_C::GetShouldShowPodTimerText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ActiveSchematicContainer.Widget_ActiveSchematicContainer_C.GetShouldShowPodTimerText");
		
		UWidget_ActiveSchematicContainer_C_GetShouldShowPodTimerText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ActiveSchematicContainer.Widget_ActiveSchematicContainer_C.RemoveSchematicCostWidget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ActiveSchematicContainer_C::RemoveSchematicCostWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ActiveSchematicContainer.Widget_ActiveSchematicContainer_C.RemoveSchematicCostWidget");
		
		UWidget_ActiveSchematicContainer_C_RemoveSchematicCostWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ActiveSchematicContainer.Widget_ActiveSchematicContainer_C.AddSchematicCostWidget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ActiveSchematicContainer_C::AddSchematicCostWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ActiveSchematicContainer.Widget_ActiveSchematicContainer_C.AddSchematicCostWidget");
		
		UWidget_ActiveSchematicContainer_C_AddSchematicCostWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ActiveSchematicContainer.Widget_ActiveSchematicContainer_C.MatchWidgetWithSchematicCost
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ActiveSchematicContainer_C::MatchWidgetWithSchematicCost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ActiveSchematicContainer.Widget_ActiveSchematicContainer_C.MatchWidgetWithSchematicCost");
		
		UWidget_ActiveSchematicContainer_C_MatchWidgetWithSchematicCost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ActiveSchematicContainer.Widget_ActiveSchematicContainer_C.SetSchematic
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      mCachedActiveSchematic                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ActiveSchematicContainer_C::SetSchematic(class UClass* mCachedActiveSchematic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ActiveSchematicContainer.Widget_ActiveSchematicContainer_C.SetSchematic");
		
		UWidget_ActiveSchematicContainer_C_SetSchematic_Params params {};
		params.mCachedActiveSchematic = mCachedActiveSchematic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ActiveSchematicContainer.Widget_ActiveSchematicContainer_C.UpdateSchematicName
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ActiveSchematicContainer_C::UpdateSchematicName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ActiveSchematicContainer.Widget_ActiveSchematicContainer_C.UpdateSchematicName");
		
		UWidget_ActiveSchematicContainer_C_UpdateSchematicName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ActiveSchematicContainer.Widget_ActiveSchematicContainer_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_ActiveSchematicContainer_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ActiveSchematicContainer.Widget_ActiveSchematicContainer_C.Construct");
		
		UWidget_ActiveSchematicContainer_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ActiveSchematicContainer.Widget_ActiveSchematicContainer_C.OnSchematicChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      activeSchematic                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void UWidget_ActiveSchematicContainer_C::OnSchematicChanged(class UClass* activeSchematic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ActiveSchematicContainer.Widget_ActiveSchematicContainer_C.OnSchematicChanged");
		
		UWidget_ActiveSchematicContainer_C_OnSchematicChanged_Params params {};
		params.activeSchematic = activeSchematic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ActiveSchematicContainer.Widget_ActiveSchematicContainer_C.UpdateTimeUntilReturn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ActiveSchematicContainer_C::UpdateTimeUntilReturn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ActiveSchematicContainer.Widget_ActiveSchematicContainer_C.UpdateTimeUntilReturn");
		
		UWidget_ActiveSchematicContainer_C_UpdateTimeUntilReturn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ActiveSchematicContainer.Widget_ActiveSchematicContainer_C.CheckTimerVisibility
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ActiveSchematicContainer_C::CheckTimerVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ActiveSchematicContainer.Widget_ActiveSchematicContainer_C.CheckTimerVisibility");
		
		UWidget_ActiveSchematicContainer_C_CheckTimerVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ActiveSchematicContainer.Widget_ActiveSchematicContainer_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_ActiveSchematicContainer_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ActiveSchematicContainer.Widget_ActiveSchematicContainer_C.Destruct");
		
		UWidget_ActiveSchematicContainer_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ActiveSchematicContainer.Widget_ActiveSchematicContainer_C.CheckVisibility
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ActiveSchematicContainer_C::CheckVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ActiveSchematicContainer.Widget_ActiveSchematicContainer_C.CheckVisibility");
		
		UWidget_ActiveSchematicContainer_C_CheckVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ActiveSchematicContainer.Widget_ActiveSchematicContainer_C.CheckShouldAutoScroll
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ActiveSchematicContainer_C::CheckShouldAutoScroll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ActiveSchematicContainer.Widget_ActiveSchematicContainer_C.CheckShouldAutoScroll");
		
		UWidget_ActiveSchematicContainer_C_CheckShouldAutoScroll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ActiveSchematicContainer.Widget_ActiveSchematicContainer_C.ExecuteUbergraph_Widget_ActiveSchematicContainer
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ActiveSchematicContainer_C::ExecuteUbergraph_Widget_ActiveSchematicContainer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ActiveSchematicContainer.Widget_ActiveSchematicContainer_C.ExecuteUbergraph_Widget_ActiveSchematicContainer");
		
		UWidget_ActiveSchematicContainer_C_ExecuteUbergraph_Widget_ActiveSchematicContainer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_ActiveSchematicContainer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_ActiveSchematicContainer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_ActiveSchematicContainer.Widget_ActiveSchematicContainer_C");
		return ptr;
	}

}


