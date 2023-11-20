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
	 * Function BP_TapePickup.BP_TapePickup_C.TapeTextureLoaded
	 */
	struct ABP_TapePickup_C_TapeTextureLoaded_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TapePickup.BP_TapePickup_C.UserConstructionScript
	 */
	struct ABP_TapePickup_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_TapePickup.BP_TapePickup_C.UpdateVisuals
	 */
	struct ABP_TapePickup_C_UpdateVisuals_Params
	{	};

	/**
	 * Function BP_TapePickup.BP_TapePickup_C.PlayPickupEffect
	 */
	struct ABP_TapePickup_C_PlayPickupEffect_Params
	{
	public:
		class AFGCharacterPlayer*                                  byCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TapePickup.BP_TapePickup_C.StartIsLookedAt
	 */
	struct ABP_TapePickup_C_StartIsLookedAt_Params
	{
	public:
		class AFGCharacterPlayer*                                  byCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FUseState                                           State;                                                   // 0x0008(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_TapePickup.BP_TapePickup_C.StopIsLookedAt
	 */
	struct ABP_TapePickup_C_StopIsLookedAt_Params
	{
	public:
		class AFGCharacterPlayer*                                  byCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FUseState                                           State;                                                   // 0x0008(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_TapePickup.BP_TapePickup_C.GainedSignificance
	 */
	struct ABP_TapePickup_C_GainedSignificance_Params
	{	};

	/**
	 * Function BP_TapePickup.BP_TapePickup_C.LostSignificance
	 */
	struct ABP_TapePickup_C_LostSignificance_Params
	{	};

	/**
	 * Function BP_TapePickup.BP_TapePickup_C.ExecuteUbergraph_BP_TapePickup
	 */
	struct ABP_TapePickup_C_ExecuteUbergraph_BP_TapePickup_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
