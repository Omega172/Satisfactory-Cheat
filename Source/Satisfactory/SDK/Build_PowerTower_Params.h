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
	 * Function Build_PowerTower.Build_PowerTower_C.OnHasPowerChanged_2
	 */
	struct ABuild_PowerTower_C_OnHasPowerChanged_2_Params
	{
	public:
		bool                                                       newHasPower;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_PowerTower.Build_PowerTower_C.PlayConstructSound
	 */
	struct ABuild_PowerTower_C_PlayConstructSound_Params
	{	};

	/**
	 * Function Build_PowerTower.Build_PowerTower_C.ReceiveBeginPlay
	 */
	struct ABuild_PowerTower_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Build_PowerTower.Build_PowerTower_C.ExecuteUbergraph_Build_PowerTower
	 */
	struct ABuild_PowerTower_C_ExecuteUbergraph_Build_PowerTower_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IRTD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
