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
	 * Function BPW_Server_NewGame.BPW_Server_NewGame_C.Get Create Button Is Enabled
	 */
	struct UBPW_Server_NewGame_C_GetCreateButtonIsEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_00T5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_Server_NewGame.BPW_Server_NewGame_C.Init Starting Locs
	 */
	struct UBPW_Server_NewGame_C_InitStartingLocs_Params
	{	};

	/**
	 * Function BPW_Server_NewGame.BPW_Server_NewGame_C.PreConstruct
	 */
	struct UBPW_Server_NewGame_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Server_NewGame.BPW_Server_NewGame_C.OnStartLocClicked
	 */
	struct UBPW_Server_NewGame_C_OnStartLocClicked_Params
	{
	public:
		struct FStartingLocationsDataStruct                        mStartingLocs;                                           // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Server_NewGame.BPW_Server_NewGame_C.BP_OnServerComplexStateChanged
	 */
	struct UBPW_Server_NewGame_C_BP_OnServerComplexStateChanged_Params
	{
	public:
		class UFGServerObject*                                     Server;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		EServerComplexState                                        State;                                                   // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Server_NewGame.BPW_Server_NewGame_C.BndEvt__BPW_Server_ConnectionIsPossible_K2Node_ComponentBoundEvent_3_OnConnect__DelegateSignature
	 */
	struct UBPW_Server_NewGame_C_BndEvt__BPW_Server_ConnectionIsPossible_K2Node_ComponentBoundEvent_3_OnConnect__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_Server_NewGame.BPW_Server_NewGame_C.BndEvt__BPW_Server_ConnectionFailed_K2Node_ComponentBoundEvent_4_OnRetry__DelegateSignature
	 */
	struct UBPW_Server_NewGame_C_BndEvt__BPW_Server_ConnectionFailed_K2Node_ComponentBoundEvent_4_OnRetry__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_Server_NewGame.BPW_Server_NewGame_C.BndEvt__BPW_ServerAuthenticationRequired_K2Node_ComponentBoundEvent_5_OnAuthenticate__DelegateSignature
	 */
	struct UBPW_Server_NewGame_C_BndEvt__BPW_ServerAuthenticationRequired_K2Node_ComponentBoundEvent_5_OnAuthenticate__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_Server_NewGame.BPW_Server_NewGame_C.BndEvt__Button_CreateGame_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UBPW_Server_NewGame_C_BndEvt__Button_CreateGame_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_Server_NewGame.BPW_Server_NewGame_C.BP_OnServerChanged
	 */
	struct UBPW_Server_NewGame_C_BP_OnServerChanged_Params
	{
	public:
		class UFGServerObject*                                     Server;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Server_NewGame.BPW_Server_NewGame_C.ExecuteUbergraph_BPW_Server_NewGame
	 */
	struct UBPW_Server_NewGame_C_ExecuteUbergraph_BPW_Server_NewGame_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
