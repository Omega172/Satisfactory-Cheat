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
	 * Function BPW_MarkerEditor_IconButton.BPW_MarkerEditor_IconButton_C.SetIsLarge
	 */
	struct UBPW_MarkerEditor_IconButton_C_SetIsLarge_Params
	{
	public:
		bool                                                       mIsLarge;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MarkerEditor_IconButton.BPW_MarkerEditor_IconButton_C.SetIsSmall
	 */
	struct UBPW_MarkerEditor_IconButton_C_SetIsSmall_Params
	{
	public:
		bool                                                       IsSmall;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MarkerEditor_IconButton.BPW_MarkerEditor_IconButton_C.SetIsSelected
	 */
	struct UBPW_MarkerEditor_IconButton_C_SetIsSelected_Params
	{
	public:
		bool                                                       mIsSelected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_V135[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_MarkerEditor_IconButton.BPW_MarkerEditor_IconButton_C.PreConstruct
	 */
	struct UBPW_MarkerEditor_IconButton_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MarkerEditor_IconButton.BPW_MarkerEditor_IconButton_C.Construct
	 */
	struct UBPW_MarkerEditor_IconButton_C_Construct_Params
	{	};

	/**
	 * Function BPW_MarkerEditor_IconButton.BPW_MarkerEditor_IconButton_C.BndEvt__BPW_MarkerEditor_IconButton_mButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBPW_MarkerEditor_IconButton_C_BndEvt__BPW_MarkerEditor_IconButton_mButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_MarkerEditor_IconButton.BPW_MarkerEditor_IconButton_C.BndEvt__BPW_MarkerEditor_IconButton_mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBPW_MarkerEditor_IconButton_C_BndEvt__BPW_MarkerEditor_IconButton_mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_MarkerEditor_IconButton.BPW_MarkerEditor_IconButton_C.BndEvt__BPW_MarkerEditor_IconButton_mButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBPW_MarkerEditor_IconButton_C_BndEvt__BPW_MarkerEditor_IconButton_mButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_MarkerEditor_IconButton.BPW_MarkerEditor_IconButton_C.ExecuteUbergraph_BPW_MarkerEditor_IconButton
	 */
	struct UBPW_MarkerEditor_IconButton_C_ExecuteUbergraph_BPW_MarkerEditor_IconButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MarkerEditor_IconButton.BPW_MarkerEditor_IconButton_C.OnUnhovered__DelegateSignature
	 */
	struct UBPW_MarkerEditor_IconButton_C_OnUnhovered__DelegateSignature_Params
	{
	public:
		int32_t                                                    IconID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MarkerEditor_IconButton.BPW_MarkerEditor_IconButton_C.OnHovered__DelegateSignature
	 */
	struct UBPW_MarkerEditor_IconButton_C_OnHovered__DelegateSignature_Params
	{
	public:
		int32_t                                                    IconID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MarkerEditor_IconButton.BPW_MarkerEditor_IconButton_C.OnPressed__DelegateSignature
	 */
	struct UBPW_MarkerEditor_IconButton_C_OnPressed__DelegateSignature_Params
	{
	public:
		int32_t                                                    IconID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
