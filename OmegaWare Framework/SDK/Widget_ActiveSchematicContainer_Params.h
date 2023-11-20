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
	 * Function Widget_ActiveSchematicContainer.Widget_ActiveSchematicContainer_C.GetPodTimerText
	 */
	struct UWidget_ActiveSchematicContainer_C_GetPodTimerText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_ActiveSchematicContainer.Widget_ActiveSchematicContainer_C.GetShouldShowPodTimerText
	 */
	struct UWidget_ActiveSchematicContainer_C_GetShouldShowPodTimerText_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XL2O[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_ActiveSchematicContainer.Widget_ActiveSchematicContainer_C.RemoveSchematicCostWidget
	 */
	struct UWidget_ActiveSchematicContainer_C_RemoveSchematicCostWidget_Params
	{	};

	/**
	 * Function Widget_ActiveSchematicContainer.Widget_ActiveSchematicContainer_C.AddSchematicCostWidget
	 */
	struct UWidget_ActiveSchematicContainer_C_AddSchematicCostWidget_Params
	{	};

	/**
	 * Function Widget_ActiveSchematicContainer.Widget_ActiveSchematicContainer_C.MatchWidgetWithSchematicCost
	 */
	struct UWidget_ActiveSchematicContainer_C_MatchWidgetWithSchematicCost_Params
	{	};

	/**
	 * Function Widget_ActiveSchematicContainer.Widget_ActiveSchematicContainer_C.SetSchematic
	 */
	struct UWidget_ActiveSchematicContainer_C_SetSchematic_Params
	{
	public:
		class UClass*                                              mCachedActiveSchematic;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ActiveSchematicContainer.Widget_ActiveSchematicContainer_C.UpdateSchematicName
	 */
	struct UWidget_ActiveSchematicContainer_C_UpdateSchematicName_Params
	{	};

	/**
	 * Function Widget_ActiveSchematicContainer.Widget_ActiveSchematicContainer_C.Construct
	 */
	struct UWidget_ActiveSchematicContainer_C_Construct_Params
	{	};

	/**
	 * Function Widget_ActiveSchematicContainer.Widget_ActiveSchematicContainer_C.OnSchematicChanged
	 */
	struct UWidget_ActiveSchematicContainer_C_OnSchematicChanged_Params
	{
	public:
		class UClass*                                              activeSchematic;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ActiveSchematicContainer.Widget_ActiveSchematicContainer_C.UpdateTimeUntilReturn
	 */
	struct UWidget_ActiveSchematicContainer_C_UpdateTimeUntilReturn_Params
	{	};

	/**
	 * Function Widget_ActiveSchematicContainer.Widget_ActiveSchematicContainer_C.CheckTimerVisibility
	 */
	struct UWidget_ActiveSchematicContainer_C_CheckTimerVisibility_Params
	{	};

	/**
	 * Function Widget_ActiveSchematicContainer.Widget_ActiveSchematicContainer_C.Destruct
	 */
	struct UWidget_ActiveSchematicContainer_C_Destruct_Params
	{	};

	/**
	 * Function Widget_ActiveSchematicContainer.Widget_ActiveSchematicContainer_C.CheckVisibility
	 */
	struct UWidget_ActiveSchematicContainer_C_CheckVisibility_Params
	{	};

	/**
	 * Function Widget_ActiveSchematicContainer.Widget_ActiveSchematicContainer_C.CheckShouldAutoScroll
	 */
	struct UWidget_ActiveSchematicContainer_C_CheckShouldAutoScroll_Params
	{	};

	/**
	 * Function Widget_ActiveSchematicContainer.Widget_ActiveSchematicContainer_C.ExecuteUbergraph_Widget_ActiveSchematicContainer
	 */
	struct UWidget_ActiveSchematicContainer_C_ExecuteUbergraph_Widget_ActiveSchematicContainer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
