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
	 * Function BP_GiftBundle.BP_GiftBundle_C.ShouldSave
	 */
	struct ABP_GiftBundle_C_ShouldSave_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GiftBundle.BP_GiftBundle_C.PlayFallingMusic
	 */
	struct ABP_GiftBundle_C_PlayFallingMusic_Params
	{	};

	/**
	 * Function BP_GiftBundle.BP_GiftBundle_C.ReceiveTick
	 */
	struct ABP_GiftBundle_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GiftBundle.BP_GiftBundle_C.ReceiveBeginPlay
	 */
	struct ABP_GiftBundle_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_GiftBundle.BP_GiftBundle_C.FinishFalling
	 */
	struct ABP_GiftBundle_C_FinishFalling_Params
	{	};

	/**
	 * Function BP_GiftBundle.BP_GiftBundle_C.OnPickup
	 */
	struct ABP_GiftBundle_C_OnPickup_Params
	{
	public:
		class AFGCharacterPlayer*                                  byCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GiftBundle.BP_GiftBundle_C.IsPlayerInRange
	 */
	struct ABP_GiftBundle_C_IsPlayerInRange_Params
	{	};

	/**
	 * Function BP_GiftBundle.BP_GiftBundle_C.PostLoadGame
	 */
	struct ABP_GiftBundle_C_PostLoadGame_Params
	{
	public:
		int32_t                                                    saveVersion;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    GameVersion;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GiftBundle.BP_GiftBundle_C.ExecuteUbergraph_BP_GiftBundle
	 */
	struct ABP_GiftBundle_C_ExecuteUbergraph_BP_GiftBundle_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
