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
	 * Function Desc_CartridgeChaos.Desc_CartridgeChaos_C.FireAmmunition
	 */
	struct UDesc_CartridgeChaos_C_FireAmmunition_Params
	{	};

	/**
	 * Function Desc_CartridgeChaos.Desc_CartridgeChaos_C.ProcessHit
	 */
	struct UDesc_CartridgeChaos_C_ProcessHit_Params
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0000(0x00E8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Desc_CartridgeChaos.Desc_CartridgeChaos_C.PlayEffects
	 */
	struct UDesc_CartridgeChaos_C_PlayEffects_Params
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0000(0x00E8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Desc_CartridgeChaos.Desc_CartridgeChaos_C.ExecuteUbergraph_Desc_CartridgeChaos
	 */
	struct UDesc_CartridgeChaos_C_ExecuteUbergraph_Desc_CartridgeChaos_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FZDF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
