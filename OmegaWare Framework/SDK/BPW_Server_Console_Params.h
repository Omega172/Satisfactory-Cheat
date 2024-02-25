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
	 * Function BPW_Server_Console.BPW_Server_Console_C.Get Command Input Visibility
	 */
	struct UBPW_Server_Console_C_GetCommandInputVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Server_Console.BPW_Server_Console_C.Get Waiting Throbber Visibility
	 */
	struct UBPW_Server_Console_C_GetWaitingThrobberVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Server_Console.BPW_Server_Console_C.BP_OnServerComplexStateChanged
	 */
	struct UBPW_Server_Console_C_BP_OnServerComplexStateChanged_Params
	{
	public:
		class UFGServerObject*                                     Server;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		EServerComplexState                                        State;                                                   // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Server_Console.BPW_Server_Console_C.BndEvt__BPW_ServerAuthenticationRequired_K2Node_ComponentBoundEvent_0_OnAuthenticate__DelegateSignature
	 */
	struct UBPW_Server_Console_C_BndEvt__BPW_ServerAuthenticationRequired_K2Node_ComponentBoundEvent_0_OnAuthenticate__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_Server_Console.BPW_Server_Console_C.BndEvt__BPW_Server_ConnectionIsPossible_K2Node_ComponentBoundEvent_1_OnConnect__DelegateSignature
	 */
	struct UBPW_Server_Console_C_BndEvt__BPW_Server_ConnectionIsPossible_K2Node_ComponentBoundEvent_1_OnConnect__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_Server_Console.BPW_Server_Console_C.BndEvt__BPW_Server_ConnectionFailed_K2Node_ComponentBoundEvent_2_OnRetry__DelegateSignature
	 */
	struct UBPW_Server_Console_C_BndEvt__BPW_Server_ConnectionFailed_K2Node_ComponentBoundEvent_2_OnRetry__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_Server_Console.BPW_Server_Console_C.BP_OnServerChanged
	 */
	struct UBPW_Server_Console_C_BP_OnServerChanged_Params
	{
	public:
		class UFGServerObject*                                     Server;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Server_Console.BPW_Server_Console_C.BP_OnNewServerConsoleOutput
	 */
	struct UBPW_Server_Console_C_BP_OnNewServerConsoleOutput_Params
	{
	public:
		class UFGServerObject*                                     Server;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class FString                                              ConsoleOutput;                                           // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Server_Console.BPW_Server_Console_C.BndEvt__EditableText_98_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature
	 */
	struct UBPW_Server_Console_C_BndEvt__EditableText_98_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Server_Console.BPW_Server_Console_C.ExecuteUbergraph_BPW_Server_Console
	 */
	struct UBPW_Server_Console_C_ExecuteUbergraph_BPW_Server_Console_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
