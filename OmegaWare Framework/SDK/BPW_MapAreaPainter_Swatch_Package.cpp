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
	 * 		Name   -> Function BPW_MapAreaPainter_Swatch.BPW_MapAreaPainter_Swatch_C.GetUnhoveredColor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FLinearColor UBPW_MapAreaPainter_Swatch_C::GetUnhoveredColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MapAreaPainter_Swatch.BPW_MapAreaPainter_Swatch_C.GetUnhoveredColor");
		
		UBPW_MapAreaPainter_Swatch_C_GetUnhoveredColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MapAreaPainter_Swatch.BPW_MapAreaPainter_Swatch_C.SetIsSelected
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               mIsSelected                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_MapAreaPainter_Swatch_C::SetIsSelected(bool mIsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MapAreaPainter_Swatch.BPW_MapAreaPainter_Swatch_C.SetIsSelected");
		
		UBPW_MapAreaPainter_Swatch_C_SetIsSelected_Params params {};
		params.mIsSelected = mIsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MapAreaPainter_Swatch.BPW_MapAreaPainter_Swatch_C.SetColor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ColorIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_MapAreaPainter_Swatch_C::SetColor(int32_t ColorIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MapAreaPainter_Swatch.BPW_MapAreaPainter_Swatch_C.SetColor");
		
		UBPW_MapAreaPainter_Swatch_C_SetColor_Params params {};
		params.ColorIndex = ColorIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MapAreaPainter_Swatch.BPW_MapAreaPainter_Swatch_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_MapAreaPainter_Swatch_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MapAreaPainter_Swatch.BPW_MapAreaPainter_Swatch_C.PreConstruct");
		
		UBPW_MapAreaPainter_Swatch_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MapAreaPainter_Swatch.BPW_MapAreaPainter_Swatch_C.BndEvt__BPW_MapAreaPainter_Swatch_mButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_MapAreaPainter_Swatch_C::BndEvt__BPW_MapAreaPainter_Swatch_mButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MapAreaPainter_Swatch.BPW_MapAreaPainter_Swatch_C.BndEvt__BPW_MapAreaPainter_Swatch_mButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UBPW_MapAreaPainter_Swatch_C_BndEvt__BPW_MapAreaPainter_Swatch_mButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MapAreaPainter_Swatch.BPW_MapAreaPainter_Swatch_C.BndEvt__BPW_MapAreaPainter_Swatch_mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_MapAreaPainter_Swatch_C::BndEvt__BPW_MapAreaPainter_Swatch_mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MapAreaPainter_Swatch.BPW_MapAreaPainter_Swatch_C.BndEvt__BPW_MapAreaPainter_Swatch_mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UBPW_MapAreaPainter_Swatch_C_BndEvt__BPW_MapAreaPainter_Swatch_mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MapAreaPainter_Swatch.BPW_MapAreaPainter_Swatch_C.BndEvt__BPW_MapAreaPainter_Swatch_mButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_MapAreaPainter_Swatch_C::BndEvt__BPW_MapAreaPainter_Swatch_mButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MapAreaPainter_Swatch.BPW_MapAreaPainter_Swatch_C.BndEvt__BPW_MapAreaPainter_Swatch_mButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UBPW_MapAreaPainter_Swatch_C_BndEvt__BPW_MapAreaPainter_Swatch_mButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MapAreaPainter_Swatch.BPW_MapAreaPainter_Swatch_C.ExecuteUbergraph_BPW_MapAreaPainter_Swatch
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_MapAreaPainter_Swatch_C::ExecuteUbergraph_BPW_MapAreaPainter_Swatch(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MapAreaPainter_Swatch.BPW_MapAreaPainter_Swatch_C.ExecuteUbergraph_BPW_MapAreaPainter_Swatch");
		
		UBPW_MapAreaPainter_Swatch_C_ExecuteUbergraph_BPW_MapAreaPainter_Swatch_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_MapAreaPainter_Swatch.BPW_MapAreaPainter_Swatch_C.OnClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBPW_MapAreaPainter_Swatch_C*                Instigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_MapAreaPainter_Swatch_C::OnClicked__DelegateSignature(class UBPW_MapAreaPainter_Swatch_C* Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_MapAreaPainter_Swatch.BPW_MapAreaPainter_Swatch_C.OnClicked__DelegateSignature");
		
		UBPW_MapAreaPainter_Swatch_C_OnClicked__DelegateSignature_Params params {};
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_MapAreaPainter_Swatch_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_MapAreaPainter_Swatch_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_MapAreaPainter_Swatch.BPW_MapAreaPainter_Swatch_C");
		return ptr;
	}

}


