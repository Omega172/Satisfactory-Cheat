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
	 * Function Widget_PlayerHUD.Widget_PlayerHUD_C.UnbindMappingContexts
	 */
	struct UWidget_PlayerHUD_C_UnbindMappingContexts_Params
	{	};

	/**
	 * Function Widget_PlayerHUD.Widget_PlayerHUD_C.SetupMappingContexts
	 */
	struct UWidget_PlayerHUD_C_SetupMappingContexts_Params
	{	};

	/**
	 * Function Widget_PlayerHUD.Widget_PlayerHUD_C.On Shortcut Pressed
	 */
	struct UWidget_PlayerHUD_C_OnShortcutPressed_Params
	{
	public:
		int32_t                                                    shortcutIndex;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Result;                                                  // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PlayerHUD.Widget_PlayerHUD_C.StopCollectBarSFX
	 */
	struct UWidget_PlayerHUD_C_StopCollectBarSFX_Params
	{	};

	/**
	 * Function Widget_PlayerHUD.Widget_PlayerHUD_C.PlayCollectBarSFX
	 */
	struct UWidget_PlayerHUD_C_PlayCollectBarSFX_Params
	{	};

	/**
	 * Function Widget_PlayerHUD.Widget_PlayerHUD_C.OnPickupToCollectStateUpdated
	 */
	struct UWidget_PlayerHUD_C_OnPickupToCollectStateUpdated_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PlayerHUD.Widget_PlayerHUD_C.UpdateCollectBarPercent
	 */
	struct UWidget_PlayerHUD_C_UpdateCollectBarPercent_Params
	{	};

	/**
	 * Function Widget_PlayerHUD.Widget_PlayerHUD_C.OnToggleInteractUI
	 */
	struct UWidget_PlayerHUD_C_OnToggleInteractUI_Params
	{
	public:
		bool                                                       IsOpen;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PKRQ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              interactWidgetClass;                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PlayerHUD.Widget_PlayerHUD_C.OnToggleInventory
	 */
	struct UWidget_PlayerHUD_C_OnToggleInventory_Params
	{
	public:
		bool                                                       IsOpen;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LBRO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_PlayerHUD.Widget_PlayerHUD_C.SetImageVisibility
	 */
	struct UWidget_PlayerHUD_C_SetImageVisibility_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_V9PN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UImage*                                              Image;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PlayerHUD.Widget_PlayerHUD_C.OnDisabledInputGateChanged
	 */
	struct UWidget_PlayerHUD_C_OnDisabledInputGateChanged_Params
	{
	public:
		struct FDisabledInputGate                                  NewValue;                                                // 0x0000(0x0002)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function Widget_PlayerHUD.Widget_PlayerHUD_C.InpActEvt_IA_Player_HotbarShortcut1_K2Node_EnhancedInputActionEvent_10
	 */
	struct UWidget_PlayerHUD_C_InpActEvt_IA_Player_HotbarShortcut1_K2Node_EnhancedInputActionEvent_10_Params
	{
	public:
		struct FInputActionValue                                   ActionValue;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		float                                                      ElapsedTime;                                             // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TriggeredTime;                                           // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInputAction*                                        SourceAction;                                            // 0x0028(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PlayerHUD.Widget_PlayerHUD_C.InpActEvt_IA_Player_HotbarShortcut2_K2Node_EnhancedInputActionEvent_9
	 */
	struct UWidget_PlayerHUD_C_InpActEvt_IA_Player_HotbarShortcut2_K2Node_EnhancedInputActionEvent_9_Params
	{
	public:
		struct FInputActionValue                                   ActionValue;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		float                                                      ElapsedTime;                                             // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TriggeredTime;                                           // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInputAction*                                        SourceAction;                                            // 0x0028(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PlayerHUD.Widget_PlayerHUD_C.InpActEvt_IA_Player_HotbarShortcut3_K2Node_EnhancedInputActionEvent_8
	 */
	struct UWidget_PlayerHUD_C_InpActEvt_IA_Player_HotbarShortcut3_K2Node_EnhancedInputActionEvent_8_Params
	{
	public:
		struct FInputActionValue                                   ActionValue;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		float                                                      ElapsedTime;                                             // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TriggeredTime;                                           // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInputAction*                                        SourceAction;                                            // 0x0028(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PlayerHUD.Widget_PlayerHUD_C.InpActEvt_IA_Player_HotbarShortcut4_K2Node_EnhancedInputActionEvent_7
	 */
	struct UWidget_PlayerHUD_C_InpActEvt_IA_Player_HotbarShortcut4_K2Node_EnhancedInputActionEvent_7_Params
	{
	public:
		struct FInputActionValue                                   ActionValue;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		float                                                      ElapsedTime;                                             // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TriggeredTime;                                           // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInputAction*                                        SourceAction;                                            // 0x0028(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PlayerHUD.Widget_PlayerHUD_C.InpActEvt_IA_Player_HotbarShortcut5_K2Node_EnhancedInputActionEvent_6
	 */
	struct UWidget_PlayerHUD_C_InpActEvt_IA_Player_HotbarShortcut5_K2Node_EnhancedInputActionEvent_6_Params
	{
	public:
		struct FInputActionValue                                   ActionValue;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		float                                                      ElapsedTime;                                             // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TriggeredTime;                                           // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInputAction*                                        SourceAction;                                            // 0x0028(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PlayerHUD.Widget_PlayerHUD_C.InpActEvt_IA_Player_HotbarShortcut6_K2Node_EnhancedInputActionEvent_5
	 */
	struct UWidget_PlayerHUD_C_InpActEvt_IA_Player_HotbarShortcut6_K2Node_EnhancedInputActionEvent_5_Params
	{
	public:
		struct FInputActionValue                                   ActionValue;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		float                                                      ElapsedTime;                                             // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TriggeredTime;                                           // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInputAction*                                        SourceAction;                                            // 0x0028(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PlayerHUD.Widget_PlayerHUD_C.InpActEvt_IA_Player_HotbarShortcut7_K2Node_EnhancedInputActionEvent_4
	 */
	struct UWidget_PlayerHUD_C_InpActEvt_IA_Player_HotbarShortcut7_K2Node_EnhancedInputActionEvent_4_Params
	{
	public:
		struct FInputActionValue                                   ActionValue;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		float                                                      ElapsedTime;                                             // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TriggeredTime;                                           // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInputAction*                                        SourceAction;                                            // 0x0028(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PlayerHUD.Widget_PlayerHUD_C.InpActEvt_IA_Player_HotbarShortcut8_K2Node_EnhancedInputActionEvent_3
	 */
	struct UWidget_PlayerHUD_C_InpActEvt_IA_Player_HotbarShortcut8_K2Node_EnhancedInputActionEvent_3_Params
	{
	public:
		struct FInputActionValue                                   ActionValue;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		float                                                      ElapsedTime;                                             // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TriggeredTime;                                           // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInputAction*                                        SourceAction;                                            // 0x0028(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PlayerHUD.Widget_PlayerHUD_C.InpActEvt_IA_Player_HotbarShortcut9_K2Node_EnhancedInputActionEvent_2
	 */
	struct UWidget_PlayerHUD_C_InpActEvt_IA_Player_HotbarShortcut9_K2Node_EnhancedInputActionEvent_2_Params
	{
	public:
		struct FInputActionValue                                   ActionValue;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		float                                                      ElapsedTime;                                             // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TriggeredTime;                                           // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInputAction*                                        SourceAction;                                            // 0x0028(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PlayerHUD.Widget_PlayerHUD_C.InpActEvt_IA_Player_HotbarShortcut10_K2Node_EnhancedInputActionEvent_1
	 */
	struct UWidget_PlayerHUD_C_InpActEvt_IA_Player_HotbarShortcut10_K2Node_EnhancedInputActionEvent_1_Params
	{
	public:
		struct FInputActionValue                                   ActionValue;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		float                                                      ElapsedTime;                                             // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TriggeredTime;                                           // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInputAction*                                        SourceAction;                                            // 0x0028(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PlayerHUD.Widget_PlayerHUD_C.Construct
	 */
	struct UWidget_PlayerHUD_C_Construct_Params
	{	};

	/**
	 * Function Widget_PlayerHUD.Widget_PlayerHUD_C.EventUpdateQuickslotBackgroundOpacity
	 */
	struct UWidget_PlayerHUD_C_EventUpdateQuickslotBackgroundOpacity_Params
	{
	public:
		class FString                                              updatedCvar;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PlayerHUD.Widget_PlayerHUD_C.SetBuildgunMode
	 */
	struct UWidget_PlayerHUD_C_SetBuildgunMode_Params
	{
	public:
		EBuildMenu_Modes                                           Mode;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PlayerHUD.Widget_PlayerHUD_C.Destruct
	 */
	struct UWidget_PlayerHUD_C_Destruct_Params
	{	};

	/**
	 * Function Widget_PlayerHUD.Widget_PlayerHUD_C.EventUpdateProgressionVisibility
	 */
	struct UWidget_PlayerHUD_C_EventUpdateProgressionVisibility_Params
	{
	public:
		class FString                                              updatedCvar;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PlayerHUD.Widget_PlayerHUD_C.EventUpdatePhaseInfoVisibility
	 */
	struct UWidget_PlayerHUD_C_EventUpdatePhaseInfoVisibility_Params
	{
	public:
		class FString                                              updatedCvar;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PlayerHUD.Widget_PlayerHUD_C.OnUpdateHUD_ESlot
	 */
	struct UWidget_PlayerHUD_C_OnUpdateHUD_ESlot_Params
	{
	public:
		EEquipmentSlot                                             EquipmentSlotType;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PlayerHUD.Widget_PlayerHUD_C.OnOpenAllHUD_ESlots
	 */
	struct UWidget_PlayerHUD_C_OnOpenAllHUD_ESlots_Params
	{	};

	/**
	 * Function Widget_PlayerHUD.Widget_PlayerHUD_C.OnCloseAllHUD_ESlots
	 */
	struct UWidget_PlayerHUD_C_OnCloseAllHUD_ESlots_Params
	{	};

	/**
	 * Function Widget_PlayerHUD.Widget_PlayerHUD_C.ForceUpdateEquipmentCrosshair
	 */
	struct UWidget_PlayerHUD_C_ForceUpdateEquipmentCrosshair_Params
	{	};

	/**
	 * Function Widget_PlayerHUD.Widget_PlayerHUD_C.ExecuteUbergraph_Widget_PlayerHUD
	 */
	struct UWidget_PlayerHUD_C_ExecuteUbergraph_Widget_PlayerHUD_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Z1IK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
