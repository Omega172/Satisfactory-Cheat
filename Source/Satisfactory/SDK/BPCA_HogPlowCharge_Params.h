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
	 * Function BPCA_HogPlowCharge.BPCA_HogPlowCharge_C.PlayPlowChargeHitSFX
	 */
	struct UBPCA_HogPlowCharge_C_PlayPlowChargeHitSFX_Params
	{	};

	/**
	 * Function BPCA_HogPlowCharge.BPCA_HogPlowCharge_C.StopPlowChargeSFX
	 */
	struct UBPCA_HogPlowCharge_C_StopPlowChargeSFX_Params
	{	};

	/**
	 * Function BPCA_HogPlowCharge.BPCA_HogPlowCharge_C.PlayPlowChargeSFX
	 */
	struct UBPCA_HogPlowCharge_C_PlayPlowChargeSFX_Params
	{	};

	/**
	 * Function BPCA_HogPlowCharge.BPCA_HogPlowCharge_C.DestroyChargeEffect
	 */
	struct UBPCA_HogPlowCharge_C_DestroyChargeEffect_Params
	{	};

	/**
	 * Function BPCA_HogPlowCharge.BPCA_HogPlowCharge_C.SpawnChargeEffect
	 */
	struct UBPCA_HogPlowCharge_C_SpawnChargeEffect_Params
	{	};

	/**
	 * Function BPCA_HogPlowCharge.BPCA_HogPlowCharge_C.BeginCharge
	 */
	struct UBPCA_HogPlowCharge_C_BeginCharge_Params
	{	};

	/**
	 * Function BPCA_HogPlowCharge.BPCA_HogPlowCharge_C.EndCharge
	 */
	struct UBPCA_HogPlowCharge_C_EndCharge_Params
	{	};

	/**
	 * Function BPCA_HogPlowCharge.BPCA_HogPlowCharge_C.CleanupAction
	 */
	struct UBPCA_HogPlowCharge_C_CleanupAction_Params
	{
	public:
		bool                                                       actionSuccess;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPCA_HogPlowCharge.BPCA_HogPlowCharge_C.ProcessHit
	 */
	struct UBPCA_HogPlowCharge_C_ProcessHit_Params
	{
	public:
		class AFGCharacterBase*                                    hitCharacter;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          HitResult;                                               // 0x0008(0x00E8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BPCA_HogPlowCharge.BPCA_HogPlowCharge_C.ActionTick
	 */
	struct UBPCA_HogPlowCharge_C_ActionTick_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPCA_HogPlowCharge.BPCA_HogPlowCharge_C.ExecuteUbergraph_BPCA_HogPlowCharge
	 */
	struct UBPCA_HogPlowCharge_C_ExecuteUbergraph_BPCA_HogPlowCharge_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LYF2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
