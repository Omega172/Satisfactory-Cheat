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
	 * Function BP_VolumeFogSmall.BP_VolumeFogSmall_C.UpdateBrightness
	 */
	struct ABP_VolumeFogSmall_C_UpdateBrightness_Params
	{	};

	/**
	 * Function BP_VolumeFogSmall.BP_VolumeFogSmall_C.UserConstructionScript
	 */
	struct ABP_VolumeFogSmall_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_VolumeFogSmall.BP_VolumeFogSmall_C.LostSignificance
	 */
	struct ABP_VolumeFogSmall_C_LostSignificance_Params
	{	};

	/**
	 * Function BP_VolumeFogSmall.BP_VolumeFogSmall_C.GainedSignificance
	 */
	struct ABP_VolumeFogSmall_C_GainedSignificance_Params
	{	};

	/**
	 * Function BP_VolumeFogSmall.BP_VolumeFogSmall_C.ReceiveEndPlay
	 */
	struct ABP_VolumeFogSmall_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_VolumeFogSmall.BP_VolumeFogSmall_C.ReceiveBeginPlay
	 */
	struct ABP_VolumeFogSmall_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_VolumeFogSmall.BP_VolumeFogSmall_C.ReceiveTick
	 */
	struct ABP_VolumeFogSmall_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_VolumeFogSmall.BP_VolumeFogSmall_C.UpdateSignificanceTickRate
	 */
	struct ABP_VolumeFogSmall_C_UpdateSignificanceTickRate_Params
	{
	public:
		float                                                      NewTickRate;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bTickEnabled;                                            // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_VolumeFogSmall.BP_VolumeFogSmall_C.ExecuteUbergraph_BP_VolumeFogSmall
	 */
	struct ABP_VolumeFogSmall_C_ExecuteUbergraph_BP_VolumeFogSmall_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
