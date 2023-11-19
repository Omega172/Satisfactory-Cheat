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
	 * Function BPW_BlueprintDirectorySelector.BPW_BlueprintDirectorySelector_C.MoveToDirectory
	 */
	struct UBPW_BlueprintDirectorySelector_C_MoveToDirectory_Params
	{	};

	/**
	 * Function BPW_BlueprintDirectorySelector.BPW_BlueprintDirectorySelector_C.SetCurrentCategoryToBlueprintRecord
	 */
	struct UBPW_BlueprintDirectorySelector_C_SetCurrentCategoryToBlueprintRecord_Params
	{	};

	/**
	 * Function BPW_BlueprintDirectorySelector.BPW_BlueprintDirectorySelector_C.SetBlueprintRecord
	 */
	struct UBPW_BlueprintDirectorySelector_C_SetBlueprintRecord_Params
	{
	public:
		struct FBlueprintRecord                                    mBlueprintRecord;                                        // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_BlueprintDirectorySelector.BPW_BlueprintDirectorySelector_C.PromptLeaveEditMode
	 */
	struct UBPW_BlueprintDirectorySelector_C_PromptLeaveEditMode_Params
	{
	public:
		bool                                                       IsInEditMode;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BlueprintDirectorySelector.BPW_BlueprintDirectorySelector_C.SetDirectoryMode
	 */
	struct UBPW_BlueprintDirectorySelector_C_SetDirectoryMode_Params
	{
	public:
		bool                                                       mDirectoryMode;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BlueprintDirectorySelector.BPW_BlueprintDirectorySelector_C.Construct
	 */
	struct UBPW_BlueprintDirectorySelector_C_Construct_Params
	{	};

	/**
	 * Function BPW_BlueprintDirectorySelector.BPW_BlueprintDirectorySelector_C.BndEvt__BPW_BlueprintSelector_Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature
	 */
	struct UBPW_BlueprintDirectorySelector_C_BndEvt__BPW_BlueprintSelector_Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_BlueprintDirectorySelector.BPW_BlueprintDirectorySelector_C.BndEvt__BPW_BlueprintDirectorySelector_BPW_BlueprintMenu_K2Node_ComponentBoundEvent_1_OnCloseEditModePrompt__DelegateSignature
	 */
	struct UBPW_BlueprintDirectorySelector_C_BndEvt__BPW_BlueprintDirectorySelector_BPW_BlueprintMenu_K2Node_ComponentBoundEvent_1_OnCloseEditModePrompt__DelegateSignature_Params
	{
	public:
		bool                                                       StayInEditMode;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BlueprintDirectorySelector.BPW_BlueprintDirectorySelector_C.BndEvt__BPW_BlueprintDirectorySelector_BPW_BlueprintMenu_K2Node_ComponentBoundEvent_2_OnNewDirectoryDataUpdated__DelegateSignature
	 */
	struct UBPW_BlueprintDirectorySelector_C_BndEvt__BPW_BlueprintDirectorySelector_BPW_BlueprintMenu_K2Node_ComponentBoundEvent_2_OnNewDirectoryDataUpdated__DelegateSignature_Params
	{
	public:
		struct FStruct_BlueprintDirectoryData                      DirectoryData;                                           // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BlueprintDirectorySelector.BPW_BlueprintDirectorySelector_C.ExecuteUbergraph_BPW_BlueprintDirectorySelector
	 */
	struct UBPW_BlueprintDirectorySelector_C_ExecuteUbergraph_BPW_BlueprintDirectorySelector_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BlueprintDirectorySelector.BPW_BlueprintDirectorySelector_C.OnClose__DelegateSignature
	 */
	struct UBPW_BlueprintDirectorySelector_C_OnClose__DelegateSignature_Params
	{
	public:
		bool                                                       DirectoryHasBeenSet;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1RB3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FStruct_BlueprintDirectoryData                      DirectoryData;                                           // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
