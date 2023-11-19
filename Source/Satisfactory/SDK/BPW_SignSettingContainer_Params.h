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
	 * Function BPW_SignSettingContainer.BPW_SignSettingContainer_C.SetButtonText
	 */
	struct UBPW_SignSettingContainer_C_SetButtonText_Params
	{
	public:
		class FText                                                mButtonText;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_SignSettingContainer.BPW_SignSettingContainer_C.SetShowDescription
	 */
	struct UBPW_SignSettingContainer_C_SetShowDescription_Params
	{
	public:
		bool                                                       mShowDescription;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_SignSettingContainer.BPW_SignSettingContainer_C.SetDescription
	 */
	struct UBPW_SignSettingContainer_C_SetDescription_Params
	{
	public:
		class FText                                                mDescription;                                            // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_SignSettingContainer.BPW_SignSettingContainer_C.SetTitle
	 */
	struct UBPW_SignSettingContainer_C_SetTitle_Params
	{
	public:
		class FText                                                mTitle;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_SignSettingContainer.BPW_SignSettingContainer_C.PreConstruct
	 */
	struct UBPW_SignSettingContainer_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_SignSettingContainer.BPW_SignSettingContainer_C.BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UBPW_SignSettingContainer_C_BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_SignSettingContainer.BPW_SignSettingContainer_C.ExecuteUbergraph_BPW_SignSettingContainer
	 */
	struct UBPW_SignSettingContainer_C_ExecuteUbergraph_BPW_SignSettingContainer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_SignSettingContainer.BPW_SignSettingContainer_C.OnButtonClicked__DelegateSignature
	 */
	struct UBPW_SignSettingContainer_C_OnButtonClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
