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
	 * Function Widget_RadialMenuButton.Widget_RadialMenuButton_C.SetupCustomIcon
	 */
	struct UWidget_RadialMenuButton_C_SetupCustomIcon_Params
	{	};

	/**
	 * Function Widget_RadialMenuButton.Widget_RadialMenuButton_C.SetTextAndIconVisibility
	 */
	struct UWidget_RadialMenuButton_C_SetTextAndIconVisibility_Params
	{	};

	/**
	 * Function Widget_RadialMenuButton.Widget_RadialMenuButton_C.PlaySFXHover
	 */
	struct UWidget_RadialMenuButton_C_PlaySFXHover_Params
	{	};

	/**
	 * Function Widget_RadialMenuButton.Widget_RadialMenuButton_C.Hover Lerp
	 */
	struct UWidget_RadialMenuButton_C_HoverLerp_Params
	{
	public:
		double                                                     DeltaTime;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_RadialMenuButton.Widget_RadialMenuButton_C.Get Screen Position
	 */
	struct UWidget_RadialMenuButton_C_GetScreenPosition_Params
	{
	public:
		double                                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_RadialMenuButton.Widget_RadialMenuButton_C.Set Angle
	 */
	struct UWidget_RadialMenuButton_C_SetAngle_Params
	{	};

	/**
	 * Function Widget_RadialMenuButton.Widget_RadialMenuButton_C.Create Style
	 */
	struct UWidget_RadialMenuButton_C_CreateStyle_Params
	{	};

	/**
	 * Function Widget_RadialMenuButton.Widget_RadialMenuButton_C.Construct
	 */
	struct UWidget_RadialMenuButton_C_Construct_Params
	{	};

	/**
	 * Function Widget_RadialMenuButton.Widget_RadialMenuButton_C.Set Icon Position
	 */
	struct UWidget_RadialMenuButton_C_SetIconPosition_Params
	{	};

	/**
	 * Function Widget_RadialMenuButton.Widget_RadialMenuButton_C.Tick
	 */
	struct UWidget_RadialMenuButton_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_RadialMenuButton.Widget_RadialMenuButton_C.ExecuteUbergraph_Widget_RadialMenuButton
	 */
	struct UWidget_RadialMenuButton_C_ExecuteUbergraph_Widget_RadialMenuButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AR9Q[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
