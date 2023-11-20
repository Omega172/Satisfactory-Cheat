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
	 * Function Build_JumpPadAdjustable.Build_JumpPadAdjustable_C.PlayChristmasJingle
	 */
	struct ABuild_JumpPadAdjustable_C_PlayChristmasJingle_Params
	{
	public:
		int32_t                                                    JingleCounter;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_JumpPadAdjustable.Build_JumpPadAdjustable_C.PlayVFX
	 */
	struct ABuild_JumpPadAdjustable_C_PlayVFX_Params
	{	};

	/**
	 * Function Build_JumpPadAdjustable.Build_JumpPadAdjustable_C.PlayLaunchSound
	 */
	struct ABuild_JumpPadAdjustable_C_PlayLaunchSound_Params
	{
	public:
		double                                                     LaunchSpeed;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_JumpPadAdjustable.Build_JumpPadAdjustable_C.OnHasPowerChanged
	 */
	struct ABuild_JumpPadAdjustable_C_OnHasPowerChanged_Params
	{
	public:
		bool                                                       newHasPower;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_JumpPadAdjustable.Build_JumpPadAdjustable_C.OnLaunch
	 */
	struct ABuild_JumpPadAdjustable_C_OnLaunch_Params
	{
	public:
		float                                                      HighestLaunchSpeed;                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_JumpPadAdjustable.Build_JumpPadAdjustable_C.OnPlayerLaunched
	 */
	struct ABuild_JumpPadAdjustable_C_OnPlayerLaunched_Params
	{
	public:
		class AFGCharacterPlayer*                                  pPlayer;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NumChainedBounces;                                       // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_JumpPadAdjustable.Build_JumpPadAdjustable_C.ExecuteUbergraph_Build_JumpPadAdjustable
	 */
	struct ABuild_JumpPadAdjustable_C_ExecuteUbergraph_Build_JumpPadAdjustable_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
