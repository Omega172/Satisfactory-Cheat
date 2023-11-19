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
	 * Function BP_GolfcartGold.BP_GolfcartGold_C.GetLookAtDecription
	 */
	struct ABP_GolfcartGold_C_GetLookAtDecription_Params
	{
	public:
		class AFGCharacterPlayer*                                  byCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FUseState                                           State;                                                   // 0x0008(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
		class FText                                                ReturnValue;                                             // 0x0038(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_GolfcartGold.BP_GolfcartGold_C.GetDismantleRefund
	 */
	struct ABP_GolfcartGold_C_GetDismantleRefund_Params
	{
	public:
		TArray<struct FInventoryStack>                             out_refund;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       noBuildCostEnabled;                                      // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9B3O[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_GolfcartGold.BP_GolfcartGold_C.UserConstructionScript
	 */
	struct ABP_GolfcartGold_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_GolfcartGold.BP_GolfcartGold_C.ReceiveTick
	 */
	struct ABP_GolfcartGold_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GolfcartGold.BP_GolfcartGold_C.ReceiveBeginPlay
	 */
	struct ABP_GolfcartGold_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_GolfcartGold.BP_GolfcartGold_C.OnHonkStatusChanged
	 */
	struct ABP_GolfcartGold_C_OnHonkStatusChanged_Params
	{	};

	/**
	 * Function BP_GolfcartGold.BP_GolfcartGold_C.ExecuteUbergraph_BP_GolfcartGold
	 */
	struct ABP_GolfcartGold_C_ExecuteUbergraph_BP_GolfcartGold_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
