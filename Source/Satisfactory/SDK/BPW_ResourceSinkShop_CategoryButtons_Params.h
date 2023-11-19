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
	 * Function BPW_ResourceSinkShop_CategoryButtons.BPW_ResourceSinkShop_CategoryButtons_C.SetIsSelected
	 */
	struct UBPW_ResourceSinkShop_CategoryButtons_C_SetIsSelected_Params
	{
	public:
		bool                                                       IsSelected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSinkShop_CategoryButtons.BPW_ResourceSinkShop_CategoryButtons_C.UpdateTextStyling
	 */
	struct UBPW_ResourceSinkShop_CategoryButtons_C_UpdateTextStyling_Params
	{
	public:
		bool                                                       IsDarkMode;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WF42[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_ResourceSinkShop_CategoryButtons.BPW_ResourceSinkShop_CategoryButtons_C.SetName
	 */
	struct UBPW_ResourceSinkShop_CategoryButtons_C_SetName_Params
	{
	public:
		class FText                                                mName;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_ResourceSinkShop_CategoryButtons.BPW_ResourceSinkShop_CategoryButtons_C.PreConstruct
	 */
	struct UBPW_ResourceSinkShop_CategoryButtons_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSinkShop_CategoryButtons.BPW_ResourceSinkShop_CategoryButtons_C.BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBPW_ResourceSinkShop_CategoryButtons_C_BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop_CategoryButtons.BPW_ResourceSinkShop_CategoryButtons_C.BndEvt__mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBPW_ResourceSinkShop_CategoryButtons_C_BndEvt__mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop_CategoryButtons.BPW_ResourceSinkShop_CategoryButtons_C.BndEvt__mButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBPW_ResourceSinkShop_CategoryButtons_C_BndEvt__mButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop_CategoryButtons.BPW_ResourceSinkShop_CategoryButtons_C.ExecuteUbergraph_BPW_ResourceSinkShop_CategoryButtons
	 */
	struct UBPW_ResourceSinkShop_CategoryButtons_C_ExecuteUbergraph_BPW_ResourceSinkShop_CategoryButtons_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BCJK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_ResourceSinkShop_CategoryButtons.BPW_ResourceSinkShop_CategoryButtons_C.OnClicked__DelegateSignature
	 */
	struct UBPW_ResourceSinkShop_CategoryButtons_C_OnClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
