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
	 * Function BPW_BlueprintCategoryEditor.BPW_BlueprintCategoryEditor_C.GetRemoveBlueprintTooltip
	 */
	struct UBPW_BlueprintCategoryEditor_C_GetRemoveBlueprintTooltip_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BlueprintCategoryEditor.BPW_BlueprintCategoryEditor_C.Set Enable Remove Button
	 */
	struct UBPW_BlueprintCategoryEditor_C_SetEnableRemoveButton_Params
	{
	public:
		bool                                                       EnableRemoveButton;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BlueprintCategoryEditor.BPW_BlueprintCategoryEditor_C.SetCategoryData
	 */
	struct UBPW_BlueprintCategoryEditor_C_SetCategoryData_Params
	{
	public:
		struct FStruct_BlueprintCategoryData                       mCatgeoryData;                                           // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BlueprintCategoryEditor.BPW_BlueprintCategoryEditor_C.SetImageID
	 */
	struct UBPW_BlueprintCategoryEditor_C_SetImageID_Params
	{
	public:
		int32_t                                                    mImageID;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RLRX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_BlueprintCategoryEditor.BPW_BlueprintCategoryEditor_C.OnImageBrowserClosed
	 */
	struct UBPW_BlueprintCategoryEditor_C_OnImageBrowserClosed_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ImageID;                                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BlueprintCategoryEditor.BPW_BlueprintCategoryEditor_C.Construct
	 */
	struct UBPW_BlueprintCategoryEditor_C_Construct_Params
	{	};

	/**
	 * Function BPW_BlueprintCategoryEditor.BPW_BlueprintCategoryEditor_C.BndEvt__BPW_BlueprintCategoryEditor_mSelectIcon_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UBPW_BlueprintCategoryEditor_C_BndEvt__BPW_BlueprintCategoryEditor_mSelectIcon_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_BlueprintCategoryEditor.BPW_BlueprintCategoryEditor_C.BndEvt__BPW_BlueprintCategoryEditor_mCancel_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UBPW_BlueprintCategoryEditor_C_BndEvt__BPW_BlueprintCategoryEditor_mCancel_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_BlueprintCategoryEditor.BPW_BlueprintCategoryEditor_C.BndEvt__BPW_BlueprintCategoryEditor_mApplyButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 */
	struct UBPW_BlueprintCategoryEditor_C_BndEvt__BPW_BlueprintCategoryEditor_mApplyButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_BlueprintCategoryEditor.BPW_BlueprintCategoryEditor_C.BndEvt__BPW_BlueprintCategoryEditor_Widget_Window_DarkMode_K2Node_ComponentBoundEvent_3_OnClose__DelegateSignature
	 */
	struct UBPW_BlueprintCategoryEditor_C_BndEvt__BPW_BlueprintCategoryEditor_Widget_Window_DarkMode_K2Node_ComponentBoundEvent_3_OnClose__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_BlueprintCategoryEditor.BPW_BlueprintCategoryEditor_C.BndEvt__BPW_BlueprintCategoryEditor_mRemoveButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
	 */
	struct UBPW_BlueprintCategoryEditor_C_BndEvt__BPW_BlueprintCategoryEditor_mRemoveButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_BlueprintCategoryEditor.BPW_BlueprintCategoryEditor_C.BndEvt__BPW_BlueprintCategoryEditor_mNameInput_K2Node_ComponentBoundEvent_5_OnEditableTextChangedEvent__DelegateSignature
	 */
	struct UBPW_BlueprintCategoryEditor_C_BndEvt__BPW_BlueprintCategoryEditor_mNameInput_K2Node_ComponentBoundEvent_5_OnEditableTextChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_BlueprintCategoryEditor.BPW_BlueprintCategoryEditor_C.ExecuteUbergraph_BPW_BlueprintCategoryEditor
	 */
	struct UBPW_BlueprintCategoryEditor_C_ExecuteUbergraph_BPW_BlueprintCategoryEditor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_N7DZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_BlueprintCategoryEditor.BPW_BlueprintCategoryEditor_C.OnCategoryRemoved__DelegateSignature
	 */
	struct UBPW_BlueprintCategoryEditor_C_OnCategoryRemoved__DelegateSignature_Params
	{
	public:
		class UFGCategory*                                         Category;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BlueprintCategoryEditor.BPW_BlueprintCategoryEditor_C.OnClosed__DelegateSignature
	 */
	struct UBPW_BlueprintCategoryEditor_C_OnClosed__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_BlueprintCategoryEditor.BPW_BlueprintCategoryEditor_C.OnCategoryUpdated__DelegateSignature
	 */
	struct UBPW_BlueprintCategoryEditor_C_OnCategoryUpdated__DelegateSignature_Params
	{
	public:
		class UFGCategory*                                         Category;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FStruct_BlueprintCategoryData                       CategoryData;                                            // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
