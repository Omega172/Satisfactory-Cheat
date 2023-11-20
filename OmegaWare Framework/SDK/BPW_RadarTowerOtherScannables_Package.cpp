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
	 * 		Name   -> Function BPW_RadarTowerOtherScannables.BPW_RadarTowerOtherScannables_C.OnMouseButtonDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UBPW_RadarTowerOtherScannables_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_RadarTowerOtherScannables.BPW_RadarTowerOtherScannables_C.OnMouseButtonDown");
		
		UBPW_RadarTowerOtherScannables_C_OnMouseButtonDown_Params params {};
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
	 * 		Name   -> Function BPW_RadarTowerOtherScannables.BPW_RadarTowerOtherScannables_C.CreateRightClickMenu
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class UWidget* UBPW_RadarTowerOtherScannables_C::CreateRightClickMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_RadarTowerOtherScannables.BPW_RadarTowerOtherScannables_C.CreateRightClickMenu");
		
		UBPW_RadarTowerOtherScannables_C_CreateRightClickMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_RadarTowerOtherScannables.BPW_RadarTowerOtherScannables_C.SetDescriptor
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      mDescriptor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_RadarTowerOtherScannables_C::SetDescriptor(class UClass* mDescriptor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_RadarTowerOtherScannables.BPW_RadarTowerOtherScannables_C.SetDescriptor");
		
		UBPW_RadarTowerOtherScannables_C_SetDescriptor_Params params {};
		params.mDescriptor = mDescriptor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_RadarTowerOtherScannables.BPW_RadarTowerOtherScannables_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_RadarTowerOtherScannables_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_RadarTowerOtherScannables.BPW_RadarTowerOtherScannables_C.PreConstruct");
		
		UBPW_RadarTowerOtherScannables_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_RadarTowerOtherScannables.BPW_RadarTowerOtherScannables_C.BndEvt__BPW_RadarTowerOtherScannables_mHoverButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_RadarTowerOtherScannables_C::BndEvt__BPW_RadarTowerOtherScannables_mHoverButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_RadarTowerOtherScannables.BPW_RadarTowerOtherScannables_C.BndEvt__BPW_RadarTowerOtherScannables_mHoverButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UBPW_RadarTowerOtherScannables_C_BndEvt__BPW_RadarTowerOtherScannables_mHoverButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_RadarTowerOtherScannables.BPW_RadarTowerOtherScannables_C.BndEvt__BPW_RadarTowerOtherScannables_mRightClickMenu_K2Node_ComponentBoundEvent_2_OnMenuOpenChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsOpen                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_RadarTowerOtherScannables_C::BndEvt__BPW_RadarTowerOtherScannables_mRightClickMenu_K2Node_ComponentBoundEvent_2_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_RadarTowerOtherScannables.BPW_RadarTowerOtherScannables_C.BndEvt__BPW_RadarTowerOtherScannables_mRightClickMenu_K2Node_ComponentBoundEvent_2_OnMenuOpenChangedEvent__DelegateSignature");
		
		UBPW_RadarTowerOtherScannables_C_BndEvt__BPW_RadarTowerOtherScannables_mRightClickMenu_K2Node_ComponentBoundEvent_2_OnMenuOpenChangedEvent__DelegateSignature_Params params {};
		params.bIsOpen = bIsOpen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_RadarTowerOtherScannables.BPW_RadarTowerOtherScannables_C.ExecuteUbergraph_BPW_RadarTowerOtherScannables
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_RadarTowerOtherScannables_C::ExecuteUbergraph_BPW_RadarTowerOtherScannables(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_RadarTowerOtherScannables.BPW_RadarTowerOtherScannables_C.ExecuteUbergraph_BPW_RadarTowerOtherScannables");
		
		UBPW_RadarTowerOtherScannables_C_ExecuteUbergraph_BPW_RadarTowerOtherScannables_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_RadarTowerOtherScannables_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_RadarTowerOtherScannables_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_RadarTowerOtherScannables.BPW_RadarTowerOtherScannables_C");
		return ptr;
	}

}


