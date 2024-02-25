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
	 * 		Name   -> Function Widget_SubMenuBackground.Widget_SubMenuBackground_C.SetUsesTopPadding
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               mUsesTopPadding                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_SubMenuBackground_C::SetUsesTopPadding(bool mUsesTopPadding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SubMenuBackground.Widget_SubMenuBackground_C.SetUsesTopPadding");
		
		UWidget_SubMenuBackground_C_SetUsesTopPadding_Params params {};
		params.mUsesTopPadding = mUsesTopPadding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_SubMenuBackground.Widget_SubMenuBackground_C.SetUsesGradient
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               mUsesGradient                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_SubMenuBackground_C::SetUsesGradient(bool mUsesGradient)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SubMenuBackground.Widget_SubMenuBackground_C.SetUsesGradient");
		
		UWidget_SubMenuBackground_C_SetUsesGradient_Params params {};
		params.mUsesGradient = mUsesGradient;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_SubMenuBackground.Widget_SubMenuBackground_C.Set Show Background
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               mShowBackground                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_SubMenuBackground_C::SetShowBackground(bool mShowBackground)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SubMenuBackground.Widget_SubMenuBackground_C.Set Show Background");
		
		UWidget_SubMenuBackground_C_SetShowBackground_Params params {};
		params.mShowBackground = mShowBackground;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_SubMenuBackground.Widget_SubMenuBackground_C.OnSpawnAnim
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPanelWidget*                                OverwritePanelWidget                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_SubMenuBackground_C::OnSpawnAnim(class UPanelWidget* OverwritePanelWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SubMenuBackground.Widget_SubMenuBackground_C.OnSpawnAnim");
		
		UWidget_SubMenuBackground_C_OnSpawnAnim_Params params {};
		params.OverwritePanelWidget = OverwritePanelWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_SubMenuBackground.Widget_SubMenuBackground_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_SubMenuBackground_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SubMenuBackground.Widget_SubMenuBackground_C.Construct");
		
		UWidget_SubMenuBackground_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_SubMenuBackground.Widget_SubMenuBackground_C.PlayListSpawnAnim
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPanelWidget*                                OverwritePanelWidget                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_SubMenuBackground_C::PlayListSpawnAnim(class UPanelWidget* OverwritePanelWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SubMenuBackground.Widget_SubMenuBackground_C.PlayListSpawnAnim");
		
		UWidget_SubMenuBackground_C_PlayListSpawnAnim_Params params {};
		params.OverwritePanelWidget = OverwritePanelWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_SubMenuBackground.Widget_SubMenuBackground_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_SubMenuBackground_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SubMenuBackground.Widget_SubMenuBackground_C.PreConstruct");
		
		UWidget_SubMenuBackground_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_SubMenuBackground.Widget_SubMenuBackground_C.OnListSpawnAnim
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_SubMenuBackground_C::OnListSpawnAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SubMenuBackground.Widget_SubMenuBackground_C.OnListSpawnAnim");
		
		UWidget_SubMenuBackground_C_OnListSpawnAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_SubMenuBackground.Widget_SubMenuBackground_C.PlayBackgroundSpawnAnim
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_SubMenuBackground_C::PlayBackgroundSpawnAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SubMenuBackground.Widget_SubMenuBackground_C.PlayBackgroundSpawnAnim");
		
		UWidget_SubMenuBackground_C_PlayBackgroundSpawnAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_SubMenuBackground.Widget_SubMenuBackground_C.ExecuteUbergraph_Widget_SubMenuBackground
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_SubMenuBackground_C::ExecuteUbergraph_Widget_SubMenuBackground(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SubMenuBackground.Widget_SubMenuBackground_C.ExecuteUbergraph_Widget_SubMenuBackground");
		
		UWidget_SubMenuBackground_C_ExecuteUbergraph_Widget_SubMenuBackground_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_SubMenuBackground_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_SubMenuBackground_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_SubMenuBackground.Widget_SubMenuBackground_C");
		return ptr;
	}

}


