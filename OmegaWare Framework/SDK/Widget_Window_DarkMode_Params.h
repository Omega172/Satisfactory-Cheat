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
	 * Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.OnRelevantItemHotkeyPressed
	 */
	struct UWidget_Window_DarkMode_C_OnRelevantItemHotkeyPressed_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TW1G[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.SetTitleForTab
	 */
	struct UWidget_Window_DarkMode_C_SetTitleForTab_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    Index;                                                   // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0AXC[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.SetShowCloseButton
	 */
	struct UWidget_Window_DarkMode_C_SetShowCloseButton_Params
	{	};

	/**
	 * Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.SetTabVisibility
	 */
	struct UWidget_Window_DarkMode_C_SetTabVisibility_Params
	{
	public:
		int32_t                                                    TabIndex;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsVisible;                                               // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.HideReplicationLoader
	 */
	struct UWidget_Window_DarkMode_C_HideReplicationLoader_Params
	{
	public:
		class AActor*                                              replicationDetailActorOwner;                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.SetUsesReplication
	 */
	struct UWidget_Window_DarkMode_C_SetUsesReplication_Params
	{
	public:
		bool                                                       mUsesReplication;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_P6BV[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.PlayCloseAnim
	 */
	struct UWidget_Window_DarkMode_C_PlayCloseAnim_Params
	{	};

	/**
	 * Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.Debug
	 */
	struct UWidget_Window_DarkMode_C_Debug_Params
	{	};

	/**
	 * Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.OnMouseButtonUp
	 */
	struct UWidget_Window_DarkMode_C_OnMouseButtonUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.OnNumKeyDown
	 */
	struct UWidget_Window_DarkMode_C_OnNumKeyDown_Params
	{
	public:
		struct FKeyEvent                                           KeyEvent;                                                // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.OnMouseButtonDown
	 */
	struct UWidget_Window_DarkMode_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.InitTabs
	 */
	struct UWidget_Window_DarkMode_C_InitTabs_Params
	{	};

	/**
	 * Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.SetInventoryVisibility
	 */
	struct UWidget_Window_DarkMode_C_SetInventoryVisibility_Params
	{
	public:
		bool                                                       mShowInventory;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Animate;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.GetInventoryBodyVisibility
	 */
	struct UWidget_Window_DarkMode_C_GetInventoryBodyVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.OnDrop
	 */
	struct UWidget_Window_DarkMode_C_OnDrop_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0038(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UDragDropOperation*                                  Operation;                                               // 0x00B0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x00B8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.SetTitle
	 */
	struct UWidget_Window_DarkMode_C_SetTitle_Params
	{
	public:
		class FText                                                Title;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.InpActEvt_IA_RelevantItem_0_K2Node_EnhancedInputActionEvent_10
	 */
	struct UWidget_Window_DarkMode_C_InpActEvt_IA_RelevantItem_0_K2Node_EnhancedInputActionEvent_10_Params
	{
	public:
		struct FInputActionValue                                   ActionValue;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		float                                                      ElapsedTime;                                             // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TriggeredTime;                                           // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInputAction*                                        SourceAction;                                            // 0x0028(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.InpActEvt_IA_RelevantItem_1_K2Node_EnhancedInputActionEvent_9
	 */
	struct UWidget_Window_DarkMode_C_InpActEvt_IA_RelevantItem_1_K2Node_EnhancedInputActionEvent_9_Params
	{
	public:
		struct FInputActionValue                                   ActionValue;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		float                                                      ElapsedTime;                                             // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TriggeredTime;                                           // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInputAction*                                        SourceAction;                                            // 0x0028(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.InpActEvt_IA_RelevantItem_2_K2Node_EnhancedInputActionEvent_8
	 */
	struct UWidget_Window_DarkMode_C_InpActEvt_IA_RelevantItem_2_K2Node_EnhancedInputActionEvent_8_Params
	{
	public:
		struct FInputActionValue                                   ActionValue;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		float                                                      ElapsedTime;                                             // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TriggeredTime;                                           // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInputAction*                                        SourceAction;                                            // 0x0028(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.InpActEvt_IA_RelevantItem_3_K2Node_EnhancedInputActionEvent_7
	 */
	struct UWidget_Window_DarkMode_C_InpActEvt_IA_RelevantItem_3_K2Node_EnhancedInputActionEvent_7_Params
	{
	public:
		struct FInputActionValue                                   ActionValue;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		float                                                      ElapsedTime;                                             // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TriggeredTime;                                           // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInputAction*                                        SourceAction;                                            // 0x0028(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.InpActEvt_IA_RelevantItem_4_K2Node_EnhancedInputActionEvent_6
	 */
	struct UWidget_Window_DarkMode_C_InpActEvt_IA_RelevantItem_4_K2Node_EnhancedInputActionEvent_6_Params
	{
	public:
		struct FInputActionValue                                   ActionValue;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		float                                                      ElapsedTime;                                             // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TriggeredTime;                                           // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInputAction*                                        SourceAction;                                            // 0x0028(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.InpActEvt_IA_RelevantItem_5_K2Node_EnhancedInputActionEvent_5
	 */
	struct UWidget_Window_DarkMode_C_InpActEvt_IA_RelevantItem_5_K2Node_EnhancedInputActionEvent_5_Params
	{
	public:
		struct FInputActionValue                                   ActionValue;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		float                                                      ElapsedTime;                                             // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TriggeredTime;                                           // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInputAction*                                        SourceAction;                                            // 0x0028(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.InpActEvt_IA_RelevantItem_6_K2Node_EnhancedInputActionEvent_4
	 */
	struct UWidget_Window_DarkMode_C_InpActEvt_IA_RelevantItem_6_K2Node_EnhancedInputActionEvent_4_Params
	{
	public:
		struct FInputActionValue                                   ActionValue;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		float                                                      ElapsedTime;                                             // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TriggeredTime;                                           // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInputAction*                                        SourceAction;                                            // 0x0028(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.InpActEvt_IA_RelevantItem_7_K2Node_EnhancedInputActionEvent_3
	 */
	struct UWidget_Window_DarkMode_C_InpActEvt_IA_RelevantItem_7_K2Node_EnhancedInputActionEvent_3_Params
	{
	public:
		struct FInputActionValue                                   ActionValue;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		float                                                      ElapsedTime;                                             // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TriggeredTime;                                           // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInputAction*                                        SourceAction;                                            // 0x0028(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.InpActEvt_IA_RelevantItem_8_K2Node_EnhancedInputActionEvent_2
	 */
	struct UWidget_Window_DarkMode_C_InpActEvt_IA_RelevantItem_8_K2Node_EnhancedInputActionEvent_2_Params
	{
	public:
		struct FInputActionValue                                   ActionValue;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		float                                                      ElapsedTime;                                             // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TriggeredTime;                                           // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInputAction*                                        SourceAction;                                            // 0x0028(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.InpActEvt_IA_RelevantItem_9_K2Node_EnhancedInputActionEvent_1
	 */
	struct UWidget_Window_DarkMode_C_InpActEvt_IA_RelevantItem_9_K2Node_EnhancedInputActionEvent_1_Params
	{
	public:
		struct FInputActionValue                                   ActionValue;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		float                                                      ElapsedTime;                                             // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TriggeredTime;                                           // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInputAction*                                        SourceAction;                                            // 0x0028(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.Construct
	 */
	struct UWidget_Window_DarkMode_C_Construct_Params
	{	};

	/**
	 * Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.OnEscapePressed
	 */
	struct UWidget_Window_DarkMode_C_OnEscapePressed_Params
	{	};

	/**
	 * Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.Destruct
	 */
	struct UWidget_Window_DarkMode_C_Destruct_Params
	{	};

	/**
	 * Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.Tick
	 */
	struct UWidget_Window_DarkMode_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.OnClosetAnimFinished
	 */
	struct UWidget_Window_DarkMode_C_OnClosetAnimFinished_Params
	{	};

	/**
	 * Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.PreConstruct
	 */
	struct UWidget_Window_DarkMode_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.OnCloseButtonClicked
	 */
	struct UWidget_Window_DarkMode_C_OnCloseButtonClicked_Params
	{	};

	/**
	 * Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.LerpShowInventory
	 */
	struct UWidget_Window_DarkMode_C_LerpShowInventory_Params
	{	};

	/**
	 * Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.BndEvt__Widget_TabsContainer_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature
	 */
	struct UWidget_Window_DarkMode_C_BndEvt__Widget_TabsContainer_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    ButtonIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.BndEvt__Widget_TabsContainer_K2Node_ComponentBoundEvent_0_OnNoTabsGenerated__DelegateSignature
	 */
	struct UWidget_Window_DarkMode_C_BndEvt__Widget_TabsContainer_K2Node_ComponentBoundEvent_0_OnNoTabsGenerated__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.BndEvt__Widget_TabsContainer_K2Node_ComponentBoundEvent_1_OnTabsGenerated__DelegateSignature
	 */
	struct UWidget_Window_DarkMode_C_BndEvt__Widget_TabsContainer_K2Node_ComponentBoundEvent_1_OnTabsGenerated__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.SetupRelevantInventory
	 */
	struct UWidget_Window_DarkMode_C_SetupRelevantInventory_Params
	{
	public:
		TArray<class UClass*>                                      relevantClasses;                                         // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.SlotStackMoveEvent_Event_1
	 */
	struct UWidget_Window_DarkMode_C_SlotStackMoveEvent_Event_1_Params
	{
	public:
		class UWidget_InventorySlot_C*                             InventorySlot;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		EInteractionDirection                                      Direction;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.ExecuteUbergraph_Widget_Window_DarkMode
	 */
	struct UWidget_Window_DarkMode_C_ExecuteUbergraph_Widget_Window_DarkMode_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LCUT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.OnStackMoved__DelegateSignature
	 */
	struct UWidget_Window_DarkMode_C_OnStackMoved__DelegateSignature_Params
	{
	public:
		class UWidget_InventorySlot_C*                             SourceInventorySlot;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.OnRelevantShortcutPressed__DelegateSignature
	 */
	struct UWidget_Window_DarkMode_C_OnRelevantShortcutPressed__DelegateSignature_Params
	{
	public:
		class UWidget_InventorySlot_C*                             InventorySlot;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.OnTabButtonClicked__DelegateSignature
	 */
	struct UWidget_Window_DarkMode_C_OnTabButtonClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    ButtonIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Window_DarkMode.Widget_Window_DarkMode_C.OnClose__DelegateSignature
	 */
	struct UWidget_Window_DarkMode_C_OnClose__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
