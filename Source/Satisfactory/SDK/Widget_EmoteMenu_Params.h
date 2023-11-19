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
	 * Function Widget_EmoteMenu.Widget_EmoteMenu_C.OnShortcutPressed
	 */
	struct UWidget_EmoteMenu_C_OnShortcutPressed_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4RLX[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_EmoteMenu.Widget_EmoteMenu_C.PlaySelectedEmote
	 */
	struct UWidget_EmoteMenu_C_PlaySelectedEmote_Params
	{	};

	/**
	 * Function Widget_EmoteMenu.Widget_EmoteMenu_C.SetupEmoteData
	 */
	struct UWidget_EmoteMenu_C_SetupEmoteData_Params
	{	};

	/**
	 * Function Widget_EmoteMenu.Widget_EmoteMenu_C.Construct
	 */
	struct UWidget_EmoteMenu_C_Construct_Params
	{	};

	/**
	 * Function Widget_EmoteMenu.Widget_EmoteMenu_C.Destruct
	 */
	struct UWidget_EmoteMenu_C_Destruct_Params
	{	};

	/**
	 * Function Widget_EmoteMenu.Widget_EmoteMenu_C.Tick
	 */
	struct UWidget_EmoteMenu_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_EmoteMenu.Widget_EmoteMenu_C.ExecuteUbergraph_Widget_EmoteMenu
	 */
	struct UWidget_EmoteMenu_C_ExecuteUbergraph_Widget_EmoteMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BRD4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_EmoteMenu.Widget_EmoteMenu_C.ShowEmote__DelegateSignature
	 */
	struct UWidget_EmoteMenu_C_ShowEmote__DelegateSignature_Params
	{
	public:
		int32_t                                                    EmoteIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
