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
	 * Function Equip_ResourceMiner.Equip_ResourceMiner_C.PlayFinalEffect
	 */
	struct AEquip_ResourceMiner_C_PlayFinalEffect_Params
	{	};

	/**
	 * Function Equip_ResourceMiner.Equip_ResourceMiner_C.PlayMiningEffect
	 */
	struct AEquip_ResourceMiner_C_PlayMiningEffect_Params
	{	};

	/**
	 * Function Equip_ResourceMiner.Equip_ResourceMiner_C.StartCameraShake
	 */
	struct AEquip_ResourceMiner_C_StartCameraShake_Params
	{	};

	/**
	 * Function Equip_ResourceMiner.Equip_ResourceMiner_C.PlaySecondEffects
	 */
	struct AEquip_ResourceMiner_C_PlaySecondEffects_Params
	{	};

	/**
	 * Function Equip_ResourceMiner.Equip_ResourceMiner_C.K2_OnStartedMining
	 */
	struct AEquip_ResourceMiner_C_K2_OnStartedMining_Params
	{	};

	/**
	 * Function Equip_ResourceMiner.Equip_ResourceMiner_C.K2_OnStoppedMining
	 */
	struct AEquip_ResourceMiner_C_K2_OnStoppedMining_Params
	{
	public:
		class AFGResourceNode*                                     oldResourceNode;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_ResourceMiner.Equip_ResourceMiner_C.ExecuteUbergraph_Equip_ResourceMiner
	 */
	struct AEquip_ResourceMiner_C_ExecuteUbergraph_Equip_ResourceMiner_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
