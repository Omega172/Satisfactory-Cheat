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
	 * Function BPW_StandardButton_Switch.BPW_StandardButton_Switch_C.UpdateButtons
	 */
	struct UBPW_StandardButton_Switch_C_UpdateButtons_Params
	{	};

	/**
	 * Function BPW_StandardButton_Switch.BPW_StandardButton_Switch_C.SetIsSelected
	 */
	struct UBPW_StandardButton_Switch_C_SetIsSelected_Params
	{
	public:
		bool                                                       mIsSelected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7V0M[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_StandardButton_Switch.BPW_StandardButton_Switch_C.PreConstruct
	 */
	struct UBPW_StandardButton_Switch_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_StandardButton_Switch.BPW_StandardButton_Switch_C.Construct
	 */
	struct UBPW_StandardButton_Switch_C_Construct_Params
	{	};

	/**
	 * Function BPW_StandardButton_Switch.BPW_StandardButton_Switch_C.ButtonPressed
	 */
	struct UBPW_StandardButton_Switch_C_ButtonPressed_Params
	{	};

	/**
	 * Function BPW_StandardButton_Switch.BPW_StandardButton_Switch_C.ExecuteUbergraph_BPW_StandardButton_Switch
	 */
	struct UBPW_StandardButton_Switch_C_ExecuteUbergraph_BPW_StandardButton_Switch_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
