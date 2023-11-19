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
	 * Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.SelectMode
	 */
	struct ABP_VehicleTargetPoint_C_SelectMode_Params
	{
	public:
		EMeshWaypointSelection                                     Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.Show Claim Debug Visual
	 */
	struct ABP_VehicleTargetPoint_C_ShowClaimDebugVisual_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.GetLookAtDecription
	 */
	struct ABP_VehicleTargetPoint_C_GetLookAtDecription_Params
	{
	public:
		class AFGCharacterPlayer*                                  byCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FUseState                                           State;                                                   // 0x0008(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
		class FText                                                ReturnValue;                                             // 0x0038(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.UpdateUseState
	 */
	struct ABP_VehicleTargetPoint_C_UpdateUseState_Params
	{
	public:
		class AFGCharacterPlayer*                                  byCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             atLocation;                                              // 0x0008(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 componentHit;                                            // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		struct FUseState                                           out_useState;                                            // 0x0028(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.Update Visuals
	 */
	struct ABP_VehicleTargetPoint_C_UpdateVisuals_Params
	{	};

	/**
	 * Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.ShouldSave
	 */
	struct ABP_VehicleTargetPoint_C_ShouldSave_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.NeedTransform
	 */
	struct ABP_VehicleTargetPoint_C_NeedTransform_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.GatherDependencies
	 */
	struct ABP_VehicleTargetPoint_C_GatherDependencies_Params
	{
	public:
		TArray<class UObject*>                                     out_dependentObjects;                                    // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.ReceiveBeginPlay
	 */
	struct ABP_VehicleTargetPoint_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.OnUse
	 */
	struct ABP_VehicleTargetPoint_C_OnUse_Params
	{
	public:
		class AFGCharacterPlayer*                                  byCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FUseState                                           State;                                                   // 0x0008(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.StartIsLookedAt
	 */
	struct ABP_VehicleTargetPoint_C_StartIsLookedAt_Params
	{
	public:
		class AFGCharacterPlayer*                                  byCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FUseState                                           State;                                                   // 0x0008(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.StopIsLookedAt
	 */
	struct ABP_VehicleTargetPoint_C_StopIsLookedAt_Params
	{
	public:
		class AFGCharacterPlayer*                                  byCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FUseState                                           State;                                                   // 0x0008(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.IsLoopTargetChanged
	 */
	struct ABP_VehicleTargetPoint_C_IsLoopTargetChanged_Params
	{	};

	/**
	 * Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.TargetSpeedChanged
	 */
	struct ABP_VehicleTargetPoint_C_TargetSpeedChanged_Params
	{	};

	/**
	 * Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.HostStationChanged
	 */
	struct ABP_VehicleTargetPoint_C_HostStationChanged_Params
	{	};

	/**
	 * Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.IsDockingTargetChanged
	 */
	struct ABP_VehicleTargetPoint_C_IsDockingTargetChanged_Params
	{	};

	/**
	 * Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.IsTemporaryChanged
	 */
	struct ABP_VehicleTargetPoint_C_IsTemporaryChanged_Params
	{	};

	/**
	 * Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.IsClaimedChanged
	 */
	struct ABP_VehicleTargetPoint_C_IsClaimedChanged_Params
	{	};

	/**
	 * Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.UpdateVisualNextFrame
	 */
	struct ABP_VehicleTargetPoint_C_UpdateVisualNextFrame_Params
	{
	public:
		class UStaticMesh*                                         NewMesh;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UMaterialInstance*                                   Material;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.Update
	 */
	struct ABP_VehicleTargetPoint_C_Update_Params
	{	};

	/**
	 * Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.ExecuteUbergraph_BP_VehicleTargetPoint
	 */
	struct ABP_VehicleTargetPoint_C_ExecuteUbergraph_BP_VehicleTargetPoint_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
