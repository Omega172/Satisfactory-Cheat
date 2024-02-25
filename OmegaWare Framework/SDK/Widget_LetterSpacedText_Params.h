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
	 * Function Widget_LetterSpacedText.Widget_LetterSpacedText_C.PreConstruct
	 */
	struct UWidget_LetterSpacedText_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_LetterSpacedText.Widget_LetterSpacedText_C.SetTitle
	 */
	struct UWidget_LetterSpacedText_C_SetTitle_Params
	{
	public:
		class FString                                              Text;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_LetterSpacedText.Widget_LetterSpacedText_C.OnAnimateText
	 */
	struct UWidget_LetterSpacedText_C_OnAnimateText_Params
	{	};

	/**
	 * Function Widget_LetterSpacedText.Widget_LetterSpacedText_C.Construct
	 */
	struct UWidget_LetterSpacedText_C_Construct_Params
	{	};

	/**
	 * Function Widget_LetterSpacedText.Widget_LetterSpacedText_C.ExecuteUbergraph_Widget_LetterSpacedText
	 */
	struct UWidget_LetterSpacedText_C_ExecuteUbergraph_Widget_LetterSpacedText_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LRHJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
