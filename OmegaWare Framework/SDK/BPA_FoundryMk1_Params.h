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
	 * Function BPA_FoundryMk1.BPA_FoundryMk1_C.AnimGraph
	 */
	struct UBPA_FoundryMk1_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function BPA_FoundryMk1.BPA_FoundryMk1_C.AnimNotify_AnimStop
	 */
	struct UBPA_FoundryMk1_C_AnimNotify_AnimStop_Params
	{	};

	/**
	 * Function BPA_FoundryMk1.BPA_FoundryMk1_C.ExecuteUbergraph_BPA_FoundryMk1
	 */
	struct UBPA_FoundryMk1_C_ExecuteUbergraph_BPA_FoundryMk1_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_P6UY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
