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
	 * Function BPW_BlueprintSelector.BPW_BlueprintSelector_C.OnOpen
	 */
	struct UBPW_BlueprintSelector_C_OnOpen_Params
	{	};

	/**
	 * Function BPW_BlueprintSelector.BPW_BlueprintSelector_C.Construct
	 */
	struct UBPW_BlueprintSelector_C_Construct_Params
	{	};

	/**
	 * Function BPW_BlueprintSelector.BPW_BlueprintSelector_C.OnBlueprintClicked
	 */
	struct UBPW_BlueprintSelector_C_OnBlueprintClicked_Params
	{
	public:
		class UFGBlueprintDescriptor*                              blueprintDescriptor;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BlueprintSelector.BPW_BlueprintSelector_C.BndEvt__BPW_BlueprintSelector_Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature
	 */
	struct UBPW_BlueprintSelector_C_BndEvt__BPW_BlueprintSelector_Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_BlueprintSelector.BPW_BlueprintSelector_C.ExecuteUbergraph_BPW_BlueprintSelector
	 */
	struct UBPW_BlueprintSelector_C_ExecuteUbergraph_BPW_BlueprintSelector_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QJE0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_BlueprintSelector.BPW_BlueprintSelector_C.OnBlueprintSelected__DelegateSignature
	 */
	struct UBPW_BlueprintSelector_C_OnBlueprintSelected__DelegateSignature_Params
	{
	public:
		class UFGBlueprintDescriptor*                              blueprintDescriptor;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BlueprintSelector.BPW_BlueprintSelector_C.OnClose__DelegateSignature
	 */
	struct UBPW_BlueprintSelector_C_OnClose__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
