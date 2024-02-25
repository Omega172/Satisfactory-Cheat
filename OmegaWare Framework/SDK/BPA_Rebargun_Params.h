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
	 * Function BPA_Rebargun.BPA_Rebargun_C.AnimGraph
	 */
	struct UBPA_Rebargun_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function BPA_Rebargun.BPA_Rebargun_C.BlueprintUpdateAnimation
	 */
	struct UBPA_Rebargun_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Rebargun.BPA_Rebargun_C.BlueprintInitializeAnimation
	 */
	struct UBPA_Rebargun_C_BlueprintInitializeAnimation_Params
	{	};

	/**
	 * Function BPA_Rebargun.BPA_Rebargun_C.AnimNotify_HideEjectMag
	 */
	struct UBPA_Rebargun_C_AnimNotify_HideEjectMag_Params
	{	};

	/**
	 * Function BPA_Rebargun.BPA_Rebargun_C.AnimNotify_HideCurrentMag
	 */
	struct UBPA_Rebargun_C_AnimNotify_HideCurrentMag_Params
	{	};

	/**
	 * Function BPA_Rebargun.BPA_Rebargun_C.AnimNotify_ShowCurrentMag
	 */
	struct UBPA_Rebargun_C_AnimNotify_ShowCurrentMag_Params
	{	};

	/**
	 * Function BPA_Rebargun.BPA_Rebargun_C.ExecuteUbergraph_BPA_Rebargun
	 */
	struct UBPA_Rebargun_C_ExecuteUbergraph_BPA_Rebargun_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
