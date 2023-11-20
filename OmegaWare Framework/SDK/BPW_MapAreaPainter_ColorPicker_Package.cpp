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
	 * 		Name   -> Function BPW_MapAreaPainter_ColorPicker.BPW_MapAreaPainter_ColorPicker_C.NormalizedToBrushSize
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ToNormalized                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	double UBPW_MapAreaPainter_ColorPicker_C::NormalizedToBrushSize(double Value, bool ToNormalized)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MapAreaPainter_ColorPicker.BPW_MapAreaPainter_ColorPicker_C.NormalizedToBrushSize");
		
		UBPW_MapAreaPainter_ColorPicker_C_NormalizedToBrushSize_Params params {};
		params.Value = Value;
		params.ToNormalized = ToNormalized;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MapAreaPainter_ColorPicker.BPW_MapAreaPainter_ColorPicker_C.Set Slider Visibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_MapAreaPainter_ColorPicker_C::SetSliderVisibility(bool Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MapAreaPainter_ColorPicker.BPW_MapAreaPainter_ColorPicker_C.Set Slider Visibility");
		
		UBPW_MapAreaPainter_ColorPicker_C_SetSliderVisibility_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MapAreaPainter_ColorPicker.BPW_MapAreaPainter_ColorPicker_C.DeselectAll
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_MapAreaPainter_ColorPicker_C::DeselectAll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MapAreaPainter_ColorPicker.BPW_MapAreaPainter_ColorPicker_C.DeselectAll");
		
		UBPW_MapAreaPainter_ColorPicker_C_DeselectAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MapAreaPainter_ColorPicker.BPW_MapAreaPainter_ColorPicker_C.OnSwatchButtonClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBPW_MapAreaPainter_Swatch_C*                Instigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_MapAreaPainter_ColorPicker_C::OnSwatchButtonClicked(class UBPW_MapAreaPainter_Swatch_C* Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MapAreaPainter_ColorPicker.BPW_MapAreaPainter_ColorPicker_C.OnSwatchButtonClicked");
		
		UBPW_MapAreaPainter_ColorPicker_C_OnSwatchButtonClicked_Params params {};
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MapAreaPainter_ColorPicker.BPW_MapAreaPainter_ColorPicker_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_MapAreaPainter_ColorPicker_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MapAreaPainter_ColorPicker.BPW_MapAreaPainter_ColorPicker_C.PreConstruct");
		
		UBPW_MapAreaPainter_ColorPicker_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MapAreaPainter_ColorPicker.BPW_MapAreaPainter_ColorPicker_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_MapAreaPainter_ColorPicker_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MapAreaPainter_ColorPicker.BPW_MapAreaPainter_ColorPicker_C.Construct");
		
		UBPW_MapAreaPainter_ColorPicker_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MapAreaPainter_ColorPicker.BPW_MapAreaPainter_ColorPicker_C.BndEvt__BPW_MapAreaPainter_ColorPicker_Slider_34_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_MapAreaPainter_ColorPicker_C::BndEvt__BPW_MapAreaPainter_ColorPicker_Slider_34_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MapAreaPainter_ColorPicker.BPW_MapAreaPainter_ColorPicker_C.BndEvt__BPW_MapAreaPainter_ColorPicker_Slider_34_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature");
		
		UBPW_MapAreaPainter_ColorPicker_C_BndEvt__BPW_MapAreaPainter_ColorPicker_Slider_34_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MapAreaPainter_ColorPicker.BPW_MapAreaPainter_ColorPicker_C.ExecuteUbergraph_BPW_MapAreaPainter_ColorPicker
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_MapAreaPainter_ColorPicker_C::ExecuteUbergraph_BPW_MapAreaPainter_ColorPicker(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MapAreaPainter_ColorPicker.BPW_MapAreaPainter_ColorPicker_C.ExecuteUbergraph_BPW_MapAreaPainter_ColorPicker");
		
		UBPW_MapAreaPainter_ColorPicker_C_ExecuteUbergraph_BPW_MapAreaPainter_ColorPicker_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MapAreaPainter_ColorPicker.BPW_MapAreaPainter_ColorPicker_C.OnBrushSizeChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Size                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_MapAreaPainter_ColorPicker_C::OnBrushSizeChanged__DelegateSignature(double Size)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MapAreaPainter_ColorPicker.BPW_MapAreaPainter_ColorPicker_C.OnBrushSizeChanged__DelegateSignature");
		
		UBPW_MapAreaPainter_ColorPicker_C_OnBrushSizeChanged__DelegateSignature_Params params {};
		params.Size = Size;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MapAreaPainter_ColorPicker.BPW_MapAreaPainter_ColorPicker_C.OnSwatchDeselected__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_MapAreaPainter_ColorPicker_C::OnSwatchDeselected__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MapAreaPainter_ColorPicker.BPW_MapAreaPainter_ColorPicker_C.OnSwatchDeselected__DelegateSignature");
		
		UBPW_MapAreaPainter_ColorPicker_C_OnSwatchDeselected__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MapAreaPainter_ColorPicker.BPW_MapAreaPainter_ColorPicker_C.OnSwatchClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_MapAreaPainter_ColorPicker_C::OnSwatchClicked__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MapAreaPainter_ColorPicker.BPW_MapAreaPainter_ColorPicker_C.OnSwatchClicked__DelegateSignature");
		
		UBPW_MapAreaPainter_ColorPicker_C_OnSwatchClicked__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_MapAreaPainter_ColorPicker_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_MapAreaPainter_ColorPicker_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_MapAreaPainter_ColorPicker.BPW_MapAreaPainter_ColorPicker_C");
		return ptr;
	}

}


