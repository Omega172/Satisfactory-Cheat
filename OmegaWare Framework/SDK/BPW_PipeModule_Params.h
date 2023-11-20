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
	 * Function BPW_PipeModule.BPW_PipeModule_C.InternalUpdateValues
	 */
	struct UBPW_PipeModule_C_InternalUpdateValues_Params
	{
	public:
		double                                                     CurrentStorage;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     MaxStorage;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     FlowIn;                                                  // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     FlowOut;                                                 // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     MaxFlowRate;                                             // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PipeModule.BPW_PipeModule_C.SetFluidType
	 */
	struct UBPW_PipeModule_C_SetFluidType_Params
	{
	public:
		class UClass*                                              fluidDescriptor;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PipeModule.BPW_PipeModule_C.UpdateValues
	 */
	struct UBPW_PipeModule_C_UpdateValues_Params
	{
	public:
		double                                                     CurrentStorage;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     MaxStorage;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     FlowIn;                                                  // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     FlowOut;                                                 // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     MaxFlowRate;                                             // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PipeModule.BPW_PipeModule_C.UpdateTank
	 */
	struct UBPW_PipeModule_C_UpdateTank_Params
	{
	public:
		double                                                     NewValue;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PipeModule.BPW_PipeModule_C.Construct
	 */
	struct UBPW_PipeModule_C_Construct_Params
	{	};

	/**
	 * Function BPW_PipeModule.BPW_PipeModule_C.BndEvt__BPW_FlushModule_K2Node_ComponentBoundEvent_6_OnFlush__DelegateSignature
	 */
	struct UBPW_PipeModule_C_BndEvt__BPW_FlushModule_K2Node_ComponentBoundEvent_6_OnFlush__DelegateSignature_Params
	{
	public:
		double                                                     DrainDuration;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PipeModule.BPW_PipeModule_C.BndEvt__BPW_FlushModule_K2Node_ComponentBoundEvent_12_OnFullNetworkClicked__DelegateSignature
	 */
	struct UBPW_PipeModule_C_BndEvt__BPW_FlushModule_K2Node_ComponentBoundEvent_12_OnFullNetworkClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_PipeModule.BPW_PipeModule_C.BndEvt__BPW_FlushModule_K2Node_ComponentBoundEvent_13_OnThisBufferClicked__DelegateSignature
	 */
	struct UBPW_PipeModule_C_BndEvt__BPW_FlushModule_K2Node_ComponentBoundEvent_13_OnThisBufferClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_PipeModule.BPW_PipeModule_C.BndEvt__BPW_FlushModule_K2Node_ComponentBoundEvent_10_OnDrainCompleted__DelegateSignature
	 */
	struct UBPW_PipeModule_C_BndEvt__BPW_FlushModule_K2Node_ComponentBoundEvent_10_OnDrainCompleted__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_PipeModule.BPW_PipeModule_C.BndEvt__BPW_FlushModule_K2Node_ComponentBoundEvent_8_OnFluidLerp__DelegateSignature
	 */
	struct UBPW_PipeModule_C_BndEvt__BPW_FlushModule_K2Node_ComponentBoundEvent_8_OnFluidLerp__DelegateSignature_Params
	{
	public:
		double                                                     Alpha;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PipeModule.BPW_PipeModule_C.BndEvt__BPW_FlushModule_K2Node_ComponentBoundEvent_9_OnFluidFilledUp__DelegateSignature
	 */
	struct UBPW_PipeModule_C_BndEvt__BPW_FlushModule_K2Node_ComponentBoundEvent_9_OnFluidFilledUp__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_PipeModule.BPW_PipeModule_C.ExecuteUbergraph_BPW_PipeModule
	 */
	struct UBPW_PipeModule_C_ExecuteUbergraph_BPW_PipeModule_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2LCJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_PipeModule.BPW_PipeModule_C.OnDrainCompleted__DelegateSignature
	 */
	struct UBPW_PipeModule_C_OnDrainCompleted__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_PipeModule.BPW_PipeModule_C.OnFlush__DelegateSignature
	 */
	struct UBPW_PipeModule_C_OnFlush__DelegateSignature_Params
	{
	public:
		bool                                                       FlushNetwork;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8H7C[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     DrainDuration;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
