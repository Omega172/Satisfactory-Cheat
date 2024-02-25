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
	 * Function Widget_SubMenuBackground.Widget_SubMenuBackground_C.SetUsesTopPadding
	 */
	struct UWidget_SubMenuBackground_C_SetUsesTopPadding_Params
	{
	public:
		bool                                                       mUsesTopPadding;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_278D[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_SubMenuBackground.Widget_SubMenuBackground_C.SetUsesGradient
	 */
	struct UWidget_SubMenuBackground_C_SetUsesGradient_Params
	{
	public:
		bool                                                       mUsesGradient;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SubMenuBackground.Widget_SubMenuBackground_C.Set Show Background
	 */
	struct UWidget_SubMenuBackground_C_SetShowBackground_Params
	{
	public:
		bool                                                       mShowBackground;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SubMenuBackground.Widget_SubMenuBackground_C.OnSpawnAnim
	 */
	struct UWidget_SubMenuBackground_C_OnSpawnAnim_Params
	{
	public:
		class UPanelWidget*                                        OverwritePanelWidget;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SubMenuBackground.Widget_SubMenuBackground_C.Construct
	 */
	struct UWidget_SubMenuBackground_C_Construct_Params
	{	};

	/**
	 * Function Widget_SubMenuBackground.Widget_SubMenuBackground_C.PlayListSpawnAnim
	 */
	struct UWidget_SubMenuBackground_C_PlayListSpawnAnim_Params
	{
	public:
		class UPanelWidget*                                        OverwritePanelWidget;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SubMenuBackground.Widget_SubMenuBackground_C.PreConstruct
	 */
	struct UWidget_SubMenuBackground_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SubMenuBackground.Widget_SubMenuBackground_C.OnListSpawnAnim
	 */
	struct UWidget_SubMenuBackground_C_OnListSpawnAnim_Params
	{	};

	/**
	 * Function Widget_SubMenuBackground.Widget_SubMenuBackground_C.PlayBackgroundSpawnAnim
	 */
	struct UWidget_SubMenuBackground_C_PlayBackgroundSpawnAnim_Params
	{	};

	/**
	 * Function Widget_SubMenuBackground.Widget_SubMenuBackground_C.ExecuteUbergraph_Widget_SubMenuBackground
	 */
	struct UWidget_SubMenuBackground_C_ExecuteUbergraph_Widget_SubMenuBackground_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
