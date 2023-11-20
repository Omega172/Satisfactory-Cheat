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
	 * Function Widget_ObjectScannerMenu.Widget_ObjectScannerMenu_C.SetupRadialMenu
	 */
	struct UWidget_ObjectScannerMenu_C_SetupRadialMenu_Params
	{	};

	/**
	 * Function Widget_ObjectScannerMenu.Widget_ObjectScannerMenu_C.GetScannableIcon
	 */
	struct UWidget_ObjectScannerMenu_C_GetScannableIcon_Params
	{
	public:
		struct FScannableDetails                                   ScannableDetails;                                        // 0x0000(0x0098)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UTexture*                                            Texture;                                                 // 0x0098(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ObjectScannerMenu.Widget_ObjectScannerMenu_C.Get_RingHighlighter_Visibility_1
	 */
	struct UWidget_ObjectScannerMenu_C_Get_RingHighlighter_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ObjectScannerMenu.Widget_ObjectScannerMenu_C.Destruct
	 */
	struct UWidget_ObjectScannerMenu_C_Destruct_Params
	{	};

	/**
	 * Function Widget_ObjectScannerMenu.Widget_ObjectScannerMenu_C.OnAnimationFinished
	 */
	struct UWidget_ObjectScannerMenu_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ObjectScannerMenu.Widget_ObjectScannerMenu_C.Construct
	 */
	struct UWidget_ObjectScannerMenu_C_Construct_Params
	{	};

	/**
	 * Function Widget_ObjectScannerMenu.Widget_ObjectScannerMenu_C.Tick
	 */
	struct UWidget_ObjectScannerMenu_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ObjectScannerMenu.Widget_ObjectScannerMenu_C.ExecuteUbergraph_Widget_ObjectScannerMenu
	 */
	struct UWidget_ObjectScannerMenu_C_ExecuteUbergraph_Widget_ObjectScannerMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LE5X[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
