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
	 * Function Widget_BuildMode.Widget_BuildMode_C.OnHologramNudgeFailed
	 */
	struct UWidget_BuildMode_C_OnHologramNudgeFailed_Params
	{
	public:
		class AFGHologram*                                         Hologram;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		ENudgeFailReason                                           Reason;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMode.Widget_BuildMode_C.OnHologramLockStateChanged
	 */
	struct UWidget_BuildMode_C_OnHologramLockStateChanged_Params
	{
	public:
		class AFGHologram*                                         Hologram;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       Locked;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5ETM[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_BuildMode.Widget_BuildMode_C.GetGameModeFeedback
	 */
	struct UWidget_BuildMode_C_GetGameModeFeedback_Params
	{	};

	/**
	 * Function Widget_BuildMode.Widget_BuildMode_C.SortAndTruncateCost
	 */
	struct UWidget_BuildMode_C_SortAndTruncateCost_Params
	{
	public:
		TArray<struct FItemAmount>                                 cost;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FItemAmount>                                 SortedCostSlots;                                         // 0x0010(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function Widget_BuildMode.Widget_BuildMode_C.SetKeybindingHints
	 */
	struct UWidget_BuildMode_C_SetKeybindingHints_Params
	{
	public:
		TArray<struct FStruct_KeybindingHint>                      mKeybinds;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Widget_BuildMode.Widget_BuildMode_C.ShowHideBuildModeHUD
	 */
	struct UWidget_BuildMode_C_ShowHideBuildModeHUD_Params
	{
	public:
		bool                                                       mHideBuildModeHUD;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NV2G[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_BuildMode.Widget_BuildMode_C.FormatName
	 */
	struct UWidget_BuildMode_C_FormatName_Params
	{
	public:
		class UClass*                                              Descriptor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		double                                                     ZoopAmount;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0010(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function Widget_BuildMode.Widget_BuildMode_C.OpenQuickSwitchBuilding
	 */
	struct UWidget_BuildMode_C_OpenQuickSwitchBuilding_Params
	{
	public:
		class UClass*                                              mItemDescriptor;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMode.Widget_BuildMode_C.SetCurrentBuildModeText
	 */
	struct UWidget_BuildMode_C_SetCurrentBuildModeText_Params
	{
	public:
		class UClass*                                              buildMode;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMode.Widget_BuildMode_C.SetHideAllHints
	 */
	struct UWidget_BuildMode_C_SetHideAllHints_Params
	{
	public:
		bool                                                       mHideAllHints;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMode.Widget_BuildMode_C.SetName
	 */
	struct UWidget_BuildMode_C_SetName_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Widget_BuildMode.Widget_BuildMode_C.GetHasMultipleSplineModes
	 */
	struct UWidget_BuildMode_C_GetHasMultipleSplineModes_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMode.Widget_BuildMode_C.UpdateHintVisibility
	 */
	struct UWidget_BuildMode_C_UpdateHintVisibility_Params
	{	};

	/**
	 * Function Widget_BuildMode.Widget_BuildMode_C.SetHologramCost
	 */
	struct UWidget_BuildMode_C_SetHologramCost_Params
	{
	public:
		TArray<struct FItemAmount>                                 mCurrentHologramCost;                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       HasValidState;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AUMN[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_BuildMode.Widget_BuildMode_C.UpdateBuildDisqualifiersText
	 */
	struct UWidget_BuildMode_C_UpdateBuildDisqualifiersText_Params
	{
	public:
		TArray<class UClass*>                                      Disqualifiers;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Widget_BuildMode.Widget_BuildMode_C.UpdateCost
	 */
	struct UWidget_BuildMode_C_UpdateCost_Params
	{	};

	/**
	 * Function Widget_BuildMode.Widget_BuildMode_C.CreateCostSlots
	 */
	struct UWidget_BuildMode_C_CreateCostSlots_Params
	{
	public:
		TArray<struct FItemAmount>                                 cost;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Widget_BuildMode.Widget_BuildMode_C.InpActEvt_IA_QuickSwitch_K2Node_EnhancedInputActionEvent_7
	 */
	struct UWidget_BuildMode_C_InpActEvt_IA_QuickSwitch_K2Node_EnhancedInputActionEvent_7_Params
	{
	public:
		struct FInputActionValue                                   ActionValue;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		float                                                      ElapsedTime;                                             // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TriggeredTime;                                           // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInputAction*                                        SourceAction;                                            // 0x0028(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMode.Widget_BuildMode_C.InpActEvt_IA_QuickSwitch_K2Node_EnhancedInputActionEvent_6
	 */
	struct UWidget_BuildMode_C_InpActEvt_IA_QuickSwitch_K2Node_EnhancedInputActionEvent_6_Params
	{
	public:
		struct FInputActionValue                                   ActionValue;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		float                                                      ElapsedTime;                                             // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TriggeredTime;                                           // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInputAction*                                        SourceAction;                                            // 0x0028(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMode.Widget_BuildMode_C.InpActEvt_IA_QuickSwitch_K2Node_EnhancedInputActionEvent_5
	 */
	struct UWidget_BuildMode_C_InpActEvt_IA_QuickSwitch_K2Node_EnhancedInputActionEvent_5_Params
	{
	public:
		struct FInputActionValue                                   ActionValue;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		float                                                      ElapsedTime;                                             // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TriggeredTime;                                           // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInputAction*                                        SourceAction;                                            // 0x0028(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMode.Widget_BuildMode_C.InpActEvt_IA_ModeSelect_K2Node_EnhancedInputActionEvent_4
	 */
	struct UWidget_BuildMode_C_InpActEvt_IA_ModeSelect_K2Node_EnhancedInputActionEvent_4_Params
	{
	public:
		struct FInputActionValue                                   ActionValue;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		float                                                      ElapsedTime;                                             // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TriggeredTime;                                           // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInputAction*                                        SourceAction;                                            // 0x0028(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMode.Widget_BuildMode_C.InpActEvt_IA_ModeSelect_K2Node_EnhancedInputActionEvent_3
	 */
	struct UWidget_BuildMode_C_InpActEvt_IA_ModeSelect_K2Node_EnhancedInputActionEvent_3_Params
	{
	public:
		struct FInputActionValue                                   ActionValue;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		float                                                      ElapsedTime;                                             // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TriggeredTime;                                           // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInputAction*                                        SourceAction;                                            // 0x0028(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMode.Widget_BuildMode_C.InpActEvt_IA_ModeSelect_K2Node_EnhancedInputActionEvent_2
	 */
	struct UWidget_BuildMode_C_InpActEvt_IA_ModeSelect_K2Node_EnhancedInputActionEvent_2_Params
	{
	public:
		struct FInputActionValue                                   ActionValue;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		float                                                      ElapsedTime;                                             // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TriggeredTime;                                           // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInputAction*                                        SourceAction;                                            // 0x0028(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMode.Widget_BuildMode_C.InpActEvt_IA_HideHUD_K2Node_EnhancedInputActionEvent_1
	 */
	struct UWidget_BuildMode_C_InpActEvt_IA_HideHUD_K2Node_EnhancedInputActionEvent_1_Params
	{
	public:
		struct FInputActionValue                                   ActionValue;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		float                                                      ElapsedTime;                                             // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TriggeredTime;                                           // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInputAction*                                        SourceAction;                                            // 0x0028(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMode.Widget_BuildMode_C.Construct
	 */
	struct UWidget_BuildMode_C_Construct_Params
	{	};

	/**
	 * Function Widget_BuildMode.Widget_BuildMode_C.OnEscapePressed
	 */
	struct UWidget_BuildMode_C_OnEscapePressed_Params
	{	};

	/**
	 * Function Widget_BuildMode.Widget_BuildMode_C.OnCustomTick
	 */
	struct UWidget_BuildMode_C_OnCustomTick_Params
	{
	public:
		float                                                      UpdateTime;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMode.Widget_BuildMode_C.PlayOnBuildModeChangedAnimation
	 */
	struct UWidget_BuildMode_C_PlayOnBuildModeChangedAnimation_Params
	{
	public:
		class UClass*                                              buildMode;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMode.Widget_BuildMode_C.OnRecipeSampled
	 */
	struct UWidget_BuildMode_C_OnRecipeSampled_Params
	{
	public:
		class UClass*                                              newRecipe;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMode.Widget_BuildMode_C.OnOpenQuickSwitchBuildings
	 */
	struct UWidget_BuildMode_C_OnOpenQuickSwitchBuildings_Params
	{	};

	/**
	 * Function Widget_BuildMode.Widget_BuildMode_C.OnCloseQuickSwitchBuilding
	 */
	struct UWidget_BuildMode_C_OnCloseQuickSwitchBuilding_Params
	{	};

	/**
	 * Function Widget_BuildMode.Widget_BuildMode_C.EnableHighContrastBuildMode
	 */
	struct UWidget_BuildMode_C_EnableHighContrastBuildMode_Params
	{	};

	/**
	 * Function Widget_BuildMode.Widget_BuildMode_C.SetSmallSlots
	 */
	struct UWidget_BuildMode_C_SetSmallSlots_Params
	{	};

	/**
	 * Function Widget_BuildMode.Widget_BuildMode_C.PreConstruct
	 */
	struct UWidget_BuildMode_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMode.Widget_BuildMode_C.OnOpenQuickSwitchBuildModes
	 */
	struct UWidget_BuildMode_C_OnOpenQuickSwitchBuildModes_Params
	{	};

	/**
	 * Function Widget_BuildMode.Widget_BuildMode_C.BndEvt__BPW_Build_QuickSwitch_K2Node_ComponentBoundEvent_1_OnBuildingClose__DelegateSignature
	 */
	struct UWidget_BuildMode_C_BndEvt__BPW_Build_QuickSwitch_K2Node_ComponentBoundEvent_1_OnBuildingClose__DelegateSignature_Params
	{
	public:
		class UClass*                                              recipe;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMode.Widget_BuildMode_C.BndEvt__BPW_Build_QuickSwitch_K2Node_ComponentBoundEvent_2_OnBuildModeClosed__DelegateSignature
	 */
	struct UWidget_BuildMode_C_BndEvt__BPW_Build_QuickSwitch_K2Node_ComponentBoundEvent_2_OnBuildModeClosed__DelegateSignature_Params
	{
	public:
		class UClass*                                              buildMode;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMode.Widget_BuildMode_C.OnCloseQuickSwitchBuildMode
	 */
	struct UWidget_BuildMode_C_OnCloseQuickSwitchBuildMode_Params
	{	};

	/**
	 * Function Widget_BuildMode.Widget_BuildMode_C.OnHotbarUpdatedForMaterialDescriptor
	 */
	struct UWidget_BuildMode_C_OnHotbarUpdatedForMaterialDescriptor_Params
	{
	public:
		class UClass*                                              MaterialDesc;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMode.Widget_BuildMode_C.OnZoopUpdated
	 */
	struct UWidget_BuildMode_C_OnZoopUpdated_Params
	{
	public:
		float                                                      currentZoop;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      maxZoop;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             zoopLocation;                                            // 0x0008(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMode.Widget_BuildMode_C.OnRecipeChanged
	 */
	struct UWidget_BuildMode_C_OnRecipeChanged_Params
	{
	public:
		class UClass*                                              newRecipe;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMode.Widget_BuildMode_C.SetOwningState
	 */
	struct UWidget_BuildMode_C_SetOwningState_Params
	{
	public:
		class UFGBuildGunState*                                    mOwningState;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMode.Widget_BuildMode_C.BndEvt__Widget_BuildMode_BPW_Build_QuickSwitch_K2Node_ComponentBoundEvent_0_OnBlueprintClosed__DelegateSignature
	 */
	struct UWidget_BuildMode_C_BndEvt__Widget_BuildMode_BPW_Build_QuickSwitch_K2Node_ComponentBoundEvent_0_OnBlueprintClosed__DelegateSignature_Params
	{
	public:
		class UFGBlueprintDescriptor*                              Blueprint;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMode.Widget_BuildMode_C.ExecuteUbergraph_Widget_BuildMode
	 */
	struct UWidget_BuildMode_C_ExecuteUbergraph_Widget_BuildMode_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMode.Widget_BuildMode_C.OnQuickSwitchBuildModeButtonDown__DelegateSignature
	 */
	struct UWidget_BuildMode_C_OnQuickSwitchBuildModeButtonDown__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_BuildMode.Widget_BuildMode_C.OnQuickSwitchClosed__DelegateSignature
	 */
	struct UWidget_BuildMode_C_OnQuickSwitchClosed__DelegateSignature_Params
	{
	public:
		class UClass*                                              recipe;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMode.Widget_BuildMode_C.OnQuickSwitchBuildingButtonDown__DelegateSignature
	 */
	struct UWidget_BuildMode_C_OnQuickSwitchBuildingButtonDown__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
