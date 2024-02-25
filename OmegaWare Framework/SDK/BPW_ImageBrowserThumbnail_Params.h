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
	 * Function BPW_ImageBrowserThumbnail.BPW_ImageBrowserThumbnail_C.SetIsSelected
	 */
	struct UBPW_ImageBrowserThumbnail_C_SetIsSelected_Params
	{
	public:
		bool                                                       mIsSelected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZYW3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_ImageBrowserThumbnail.BPW_ImageBrowserThumbnail_C.Construct
	 */
	struct UBPW_ImageBrowserThumbnail_C_Construct_Params
	{	};

	/**
	 * Function BPW_ImageBrowserThumbnail.BPW_ImageBrowserThumbnail_C.BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBPW_ImageBrowserThumbnail_C_BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ImageBrowserThumbnail.BPW_ImageBrowserThumbnail_C.Destruct
	 */
	struct UBPW_ImageBrowserThumbnail_C_Destruct_Params
	{	};

	/**
	 * Function BPW_ImageBrowserThumbnail.BPW_ImageBrowserThumbnail_C.PreConstruct
	 */
	struct UBPW_ImageBrowserThumbnail_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ImageBrowserThumbnail.BPW_ImageBrowserThumbnail_C.BndEvt__BPW_ImageBrowserThumbnail_mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBPW_ImageBrowserThumbnail_C_BndEvt__BPW_ImageBrowserThumbnail_mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ImageBrowserThumbnail.BPW_ImageBrowserThumbnail_C.ExecuteUbergraph_BPW_ImageBrowserThumbnail
	 */
	struct UBPW_ImageBrowserThumbnail_C_ExecuteUbergraph_BPW_ImageBrowserThumbnail_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IUNO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_ImageBrowserThumbnail.BPW_ImageBrowserThumbnail_C.OnClicked__DelegateSignature
	 */
	struct UBPW_ImageBrowserThumbnail_C_OnClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    ImageIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_R389[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UBPW_ImageBrowserThumbnail_C*                        Instigator;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
