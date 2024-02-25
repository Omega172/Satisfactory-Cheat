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
	 * Function Desc_Rebar_Spreadshot.Desc_Rebar_Spreadshot_C.CreateImpactEffectForHit
	 */
	struct UDesc_Rebar_Spreadshot_C_CreateImpactEffectForHit_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x00E8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Desc_Rebar_Spreadshot.Desc_Rebar_Spreadshot_C.FireAmmunition
	 */
	struct UDesc_Rebar_Spreadshot_C_FireAmmunition_Params
	{	};

	/**
	 * Function Desc_Rebar_Spreadshot.Desc_Rebar_Spreadshot_C.PlayEffects
	 */
	struct UDesc_Rebar_Spreadshot_C_PlayEffects_Params
	{
	public:
		TArray<struct FHitResult>                                  traceResults;                                            // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	};

	/**
	 * Function Desc_Rebar_Spreadshot.Desc_Rebar_Spreadshot_C.ExecuteUbergraph_Desc_Rebar_Spreadshot
	 */
	struct UDesc_Rebar_Spreadshot_C_ExecuteUbergraph_Desc_Rebar_Spreadshot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
