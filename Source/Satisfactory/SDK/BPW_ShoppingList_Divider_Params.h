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
	 * Function BPW_ShoppingList_Divider.BPW_ShoppingList_Divider_C.SetInfoWidgetClass
	 */
	struct UBPW_ShoppingList_Divider_C_SetInfoWidgetClass_Params
	{
	public:
		class UClass*                                              mInfoWidgetClass;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ShoppingList_Divider.BPW_ShoppingList_Divider_C.GetInfoWidget
	 */
	struct UBPW_ShoppingList_Divider_C_GetInfoWidget_Params
	{
	public:
		class UUserWidget*                                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ShoppingList_Divider.BPW_ShoppingList_Divider_C.Expand
	 */
	struct UBPW_ShoppingList_Divider_C_Expand_Params
	{	};

	/**
	 * Function BPW_ShoppingList_Divider.BPW_ShoppingList_Divider_C.CollapseOrHide
	 */
	struct UBPW_ShoppingList_Divider_C_CollapseOrHide_Params
	{
	public:
		bool                                                       Hide;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_A4PJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_ShoppingList_Divider.BPW_ShoppingList_Divider_C.SetIsOpen
	 */
	struct UBPW_ShoppingList_Divider_C_SetIsOpen_Params
	{
	public:
		bool                                                       mIsOpen;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ShoppingList_Divider.BPW_ShoppingList_Divider_C.SetText
	 */
	struct UBPW_ShoppingList_Divider_C_SetText_Params
	{
	public:
		class FText                                                mText;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_ShoppingList_Divider.BPW_ShoppingList_Divider_C.PreConstruct
	 */
	struct UBPW_ShoppingList_Divider_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ShoppingList_Divider.BPW_ShoppingList_Divider_C.BndEvt__BPW_ShoppingList_Divider_mButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBPW_ShoppingList_Divider_C_BndEvt__BPW_ShoppingList_Divider_mButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ShoppingList_Divider.BPW_ShoppingList_Divider_C.BndEvt__BPW_ShoppingList_Divider_mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBPW_ShoppingList_Divider_C_BndEvt__BPW_ShoppingList_Divider_mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ShoppingList_Divider.BPW_ShoppingList_Divider_C.BndEvt__BPW_ShoppingList_Divider_mButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBPW_ShoppingList_Divider_C_BndEvt__BPW_ShoppingList_Divider_mButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ShoppingList_Divider.BPW_ShoppingList_Divider_C.BndEvt__BPW_ShoppingList_Divider_mInfoButon_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBPW_ShoppingList_Divider_C_BndEvt__BPW_ShoppingList_Divider_mInfoButon_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ShoppingList_Divider.BPW_ShoppingList_Divider_C.BndEvt__BPW_ShoppingList_Divider_mInfoButon_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBPW_ShoppingList_Divider_C_BndEvt__BPW_ShoppingList_Divider_mInfoButon_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ShoppingList_Divider.BPW_ShoppingList_Divider_C.ExecuteUbergraph_BPW_ShoppingList_Divider
	 */
	struct UBPW_ShoppingList_Divider_C_ExecuteUbergraph_BPW_ShoppingList_Divider_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ShoppingList_Divider.BPW_ShoppingList_Divider_C.OnStateChanged__DelegateSignature
	 */
	struct UBPW_ShoppingList_Divider_C_OnStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsOpen;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
