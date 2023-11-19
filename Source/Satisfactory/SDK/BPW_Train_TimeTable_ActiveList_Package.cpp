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
	 * 		Name   -> Function BPW_Train_TimeTable_ActiveList.BPW_Train_TimeTable_ActiveList_C.SetIsSelfDrivingEnabled
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               mIsSelfDrivingEnabled                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Train_TimeTable_ActiveList_C::SetIsSelfDrivingEnabled(bool mIsSelfDrivingEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_ActiveList.BPW_Train_TimeTable_ActiveList_C.SetIsSelfDrivingEnabled");
		
		UBPW_Train_TimeTable_ActiveList_C_SetIsSelfDrivingEnabled_Params params {};
		params.mIsSelfDrivingEnabled = mIsSelfDrivingEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_ActiveList.BPW_Train_TimeTable_ActiveList_C.StationUnhovered
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTimeTableStop                              Station                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_Train_TimeTable_ActiveList_C::StationUnhovered(const struct FTimeTableStop& Station)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_ActiveList.BPW_Train_TimeTable_ActiveList_C.StationUnhovered");
		
		UBPW_Train_TimeTable_ActiveList_C_StationUnhovered_Params params {};
		params.Station = Station;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_ActiveList.BPW_Train_TimeTable_ActiveList_C.StationHovered
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTimeTableStop                              Station                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_Train_TimeTable_ActiveList_C::StationHovered(const struct FTimeTableStop& Station)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_ActiveList.BPW_Train_TimeTable_ActiveList_C.StationHovered");
		
		UBPW_Train_TimeTable_ActiveList_C_StationHovered_Params params {};
		params.Station = Station;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_ActiveList.BPW_Train_TimeTable_ActiveList_C.SetupStationBindings
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBPW_Train_TimeTable_Station_C*              StationWidget                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Train_TimeTable_ActiveList_C::SetupStationBindings(class UBPW_Train_TimeTable_Station_C* StationWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_ActiveList.BPW_Train_TimeTable_ActiveList_C.SetupStationBindings");
		
		UBPW_Train_TimeTable_ActiveList_C_SetupStationBindings_Params params {};
		params.StationWidget = StationWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_ActiveList.BPW_Train_TimeTable_ActiveList_C.RemoveInvalidDuplicateStops
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FTimeTableStop>                      InStops                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTimeTableStop>                      OutStops                                                   (Parm, OutParm)
	 */
	void UBPW_Train_TimeTable_ActiveList_C::RemoveInvalidDuplicateStops(TArray<struct FTimeTableStop> InStops, TArray<struct FTimeTableStop>* OutStops)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_ActiveList.BPW_Train_TimeTable_ActiveList_C.RemoveInvalidDuplicateStops");
		
		UBPW_Train_TimeTable_ActiveList_C_RemoveInvalidDuplicateStops_Params params {};
		params.InStops = InStops;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutStops != nullptr)
			*OutStops = params.OutStops;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_ActiveList.BPW_Train_TimeTable_ActiveList_C.MoveSingleStationToBottom
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBPW_Train_TimeTable_Station_C*              Station                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Animate                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Train_TimeTable_ActiveList_C::MoveSingleStationToBottom(class UBPW_Train_TimeTable_Station_C* Station, bool Animate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_ActiveList.BPW_Train_TimeTable_ActiveList_C.MoveSingleStationToBottom");
		
		UBPW_Train_TimeTable_ActiveList_C_MoveSingleStationToBottom_Params params {};
		params.Station = Station;
		params.Animate = Animate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_ActiveList.BPW_Train_TimeTable_ActiveList_C.PendingMoveStationToBottom
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBPW_Train_TimeTable_Station_C*              TimeTableStation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Animate                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsNextStationAfterMoveMove                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Train_TimeTable_ActiveList_C::PendingMoveStationToBottom(class UBPW_Train_TimeTable_Station_C* TimeTableStation, bool Animate, bool IsNextStationAfterMoveMove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_ActiveList.BPW_Train_TimeTable_ActiveList_C.PendingMoveStationToBottom");
		
		UBPW_Train_TimeTable_ActiveList_C_PendingMoveStationToBottom_Params params {};
		params.TimeTableStation = TimeTableStation;
		params.Animate = Animate;
		params.IsNextStationAfterMoveMove = IsNextStationAfterMoveMove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_ActiveList.BPW_Train_TimeTable_ActiveList_C.AdjustStopsInitalOrder
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UBPW_Train_TimeTable_Station_C*>      StationsIn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		TArray<class UBPW_Train_TimeTable_Station_C*>      StationsOut                                                (Parm, OutParm, ContainsInstancedReference)
	 */
	void UBPW_Train_TimeTable_ActiveList_C::AdjustStopsInitalOrder(TArray<class UBPW_Train_TimeTable_Station_C*>* StationsIn, TArray<class UBPW_Train_TimeTable_Station_C*>* StationsOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_ActiveList.BPW_Train_TimeTable_ActiveList_C.AdjustStopsInitalOrder");
		
		UBPW_Train_TimeTable_ActiveList_C_AdjustStopsInitalOrder_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StationsIn != nullptr)
			*StationsIn = params.StationsIn;
		if (StationsOut != nullptr)
			*StationsOut = params.StationsOut;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_ActiveList.BPW_Train_TimeTable_ActiveList_C.SetTimeTable
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGRailroadTimeTable*                        mTimeTable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Train_TimeTable_ActiveList_C::SetTimeTable(class AFGRailroadTimeTable* mTimeTable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_ActiveList.BPW_Train_TimeTable_ActiveList_C.SetTimeTable");
		
		UBPW_Train_TimeTable_ActiveList_C_SetTimeTable_Params params {};
		params.mTimeTable = mTimeTable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_ActiveList.BPW_Train_TimeTable_ActiveList_C.UpdateTimeTableOrder
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Animate                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Train_TimeTable_ActiveList_C::UpdateTimeTableOrder(bool Animate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_ActiveList.BPW_Train_TimeTable_ActiveList_C.UpdateTimeTableOrder");
		
		UBPW_Train_TimeTable_ActiveList_C_UpdateTimeTableOrder_Params params {};
		params.Animate = Animate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_ActiveList.BPW_Train_TimeTable_ActiveList_C.CreateTimeTable
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Train_TimeTable_ActiveList_C::CreateTimeTable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_ActiveList.BPW_Train_TimeTable_ActiveList_C.CreateTimeTable");
		
		UBPW_Train_TimeTable_ActiveList_C_CreateTimeTable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_ActiveList.BPW_Train_TimeTable_ActiveList_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Train_TimeTable_ActiveList_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_ActiveList.BPW_Train_TimeTable_ActiveList_C.PreConstruct");
		
		UBPW_Train_TimeTable_ActiveList_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_ActiveList.BPW_Train_TimeTable_ActiveList_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_Train_TimeTable_ActiveList_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_ActiveList.BPW_Train_TimeTable_ActiveList_C.Construct");
		
		UBPW_Train_TimeTable_ActiveList_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_ActiveList.BPW_Train_TimeTable_ActiveList_C.OnMoveStationsToBottom
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBPW_Train_TimeTable_Station_C*              Station                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Animate                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Train_TimeTable_ActiveList_C::OnMoveStationsToBottom(class UBPW_Train_TimeTable_Station_C* Station, bool Animate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_ActiveList.BPW_Train_TimeTable_ActiveList_C.OnMoveStationsToBottom");
		
		UBPW_Train_TimeTable_ActiveList_C_OnMoveStationsToBottom_Params params {};
		params.Station = Station;
		params.Animate = Animate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_ActiveList.BPW_Train_TimeTable_ActiveList_C.OnTimeTableUpdate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Train_TimeTable_ActiveList_C::OnTimeTableUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_ActiveList.BPW_Train_TimeTable_ActiveList_C.OnTimeTableUpdate");
		
		UBPW_Train_TimeTable_ActiveList_C_OnTimeTableUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_ActiveList.BPW_Train_TimeTable_ActiveList_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_Train_TimeTable_ActiveList_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_ActiveList.BPW_Train_TimeTable_ActiveList_C.Destruct");
		
		UBPW_Train_TimeTable_ActiveList_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_ActiveList.BPW_Train_TimeTable_ActiveList_C.ExecuteUbergraph_BPW_Train_TimeTable_ActiveList
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Train_TimeTable_ActiveList_C::ExecuteUbergraph_BPW_Train_TimeTable_ActiveList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_ActiveList.BPW_Train_TimeTable_ActiveList_C.ExecuteUbergraph_BPW_Train_TimeTable_ActiveList");
		
		UBPW_Train_TimeTable_ActiveList_C_ExecuteUbergraph_BPW_Train_TimeTable_ActiveList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_ActiveList.BPW_Train_TimeTable_ActiveList_C.OnStationUnhovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTimeTableStop                              Station                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_Train_TimeTable_ActiveList_C::OnStationUnhovered__DelegateSignature(const struct FTimeTableStop& Station)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_ActiveList.BPW_Train_TimeTable_ActiveList_C.OnStationUnhovered__DelegateSignature");
		
		UBPW_Train_TimeTable_ActiveList_C_OnStationUnhovered__DelegateSignature_Params params {};
		params.Station = Station;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Train_TimeTable_ActiveList.BPW_Train_TimeTable_ActiveList_C.OnStationHovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTimeTableStop                              Station                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_Train_TimeTable_ActiveList_C::OnStationHovered__DelegateSignature(const struct FTimeTableStop& Station)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Train_TimeTable_ActiveList.BPW_Train_TimeTable_ActiveList_C.OnStationHovered__DelegateSignature");
		
		UBPW_Train_TimeTable_ActiveList_C_OnStationHovered__DelegateSignature_Params params {};
		params.Station = Station;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_Train_TimeTable_ActiveList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_Train_TimeTable_ActiveList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_Train_TimeTable_ActiveList.BPW_Train_TimeTable_ActiveList_C");
		return ptr;
	}

}


