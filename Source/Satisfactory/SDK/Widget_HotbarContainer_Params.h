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
	 * Function Widget_HotbarContainer.Widget_HotbarContainer_C.SequenceEvent__ENTRYPOINTWidget_HotbarContainer
	 */
	struct UWidget_HotbarContainer_C_SequenceEvent__ENTRYPOINTWidget_HotbarContainer_Params
	{	};

	/**
	 * Function Widget_HotbarContainer.Widget_HotbarContainer_C.UpdateHotbarCountIndicator
	 */
	struct UWidget_HotbarContainer_C_UpdateHotbarCountIndicator_Params
	{	};

	/**
	 * Function Widget_HotbarContainer.Widget_HotbarContainer_C.UpdateHotbarIndexIndicator
	 */
	struct UWidget_HotbarContainer_C_UpdateHotbarIndexIndicator_Params
	{	};

	/**
	 * Function Widget_HotbarContainer.Widget_HotbarContainer_C.OnHotbarLayoutUpdated
	 */
	struct UWidget_HotbarContainer_C_OnHotbarLayoutUpdated_Params
	{	};

	/**
	 * Function Widget_HotbarContainer.Widget_HotbarContainer_C.ShowNotification
	 */
	struct UWidget_HotbarContainer_C_ShowNotification_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Unbound;                                                 // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_HotbarContainer.Widget_HotbarContainer_C.Destruct
	 */
	struct UWidget_HotbarContainer_C_Destruct_Params
	{	};

	/**
	 * Function Widget_HotbarContainer.Widget_HotbarContainer_C.OnHotbarIndexChanged
	 */
	struct UWidget_HotbarContainer_C_OnHotbarIndexChanged_Params
	{
	public:
		class UFGPlayerHotbar*                                     NewHotbar;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    newHotbarIndex;                                          // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_HotbarContainer.Widget_HotbarContainer_C.Construct
	 */
	struct UWidget_HotbarContainer_C_Construct_Params
	{	};

	/**
	 * Function Widget_HotbarContainer.Widget_HotbarContainer_C.OnHotbarsAvailable
	 */
	struct UWidget_HotbarContainer_C_OnHotbarsAvailable_Params
	{	};

	/**
	 * Function Widget_HotbarContainer.Widget_HotbarContainer_C.OnShortcutUnbound
	 */
	struct UWidget_HotbarContainer_C_OnShortcutUnbound_Params
	{
	public:
		int32_t                                                    SlotIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_HotbarContainer.Widget_HotbarContainer_C.ExecuteUbergraph_Widget_HotbarContainer
	 */
	struct UWidget_HotbarContainer_C_ExecuteUbergraph_Widget_HotbarContainer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
