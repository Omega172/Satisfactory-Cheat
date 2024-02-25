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
	 * Function BP_RebarProjectile.BP_RebarProjectile_C.ReceiveBeginPlay
	 */
	struct ABP_RebarProjectile_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_RebarProjectile.BP_RebarProjectile_C.PlayAttachEffect
	 */
	struct ABP_RebarProjectile_C_PlayAttachEffect_Params
	{	};

	/**
	 * Function BP_RebarProjectile.BP_RebarProjectile_C.ReceiveTick
	 */
	struct ABP_RebarProjectile_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RebarProjectile.BP_RebarProjectile_C.Shot Player
	 */
	struct ABP_RebarProjectile_C_ShotPlayer_Params
	{
	public:
		class AFGCharacterPlayer*                                  Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             HitNormal;                                               // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RebarProjectile.BP_RebarProjectile_C.OnImpact
	 */
	struct ABP_RebarProjectile_C_OnImpact_Params
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0000(0x00E8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_RebarProjectile.BP_RebarProjectile_C.ExecuteUbergraph_BP_RebarProjectile
	 */
	struct ABP_RebarProjectile_C_ExecuteUbergraph_BP_RebarProjectile_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
