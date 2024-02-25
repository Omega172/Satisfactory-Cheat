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
	 * Function BPW_AlignableWrapBox.BPW_AlignableWrapBox_C.PositionWidgetsInRow
	 */
	struct UBPW_AlignableWrapBox_C_PositionWidgetsInRow_Params
	{
	public:
		TArray<class UWidget*>                                     Widgets;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		double                                                     RowWidth;                                                // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     VerticalOffset;                                          // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_AlignableWrapBox.BPW_AlignableWrapBox_C.UpdatePositioning
	 */
	struct UBPW_AlignableWrapBox_C_UpdatePositioning_Params
	{	};

	/**
	 * Function BPW_AlignableWrapBox.BPW_AlignableWrapBox_C.ClearChildren
	 */
	struct UBPW_AlignableWrapBox_C_ClearChildren_Params
	{	};

	/**
	 * Function BPW_AlignableWrapBox.BPW_AlignableWrapBox_C.AddChildToWrapBox
	 */
	struct UBPW_AlignableWrapBox_C_AddChildToWrapBox_Params
	{
	public:
		class UWidget*                                             Content;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_AlignableWrapBox.BPW_AlignableWrapBox_C.InitPositioning
	 */
	struct UBPW_AlignableWrapBox_C_InitPositioning_Params
	{	};

	/**
	 * Function BPW_AlignableWrapBox.BPW_AlignableWrapBox_C.ExecuteUbergraph_BPW_AlignableWrapBox
	 */
	struct UBPW_AlignableWrapBox_C_ExecuteUbergraph_BPW_AlignableWrapBox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
