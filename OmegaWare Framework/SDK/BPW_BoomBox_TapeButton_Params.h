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
	 * Function BPW_BoomBox_TapeButton.BPW_BoomBox_TapeButton_C.IconLoaded
	 */
	struct UBPW_BoomBox_TapeButton_C_IconLoaded_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BoomBox_TapeButton.BPW_BoomBox_TapeButton_C.SetTape
	 */
	struct UBPW_BoomBox_TapeButton_C_SetTape_Params
	{
	public:
		class UClass*                                              mTape;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BoomBox_TapeButton.BPW_BoomBox_TapeButton_C.SetIsSelected
	 */
	struct UBPW_BoomBox_TapeButton_C_SetIsSelected_Params
	{
	public:
		bool                                                       mIsSelected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UIB3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_BoomBox_TapeButton.BPW_BoomBox_TapeButton_C.PreConstruct
	 */
	struct UBPW_BoomBox_TapeButton_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BoomBox_TapeButton.BPW_BoomBox_TapeButton_C.BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBPW_BoomBox_TapeButton_C_BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_BoomBox_TapeButton.BPW_BoomBox_TapeButton_C.BndEvt__BPW_BoomBox_TapeButton_mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBPW_BoomBox_TapeButton_C_BndEvt__BPW_BoomBox_TapeButton_mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_BoomBox_TapeButton.BPW_BoomBox_TapeButton_C.BndEvt__BPW_BoomBox_TapeButton_mButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBPW_BoomBox_TapeButton_C_BndEvt__BPW_BoomBox_TapeButton_mButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_BoomBox_TapeButton.BPW_BoomBox_TapeButton_C.ExecuteUbergraph_BPW_BoomBox_TapeButton
	 */
	struct UBPW_BoomBox_TapeButton_C_ExecuteUbergraph_BPW_BoomBox_TapeButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_B9CI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_BoomBox_TapeButton.BPW_BoomBox_TapeButton_C.OnSongsUnhovered__DelegateSignature
	 */
	struct UBPW_BoomBox_TapeButton_C_OnSongsUnhovered__DelegateSignature_Params
	{
	public:
		class UClass*                                              Tape;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BoomBox_TapeButton.BPW_BoomBox_TapeButton_C.OnSongsHovered__DelegateSignature
	 */
	struct UBPW_BoomBox_TapeButton_C_OnSongsHovered__DelegateSignature_Params
	{
	public:
		class UClass*                                              Tape;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BoomBox_TapeButton.BPW_BoomBox_TapeButton_C.OnClicked__DelegateSignature
	 */
	struct UBPW_BoomBox_TapeButton_C_OnClicked__DelegateSignature_Params
	{
	public:
		class UClass*                                              Descriptor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
