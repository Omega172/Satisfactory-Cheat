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
	 * Function BPW_Monochrome_Switch.BPW_Monochrome_Switch_C.SetIsDisabled
	 */
	struct UBPW_Monochrome_Switch_C_SetIsDisabled_Params
	{
	public:
		bool                                                       mIsDisabled;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Monochrome_Switch.BPW_Monochrome_Switch_C.Toggle
	 */
	struct UBPW_Monochrome_Switch_C_Toggle_Params
	{
	public:
		bool                                                       CallDelegate;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Monochrome_Switch.BPW_Monochrome_Switch_C.SetIsTrue
	 */
	struct UBPW_Monochrome_Switch_C_SetIsTrue_Params
	{
	public:
		bool                                                       mIsTrue;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CallDelegate;                                            // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DJ3Q[0xE];                                   // 0x0002(0x000E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_Monochrome_Switch.BPW_Monochrome_Switch_C.PreConstruct
	 */
	struct UBPW_Monochrome_Switch_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Monochrome_Switch.BPW_Monochrome_Switch_C.BndEvt__bpw_monocrome_switch_mButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBPW_Monochrome_Switch_C_BndEvt__bpw_monocrome_switch_mButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_Monochrome_Switch.BPW_Monochrome_Switch_C.ExecuteUbergraph_BPW_Monochrome_Switch
	 */
	struct UBPW_Monochrome_Switch_C_ExecuteUbergraph_BPW_Monochrome_Switch_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Monochrome_Switch.BPW_Monochrome_Switch_C.OnStateChanged__DelegateSignature
	 */
	struct UBPW_Monochrome_Switch_C_OnStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsTrue;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
