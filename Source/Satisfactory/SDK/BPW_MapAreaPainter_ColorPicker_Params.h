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
	 * Function BPW_MapAreaPainter_ColorPicker.BPW_MapAreaPainter_ColorPicker_C.NormalizedToBrushSize
	 */
	struct UBPW_MapAreaPainter_ColorPicker_C_NormalizedToBrushSize_Params
	{
	public:
		double                                                     Value;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ToNormalized;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_88EO[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MapAreaPainter_ColorPicker.BPW_MapAreaPainter_ColorPicker_C.Set Slider Visibility
	 */
	struct UBPW_MapAreaPainter_ColorPicker_C_SetSliderVisibility_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8O82[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_MapAreaPainter_ColorPicker.BPW_MapAreaPainter_ColorPicker_C.DeselectAll
	 */
	struct UBPW_MapAreaPainter_ColorPicker_C_DeselectAll_Params
	{	};

	/**
	 * Function BPW_MapAreaPainter_ColorPicker.BPW_MapAreaPainter_ColorPicker_C.OnSwatchButtonClicked
	 */
	struct UBPW_MapAreaPainter_ColorPicker_C_OnSwatchButtonClicked_Params
	{
	public:
		class UBPW_MapAreaPainter_Swatch_C*                        Instigator;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MapAreaPainter_ColorPicker.BPW_MapAreaPainter_ColorPicker_C.PreConstruct
	 */
	struct UBPW_MapAreaPainter_ColorPicker_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MapAreaPainter_ColorPicker.BPW_MapAreaPainter_ColorPicker_C.Construct
	 */
	struct UBPW_MapAreaPainter_ColorPicker_C_Construct_Params
	{	};

	/**
	 * Function BPW_MapAreaPainter_ColorPicker.BPW_MapAreaPainter_ColorPicker_C.BndEvt__BPW_MapAreaPainter_ColorPicker_Slider_34_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UBPW_MapAreaPainter_ColorPicker_C_BndEvt__BPW_MapAreaPainter_ColorPicker_Slider_34_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MapAreaPainter_ColorPicker.BPW_MapAreaPainter_ColorPicker_C.ExecuteUbergraph_BPW_MapAreaPainter_ColorPicker
	 */
	struct UBPW_MapAreaPainter_ColorPicker_C_ExecuteUbergraph_BPW_MapAreaPainter_ColorPicker_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OG68[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_MapAreaPainter_ColorPicker.BPW_MapAreaPainter_ColorPicker_C.OnBrushSizeChanged__DelegateSignature
	 */
	struct UBPW_MapAreaPainter_ColorPicker_C_OnBrushSizeChanged__DelegateSignature_Params
	{
	public:
		double                                                     Size;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MapAreaPainter_ColorPicker.BPW_MapAreaPainter_ColorPicker_C.OnSwatchDeselected__DelegateSignature
	 */
	struct UBPW_MapAreaPainter_ColorPicker_C_OnSwatchDeselected__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_MapAreaPainter_ColorPicker.BPW_MapAreaPainter_ColorPicker_C.OnSwatchClicked__DelegateSignature
	 */
	struct UBPW_MapAreaPainter_ColorPicker_C_OnSwatchClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
