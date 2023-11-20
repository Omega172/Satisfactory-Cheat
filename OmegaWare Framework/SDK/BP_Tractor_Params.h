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
	 * Function BP_Tractor.BP_Tractor_C.OnVehicleGearingBegin
	 */
	struct ABP_Tractor_C_OnVehicleGearingBegin_Params
	{
	public:
		int32_t                                                    NewGear;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MQQQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Tractor.BP_Tractor_C.PlayCloseStorageSFX
	 */
	struct ABP_Tractor_C_PlayCloseStorageSFX_Params
	{	};

	/**
	 * Function BP_Tractor.BP_Tractor_C.PlayOpenStorageSFX
	 */
	struct ABP_Tractor_C_PlayOpenStorageSFX_Params
	{	};

	/**
	 * Function BP_Tractor.BP_Tractor_C.StopDrivingEffects
	 */
	struct ABP_Tractor_C_StopDrivingEffects_Params
	{	};

	/**
	 * Function BP_Tractor.BP_Tractor_C.StartDrivingEffects
	 */
	struct ABP_Tractor_C_StartDrivingEffects_Params
	{	};

	/**
	 * Function BP_Tractor.BP_Tractor_C.UserConstructionScript
	 */
	struct ABP_Tractor_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Tractor.BP_Tractor_C.ReceiveOnVehicleStartup
	 */
	struct ABP_Tractor_C_ReceiveOnVehicleStartup_Params
	{	};

	/**
	 * Function BP_Tractor.BP_Tractor_C.ReceiveOnVehicleShutDown
	 */
	struct ABP_Tractor_C_ReceiveOnVehicleShutDown_Params
	{	};

	/**
	 * Function BP_Tractor.BP_Tractor_C.GainedSignificance
	 */
	struct ABP_Tractor_C_GainedSignificance_Params
	{	};

	/**
	 * Function BP_Tractor.BP_Tractor_C.LostSignificance
	 */
	struct ABP_Tractor_C_LostSignificance_Params
	{	};

	/**
	 * Function BP_Tractor.BP_Tractor_C.OpenVehicleTrunk
	 */
	struct ABP_Tractor_C_OpenVehicleTrunk_Params
	{
	public:
		class AFGCharacterPlayer*                                  Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Tractor.BP_Tractor_C.CloseVehicleTrunk
	 */
	struct ABP_Tractor_C_CloseVehicleTrunk_Params
	{
	public:
		class AFGCharacterPlayer*                                  Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Tractor.BP_Tractor_C.OnHonkStatusChanged
	 */
	struct ABP_Tractor_C_OnHonkStatusChanged_Params
	{	};

	/**
	 * Function BP_Tractor.BP_Tractor_C.ReceiveOnDriverLeave
	 */
	struct ABP_Tractor_C_ReceiveOnDriverLeave_Params
	{	};

	/**
	 * Function BP_Tractor.BP_Tractor_C.ExecuteUbergraph_BP_Tractor
	 */
	struct ABP_Tractor_C_ExecuteUbergraph_BP_Tractor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
