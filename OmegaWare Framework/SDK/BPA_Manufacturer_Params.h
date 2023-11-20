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
	 * Function BPA_Manufacturer.BPA_Manufacturer_C.AnimGraph
	 */
	struct UBPA_Manufacturer_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function BPA_Manufacturer.BPA_Manufacturer_C.AnimNotify_ManuEnteredProducing
	 */
	struct UBPA_Manufacturer_C_AnimNotify_ManuEnteredProducing_Params
	{	};

	/**
	 * Function BPA_Manufacturer.BPA_Manufacturer_C.AnimNotify_ManuLeftProducing
	 */
	struct UBPA_Manufacturer_C_AnimNotify_ManuLeftProducing_Params
	{	};

	/**
	 * Function BPA_Manufacturer.BPA_Manufacturer_C.StartAnimationSoundFromDuration
	 */
	struct UBPA_Manufacturer_C_StartAnimationSoundFromDuration_Params
	{	};

	/**
	 * Function BPA_Manufacturer.BPA_Manufacturer_C.StopAnimationSoundFromDuration
	 */
	struct UBPA_Manufacturer_C_StopAnimationSoundFromDuration_Params
	{	};

	/**
	 * Function BPA_Manufacturer.BPA_Manufacturer_C.StopActiveAnimationAudio
	 */
	struct UBPA_Manufacturer_C_StopActiveAnimationAudio_Params
	{	};

	/**
	 * Function BPA_Manufacturer.BPA_Manufacturer_C.ExecuteUbergraph_BPA_Manufacturer
	 */
	struct UBPA_Manufacturer_C_ExecuteUbergraph_BPA_Manufacturer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
