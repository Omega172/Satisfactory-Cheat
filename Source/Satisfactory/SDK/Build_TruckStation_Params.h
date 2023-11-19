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
	 * Function Build_TruckStation.Build_TruckStation_C.FindDockArea
	 */
	struct ABuild_TruckStation_C_FindDockArea_Params
	{
	public:
		class UBoxComponent*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_TruckStation.Build_TruckStation_C.GetDefaultRepresentationColor
	 */
	struct ABuild_TruckStation_C_GetDefaultRepresentationColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_TruckStation.Build_TruckStation_C.OnIsProducingChanged
	 */
	struct ABuild_TruckStation_C_OnIsProducingChanged_Params
	{
	public:
		bool                                                       newIsProducing;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_TruckStation.Build_TruckStation_C.ReceiveEndPlay
	 */
	struct ABuild_TruckStation_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_TruckStation.Build_TruckStation_C.ReceiveBeginPlay
	 */
	struct ABuild_TruckStation_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Build_TruckStation.Build_TruckStation_C.ExecuteUbergraph_Build_TruckStation
	 */
	struct ABuild_TruckStation_C_ExecuteUbergraph_Build_TruckStation_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
