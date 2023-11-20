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
	 * Function Widget_Manufacturing.Widget_Manufacturing_C.OnManufacturingRecipeClicked_UpdateUI
	 */
	struct UWidget_Manufacturing_C_OnManufacturingRecipeClicked_UpdateUI_Params
	{	};

	/**
	 * Function Widget_Manufacturing.Widget_Manufacturing_C.ClearAndHideSearchResults
	 */
	struct UWidget_Manufacturing_C_ClearAndHideSearchResults_Params
	{	};

	/**
	 * Function Widget_Manufacturing.Widget_Manufacturing_C.GetAvailableRecipes
	 */
	struct UWidget_Manufacturing_C_GetAvailableRecipes_Params
	{
	public:
		TArray<class UClass*>                                      AvailableRecipes;                                        // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function Widget_Manufacturing.Widget_Manufacturing_C.OnSearchCreateResults
	 */
	struct UWidget_Manufacturing_C_OnSearchCreateResults_Params
	{
	public:
		class FText                                                mText;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_Manufacturing.Widget_Manufacturing_C.Update Recipe Name
	 */
	struct UWidget_Manufacturing_C_UpdateRecipeName_Params
	{
	public:
		class UClass*                                              ActiverRecipe;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Manufacturing.Widget_Manufacturing_C.GetManufacturingBackground
	 */
	struct UWidget_Manufacturing_C_GetManufacturingBackground_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Manufacturing.Widget_Manufacturing_C.SetupFluxPower
	 */
	struct UWidget_Manufacturing_C_SetupFluxPower_Params
	{	};

	/**
	 * Function Widget_Manufacturing.Widget_Manufacturing_C.UpdateIOSlots
	 */
	struct UWidget_Manufacturing_C_UpdateIOSlots_Params
	{	};

	/**
	 * Function Widget_Manufacturing.Widget_Manufacturing_C.GetCylceProducedAndNameText
	 */
	struct UWidget_Manufacturing_C_GetCylceProducedAndNameText_Params
	{
	public:
		class UClass*                                              recipe;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class FText                                                ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_Manufacturing.Widget_Manufacturing_C.CreateCategoryHeader
	 */
	struct UWidget_Manufacturing_C_CreateCategoryHeader_Params
	{
	public:
		class UPanelWidget*                                        Container;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class FText                                                CategoryName;                                            // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       isCollapsed;                                             // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8KF9[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget_CraftBench_Category_C*                       CategoryWidget;                                          // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Manufacturing.Widget_Manufacturing_C.AddUniqueRecipe
	 */
	struct UWidget_Manufacturing_C_AddUniqueRecipe_Params
	{
	public:
		TArray<struct FItemCategoryRecipeStruct>                   CategorizedRecipes;                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UClass*                                              recipe;                                                  // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Manufacturing.Widget_Manufacturing_C.GenerateOutputSlots
	 */
	struct UWidget_Manufacturing_C_GenerateOutputSlots_Params
	{	};

	/**
	 * Function Widget_Manufacturing.Widget_Manufacturing_C.SetActivatedRecipe
	 */
	struct UWidget_Manufacturing_C_SetActivatedRecipe_Params
	{
	public:
		class UClass*                                              mActivatedRecipe;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Manufacturing.Widget_Manufacturing_C.ReconstructIOSlots
	 */
	struct UWidget_Manufacturing_C_ReconstructIOSlots_Params
	{	};

	/**
	 * Function Widget_Manufacturing.Widget_Manufacturing_C.DropInventorySlotStack
	 */
	struct UWidget_Manufacturing_C_DropInventorySlotStack_Params
	{
	public:
		class UWidget_InventorySlot_C*                             InventorySlot;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		bool                                                       WasStackMoved;                                           // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_L2DE[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_Manufacturing.Widget_Manufacturing_C.UpdateWindowText
	 */
	struct UWidget_Manufacturing_C_UpdateWindowText_Params
	{	};

	/**
	 * Function Widget_Manufacturing.Widget_Manufacturing_C.GetItemAmount
	 */
	struct UWidget_Manufacturing_C_GetItemAmount_Params
	{
	public:
		class UClass*                                              recipe;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FItemAmount                                         ItemAmount;                                              // 0x0008(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function Widget_Manufacturing.Widget_Manufacturing_C.UpdateWarningVisibility
	 */
	struct UWidget_Manufacturing_C_UpdateWarningVisibility_Params
	{
	public:
		class AFGBuildableManufacturer*                            buildableManufacturer;                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsProductionPaused;                                      // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Manufacturing.Widget_Manufacturing_C.UpdateProductionStats
	 */
	struct UWidget_Manufacturing_C_UpdateProductionStats_Params
	{	};

	/**
	 * Function Widget_Manufacturing.Widget_Manufacturing_C.UpdateOutputSlotInfo
	 */
	struct UWidget_Manufacturing_C_UpdateOutputSlotInfo_Params
	{
	public:
		class UClass*                                              recipe;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Manufacturing.Widget_Manufacturing_C.UpdateProductivityPercentage
	 */
	struct UWidget_Manufacturing_C_UpdateProductivityPercentage_Params
	{	};

	/**
	 * Function Widget_Manufacturing.Widget_Manufacturing_C.GetPotentialButton
	 */
	struct UWidget_Manufacturing_C_GetPotentialButton_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Manufacturing.Widget_Manufacturing_C.CreateInfoBox
	 */
	struct UWidget_Manufacturing_C_CreateInfoBox_Params
	{
	public:
		class UClass*                                              recipe;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Manufacturing.Widget_Manufacturing_C.OnManufacturingRecipeClicked
	 */
	struct UWidget_Manufacturing_C_OnManufacturingRecipeClicked_Params
	{
	public:
		class UClass*                                              recipe;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Manufacturing.Widget_Manufacturing_C.OnStopHoveringManufacturingRecipe
	 */
	struct UWidget_Manufacturing_C_OnStopHoveringManufacturingRecipe_Params
	{
	public:
		class UClass*                                              recipe;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Manufacturing.Widget_Manufacturing_C.OnManufacturingRecipeHovered
	 */
	struct UWidget_Manufacturing_C_OnManufacturingRecipeHovered_Params
	{
	public:
		class UClass*                                              recipe;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Manufacturing.Widget_Manufacturing_C.GetIsInfoButtonTabEnabled
	 */
	struct UWidget_Manufacturing_C_GetIsInfoButtonTabEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Manufacturing.Widget_Manufacturing_C.RemoveInputSlot
	 */
	struct UWidget_Manufacturing_C_RemoveInputSlot_Params
	{
	public:
		bool                                                       IsOutput;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5WTA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_Manufacturing.Widget_Manufacturing_C.AddSingleIOSlot
	 */
	struct UWidget_Manufacturing_C_AddSingleIOSlot_Params
	{
	public:
		bool                                                       mIsOutput;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZS5G[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_Manufacturing.Widget_Manufacturing_C.CreateIOSlots
	 */
	struct UWidget_Manufacturing_C_CreateIOSlots_Params
	{
	public:
		bool                                                       mIsOutputs;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_X3VC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_Manufacturing.Widget_Manufacturing_C.SetSelectedRecipe
	 */
	struct UWidget_Manufacturing_C_SetSelectedRecipe_Params
	{
	public:
		class UClass*                                              recipe;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Manufacturing.Widget_Manufacturing_C.InitRecipeList
	 */
	struct UWidget_Manufacturing_C_InitRecipeList_Params
	{	};

	/**
	 * Function Widget_Manufacturing.Widget_Manufacturing_C.Init
	 */
	struct UWidget_Manufacturing_C_Init_Params
	{	};

	/**
	 * Function Widget_Manufacturing.Widget_Manufacturing_C.OnNewRecipeSet
	 */
	struct UWidget_Manufacturing_C_OnNewRecipeSet_Params
	{
	public:
		class UClass*                                              newRecipe;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Manufacturing.Widget_Manufacturing_C.BndEvt__Widget_StandbyButton_K2Node_ComponentBoundEvent_12_OnStandbyClicked__DelegateSignature
	 */
	struct UWidget_Manufacturing_C_BndEvt__Widget_StandbyButton_K2Node_ComponentBoundEvent_12_OnStandbyClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_Manufacturing.Widget_Manufacturing_C.Construct
	 */
	struct UWidget_Manufacturing_C_Construct_Params
	{	};

	/**
	 * Function Widget_Manufacturing.Widget_Manufacturing_C.Destruct
	 */
	struct UWidget_Manufacturing_C_Destruct_Params
	{	};

	/**
	 * Function Widget_Manufacturing.Widget_Manufacturing_C.BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature
	 */
	struct UWidget_Manufacturing_C_BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_Manufacturing.Widget_Manufacturing_C.BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_1_OnTabButtonClicked__DelegateSignature
	 */
	struct UWidget_Manufacturing_C_BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_1_OnTabButtonClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    ButtonIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Manufacturing.Widget_Manufacturing_C.OnReplicationDetailActorReplicated
	 */
	struct UWidget_Manufacturing_C_OnReplicationDetailActorReplicated_Params
	{
	public:
		class AActor*                                              replicationDetailActorOwner;                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Manufacturing.Widget_Manufacturing_C.OnCategoryClicked
	 */
	struct UWidget_Manufacturing_C_OnCategoryClicked_Params
	{
	public:
		class UWidget_CraftBench_Category_C*                       Instigator;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Manufacturing.Widget_Manufacturing_C.OnStandbyHasChanged
	 */
	struct UWidget_Manufacturing_C_OnStandbyHasChanged_Params
	{
	public:
		bool                                                       State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Manufacturing.Widget_Manufacturing_C.OnCustomTick
	 */
	struct UWidget_Manufacturing_C_OnCustomTick_Params
	{
	public:
		float                                                      UpdateTime;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Manufacturing.Widget_Manufacturing_C.BndEvt__mSearchbar_K2Node_ComponentBoundEvent_2_OnTextChanged__DelegateSignature
	 */
	struct UWidget_Manufacturing_C_BndEvt__mSearchbar_K2Node_ComponentBoundEvent_2_OnTextChanged__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_Manufacturing.Widget_Manufacturing_C.OnFactoryClipboardPasted
	 */
	struct UWidget_Manufacturing_C_OnFactoryClipboardPasted_Params
	{
	public:
		class UObject*                                             interactObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UFGFactoryClipboardSettings*                         factoryClipboardSettings;                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Manufacturing.Widget_Manufacturing_C.ExecuteUbergraph_Widget_Manufacturing
	 */
	struct UWidget_Manufacturing_C_ExecuteUbergraph_Widget_Manufacturing_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RX2M[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
