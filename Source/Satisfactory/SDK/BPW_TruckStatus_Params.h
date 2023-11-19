#pragma once

/**
 * Name: Satisfactory
 * Version: Early_Access_CL#264901
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BPW_TruckStatus.BPW_TruckStatus_C.SetStatusElements
	 */
	struct UBPW_TruckStatus_C_SetStatusElements_Params
	{
	public:
		class FText                                                mText;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UTexture2D*                                          mIconTexture;                                            // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        mIconColor;                                              // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       mShouldAnimPulse;                                        // 0x0030(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsDockingStation;                                        // 0x0031(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4KSU[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_TruckStatus.BPW_TruckStatus_C.SetVehicleStatus
	 */
	struct UBPW_TruckStatus_C_SetVehicleStatus_Params
	{
	public:
		EVehicleStatus                                             mVehicleStatus;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_TruckStatus.BPW_TruckStatus_C.SetVehicle
	 */
	struct UBPW_TruckStatus_C_SetVehicle_Params
	{
	public:
		class AFGWheeledVehicleInfo*                               mVehicle;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_TruckStatus.BPW_TruckStatus_C.SetDockingStationLoadingOrUnloading
	 */
	struct UBPW_TruckStatus_C_SetDockingStationLoadingOrUnloading_Params
	{
	public:
		class AFGBuildableDockingStation*                          Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		bool                                                       IsDockingStation;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EDockingStationStatus                                      mDockingStationStatus;                                   // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_26KJ[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_TruckStatus.BPW_TruckStatus_C.SetDockingStationStatus
	 */
	struct UBPW_TruckStatus_C_SetDockingStationStatus_Params
	{
	public:
		EDockingStationStatus                                      DockingStationStatus;                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_TruckStatus.BPW_TruckStatus_C.SetDockingStation
	 */
	struct UBPW_TruckStatus_C_SetDockingStation_Params
	{
	public:
		class AFGBuildableDockingStation*                          mTruckStation;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_TruckStatus.BPW_TruckStatus_C.PreConstruct
	 */
	struct UBPW_TruckStatus_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_TruckStatus.BPW_TruckStatus_C.ExecuteUbergraph_BPW_TruckStatus
	 */
	struct UBPW_TruckStatus_C_ExecuteUbergraph_BPW_TruckStatus_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
