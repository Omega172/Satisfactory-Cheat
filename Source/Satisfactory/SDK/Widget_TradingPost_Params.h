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
	 * Function Widget_TradingPost.Widget_TradingPost_C.UpdateSelectSchematicText
	 */
	struct UWidget_TradingPost_C_UpdateSelectSchematicText_Params
	{	};

	/**
	 * Function Widget_TradingPost.Widget_TradingPost_C.UpdateAnimationPayOffGrid
	 */
	struct UWidget_TradingPost_C_UpdateAnimationPayOffGrid_Params
	{	};

	/**
	 * Function Widget_TradingPost.Widget_TradingPost_C.UpdateSelectMilestoneFeedback
	 */
	struct UWidget_TradingPost_C_UpdateSelectMilestoneFeedback_Params
	{	};

	/**
	 * Function Widget_TradingPost.Widget_TradingPost_C.SetActivateButtonVisibility
	 */
	struct UWidget_TradingPost_C_SetActivateButtonVisibility_Params
	{	};

	/**
	 * Function Widget_TradingPost.Widget_TradingPost_C.SetSelectedSchematic
	 */
	struct UWidget_TradingPost_C_SetSelectedSchematic_Params
	{
	public:
		class UClass*                                              mSelectedSchematic;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_TradingPost.Widget_TradingPost_C.DropInventorySlotStack
	 */
	struct UWidget_TradingPost_C_DropInventorySlotStack_Params
	{
	public:
		class UWidget_InventorySlot_C*                             InventorySlot;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		bool                                                       WasStackMoved;                                           // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_TradingPost.Widget_TradingPost_C.GetLowestNonFullyResearchedTier
	 */
	struct UWidget_TradingPost_C_GetLowestNonFullyResearchedTier_Params
	{
	public:
		int32_t                                                    tier;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       FoundTier;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_O5YV[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_TradingPost.Widget_TradingPost_C.CheckIfTierIsFullyResearched
	 */
	struct UWidget_TradingPost_C_CheckIfTierIsFullyResearched_Params
	{
	public:
		int32_t                                                    tier;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsResearched;                                            // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_TradingPost.Widget_TradingPost_C.SetTierAndDefaultSchematic
	 */
	struct UWidget_TradingPost_C_SetTierAndDefaultSchematic_Params
	{
	public:
		int32_t                                                    tier;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_TradingPost.Widget_TradingPost_C.UpdateSchematicHintVisibility
	 */
	struct UWidget_TradingPost_C_UpdateSchematicHintVisibility_Params
	{	};

	/**
	 * Function Widget_TradingPost.Widget_TradingPost_C.GenerateTierList
	 */
	struct UWidget_TradingPost_C_GenerateTierList_Params
	{	};

	/**
	 * Function Widget_TradingPost.Widget_TradingPost_C.SetRewardInformation
	 */
	struct UWidget_TradingPost_C_SetRewardInformation_Params
	{
	public:
		class FText                                                InTitle;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                inDesc;                                                  // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FSlateBrush                                         inIcon;                                                  // 0x0030(0x00D0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_TradingPost.Widget_TradingPost_C.SetActiveTab
	 */
	struct UWidget_TradingPost_C_SetActiveTab_Params
	{	};

	/**
	 * Function Widget_TradingPost.Widget_TradingPost_C.GetShipInventoryVisibility
	 */
	struct UWidget_TradingPost_C_GetShipInventoryVisibility_Params
	{	};

	/**
	 * Function Widget_TradingPost.Widget_TradingPost_C.ActivateSelectedSchematic
	 */
	struct UWidget_TradingPost_C_ActivateSelectedSchematic_Params
	{	};

	/**
	 * Function Widget_TradingPost.Widget_TradingPost_C.SetDefaultDescriptionText
	 */
	struct UWidget_TradingPost_C_SetDefaultDescriptionText_Params
	{
	public:
		class UClass*                                              mSchematicClass;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_TradingPost.Widget_TradingPost_C.UpdateRewardInfoFromProduct
	 */
	struct UWidget_TradingPost_C_UpdateRewardInfoFromProduct_Params
	{
	public:
		class UWidget_SchematicRewardItem_C*                       RewardWidget;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_TradingPost.Widget_TradingPost_C.OnSchematicClicked
	 */
	struct UWidget_TradingPost_C_OnSchematicClicked_Params
	{
	public:
		class UClass*                                              schematic;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_TradingPost.Widget_TradingPost_C.Cleanup
	 */
	struct UWidget_TradingPost_C_Cleanup_Params
	{	};

	/**
	 * Function Widget_TradingPost.Widget_TradingPost_C.CloseTradepost
	 */
	struct UWidget_TradingPost_C_CloseTradepost_Params
	{	};

	/**
	 * Function Widget_TradingPost.Widget_TradingPost_C.Destruct
	 */
	struct UWidget_TradingPost_C_Destruct_Params
	{	};

	/**
	 * Function Widget_TradingPost.Widget_TradingPost_C.Init
	 */
	struct UWidget_TradingPost_C_Init_Params
	{	};

	/**
	 * Function Widget_TradingPost.Widget_TradingPost_C.OnActiveSchematicChanged
	 */
	struct UWidget_TradingPost_C_OnActiveSchematicChanged_Params
	{
	public:
		class UClass*                                              schematic;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_TradingPost.Widget_TradingPost_C.Construct
	 */
	struct UWidget_TradingPost_C_Construct_Params
	{	};

	/**
	 * Function Widget_TradingPost.Widget_TradingPost_C.purchasedSchematic
	 */
	struct UWidget_TradingPost_C_purchasedSchematic_Params
	{
	public:
		class UClass*                                              purchasedSchematic;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_TradingPost.Widget_TradingPost_C.mShakeWindow
	 */
	struct UWidget_TradingPost_C_mShakeWindow_Params
	{	};

	/**
	 * Function Widget_TradingPost.Widget_TradingPost_C.BndEvt__mWindow_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature
	 */
	struct UWidget_TradingPost_C_BndEvt__mWindow_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_TradingPost.Widget_TradingPost_C.CreateSmoke
	 */
	struct UWidget_TradingPost_C_CreateSmoke_Params
	{	};

	/**
	 * Function Widget_TradingPost.Widget_TradingPost_C.BndEvt__mWindow_K2Node_ComponentBoundEvent_3_OnTabButtonClicked__DelegateSignature
	 */
	struct UWidget_TradingPost_C_BndEvt__mWindow_K2Node_ComponentBoundEvent_3_OnTabButtonClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    ButtonIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_TradingPost.Widget_TradingPost_C.PreConstruct
	 */
	struct UWidget_TradingPost_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_TradingPost.Widget_TradingPost_C.Update Visual Feedback
	 */
	struct UWidget_TradingPost_C_UpdateVisualFeedback_Params
	{	};

	/**
	 * Function Widget_TradingPost.Widget_TradingPost_C.BndEvt__Widget_TradingPost_Widget_TradingPost_ActivateSchematicButton_K2Node_ComponentBoundEvent_1_onSchematicActivateButtonClicked__DelegateSignature
	 */
	struct UWidget_TradingPost_C_BndEvt__Widget_TradingPost_Widget_TradingPost_ActivateSchematicButton_K2Node_ComponentBoundEvent_1_onSchematicActivateButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_TradingPost.Widget_TradingPost_C.ExecuteUbergraph_Widget_TradingPost
	 */
	struct UWidget_TradingPost_C_ExecuteUbergraph_Widget_TradingPost_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
