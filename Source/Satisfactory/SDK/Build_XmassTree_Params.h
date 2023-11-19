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
	 * Function Build_XmassTree.Build_XmassTree_C.OnRep_Tier
	 */
	struct ABuild_XmassTree_C_OnRep_Tier_Params
	{	};

	/**
	 * Function Build_XmassTree.Build_XmassTree_C.EventPurchasedSchematic
	 */
	struct ABuild_XmassTree_C_EventPurchasedSchematic_Params
	{
	public:
		class UClass*                                              purchasedSchematic;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_XmassTree.Build_XmassTree_C.ReceiveBeginPlay
	 */
	struct ABuild_XmassTree_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Build_XmassTree.Build_XmassTree_C.UpgradeTier
	 */
	struct ABuild_XmassTree_C_UpgradeTier_Params
	{
	public:
		int32_t                                                    newTier;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_XmassTree.Build_XmassTree_C.SetTier
	 */
	struct ABuild_XmassTree_C_SetTier_Params
	{	};

	/**
	 * Function Build_XmassTree.Build_XmassTree_C.Tier1
	 */
	struct ABuild_XmassTree_C_Tier1_Params
	{	};

	/**
	 * Function Build_XmassTree.Build_XmassTree_C.Tier2
	 */
	struct ABuild_XmassTree_C_Tier2_Params
	{	};

	/**
	 * Function Build_XmassTree.Build_XmassTree_C.Tier3
	 */
	struct ABuild_XmassTree_C_Tier3_Params
	{	};

	/**
	 * Function Build_XmassTree.Build_XmassTree_C.Tier4
	 */
	struct ABuild_XmassTree_C_Tier4_Params
	{	};

	/**
	 * Function Build_XmassTree.Build_XmassTree_C.ExecuteUbergraph_Build_XmassTree
	 */
	struct ABuild_XmassTree_C_ExecuteUbergraph_Build_XmassTree_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
