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
	 * Function BPW_MapAreaPainter_Swatch.BPW_MapAreaPainter_Swatch_C.GetUnhoveredColor
	 */
	struct UBPW_MapAreaPainter_Swatch_C_GetUnhoveredColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MapAreaPainter_Swatch.BPW_MapAreaPainter_Swatch_C.SetIsSelected
	 */
	struct UBPW_MapAreaPainter_Swatch_C_SetIsSelected_Params
	{
	public:
		bool                                                       mIsSelected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3P2A[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_MapAreaPainter_Swatch.BPW_MapAreaPainter_Swatch_C.SetColor
	 */
	struct UBPW_MapAreaPainter_Swatch_C_SetColor_Params
	{
	public:
		int32_t                                                    ColorIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MapAreaPainter_Swatch.BPW_MapAreaPainter_Swatch_C.PreConstruct
	 */
	struct UBPW_MapAreaPainter_Swatch_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MapAreaPainter_Swatch.BPW_MapAreaPainter_Swatch_C.BndEvt__BPW_MapAreaPainter_Swatch_mButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBPW_MapAreaPainter_Swatch_C_BndEvt__BPW_MapAreaPainter_Swatch_mButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_MapAreaPainter_Swatch.BPW_MapAreaPainter_Swatch_C.BndEvt__BPW_MapAreaPainter_Swatch_mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBPW_MapAreaPainter_Swatch_C_BndEvt__BPW_MapAreaPainter_Swatch_mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_MapAreaPainter_Swatch.BPW_MapAreaPainter_Swatch_C.BndEvt__BPW_MapAreaPainter_Swatch_mButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBPW_MapAreaPainter_Swatch_C_BndEvt__BPW_MapAreaPainter_Swatch_mButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_MapAreaPainter_Swatch.BPW_MapAreaPainter_Swatch_C.ExecuteUbergraph_BPW_MapAreaPainter_Swatch
	 */
	struct UBPW_MapAreaPainter_Swatch_C_ExecuteUbergraph_BPW_MapAreaPainter_Swatch_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MapAreaPainter_Swatch.BPW_MapAreaPainter_Swatch_C.OnClicked__DelegateSignature
	 */
	struct UBPW_MapAreaPainter_Swatch_C_OnClicked__DelegateSignature_Params
	{
	public:
		class UBPW_MapAreaPainter_Swatch_C*                        Instigator;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
