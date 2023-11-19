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
	 * Function BP_Explorer.BP_Explorer_C.OnVehicleGearingBegin
	 */
	struct ABP_Explorer_C_OnVehicleGearingBegin_Params
	{
	public:
		int32_t                                                    NewGear;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0KJD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Explorer.BP_Explorer_C.PlayOpenStorageSFX
	 */
	struct ABP_Explorer_C_PlayOpenStorageSFX_Params
	{	};

	/**
	 * Function BP_Explorer.BP_Explorer_C.PlayCloseStorageSFX
	 */
	struct ABP_Explorer_C_PlayCloseStorageSFX_Params
	{	};

	/**
	 * Function BP_Explorer.BP_Explorer_C.FindAttachedStaticMesh
	 */
	struct ABP_Explorer_C_FindAttachedStaticMesh_Params
	{
	public:
		class UStaticMeshComponent*                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Explorer.BP_Explorer_C.UserConstructionScript
	 */
	struct ABP_Explorer_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Explorer.BP_Explorer_C.GainedSignificance
	 */
	struct ABP_Explorer_C_GainedSignificance_Params
	{	};

	/**
	 * Function BP_Explorer.BP_Explorer_C.LostSignificance
	 */
	struct ABP_Explorer_C_LostSignificance_Params
	{	};

	/**
	 * Function BP_Explorer.BP_Explorer_C.OpenVehicleTrunk
	 */
	struct ABP_Explorer_C_OpenVehicleTrunk_Params
	{
	public:
		class AFGCharacterPlayer*                                  Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Explorer.BP_Explorer_C.CloseVehicleTrunk
	 */
	struct ABP_Explorer_C_CloseVehicleTrunk_Params
	{
	public:
		class AFGCharacterPlayer*                                  Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Explorer.BP_Explorer_C.OnHonkStatusChanged
	 */
	struct ABP_Explorer_C_OnHonkStatusChanged_Params
	{	};

	/**
	 * Function BP_Explorer.BP_Explorer_C.ReceiveOnDriverLeave
	 */
	struct ABP_Explorer_C_ReceiveOnDriverLeave_Params
	{	};

	/**
	 * Function BP_Explorer.BP_Explorer_C.ExecuteUbergraph_BP_Explorer
	 */
	struct ABP_Explorer_C_ExecuteUbergraph_BP_Explorer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
