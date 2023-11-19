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
	 * Function BPW_Server_ManageSaves.BPW_Server_ManageSaves_C.UpdateSaves
	 */
	struct UBPW_Server_ManageSaves_C_UpdateSaves_Params
	{	};

	/**
	 * Function BPW_Server_ManageSaves.BPW_Server_ManageSaves_C.OnMenuOpen
	 */
	struct UBPW_Server_ManageSaves_C_OnMenuOpen_Params
	{	};

	/**
	 * Function BPW_Server_ManageSaves.BPW_Server_ManageSaves_C.Construct
	 */
	struct UBPW_Server_ManageSaves_C_Construct_Params
	{	};

	/**
	 * Function BPW_Server_ManageSaves.BPW_Server_ManageSaves_C.BP_OnServerComplexStateChanged
	 */
	struct UBPW_Server_ManageSaves_C_BP_OnServerComplexStateChanged_Params
	{
	public:
		class UFGServerObject*                                     Server;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		EServerComplexState                                        State;                                                   // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Server_ManageSaves.BPW_Server_ManageSaves_C.BP_OnServerChanged
	 */
	struct UBPW_Server_ManageSaves_C_BP_OnServerChanged_Params
	{
	public:
		class UFGServerObject*                                     Server;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Server_ManageSaves.BPW_Server_ManageSaves_C.BndEvt__mCreateSave_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UBPW_Server_ManageSaves_C_BndEvt__mCreateSave_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_Server_ManageSaves.BPW_Server_ManageSaves_C.BndEvt__mLoadSave_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UBPW_Server_ManageSaves_C_BndEvt__mLoadSave_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_Server_ManageSaves.BPW_Server_ManageSaves_C.BndEvt__mUploadSave_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 */
	struct UBPW_Server_ManageSaves_C_BndEvt__mUploadSave_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_Server_ManageSaves.BPW_Server_ManageSaves_C.ExecuteUbergraph_BPW_Server_ManageSaves
	 */
	struct UBPW_Server_ManageSaves_C_ExecuteUbergraph_BPW_Server_ManageSaves_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
