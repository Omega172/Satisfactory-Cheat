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
	 * 		Name   -> Function BPW_RadarTowerWeakSignal.BPW_RadarTowerWeakSignal_C.CreateRightClickMenu
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class UWidget* UBPW_RadarTowerWeakSignal_C::CreateRightClickMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_RadarTowerWeakSignal.BPW_RadarTowerWeakSignal_C.CreateRightClickMenu");
		
		UBPW_RadarTowerWeakSignal_C_CreateRightClickMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_RadarTowerWeakSignal.BPW_RadarTowerWeakSignal_C.OnMouseButtonDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UBPW_RadarTowerWeakSignal_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_RadarTowerWeakSignal.BPW_RadarTowerWeakSignal_C.OnMouseButtonDown");
		
		UBPW_RadarTowerWeakSignal_C_OnMouseButtonDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_RadarTowerWeakSignal.BPW_RadarTowerWeakSignal_C.SetScanData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FScanObjectPair                             mScanData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBPW_RadarTowerWeakSignal_C::SetScanData(const struct FScanObjectPair& mScanData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_RadarTowerWeakSignal.BPW_RadarTowerWeakSignal_C.SetScanData");
		
		UBPW_RadarTowerWeakSignal_C_SetScanData_Params params {};
		params.mScanData = mScanData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_RadarTowerWeakSignal.BPW_RadarTowerWeakSignal_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_RadarTowerWeakSignal_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_RadarTowerWeakSignal.BPW_RadarTowerWeakSignal_C.PreConstruct");
		
		UBPW_RadarTowerWeakSignal_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_RadarTowerWeakSignal.BPW_RadarTowerWeakSignal_C.BndEvt__BPW_RadarTowerWeakSignal_mTooltipMenu_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsOpen                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_RadarTowerWeakSignal_C::BndEvt__BPW_RadarTowerWeakSignal_mTooltipMenu_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_RadarTowerWeakSignal.BPW_RadarTowerWeakSignal_C.BndEvt__BPW_RadarTowerWeakSignal_mTooltipMenu_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature");
		
		UBPW_RadarTowerWeakSignal_C_BndEvt__BPW_RadarTowerWeakSignal_mTooltipMenu_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature_Params params {};
		params.bIsOpen = bIsOpen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_RadarTowerWeakSignal.BPW_RadarTowerWeakSignal_C.BndEvt__BPW_RadarTowerWeakSignal_mHoverButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_RadarTowerWeakSignal_C::BndEvt__BPW_RadarTowerWeakSignal_mHoverButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_RadarTowerWeakSignal.BPW_RadarTowerWeakSignal_C.BndEvt__BPW_RadarTowerWeakSignal_mHoverButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UBPW_RadarTowerWeakSignal_C_BndEvt__BPW_RadarTowerWeakSignal_mHoverButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_RadarTowerWeakSignal.BPW_RadarTowerWeakSignal_C.BndEvt__BPW_RadarTowerWeakSignal_mHoverButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_RadarTowerWeakSignal_C::BndEvt__BPW_RadarTowerWeakSignal_mHoverButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_RadarTowerWeakSignal.BPW_RadarTowerWeakSignal_C.BndEvt__BPW_RadarTowerWeakSignal_mHoverButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UBPW_RadarTowerWeakSignal_C_BndEvt__BPW_RadarTowerWeakSignal_mHoverButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_RadarTowerWeakSignal.BPW_RadarTowerWeakSignal_C.ExecuteUbergraph_BPW_RadarTowerWeakSignal
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_RadarTowerWeakSignal_C::ExecuteUbergraph_BPW_RadarTowerWeakSignal(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_RadarTowerWeakSignal.BPW_RadarTowerWeakSignal_C.ExecuteUbergraph_BPW_RadarTowerWeakSignal");
		
		UBPW_RadarTowerWeakSignal_C_ExecuteUbergraph_BPW_RadarTowerWeakSignal_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_RadarTowerWeakSignal_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_RadarTowerWeakSignal_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_RadarTowerWeakSignal.BPW_RadarTowerWeakSignal_C");
		return ptr;
	}

}


