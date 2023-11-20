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
	 * Function BPW_GiveItem_ListEntry.BPW_GiveItem_ListEntry_C.UpdateNumItemsWithInputBoxValue
	 */
	struct UBPW_GiveItem_ListEntry_C_UpdateNumItemsWithInputBoxValue_Params
	{	};

	/**
	 * Function BPW_GiveItem_ListEntry.BPW_GiveItem_ListEntry_C.OnUnhoveredStyling
	 */
	struct UBPW_GiveItem_ListEntry_C_OnUnhoveredStyling_Params
	{
	public:
		bool                                                       IsCategory;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_GiveItem_ListEntry.BPW_GiveItem_ListEntry_C.OnHoveredStyling
	 */
	struct UBPW_GiveItem_ListEntry_C_OnHoveredStyling_Params
	{
	public:
		bool                                                       IsCategory;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_GiveItem_ListEntry.BPW_GiveItem_ListEntry_C.SetIsCategory
	 */
	struct UBPW_GiveItem_ListEntry_C_SetIsCategory_Params
	{
	public:
		bool                                                       IsCategory;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_GiveItem_ListEntry.BPW_GiveItem_ListEntry_C.OnCollapseChanged
	 */
	struct UBPW_GiveItem_ListEntry_C_OnCollapseChanged_Params
	{
	public:
		bool                                                       isCollapsed;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_GiveItem_ListEntry.BPW_GiveItem_ListEntry_C.SetItemVisibility
	 */
	struct UBPW_GiveItem_ListEntry_C_SetItemVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_GiveItem_ListEntry.BPW_GiveItem_ListEntry_C.GiveItems
	 */
	struct UBPW_GiveItem_ListEntry_C_GiveItems_Params
	{
	public:
		class UClass*                                              itemDescriptor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		int32_t                                                    numberOfItems;                                           // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       GiveStacks;                                              // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FLLA[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_GiveItem_ListEntry.BPW_GiveItem_ListEntry_C.SetButtonStyling
	 */
	struct UBPW_GiveItem_ListEntry_C_SetButtonStyling_Params
	{
	public:
		bool                                                       IsCategory;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0EEO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_GiveItem_ListEntry.BPW_GiveItem_ListEntry_C.SetDescriptor
	 */
	struct UBPW_GiveItem_ListEntry_C_SetDescriptor_Params
	{
	public:
		class UClass*                                              mItemDescriptor;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_GiveItem_ListEntry.BPW_GiveItem_ListEntry_C.SetIcon
	 */
	struct UBPW_GiveItem_ListEntry_C_SetIcon_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_GiveItem_ListEntry.BPW_GiveItem_ListEntry_C.SetItemName
	 */
	struct UBPW_GiveItem_ListEntry_C_SetItemName_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_GiveItem_ListEntry.BPW_GiveItem_ListEntry_C.BP_OnItemExpansionChanged
	 */
	struct UBPW_GiveItem_ListEntry_C_BP_OnItemExpansionChanged_Params
	{
	public:
		bool                                                       bIsExpanded;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_GiveItem_ListEntry.BPW_GiveItem_ListEntry_C.BP_OnItemSelectionChanged
	 */
	struct UBPW_GiveItem_ListEntry_C_BP_OnItemSelectionChanged_Params
	{
	public:
		bool                                                       bIsSelected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_GiveItem_ListEntry.BPW_GiveItem_ListEntry_C.OnListItemObjectSet
	 */
	struct UBPW_GiveItem_ListEntry_C_OnListItemObjectSet_Params
	{
	public:
		class UObject*                                             ListItemObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_GiveItem_ListEntry.BPW_GiveItem_ListEntry_C.OnMouseEnter
	 */
	struct UBPW_GiveItem_ListEntry_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_GiveItem_ListEntry.BPW_GiveItem_ListEntry_C.OnMouseLeave
	 */
	struct UBPW_GiveItem_ListEntry_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_GiveItem_ListEntry.BPW_GiveItem_ListEntry_C.BndEvt__BPW_GiveItem_ListEntry_mGIveItemButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBPW_GiveItem_ListEntry_C_BndEvt__BPW_GiveItem_ListEntry_mGIveItemButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_GiveItem_ListEntry.BPW_GiveItem_ListEntry_C.BndEvt__BPW_GiveItem_ListEntry_mInputBox_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature
	 */
	struct UBPW_GiveItem_ListEntry_C_BndEvt__BPW_GiveItem_ListEntry_mInputBox_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_GiveItem_ListEntry.BPW_GiveItem_ListEntry_C.BndEvt__BPW_GiveItem_ListEntry_mInputBox_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature
	 */
	struct UBPW_GiveItem_ListEntry_C_BndEvt__BPW_GiveItem_ListEntry_mInputBox_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_GiveItem_ListEntry.BPW_GiveItem_ListEntry_C.BP_OnEntryReleased
	 */
	struct UBPW_GiveItem_ListEntry_C_BP_OnEntryReleased_Params
	{	};

	/**
	 * Function BPW_GiveItem_ListEntry.BPW_GiveItem_ListEntry_C.ExecuteUbergraph_BPW_GiveItem_ListEntry
	 */
	struct UBPW_GiveItem_ListEntry_C_ExecuteUbergraph_BPW_GiveItem_ListEntry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
