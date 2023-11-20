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
	 * Function BP_SpitterSpreadShotMainProjectile.BP_SpitterSpreadShotMainProjectile_C.IsMovingTowardTarget
	 */
	struct ABP_SpitterSpreadShotMainProjectile_C_IsMovingTowardTarget_Params
	{
	public:
		bool                                                       IsMovingTowardTarget;                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DV5C[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_SpitterSpreadShotMainProjectile.BP_SpitterSpreadShotMainProjectile_C.ShouldSpawnSubProjectiles
	 */
	struct ABP_SpitterSpreadShotMainProjectile_C_ShouldSpawnSubProjectiles_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LRFT[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_SpitterSpreadShotMainProjectile.BP_SpitterSpreadShotMainProjectile_C.FireSubProjectiles
	 */
	struct ABP_SpitterSpreadShotMainProjectile_C_FireSubProjectiles_Params
	{	};

	/**
	 * Function BP_SpitterSpreadShotMainProjectile.BP_SpitterSpreadShotMainProjectile_C.ReceiveBeginPlay
	 */
	struct ABP_SpitterSpreadShotMainProjectile_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_SpitterSpreadShotMainProjectile.BP_SpitterSpreadShotMainProjectile_C.PlayExplosionEffects
	 */
	struct ABP_SpitterSpreadShotMainProjectile_C_PlayExplosionEffects_Params
	{	};

	/**
	 * Function BP_SpitterSpreadShotMainProjectile.BP_SpitterSpreadShotMainProjectile_C.ReceiveTick
	 */
	struct ABP_SpitterSpreadShotMainProjectile_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SpitterSpreadShotMainProjectile.BP_SpitterSpreadShotMainProjectile_C.OnImpact
	 */
	struct ABP_SpitterSpreadShotMainProjectile_C_OnImpact_Params
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0000(0x00E8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_SpitterSpreadShotMainProjectile.BP_SpitterSpreadShotMainProjectile_C.ExecuteUbergraph_BP_SpitterSpreadShotMainProjectile
	 */
	struct ABP_SpitterSpreadShotMainProjectile_C_ExecuteUbergraph_BP_SpitterSpreadShotMainProjectile_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_F529[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
