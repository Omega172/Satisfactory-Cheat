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
	 * Function BPW_SignSetting_TextField.BPW_SignSetting_TextField_C.IsFocused
	 */
	struct UBPW_SignSetting_TextField_C_IsFocused_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_SignSetting_TextField.BPW_SignSetting_TextField_C.SetText
	 */
	struct UBPW_SignSetting_TextField_C_SetText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_SignSetting_TextField.BPW_SignSetting_TextField_C.GetText
	 */
	struct UBPW_SignSetting_TextField_C_GetText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BPW_SignSetting_TextField.BPW_SignSetting_TextField_C.PreConstruct
	 */
	struct UBPW_SignSetting_TextField_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_SignSetting_TextField.BPW_SignSetting_TextField_C.Destruct
	 */
	struct UBPW_SignSetting_TextField_C_Destruct_Params
	{	};

	/**
	 * Function BPW_SignSetting_TextField.BPW_SignSetting_TextField_C.BndEvt__MultiLineEditableText_84_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextChangedEvent__DelegateSignature
	 */
	struct UBPW_SignSetting_TextField_C_BndEvt__MultiLineEditableText_84_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_SignSetting_TextField.BPW_SignSetting_TextField_C.ExecuteUbergraph_BPW_SignSetting_TextField
	 */
	struct UBPW_SignSetting_TextField_C_ExecuteUbergraph_BPW_SignSetting_TextField_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NJB1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_SignSetting_TextField.BPW_SignSetting_TextField_C.OnTextChanged__DelegateSignature
	 */
	struct UBPW_SignSetting_TextField_C_OnTextChanged__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
