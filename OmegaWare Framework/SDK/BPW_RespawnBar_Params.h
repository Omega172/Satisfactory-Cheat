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
	 * Function BPW_RespawnBar.BPW_RespawnBar_C.PlayReviveCompleteSFX
	 */
	struct UBPW_RespawnBar_C_PlayReviveCompleteSFX_Params
	{	};

	/**
	 * Function BPW_RespawnBar.BPW_RespawnBar_C.StopReviveSFX
	 */
	struct UBPW_RespawnBar_C_StopReviveSFX_Params
	{	};

	/**
	 * Function BPW_RespawnBar.BPW_RespawnBar_C.PlayReviveSFX
	 */
	struct UBPW_RespawnBar_C_PlayReviveSFX_Params
	{	};

	/**
	 * Function BPW_RespawnBar.BPW_RespawnBar_C.UpdateHeartbeatAmount
	 */
	struct UBPW_RespawnBar_C_UpdateHeartbeatAmount_Params
	{
	public:
		int32_t                                                    NumOfBeats;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_RespawnBar.BPW_RespawnBar_C.SetRespawnAmount
	 */
	struct UBPW_RespawnBar_C_SetRespawnAmount_Params
	{
	public:
		double                                                     mRespawnAmount;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_RespawnBar.BPW_RespawnBar_C.RespawnTick
	 */
	struct UBPW_RespawnBar_C_RespawnTick_Params
	{	};

	/**
	 * Function BPW_RespawnBar.BPW_RespawnBar_C.OnReviveStarted
	 */
	struct UBPW_RespawnBar_C_OnReviveStarted_Params
	{
	public:
		bool                                                       mIsReviver;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_RespawnBar.BPW_RespawnBar_C.Construct
	 */
	struct UBPW_RespawnBar_C_Construct_Params
	{	};

	/**
	 * Function BPW_RespawnBar.BPW_RespawnBar_C.OnReviveEnded
	 */
	struct UBPW_RespawnBar_C_OnReviveEnded_Params
	{
	public:
		bool                                                       isReviveCompleted;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_RespawnBar.BPW_RespawnBar_C.SetupBindings
	 */
	struct UBPW_RespawnBar_C_SetupBindings_Params
	{	};

	/**
	 * Function BPW_RespawnBar.BPW_RespawnBar_C.ExecuteUbergraph_BPW_RespawnBar
	 */
	struct UBPW_RespawnBar_C_ExecuteUbergraph_BPW_RespawnBar_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
