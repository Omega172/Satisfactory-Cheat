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
	 * Function BPA_Boombox.BPA_Boombox_C.AnimGraph
	 */
	struct UBPA_Boombox_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function BPA_Boombox.BPA_Boombox_C.AnimNotify_LoadTape
	 */
	struct UBPA_Boombox_C_AnimNotify_LoadTape_Params
	{	};

	/**
	 * Function BPA_Boombox.BPA_Boombox_C.AnimNotify_UnloadTape
	 */
	struct UBPA_Boombox_C_AnimNotify_UnloadTape_Params
	{	};

	/**
	 * Function BPA_Boombox.BPA_Boombox_C.AnimNotify_Play
	 */
	struct UBPA_Boombox_C_AnimNotify_Play_Params
	{	};

	/**
	 * Function BPA_Boombox.BPA_Boombox_C.AnimNotify_Stop
	 */
	struct UBPA_Boombox_C_AnimNotify_Stop_Params
	{	};

	/**
	 * Function BPA_Boombox.BPA_Boombox_C.AnimNotify_Next
	 */
	struct UBPA_Boombox_C_AnimNotify_Next_Params
	{	};

	/**
	 * Function BPA_Boombox.BPA_Boombox_C.AnimNotify_Previous
	 */
	struct UBPA_Boombox_C_AnimNotify_Previous_Params
	{	};

	/**
	 * Function BPA_Boombox.BPA_Boombox_C.BlueprintBeginPlay
	 */
	struct UBPA_Boombox_C_BlueprintBeginPlay_Params
	{	};

	/**
	 * Function BPA_Boombox.BPA_Boombox_C.OnAnimationMondageEnded
	 */
	struct UBPA_Boombox_C_OnAnimationMondageEnded_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInterrupted;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Boombox.BPA_Boombox_C.AnimNotify_TogglePlayback
	 */
	struct UBPA_Boombox_C_AnimNotify_TogglePlayback_Params
	{	};

	/**
	 * Function BPA_Boombox.BPA_Boombox_C.AnimNotify_Turbobass
	 */
	struct UBPA_Boombox_C_AnimNotify_Turbobass_Params
	{	};

	/**
	 * Function BPA_Boombox.BPA_Boombox_C.AnimNotify_SwitchTapeTexture
	 */
	struct UBPA_Boombox_C_AnimNotify_SwitchTapeTexture_Params
	{	};

	/**
	 * Function BPA_Boombox.BPA_Boombox_C.BlueprintUpdateAnimation
	 */
	struct UBPA_Boombox_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Boombox.BPA_Boombox_C.ExecuteUbergraph_BPA_Boombox
	 */
	struct UBPA_Boombox_C_ExecuteUbergraph_BPA_Boombox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
