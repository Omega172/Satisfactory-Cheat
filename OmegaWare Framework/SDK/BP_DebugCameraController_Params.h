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
	 * Function BP_DebugCameraController.BP_DebugCameraController_C.InpActEvt_Shift_P_K2Node_InputKeyEvent_1
	 */
	struct ABP_DebugCameraController_C_InpActEvt_Shift_P_K2Node_InputKeyEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DebugCameraController.BP_DebugCameraController_C.ReceiveOnActivate
	 */
	struct ABP_DebugCameraController_C_ReceiveOnActivate_Params
	{
	public:
		class APlayerController*                                   OriginalPC;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DebugCameraController.BP_DebugCameraController_C.ReceiveOnDeactivate
	 */
	struct ABP_DebugCameraController_C_ReceiveOnDeactivate_Params
	{
	public:
		class APlayerController*                                   RestoredPC;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DebugCameraController.BP_DebugCameraController_C.ExecuteUbergraph_BP_DebugCameraController
	 */
	struct ABP_DebugCameraController_C_ExecuteUbergraph_BP_DebugCameraController_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D0XP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
