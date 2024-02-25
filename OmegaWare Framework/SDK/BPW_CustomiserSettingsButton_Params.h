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
	 * Function BPW_CustomiserSettingsButton.BPW_CustomiserSettingsButton_C.mSetIsDefaultMaterial
	 */
	struct UBPW_CustomiserSettingsButton_C_mSetIsDefaultMaterial_Params
	{
	public:
		bool                                                       mIsDefaultMaterial;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_CustomiserSettingsButton.BPW_CustomiserSettingsButton_C.OnMouseButtonDown
	 */
	struct UBPW_CustomiserSettingsButton_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BPW_CustomiserSettingsButton.BPW_CustomiserSettingsButton_C.GetRightClickMenuContent
	 */
	struct UBPW_CustomiserSettingsButton_C_GetRightClickMenuContent_Params
	{
	public:
		class UUserWidget*                                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EFCV[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_CustomiserSettingsButton.BPW_CustomiserSettingsButton_C.InitButton
	 */
	struct UBPW_CustomiserSettingsButton_C_InitButton_Params
	{
	public:
		class UClass*                                              CustomiserRecipe;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       mIsDefaultMaterial;                                      // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_CustomiserSettingsButton.BPW_CustomiserSettingsButton_C.SetIsSelected
	 */
	struct UBPW_CustomiserSettingsButton_C_SetIsSelected_Params
	{
	public:
		bool                                                       mIsSelected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_CustomiserSettingsButton.BPW_CustomiserSettingsButton_C.Reload Data
	 */
	struct UBPW_CustomiserSettingsButton_C_ReloadData_Params
	{	};

	/**
	 * Function BPW_CustomiserSettingsButton.BPW_CustomiserSettingsButton_C.SetEditButtonVisibility
	 */
	struct UBPW_CustomiserSettingsButton_C_SetEditButtonVisibility_Params
	{
	public:
		bool                                                       IsVisibile;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_CustomiserSettingsButton.BPW_CustomiserSettingsButton_C.OnButtonUnhovered
	 */
	struct UBPW_CustomiserSettingsButton_C_OnButtonUnhovered_Params
	{	};

	/**
	 * Function BPW_CustomiserSettingsButton.BPW_CustomiserSettingsButton_C.OnButtonHovered
	 */
	struct UBPW_CustomiserSettingsButton_C_OnButtonHovered_Params
	{	};

	/**
	 * Function BPW_CustomiserSettingsButton.BPW_CustomiserSettingsButton_C.SetupData
	 */
	struct UBPW_CustomiserSettingsButton_C_SetupData_Params
	{
	public:
		class UClass*                                              mCustomiserRecipe;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       mIsDefaultMaterial;                                      // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_CustomiserSettingsButton.BPW_CustomiserSettingsButton_C.PreConstruct
	 */
	struct UBPW_CustomiserSettingsButton_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_CustomiserSettingsButton.BPW_CustomiserSettingsButton_C.Construct
	 */
	struct UBPW_CustomiserSettingsButton_C_Construct_Params
	{	};

	/**
	 * Function BPW_CustomiserSettingsButton.BPW_CustomiserSettingsButton_C.BndEvt__mButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBPW_CustomiserSettingsButton_C_BndEvt__mButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_CustomiserSettingsButton.BPW_CustomiserSettingsButton_C.OnMouseEnter
	 */
	struct UBPW_CustomiserSettingsButton_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_CustomiserSettingsButton.BPW_CustomiserSettingsButton_C.OnMouseLeave
	 */
	struct UBPW_CustomiserSettingsButton_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_CustomiserSettingsButton.BPW_CustomiserSettingsButton_C.BndEvt__mEditButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBPW_CustomiserSettingsButton_C_BndEvt__mEditButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_CustomiserSettingsButton.BPW_CustomiserSettingsButton_C.SetupRightclickMenuBindings
	 */
	struct UBPW_CustomiserSettingsButton_C_SetupRightclickMenuBindings_Params
	{
	public:
		class UWidget_StandardButton_C*                            Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_CustomiserSettingsButton.BPW_CustomiserSettingsButton_C.SetAllClicked
	 */
	struct UBPW_CustomiserSettingsButton_C_SetAllClicked_Params
	{	};

	/**
	 * Function BPW_CustomiserSettingsButton.BPW_CustomiserSettingsButton_C.BndEvt__mRightClickMenu_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature
	 */
	struct UBPW_CustomiserSettingsButton_C_BndEvt__mRightClickMenu_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature_Params
	{
	public:
		bool                                                       bIsOpen;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_CustomiserSettingsButton.BPW_CustomiserSettingsButton_C.ExecuteUbergraph_BPW_CustomiserSettingsButton
	 */
	struct UBPW_CustomiserSettingsButton_C_ExecuteUbergraph_BPW_CustomiserSettingsButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ADVS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_CustomiserSettingsButton.BPW_CustomiserSettingsButton_C.OnSetAllClicked__DelegateSignature
	 */
	struct UBPW_CustomiserSettingsButton_C_OnSetAllClicked__DelegateSignature_Params
	{
	public:
		class UClass*                                              CustomiserRecipe;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_CustomiserSettingsButton.BPW_CustomiserSettingsButton_C.OnClearedClicked__DelegateSignature
	 */
	struct UBPW_CustomiserSettingsButton_C_OnClearedClicked__DelegateSignature_Params
	{
	public:
		ECustomiserType                                            CustomiserType;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_CustomiserSettingsButton.BPW_CustomiserSettingsButton_C.OnEditClicked__DelegateSignature
	 */
	struct UBPW_CustomiserSettingsButton_C_OnEditClicked__DelegateSignature_Params
	{
	public:
		class UClass*                                              CustomiserDescriptor;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UBPW_CustomiserSettingsButton_C*                     buttonWidget;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_CustomiserSettingsButton.BPW_CustomiserSettingsButton_C.OnUnhovered__DelegateSignature
	 */
	struct UBPW_CustomiserSettingsButton_C_OnUnhovered__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_CustomiserSettingsButton.BPW_CustomiserSettingsButton_C.OnHovered__DelegateSignature
	 */
	struct UBPW_CustomiserSettingsButton_C_OnHovered__DelegateSignature_Params
	{
	public:
		class UClass*                                              CustomiserRecipe;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		ECustomiserType                                            CustomiserTyper;                                         // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_CustomiserSettingsButton.BPW_CustomiserSettingsButton_C.OnClicked__DelegateSignature
	 */
	struct UBPW_CustomiserSettingsButton_C_OnClicked__DelegateSignature_Params
	{
	public:
		class UClass*                                              CustomiserRecipe;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ButtonIndex;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
