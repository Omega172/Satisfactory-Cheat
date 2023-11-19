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
	 * Function BPA_Zipline.BPA_Zipline_C.AnimGraph
	 */
	struct UBPA_Zipline_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function BPA_Zipline.BPA_Zipline_C.GetZiplineValues
	 */
	struct UBPA_Zipline_C_GetZiplineValues_Params
	{
	public:
		class ACharacter*                                          Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_I8T5[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPA_Zipline.BPA_Zipline_C.BlueprintUpdateAnimation
	 */
	struct UBPA_Zipline_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Zipline.BPA_Zipline_C.AnimNotify_Add_FX_Burst
	 */
	struct UBPA_Zipline_C_AnimNotify_Add_FX_Burst_Params
	{	};

	/**
	 * Function BPA_Zipline.BPA_Zipline_C.ExecuteUbergraph_BPA_Zipline
	 */
	struct UBPA_Zipline_C_ExecuteUbergraph_BPA_Zipline_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
