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
	 * Function BPA_GeneratorBiomass.BPA_GeneratorBiomass_C.AnimGraph
	 */
	struct UBPA_GeneratorBiomass_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function BPA_GeneratorBiomass.BPA_GeneratorBiomass_C.AnimNotify_BioGenEnteredFunnelPoweredState
	 */
	struct UBPA_GeneratorBiomass_C_AnimNotify_BioGenEnteredFunnelPoweredState_Params
	{	};

	/**
	 * Function BPA_GeneratorBiomass.BPA_GeneratorBiomass_C.AnimNotify_BioGenEnteredFunnelShutdownState
	 */
	struct UBPA_GeneratorBiomass_C_AnimNotify_BioGenEnteredFunnelShutdownState_Params
	{	};

	/**
	 * Function BPA_GeneratorBiomass.BPA_GeneratorBiomass_C.ExecuteUbergraph_BPA_GeneratorBiomass
	 */
	struct UBPA_GeneratorBiomass_C_ExecuteUbergraph_BPA_GeneratorBiomass_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RTF7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
