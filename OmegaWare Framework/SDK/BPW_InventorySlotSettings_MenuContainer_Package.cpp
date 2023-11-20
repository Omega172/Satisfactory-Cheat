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
	 * 		Name   -> Function BPW_InventorySlotSettings_MenuContainer.BPW_InventorySlotSettings_MenuContainer_C.SetName
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        mName                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_InventorySlotSettings_MenuContainer_C::SetName(const class FText& mName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_InventorySlotSettings_MenuContainer.BPW_InventorySlotSettings_MenuContainer_C.SetName");
		
		UBPW_InventorySlotSettings_MenuContainer_C_SetName_Params params {};
		params.mName = mName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_InventorySlotSettings_MenuContainer.BPW_InventorySlotSettings_MenuContainer_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_InventorySlotSettings_MenuContainer_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_InventorySlotSettings_MenuContainer.BPW_InventorySlotSettings_MenuContainer_C.PreConstruct");
		
		UBPW_InventorySlotSettings_MenuContainer_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_InventorySlotSettings_MenuContainer.BPW_InventorySlotSettings_MenuContainer_C.BndEvt__BPW_InventorySlotSettings_MenuContainer_mCloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_InventorySlotSettings_MenuContainer_C::BndEvt__BPW_InventorySlotSettings_MenuContainer_mCloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_InventorySlotSettings_MenuContainer.BPW_InventorySlotSettings_MenuContainer_C.BndEvt__BPW_InventorySlotSettings_MenuContainer_mCloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UBPW_InventorySlotSettings_MenuContainer_C_BndEvt__BPW_InventorySlotSettings_MenuContainer_mCloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_InventorySlotSettings_MenuContainer.BPW_InventorySlotSettings_MenuContainer_C.ExecuteUbergraph_BPW_InventorySlotSettings_MenuContainer
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_InventorySlotSettings_MenuContainer_C::ExecuteUbergraph_BPW_InventorySlotSettings_MenuContainer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_InventorySlotSettings_MenuContainer.BPW_InventorySlotSettings_MenuContainer_C.ExecuteUbergraph_BPW_InventorySlotSettings_MenuContainer");
		
		UBPW_InventorySlotSettings_MenuContainer_C_ExecuteUbergraph_BPW_InventorySlotSettings_MenuContainer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_InventorySlotSettings_MenuContainer.BPW_InventorySlotSettings_MenuContainer_C.OnCloseClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_InventorySlotSettings_MenuContainer_C::OnCloseClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_InventorySlotSettings_MenuContainer.BPW_InventorySlotSettings_MenuContainer_C.OnCloseClicked__DelegateSignature");
		
		UBPW_InventorySlotSettings_MenuContainer_C_OnCloseClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_InventorySlotSettings_MenuContainer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_InventorySlotSettings_MenuContainer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_InventorySlotSettings_MenuContainer.BPW_InventorySlotSettings_MenuContainer_C");
		return ptr;
	}

}


