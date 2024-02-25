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
	 * Function BP_PassengerSeat.BP_PassengerSeat_C.InpActEvt_Use_K2Node_InputActionEvent_1
	 */
	struct ABP_PassengerSeat_C_InpActEvt_Use_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PassengerSeat.BP_PassengerSeat_C.UpdateCamera
	 */
	struct ABP_PassengerSeat_C_UpdateCamera_Params
	{	};

	/**
	 * Function BP_PassengerSeat.BP_PassengerSeat_C.ReceivePossessed
	 */
	struct ABP_PassengerSeat_C_ReceivePossessed_Params
	{
	public:
		class AController*                                         NewController;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PassengerSeat.BP_PassengerSeat_C.ReceiveUnpossessed
	 */
	struct ABP_PassengerSeat_C_ReceiveUnpossessed_Params
	{
	public:
		class AController*                                         OldController;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PassengerSeat.BP_PassengerSeat_C.Server_Leave
	 */
	struct ABP_PassengerSeat_C_Server_Leave_Params
	{	};

	/**
	 * Function BP_PassengerSeat.BP_PassengerSeat_C.ExecuteUbergraph_BP_PassengerSeat
	 */
	struct ABP_PassengerSeat_C_ExecuteUbergraph_BP_PassengerSeat_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
