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
	 * Function Widget_ResourceExtractorUI.Widget_ResourceExtractorUI_C.UpdateWarningVisibility
	 */
	struct UWidget_ResourceExtractorUI_C_UpdateWarningVisibility_Params
	{
	public:
		bool                                                       State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HPE2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AFGBuildableResourceExtractor*                       mResourceExtractor;                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ResourceExtractorUI.Widget_ResourceExtractorUI_C.CacheRCO
	 */
	struct UWidget_ResourceExtractorUI_C_CacheRCO_Params
	{	};

	/**
	 * Function Widget_ResourceExtractorUI.Widget_ResourceExtractorUI_C.SetupProductionDisplay
	 */
	struct UWidget_ResourceExtractorUI_C_SetupProductionDisplay_Params
	{	};

	/**
	 * Function Widget_ResourceExtractorUI.Widget_ResourceExtractorUI_C.CleanUpBindings
	 */
	struct UWidget_ResourceExtractorUI_C_CleanUpBindings_Params
	{	};

	/**
	 * Function Widget_ResourceExtractorUI.Widget_ResourceExtractorUI_C.DropInventorySlotStack
	 */
	struct UWidget_ResourceExtractorUI_C_DropInventorySlotStack_Params
	{
	public:
		class UWidget_InventorySlot_C*                             InventorySlot;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		bool                                                       WasStackMoved;                                           // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PA3Y[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_ResourceExtractorUI.Widget_ResourceExtractorUI_C.UpdateExtractorStats
	 */
	struct UWidget_ResourceExtractorUI_C_UpdateExtractorStats_Params
	{	};

	/**
	 * Function Widget_ResourceExtractorUI.Widget_ResourceExtractorUI_C.UpdateExtractorProgress
	 */
	struct UWidget_ResourceExtractorUI_C_UpdateExtractorProgress_Params
	{	};

	/**
	 * Function Widget_ResourceExtractorUI.Widget_ResourceExtractorUI_C.GetOverclockWidgetVisibility
	 */
	struct UWidget_ResourceExtractorUI_C_GetOverclockWidgetVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ResourceExtractorUI.Widget_ResourceExtractorUI_C.Construct
	 */
	struct UWidget_ResourceExtractorUI_C_Construct_Params
	{	};

	/**
	 * Function Widget_ResourceExtractorUI.Widget_ResourceExtractorUI_C.Tick
	 */
	struct UWidget_ResourceExtractorUI_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ResourceExtractorUI.Widget_ResourceExtractorUI_C.BndEvt__Widget_StandbyButton_K2Node_ComponentBoundEvent_0_OnStandbyClicked__DelegateSignature
	 */
	struct UWidget_ResourceExtractorUI_C_BndEvt__Widget_StandbyButton_K2Node_ComponentBoundEvent_0_OnStandbyClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_ResourceExtractorUI.Widget_ResourceExtractorUI_C.BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_2_OnClose__DelegateSignature
	 */
	struct UWidget_ResourceExtractorUI_C_BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_2_OnClose__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_ResourceExtractorUI.Widget_ResourceExtractorUI_C.Init
	 */
	struct UWidget_ResourceExtractorUI_C_Init_Params
	{	};

	/**
	 * Function Widget_ResourceExtractorUI.Widget_ResourceExtractorUI_C.Destruct
	 */
	struct UWidget_ResourceExtractorUI_C_Destruct_Params
	{	};

	/**
	 * Function Widget_ResourceExtractorUI.Widget_ResourceExtractorUI_C.OnStandbyHasChanged
	 */
	struct UWidget_ResourceExtractorUI_C_OnStandbyHasChanged_Params
	{
	public:
		bool                                                       State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ResourceExtractorUI.Widget_ResourceExtractorUI_C.OnSetupOutput
	 */
	struct UWidget_ResourceExtractorUI_C_OnSetupOutput_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ResourceExtractorUI.Widget_ResourceExtractorUI_C.ExecuteUbergraph_Widget_ResourceExtractorUI
	 */
	struct UWidget_ResourceExtractorUI_C_ExecuteUbergraph_Widget_ResourceExtractorUI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
