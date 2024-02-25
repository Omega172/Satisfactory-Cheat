#pragma once

/**
 * Name: Satisfactory
 * Version: Early_Access_CL#273254
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
	 * Function BP_DroneTransport.BP_DroneTransport_C.GetDefaultRepresentationColor
	 */
	struct ABP_DroneTransport_C_GetDefaultRepresentationColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DroneTransport.BP_DroneTransport_C.TurnOffAllThrusters
	 */
	struct ABP_DroneTransport_C_TurnOffAllThrusters_Params
	{
	public:
		double                                                     Float;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DroneTransport.BP_DroneTransport_C.SetThrusterMesh_Values_VFX
	 */
	struct ABP_DroneTransport_C_SetThrusterMesh_Values_VFX_Params
	{	};

	/**
	 * Function BP_DroneTransport.BP_DroneTransport_C.KillCurrentMontage
	 */
	struct ABP_DroneTransport_C_KillCurrentMontage_Params
	{	};

	/**
	 * Function BP_DroneTransport.BP_DroneTransport_C.CheckDecendingStatusSound
	 */
	struct ABP_DroneTransport_C_CheckDecendingStatusSound_Params
	{	};

	/**
	 * Function BP_DroneTransport.BP_DroneTransport_C.LostSignificanceSound
	 */
	struct ABP_DroneTransport_C_LostSignificanceSound_Params
	{	};

	/**
	 * Function BP_DroneTransport.BP_DroneTransport_C.GainSignificanceSound
	 */
	struct ABP_DroneTransport_C_GainSignificanceSound_Params
	{	};

	/**
	 * Function BP_DroneTransport.BP_DroneTransport_C.DecendingBrakeSound
	 */
	struct ABP_DroneTransport_C_DecendingBrakeSound_Params
	{	};

	/**
	 * Function BP_DroneTransport.BP_DroneTransport_C.CheckTakeOffStatusSound
	 */
	struct ABP_DroneTransport_C_CheckTakeOffStatusSound_Params
	{	};

	/**
	 * Function BP_DroneTransport.BP_DroneTransport_C.StopBlastOffSound
	 */
	struct ABP_DroneTransport_C_StopBlastOffSound_Params
	{	};

	/**
	 * Function BP_DroneTransport.BP_DroneTransport_C.PlayBlastOffSound
	 */
	struct ABP_DroneTransport_C_PlayBlastOffSound_Params
	{	};

	/**
	 * Function BP_DroneTransport.BP_DroneTransport_C.PlayTakeOffSoundSequence
	 */
	struct ABP_DroneTransport_C_PlayTakeOffSoundSequence_Params
	{
	public:
		double                                                     Time;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DroneTransport.BP_DroneTransport_C.PlayDockingSoundSequence
	 */
	struct ABP_DroneTransport_C_PlayDockingSoundSequence_Params
	{
	public:
		double                                                     Time;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DroneTransport.BP_DroneTransport_C.KillThruster_VFX
	 */
	struct ABP_DroneTransport_C_KillThruster_VFX_Params
	{	};

	/**
	 * Function BP_DroneTransport.BP_DroneTransport_C.UpdateThruster_VFX
	 */
	struct ABP_DroneTransport_C_UpdateThruster_VFX_Params
	{
	public:
		double                                                     Float;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bAleadyFlying;                                           // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bReveresed;                                              // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ELDT[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_DroneTransport.BP_DroneTransport_C.SpawnThruster_VFX
	 */
	struct ABP_DroneTransport_C_SpawnThruster_VFX_Params
	{	};

	/**
	 * Function BP_DroneTransport.BP_DroneTransport_C.TriggerAnimationTakeOffBool
	 */
	struct ABP_DroneTransport_C_TriggerAnimationTakeOffBool_Params
	{	};

	/**
	 * Function BP_DroneTransport.BP_DroneTransport_C.TriggerAnimationDockingBool
	 */
	struct ABP_DroneTransport_C_TriggerAnimationDockingBool_Params
	{	};

	/**
	 * Function BP_DroneTransport.BP_DroneTransport_C.PlayDockingPlatformSound
	 */
	struct ABP_DroneTransport_C_PlayDockingPlatformSound_Params
	{
	public:
		double                                                     Time;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DroneTransport.BP_DroneTransport_C.PlayTakeOffPlatformSound
	 */
	struct ABP_DroneTransport_C_PlayTakeOffPlatformSound_Params
	{
	public:
		double                                                     Time;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DroneTransport.BP_DroneTransport_C.PlayTakeOffAnimationAndTime
	 */
	struct ABP_DroneTransport_C_PlayTakeOffAnimationAndTime_Params
	{
	public:
		double                                                     mTime;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DroneTransport.BP_DroneTransport_C.PlayDockingAnimationAndTime
	 */
	struct ABP_DroneTransport_C_PlayDockingAnimationAndTime_Params
	{
	public:
		double                                                     mTime;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DroneTransport.BP_DroneTransport_C.UpdateFan_VFX
	 */
	struct ABP_DroneTransport_C_UpdateFan_VFX_Params
	{
	public:
		double                                                     Float;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bAleadyFlying;                                           // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bReveresed;                                              // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TXYW[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_DroneTransport.BP_DroneTransport_C.KillFan_VFX
	 */
	struct ABP_DroneTransport_C_KillFan_VFX_Params
	{	};

	/**
	 * Function BP_DroneTransport.BP_DroneTransport_C.SpawnFan_VFX
	 */
	struct ABP_DroneTransport_C_SpawnFan_VFX_Params
	{	};

	/**
	 * Function BP_DroneTransport.BP_DroneTransport_C.OnFlyingModeChange
	 */
	struct ABP_DroneTransport_C_OnFlyingModeChange_Params
	{
	public:
		EDroneFlyingMode                                           NewFlyingMode;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              NewParam1;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              NewParam;                                                // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DroneTransport.BP_DroneTransport_C.OnFlyingModeChanged
	 */
	struct ABP_DroneTransport_C_OnFlyingModeChanged_Params
	{
	public:
		EDroneFlyingMode                                           NewMode;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DroneTransport.BP_DroneTransport_C.StartDockingSequence
	 */
	struct ABP_DroneTransport_C_StartDockingSequence_Params
	{
	public:
		class AFGBuildableDroneStation*                            Station;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DroneTransport.BP_DroneTransport_C.StartTakeoffSequence
	 */
	struct ABP_DroneTransport_C_StartTakeoffSequence_Params
	{
	public:
		class AFGBuildableDroneStation*                            Station;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DroneTransport.BP_DroneTransport_C.DockingTimerEvent
	 */
	struct ABP_DroneTransport_C_DockingTimerEvent_Params
	{	};

	/**
	 * Function BP_DroneTransport.BP_DroneTransport_C.TakeOffTimerEvent
	 */
	struct ABP_DroneTransport_C_TakeOffTimerEvent_Params
	{	};

	/**
	 * Function BP_DroneTransport.BP_DroneTransport_C.OnBrakingStateChanged
	 */
	struct ABP_DroneTransport_C_OnBrakingStateChanged_Params
	{
	public:
		bool                                                       IsBraking;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DroneTransport.BP_DroneTransport_C.ReceiveBeginPlay
	 */
	struct ABP_DroneTransport_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_DroneTransport.BP_DroneTransport_C.GainedSignificance
	 */
	struct ABP_DroneTransport_C_GainedSignificance_Params
	{	};

	/**
	 * Function BP_DroneTransport.BP_DroneTransport_C.LostSignificance
	 */
	struct ABP_DroneTransport_C_LostSignificance_Params
	{	};

	/**
	 * Function BP_DroneTransport.BP_DroneTransport_C.ReceiveTick
	 */
	struct ABP_DroneTransport_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DroneTransport.BP_DroneTransport_C.TickForDrone
	 */
	struct ABP_DroneTransport_C_TickForDrone_Params
	{	};

	/**
	 * Function BP_DroneTransport.BP_DroneTransport_C.Start_FX
	 */
	struct ABP_DroneTransport_C_Start_FX_Params
	{	};

	/**
	 * Function BP_DroneTransport.BP_DroneTransport_C.Deactivate_FX
	 */
	struct ABP_DroneTransport_C_Deactivate_FX_Params
	{	};

	/**
	 * Function BP_DroneTransport.BP_DroneTransport_C.TickForDeactivateDrone
	 */
	struct ABP_DroneTransport_C_TickForDeactivateDrone_Params
	{	};

	/**
	 * Function BP_DroneTransport.BP_DroneTransport_C.OnDockingStateChanged
	 */
	struct ABP_DroneTransport_C_OnDockingStateChanged_Params
	{
	public:
		EDroneDockingState                                         NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PBOH[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      TimeSinceChanged;                                        // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DroneTransport.BP_DroneTransport_C.TickForThrusters
	 */
	struct ABP_DroneTransport_C_TickForThrusters_Params
	{	};

	/**
	 * Function BP_DroneTransport.BP_DroneTransport_C.StartThrusters
	 */
	struct ABP_DroneTransport_C_StartThrusters_Params
	{	};

	/**
	 * Function BP_DroneTransport.BP_DroneTransport_C.TickVFX
	 */
	struct ABP_DroneTransport_C_TickVFX_Params
	{	};

	/**
	 * Function BP_DroneTransport.BP_DroneTransport_C.ReceiveDestroyed
	 */
	struct ABP_DroneTransport_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function BP_DroneTransport.BP_DroneTransport_C.UpdateThrusterRate
	 */
	struct ABP_DroneTransport_C_UpdateThrusterRate_Params
	{	};

	/**
	 * Function BP_DroneTransport.BP_DroneTransport_C.TurnOffThrusters
	 */
	struct ABP_DroneTransport_C_TurnOffThrusters_Params
	{	};

	/**
	 * Function BP_DroneTransport.BP_DroneTransport_C.TickForTurnOffThrusters
	 */
	struct ABP_DroneTransport_C_TickForTurnOffThrusters_Params
	{	};

	/**
	 * Function BP_DroneTransport.BP_DroneTransport_C.ExecuteUbergraph_BP_DroneTransport
	 */
	struct ABP_DroneTransport_C_ExecuteUbergraph_BP_DroneTransport_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_63LU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
