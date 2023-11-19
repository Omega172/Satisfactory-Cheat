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
	 * Function BP_Golfcart.BP_Golfcart_C.IsUseable
	 */
	struct ABP_Golfcart_C_IsUseable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Golfcart.BP_Golfcart_C.CheckActorClassOnSignificance
	 */
	struct ABP_Golfcart_C_CheckActorClassOnSignificance_Params
	{	};

	/**
	 * Function BP_Golfcart.BP_Golfcart_C.StopSirenSFX
	 */
	struct ABP_Golfcart_C_StopSirenSFX_Params
	{	};

	/**
	 * Function BP_Golfcart.BP_Golfcart_C.PlaySirenSFX
	 */
	struct ABP_Golfcart_C_PlaySirenSFX_Params
	{	};

	/**
	 * Function BP_Golfcart.BP_Golfcart_C.GetLookAtDecription
	 */
	struct ABP_Golfcart_C_GetLookAtDecription_Params
	{
	public:
		class AFGCharacterPlayer*                                  byCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FUseState                                           State;                                                   // 0x0008(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
		class FText                                                ReturnValue;                                             // 0x0038(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_Golfcart.BP_Golfcart_C.GetDismantleRefund
	 */
	struct ABP_Golfcart_C_GetDismantleRefund_Params
	{
	public:
		TArray<struct FInventoryStack>                             out_refund;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       noBuildCostEnabled;                                      // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7SSV[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Golfcart.BP_Golfcart_C.UserConstructionScript
	 */
	struct ABP_Golfcart_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Golfcart.BP_Golfcart_C.GainedSignificance
	 */
	struct ABP_Golfcart_C_GainedSignificance_Params
	{	};

	/**
	 * Function BP_Golfcart.BP_Golfcart_C.LostSignificance
	 */
	struct ABP_Golfcart_C_LostSignificance_Params
	{	};

	/**
	 * Function BP_Golfcart.BP_Golfcart_C.ReceiveTick
	 */
	struct ABP_Golfcart_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Golfcart.BP_Golfcart_C.ReceiveBeginPlay
	 */
	struct ABP_Golfcart_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Golfcart.BP_Golfcart_C.ReceiveUnpossessed
	 */
	struct ABP_Golfcart_C_ReceiveUnpossessed_Params
	{
	public:
		class AController*                                         OldController;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Golfcart.BP_Golfcart_C.ReceivePossessed
	 */
	struct ABP_Golfcart_C_ReceivePossessed_Params
	{
	public:
		class AController*                                         NewController;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Golfcart.BP_Golfcart_C.DoFoldAnimation
	 */
	struct ABP_Golfcart_C_DoFoldAnimation_Params
	{	};

	/**
	 * Function BP_Golfcart.BP_Golfcart_C.FoldAnimationDone
	 */
	struct ABP_Golfcart_C_FoldAnimationDone_Params
	{	};

	/**
	 * Function BP_Golfcart.BP_Golfcart_C.SuccessfulTrickTimer
	 */
	struct ABP_Golfcart_C_SuccessfulTrickTimer_Params
	{	};

	/**
	 * Function BP_Golfcart.BP_Golfcart_C.OnHonkStatusChanged
	 */
	struct ABP_Golfcart_C_OnHonkStatusChanged_Params
	{	};

	/**
	 * Function BP_Golfcart.BP_Golfcart_C.ExecuteUbergraph_BP_Golfcart
	 */
	struct ABP_Golfcart_C_ExecuteUbergraph_BP_Golfcart_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_M8GD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
