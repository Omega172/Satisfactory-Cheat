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
	 * Function FGCinematicConveyorBeltBase.FGCinematicConveyorBeltBase_C.UpdateTransforms
	 */
	struct AFGCinematicConveyorBeltBase_C_UpdateTransforms_Params
	{
	public:
		double                                                     Offset;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FTransform>                                  Transforms1;                                             // 0x0008(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function FGCinematicConveyorBeltBase.FGCinematicConveyorBeltBase_C.SetupMeshes
	 */
	struct AFGCinematicConveyorBeltBase_C_SetupMeshes_Params
	{
	public:
		class UStaticMesh*                                         Mesh;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SZJW[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FGCinematicConveyorBeltBase.FGCinematicConveyorBeltBase_C.SetupSpline
	 */
	struct AFGCinematicConveyorBeltBase_C_SetupSpline_Params
	{
	public:
		TArray<struct FSplinePointData>                            InPoints;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function FGCinematicConveyorBeltBase.FGCinematicConveyorBeltBase_C.UserConstructionScript
	 */
	struct AFGCinematicConveyorBeltBase_C_UserConstructionScript_Params
	{	};

	/**
	 * Function FGCinematicConveyorBeltBase.FGCinematicConveyorBeltBase_C.OnNotifyEnd_7E297705416152E6B54AF5A6AA930BFA
	 */
	struct AFGCinematicConveyorBeltBase_C_OnNotifyEnd_7E297705416152E6B54AF5A6AA930BFA_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FGCinematicConveyorBeltBase.FGCinematicConveyorBeltBase_C.OnNotifyBegin_7E297705416152E6B54AF5A6AA930BFA
	 */
	struct AFGCinematicConveyorBeltBase_C_OnNotifyBegin_7E297705416152E6B54AF5A6AA930BFA_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FGCinematicConveyorBeltBase.FGCinematicConveyorBeltBase_C.OnInterrupted_7E297705416152E6B54AF5A6AA930BFA
	 */
	struct AFGCinematicConveyorBeltBase_C_OnInterrupted_7E297705416152E6B54AF5A6AA930BFA_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FGCinematicConveyorBeltBase.FGCinematicConveyorBeltBase_C.OnBlendOut_7E297705416152E6B54AF5A6AA930BFA
	 */
	struct AFGCinematicConveyorBeltBase_C_OnBlendOut_7E297705416152E6B54AF5A6AA930BFA_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FGCinematicConveyorBeltBase.FGCinematicConveyorBeltBase_C.OnCompleted_7E297705416152E6B54AF5A6AA930BFA
	 */
	struct AFGCinematicConveyorBeltBase_C_OnCompleted_7E297705416152E6B54AF5A6AA930BFA_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FGCinematicConveyorBeltBase.FGCinematicConveyorBeltBase_C.ReceiveTick
	 */
	struct AFGCinematicConveyorBeltBase_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FGCinematicConveyorBeltBase.FGCinematicConveyorBeltBase_C.ReceiveBeginPlay
	 */
	struct AFGCinematicConveyorBeltBase_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function FGCinematicConveyorBeltBase.FGCinematicConveyorBeltBase_C.restart
	 */
	struct AFGCinematicConveyorBeltBase_C_restart_Params
	{	};

	/**
	 * Function FGCinematicConveyorBeltBase.FGCinematicConveyorBeltBase_C.ExecuteUbergraph_FGCinematicConveyorBeltBase
	 */
	struct AFGCinematicConveyorBeltBase_C_ExecuteUbergraph_FGCinematicConveyorBeltBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
