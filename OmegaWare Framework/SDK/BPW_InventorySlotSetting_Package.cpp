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
	 * 		Name   -> Function BPW_InventorySlotSetting.BPW_InventorySlotSetting_C.SetupSettingsForSlot
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGInventoryComponent*                       mInventoryComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            mSlotIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      mItemDescriptor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_InventorySlotSetting_C::SetupSettingsForSlot(class UFGInventoryComponent* mInventoryComponent, int32_t mSlotIndex, class UClass* mItemDescriptor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_InventorySlotSetting.BPW_InventorySlotSetting_C.SetupSettingsForSlot");
		
		UBPW_InventorySlotSetting_C_SetupSettingsForSlot_Params params {};
		params.mInventoryComponent = mInventoryComponent;
		params.mSlotIndex = mSlotIndex;
		params.mItemDescriptor = mItemDescriptor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_InventorySlotSetting.BPW_InventorySlotSetting_C.CloseMenuAnchor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_InventorySlotSetting_C::CloseMenuAnchor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_InventorySlotSetting.BPW_InventorySlotSetting_C.CloseMenuAnchor");
		
		UBPW_InventorySlotSetting_C_CloseMenuAnchor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_InventorySlotSetting.BPW_InventorySlotSetting_C.OnGetUserMenuContent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class UUserWidget* UBPW_InventorySlotSetting_C::OnGetUserMenuContent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_InventorySlotSetting.BPW_InventorySlotSetting_C.OnGetUserMenuContent");
		
		UBPW_InventorySlotSetting_C_OnGetUserMenuContent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_InventorySlotSetting.BPW_InventorySlotSetting_C.BndEvt__BPW_InventorySlotSetting_mButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_InventorySlotSetting_C::BndEvt__BPW_InventorySlotSetting_mButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_InventorySlotSetting.BPW_InventorySlotSetting_C.BndEvt__BPW_InventorySlotSetting_mButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UBPW_InventorySlotSetting_C_BndEvt__BPW_InventorySlotSetting_mButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_InventorySlotSetting.BPW_InventorySlotSetting_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_InventorySlotSetting_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_InventorySlotSetting.BPW_InventorySlotSetting_C.Construct");
		
		UBPW_InventorySlotSetting_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_InventorySlotSetting.BPW_InventorySlotSetting_C.ExecuteUbergraph_BPW_InventorySlotSetting
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_InventorySlotSetting_C::ExecuteUbergraph_BPW_InventorySlotSetting(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_InventorySlotSetting.BPW_InventorySlotSetting_C.ExecuteUbergraph_BPW_InventorySlotSetting");
		
		UBPW_InventorySlotSetting_C_ExecuteUbergraph_BPW_InventorySlotSetting_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_InventorySlotSetting_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_InventorySlotSetting_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_InventorySlotSetting.BPW_InventorySlotSetting_C");
		return ptr;
	}

}


