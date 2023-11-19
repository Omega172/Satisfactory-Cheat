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
	 * 		Name   -> Function BPW_PowerSwitch_PriorityGroup.BPW_PowerSwitch_PriorityGroup_C.MoveRuleToGroup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBPW_PowerSwitch_PriorityRule_C*             PriorityRule                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PowerSwitch_PriorityGroup_C::MoveRuleToGroup(class UBPW_PowerSwitch_PriorityRule_C* PriorityRule)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch_PriorityGroup.BPW_PowerSwitch_PriorityGroup_C.MoveRuleToGroup");
		
		UBPW_PowerSwitch_PriorityGroup_C_MoveRuleToGroup_Params params {};
		params.PriorityRule = PriorityRule;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch_PriorityGroup.BPW_PowerSwitch_PriorityGroup_C.OnSearch
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        SearchText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_PowerSwitch_PriorityGroup_C::OnSearch(const class FText& SearchText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch_PriorityGroup.BPW_PowerSwitch_PriorityGroup_C.OnSearch");
		
		UBPW_PowerSwitch_PriorityGroup_C_OnSearch_Params params {};
		params.SearchText = SearchText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch_PriorityGroup.BPW_PowerSwitch_PriorityGroup_C.ApplyGroupIndexOnRules
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_PowerSwitch_PriorityGroup_C::ApplyGroupIndexOnRules()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch_PriorityGroup.BPW_PowerSwitch_PriorityGroup_C.ApplyGroupIndexOnRules");
		
		UBPW_PowerSwitch_PriorityGroup_C_ApplyGroupIndexOnRules_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch_PriorityGroup.BPW_PowerSwitch_PriorityGroup_C.AddRule
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGPriorityPowerSwitchInfo*                  mPriorityPowerSwitchInfo                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               mIsPartOfCurrentCircuit                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBPW_PowerSwitch_PriorityRule_C*             PowerSwitchPriorityRule                                    (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PowerSwitch_PriorityGroup_C::AddRule(class AFGPriorityPowerSwitchInfo* mPriorityPowerSwitchInfo, bool mIsPartOfCurrentCircuit, class UBPW_PowerSwitch_PriorityRule_C** PowerSwitchPriorityRule)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch_PriorityGroup.BPW_PowerSwitch_PriorityGroup_C.AddRule");
		
		UBPW_PowerSwitch_PriorityGroup_C_AddRule_Params params {};
		params.mPriorityPowerSwitchInfo = mPriorityPowerSwitchInfo;
		params.mIsPartOfCurrentCircuit = mIsPartOfCurrentCircuit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PowerSwitchPriorityRule != nullptr)
			*PowerSwitchPriorityRule = params.PowerSwitchPriorityRule;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch_PriorityGroup.BPW_PowerSwitch_PriorityGroup_C.SetGroupIndex
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            mGroupdIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PowerSwitch_PriorityGroup_C::SetGroupIndex(int32_t mGroupdIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch_PriorityGroup.BPW_PowerSwitch_PriorityGroup_C.SetGroupIndex");
		
		UBPW_PowerSwitch_PriorityGroup_C_SetGroupIndex_Params params {};
		params.mGroupdIndex = mGroupdIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch_PriorityGroup.BPW_PowerSwitch_PriorityGroup_C.SetDragOverVisuals
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDragOver                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PowerSwitch_PriorityGroup_C::SetDragOverVisuals(bool IsDragOver)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch_PriorityGroup.BPW_PowerSwitch_PriorityGroup_C.SetDragOverVisuals");
		
		UBPW_PowerSwitch_PriorityGroup_C_SetDragOverVisuals_Params params {};
		params.IsDragOver = IsDragOver;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch_PriorityGroup.BPW_PowerSwitch_PriorityGroup_C.OnDrop
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               PointerEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UDragDropOperation*                          Operation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBPW_PowerSwitch_PriorityGroup_C::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch_PriorityGroup.BPW_PowerSwitch_PriorityGroup_C.OnDrop");
		
		UBPW_PowerSwitch_PriorityGroup_C_OnDrop_Params params {};
		params.MyGeometry = MyGeometry;
		params.PointerEvent = PointerEvent;
		params.Operation = Operation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch_PriorityGroup.BPW_PowerSwitch_PriorityGroup_C.SetName
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        mName                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_PowerSwitch_PriorityGroup_C::SetName(const class FText& mName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch_PriorityGroup.BPW_PowerSwitch_PriorityGroup_C.SetName");
		
		UBPW_PowerSwitch_PriorityGroup_C_SetName_Params params {};
		params.mName = mName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch_PriorityGroup.BPW_PowerSwitch_PriorityGroup_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PowerSwitch_PriorityGroup_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch_PriorityGroup.BPW_PowerSwitch_PriorityGroup_C.PreConstruct");
		
		UBPW_PowerSwitch_PriorityGroup_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch_PriorityGroup.BPW_PowerSwitch_PriorityGroup_C.OnDragEnter
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               PointerEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UDragDropOperation*                          Operation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PowerSwitch_PriorityGroup_C::OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch_PriorityGroup.BPW_PowerSwitch_PriorityGroup_C.OnDragEnter");
		
		UBPW_PowerSwitch_PriorityGroup_C_OnDragEnter_Params params {};
		params.MyGeometry = MyGeometry;
		params.PointerEvent = PointerEvent;
		params.Operation = Operation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch_PriorityGroup.BPW_PowerSwitch_PriorityGroup_C.OnDragLeave
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FPointerEvent                               PointerEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UDragDropOperation*                          Operation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PowerSwitch_PriorityGroup_C::OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch_PriorityGroup.BPW_PowerSwitch_PriorityGroup_C.OnDragLeave");
		
		UBPW_PowerSwitch_PriorityGroup_C_OnDragLeave_Params params {};
		params.PointerEvent = PointerEvent;
		params.Operation = Operation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch_PriorityGroup.BPW_PowerSwitch_PriorityGroup_C.OnDragCancelled
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FPointerEvent                               PointerEvent                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UDragDropOperation*                          Operation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PowerSwitch_PriorityGroup_C::OnDragCancelled(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch_PriorityGroup.BPW_PowerSwitch_PriorityGroup_C.OnDragCancelled");
		
		UBPW_PowerSwitch_PriorityGroup_C_OnDragCancelled_Params params {};
		params.PointerEvent = PointerEvent;
		params.Operation = Operation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch_PriorityGroup.BPW_PowerSwitch_PriorityGroup_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_PowerSwitch_PriorityGroup_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch_PriorityGroup.BPW_PowerSwitch_PriorityGroup_C.Destruct");
		
		UBPW_PowerSwitch_PriorityGroup_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch_PriorityGroup.BPW_PowerSwitch_PriorityGroup_C.OnMouseEnter
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBPW_PowerSwitch_PriorityGroup_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch_PriorityGroup.BPW_PowerSwitch_PriorityGroup_C.OnMouseEnter");
		
		UBPW_PowerSwitch_PriorityGroup_C_OnMouseEnter_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch_PriorityGroup.BPW_PowerSwitch_PriorityGroup_C.OnMouseLeave
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBPW_PowerSwitch_PriorityGroup_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch_PriorityGroup.BPW_PowerSwitch_PriorityGroup_C.OnMouseLeave");
		
		UBPW_PowerSwitch_PriorityGroup_C_OnMouseLeave_Params params {};
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch_PriorityGroup.BPW_PowerSwitch_PriorityGroup_C.BndEvt__BPW_PowerSwitch_PriorityGroup_mAllOnButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_PowerSwitch_PriorityGroup_C::BndEvt__BPW_PowerSwitch_PriorityGroup_mAllOnButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch_PriorityGroup.BPW_PowerSwitch_PriorityGroup_C.BndEvt__BPW_PowerSwitch_PriorityGroup_mAllOnButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UBPW_PowerSwitch_PriorityGroup_C_BndEvt__BPW_PowerSwitch_PriorityGroup_mAllOnButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch_PriorityGroup.BPW_PowerSwitch_PriorityGroup_C.BndEvt__BPW_PowerSwitch_PriorityGroup_mAllOffButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_PowerSwitch_PriorityGroup_C::BndEvt__BPW_PowerSwitch_PriorityGroup_mAllOffButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch_PriorityGroup.BPW_PowerSwitch_PriorityGroup_C.BndEvt__BPW_PowerSwitch_PriorityGroup_mAllOffButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UBPW_PowerSwitch_PriorityGroup_C_BndEvt__BPW_PowerSwitch_PriorityGroup_mAllOffButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch_PriorityGroup.BPW_PowerSwitch_PriorityGroup_C.ExecuteUbergraph_BPW_PowerSwitch_PriorityGroup
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PowerSwitch_PriorityGroup_C::ExecuteUbergraph_BPW_PowerSwitch_PriorityGroup(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch_PriorityGroup.BPW_PowerSwitch_PriorityGroup_C.ExecuteUbergraph_BPW_PowerSwitch_PriorityGroup");
		
		UBPW_PowerSwitch_PriorityGroup_C_ExecuteUbergraph_BPW_PowerSwitch_PriorityGroup_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PowerSwitch_PriorityGroup.BPW_PowerSwitch_PriorityGroup_C.OnRuleDropped__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBPW_PowerSwitch_PriorityRule_C*             Rule                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Priority                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PowerSwitch_PriorityGroup_C::OnRuleDropped__DelegateSignature(class UBPW_PowerSwitch_PriorityRule_C* Rule, int32_t Priority)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PowerSwitch_PriorityGroup.BPW_PowerSwitch_PriorityGroup_C.OnRuleDropped__DelegateSignature");
		
		UBPW_PowerSwitch_PriorityGroup_C_OnRuleDropped__DelegateSignature_Params params {};
		params.Rule = Rule;
		params.Priority = Priority;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_PowerSwitch_PriorityGroup_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_PowerSwitch_PriorityGroup_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_PowerSwitch_PriorityGroup.BPW_PowerSwitch_PriorityGroup_C");
		return ptr;
	}

}


