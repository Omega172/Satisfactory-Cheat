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
	 * Function BP_CartridgeSmartProjectile.BP_CartridgeSmartProjectile_C.PlayAttachEffect
	 */
	struct ABP_CartridgeSmartProjectile_C_PlayAttachEffect_Params
	{	};

	/**
	 * Function BP_CartridgeSmartProjectile.BP_CartridgeSmartProjectile_C.OnImpact
	 */
	struct ABP_CartridgeSmartProjectile_C_OnImpact_Params
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0000(0x00E8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_CartridgeSmartProjectile.BP_CartridgeSmartProjectile_C.ExecuteUbergraph_BP_CartridgeSmartProjectile
	 */
	struct ABP_CartridgeSmartProjectile_C_ExecuteUbergraph_BP_CartridgeSmartProjectile_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VU2I[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
