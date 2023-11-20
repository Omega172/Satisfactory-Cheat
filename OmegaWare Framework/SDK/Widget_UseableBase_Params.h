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
	 * Function Widget_UseableBase.Widget_UseableBase_C.GetInteractObject
	 */
	struct UWidget_UseableBase_C_GetInteractObject_Params
	{
	public:
		class UObject*                                             interactObject;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_UseableBase.Widget_UseableBase_C.UnbindMappingContexts
	 */
	struct UWidget_UseableBase_C_UnbindMappingContexts_Params
	{	};

	/**
	 * Function Widget_UseableBase.Widget_UseableBase_C.SetupMappingContexts
	 */
	struct UWidget_UseableBase_C_SetupMappingContexts_Params
	{	};

	/**
	 * Function Widget_UseableBase.Widget_UseableBase_C.OpenCodexOnItem
	 */
	struct UWidget_UseableBase_C_OpenCodexOnItem_Params
	{
	public:
		class UClass*                                              mOpenOnRecipe;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_UseableBase.Widget_UseableBase_C.DropInventoryStackOnInventoryComponent
	 */
	struct UWidget_UseableBase_C_DropInventoryStackOnInventoryComponent_Params
	{
	public:
		class UWidget_InventorySlot_C*                             InventorySlot;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class UFGInventoryComponent*                               InventoryComponent;                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		bool                                                       Result;                                                  // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_I5PD[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_UseableBase.Widget_UseableBase_C.DropInventoryStackOnInventoryWidget
	 */
	struct UWidget_UseableBase_C_DropInventoryStackOnInventoryWidget_Params
	{
	public:
		class UWidget_InventorySlot_C*                             InventorySlot;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class UWidget_Inventory_C*                                 WidgetInventory;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		bool                                                       Result;                                                  // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_UseableBase.Widget_UseableBase_C.InitInventoryWidgetCallbacks
	 */
	struct UWidget_UseableBase_C_InitInventoryWidgetCallbacks_Params
	{
	public:
		class UWidget_Inventory_C*                                 InventoryComponent;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_UseableBase.Widget_UseableBase_C.OnInventorySlotStackMove
	 */
	struct UWidget_UseableBase_C_OnInventorySlotStackMove_Params
	{
	public:
		class UWidget_InventorySlot_C*                             InventorySlot;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_UseableBase.Widget_UseableBase_C.DropInventorySlotStack
	 */
	struct UWidget_UseableBase_C_DropInventorySlotStack_Params
	{
	public:
		class UWidget_InventorySlot_C*                             InventorySlot;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		bool                                                       WasStackMoved;                                           // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_UseableBase.Widget_UseableBase_C.SetInventoryVisibility
	 */
	struct UWidget_UseableBase_C_SetInventoryVisibility_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_33AO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_UseableBase.Widget_UseableBase_C.GetDefaultRCO
	 */
	struct UWidget_UseableBase_C_GetDefaultRCO_Params
	{
	public:
		class UBP_RemoteCallObject_C*                              RCO;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_UseableBase.Widget_UseableBase_C.InpActEvt_IA_CloseWindow_K2Node_EnhancedInputActionEvent_3
	 */
	struct UWidget_UseableBase_C_InpActEvt_IA_CloseWindow_K2Node_EnhancedInputActionEvent_3_Params
	{
	public:
		struct FInputActionValue                                   ActionValue;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		float                                                      ElapsedTime;                                             // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TriggeredTime;                                           // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInputAction*                                        SourceAction;                                            // 0x0028(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_UseableBase.Widget_UseableBase_C.InpActEvt_IA_UI_Use_K2Node_EnhancedInputActionEvent_2
	 */
	struct UWidget_UseableBase_C_InpActEvt_IA_UI_Use_K2Node_EnhancedInputActionEvent_2_Params
	{
	public:
		struct FInputActionValue                                   ActionValue;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		float                                                      ElapsedTime;                                             // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TriggeredTime;                                           // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInputAction*                                        SourceAction;                                            // 0x0028(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_UseableBase.Widget_UseableBase_C.InpActEvt_IA_UI_Use_K2Node_EnhancedInputActionEvent_1
	 */
	struct UWidget_UseableBase_C_InpActEvt_IA_UI_Use_K2Node_EnhancedInputActionEvent_1_Params
	{
	public:
		struct FInputActionValue                                   ActionValue;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		float                                                      ElapsedTime;                                             // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TriggeredTime;                                           // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInputAction*                                        SourceAction;                                            // 0x0028(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_UseableBase.Widget_UseableBase_C.PreConstruct
	 */
	struct UWidget_UseableBase_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_UseableBase.Widget_UseableBase_C.Construct
	 */
	struct UWidget_UseableBase_C_Construct_Params
	{	};

	/**
	 * Function Widget_UseableBase.Widget_UseableBase_C.Destruct
	 */
	struct UWidget_UseableBase_C_Destruct_Params
	{	};

	/**
	 * Function Widget_UseableBase.Widget_UseableBase_C.Init
	 */
	struct UWidget_UseableBase_C_Init_Params
	{	};

	/**
	 * Function Widget_UseableBase.Widget_UseableBase_C.OnInteractActorDestoyed
	 */
	struct UWidget_UseableBase_C_OnInteractActorDestoyed_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_UseableBase.Widget_UseableBase_C.OpenInputDelayGate
	 */
	struct UWidget_UseableBase_C_OpenInputDelayGate_Params
	{	};

	/**
	 * Function Widget_UseableBase.Widget_UseableBase_C.ExecuteUbergraph_Widget_UseableBase
	 */
	struct UWidget_UseableBase_C_ExecuteUbergraph_Widget_UseableBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_UseableBase.Widget_UseableBase_C.ModifierReleased__DelegateSignature
	 */
	struct UWidget_UseableBase_C_ModifierReleased__DelegateSignature_Params
	{
	public:
		class UFGInteractWidget*                                   Owner;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_UseableBase.Widget_UseableBase_C.ModifierPressed__DelegateSignature
	 */
	struct UWidget_UseableBase_C_ModifierPressed__DelegateSignature_Params
	{
	public:
		class UFGInteractWidget*                                   NewParam;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_UseableBase.Widget_UseableBase_C.InventorySlotStackMoveEvent__DelegateSignature
	 */
	struct UWidget_UseableBase_C_InventorySlotStackMoveEvent__DelegateSignature_Params
	{
	public:
		class UWidget_InventorySlot_C*                             InventorySlot;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		EInteractionDirection                                      InteractionDirection;                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
