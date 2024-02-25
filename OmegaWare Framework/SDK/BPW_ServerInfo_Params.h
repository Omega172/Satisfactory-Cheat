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
	 * Function BPW_ServerInfo.BPW_ServerInfo_C.Get Visibility Of Join Button
	 */
	struct UBPW_ServerInfo_C_GetVisibilityOfJoinButton_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ServerInfo.BPW_ServerInfo_C.BP_OnServerComplexStateChanged
	 */
	struct UBPW_ServerInfo_C_BP_OnServerComplexStateChanged_Params
	{
	public:
		class UFGServerObject*                                     Server;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		EServerComplexState                                        State;                                                   // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ServerInfo.BPW_ServerInfo_C.BP_OnServerChanged
	 */
	struct UBPW_ServerInfo_C_BP_OnServerChanged_Params
	{
	public:
		class UFGServerObject*                                     Server;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ServerInfo.BPW_ServerInfo_C.BndEvt__JoinGameButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UBPW_ServerInfo_C_BndEvt__JoinGameButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ServerInfo.BPW_ServerInfo_C.BP_OnServerGameStateChanged
	 */
	struct UBPW_ServerInfo_C_BP_OnServerGameStateChanged_Params
	{
	public:
		class UFGServerObject*                                     Server;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FServerGameState                                    GameState;                                               // 0x0008(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_ServerInfo.BPW_ServerInfo_C.BP_OnServerRenamed
	 */
	struct UBPW_ServerInfo_C_BP_OnServerRenamed_Params
	{
	public:
		class UFGServerObject*                                     Server;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class FString                                              Name;                                                    // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ServerInfo.BPW_ServerInfo_C.BP_OnServerConnectionStateChanged
	 */
	struct UBPW_ServerInfo_C_BP_OnServerConnectionStateChanged_Params
	{
	public:
		class UFGServerObject*                                     Server;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		EBeaconConnectionState                                     ConnectionState;                                         // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ServerInfo.BPW_ServerInfo_C.Construct
	 */
	struct UBPW_ServerInfo_C_Construct_Params
	{	};

	/**
	 * Function BPW_ServerInfo.BPW_ServerInfo_C.BndEvt__BPW_ServerAuthenticationRequired_K2Node_ComponentBoundEvent_2_OnAuthenticate__DelegateSignature
	 */
	struct UBPW_ServerInfo_C_BndEvt__BPW_ServerAuthenticationRequired_K2Node_ComponentBoundEvent_2_OnAuthenticate__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ServerInfo.BPW_ServerInfo_C.BndEvt__BPW_Server_ConnectionIsPossible_K2Node_ComponentBoundEvent_4_OnConnect__DelegateSignature
	 */
	struct UBPW_ServerInfo_C_BndEvt__BPW_Server_ConnectionIsPossible_K2Node_ComponentBoundEvent_4_OnConnect__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ServerInfo.BPW_ServerInfo_C.BndEvt__BPW_Server_ConnectionFailed_K2Node_ComponentBoundEvent_5_OnRetry__DelegateSignature
	 */
	struct UBPW_ServerInfo_C_BndEvt__BPW_Server_ConnectionFailed_K2Node_ComponentBoundEvent_5_OnRetry__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ServerInfo.BPW_ServerInfo_C.ExecuteUbergraph_BPW_ServerInfo
	 */
	struct UBPW_ServerInfo_C_ExecuteUbergraph_BPW_ServerInfo_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
