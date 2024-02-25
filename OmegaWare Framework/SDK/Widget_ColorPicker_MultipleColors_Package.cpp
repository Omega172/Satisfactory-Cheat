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
	 * 		Name   -> Function Widget_ColorPicker_MultipleColors.Widget_ColorPicker_MultipleColors_C.SetUseGlossiness
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               UseGlossiness                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ColorPicker_MultipleColors_C::SetUseGlossiness(bool UseGlossiness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ColorPicker_MultipleColors.Widget_ColorPicker_MultipleColors_C.SetUseGlossiness");
		
		UWidget_ColorPicker_MultipleColors_C_SetUseGlossiness_Params params {};
		params.UseGlossiness = UseGlossiness;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_ColorPicker_MultipleColors.Widget_ColorPicker_MultipleColors_C.SetGlossiness
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Glossiness                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ColorPicker_MultipleColors_C::SetGlossiness(int32_t Glossiness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ColorPicker_MultipleColors.Widget_ColorPicker_MultipleColors_C.SetGlossiness");
		
		UWidget_ColorPicker_MultipleColors_C_SetGlossiness_Params params {};
		params.Glossiness = Glossiness;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_ColorPicker_MultipleColors.Widget_ColorPicker_MultipleColors_C.OnGlossinessChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            mGlossinessIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ColorPicker_MultipleColors_C::OnGlossinessChanged(int32_t mGlossinessIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ColorPicker_MultipleColors.Widget_ColorPicker_MultipleColors_C.OnGlossinessChanged");
		
		UWidget_ColorPicker_MultipleColors_C_OnGlossinessChanged_Params params {};
		params.mGlossinessIndex = mGlossinessIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_ColorPicker_MultipleColors.Widget_ColorPicker_MultipleColors_C.ClosePresetSaver
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ColorPicker_MultipleColors_C::ClosePresetSaver()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ColorPicker_MultipleColors.Widget_ColorPicker_MultipleColors_C.ClosePresetSaver");
		
		UWidget_ColorPicker_MultipleColors_C_ClosePresetSaver_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_ColorPicker_MultipleColors.Widget_ColorPicker_MultipleColors_C.OpenPresetSaver
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBPW_ColorPickerPreset_Save_C*               SaveWidget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ColorPicker_MultipleColors_C::OpenPresetSaver(class UBPW_ColorPickerPreset_Save_C* SaveWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ColorPicker_MultipleColors.Widget_ColorPicker_MultipleColors_C.OpenPresetSaver");
		
		UWidget_ColorPicker_MultipleColors_C_OpenPresetSaver_Params params {};
		params.SaveWidget = SaveWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_ColorPicker_MultipleColors.Widget_ColorPicker_MultipleColors_C.GetCurrentColorsFromModules
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TArray<struct FLinearColor>                        ModuleColors                                               (Parm, OutParm)
	 */
	void UWidget_ColorPicker_MultipleColors_C::GetCurrentColorsFromModules(TArray<struct FLinearColor>* ModuleColors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ColorPicker_MultipleColors.Widget_ColorPicker_MultipleColors_C.GetCurrentColorsFromModules");
		
		UWidget_ColorPicker_MultipleColors_C_GetCurrentColorsFromModules_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModuleColors != nullptr)
			*ModuleColors = params.ModuleColors;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_ColorPicker_MultipleColors.Widget_ColorPicker_MultipleColors_C.SetColors
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FLinearColor>                        Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWidget_ColorPicker_MultipleColors_C::SetColors(TArray<struct FLinearColor>* Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ColorPicker_MultipleColors.Widget_ColorPicker_MultipleColors_C.SetColors");
		
		UWidget_ColorPicker_MultipleColors_C_SetColors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Color != nullptr)
			*Color = params.Color;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_ColorPicker_MultipleColors.Widget_ColorPicker_MultipleColors_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ColorPicker_MultipleColors_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ColorPicker_MultipleColors.Widget_ColorPicker_MultipleColors_C.PreConstruct");
		
		UWidget_ColorPicker_MultipleColors_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_ColorPicker_MultipleColors.Widget_ColorPicker_MultipleColors_C.BndEvt__mEditPresetAccept_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_ColorPicker_MultipleColors_C::BndEvt__mEditPresetAccept_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ColorPicker_MultipleColors.Widget_ColorPicker_MultipleColors_C.BndEvt__mEditPresetAccept_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UWidget_ColorPicker_MultipleColors_C_BndEvt__mEditPresetAccept_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_ColorPicker_MultipleColors.Widget_ColorPicker_MultipleColors_C.BndEvt__mEditPresetCanel_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_ColorPicker_MultipleColors_C::BndEvt__mEditPresetCanel_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ColorPicker_MultipleColors.Widget_ColorPicker_MultipleColors_C.BndEvt__mEditPresetCanel_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UWidget_ColorPicker_MultipleColors_C_BndEvt__mEditPresetCanel_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_ColorPicker_MultipleColors.Widget_ColorPicker_MultipleColors_C.ForceClose
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ColorPicker_MultipleColors_C::ForceClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ColorPicker_MultipleColors.Widget_ColorPicker_MultipleColors_C.ForceClose");
		
		UWidget_ColorPicker_MultipleColors_C_ForceClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_ColorPicker_MultipleColors.Widget_ColorPicker_MultipleColors_C.BndEvt__Widget_ColorPicker_MultipleColors_BPW_StandardButton_Switch_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_ColorPicker_MultipleColors_C::BndEvt__Widget_ColorPicker_MultipleColors_BPW_StandardButton_Switch_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ColorPicker_MultipleColors.Widget_ColorPicker_MultipleColors_C.BndEvt__Widget_ColorPicker_MultipleColors_BPW_StandardButton_Switch_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");
		
		UWidget_ColorPicker_MultipleColors_C_BndEvt__Widget_ColorPicker_MultipleColors_BPW_StandardButton_Switch_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_ColorPicker_MultipleColors.Widget_ColorPicker_MultipleColors_C.BndEvt__Widget_ColorPicker_MultipleColors_BPW_StandardButton_Switch_1_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_ColorPicker_MultipleColors_C::BndEvt__Widget_ColorPicker_MultipleColors_BPW_StandardButton_Switch_1_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ColorPicker_MultipleColors.Widget_ColorPicker_MultipleColors_C.BndEvt__Widget_ColorPicker_MultipleColors_BPW_StandardButton_Switch_1_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");
		
		UWidget_ColorPicker_MultipleColors_C_BndEvt__Widget_ColorPicker_MultipleColors_BPW_StandardButton_Switch_1_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_ColorPicker_MultipleColors.Widget_ColorPicker_MultipleColors_C.BndEvt__Widget_ColorPicker_MultipleColors_BPW_StandardButton_Switch_2_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_ColorPicker_MultipleColors_C::BndEvt__Widget_ColorPicker_MultipleColors_BPW_StandardButton_Switch_2_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ColorPicker_MultipleColors.Widget_ColorPicker_MultipleColors_C.BndEvt__Widget_ColorPicker_MultipleColors_BPW_StandardButton_Switch_2_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");
		
		UWidget_ColorPicker_MultipleColors_C_BndEvt__Widget_ColorPicker_MultipleColors_BPW_StandardButton_Switch_2_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_ColorPicker_MultipleColors.Widget_ColorPicker_MultipleColors_C.ExecuteUbergraph_Widget_ColorPicker_MultipleColors
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ColorPicker_MultipleColors_C::ExecuteUbergraph_Widget_ColorPicker_MultipleColors(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ColorPicker_MultipleColors.Widget_ColorPicker_MultipleColors_C.ExecuteUbergraph_Widget_ColorPicker_MultipleColors");
		
		UWidget_ColorPicker_MultipleColors_C_ExecuteUbergraph_Widget_ColorPicker_MultipleColors_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_ColorPicker_MultipleColors.Widget_ColorPicker_MultipleColors_C.OnCancel__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ColorPicker_MultipleColors_C::OnCancel__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ColorPicker_MultipleColors.Widget_ColorPicker_MultipleColors_C.OnCancel__DelegateSignature");
		
		UWidget_ColorPicker_MultipleColors_C_OnCancel__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_ColorPicker_MultipleColors.Widget_ColorPicker_MultipleColors_C.OnClose__DelegateSignature
	 * 		Flags  -> (Public, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FLinearColor>                        Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWidget_ColorPicker_MultipleColors_C::OnClose__DelegateSignature(TArray<struct FLinearColor>* Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ColorPicker_MultipleColors.Widget_ColorPicker_MultipleColors_C.OnClose__DelegateSignature");
		
		UWidget_ColorPicker_MultipleColors_C_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Color != nullptr)
			*Color = params.Color;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_ColorPicker_MultipleColors_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_ColorPicker_MultipleColors_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_ColorPicker_MultipleColors.Widget_ColorPicker_MultipleColors_C");
		return ptr;
	}

}


