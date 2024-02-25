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
	 * Function BPW_ServerStateHandler_3.BPW_ServerStateHandler_2_C.SetExceptions
	 */
	struct UBPW_ServerStateHandler_2_C_SetExceptions_Params
	{
	public:
		TMap<EServerComplexState, class UWidget*>                  mExceptions;                                             // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	};

	/**
	 * Function BPW_ServerStateHandler_3.BPW_ServerStateHandler_2_C.SetState
	 */
	struct UBPW_ServerStateHandler_2_C_SetState_Params
	{
	public:
		class UFGServerObject*                                     Server;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		EServerComplexState                                        State;                                                   // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VPI2[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_ServerStateHandler_3.BPW_ServerStateHandler_2_C.PreConstruct
	 */
	struct UBPW_ServerStateHandler_2_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ServerStateHandler_3.BPW_ServerStateHandler_2_C.BndEvt__BPW_Server_ConnectionFailed_K2Node_ComponentBoundEvent_0_OnRetry__DelegateSignature
	 */
	struct UBPW_ServerStateHandler_2_C_BndEvt__BPW_Server_ConnectionFailed_K2Node_ComponentBoundEvent_0_OnRetry__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ServerStateHandler_3.BPW_ServerStateHandler_2_C.BndEvt__BPW_Server_ConnectionIsPossible_K2Node_ComponentBoundEvent_1_OnConnect__DelegateSignature
	 */
	struct UBPW_ServerStateHandler_2_C_BndEvt__BPW_Server_ConnectionIsPossible_K2Node_ComponentBoundEvent_1_OnConnect__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ServerStateHandler_3.BPW_ServerStateHandler_2_C.BndEvt__BPW_ServerAuthenticationRequired_K2Node_ComponentBoundEvent_2_OnAuthenticate__DelegateSignature
	 */
	struct UBPW_ServerStateHandler_2_C_BndEvt__BPW_ServerAuthenticationRequired_K2Node_ComponentBoundEvent_2_OnAuthenticate__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ServerStateHandler_3.BPW_ServerStateHandler_2_C.ExecuteUbergraph_BPW_ServerStateHandler_3
	 */
	struct UBPW_ServerStateHandler_2_C_ExecuteUbergraph_BPW_ServerStateHandler_3_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
