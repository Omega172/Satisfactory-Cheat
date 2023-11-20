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
	 * Function BPW_TogglableButton.BPW_TogglableButton_C.PlaySFXOnClicked
	 */
	struct UBPW_TogglableButton_C_PlaySFXOnClicked_Params
	{	};

	/**
	 * Function BPW_TogglableButton.BPW_TogglableButton_C.SimulateMouseButtonUp
	 */
	struct UBPW_TogglableButton_C_SimulateMouseButtonUp_Params
	{	};

	/**
	 * Function BPW_TogglableButton.BPW_TogglableButton_C.SetIndex
	 */
	struct UBPW_TogglableButton_C_SetIndex_Params
	{
	public:
		int32_t                                                    mIndex;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_TogglableButton.BPW_TogglableButton_C.OnMouseButtonUp
	 */
	struct UBPW_TogglableButton_C_OnMouseButtonUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BPW_TogglableButton.BPW_TogglableButton_C.OnMouseButtonDown
	 */
	struct UBPW_TogglableButton_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BPW_TogglableButton.BPW_TogglableButton_C.SetIsSelected
	 */
	struct UBPW_TogglableButton_C_SetIsSelected_Params
	{
	public:
		bool                                                       mIsSelected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       mPlayAudio;                                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_TogglableButton.BPW_TogglableButton_C.OnMouseLeave
	 */
	struct UBPW_TogglableButton_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_TogglableButton.BPW_TogglableButton_C.OnMouseEnter
	 */
	struct UBPW_TogglableButton_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_TogglableButton.BPW_TogglableButton_C.ExecuteUbergraph_BPW_TogglableButton
	 */
	struct UBPW_TogglableButton_C_ExecuteUbergraph_BPW_TogglableButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_TogglableButton.BPW_TogglableButton_C.OnIsSelectedChanged__DelegateSignature
	 */
	struct UBPW_TogglableButton_C_OnIsSelectedChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsSelected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_TogglableButton.BPW_TogglableButton_C.OnClicked__DelegateSignature
	 */
	struct UBPW_TogglableButton_C_OnClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
