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
	 * 		Name   -> Function Widget_TrainStationNew.Widget_TrainStationNew_C.UpdateZoomSlider
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_TrainStationNew_C::UpdateZoomSlider()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TrainStationNew.Widget_TrainStationNew_C.UpdateZoomSlider");
		
		UWidget_TrainStationNew_C_UpdateZoomSlider_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TrainStationNew.Widget_TrainStationNew_C.NormalizedValueToZoomValue
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             NormalizedValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   ZoomValue                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_TrainStationNew_C::NormalizedValueToZoomValue(double NormalizedValue, struct FVector2D* ZoomValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TrainStationNew.Widget_TrainStationNew_C.NormalizedValueToZoomValue");
		
		UWidget_TrainStationNew_C_NormalizedValueToZoomValue_Params params {};
		params.NormalizedValue = NormalizedValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ZoomValue != nullptr)
			*ZoomValue = params.ZoomValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TrainStationNew.Widget_TrainStationNew_C.SetMapFilters
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_TrainStationNew_C::SetMapFilters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TrainStationNew.Widget_TrainStationNew_C.SetMapFilters");
		
		UWidget_TrainStationNew_C_SetMapFilters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TrainStationNew.Widget_TrainStationNew_C.OnTrainUnhovered
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGTrain*                                    train                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_TrainStationNew_C::OnTrainUnhovered(class AFGTrain* train)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TrainStationNew.Widget_TrainStationNew_C.OnTrainUnhovered");
		
		UWidget_TrainStationNew_C_OnTrainUnhovered_Params params {};
		params.train = train;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TrainStationNew.Widget_TrainStationNew_C.OnTrainHovered
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGTrain*                                    train                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_TrainStationNew_C::OnTrainHovered(class AFGTrain* train)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TrainStationNew.Widget_TrainStationNew_C.OnTrainHovered");
		
		UWidget_TrainStationNew_C_OnTrainHovered_Params params {};
		params.train = train;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TrainStationNew.Widget_TrainStationNew_C.ClearSeach
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_TrainStationNew_C::ClearSeach()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TrainStationNew.Widget_TrainStationNew_C.ClearSeach");
		
		UWidget_TrainStationNew_C_ClearSeach_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TrainStationNew.Widget_TrainStationNew_C.OnSearch
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        SearchText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWidget_TrainStationNew_C::OnSearch(const class FText& SearchText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TrainStationNew.Widget_TrainStationNew_C.OnSearch");
		
		UWidget_TrainStationNew_C_OnSearch_Params params {};
		params.SearchText = SearchText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TrainStationNew.Widget_TrainStationNew_C.OnStationMenuClosed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_TrainStationNew_C::OnStationMenuClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TrainStationNew.Widget_TrainStationNew_C.OnStationMenuClosed");
		
		UWidget_TrainStationNew_C_OnStationMenuClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TrainStationNew.Widget_TrainStationNew_C.OnStationUnHovered
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTimeTableStop                              TrainStation                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWidget_TrainStationNew_C::OnStationUnHovered(const struct FTimeTableStop& TrainStation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TrainStationNew.Widget_TrainStationNew_C.OnStationUnHovered");
		
		UWidget_TrainStationNew_C_OnStationUnHovered_Params params {};
		params.TrainStation = TrainStation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TrainStationNew.Widget_TrainStationNew_C.OnStationHovered
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTimeTableStop                              TrainStation                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWidget_TrainStationNew_C::OnStationHovered(const struct FTimeTableStop& TrainStation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TrainStationNew.Widget_TrainStationNew_C.OnStationHovered");
		
		UWidget_TrainStationNew_C_OnStationHovered_Params params {};
		params.TrainStation = TrainStation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TrainStationNew.Widget_TrainStationNew_C.GenerateStationList
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_TrainStationNew_C::GenerateStationList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TrainStationNew.Widget_TrainStationNew_C.GenerateStationList");
		
		UWidget_TrainStationNew_C_GenerateStationList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TrainStationNew.Widget_TrainStationNew_C.SetRandomInfoMessage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_TrainStationNew_C::SetRandomInfoMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TrainStationNew.Widget_TrainStationNew_C.SetRandomInfoMessage");
		
		UWidget_TrainStationNew_C_SetRandomInfoMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TrainStationNew.Widget_TrainStationNew_C.UpdatePowerStatus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               mHasPowerStatus                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_TrainStationNew_C::UpdatePowerStatus(bool mHasPowerStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TrainStationNew.Widget_TrainStationNew_C.UpdatePowerStatus");
		
		UWidget_TrainStationNew_C_UpdatePowerStatus_Params params {};
		params.mHasPowerStatus = mHasPowerStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TrainStationNew.Widget_TrainStationNew_C.ShowLocomotiveMenu
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGTrain*                                    mTrain                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_TrainStationNew_C::ShowLocomotiveMenu(class AFGTrain* mTrain)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TrainStationNew.Widget_TrainStationNew_C.ShowLocomotiveMenu");
		
		UWidget_TrainStationNew_C_ShowLocomotiveMenu_Params params {};
		params.mTrain = mTrain;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TrainStationNew.Widget_TrainStationNew_C.GenerateTrainList
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_TrainStationNew_C::GenerateTrainList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TrainStationNew.Widget_TrainStationNew_C.GenerateTrainList");
		
		UWidget_TrainStationNew_C_GenerateTrainList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TrainStationNew.Widget_TrainStationNew_C.GetStationName
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FText                                        Name                                                       (Parm, OutParm)
	 */
	void UWidget_TrainStationNew_C::GetStationName(class FText* Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TrainStationNew.Widget_TrainStationNew_C.GetStationName");
		
		UWidget_TrainStationNew_C_GetStationName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Name != nullptr)
			*Name = params.Name;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TrainStationNew.Widget_TrainStationNew_C.SetStationName
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWidget_TrainStationNew_C::SetStationName(const class FText& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TrainStationNew.Widget_TrainStationNew_C.SetStationName");
		
		UWidget_TrainStationNew_C_SetStationName_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TrainStationNew.Widget_TrainStationNew_C.OnGetPowerCircuit
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class UFGPowerCircuit* UWidget_TrainStationNew_C::OnGetPowerCircuit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TrainStationNew.Widget_TrainStationNew_C.OnGetPowerCircuit");
		
		UWidget_TrainStationNew_C_OnGetPowerCircuit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TrainStationNew.Widget_TrainStationNew_C.BndEvt__mStationNameInput_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_TrainStationNew_C::BndEvt__mStationNameInput_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TrainStationNew.Widget_TrainStationNew_C.BndEvt__mStationNameInput_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature");
		
		UWidget_TrainStationNew_C_BndEvt__mStationNameInput_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TrainStationNew.Widget_TrainStationNew_C.OnTrainButtonClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget_TrainButton_C*                       Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_TrainStationNew_C::OnTrainButtonClicked(class UWidget_TrainButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TrainStationNew.Widget_TrainStationNew_C.OnTrainButtonClicked");
		
		UWidget_TrainStationNew_C_OnTrainButtonClicked_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TrainStationNew.Widget_TrainStationNew_C.OnLocomotiveMenuClosed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_TrainStationNew_C::OnLocomotiveMenuClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TrainStationNew.Widget_TrainStationNew_C.OnLocomotiveMenuClosed");
		
		UWidget_TrainStationNew_C_OnLocomotiveMenuClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TrainStationNew.Widget_TrainStationNew_C.OnTrainNameChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_TrainStationNew_C::OnTrainNameChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TrainStationNew.Widget_TrainStationNew_C.OnTrainNameChanged");
		
		UWidget_TrainStationNew_C_OnTrainNameChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TrainStationNew.Widget_TrainStationNew_C.OnPowerChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_TrainStationNew_C::OnPowerChanged(bool State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TrainStationNew.Widget_TrainStationNew_C.OnPowerChanged");
		
		UWidget_TrainStationNew_C_OnPowerChanged_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TrainStationNew.Widget_TrainStationNew_C.BndEvt__mStationNameInput_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWidget_TrainStationNew_C::BndEvt__mStationNameInput_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TrainStationNew.Widget_TrainStationNew_C.BndEvt__mStationNameInput_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature");
		
		UWidget_TrainStationNew_C_BndEvt__mStationNameInput_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TrainStationNew.Widget_TrainStationNew_C.AutoScrollInfoMessage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_TrainStationNew_C::AutoScrollInfoMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TrainStationNew.Widget_TrainStationNew_C.AutoScrollInfoMessage");
		
		UWidget_TrainStationNew_C_AutoScrollInfoMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TrainStationNew.Widget_TrainStationNew_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_TrainStationNew_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TrainStationNew.Widget_TrainStationNew_C.Construct");
		
		UWidget_TrainStationNew_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TrainStationNew.Widget_TrainStationNew_C.BndEvt__Widget_InputBox_K2Node_ComponentBoundEvent_2_OnTextChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWidget_TrainStationNew_C::BndEvt__Widget_InputBox_K2Node_ComponentBoundEvent_2_OnTextChanged__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TrainStationNew.Widget_TrainStationNew_C.BndEvt__Widget_InputBox_K2Node_ComponentBoundEvent_2_OnTextChanged__DelegateSignature");
		
		UWidget_TrainStationNew_C_BndEvt__Widget_InputBox_K2Node_ComponentBoundEvent_2_OnTextChanged__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TrainStationNew.Widget_TrainStationNew_C.BndEvt__Widget_InputBox_K2Node_ComponentBoundEvent_3_OnTextComitted__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_TrainStationNew_C::BndEvt__Widget_InputBox_K2Node_ComponentBoundEvent_3_OnTextComitted__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TrainStationNew.Widget_TrainStationNew_C.BndEvt__Widget_InputBox_K2Node_ComponentBoundEvent_3_OnTextComitted__DelegateSignature");
		
		UWidget_TrainStationNew_C_BndEvt__Widget_InputBox_K2Node_ComponentBoundEvent_3_OnTextComitted__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TrainStationNew.Widget_TrainStationNew_C.BndEvt__mTrainStationWindow_K2Node_ComponentBoundEvent_4_OnTabButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_TrainStationNew_C::BndEvt__mTrainStationWindow_K2Node_ComponentBoundEvent_4_OnTabButtonClicked__DelegateSignature(int32_t ButtonIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TrainStationNew.Widget_TrainStationNew_C.BndEvt__mTrainStationWindow_K2Node_ComponentBoundEvent_4_OnTabButtonClicked__DelegateSignature");
		
		UWidget_TrainStationNew_C_BndEvt__mTrainStationWindow_K2Node_ComponentBoundEvent_4_OnTabButtonClicked__DelegateSignature_Params params {};
		params.ButtonIndex = ButtonIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TrainStationNew.Widget_TrainStationNew_C.BndEvt__Widget_TrainStationNew_mZoomSlider_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_TrainStationNew_C::BndEvt__Widget_TrainStationNew_mZoomSlider_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TrainStationNew.Widget_TrainStationNew_C.BndEvt__Widget_TrainStationNew_mZoomSlider_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature");
		
		UWidget_TrainStationNew_C_BndEvt__Widget_TrainStationNew_mZoomSlider_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TrainStationNew.Widget_TrainStationNew_C.BndEvt__Widget_TrainStationNew_Widget_Map_K2Node_ComponentBoundEvent_6_ZoomChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_TrainStationNew_C::BndEvt__Widget_TrainStationNew_Widget_Map_K2Node_ComponentBoundEvent_6_ZoomChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TrainStationNew.Widget_TrainStationNew_C.BndEvt__Widget_TrainStationNew_Widget_Map_K2Node_ComponentBoundEvent_6_ZoomChanged__DelegateSignature");
		
		UWidget_TrainStationNew_C_BndEvt__Widget_TrainStationNew_Widget_Map_K2Node_ComponentBoundEvent_6_ZoomChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TrainStationNew.Widget_TrainStationNew_C.ExecuteUbergraph_Widget_TrainStationNew
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_TrainStationNew_C::ExecuteUbergraph_Widget_TrainStationNew(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TrainStationNew.Widget_TrainStationNew_C.ExecuteUbergraph_Widget_TrainStationNew");
		
		UWidget_TrainStationNew_C_ExecuteUbergraph_Widget_TrainStationNew_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_TrainStationNew_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_TrainStationNew_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_TrainStationNew.Widget_TrainStationNew_C");
		return ptr;
	}

}


