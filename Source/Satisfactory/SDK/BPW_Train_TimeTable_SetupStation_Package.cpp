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
	 * 		Name   -> Function BPW_Train_TimeTable_SetupStation.BPW_Train_TimeTable_SetupStation_C.OnMouseButtonDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UBPW_Train_TimeTable_SetupStation_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_SetupStation.BPW_Train_TimeTable_SetupStation_C.OnMouseButtonDown");
		
		UBPW_Train_TimeTable_SetupStation_C_OnMouseButtonDown_Params params {};
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
	 * 		Name   -> Function BPW_Train_TimeTable_SetupStation.BPW_Train_TimeTable_SetupStation_C.OnDragDetected
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               PointerEvent                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UDragDropOperation*                          Operation                                                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Train_TimeTable_SetupStation_C::OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_SetupStation.BPW_Train_TimeTable_SetupStation_C.OnDragDetected");
		
		UBPW_Train_TimeTable_SetupStation_C_OnDragDetected_Params params {};
		params.MyGeometry = MyGeometry;
		params.PointerEvent = PointerEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Operation != nullptr)
			*Operation = params.Operation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_SetupStation.BPW_Train_TimeTable_SetupStation_C.UpdateInfo
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Train_TimeTable_SetupStation_C::UpdateInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_SetupStation.BPW_Train_TimeTable_SetupStation_C.UpdateInfo");
		
		UBPW_Train_TimeTable_SetupStation_C_UpdateInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_SetupStation.BPW_Train_TimeTable_SetupStation_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_Train_TimeTable_SetupStation_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_SetupStation.BPW_Train_TimeTable_SetupStation_C.Construct");
		
		UBPW_Train_TimeTable_SetupStation_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_SetupStation.BPW_Train_TimeTable_SetupStation_C.OnMouseEnter
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBPW_Train_TimeTable_SetupStation_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_SetupStation.BPW_Train_TimeTable_SetupStation_C.OnMouseEnter");
		
		UBPW_Train_TimeTable_SetupStation_C_OnMouseEnter_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_SetupStation.BPW_Train_TimeTable_SetupStation_C.OnMouseLeave
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBPW_Train_TimeTable_SetupStation_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_SetupStation.BPW_Train_TimeTable_SetupStation_C.OnMouseLeave");
		
		UBPW_Train_TimeTable_SetupStation_C_OnMouseLeave_Params params {};
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_SetupStation.BPW_Train_TimeTable_SetupStation_C.BndEvt__Button_88_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_Train_TimeTable_SetupStation_C::BndEvt__Button_88_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_SetupStation.BPW_Train_TimeTable_SetupStation_C.BndEvt__Button_88_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UBPW_Train_TimeTable_SetupStation_C_BndEvt__Button_88_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_SetupStation.BPW_Train_TimeTable_SetupStation_C.BndEvt__mEditButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_Train_TimeTable_SetupStation_C::BndEvt__mEditButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_SetupStation.BPW_Train_TimeTable_SetupStation_C.BndEvt__mEditButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UBPW_Train_TimeTable_SetupStation_C_BndEvt__mEditButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_SetupStation.BPW_Train_TimeTable_SetupStation_C.BndEvt__mAddButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_Train_TimeTable_SetupStation_C::BndEvt__mAddButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_SetupStation.BPW_Train_TimeTable_SetupStation_C.BndEvt__mAddButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UBPW_Train_TimeTable_SetupStation_C_BndEvt__mAddButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_SetupStation.BPW_Train_TimeTable_SetupStation_C.BndEvt__mAddButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_Train_TimeTable_SetupStation_C::BndEvt__mAddButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_SetupStation.BPW_Train_TimeTable_SetupStation_C.BndEvt__mAddButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature");
		
		UBPW_Train_TimeTable_SetupStation_C_BndEvt__mAddButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_SetupStation.BPW_Train_TimeTable_SetupStation_C.ExecuteUbergraph_BPW_Train_TimeTable_SetupStation
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Train_TimeTable_SetupStation_C::ExecuteUbergraph_BPW_Train_TimeTable_SetupStation(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_SetupStation.BPW_Train_TimeTable_SetupStation_C.ExecuteUbergraph_BPW_Train_TimeTable_SetupStation");
		
		UBPW_Train_TimeTable_SetupStation_C_ExecuteUbergraph_BPW_Train_TimeTable_SetupStation_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_SetupStation.BPW_Train_TimeTable_SetupStation_C.OnAddClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTimeTableStop                              Station                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_Train_TimeTable_SetupStation_C::OnAddClicked__DelegateSignature(const struct FTimeTableStop& Station)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_SetupStation.BPW_Train_TimeTable_SetupStation_C.OnAddClicked__DelegateSignature");
		
		UBPW_Train_TimeTable_SetupStation_C_OnAddClicked__DelegateSignature_Params params {};
		params.Station = Station;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_SetupStation.BPW_Train_TimeTable_SetupStation_C.OnEditClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTimeTableStop                              Station                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UBPW_Train_TimeTable_SetupStation_C*         StationWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Train_TimeTable_SetupStation_C::OnEditClicked__DelegateSignature(const struct FTimeTableStop& Station, class UBPW_Train_TimeTable_SetupStation_C* StationWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_SetupStation.BPW_Train_TimeTable_SetupStation_C.OnEditClicked__DelegateSignature");
		
		UBPW_Train_TimeTable_SetupStation_C_OnEditClicked__DelegateSignature_Params params {};
		params.Station = Station;
		params.StationWidget = StationWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_SetupStation.BPW_Train_TimeTable_SetupStation_C.OnUnhovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTimeTableStop                              TrainStation                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_Train_TimeTable_SetupStation_C::OnUnhovered__DelegateSignature(const struct FTimeTableStop& TrainStation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_SetupStation.BPW_Train_TimeTable_SetupStation_C.OnUnhovered__DelegateSignature");
		
		UBPW_Train_TimeTable_SetupStation_C_OnUnhovered__DelegateSignature_Params params {};
		params.TrainStation = TrainStation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_SetupStation.BPW_Train_TimeTable_SetupStation_C.OnHovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTimeTableStop                              TrainStation                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_Train_TimeTable_SetupStation_C::OnHovered__DelegateSignature(const struct FTimeTableStop& TrainStation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_SetupStation.BPW_Train_TimeTable_SetupStation_C.OnHovered__DelegateSignature");
		
		UBPW_Train_TimeTable_SetupStation_C_OnHovered__DelegateSignature_Params params {};
		params.TrainStation = TrainStation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_SetupStation.BPW_Train_TimeTable_SetupStation_C.OnRemoveClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBPW_Train_TimeTable_SetupStation_C*         StationWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Train_TimeTable_SetupStation_C::OnRemoveClicked__DelegateSignature(class UBPW_Train_TimeTable_SetupStation_C* StationWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_SetupStation.BPW_Train_TimeTable_SetupStation_C.OnRemoveClicked__DelegateSignature");
		
		UBPW_Train_TimeTable_SetupStation_C_OnRemoveClicked__DelegateSignature_Params params {};
		params.StationWidget = StationWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_SetupStation.BPW_Train_TimeTable_SetupStation_C.OnDragBegin__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBPW_Train_TimeTable_SetupStation_C*         SetupStationWidget                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Train_TimeTable_SetupStation_C::OnDragBegin__DelegateSignature(class UBPW_Train_TimeTable_SetupStation_C* SetupStationWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_SetupStation.BPW_Train_TimeTable_SetupStation_C.OnDragBegin__DelegateSignature");
		
		UBPW_Train_TimeTable_SetupStation_C_OnDragBegin__DelegateSignature_Params params {};
		params.SetupStationWidget = SetupStationWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_Train_TimeTable_SetupStation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_Train_TimeTable_SetupStation_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_Train_TimeTable_SetupStation.BPW_Train_TimeTable_SetupStation_C");
		return ptr;
	}

}


