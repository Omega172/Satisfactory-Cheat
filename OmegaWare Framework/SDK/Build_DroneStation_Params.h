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
	 * Function Build_DroneStation.Build_DroneStation_C.GetLookAtDecription
	 */
	struct ABuild_DroneStation_C_GetLookAtDecription_Params
	{
	public:
		class AFGCharacterPlayer*                                  byCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FUseState                                           State;                                                   // 0x0008(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
		class FText                                                ReturnValue;                                             // 0x0038(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Build_DroneStation.Build_DroneStation_C.GetDefaultRepresentationColor
	 */
	struct ABuild_DroneStation_C_GetDefaultRepresentationColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_DroneStation.Build_DroneStation_C.LostSignificanceSound
	 */
	struct ABuild_DroneStation_C_LostSignificanceSound_Params
	{	};

	/**
	 * Function Build_DroneStation.Build_DroneStation_C.GainSignificanceSound
	 */
	struct ABuild_DroneStation_C_GainSignificanceSound_Params
	{	};

	/**
	 * Function Build_DroneStation.Build_DroneStation_C.PlaySFXTakeOffPlatform
	 */
	struct ABuild_DroneStation_C_PlaySFXTakeOffPlatform_Params
	{
	public:
		double                                                     Time;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_DroneStation.Build_DroneStation_C.PlaySFXDockingPlatform
	 */
	struct ABuild_DroneStation_C_PlaySFXDockingPlatform_Params
	{
	public:
		double                                                     Time;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_DroneStation.Build_DroneStation_C.SetText
	 */
	struct ABuild_DroneStation_C_SetText_Params
	{
	public:
		class FString                                              intText;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_DroneStation.Build_DroneStation_C.StartTakeoffSequence
	 */
	struct ABuild_DroneStation_C_StartTakeoffSequence_Params
	{
	public:
		class AFGDroneVehicle*                                     Drone;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_DroneStation.Build_DroneStation_C.StartDockingSequence
	 */
	struct ABuild_DroneStation_C_StartDockingSequence_Params
	{
	public:
		class AFGDroneVehicle*                                     Drone;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_DroneStation.Build_DroneStation_C.OnDockingStateChanged
	 */
	struct ABuild_DroneStation_C_OnDockingStateChanged_Params
	{
	public:
		EDroneDockingState                                         NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_URFF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      TimeSinceChanged;                                        // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_DroneStation.Build_DroneStation_C.OnHasPowerChanged
	 */
	struct ABuild_DroneStation_C_OnHasPowerChanged_Params
	{
	public:
		bool                                                       newHasPower;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_DroneStation.Build_DroneStation_C.StopProductionLoopEffects
	 */
	struct ABuild_DroneStation_C_StopProductionLoopEffects_Params
	{
	public:
		bool                                                       didStopProducing;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_DroneStation.Build_DroneStation_C.StartProductionLoopEffects
	 */
	struct ABuild_DroneStation_C_StartProductionLoopEffects_Params
	{
	public:
		bool                                                       didStartProducing;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_DroneStation.Build_DroneStation_C.LostSignificance
	 */
	struct ABuild_DroneStation_C_LostSignificance_Params
	{	};

	/**
	 * Function Build_DroneStation.Build_DroneStation_C.GainedSignificance
	 */
	struct ABuild_DroneStation_C_GainedSignificance_Params
	{	};

	/**
	 * Function Build_DroneStation.Build_DroneStation_C.ReceiveBeginPlay
	 */
	struct ABuild_DroneStation_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Build_DroneStation.Build_DroneStation_C.ReceiveEndPlay
	 */
	struct ABuild_DroneStation_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_DroneStation.Build_DroneStation_C.ExecuteUbergraph_Build_DroneStation
	 */
	struct ABuild_DroneStation_C_ExecuteUbergraph_Build_DroneStation_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
