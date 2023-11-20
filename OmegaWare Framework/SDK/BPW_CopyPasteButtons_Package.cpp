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
	 * 		Name   -> Function BPW_CopyPasteButtons.BPW_CopyPasteButtons_C.SetOverwriteHeight
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               mOverwriteHeight                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_CopyPasteButtons_C::SetOverwriteHeight(bool mOverwriteHeight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_CopyPasteButtons.BPW_CopyPasteButtons_C.SetOverwriteHeight");
		
		UBPW_CopyPasteButtons_C_SetOverwriteHeight_Params params {};
		params.mOverwriteHeight = mOverwriteHeight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_CopyPasteButtons.BPW_CopyPasteButtons_C.SetupUseableBaseWidget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget_UseableBase_C*                       UseableBaseWidget                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_CopyPasteButtons_C::SetupUseableBaseWidget(class UWidget_UseableBase_C* UseableBaseWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_CopyPasteButtons.BPW_CopyPasteButtons_C.SetupUseableBaseWidget");
		
		UBPW_CopyPasteButtons_C_SetupUseableBaseWidget_Params params {};
		params.UseableBaseWidget = UseableBaseWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_CopyPasteButtons.BPW_CopyPasteButtons_C.BndEvt__mCopyButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_CopyPasteButtons_C::BndEvt__mCopyButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_CopyPasteButtons.BPW_CopyPasteButtons_C.BndEvt__mCopyButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UBPW_CopyPasteButtons_C_BndEvt__mCopyButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_CopyPasteButtons.BPW_CopyPasteButtons_C.BndEvt__mPasteButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_CopyPasteButtons_C::BndEvt__mPasteButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_CopyPasteButtons.BPW_CopyPasteButtons_C.BndEvt__mPasteButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UBPW_CopyPasteButtons_C_BndEvt__mPasteButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_CopyPasteButtons.BPW_CopyPasteButtons_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_CopyPasteButtons_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_CopyPasteButtons.BPW_CopyPasteButtons_C.PreConstruct");
		
		UBPW_CopyPasteButtons_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_CopyPasteButtons.BPW_CopyPasteButtons_C.ExecuteUbergraph_BPW_CopyPasteButtons
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_CopyPasteButtons_C::ExecuteUbergraph_BPW_CopyPasteButtons(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_CopyPasteButtons.BPW_CopyPasteButtons_C.ExecuteUbergraph_BPW_CopyPasteButtons");
		
		UBPW_CopyPasteButtons_C_ExecuteUbergraph_BPW_CopyPasteButtons_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_CopyPasteButtons_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_CopyPasteButtons_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_CopyPasteButtons.BPW_CopyPasteButtons_C");
		return ptr;
	}

}


