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
	 * Function BP_River_PROT.BP_River_PROT_C.ClearAudioTransformData
	 */
	struct ABP_River_PROT_C_ClearAudioTransformData_Params
	{	};

	/**
	 * Function BP_River_PROT.BP_River_PROT_C.Play Turbulent Audio On Spline Point
	 */
	struct ABP_River_PROT_C_PlayTurbulentAudioOnSplinePoint_Params
	{	};

	/**
	 * Function BP_River_PROT.BP_River_PROT_C.Play Rapid Audio On Spline Point
	 */
	struct ABP_River_PROT_C_PlayRapidAudioOnSplinePoint_Params
	{	};

	/**
	 * Function BP_River_PROT.BP_River_PROT_C.Set Adapted Audio Position On Spline Point
	 */
	struct ABP_River_PROT_C_SetAdaptedAudioPositionOnSplinePoint_Params
	{	};

	/**
	 * Function BP_River_PROT.BP_River_PROT_C.Stop Audio On Spline
	 */
	struct ABP_River_PROT_C_StopAudioOnSpline_Params
	{	};

	/**
	 * Function BP_River_PROT.BP_River_PROT_C.Play Base Audio On Spline
	 */
	struct ABP_River_PROT_C_PlayBaseAudioOnSpline_Params
	{	};

	/**
	 * Function BP_River_PROT.BP_River_PROT_C.Set Base Audio Position Along Spline
	 */
	struct ABP_River_PROT_C_SetBaseAudioPositionAlongSpline_Params
	{	};

	/**
	 * Function BP_River_PROT.BP_River_PROT_C.UpdateMaterial
	 */
	struct ABP_River_PROT_C_UpdateMaterial_Params
	{
	public:
		class FString                                              updatedCvar;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_River_PROT.BP_River_PROT_C.ReceiveEndPlay
	 */
	struct ABP_River_PROT_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_River_PROT.BP_River_PROT_C.ReceiveBeginPlay
	 */
	struct ABP_River_PROT_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_River_PROT.BP_River_PROT_C.GainedSignificance
	 */
	struct ABP_River_PROT_C_GainedSignificance_Params
	{	};

	/**
	 * Function BP_River_PROT.BP_River_PROT_C.LostSignificance
	 */
	struct ABP_River_PROT_C_LostSignificance_Params
	{	};

	/**
	 * Function BP_River_PROT.BP_River_PROT_C.UpdateSignificanceTickRate
	 */
	struct ABP_River_PROT_C_UpdateSignificanceTickRate_Params
	{
	public:
		float                                                      NewTickRate;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bTickEnabled;                                            // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_River_PROT.BP_River_PROT_C.ExecuteUbergraph_BP_River_PROT
	 */
	struct ABP_River_PROT_C_ExecuteUbergraph_BP_River_PROT_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
