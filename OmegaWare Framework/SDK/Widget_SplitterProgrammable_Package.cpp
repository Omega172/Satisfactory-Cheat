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
	 * 		Name   -> Function Widget_SplitterProgrammable.Widget_SplitterProgrammable_C.UpdateAddButtonsVisiblity
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_SplitterProgrammable_C::UpdateAddButtonsVisiblity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SplitterProgrammable.Widget_SplitterProgrammable_C.UpdateAddButtonsVisiblity");
		
		UWidget_SplitterProgrammable_C_UpdateAddButtonsVisiblity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SplitterProgrammable.Widget_SplitterProgrammable_C.GetRuleWidgets
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TArray<class UBPW_SmartSplitterRule_C*>            Array                                                      (Parm, OutParm, ContainsInstancedReference)
	 */
	void UWidget_SplitterProgrammable_C::GetRuleWidgets(TArray<class UBPW_SmartSplitterRule_C*>* Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SplitterProgrammable.Widget_SplitterProgrammable_C.GetRuleWidgets");
		
		UWidget_SplitterProgrammable_C_GetRuleWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SplitterProgrammable.Widget_SplitterProgrammable_C.SaveRules
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_SplitterProgrammable_C::SaveRules()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SplitterProgrammable.Widget_SplitterProgrammable_C.SaveRules");
		
		UWidget_SplitterProgrammable_C_SaveRules_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SplitterProgrammable.Widget_SplitterProgrammable_C.GenerateRulesArray
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FSplitterSortRule>                   Rules                                                      (Parm, OutParm)
	 */
	void UWidget_SplitterProgrammable_C::GenerateRulesArray(TArray<struct FSplitterSortRule>* Rules)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SplitterProgrammable.Widget_SplitterProgrammable_C.GenerateRulesArray");
		
		UWidget_SplitterProgrammable_C_GenerateRulesArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Rules != nullptr)
			*Rules = params.Rules;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SplitterProgrammable.Widget_SplitterProgrammable_C.SetupDescriptors
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_SplitterProgrammable_C::SetupDescriptors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SplitterProgrammable.Widget_SplitterProgrammable_C.SetupDescriptors");
		
		UWidget_SplitterProgrammable_C_SetupDescriptors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SplitterProgrammable.Widget_SplitterProgrammable_C.CheckIfSmartSplitter
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_SplitterProgrammable_C::CheckIfSmartSplitter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SplitterProgrammable.Widget_SplitterProgrammable_C.CheckIfSmartSplitter");
		
		UWidget_SplitterProgrammable_C_CheckIfSmartSplitter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SplitterProgrammable.Widget_SplitterProgrammable_C.PopulateRules
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FSplitterSortRule>                   Rules                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWidget_SplitterProgrammable_C::PopulateRules(TArray<struct FSplitterSortRule>* Rules)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SplitterProgrammable.Widget_SplitterProgrammable_C.PopulateRules");
		
		UWidget_SplitterProgrammable_C_PopulateRules_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Rules != nullptr)
			*Rules = params.Rules;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SplitterProgrammable.Widget_SplitterProgrammable_C.InitWindow
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_SplitterProgrammable_C::InitWindow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SplitterProgrammable.Widget_SplitterProgrammable_C.InitWindow");
		
		UWidget_SplitterProgrammable_C_InitWindow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SplitterProgrammable.Widget_SplitterProgrammable_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_SplitterProgrammable_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SplitterProgrammable.Widget_SplitterProgrammable_C.Construct");
		
		UWidget_SplitterProgrammable_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SplitterProgrammable.Widget_SplitterProgrammable_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_SplitterProgrammable_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SplitterProgrammable.Widget_SplitterProgrammable_C.PreConstruct");
		
		UWidget_SplitterProgrammable_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SplitterProgrammable.Widget_SplitterProgrammable_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_SplitterProgrammable_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SplitterProgrammable.Widget_SplitterProgrammable_C.Destruct");
		
		UWidget_SplitterProgrammable_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SplitterProgrammable.Widget_SplitterProgrammable_C.OnSortRulesChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_SplitterProgrammable_C::OnSortRulesChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SplitterProgrammable.Widget_SplitterProgrammable_C.OnSortRulesChanged");
		
		UWidget_SplitterProgrammable_C_OnSortRulesChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SplitterProgrammable.Widget_SplitterProgrammable_C.OnFactoryClipboardPasted
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     interactObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UFGFactoryClipboardSettings*                 factoryClipboardSettings                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_SplitterProgrammable_C::OnFactoryClipboardPasted(class UObject* interactObject, class UFGFactoryClipboardSettings* factoryClipboardSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SplitterProgrammable.Widget_SplitterProgrammable_C.OnFactoryClipboardPasted");
		
		UWidget_SplitterProgrammable_C_OnFactoryClipboardPasted_Params params {};
		params.interactObject = interactObject;
		params.factoryClipboardSettings = factoryClipboardSettings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SplitterProgrammable.Widget_SplitterProgrammable_C.OnFactoryClipboardCopied
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     interactObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UFGFactoryClipboardSettings*                 factoryClipboardSettings                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_SplitterProgrammable_C::OnFactoryClipboardCopied(class UObject* interactObject, class UFGFactoryClipboardSettings* factoryClipboardSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SplitterProgrammable.Widget_SplitterProgrammable_C.OnFactoryClipboardCopied");
		
		UWidget_SplitterProgrammable_C_OnFactoryClipboardCopied_Params params {};
		params.interactObject = interactObject;
		params.factoryClipboardSettings = factoryClipboardSettings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SplitterProgrammable.Widget_SplitterProgrammable_C.BndEvt__Widget_SplitterProgrammable_mSmartRight_K2Node_ComponentBoundEvent_0_OnListChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_SplitterProgrammable_C::BndEvt__Widget_SplitterProgrammable_mSmartRight_K2Node_ComponentBoundEvent_0_OnListChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SplitterProgrammable.Widget_SplitterProgrammable_C.BndEvt__Widget_SplitterProgrammable_mSmartRight_K2Node_ComponentBoundEvent_0_OnListChanged__DelegateSignature");
		
		UWidget_SplitterProgrammable_C_BndEvt__Widget_SplitterProgrammable_mSmartRight_K2Node_ComponentBoundEvent_0_OnListChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SplitterProgrammable.Widget_SplitterProgrammable_C.BndEvt__Widget_SplitterProgrammable_mSmartCenter_K2Node_ComponentBoundEvent_1_OnListChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_SplitterProgrammable_C::BndEvt__Widget_SplitterProgrammable_mSmartCenter_K2Node_ComponentBoundEvent_1_OnListChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SplitterProgrammable.Widget_SplitterProgrammable_C.BndEvt__Widget_SplitterProgrammable_mSmartCenter_K2Node_ComponentBoundEvent_1_OnListChanged__DelegateSignature");
		
		UWidget_SplitterProgrammable_C_BndEvt__Widget_SplitterProgrammable_mSmartCenter_K2Node_ComponentBoundEvent_1_OnListChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SplitterProgrammable.Widget_SplitterProgrammable_C.BndEvt__Widget_SplitterProgrammable_mSmartLeft_K2Node_ComponentBoundEvent_2_OnListChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_SplitterProgrammable_C::BndEvt__Widget_SplitterProgrammable_mSmartLeft_K2Node_ComponentBoundEvent_2_OnListChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SplitterProgrammable.Widget_SplitterProgrammable_C.BndEvt__Widget_SplitterProgrammable_mSmartLeft_K2Node_ComponentBoundEvent_2_OnListChanged__DelegateSignature");
		
		UWidget_SplitterProgrammable_C_BndEvt__Widget_SplitterProgrammable_mSmartLeft_K2Node_ComponentBoundEvent_2_OnListChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SplitterProgrammable.Widget_SplitterProgrammable_C.ExecuteUbergraph_Widget_SplitterProgrammable
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_SplitterProgrammable_C::ExecuteUbergraph_Widget_SplitterProgrammable(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SplitterProgrammable.Widget_SplitterProgrammable_C.ExecuteUbergraph_Widget_SplitterProgrammable");
		
		UWidget_SplitterProgrammable_C_ExecuteUbergraph_Widget_SplitterProgrammable_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_SplitterProgrammable_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_SplitterProgrammable_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_SplitterProgrammable.Widget_SplitterProgrammable_C");
		return ptr;
	}

}


