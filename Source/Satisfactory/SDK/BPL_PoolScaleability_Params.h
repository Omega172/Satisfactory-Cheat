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
	 * Function BPL_PoolScaleability.BPL_PoolScaleability_C.GetLightScaleablity
	 */
	struct UBPL_PoolScaleability_C_GetLightScaleablity_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		TArray<bool>                                               ShadowSettings;                                          // 0x0008(0x0010)  (Parm, OutParm)
		TArray<bool>                                               DFShadowSettings;                                        // 0x0018(0x0010)  (Parm, OutParm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
