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
	 * Function Widget_Credit_Trademark.Widget_Credit_Trademark_C.ShowHideText
	 */
	struct UWidget_Credit_Trademark_C_ShowHideText_Params
	{	};

	/**
	 * Function Widget_Credit_Trademark.Widget_Credit_Trademark_C.SetText
	 */
	struct UWidget_Credit_Trademark_C_SetText_Params
	{
	public:
		class FText                                                mText;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_Credit_Trademark.Widget_Credit_Trademark_C.PreConstruct
	 */
	struct UWidget_Credit_Trademark_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Credit_Trademark.Widget_Credit_Trademark_C.Construct
	 */
	struct UWidget_Credit_Trademark_C_Construct_Params
	{	};

	/**
	 * Function Widget_Credit_Trademark.Widget_Credit_Trademark_C.ExecuteUbergraph_Widget_Credit_Trademark
	 */
	struct UWidget_Credit_Trademark_C_ExecuteUbergraph_Widget_Credit_Trademark_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
