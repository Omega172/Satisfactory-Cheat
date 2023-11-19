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
	 * Function Widget_HotbarEntry.Widget_HotbarEntry_C.UpdateSlotStyle
	 */
	struct UWidget_HotbarEntry_C_UpdateSlotStyle_Params
	{	};

	/**
	 * Function Widget_HotbarEntry.Widget_HotbarEntry_C.GetIconVisibility
	 */
	struct UWidget_HotbarEntry_C_GetIconVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_HotbarEntry.Widget_HotbarEntry_C.GetSlotTextColor
	 */
	struct UWidget_HotbarEntry_C_GetSlotTextColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0014)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_HotbarEntry.Widget_HotbarEntry_C.GetSlotText
	 */
	struct UWidget_HotbarEntry_C_GetSlotText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_HotbarEntry.Widget_HotbarEntry_C.GetIcon
	 */
	struct UWidget_HotbarEntry_C_GetIcon_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x00D0)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_HotbarEntry.Widget_HotbarEntry_C.Update Hotbar Slot
	 */
	struct UWidget_HotbarEntry_C_UpdateHotbarSlot_Params
	{	};

	/**
	 * Function Widget_HotbarEntry.Widget_HotbarEntry_C.OnHotbarSlotUpdated
	 */
	struct UWidget_HotbarEntry_C_OnHotbarSlotUpdated_Params
	{
	public:
		class UFGPlayerHotbar*                                     Hotbar;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_HotbarEntry.Widget_HotbarEntry_C.OhShortcutActiveStatusChanged
	 */
	struct UWidget_HotbarEntry_C_OhShortcutActiveStatusChanged_Params
	{
	public:
		class UFGHotbarShortcut*                                   shortcut;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_HotbarEntry.Widget_HotbarEntry_C.InitializeHotbarSlot
	 */
	struct UWidget_HotbarEntry_C_InitializeHotbarSlot_Params
	{
	public:
		class UFGPlayerHotbar*                                     Hotbar;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    shortcutIndex;                                           // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_HotbarEntry.Widget_HotbarEntry_C.On Shortcut Just Bound
	 */
	struct UWidget_HotbarEntry_C_OnShortcutJustBound_Params
	{
	public:
		class UFGHotbarShortcut*                                   shortcut;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_HotbarEntry.Widget_HotbarEntry_C.ExecuteUbergraph_Widget_HotbarEntry
	 */
	struct UWidget_HotbarEntry_C_ExecuteUbergraph_Widget_HotbarEntry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
