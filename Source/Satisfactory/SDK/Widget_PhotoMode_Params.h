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
	 * Function Widget_PhotoMode.Widget_PhotoMode_C.UpdateHiResToggle
	 */
	struct UWidget_PhotoMode_C_UpdateHiResToggle_Params
	{	};

	/**
	 * Function Widget_PhotoMode.Widget_PhotoMode_C.UpdateFOVSlider
	 */
	struct UWidget_PhotoMode_C_UpdateFOVSlider_Params
	{	};

	/**
	 * Function Widget_PhotoMode.Widget_PhotoMode_C.SetInputKeyTexts
	 */
	struct UWidget_PhotoMode_C_SetInputKeyTexts_Params
	{	};

	/**
	 * Function Widget_PhotoMode.Widget_PhotoMode_C.ToggleVisibility
	 */
	struct UWidget_PhotoMode_C_ToggleVisibility_Params
	{	};

	/**
	 * Function Widget_PhotoMode.Widget_PhotoMode_C.FadePhotoTakenText
	 */
	struct UWidget_PhotoMode_C_FadePhotoTakenText_Params
	{
	public:
		double                                                     DeltaTime;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PhotoMode.Widget_PhotoMode_C.PhotoTaken
	 */
	struct UWidget_PhotoMode_C_PhotoTaken_Params
	{	};

	/**
	 * Function Widget_PhotoMode.Widget_PhotoMode_C.Construct
	 */
	struct UWidget_PhotoMode_C_Construct_Params
	{	};

	/**
	 * Function Widget_PhotoMode.Widget_PhotoMode_C.Tick
	 */
	struct UWidget_PhotoMode_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PhotoMode.Widget_PhotoMode_C.ToggleSequencer
	 */
	struct UWidget_PhotoMode_C_ToggleSequencer_Params
	{	};

	/**
	 * Function Widget_PhotoMode.Widget_PhotoMode_C.TakePhoto
	 */
	struct UWidget_PhotoMode_C_TakePhoto_Params
	{	};

	/**
	 * Function Widget_PhotoMode.Widget_PhotoMode_C.OnSequenceStarted
	 */
	struct UWidget_PhotoMode_C_OnSequenceStarted_Params
	{	};

	/**
	 * Function Widget_PhotoMode.Widget_PhotoMode_C.OnSequenceEnded
	 */
	struct UWidget_PhotoMode_C_OnSequenceEnded_Params
	{	};

	/**
	 * Function Widget_PhotoMode.Widget_PhotoMode_C.Destruct
	 */
	struct UWidget_PhotoMode_C_Destruct_Params
	{	};

	/**
	 * Function Widget_PhotoMode.Widget_PhotoMode_C.ExecuteUbergraph_Widget_PhotoMode
	 */
	struct UWidget_PhotoMode_C_ExecuteUbergraph_Widget_PhotoMode_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
