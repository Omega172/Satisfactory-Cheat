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
	 * Function BPW_FlushHandle.BPW_FlushHandle_C.StartFluidLerp
	 */
	struct UBPW_FlushHandle_C_StartFluidLerp_Params
	{
	public:
		double                                                     Duration;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_FlushHandle.BPW_FlushHandle_C.PlayHandleNoise
	 */
	struct UBPW_FlushHandle_C_PlayHandleNoise_Params
	{
	public:
		double                                                     Speed;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_FlushHandle.BPW_FlushHandle_C.StartLerp
	 */
	struct UBPW_FlushHandle_C_StartLerp_Params
	{
	public:
		double                                                     EndValue;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       FullFlush;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_U25N[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_FlushHandle.BPW_FlushHandle_C.RotateHandle
	 */
	struct UBPW_FlushHandle_C_RotateHandle_Params
	{
	public:
		double                                                     Amount;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_FlushHandle.BPW_FlushHandle_C.BndEvt__Slider_28_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UBPW_FlushHandle_C_BndEvt__Slider_28_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_FlushHandle.BPW_FlushHandle_C.BndEvt__Slider_28_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature
	 */
	struct UBPW_FlushHandle_C_BndEvt__Slider_28_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_FlushHandle.BPW_FlushHandle_C.LerpHandle
	 */
	struct UBPW_FlushHandle_C_LerpHandle_Params
	{	};

	/**
	 * Function BPW_FlushHandle.BPW_FlushHandle_C.BndEvt__mSlider_K2Node_ComponentBoundEvent_2_OnMouseCaptureBeginEvent__DelegateSignature
	 */
	struct UBPW_FlushHandle_C_BndEvt__mSlider_K2Node_ComponentBoundEvent_2_OnMouseCaptureBeginEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_FlushHandle.BPW_FlushHandle_C.ResetFlush
	 */
	struct UBPW_FlushHandle_C_ResetFlush_Params
	{	};

	/**
	 * Function BPW_FlushHandle.BPW_FlushHandle_C.LerpFluid
	 */
	struct UBPW_FlushHandle_C_LerpFluid_Params
	{	};

	/**
	 * Function BPW_FlushHandle.BPW_FlushHandle_C.ExecuteUbergraph_BPW_FlushHandle
	 */
	struct UBPW_FlushHandle_C_ExecuteUbergraph_BPW_FlushHandle_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_FlushHandle.BPW_FlushHandle_C.OnDrainCompleted__DelegateSignature
	 */
	struct UBPW_FlushHandle_C_OnDrainCompleted__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_FlushHandle.BPW_FlushHandle_C.OnFluidFilledUp__DelegateSignature
	 */
	struct UBPW_FlushHandle_C_OnFluidFilledUp__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_FlushHandle.BPW_FlushHandle_C.OnFluidLerp__DelegateSignature
	 */
	struct UBPW_FlushHandle_C_OnFluidLerp__DelegateSignature_Params
	{
	public:
		double                                                     Alpha;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_FlushHandle.BPW_FlushHandle_C.OnFlushCompleted__DelegateSignature
	 */
	struct UBPW_FlushHandle_C_OnFlushCompleted__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_FlushHandle.BPW_FlushHandle_C.OnFlush__DelegateSignature
	 */
	struct UBPW_FlushHandle_C_OnFlush__DelegateSignature_Params
	{
	public:
		double                                                     DrainDuration;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
