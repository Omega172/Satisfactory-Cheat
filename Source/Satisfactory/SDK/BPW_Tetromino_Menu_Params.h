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
	 * Function BPW_Tetromino_Menu.BPW_Tetromino_Menu_C.OnLevelSelectClicked
	 */
	struct UBPW_Tetromino_Menu_C_OnLevelSelectClicked_Params
	{
	public:
		struct FStruct_TetrominoLevelData                          LevelData;                                               // 0x0000(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Tetromino_Menu.BPW_Tetromino_Menu_C.CreateLevelSelect
	 */
	struct UBPW_Tetromino_Menu_C_CreateLevelSelect_Params
	{	};

	/**
	 * Function BPW_Tetromino_Menu.BPW_Tetromino_Menu_C.Construct
	 */
	struct UBPW_Tetromino_Menu_C_Construct_Params
	{	};

	/**
	 * Function BPW_Tetromino_Menu.BPW_Tetromino_Menu_C.BndEvt__BPW_Tetromino_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UBPW_Tetromino_Menu_C_BndEvt__BPW_Tetromino_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_Tetromino_Menu.BPW_Tetromino_Menu_C.BndEvt__mHowToPlay_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UBPW_Tetromino_Menu_C_BndEvt__mHowToPlay_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_Tetromino_Menu.BPW_Tetromino_Menu_C.BndEvt__BPW_Tetromino_HowToPlay_K2Node_ComponentBoundEvent_2_OnBackToMenuClicked__DelegateSignature
	 */
	struct UBPW_Tetromino_Menu_C_BndEvt__BPW_Tetromino_HowToPlay_K2Node_ComponentBoundEvent_2_OnBackToMenuClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_Tetromino_Menu.BPW_Tetromino_Menu_C.ExecuteUbergraph_BPW_Tetromino_Menu
	 */
	struct UBPW_Tetromino_Menu_C_ExecuteUbergraph_BPW_Tetromino_Menu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9EAN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_Tetromino_Menu.BPW_Tetromino_Menu_C.OnStartGameOnLevel__DelegateSignature
	 */
	struct UBPW_Tetromino_Menu_C_OnStartGameOnLevel__DelegateSignature_Params
	{
	public:
		struct FStruct_TetrominoLevelData                          LevelData;                                               // 0x0000(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Tetromino_Menu.BPW_Tetromino_Menu_C.OnHowToPlayClicked__DelegateSignature
	 */
	struct UBPW_Tetromino_Menu_C_OnHowToPlayClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_Tetromino_Menu.BPW_Tetromino_Menu_C.OnStartGameClicked__DelegateSignature
	 */
	struct UBPW_Tetromino_Menu_C_OnStartGameClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
