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
	 * Function Widget_ProgressBar.Widget_ProgressBar_C.SetUseIconContainer
	 */
	struct UWidget_ProgressBar_C_SetUseIconContainer_Params
	{
	public:
		bool                                                       mUseIconContainer;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ProgressBar.Widget_ProgressBar_C.SetShowIcon
	 */
	struct UWidget_ProgressBar_C_SetShowIcon_Params
	{
	public:
		bool                                                       mShowIcon;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ProgressBar.Widget_ProgressBar_C.SetIcon
	 */
	struct UWidget_ProgressBar_C_SetIcon_Params
	{
	public:
		class UTexture*                                            mIcon;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LMQ8[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_ProgressBar.Widget_ProgressBar_C.GetCurveType
	 */
	struct UWidget_ProgressBar_C_GetCurveType_Params
	{
	public:
		class UCurveFloat*                                         Curve;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ProgressBar.Widget_ProgressBar_C.SetProgressBarFillColor
	 */
	struct UWidget_ProgressBar_C_SetProgressBarFillColor_Params
	{
	public:
		double                                                     InputValue;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ProgressBar.Widget_ProgressBar_C.LerpBar
	 */
	struct UWidget_ProgressBar_C_LerpBar_Params
	{
	public:
		double                                                     StartValue;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     EndValue;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     LerpTime;                                                // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ProgressBar.Widget_ProgressBar_C.PreConstruct
	 */
	struct UWidget_ProgressBar_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ProgressBar.Widget_ProgressBar_C.ExecuteUbergraph_Widget_ProgressBar
	 */
	struct UWidget_ProgressBar_C_ExecuteUbergraph_Widget_ProgressBar_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XBGC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
