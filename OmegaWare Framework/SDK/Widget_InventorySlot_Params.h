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
	 * Function Widget_InventorySlot.Widget_InventorySlot_C.GetItemDescriptor
	 */
	struct UWidget_InventorySlot_C_GetItemDescriptor_Params
	{
	public:
		class UClass*                                              itemDescriptor;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_InventorySlot.Widget_InventorySlot_C.GetDragAndDropType
	 */
	struct UWidget_InventorySlot_C_GetDragAndDropType_Params
	{
	public:
		EInventorySlot_DragAndDropTypes                            Type;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_InventorySlot.Widget_InventorySlot_C.SetShowInventorySlotSetting
	 */
	struct UWidget_InventorySlot_C_SetShowInventorySlotSetting_Params
	{
	public:
		bool                                                       mShowInventorySlotSettings;                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_InventorySlot.Widget_InventorySlot_C.SetupInventorySetting
	 */
	struct UWidget_InventorySlot_C_SetupInventorySetting_Params
	{	};

	/**
	 * Function Widget_InventorySlot.Widget_InventorySlot_C.SplitStack
	 */
	struct UWidget_InventorySlot_C_SplitStack_Params
	{
	public:
		int32_t                                                    numResourceToMove;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_M7PF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_InventorySlot.Widget_InventorySlot_C.DragEnter
	 */
	struct UWidget_InventorySlot_C_DragEnter_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_InventorySlot.Widget_InventorySlot_C.OnMenuClosed
	 */
	struct UWidget_InventorySlot_C_OnMenuClosed_Params
	{	};

	/**
	 * Function Widget_InventorySlot.Widget_InventorySlot_C.UpdateAmountBGVisbility
	 */
	struct UWidget_InventorySlot_C_UpdateAmountBGVisbility_Params
	{	};

	/**
	 * Function Widget_InventorySlot.Widget_InventorySlot_C.UpdateSlotInformation
	 */
	struct UWidget_InventorySlot_C_UpdateSlotInformation_Params
	{	};

	/**
	 * Function Widget_InventorySlot.Widget_InventorySlot_C.OnSlotUpdated
	 */
	struct UWidget_InventorySlot_C_OnSlotUpdated_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_InventorySlot.Widget_InventorySlot_C.SetFontSize
	 */
	struct UWidget_InventorySlot_C_SetFontSize_Params
	{
	public:
		bool                                                       SmallSlot;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       BigSlot;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_InventorySlot.Widget_InventorySlot_C.SetItemAbbreviationText
	 */
	struct UWidget_InventorySlot_C_SetItemAbbreviationText_Params
	{	};

	/**
	 * Function Widget_InventorySlot.Widget_InventorySlot_C.OpenNonSplitMenu
	 */
	struct UWidget_InventorySlot_C_OpenNonSplitMenu_Params
	{	};

	/**
	 * Function Widget_InventorySlot.Widget_InventorySlot_C.UpdateResourceFormVisuals
	 */
	struct UWidget_InventorySlot_C_UpdateResourceFormVisuals_Params
	{	};

	/**
	 * Function Widget_InventorySlot.Widget_InventorySlot_C.GetItemOrFilterClass
	 */
	struct UWidget_InventorySlot_C_GetItemOrFilterClass_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_InventorySlot.Widget_InventorySlot_C.GetFilterClass
	 */
	struct UWidget_InventorySlot_C_GetFilterClass_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_InventorySlot.Widget_InventorySlot_C.OnItemClassUpdated
	 */
	struct UWidget_InventorySlot_C_OnItemClassUpdated_Params
	{	};

	/**
	 * Function Widget_InventorySlot.Widget_InventorySlot_C.GetIsItemStackable
	 */
	struct UWidget_InventorySlot_C_GetIsItemStackable_Params
	{
	public:
		bool                                                       IsStackable;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_InventorySlot.Widget_InventorySlot_C.SetResourceForm
	 */
	struct UWidget_InventorySlot_C_SetResourceForm_Params
	{
	public:
		EResourceForm                                              NewResourceForm;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_InventorySlot.Widget_InventorySlot_C.GetContentState
	 */
	struct UWidget_InventorySlot_C_GetContentState_Params
	{
	public:
		EInventorySlot_State_Content                               ContentState;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CHSK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_InventorySlot.Widget_InventorySlot_C.SetInteractState
	 */
	struct UWidget_InventorySlot_C_SetInteractState_Params
	{
	public:
		EInventorySlot_State_Interact                              NewInteractState;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_InventorySlot.Widget_InventorySlot_C.SetDragAndDropState
	 */
	struct UWidget_InventorySlot_C_SetDragAndDropState_Params
	{
	public:
		EDragNDropHoverState                                       NewDragAndDropState;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IRIL[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_InventorySlot.Widget_InventorySlot_C.SetContentState
	 */
	struct UWidget_InventorySlot_C_SetContentState_Params
	{
	public:
		EInventorySlot_State_Content                               NewContentState;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_InventorySlot.Widget_InventorySlot_C.MoveAllWithSameItemClass
	 */
	struct UWidget_InventorySlot_C_MoveAllWithSameItemClass_Params
	{	};

	/**
	 * Function Widget_InventorySlot.Widget_InventorySlot_C.ShowSplitStackWidget
	 */
	struct UWidget_InventorySlot_C_ShowSplitStackWidget_Params
	{	};

	/**
	 * Function Widget_InventorySlot.Widget_InventorySlot_C.OnMouseButtonDoubleClick
	 */
	struct UWidget_InventorySlot_C_OnMouseButtonDoubleClick_Params
	{
	public:
		struct FGeometry                                           InMyGeometry;                                            // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       InMouseEvent;                                            // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_InventorySlot.Widget_InventorySlot_C.GetItemForm
	 */
	struct UWidget_InventorySlot_C_GetItemForm_Params
	{
	public:
		EResourceForm                                              form;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D4HY[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_InventorySlot.Widget_InventorySlot_C.CheckForNuclearWaste
	 */
	struct UWidget_InventorySlot_C_CheckForNuclearWaste_Params
	{
	public:
		class UClass*                                              Object;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_InventorySlot.Widget_InventorySlot_C.QuickMoveInventory
	 */
	struct UWidget_InventorySlot_C_QuickMoveInventory_Params
	{
	public:
		bool                                                       MoveAllItemsOfSameType;                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LA2Z[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_InventorySlot.Widget_InventorySlot_C.SetSlotSize
	 */
	struct UWidget_InventorySlot_C_SetSlotSize_Params
	{
	public:
		bool                                                       SmallSlot;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       BigSlot;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FT9G[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_InventorySlot.Widget_InventorySlot_C.DropOntoInventorySlot
	 */
	struct UWidget_InventorySlot_C_DropOntoInventorySlot_Params
	{
	public:
		class UWidget_InventorySlot_C*                             OtherInventorySlot;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		bool                                                       Result;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_InventorySlot.Widget_InventorySlot_C.OnMouseButtonUp
	 */
	struct UWidget_InventorySlot_C_OnMouseButtonUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_InventorySlot.Widget_InventorySlot_C.OnKeyUp
	 */
	struct UWidget_InventorySlot_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_InventorySlot.Widget_InventorySlot_C.OnKeyDown
	 */
	struct UWidget_InventorySlot_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_InventorySlot.Widget_InventorySlot_C.CheckSlotHasItems
	 */
	struct UWidget_InventorySlot_C_CheckSlotHasItems_Params
	{
	public:
		bool                                                       slotHasItems;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_InventorySlot.Widget_InventorySlot_C.GetNumItems
	 */
	struct UWidget_InventorySlot_C_GetNumItems_Params
	{
	public:
		int32_t                                                    Num;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_InventorySlot.Widget_InventorySlot_C.GetItemClass
	 */
	struct UWidget_InventorySlot_C_GetItemClass_Params
	{
	public:
		class UClass*                                              ItemClass;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_InventorySlot.Widget_InventorySlot_C.GetStack
	 */
	struct UWidget_InventorySlot_C_GetStack_Params
	{
	public:
		struct FInventoryStack                                     stack;                                                   // 0x0000(0x0028)  (Parm, OutParm)
	};

	/**
	 * Function Widget_InventorySlot.Widget_InventorySlot_C.GetTooltipWidget
	 */
	struct UWidget_InventorySlot_C_GetTooltipWidget_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_InventorySlot.Widget_InventorySlot_C.CreateSplitSlider
	 */
	struct UWidget_InventorySlot_C_CreateSplitSlider_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_InventorySlot.Widget_InventorySlot_C.OnFocusReceived
	 */
	struct UWidget_InventorySlot_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_InventorySlot.Widget_InventorySlot_C.GetGamepadButtonIsEnabled
	 */
	struct UWidget_InventorySlot_C_GetGamepadButtonIsEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_COFV[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_InventorySlot.Widget_InventorySlot_C.GetFilterImage
	 */
	struct UWidget_InventorySlot_C_GetFilterImage_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x00D0)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_InventorySlot.Widget_InventorySlot_C.PlaySomeSound
	 */
	struct UWidget_InventorySlot_C_PlaySomeSound_Params
	{	};

	/**
	 * Function Widget_InventorySlot.Widget_InventorySlot_C.GetItemImageBrush
	 */
	struct UWidget_InventorySlot_C_GetItemImageBrush_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x00D0)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_InventorySlot.Widget_InventorySlot_C.OnDrop
	 */
	struct UWidget_InventorySlot_C_OnDrop_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0038(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UDragDropOperation*                                  Operation;                                               // 0x00B0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x00B8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0P9B[0x7];                                   // 0x00B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_InventorySlot.Widget_InventorySlot_C.OnMouseButtonDown
	 */
	struct UWidget_InventorySlot_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_InventorySlot.Widget_InventorySlot_C.OnDragDetected
	 */
	struct UWidget_InventorySlot_C_OnDragDetected_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UDragDropOperation*                                  Operation;                                               // 0x00B0(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_InventorySlot.Widget_InventorySlot_C.GetStackSizeText
	 */
	struct UWidget_InventorySlot_C_GetStackSizeText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_InventorySlot.Widget_InventorySlot_C.CacheSlotData
	 */
	struct UWidget_InventorySlot_C_CacheSlotData_Params
	{	};

	/**
	 * Function Widget_InventorySlot.Widget_InventorySlot_C.OnDragLeave
	 */
	struct UWidget_InventorySlot_C_OnDragLeave_Params
	{
	public:
		struct FPointerEvent                                       PointerEvent;                                            // 0x0000(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UDragDropOperation*                                  Operation;                                               // 0x0078(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_InventorySlot.Widget_InventorySlot_C.OnMouseEnter
	 */
	struct UWidget_InventorySlot_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Widget_InventorySlot.Widget_InventorySlot_C.OnMouseLeave
	 */
	struct UWidget_InventorySlot_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Widget_InventorySlot.Widget_InventorySlot_C.OnFocusLost
	 */
	struct UWidget_InventorySlot_C_OnFocusLost_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function Widget_InventorySlot.Widget_InventorySlot_C.PreConstruct
	 */
	struct UWidget_InventorySlot_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_InventorySlot.Widget_InventorySlot_C.Destruct
	 */
	struct UWidget_InventorySlot_C_Destruct_Params
	{	};

	/**
	 * Function Widget_InventorySlot.Widget_InventorySlot_C.Construct
	 */
	struct UWidget_InventorySlot_C_Construct_Params
	{	};

	/**
	 * Function Widget_InventorySlot.Widget_InventorySlot_C.Event CreateNuclearWastePopup
	 */
	struct UWidget_InventorySlot_C_EventCreateNuclearWastePopup_Params
	{
	public:
		bool                                                       isNuclearWaste;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_InventorySlot.Widget_InventorySlot_C.CloseNuclearWastePopup
	 */
	struct UWidget_InventorySlot_C_CloseNuclearWastePopup_Params
	{
	public:
		bool                                                       ConfirmClicked;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_InventorySlot.Widget_InventorySlot_C.OnDragEnter
	 */
	struct UWidget_InventorySlot_C_OnDragEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0038(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UDragDropOperation*                                  Operation;                                               // 0x00B0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_InventorySlot.Widget_InventorySlot_C.CloseSplitStack
	 */
	struct UWidget_InventorySlot_C_CloseSplitStack_Params
	{	};

	/**
	 * Function Widget_InventorySlot.Widget_InventorySlot_C.CentralStorageSlotWasDropped
	 */
	struct UWidget_InventorySlot_C_CentralStorageSlotWasDropped_Params
	{
	public:
		class UFGInventoryComponent*                               TargetInventory;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TargetIdx;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_InventorySlot.Widget_InventorySlot_C.Event PlayOnNewSlotsAddedAnimation
	 */
	struct UWidget_InventorySlot_C_EventPlayOnNewSlotsAddedAnimation_Params
	{	};

	/**
	 * Function Widget_InventorySlot.Widget_InventorySlot_C.SetupInventorySlot
	 */
	struct UWidget_InventorySlot_C_SetupInventorySlot_Params
	{
	public:
		class UFGInventoryComponent*                               InventoryComponent;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    slotIdx;                                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_InventorySlot.Widget_InventorySlot_C.ExecuteUbergraph_Widget_InventorySlot
	 */
	struct UWidget_InventorySlot_C_ExecuteUbergraph_Widget_InventorySlot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_G8Q1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_InventorySlot.Widget_InventorySlot_C.OnStackDroppedOnSlot__DelegateSignature
	 */
	struct UWidget_InventorySlot_C_OnStackDroppedOnSlot__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_InventorySlot.Widget_InventorySlot_C.OnMoveStack__DelegateSignature
	 */
	struct UWidget_InventorySlot_C_OnMoveStack__DelegateSignature_Params
	{
	public:
		class UWidget_InventorySlot_C*                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_InventorySlot.Widget_InventorySlot_C.OnSlotHovered__DelegateSignature
	 */
	struct UWidget_InventorySlot_C_OnSlotHovered__DelegateSignature_Params
	{
	public:
		class UWidget_InventorySlot_C*                             SelfInventorySlot;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
