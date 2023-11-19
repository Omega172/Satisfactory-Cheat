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
	 * Function BPCA_HogDefaultCharge.BPCA_HogDefaultCharge_C.PlayChargeHitSFX
	 */
	struct UBPCA_HogDefaultCharge_C_PlayChargeHitSFX_Params
	{	};

	/**
	 * Function BPCA_HogDefaultCharge.BPCA_HogDefaultCharge_C.StopChargeSFX
	 */
	struct UBPCA_HogDefaultCharge_C_StopChargeSFX_Params
	{	};

	/**
	 * Function BPCA_HogDefaultCharge.BPCA_HogDefaultCharge_C.PlayChargeSFX
	 */
	struct UBPCA_HogDefaultCharge_C_PlayChargeSFX_Params
	{	};

	/**
	 * Function BPCA_HogDefaultCharge.BPCA_HogDefaultCharge_C.DestroyChargeEffect
	 */
	struct UBPCA_HogDefaultCharge_C_DestroyChargeEffect_Params
	{	};

	/**
	 * Function BPCA_HogDefaultCharge.BPCA_HogDefaultCharge_C.SpawnChargeEffect
	 */
	struct UBPCA_HogDefaultCharge_C_SpawnChargeEffect_Params
	{	};

	/**
	 * Function BPCA_HogDefaultCharge.BPCA_HogDefaultCharge_C.CleanupAction
	 */
	struct UBPCA_HogDefaultCharge_C_CleanupAction_Params
	{
	public:
		bool                                                       actionSuccess;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPCA_HogDefaultCharge.BPCA_HogDefaultCharge_C.EndCharge
	 */
	struct UBPCA_HogDefaultCharge_C_EndCharge_Params
	{	};

	/**
	 * Function BPCA_HogDefaultCharge.BPCA_HogDefaultCharge_C.ProcessHit
	 */
	struct UBPCA_HogDefaultCharge_C_ProcessHit_Params
	{
	public:
		class AFGCharacterBase*                                    hitCharacter;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          HitResult;                                               // 0x0008(0x00E8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BPCA_HogDefaultCharge.BPCA_HogDefaultCharge_C.BeginCharge
	 */
	struct UBPCA_HogDefaultCharge_C_BeginCharge_Params
	{	};

	/**
	 * Function BPCA_HogDefaultCharge.BPCA_HogDefaultCharge_C.ActionTick
	 */
	struct UBPCA_HogDefaultCharge_C_ActionTick_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPCA_HogDefaultCharge.BPCA_HogDefaultCharge_C.ExecuteUbergraph_BPCA_HogDefaultCharge
	 */
	struct UBPCA_HogDefaultCharge_C_ExecuteUbergraph_BPCA_HogDefaultCharge_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HIYC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
