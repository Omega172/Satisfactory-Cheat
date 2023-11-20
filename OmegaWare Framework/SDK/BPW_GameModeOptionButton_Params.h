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
	 * Function BPW_GameModeOptionButton.BPW_GameModeOptionButton_C.Event Close Popup
	 */
	struct UBPW_GameModeOptionButton_C_EventClosePopup_Params
	{
	public:
		bool                                                       ConfirmClicked;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_GameModeOptionButton.BPW_GameModeOptionButton_C.OnOptionClicked
	 */
	struct UBPW_GameModeOptionButton_C_OnOptionClicked_Params
	{	};

	/**
	 * Function BPW_GameModeOptionButton.BPW_GameModeOptionButton_C.ExecuteUbergraph_BPW_GameModeOptionButton
	 */
	struct UBPW_GameModeOptionButton_C_ExecuteUbergraph_BPW_GameModeOptionButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_34CY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
