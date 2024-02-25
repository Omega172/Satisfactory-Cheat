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
	 * Function AdvancedWidgets.RadialSlider.SetValueTags
	 */
	struct URadialSlider_SetValueTags_Params
	{
	public:
		TArray<float>                                              InValueTags;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedWidgets.RadialSlider.SetValue
	 */
	struct URadialSlider_SetValue_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedWidgets.RadialSlider.SetUseVerticalDrag
	 */
	struct URadialSlider_SetUseVerticalDrag_Params
	{
	public:
		bool                                                       InUseVerticalDrag;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedWidgets.RadialSlider.SetStepSize
	 */
	struct URadialSlider_SetStepSize_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedWidgets.RadialSlider.SetSliderRange
	 */
	struct URadialSlider_SetSliderRange_Params
	{
	public:
		struct FRuntimeFloatCurve                                  InSliderRange;                                           // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedWidgets.RadialSlider.SetSliderProgressColor
	 */
	struct URadialSlider_SetSliderProgressColor_Params
	{
	public:
		struct FLinearColor                                        InValue;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedWidgets.RadialSlider.SetSliderHandleStartAngle
	 */
	struct URadialSlider_SetSliderHandleStartAngle_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedWidgets.RadialSlider.SetSliderHandleEndAngle
	 */
	struct URadialSlider_SetSliderHandleEndAngle_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedWidgets.RadialSlider.SetSliderHandleColor
	 */
	struct URadialSlider_SetSliderHandleColor_Params
	{
	public:
		struct FLinearColor                                        InValue;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedWidgets.RadialSlider.SetSliderBarColor
	 */
	struct URadialSlider_SetSliderBarColor_Params
	{
	public:
		struct FLinearColor                                        InValue;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedWidgets.RadialSlider.SetShowSliderHandle
	 */
	struct URadialSlider_SetShowSliderHandle_Params
	{
	public:
		bool                                                       InShowSliderHandle;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedWidgets.RadialSlider.SetShowSliderHand
	 */
	struct URadialSlider_SetShowSliderHand_Params
	{
	public:
		bool                                                       InShowSliderHand;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedWidgets.RadialSlider.SetLocked
	 */
	struct URadialSlider_SetLocked_Params
	{
	public:
		bool                                                       InValue;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedWidgets.RadialSlider.SetHandStartEndRatio
	 */
	struct URadialSlider_SetHandStartEndRatio_Params
	{
	public:
		struct FVector2D                                           InValue;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedWidgets.RadialSlider.SetCustomDefaultValue
	 */
	struct URadialSlider_SetCustomDefaultValue_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedWidgets.RadialSlider.SetCenterBackgroundColor
	 */
	struct URadialSlider_SetCenterBackgroundColor_Params
	{
	public:
		struct FLinearColor                                        InValue;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedWidgets.RadialSlider.SetAngularOffset
	 */
	struct URadialSlider_SetAngularOffset_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedWidgets.RadialSlider.GetValue
	 */
	struct URadialSlider_GetValue_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedWidgets.RadialSlider.GetNormalizedSliderHandlePosition
	 */
	struct URadialSlider_GetNormalizedSliderHandlePosition_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedWidgets.RadialSlider.GetCustomDefaultValue
	 */
	struct URadialSlider_GetCustomDefaultValue_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
