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
	 * Function BPW_FluidGauge.BPW_FluidGauge_C.SetGaugeBackground
	 */
	struct UBPW_FluidGauge_C_SetGaugeBackground_Params
	{
	public:
		class UObject*                                             mGaugeBackgroundObject;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3LW8[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_FluidGauge.BPW_FluidGauge_C.SetGaugeName
	 */
	struct UBPW_FluidGauge_C_SetGaugeName_Params
	{
	public:
		class FText                                                mGaugeName;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_FluidGauge.BPW_FluidGauge_C.SetDividerPosition
	 */
	struct UBPW_FluidGauge_C_SetDividerPosition_Params
	{
	public:
		double                                                     mDividerPosition;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_FluidGauge.BPW_FluidGauge_C.SetupMeterTexture
	 */
	struct UBPW_FluidGauge_C_SetupMeterTexture_Params
	{	};

	/**
	 * Function BPW_FluidGauge.BPW_FluidGauge_C.UpdateGaugeValue
	 */
	struct UBPW_FluidGauge_C_UpdateGaugeValue_Params
	{
	public:
		double                                                     mGaugeValue;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_FluidGauge.BPW_FluidGauge_C.SetMeterColor
	 */
	struct UBPW_FluidGauge_C_SetMeterColor_Params
	{
	public:
		struct FLinearColor                                        mMeterColor;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_FluidGauge.BPW_FluidGauge_C.SetBarColors
	 */
	struct UBPW_FluidGauge_C_SetBarColors_Params
	{
	public:
		struct FLinearColor                                        mPrimaryColor;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        mSecondaryColor;                                         // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_FluidGauge.BPW_FluidGauge_C.SetUseBarDivider
	 */
	struct UBPW_FluidGauge_C_SetUseBarDivider_Params
	{
	public:
		bool                                                       mUseBarDivider;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_68VA[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_FluidGauge.BPW_FluidGauge_C.SetGaugeBarPadding
	 */
	struct UBPW_FluidGauge_C_SetGaugeBarPadding_Params
	{
	public:
		double                                                     mGaugeBarPadding;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_FluidGauge.BPW_FluidGauge_C.PreConstruct
	 */
	struct UBPW_FluidGauge_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_FluidGauge.BPW_FluidGauge_C.Construct
	 */
	struct UBPW_FluidGauge_C_Construct_Params
	{	};

	/**
	 * Function BPW_FluidGauge.BPW_FluidGauge_C.ExecuteUbergraph_BPW_FluidGauge
	 */
	struct UBPW_FluidGauge_C_ExecuteUbergraph_BPW_FluidGauge_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
