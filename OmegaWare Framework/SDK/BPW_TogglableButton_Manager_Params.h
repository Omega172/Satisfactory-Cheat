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
	 * Function BPW_TogglableButton_Manager.BPW_TogglableButton_Manager_C.SetSelectedIndex
	 */
	struct UBPW_TogglableButton_Manager_C_SetSelectedIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       mPlayAudio;                                              // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ADJS[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_TogglableButton_Manager.BPW_TogglableButton_Manager_C.ResetNonSelectedButtons
	 */
	struct UBPW_TogglableButton_Manager_C_ResetNonSelectedButtons_Params
	{	};

	/**
	 * Function BPW_TogglableButton_Manager.BPW_TogglableButton_Manager_C.AddButton
	 */
	struct UBPW_TogglableButton_Manager_C_AddButton_Params
	{
	public:
		class UBPW_TogglableButton_C*                              TogglableButton;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_TogglableButton_Manager.BPW_TogglableButton_Manager_C.CleanupButtonBindings
	 */
	struct UBPW_TogglableButton_Manager_C_CleanupButtonBindings_Params
	{	};

	/**
	 * Function BPW_TogglableButton_Manager.BPW_TogglableButton_Manager_C.OnButtonClicked
	 */
	struct UBPW_TogglableButton_Manager_C_OnButtonClicked_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_TogglableButton_Manager.BPW_TogglableButton_Manager_C.InitTogglableButtons
	 */
	struct UBPW_TogglableButton_Manager_C_InitTogglableButtons_Params
	{	};

	/**
	 * Function BPW_TogglableButton_Manager.BPW_TogglableButton_Manager_C.PreConstruct
	 */
	struct UBPW_TogglableButton_Manager_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_TogglableButton_Manager.BPW_TogglableButton_Manager_C.Construct
	 */
	struct UBPW_TogglableButton_Manager_C_Construct_Params
	{	};

	/**
	 * Function BPW_TogglableButton_Manager.BPW_TogglableButton_Manager_C.ExecuteUbergraph_BPW_TogglableButton_Manager
	 */
	struct UBPW_TogglableButton_Manager_C_ExecuteUbergraph_BPW_TogglableButton_Manager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_TogglableButton_Manager.BPW_TogglableButton_Manager_C.OnTogglableButtonClicked__DelegateSignature
	 */
	struct UBPW_TogglableButton_Manager_C_OnTogglableButtonClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
