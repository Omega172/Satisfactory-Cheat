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
	 * 		Name   -> Function BPW_TruckStatus.BPW_TruckStatus_C.SetStatusElements
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        mText                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UTexture2D*                                  mIconTexture                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                mIconColor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               mShouldAnimPulse                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsDockingStation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_TruckStatus_C::SetStatusElements(const class FText& mText, class UTexture2D* mIconTexture, const struct FLinearColor& mIconColor, bool mShouldAnimPulse, bool IsDockingStation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TruckStatus.BPW_TruckStatus_C.SetStatusElements");
		
		UBPW_TruckStatus_C_SetStatusElements_Params params {};
		params.mText = mText;
		params.mIconTexture = mIconTexture;
		params.mIconColor = mIconColor;
		params.mShouldAnimPulse = mShouldAnimPulse;
		params.IsDockingStation = IsDockingStation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_TruckStatus.BPW_TruckStatus_C.SetVehicleStatus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EVehicleStatus                                     mVehicleStatus                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_TruckStatus_C::SetVehicleStatus(EVehicleStatus mVehicleStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TruckStatus.BPW_TruckStatus_C.SetVehicleStatus");
		
		UBPW_TruckStatus_C_SetVehicleStatus_Params params {};
		params.mVehicleStatus = mVehicleStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_TruckStatus.BPW_TruckStatus_C.SetVehicle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGWheeledVehicleInfo*                       mVehicle                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_TruckStatus_C::SetVehicle(class AFGWheeledVehicleInfo* mVehicle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TruckStatus.BPW_TruckStatus_C.SetVehicle");
		
		UBPW_TruckStatus_C_SetVehicle_Params params {};
		params.mVehicle = mVehicle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_TruckStatus.BPW_TruckStatus_C.SetDockingStationLoadingOrUnloading
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGBuildableDockingStation*                  Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		bool                                               IsDockingStation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EDockingStationStatus                              mDockingStationStatus                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_TruckStatus_C::SetDockingStationLoadingOrUnloading(class AFGBuildableDockingStation* Target, bool IsDockingStation, EDockingStationStatus mDockingStationStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TruckStatus.BPW_TruckStatus_C.SetDockingStationLoadingOrUnloading");
		
		UBPW_TruckStatus_C_SetDockingStationLoadingOrUnloading_Params params {};
		params.Target = Target;
		params.IsDockingStation = IsDockingStation;
		params.mDockingStationStatus = mDockingStationStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_TruckStatus.BPW_TruckStatus_C.SetDockingStationStatus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EDockingStationStatus                              DockingStationStatus                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_TruckStatus_C::SetDockingStationStatus(EDockingStationStatus DockingStationStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TruckStatus.BPW_TruckStatus_C.SetDockingStationStatus");
		
		UBPW_TruckStatus_C_SetDockingStationStatus_Params params {};
		params.DockingStationStatus = DockingStationStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_TruckStatus.BPW_TruckStatus_C.SetDockingStation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGBuildableDockingStation*                  mTruckStation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_TruckStatus_C::SetDockingStation(class AFGBuildableDockingStation* mTruckStation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TruckStatus.BPW_TruckStatus_C.SetDockingStation");
		
		UBPW_TruckStatus_C_SetDockingStation_Params params {};
		params.mTruckStation = mTruckStation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_TruckStatus.BPW_TruckStatus_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_TruckStatus_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TruckStatus.BPW_TruckStatus_C.PreConstruct");
		
		UBPW_TruckStatus_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_TruckStatus.BPW_TruckStatus_C.ExecuteUbergraph_BPW_TruckStatus
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_TruckStatus_C::ExecuteUbergraph_BPW_TruckStatus(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TruckStatus.BPW_TruckStatus_C.ExecuteUbergraph_BPW_TruckStatus");
		
		UBPW_TruckStatus_C_ExecuteUbergraph_BPW_TruckStatus_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_TruckStatus_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_TruckStatus_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_TruckStatus.BPW_TruckStatus_C");
		return ptr;
	}

}


