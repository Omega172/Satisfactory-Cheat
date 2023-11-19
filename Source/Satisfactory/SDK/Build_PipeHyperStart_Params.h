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
	 * Function Build_PipeHyperStart.Build_PipeHyperStart_C.UserConstructionScript
	 */
	struct ABuild_PipeHyperStart_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Build_PipeHyperStart.Build_PipeHyperStart_C.PlayConstructSound_2
	 */
	struct ABuild_PipeHyperStart_C_PlayConstructSound_2_Params
	{	};

	/**
	 * Function Build_PipeHyperStart.Build_PipeHyperStart_C.BndEvt__OverlapSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABuild_PipeHyperStart_C_BndEvt__OverlapSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EYT9[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x00E8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Build_PipeHyperStart.Build_PipeHyperStart_C.OnHasPowerChanged
	 */
	struct ABuild_PipeHyperStart_C_OnHasPowerChanged_Params
	{
	public:
		bool                                                       newHasPower;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_PipeHyperStart.Build_PipeHyperStart_C.GainedSignificance
	 */
	struct ABuild_PipeHyperStart_C_GainedSignificance_Params
	{	};

	/**
	 * Function Build_PipeHyperStart.Build_PipeHyperStart_C.LostSignificance
	 */
	struct ABuild_PipeHyperStart_C_LostSignificance_Params
	{	};

	/**
	 * Function Build_PipeHyperStart.Build_PipeHyperStart_C.StartUpHypertube
	 */
	struct ABuild_PipeHyperStart_C_StartUpHypertube_Params
	{	};

	/**
	 * Function Build_PipeHyperStart.Build_PipeHyperStart_C.StopHyperTube
	 */
	struct ABuild_PipeHyperStart_C_StopHyperTube_Params
	{	};

	/**
	 * Function Build_PipeHyperStart.Build_PipeHyperStart_C.StartEngineSoundTimelineEvent
	 */
	struct ABuild_PipeHyperStart_C_StartEngineSoundTimelineEvent_Params
	{	};

	/**
	 * Function Build_PipeHyperStart.Build_PipeHyperStart_C.EndEngineSoundTimelineEvent
	 */
	struct ABuild_PipeHyperStart_C_EndEngineSoundTimelineEvent_Params
	{	};

	/**
	 * Function Build_PipeHyperStart.Build_PipeHyperStart_C.ReceiveBeginPlay
	 */
	struct ABuild_PipeHyperStart_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Build_PipeHyperStart.Build_PipeHyperStart_C.OnIsProducingChanged
	 */
	struct ABuild_PipeHyperStart_C_OnIsProducingChanged_Params
	{
	public:
		bool                                                       newIsProducing;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_PipeHyperStart.Build_PipeHyperStart_C.StartProductionLoopEffects
	 */
	struct ABuild_PipeHyperStart_C_StartProductionLoopEffects_Params
	{
	public:
		bool                                                       didStartProducing;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_PipeHyperStart.Build_PipeHyperStart_C.StopProductionLoopEffects
	 */
	struct ABuild_PipeHyperStart_C_StopProductionLoopEffects_Params
	{
	public:
		bool                                                       didStopProducing;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_PipeHyperStart.Build_PipeHyperStart_C.ExecuteUbergraph_Build_PipeHyperStart
	 */
	struct ABuild_PipeHyperStart_C_ExecuteUbergraph_Build_PipeHyperStart_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6F2I[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
