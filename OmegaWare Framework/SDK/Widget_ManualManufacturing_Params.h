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
	 * Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.StopCraftingButtonSFX
	 */
	struct UWidget_ManualManufacturing_C_StopCraftingButtonSFX_Params
	{	};

	/**
	 * Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.PlayCraftingButtonSFX
	 */
	struct UWidget_ManualManufacturing_C_PlayCraftingButtonSFX_Params
	{	};

	/**
	 * Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.GetIsWorkshop
	 */
	struct UWidget_ManualManufacturing_C_GetIsWorkshop_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YTT5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.SetIsWorkshop
	 */
	struct UWidget_ManualManufacturing_C_SetIsWorkshop_Params
	{
	public:
		bool                                                       mIsWorkshop;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.OnKeyUp
	 */
	struct UWidget_ManualManufacturing_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.OnKeyDown
	 */
	struct UWidget_ManualManufacturing_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.UpdateRelevantClasses
	 */
	struct UWidget_ManualManufacturing_C_UpdateRelevantClasses_Params
	{	};

	/**
	 * Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.OnMouseButtonDown
	 */
	struct UWidget_ManualManufacturing_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.UpdateAffordableCategories
	 */
	struct UWidget_ManualManufacturing_C_UpdateAffordableCategories_Params
	{	};

	/**
	 * Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.GetCategoryWidgetFromRecipe
	 */
	struct UWidget_ManualManufacturing_C_GetCategoryWidgetFromRecipe_Params
	{
	public:
		class UClass*                                              recipe;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UWidget_CraftBench_Category_C*                       ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.AddUniqueRecipe
	 */
	struct UWidget_ManualManufacturing_C_AddUniqueRecipe_Params
	{
	public:
		TArray<struct FItemCategoryRecipeStruct>                   CategorizedRecipes;                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UClass*                                              recipe;                                                  // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.ClearAndHideSearchResults
	 */
	struct UWidget_ManualManufacturing_C_ClearAndHideSearchResults_Params
	{	};

	/**
	 * Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.OnSearchCreateResults
	 */
	struct UWidget_ManualManufacturing_C_OnSearchCreateResults_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.ShowOnlyAffordableRecipes
	 */
	struct UWidget_ManualManufacturing_C_ShowOnlyAffordableRecipes_Params
	{
	public:
		bool                                                       OnlyShowAffordable;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_K3WR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.CreateCategoryHeader
	 */
	struct UWidget_ManualManufacturing_C_CreateCategoryHeader_Params
	{
	public:
		class UPanelWidget*                                        InScrollbox;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class FText                                                Name;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       mIsCollapsed;                                            // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_83X1[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget_CraftBench_Category_C*                       CategoryWidget;                                          // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.UpdateLeds
	 */
	struct UWidget_ManualManufacturing_C_UpdateLeds_Params
	{	};

	/**
	 * Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.UpdateWarningWidget
	 */
	struct UWidget_ManualManufacturing_C_UpdateWarningWidget_Params
	{	};

	/**
	 * Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.GetCalculatedCurve
	 */
	struct UWidget_ManualManufacturing_C_GetCalculatedCurve_Params
	{
	public:
		double                                                     Output;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.ShowCurrentOutput
	 */
	struct UWidget_ManualManufacturing_C_ShowCurrentOutput_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.UpdateProductionStats
	 */
	struct UWidget_ManualManufacturing_C_UpdateProductionStats_Params
	{	};

	/**
	 * Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.UpdateProgressBar
	 */
	struct UWidget_ManualManufacturing_C_UpdateProgressBar_Params
	{	};

	/**
	 * Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.SetCraftButtonFeedback
	 */
	struct UWidget_ManualManufacturing_C_SetCraftButtonFeedback_Params
	{	};

	/**
	 * Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.CloseVehicle
	 */
	struct UWidget_ManualManufacturing_C_CloseVehicle_Params
	{	};

	/**
	 * Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.GetInfoboxVisibility
	 */
	struct UWidget_ManualManufacturing_C_GetInfoboxVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.GetCraftingFeedbackVisibility
	 */
	struct UWidget_ManualManufacturing_C_GetCraftingFeedbackVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.SetWorkingAtWorkbenchOnServer
	 */
	struct UWidget_ManualManufacturing_C_SetWorkingAtWorkbenchOnServer_Params
	{
	public:
		class AFGPlayerController*                                 FGPlayerController;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.OnCraftCompleted
	 */
	struct UWidget_ManualManufacturing_C_OnCraftCompleted_Params
	{	};

	/**
	 * Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.CreateInfoBox
	 */
	struct UWidget_ManualManufacturing_C_CreateInfoBox_Params
	{
	public:
		class UClass*                                              mRecipe;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.Cleanup
	 */
	struct UWidget_ManualManufacturing_C_Cleanup_Params
	{	};

	/**
	 * Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.GetAvailableRecipes
	 */
	struct UWidget_ManualManufacturing_C_GetAvailableRecipes_Params
	{
	public:
		TArray<class UClass*>                                      AvailableRecipes;                                        // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.SetSelectedRecipe
	 */
	struct UWidget_ManualManufacturing_C_SetSelectedRecipe_Params
	{
	public:
		class UClass*                                              mRecipe;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.InitRecipeList
	 */
	struct UWidget_ManualManufacturing_C_InitRecipeList_Params
	{	};

	/**
	 * Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.InpActEvt_IA_Craft_K2Node_EnhancedInputActionEvent_3
	 */
	struct UWidget_ManualManufacturing_C_InpActEvt_IA_Craft_K2Node_EnhancedInputActionEvent_3_Params
	{
	public:
		struct FInputActionValue                                   ActionValue;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		float                                                      ElapsedTime;                                             // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TriggeredTime;                                           // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInputAction*                                        SourceAction;                                            // 0x0028(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.InpActEvt_IA_Craft_K2Node_EnhancedInputActionEvent_2
	 */
	struct UWidget_ManualManufacturing_C_InpActEvt_IA_Craft_K2Node_EnhancedInputActionEvent_2_Params
	{
	public:
		struct FInputActionValue                                   ActionValue;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		float                                                      ElapsedTime;                                             // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TriggeredTime;                                           // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInputAction*                                        SourceAction;                                            // 0x0028(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.InpActEvt_IA_Craft_K2Node_EnhancedInputActionEvent_1
	 */
	struct UWidget_ManualManufacturing_C_InpActEvt_IA_Craft_K2Node_EnhancedInputActionEvent_1_Params
	{
	public:
		struct FInputActionValue                                   ActionValue;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		float                                                      ElapsedTime;                                             // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TriggeredTime;                                           // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInputAction*                                        SourceAction;                                            // 0x0028(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.Destruct
	 */
	struct UWidget_ManualManufacturing_C_Destruct_Params
	{	};

	/**
	 * Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.Construct
	 */
	struct UWidget_ManualManufacturing_C_Construct_Params
	{	};

	/**
	 * Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.SetupProductionMode
	 */
	struct UWidget_ManualManufacturing_C_SetupProductionMode_Params
	{	};

	/**
	 * Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.OnNewRecipeSet
	 */
	struct UWidget_ManualManufacturing_C_OnNewRecipeSet_Params
	{
	public:
		class UClass*                                              mNewRecipe;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.Init
	 */
	struct UWidget_ManualManufacturing_C_Init_Params
	{	};

	/**
	 * Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.StartProducing
	 */
	struct UWidget_ManualManufacturing_C_StartProducing_Params
	{
	public:
		double                                                     dt;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.EndProducing
	 */
	struct UWidget_ManualManufacturing_C_EndProducing_Params
	{	};

	/**
	 * Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.Tick
	 */
	struct UWidget_ManualManufacturing_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.OnCraftingProgressbarAnimationLoop
	 */
	struct UWidget_ManualManufacturing_C_OnCraftingProgressbarAnimationLoop_Params
	{	};

	/**
	 * Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.IncreaseGlow
	 */
	struct UWidget_ManualManufacturing_C_IncreaseGlow_Params
	{	};

	/**
	 * Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.DecreseGlow
	 */
	struct UWidget_ManualManufacturing_C_DecreseGlow_Params
	{	};

	/**
	 * Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.Shake
	 */
	struct UWidget_ManualManufacturing_C_Shake_Params
	{	};

	/**
	 * Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.WarningMessageCheck
	 */
	struct UWidget_ManualManufacturing_C_WarningMessageCheck_Params
	{	};

	/**
	 * Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.ProductionStartupDelay
	 */
	struct UWidget_ManualManufacturing_C_ProductionStartupDelay_Params
	{
	public:
		float                                                      ProduceSpeed;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.PlayLEDSound
	 */
	struct UWidget_ManualManufacturing_C_PlayLEDSound_Params
	{	};

	/**
	 * Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.ShowAddedToInventory
	 */
	struct UWidget_ManualManufacturing_C_ShowAddedToInventory_Params
	{	};

	/**
	 * Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.HideAddedToInventoryEvent
	 */
	struct UWidget_ManualManufacturing_C_HideAddedToInventoryEvent_Params
	{	};

	/**
	 * Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWidget_ManualManufacturing_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.BndEvt__mOnlyShowAffordableCheckbox_K2Node_ComponentBoundEvent_3_OnCheckChanged__DelegateSignature
	 */
	struct UWidget_ManualManufacturing_C_BndEvt__mOnlyShowAffordableCheckbox_K2Node_ComponentBoundEvent_3_OnCheckChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.BndEvt__mSearchbar_K2Node_ComponentBoundEvent_4_OnTextChanged__DelegateSignature
	 */
	struct UWidget_ManualManufacturing_C_BndEvt__mSearchbar_K2Node_ComponentBoundEvent_4_OnTextChanged__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.InitOnlyShowAffordable
	 */
	struct UWidget_ManualManufacturing_C_InitOnlyShowAffordable_Params
	{	};

	/**
	 * Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.OnCategoryClicked
	 */
	struct UWidget_ManualManufacturing_C_OnCategoryClicked_Params
	{
	public:
		class UWidget_CraftBench_Category_C*                       Instigator;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.ExecuteUbergraph_Widget_ManualManufacturing
	 */
	struct UWidget_ManualManufacturing_C_ExecuteUbergraph_Widget_ManualManufacturing_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PVUG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.OnRelevantClassesUpdated__DelegateSignature
	 */
	struct UWidget_ManualManufacturing_C_OnRelevantClassesUpdated__DelegateSignature_Params
	{
	public:
		TArray<class UClass*>                                      relevantClasses;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
