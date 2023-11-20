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
	 * 		Name   -> Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.StationUnhovered
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTimeTableStop                              TrainStation                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_Train_TimeTable_Setup_C::StationUnhovered(const struct FTimeTableStop& TrainStation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.StationUnhovered");
		
		UBPW_Train_TimeTable_Setup_C_StationUnhovered_Params params {};
		params.TrainStation = TrainStation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.StationHovered
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTimeTableStop                              TrainStation                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_Train_TimeTable_Setup_C::StationHovered(const struct FTimeTableStop& TrainStation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.StationHovered");
		
		UBPW_Train_TimeTable_Setup_C_StationHovered_Params params {};
		params.TrainStation = TrainStation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.StationAddClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTimeTableStop                              Station                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_Train_TimeTable_Setup_C::StationAddClicked(const struct FTimeTableStop& Station)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.StationAddClicked");
		
		UBPW_Train_TimeTable_Setup_C_StationAddClicked_Params params {};
		params.Station = Station;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.StationEditClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTimeTableStop                              Station                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UBPW_Train_TimeTable_SetupStation_C*         StationWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Train_TimeTable_Setup_C::StationEditClicked(const struct FTimeTableStop& Station, class UBPW_Train_TimeTable_SetupStation_C* StationWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.StationEditClicked");
		
		UBPW_Train_TimeTable_Setup_C_StationEditClicked_Params params {};
		params.Station = Station;
		params.StationWidget = StationWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.ClearSearch
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Train_TimeTable_Setup_C::ClearSearch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.ClearSearch");
		
		UBPW_Train_TimeTable_Setup_C_ClearSearch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.OnSearch
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        SearchFor                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_Train_TimeTable_Setup_C::OnSearch(const class FText& SearchFor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.OnSearch");
		
		UBPW_Train_TimeTable_Setup_C_OnSearch_Params params {};
		params.SearchFor = SearchFor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.AddNewCurrentStation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ChildPosition                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTimeTableStop                              mStation                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_Train_TimeTable_Setup_C::AddNewCurrentStation(int32_t ChildPosition, const struct FTimeTableStop& mStation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.AddNewCurrentStation");
		
		UBPW_Train_TimeTable_Setup_C_AddNewCurrentStation_Params params {};
		params.ChildPosition = ChildPosition;
		params.mStation = mStation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.OnSetupStationRemoved
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBPW_Train_TimeTable_SetupStation_C*         StationWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Train_TimeTable_Setup_C::OnSetupStationRemoved(class UBPW_Train_TimeTable_SetupStation_C* StationWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.OnSetupStationRemoved");
		
		UBPW_Train_TimeTable_Setup_C_OnSetupStationRemoved_Params params {};
		params.StationWidget = StationWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.GetCurrentStations
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FTimeTableStop>                      Stations                                                   (Parm, OutParm)
	 */
	void UBPW_Train_TimeTable_Setup_C::GetCurrentStations(TArray<struct FTimeTableStop>* Stations)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.GetCurrentStations");
		
		UBPW_Train_TimeTable_Setup_C_GetCurrentStations_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Stations != nullptr)
			*Stations = params.Stations;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.OnSetupStationDragBegin
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBPW_Train_TimeTable_SetupStation_C*         SetupStationWidget                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Train_TimeTable_Setup_C::OnSetupStationDragBegin(class UBPW_Train_TimeTable_SetupStation_C* SetupStationWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.OnSetupStationDragBegin");
		
		UBPW_Train_TimeTable_Setup_C_OnSetupStationDragBegin_Params params {};
		params.SetupStationWidget = SetupStationWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.SetTimeTable
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGRailroadTimeTable*                        mTimeTable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class AFGTrain*                                    train                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Train_TimeTable_Setup_C::SetTimeTable(class AFGRailroadTimeTable* mTimeTable, class AFGTrain* train)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.SetTimeTable");
		
		UBPW_Train_TimeTable_Setup_C_SetTimeTable_Params params {};
		params.mTimeTable = mTimeTable;
		params.train = train;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.PopulateCurrentStations
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Train_TimeTable_Setup_C::PopulateCurrentStations()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.PopulateCurrentStations");
		
		UBPW_Train_TimeTable_Setup_C_PopulateCurrentStations_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.PopulateAvailableStations
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Train_TimeTable_Setup_C::PopulateAvailableStations()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.PopulateAvailableStations");
		
		UBPW_Train_TimeTable_Setup_C_PopulateAvailableStations_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_Train_TimeTable_Setup_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.Construct");
		
		UBPW_Train_TimeTable_Setup_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.BndEvt__mSaveButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_Train_TimeTable_Setup_C::BndEvt__mSaveButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.BndEvt__mSaveButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UBPW_Train_TimeTable_Setup_C_BndEvt__mSaveButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.BndEvt__mDiscardButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_Train_TimeTable_Setup_C::BndEvt__mDiscardButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.BndEvt__mDiscardButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");
		
		UBPW_Train_TimeTable_Setup_C_BndEvt__mDiscardButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.BndEvt__Widget_InputBox_K2Node_ComponentBoundEvent_3_OnTextChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_Train_TimeTable_Setup_C::BndEvt__Widget_InputBox_K2Node_ComponentBoundEvent_3_OnTextChanged__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.BndEvt__Widget_InputBox_K2Node_ComponentBoundEvent_3_OnTextChanged__DelegateSignature");
		
		UBPW_Train_TimeTable_Setup_C_BndEvt__Widget_InputBox_K2Node_ComponentBoundEvent_3_OnTextChanged__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.BndEvt__Widget_InputBox_K2Node_ComponentBoundEvent_4_OnTextComitted__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Train_TimeTable_Setup_C::BndEvt__Widget_InputBox_K2Node_ComponentBoundEvent_4_OnTextComitted__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.BndEvt__Widget_InputBox_K2Node_ComponentBoundEvent_4_OnTextComitted__DelegateSignature");
		
		UBPW_Train_TimeTable_Setup_C_BndEvt__Widget_InputBox_K2Node_ComponentBoundEvent_4_OnTextComitted__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.BndEvt__mCurrentTimeTable_K2Node_ComponentBoundEvent_5_OnOutsideObjectDropped__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Position                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Train_TimeTable_Setup_C::BndEvt__mCurrentTimeTable_K2Node_ComponentBoundEvent_5_OnOutsideObjectDropped__DelegateSignature(int32_t Position)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.BndEvt__mCurrentTimeTable_K2Node_ComponentBoundEvent_5_OnOutsideObjectDropped__DelegateSignature");
		
		UBPW_Train_TimeTable_Setup_C_BndEvt__mCurrentTimeTable_K2Node_ComponentBoundEvent_5_OnOutsideObjectDropped__DelegateSignature_Params params {};
		params.Position = Position;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.ExecuteUbergraph_BPW_Train_TimeTable_Setup
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Train_TimeTable_Setup_C::ExecuteUbergraph_BPW_Train_TimeTable_Setup(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.ExecuteUbergraph_BPW_Train_TimeTable_Setup");
		
		UBPW_Train_TimeTable_Setup_C_ExecuteUbergraph_BPW_Train_TimeTable_Setup_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.OnStationUnhovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTimeTableStop                              Station                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_Train_TimeTable_Setup_C::OnStationUnhovered__DelegateSignature(const struct FTimeTableStop& Station)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.OnStationUnhovered__DelegateSignature");
		
		UBPW_Train_TimeTable_Setup_C_OnStationUnhovered__DelegateSignature_Params params {};
		params.Station = Station;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.OnStationHovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTimeTableStop                              Station                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_Train_TimeTable_Setup_C::OnStationHovered__DelegateSignature(const struct FTimeTableStop& Station)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.OnStationHovered__DelegateSignature");
		
		UBPW_Train_TimeTable_Setup_C_OnStationHovered__DelegateSignature_Params params {};
		params.Station = Station;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.OnStationEditClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTimeTableStop                              mStation                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UBPW_Train_TimeTable_SetupStation_C*         StationWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Train_TimeTable_Setup_C::OnStationEditClicked__DelegateSignature(const struct FTimeTableStop& mStation, class UBPW_Train_TimeTable_SetupStation_C* StationWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.OnStationEditClicked__DelegateSignature");
		
		UBPW_Train_TimeTable_Setup_C_OnStationEditClicked__DelegateSignature_Params params {};
		params.mStation = mStation;
		params.StationWidget = StationWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.OnSave__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Train_TimeTable_Setup_C::OnSave__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.OnSave__DelegateSignature");
		
		UBPW_Train_TimeTable_Setup_C_OnSave__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.OnDiscard__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Train_TimeTable_Setup_C::OnDiscard__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C.OnDiscard__DelegateSignature");
		
		UBPW_Train_TimeTable_Setup_C_OnDiscard__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_Train_TimeTable_Setup_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_Train_TimeTable_Setup_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_Train_TimeTable_Setup.BPW_Train_TimeTable_Setup_C");
		return ptr;
	}

}


