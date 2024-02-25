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
	 * 		Name   -> Function BPW_HUD_ESlot_Content.BPW_HUD_ESlot_Content_C.SetEquipmentObject
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGEquipment*                                mEquipmentObject                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_HUD_ESlot_Content_C::SetEquipmentObject(class AFGEquipment* mEquipmentObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_HUD_ESlot_Content.BPW_HUD_ESlot_Content_C.SetEquipmentObject");
		
		UBPW_HUD_ESlot_Content_C_SetEquipmentObject_Params params {};
		params.mEquipmentObject = mEquipmentObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_HUD_ESlot_Content.BPW_HUD_ESlot_Content_C.GetUseSmallSlotFromOptions
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool UBPW_HUD_ESlot_Content_C::GetUseSmallSlotFromOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_HUD_ESlot_Content.BPW_HUD_ESlot_Content_C.GetUseSmallSlotFromOptions");
		
		UBPW_HUD_ESlot_Content_C_GetUseSmallSlotFromOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_HUD_ESlot_Content.BPW_HUD_ESlot_Content_C.UpdateESlotData
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_HUD_ESlot_Content_C::UpdateESlotData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_HUD_ESlot_Content.BPW_HUD_ESlot_Content_C.UpdateESlotData");
		
		UBPW_HUD_ESlot_Content_C_UpdateESlotData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_HUD_ESlot_Content.BPW_HUD_ESlot_Content_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_HUD_ESlot_Content_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_HUD_ESlot_Content.BPW_HUD_ESlot_Content_C.Construct");
		
		UBPW_HUD_ESlot_Content_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_HUD_ESlot_Content.BPW_HUD_ESlot_Content_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_HUD_ESlot_Content_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_HUD_ESlot_Content.BPW_HUD_ESlot_Content_C.Destruct");
		
		UBPW_HUD_ESlot_Content_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_HUD_ESlot_Content.BPW_HUD_ESlot_Content_C.UpdateSlotSize
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      updatedCvar                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBPW_HUD_ESlot_Content_C::UpdateSlotSize(const class FString& updatedCvar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_HUD_ESlot_Content.BPW_HUD_ESlot_Content_C.UpdateSlotSize");
		
		UBPW_HUD_ESlot_Content_C_UpdateSlotSize_Params params {};
		params.updatedCvar = updatedCvar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_HUD_ESlot_Content.BPW_HUD_ESlot_Content_C.OnSlotSizeChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsSmall                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_HUD_ESlot_Content_C::OnSlotSizeChanged(bool IsSmall)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_HUD_ESlot_Content.BPW_HUD_ESlot_Content_C.OnSlotSizeChanged");
		
		UBPW_HUD_ESlot_Content_C_OnSlotSizeChanged_Params params {};
		params.IsSmall = IsSmall;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_HUD_ESlot_Content.BPW_HUD_ESlot_Content_C.SetOnShowContentBuffer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_HUD_ESlot_Content_C::SetOnShowContentBuffer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_HUD_ESlot_Content.BPW_HUD_ESlot_Content_C.SetOnShowContentBuffer");
		
		UBPW_HUD_ESlot_Content_C_SetOnShowContentBuffer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_HUD_ESlot_Content.BPW_HUD_ESlot_Content_C.SetOnSetWarningVisibilityBuffer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               mIsVisible                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_HUD_ESlot_Content_C::SetOnSetWarningVisibilityBuffer(bool mIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_HUD_ESlot_Content.BPW_HUD_ESlot_Content_C.SetOnSetWarningVisibilityBuffer");
		
		UBPW_HUD_ESlot_Content_C_SetOnSetWarningVisibilityBuffer_Params params {};
		params.mIsVisible = mIsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_HUD_ESlot_Content.BPW_HUD_ESlot_Content_C.ExecuteUbergraph_BPW_HUD_ESlot_Content
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_HUD_ESlot_Content_C::ExecuteUbergraph_BPW_HUD_ESlot_Content(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_HUD_ESlot_Content.BPW_HUD_ESlot_Content_C.ExecuteUbergraph_BPW_HUD_ESlot_Content");
		
		UBPW_HUD_ESlot_Content_C_ExecuteUbergraph_BPW_HUD_ESlot_Content_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_HUD_ESlot_Content.BPW_HUD_ESlot_Content_C.OnSetWarningVisibility__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               mIsVisible                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_HUD_ESlot_Content_C::OnSetWarningVisibility__DelegateSignature(bool mIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_HUD_ESlot_Content.BPW_HUD_ESlot_Content_C.OnSetWarningVisibility__DelegateSignature");
		
		UBPW_HUD_ESlot_Content_C_OnSetWarningVisibility__DelegateSignature_Params params {};
		params.mIsVisible = mIsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_HUD_ESlot_Content.BPW_HUD_ESlot_Content_C.OnShowContent__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_HUD_ESlot_Content_C::OnShowContent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_HUD_ESlot_Content.BPW_HUD_ESlot_Content_C.OnShowContent__DelegateSignature");
		
		UBPW_HUD_ESlot_Content_C_OnShowContent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_HUD_ESlot_Content_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_HUD_ESlot_Content_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_HUD_ESlot_Content.BPW_HUD_ESlot_Content_C");
		return ptr;
	}

}


