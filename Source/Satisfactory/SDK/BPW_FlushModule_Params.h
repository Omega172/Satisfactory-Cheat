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
	 * Function BPW_FlushModule.BPW_FlushModule_C.SetFlushButtonVisibility
	 */
	struct UBPW_FlushModule_C_SetFlushButtonVisibility_Params
	{
	public:
		bool                                                       mCanFlushSegmentOnly;                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_FlushModule.BPW_FlushModule_C.BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_0_OnFlush__DelegateSignature
	 */
	struct UBPW_FlushModule_C_BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_0_OnFlush__DelegateSignature_Params
	{
	public:
		double                                                     DrainDuration;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_FlushModule.BPW_FlushModule_C.BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_2_OnFluidLerp__DelegateSignature
	 */
	struct UBPW_FlushModule_C_BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_2_OnFluidLerp__DelegateSignature_Params
	{
	public:
		double                                                     Alpha;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_FlushModule.BPW_FlushModule_C.BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_3_OnFluidFilledUp__DelegateSignature
	 */
	struct UBPW_FlushModule_C_BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_3_OnFluidFilledUp__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_FlushModule.BPW_FlushModule_C.BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_4_OnDrainCompleted__DelegateSignature
	 */
	struct UBPW_FlushModule_C_BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_4_OnDrainCompleted__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_FlushModule.BPW_FlushModule_C.BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_5_OnFlushCompleted__DelegateSignature
	 */
	struct UBPW_FlushModule_C_BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_5_OnFlushCompleted__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_FlushModule.BPW_FlushModule_C.BndEvt__BPW_DarkButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
	 */
	struct UBPW_FlushModule_C_BndEvt__BPW_DarkButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_FlushModule.BPW_FlushModule_C.BndEvt__BPW_DarkButton_101_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
	 */
	struct UBPW_FlushModule_C_BndEvt__BPW_DarkButton_101_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_FlushModule.BPW_FlushModule_C.PreConstruct
	 */
	struct UBPW_FlushModule_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_FlushModule.BPW_FlushModule_C.ExecuteUbergraph_BPW_FlushModule
	 */
	struct UBPW_FlushModule_C_ExecuteUbergraph_BPW_FlushModule_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0EV5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_FlushModule.BPW_FlushModule_C.OnThisBufferClicked__DelegateSignature
	 */
	struct UBPW_FlushModule_C_OnThisBufferClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_FlushModule.BPW_FlushModule_C.OnFullNetworkClicked__DelegateSignature
	 */
	struct UBPW_FlushModule_C_OnFullNetworkClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_FlushModule.BPW_FlushModule_C.OnFlushCompleted__DelegateSignature
	 */
	struct UBPW_FlushModule_C_OnFlushCompleted__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_FlushModule.BPW_FlushModule_C.OnDrainCompleted__DelegateSignature
	 */
	struct UBPW_FlushModule_C_OnDrainCompleted__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_FlushModule.BPW_FlushModule_C.OnFluidFilledUp__DelegateSignature
	 */
	struct UBPW_FlushModule_C_OnFluidFilledUp__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_FlushModule.BPW_FlushModule_C.OnFluidLerp__DelegateSignature
	 */
	struct UBPW_FlushModule_C_OnFluidLerp__DelegateSignature_Params
	{
	public:
		double                                                     Alpha;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_FlushModule.BPW_FlushModule_C.OnFlush__DelegateSignature
	 */
	struct UBPW_FlushModule_C_OnFlush__DelegateSignature_Params
	{
	public:
		double                                                     DrainDuration;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
