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
	 * Function BPA_Golfcart.BPA_Golfcart_C.AnimGraph
	 */
	struct UBPA_Golfcart_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function BPA_Golfcart.BPA_Golfcart_C.BlueprintUpdateAnimation
	 */
	struct UBPA_Golfcart_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Golfcart.BPA_Golfcart_C.AnimNotify_Deactive
	 */
	struct UBPA_Golfcart_C_AnimNotify_Deactive_Params
	{	};

	/**
	 * Function BPA_Golfcart.BPA_Golfcart_C.AnimNotify_Activate
	 */
	struct UBPA_Golfcart_C_AnimNotify_Activate_Params
	{	};

	/**
	 * Function BPA_Golfcart.BPA_Golfcart_C.BlueprintInitializeAnimation
	 */
	struct UBPA_Golfcart_C_BlueprintInitializeAnimation_Params
	{	};

	/**
	 * Function BPA_Golfcart.BPA_Golfcart_C.ExecuteUbergraph_BPA_Golfcart
	 */
	struct UBPA_Golfcart_C_ExecuteUbergraph_BPA_Golfcart_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GGTN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
