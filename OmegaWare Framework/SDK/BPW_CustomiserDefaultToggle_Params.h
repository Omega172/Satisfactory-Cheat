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
	 * Function BPW_CustomiserDefaultToggle.BPW_CustomiserDefaultToggle_C.SetName
	 */
	struct UBPW_CustomiserDefaultToggle_C_SetName_Params
	{	};

	/**
	 * Function BPW_CustomiserDefaultToggle.BPW_CustomiserDefaultToggle_C.SetIsCurrentSwatch
	 */
	struct UBPW_CustomiserDefaultToggle_C_SetIsCurrentSwatch_Params
	{
	public:
		bool                                                       mIsCurrentSwatch;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_CustomiserDefaultToggle.BPW_CustomiserDefaultToggle_C.PreConstruct
	 */
	struct UBPW_CustomiserDefaultToggle_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_CustomiserDefaultToggle.BPW_CustomiserDefaultToggle_C.BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBPW_CustomiserDefaultToggle_C_BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_CustomiserDefaultToggle.BPW_CustomiserDefaultToggle_C.ExecuteUbergraph_BPW_CustomiserDefaultToggle
	 */
	struct UBPW_CustomiserDefaultToggle_C_ExecuteUbergraph_BPW_CustomiserDefaultToggle_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_CustomiserDefaultToggle.BPW_CustomiserDefaultToggle_C.OnClicked__DelegateSignature
	 */
	struct UBPW_CustomiserDefaultToggle_C_OnClicked__DelegateSignature_Params
	{
	public:
		class UClass*                                              SwatchGroup;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
