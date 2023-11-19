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
	 * Function BPW_SignModule.BPW_SignModule_C.SetSignText
	 */
	struct UBPW_SignModule_C_SetSignText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_SignModule.BPW_SignModule_C.Init
	 */
	struct UBPW_SignModule_C_Init_Params
	{
	public:
		class UObject*                                             mBuilding;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_SignModule.BPW_SignModule_C.SetSignOn
	 */
	struct UBPW_SignModule_C_SetSignOn_Params
	{
	public:
		bool                                                       mSignOn;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_SignModule.BPW_SignModule_C.Construct
	 */
	struct UBPW_SignModule_C_Construct_Params
	{	};

	/**
	 * Function BPW_SignModule.BPW_SignModule_C.BndEvt__BPW_OnOffSwitch_K2Node_ComponentBoundEvent_0_onSwitchChanged__DelegateSignature
	 */
	struct UBPW_SignModule_C_BndEvt__BPW_OnOffSwitch_K2Node_ComponentBoundEvent_0_onSwitchChanged__DelegateSignature_Params
	{
	public:
		bool                                                       isOn;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_SignModule.BPW_SignModule_C.BndEvt__mSignTextObject_K2Node_ComponentBoundEvent_2_OnEditableTextCommittedEvent__DelegateSignature
	 */
	struct UBPW_SignModule_C_BndEvt__mSignTextObject_K2Node_ComponentBoundEvent_2_OnEditableTextCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_SignModule.BPW_SignModule_C.ExecuteUbergraph_BPW_SignModule
	 */
	struct UBPW_SignModule_C_ExecuteUbergraph_BPW_SignModule_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FA6B[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
