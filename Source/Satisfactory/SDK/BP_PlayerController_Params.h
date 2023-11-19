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
	 * Function BP_PlayerController.BP_PlayerController_C.GetPhotoModeWidget
	 */
	struct ABP_PlayerController_C_GetPhotoModeWidget_Params
	{
	public:
		class UFGPhotoModeWidget*                                  ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerController.BP_PlayerController_C.DismantleGolfCart
	 */
	struct ABP_PlayerController_C_DismantleGolfCart_Params
	{
	public:
		class AFGWheeledVehicle*                                   golfCart;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerController.BP_PlayerController_C.OnSetupMovementWind
	 */
	struct ABP_PlayerController_C_OnSetupMovementWind_Params
	{
	public:
		class UAkComponent*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerController.BP_PlayerController_C.DismantlePortableMiner
	 */
	struct ABP_PlayerController_C_DismantlePortableMiner_Params
	{
	public:
		class AFGPortableMiner*                                    PortableMiner;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerController.BP_PlayerController_C.OnStartRespawn
	 */
	struct ABP_PlayerController_C_OnStartRespawn_Params
	{
	public:
		bool                                                       isJoining;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerController.BP_PlayerController_C.ReceiveBeginPlay
	 */
	struct ABP_PlayerController_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_PlayerController.BP_PlayerController_C.CheckAndUpdateGamepad
	 */
	struct ABP_PlayerController_C_CheckAndUpdateGamepad_Params
	{	};

	/**
	 * Function BP_PlayerController.BP_PlayerController_C.OnDisabledInputGateChanged
	 */
	struct ABP_PlayerController_C_OnDisabledInputGateChanged_Params
	{	};

	/**
	 * Function BP_PlayerController.BP_PlayerController_C.CreateSequenceList
	 */
	struct ABP_PlayerController_C_CreateSequenceList_Params
	{	};

	/**
	 * Function BP_PlayerController.BP_PlayerController_C.TogglePhotoModeInstructionsWidget
	 */
	struct ABP_PlayerController_C_TogglePhotoModeInstructionsWidget_Params
	{	};

	/**
	 * Function BP_PlayerController.BP_PlayerController_C.ReceiveTick
	 */
	struct ABP_PlayerController_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerController.BP_PlayerController_C.PlayPhotoSound
	 */
	struct ABP_PlayerController_C_PlayPhotoSound_Params
	{	};

	/**
	 * Function BP_PlayerController.BP_PlayerController_C.TakePhoto
	 */
	struct ABP_PlayerController_C_TakePhoto_Params
	{	};

	/**
	 * Function BP_PlayerController.BP_PlayerController_C.OnDismantlePortableMiner
	 */
	struct ABP_PlayerController_C_OnDismantlePortableMiner_Params
	{
	public:
		class AFGPortableMiner*                                    PortableMiner;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerController.BP_PlayerController_C.OnDismantleGolfCart
	 */
	struct ABP_PlayerController_C_OnDismantleGolfCart_Params
	{
	public:
		class AFGWheeledVehicle*                                   inGolfCart;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerController.BP_PlayerController_C.OnRespawnFinished
	 */
	struct ABP_PlayerController_C_OnRespawnFinished_Params
	{	};

	/**
	 * Function BP_PlayerController.BP_PlayerController_C.TogglePhotoModeInstructionsWidgetVisibility
	 */
	struct ABP_PlayerController_C_TogglePhotoModeInstructionsWidgetVisibility_Params
	{	};

	/**
	 * Function BP_PlayerController.BP_PlayerController_C.OnChat
	 */
	struct ABP_PlayerController_C_OnChat_Params
	{	};

	/**
	 * Function BP_PlayerController.BP_PlayerController_C.ToggleMap
	 */
	struct ABP_PlayerController_C_ToggleMap_Params
	{	};

	/**
	 * Function BP_PlayerController.BP_PlayerController_C.ExecuteUbergraph_BP_PlayerController
	 */
	struct ABP_PlayerController_C_ExecuteUbergraph_BP_PlayerController_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerController.BP_PlayerController_C.OnBeginTypeChat__DelegateSignature
	 */
	struct ABP_PlayerController_C_OnBeginTypeChat__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
