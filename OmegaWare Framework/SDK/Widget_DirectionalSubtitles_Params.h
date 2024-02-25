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
	 * Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.SequenceEvent__ENTRYPOINTWidget_DirectionalSubtitles
	 */
	struct UWidget_DirectionalSubtitles_C_SequenceEvent__ENTRYPOINTWidget_DirectionalSubtitles_Params
	{	};

	/**
	 * Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.ForceDestroySubtitle
	 */
	struct UWidget_DirectionalSubtitles_C_ForceDestroySubtitle_Params
	{	};

	/**
	 * Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.OnAnimDestruct
	 */
	struct UWidget_DirectionalSubtitles_C_OnAnimDestruct_Params
	{	};

	/**
	 * Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.SetSubtitleText
	 */
	struct UWidget_DirectionalSubtitles_C_SetSubtitleText_Params
	{
	public:
		class FText                                                mSubtitle;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.UpdateSubtitle
	 */
	struct UWidget_DirectionalSubtitles_C_UpdateSubtitle_Params
	{
	public:
		class FText                                                mSubtitle;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		double                                                     Duration;                                                // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       UseDuration;                                             // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OZW3[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.SetDirectionVisibility
	 */
	struct UWidget_DirectionalSubtitles_C_SetDirectionVisibility_Params
	{	};

	/**
	 * Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.GetInstigatorAngle
	 */
	struct UWidget_DirectionalSubtitles_C_GetInstigatorAngle_Params
	{
	public:
		double                                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.Construct
	 */
	struct UWidget_DirectionalSubtitles_C_Construct_Params
	{	};

	/**
	 * Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.Event UpdateDestructionTimer
	 */
	struct UWidget_DirectionalSubtitles_C_EventUpdateDestructionTimer_Params
	{
	public:
		double                                                     Duration;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.Destruct
	 */
	struct UWidget_DirectionalSubtitles_C_Destruct_Params
	{	};

	/**
	 * Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.On Instigator End Play
	 */
	struct UWidget_DirectionalSubtitles_C_OnInstigatorEndPlay_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		EEndPlayReason                                             EndPlayReason;                                           // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.ExecuteUbergraph_Widget_DirectionalSubtitles
	 */
	struct UWidget_DirectionalSubtitles_C_ExecuteUbergraph_Widget_DirectionalSubtitles_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.OnDestruct__DelegateSignature
	 */
	struct UWidget_DirectionalSubtitles_C_OnDestruct__DelegateSignature_Params
	{
	public:
		class UWidget_DirectionalSubtitles_C*                      InstigatingSubtitle;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
