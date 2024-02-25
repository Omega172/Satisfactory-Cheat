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
	 * Function Widget_Hint.Widget_Hint_C.SetDescriptionText
	 */
	struct UWidget_Hint_C_SetDescriptionText_Params
	{
	public:
		class FText                                                mHintDescriptionText;                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_Hint.Widget_Hint_C.SetKeyText
	 */
	struct UWidget_Hint_C_SetKeyText_Params
	{
	public:
		class FText                                                mHintKeyText;                                            // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_Hint.Widget_Hint_C.PlaySpawnAnimReverse
	 */
	struct UWidget_Hint_C_PlaySpawnAnimReverse_Params
	{	};

	/**
	 * Function Widget_Hint.Widget_Hint_C.PlaySpawnAnim
	 */
	struct UWidget_Hint_C_PlaySpawnAnim_Params
	{	};

	/**
	 * Function Widget_Hint.Widget_Hint_C.PreConstruct
	 */
	struct UWidget_Hint_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Hint.Widget_Hint_C.Construct
	 */
	struct UWidget_Hint_C_Construct_Params
	{	};

	/**
	 * Function Widget_Hint.Widget_Hint_C.ExecuteUbergraph_Widget_Hint
	 */
	struct UWidget_Hint_C_ExecuteUbergraph_Widget_Hint_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
