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
	 * Function Widget_LetterSpacedLetter.Widget_LetterSpacedLetter_C.SetTextAndFont
	 */
	struct UWidget_LetterSpacedLetter_C_SetTextAndFont_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FSlateFontInfo                                      Font;                                                    // 0x0018(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_LetterSpacedLetter.Widget_LetterSpacedLetter_C.PreConstruct
	 */
	struct UWidget_LetterSpacedLetter_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_LetterSpacedLetter.Widget_LetterSpacedLetter_C.ExecuteUbergraph_Widget_LetterSpacedLetter
	 */
	struct UWidget_LetterSpacedLetter_C_ExecuteUbergraph_Widget_LetterSpacedLetter_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
