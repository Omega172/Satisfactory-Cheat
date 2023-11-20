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
	 * Function BP_ProfileSpline.BP_ProfileSpline_C.GetCurrentView
	 */
	struct ABP_ProfileSpline_C_GetCurrentView_Params
	{
	public:
		struct FTransform                                          ReturnValue;                                             // 0x0000(0x0060)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileSpline.BP_ProfileSpline_C.GetCurrentDuration
	 */
	struct ABP_ProfileSpline_C_GetCurrentDuration_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileSpline.BP_ProfileSpline_C.GetConsoleVariableByName
	 */
	struct ABP_ProfileSpline_C_GetConsoleVariableByName_Params
	{
	public:
		class FString                                              VariableName;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              VariableInput;                                           // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileSpline.BP_ProfileSpline_C.CheckDoneRespawning
	 */
	struct ABP_ProfileSpline_C_CheckDoneRespawning_Params
	{
	public:
		bool                                                       bDoneSpawning;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileSpline.BP_ProfileSpline_C.GetPlayerController
	 */
	struct ABP_ProfileSpline_C_GetPlayerController_Params
	{
	public:
		bool                                                       bIsValid;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_462N[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileSpline.BP_ProfileSpline_C.StartProfile
	 */
	struct ABP_ProfileSpline_C_StartProfile_Params
	{	};

	/**
	 * Function BP_ProfileSpline.BP_ProfileSpline_C.ReceiveTick
	 */
	struct ABP_ProfileSpline_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileSpline.BP_ProfileSpline_C.FetchPlayerPawn
	 */
	struct ABP_ProfileSpline_C_FetchPlayerPawn_Params
	{	};

	/**
	 * Function BP_ProfileSpline.BP_ProfileSpline_C.EnsurePlayerDoneSpawning
	 */
	struct ABP_ProfileSpline_C_EnsurePlayerDoneSpawning_Params
	{	};

	/**
	 * Function BP_ProfileSpline.BP_ProfileSpline_C.DebugStart
	 */
	struct ABP_ProfileSpline_C_DebugStart_Params
	{	};

	/**
	 * Function BP_ProfileSpline.BP_ProfileSpline_C.ExecuteUbergraph_BP_ProfileSpline
	 */
	struct ABP_ProfileSpline_C_ExecuteUbergraph_BP_ProfileSpline_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
