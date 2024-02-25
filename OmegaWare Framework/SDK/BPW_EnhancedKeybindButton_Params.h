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
	 * Function BPW_EnhancedKeybindButton.BPW_EnhancedKeybindButton_C.ShowMappingConflictPopup
	 */
	struct UBPW_EnhancedKeybindButton_C_ShowMappingConflictPopup_Params
	{
	public:
		TArray<struct FEnhancedActionKeyMapping>                   HardConflicts;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		TArray<struct FEnhancedActionKeyMapping>                   SoftConflicts;                                           // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	};

	/**
	 * Function BPW_EnhancedKeybindButton.BPW_EnhancedKeybindButton_C.GetModifierKeysPressed
	 */
	struct UBPW_EnhancedKeybindButton_C_GetModifierKeysPressed_Params
	{
	public:
		struct FInputEvent                                         InputEvent;                                              // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
		TArray<struct FKey>                                        ModifierKeys;                                            // 0x0020(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BPW_EnhancedKeybindButton.BPW_EnhancedKeybindButton_C.GetKeyMappingDisplayName
	 */
	struct UBPW_EnhancedKeybindButton_C_GetKeyMappingDisplayName_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BPW_EnhancedKeybindButton.BPW_EnhancedKeybindButton_C.UpdateKeyMapping
	 */
	struct UBPW_EnhancedKeybindButton_C_UpdateKeyMapping_Params
	{	};

	/**
	 * Function BPW_EnhancedKeybindButton.BPW_EnhancedKeybindButton_C.RebindKey
	 */
	struct UBPW_EnhancedKeybindButton_C_RebindKey_Params
	{	};

	/**
	 * Function BPW_EnhancedKeybindButton.BPW_EnhancedKeybindButton_C.KeyBindingOverrideConfirmed
	 */
	struct UBPW_EnhancedKeybindButton_C_KeyBindingOverrideConfirmed_Params
	{
	public:
		bool                                                       Confirmed;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_EnhancedKeybindButton.BPW_EnhancedKeybindButton_C.HandleInput
	 */
	struct UBPW_EnhancedKeybindButton_C_HandleInput_Params
	{
	public:
		struct FInputEvent                                         InputEvent;                                              // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FKey                                                keyPressed;                                              // 0x0020(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_EnhancedKeybindButton.BPW_EnhancedKeybindButton_C.Construct
	 */
	struct UBPW_EnhancedKeybindButton_C_Construct_Params
	{	};

	/**
	 * Function BPW_EnhancedKeybindButton.BPW_EnhancedKeybindButton_C.BndEvt__mButton_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBPW_EnhancedKeybindButton_C_BndEvt__mButton_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_EnhancedKeybindButton.BPW_EnhancedKeybindButton_C.BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBPW_EnhancedKeybindButton_C_BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_EnhancedKeybindButton.BPW_EnhancedKeybindButton_C.ExecuteUbergraph_BPW_EnhancedKeybindButton
	 */
	struct UBPW_EnhancedKeybindButton_C_ExecuteUbergraph_BPW_EnhancedKeybindButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
