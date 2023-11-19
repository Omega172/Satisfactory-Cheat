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
	 * Function BPW_FrackingExtractor.BPW_FrackingExtractor_C.UpdateFluidTank
	 */
	struct UBPW_FrackingExtractor_C_UpdateFluidTank_Params
	{	};

	/**
	 * Function BPW_FrackingExtractor.BPW_FrackingExtractor_C.UpdateFlowRate
	 */
	struct UBPW_FrackingExtractor_C_UpdateFlowRate_Params
	{	};

	/**
	 * Function BPW_FrackingExtractor.BPW_FrackingExtractor_C.SetupStaticInfo
	 */
	struct UBPW_FrackingExtractor_C_SetupStaticInfo_Params
	{	};

	/**
	 * Function BPW_FrackingExtractor.BPW_FrackingExtractor_C.Construct
	 */
	struct UBPW_FrackingExtractor_C_Construct_Params
	{	};

	/**
	 * Function BPW_FrackingExtractor.BPW_FrackingExtractor_C.OnCustomTick
	 */
	struct UBPW_FrackingExtractor_C_OnCustomTick_Params
	{
	public:
		float                                                      UpdateTime;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_FrackingExtractor.BPW_FrackingExtractor_C.BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature
	 */
	struct UBPW_FrackingExtractor_C_BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_FrackingExtractor.BPW_FrackingExtractor_C.OnInteractObjectLoaded
	 */
	struct UBPW_FrackingExtractor_C_OnInteractObjectLoaded_Params
	{
	public:
		class AActor*                                              replicationDetailActorOwner;                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_FrackingExtractor.BPW_FrackingExtractor_C.ExecuteUbergraph_BPW_FrackingExtractor
	 */
	struct UBPW_FrackingExtractor_C_ExecuteUbergraph_BPW_FrackingExtractor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KMJJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
