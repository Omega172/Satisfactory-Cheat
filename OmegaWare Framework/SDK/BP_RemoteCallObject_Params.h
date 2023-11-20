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
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.GetRemainingCostForSchematic
	 */
	struct UBP_RemoteCallObject_C_GetRemainingCostForSchematic_Params
	{
	public:
		class UClass*                                              schematic;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              ForItem;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    cost;                                                    // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerSetActiveSchematic
	 */
	struct UBP_RemoteCallObject_C_ServerSetActiveSchematic_Params
	{
	public:
		class UClass*                                              newActiveSchematic;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_AddSortRule
	 */
	struct UBP_RemoteCallObject_C_Server_AddSortRule_Params
	{
	public:
		class AFGBuildableSplitterSmart*                           SplitterSmart;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FSplitterSortRule                                   Rule;                                                    // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_UpdateSortRule
	 */
	struct UBP_RemoteCallObject_C_Server_UpdateSortRule_Params
	{
	public:
		class AFGBuildableSplitterSmart*                           SplitterSmart;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UFLO[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSplitterSortRule                                   Rule;                                                    // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_RemoveSortRule
	 */
	struct UBP_RemoteCallObject_C_Server_RemoveSortRule_Params
	{
	public:
		class AFGBuildableSplitterSmart*                           SplitterSmart;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerCloseVehicleTrunk
	 */
	struct UBP_RemoteCallObject_C_ServerCloseVehicleTrunk_Params
	{
	public:
		class AFGWheeledVehicle*                                   inVehicle;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class AFGCharacterPlayer*                                  inPlayer;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerDismantlePortableMiner
	 */
	struct UBP_RemoteCallObject_C_ServerDismantlePortableMiner_Params
	{
	public:
		class AFGPortableMiner*                                    inPortableMiner;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerSetWorkingAtBench
	 */
	struct UBP_RemoteCallObject_C_ServerSetWorkingAtBench_Params
	{
	public:
		class AFGPlayerController*                                 PlayerWorking;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UFGWorkBench*                                        ResearchMachine;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetRecipeOnManufacturingProxy
	 */
	struct UBP_RemoteCallObject_C_Server_SetRecipeOnManufacturingProxy_Params
	{
	public:
		class AFGBuildableManufacturer*                            manufacturer;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              recipe;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SplitResource
	 */
	struct UBP_RemoteCallObject_C_Server_SplitResource_Params
	{
	public:
		class UFGInventoryComponent*                               InventoryComponent;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    sourceIdx;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    numResourceToMove;                                       // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_MoveItem
	 */
	struct UBP_RemoteCallObject_C_Server_MoveItem_Params
	{
	public:
		class UFGInventoryComponent*                               SourceComponent;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class UFGInventoryComponent*                               destinationComponent;                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    sourceIdx;                                               // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    destinationIdx;                                          // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_MoveItemIfSpace
	 */
	struct UBP_RemoteCallObject_C_Server_MoveItemIfSpace_Params
	{
	public:
		class UFGInventoryComponent*                               SourceComponent;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    sourceIdx;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HTWS[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UFGInventoryComponent*                               destinationComponent;                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.PlayDismantlePortableMinerEffects
	 */
	struct UBP_RemoteCallObject_C_PlayDismantlePortableMinerEffects_Params
	{	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerExtractResourceToPlayer
	 */
	struct UBP_RemoteCallObject_C_ServerExtractResourceToPlayer_Params
	{
	public:
		class AFGResourceNode*                                     ResourceNode;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class AFGCharacterPlayer*                                  Player;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Amount;                                                  // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_RemoveAllFromIndex
	 */
	struct UBP_RemoteCallObject_C_Server_RemoveAllFromIndex_Params
	{
	public:
		class UFGInventoryComponent*                               SourceComponent;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    sourceIdx;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_DropItem
	 */
	struct UBP_RemoteCallObject_C_Server_DropItem_Params
	{
	public:
		class UFGInventoryComponent*                               InventoryComponent;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    sourceIdx;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WLIY[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             SpawnLocation;                                           // 0x0010(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            SpawnRotation;                                           // 0x0028(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_RemoveIngredientsAndAwardRewards
	 */
	struct UBP_RemoteCallObject_C_Server_RemoveIngredientsAndAwardRewards_Params
	{
	public:
		class UFGWorkBench*                                        Workbench;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class UFGInventoryComponent*                               inventory;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              recipe;                                                  // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerSetPendingPotentialOnFactory
	 */
	struct UBP_RemoteCallObject_C_ServerSetPendingPotentialOnFactory_Params
	{
	public:
		class AFGBuildableFactory*                                 Factory;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		double                                                     newPotential;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerOpenVehicleTrunk
	 */
	struct UBP_RemoteCallObject_C_ServerOpenVehicleTrunk_Params
	{
	public:
		class AFGWheeledVehicle*                                   inVehicle;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class AFGCharacterPlayer*                                  inPlayer;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerRegisterInteractingPlayerOnUseInterface
	 */
	struct UBP_RemoteCallObject_C_ServerRegisterInteractingPlayerOnUseInterface_Params
	{
	public:
		class UObject*                                             interactObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class AFGCharacterPlayer*                                  Player;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerUnregisterInteractingPlayerOnUseInterface
	 */
	struct UBP_RemoteCallObject_C_ServerUnregisterInteractingPlayerOnUseInterface_Params
	{
	public:
		class UObject*                                             interactObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class AFGCharacterPlayer*                                  Player;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_RemoveNumFromIndex
	 */
	struct UBP_RemoteCallObject_C_Server_RemoveNumFromIndex_Params
	{
	public:
		class UFGInventoryComponent*                               SourceComponent;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    sourceIdx;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NumToRemove;                                             // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_PayOffOnSchematic
	 */
	struct UBP_RemoteCallObject_C_Server_PayOffOnSchematic_Params
	{
	public:
		class UClass*                                              schematic;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UFGInventoryComponent*                               FromInventoryComponent;                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    idx;                                                     // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_LaunchShip
	 */
	struct UBP_RemoteCallObject_C_Server_LaunchShip_Params
	{	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_ResetFuse
	 */
	struct UBP_RemoteCallObject_C_Server_ResetFuse_Params
	{
	public:
		int32_t                                                    circuitID;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerRemoveTargetPoint
	 */
	struct UBP_RemoteCallObject_C_ServerRemoveTargetPoint_Params
	{
	public:
		class AFGTargetPoint*                                      inTargetPoint;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class AFGVehicleSubsystem*                                 Subsystem;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_ResizeInventory
	 */
	struct UBP_RemoteCallObject_C_Server_ResizeInventory_Params
	{
	public:
		int32_t                                                    NewSize;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NOIE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UFGInventoryComponent*                               inInventoryComp;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_PayOffTowTruckUpgrade
	 */
	struct UBP_RemoteCallObject_C_Server_PayOffTowTruckUpgrade_Params
	{
	public:
		class AFGBuildableSpaceElevator*                           SpaceElevator;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UFGInventoryComponent*                               inventory;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    inventorySlotIndex;                                      // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetTrainStationName
	 */
	struct UBP_RemoteCallObject_C_Server_SetTrainStationName_Params
	{
	public:
		class AFGTrainStationIdentifier*                           Station;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class FText                                                Name;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_GrabAllItemsFromInventory
	 */
	struct UBP_RemoteCallObject_C_Server_GrabAllItemsFromInventory_Params
	{
	public:
		class UFGInventoryComponent*                               SourceComponent;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class UFGInventoryComponent*                               destinationComponent;                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              onlyGrabOfDesc;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_RepairDropPod
	 */
	struct UBP_RemoteCallObject_C_Server_RepairDropPod_Params
	{
	public:
		class AFGDropPod*                                          DropPod;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class AFGCharacterPlayer*                                  byCharacter;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetLoadModeOnDockingStation
	 */
	struct UBP_RemoteCallObject_C_Server_SetLoadModeOnDockingStation_Params
	{
	public:
		class AFGBuildableDockingStation*                          DockingStation;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       isInLoadMode;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetIsProductionPausedOnFactory
	 */
	struct UBP_RemoteCallObject_C_Server_SetIsProductionPausedOnFactory_Params
	{
	public:
		class AFGBuildableFactory*                                 Factory;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsProductionPaused;                                      // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Client_RemovePawnHUD
	 */
	struct UBP_RemoteCallObject_C_Client_RemovePawnHUD_Params
	{	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Client_AddPawnHUD
	 */
	struct UBP_RemoteCallObject_C_Client_AddPawnHUD_Params
	{
	public:
		class UClass*                                              HUDClass;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class APawn*                                               Pawn;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SpaceElevatorUpgradePressed
	 */
	struct UBP_RemoteCallObject_C_Server_SpaceElevatorUpgradePressed_Params
	{
	public:
		class AFGBuildableSpaceElevator*                           SpaceElevator;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_LaunchTowTruck
	 */
	struct UBP_RemoteCallObject_C_Server_LaunchTowTruck_Params
	{
	public:
		class AFGBuildableSpaceElevator*                           SpaceElevator;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_UpdateTutorial
	 */
	struct UBP_RemoteCallObject_C_Server_UpdateTutorial_Params
	{
	public:
		EIntroTutorialSteps                                        newTutorialID;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_H427[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AFGTutorialIntroManager*                             introManager;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Client_PlayTradingPostSequence
	 */
	struct UBP_RemoteCallObject_C_Client_PlayTradingPostSequence_Params
	{
	public:
		class AFGBuildableTradingPost*                             tradingPost;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerSetUsingMAM
	 */
	struct UBP_RemoteCallObject_C_ServerSetUsingMAM_Params
	{
	public:
		class AFGPlayerController*                                 PlayerWorking;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UFGResearchMachine*                                  ResearchMachine;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerInitiateResearch
	 */
	struct UBP_RemoteCallObject_C_ServerInitiateResearch_Params
	{
	public:
		class AFGResearchManager*                                  ResearchManager;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UFGInventoryComponent*                               playerInventory;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              schematic;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              InitiatingResearchTree;                                  // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerClaimResearchResults
	 */
	struct UBP_RemoteCallObject_C_ServerClaimResearchResults_Params
	{
	public:
		class AFGResearchManager*                                  ResearchManager;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class AFGCharacterPlayer*                                  instigatorPlayer;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              schematic;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    selectedRewardIndex;                                     // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerSetWaitTime
	 */
	struct UBP_RemoteCallObject_C_ServerSetWaitTime_Params
	{
	public:
		class AFGTargetPoint*                                      inTargetPoint;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		double                                                     newWaitTime;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SortInventory
	 */
	struct UBP_RemoteCallObject_C_Server_SortInventory_Params
	{
	public:
		class UFGInventoryComponent*                               InventoryComponent;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_DropItemIntoStack
	 */
	struct UBP_RemoteCallObject_C_Server_DropItemIntoStack_Params
	{
	public:
		class UFGInventoryComponent*                               InventoryComponent;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    sourceIdx;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_43E7[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             SpawnLocation;                                           // 0x0010(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            SpawnRotation;                                           // 0x0028(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetLoadModeOnTrainCargoPlatform
	 */
	struct UBP_RemoteCallObject_C_Server_SetLoadModeOnTrainCargoPlatform_Params
	{
	public:
		class AFGBuildableTrainPlatformCargo*                      CargoPlatform;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       isInLoadMode;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetTimeTableStops
	 */
	struct UBP_RemoteCallObject_C_Server_SetTimeTableStops_Params
	{
	public:
		class AFGRailroadTimeTable*                                TimeTable;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		TArray<struct FTimeTableStop>                              stops;                                                   // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetTimeTableCurrentStop
	 */
	struct UBP_RemoteCallObject_C_Server_SetTimeTableCurrentStop_Params
	{
	public:
		class AFGRailroadTimeTable*                                TimeTable;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetActorCompassViewDistance
	 */
	struct UBP_RemoteCallObject_C_Server_SetActorCompassViewDistance_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		ECompassViewDistance                                       compassViewDistance;                                     // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Internal_Server_SetActorRepresentationCompassViewDistance
	 */
	struct UBP_RemoteCallObject_C_Internal_Server_SetActorRepresentationCompassViewDistance_Params
	{
	public:
		class UFGActorRepresentation*                              actorRepresentation;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		ECompassViewDistance                                       compassViewDistance;                                     // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.SetActorRepresentationCompassViewDistance
	 */
	struct UBP_RemoteCallObject_C_SetActorRepresentationCompassViewDistance_Params
	{
	public:
		class UFGActorRepresentation*                              actorRepresentation;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		ECompassViewDistance                                       compassViewDistance;                                     // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetTrainName
	 */
	struct UBP_RemoteCallObject_C_Server_SetTrainName_Params
	{
	public:
		class AFGTrain*                                            train;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class FText                                                Name;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetTrainSelfDrivingEnabled
	 */
	struct UBP_RemoteCallObject_C_Server_SetTrainSelfDrivingEnabled_Params
	{
	public:
		class AFGTrain*                                            train;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsSelfDriving;                                           // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_DockTrain
	 */
	struct UBP_RemoteCallObject_C_Server_DockTrain_Params
	{
	public:
		class AFGTrain*                                            train;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetActorRepresentationText
	 */
	struct UBP_RemoteCallObject_C_Server_SetActorRepresentationText_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetActorRepresentationColor
	 */
	struct UBP_RemoteCallObject_C_Server_SetActorRepresentationColor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        NewColor;                                                // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_PurchaseResourceSinkSchematics
	 */
	struct UBP_RemoteCallObject_C_Server_PurchaseResourceSinkSchematics_Params
	{
	public:
		class AFGBuildableResourceSinkShop*                        ResourceSinkShop;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UFGInventoryComponent*                               playerInventory;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		TArray<class UClass*>                                      Schematics;                                              // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_ClaimCoupons
	 */
	struct UBP_RemoteCallObject_C_Server_ClaimCoupons_Params
	{
	public:
		class AFGBuildableResourceSink*                            ResourceSink;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    numCoupons;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_ReturnUnclaimedCoupons
	 */
	struct UBP_RemoteCallObject_C_Server_ReturnUnclaimedCoupons_Params
	{
	public:
		class AFGBuildableResourceSink*                            ResourceSink;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerDismantleGolfCart
	 */
	struct UBP_RemoteCallObject_C_ServerDismantleGolfCart_Params
	{
	public:
		class AFGWheeledVehicle*                                   inGolfCart;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_FlushPipeNetwork
	 */
	struct UBP_RemoteCallObject_C_Server_FlushPipeNetwork_Params
	{
	public:
		class AActor*                                              integrantActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_FlushIntegrant
	 */
	struct UBP_RemoteCallObject_C_Server_FlushIntegrant_Params
	{
	public:
		class AActor*                                              integrantActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_OnCodexOpened
	 */
	struct UBP_RemoteCallObject_C_Server_OnCodexOpened_Params
	{
	public:
		class AFGTutorialIntroManager*                             introManager;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetSwitchOn
	 */
	struct UBP_RemoteCallObject_C_Server_SetSwitchOn_Params
	{
	public:
		class AFGBuildableCircuitSwitch*                           circuitSwitch;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       On;                                                      // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetUserFlowLimit
	 */
	struct UBP_RemoteCallObject_C_Server_SetUserFlowLimit_Params
	{
	public:
		class AFGBuildablePipelinePump*                            Pump;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		double                                                     Rate;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_OpenSlot
	 */
	struct UBP_RemoteCallObject_C_Server_OpenSlot_Params
	{
	public:
		class AFGBuildableCalendar*                                Calendar;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    dayNumber;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetPriority
	 */
	struct UBP_RemoteCallObject_C_Server_SetPriority_Params
	{
	public:
		class AFGBuildablePriorityPowerSwitch*                     priorityPowerSwitch;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Priority;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_PairDroneStations
	 */
	struct UBP_RemoteCallObject_C_Server_PairDroneStations_Params
	{
	public:
		class AFGDroneStationInfo*                                 Origin;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class AFGDroneStationInfo*                                 Target;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class AFGDroneSubsystem*                                   droneSubsystem;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetBuildingTag
	 */
	struct UBP_RemoteCallObject_C_Server_SetBuildingTag_Params
	{
	public:
		class UObject*                                             buildingTagHost;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class FString                                              buildingTag;                                             // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetHasBuildingTag
	 */
	struct UBP_RemoteCallObject_C_Server_SetHasBuildingTag_Params
	{
	public:
		class UObject*                                             Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       HasBuildingTag;                                          // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetLightControlDataOnLightSource
	 */
	struct UBP_RemoteCallObject_C_Server_SetLightControlDataOnLightSource_Params
	{
	public:
		class AFGBuildableLightSource*                             LightSource;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FLightSourceControlData                             LightControlData;                                        // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetLightControlDataOnControlPanel
	 */
	struct UBP_RemoteCallObject_C_Server_SetLightControlDataOnControlPanel_Params
	{
	public:
		class AFGBuildableLightsControlPanel*                      ControlPanel;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FLightSourceControlData                             LightControlData;                                        // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetBuildableLightColorSlot
	 */
	struct UBP_RemoteCallObject_C_Server_SetBuildableLightColorSlot_Params
	{
	public:
		unsigned char                                              slotIdx;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FVTJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLinearColor                                        Color;                                                   // 0x0004(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetLightSourceEnabled
	 */
	struct UBP_RemoteCallObject_C_Server_SetLightSourceEnabled_Params
	{
	public:
		class AFGBuildableLightSource*                             LightSource;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       Enabled;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetLightControlPanelEnabled
	 */
	struct UBP_RemoteCallObject_C_Server_SetLightControlPanelEnabled_Params
	{
	public:
		class AFGBuildableLightsControlPanel*                      ControlPanel;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       Enabled;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetPrefabSignData
	 */
	struct UBP_RemoteCallObject_C_Server_SetPrefabSignData_Params
	{
	public:
		class AFGBuildableWidgetSign*                              WidgetSign;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FPrefabSignData                                     PrefabSignData;                                          // 0x0008(0x00F0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_RequestOverlapBox
	 */
	struct UBP_RemoteCallObject_C_Server_RequestOverlapBox_Params
	{
	public:
		class ABuild_DoorMiddle_C*                                 Actor;                                                   // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		class APlayerController*                                   Player;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_RequestRemoveOverlapBox
	 */
	struct UBP_RemoteCallObject_C_Server_RequestRemoveOverlapBox_Params
	{
	public:
		class ABuild_DoorMiddle_C*                                 Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class APlayerController*                                   Player;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_NewTimeTable
	 */
	struct UBP_RemoteCallObject_C_Server_NewTimeTable_Params
	{
	public:
		class AFGTrain*                                            train;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_DockVehicle
	 */
	struct UBP_RemoteCallObject_C_Server_DockVehicle_Params
	{
	public:
		class AFGWheeledVehicle*                                   Vehicle;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_AddTetrominoResult
	 */
	struct UBP_RemoteCallObject_C_Server_AddTetrominoResult_Params
	{
	public:
		struct FMiniGameResult                                     Result;                                                  // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_CancelDocking
	 */
	struct UBP_RemoteCallObject_C_Server_CancelDocking_Params
	{
	public:
		class AFGTrain*                                            train;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_AddResourceSinkCoupons
	 */
	struct UBP_RemoteCallObject_C_Server_AddResourceSinkCoupons_Params
	{
	public:
		class AFGResourceSinkSubsystem*                            Subsystem;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    numCoupons;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetSpaceRabbitName
	 */
	struct UBP_RemoteCallObject_C_Server_SetSpaceRabbitName_Params
	{
	public:
		class FText                                                NewName;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UObject*                                             spaceRabbitObject;                                       // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SaveAsShopFavorite
	 */
	struct UBP_RemoteCallObject_C_Server_SaveAsShopFavorite_Params
	{
	public:
		class AFGPlayerState*                                      PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              ShopSchematic;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_RemoveAsShopFavorite
	 */
	struct UBP_RemoteCallObject_C_Server_RemoveAsShopFavorite_Params
	{
	public:
		class AFGPlayerState*                                      PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              ShopSchematic;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_AddStackToIndex
	 */
	struct UBP_RemoteCallObject_C_Server_AddStackToIndex_Params
	{
	public:
		class UFGInventoryComponent*                               inInventoryComp;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    idx;                                                     // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GC96[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FInventoryStack                                     stack;                                                   // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       allowPartial;                                            // 0x0038(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_MoveStackToInventory
	 */
	struct UBP_RemoteCallObject_C_Server_MoveStackToInventory_Params
	{
	public:
		class UFGInventoryComponent*                               SourceComponent;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class UFGInventoryComponent*                               destinationComponent;                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    sourceIdx;                                               // 0x0010(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       allowPartialAdd;                                         // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetSortRules
	 */
	struct UBP_RemoteCallObject_C_Server_SetSortRules_Params
	{
	public:
		class AFGBuildableSplitterSmart*                           SplitterSmart;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		TArray<struct FSplitterSortRule>                           NewSortRules;                                            // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetPriorityRemotely
	 */
	struct UBP_RemoteCallObject_C_Server_SetPriorityRemotely_Params
	{
	public:
		class AFGPriorityPowerSwitchInfo*                          Info;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Priority;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetSwitchOnRemotely
	 */
	struct UBP_RemoteCallObject_C_Server_SetSwitchOnRemotely_Params
	{
	public:
		class AFGPriorityPowerSwitchInfo*                          Info;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       On;                                                      // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetJunctionConnectionInfo
	 */
	struct UBP_RemoteCallObject_C_Server_SetJunctionConnectionInfo_Params
	{
	public:
		struct FFGPipeHyperJunctionConnectionInfo                  ConnectionInfo;                                          // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetSelectedConsumableTypeIndex
	 */
	struct UBP_RemoteCallObject_C_Server_SetSelectedConsumableTypeIndex_Params
	{
	public:
		class AFGEquipment*                                        equipment;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    selectedIndex;                                           // 0x0008(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetPrioritySwitchGroupOnRemotely
	 */
	struct UBP_RemoteCallObject_C_Server_SetPrioritySwitchGroupOnRemotely_Params
	{
	public:
		int32_t                                                    Priority;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       On;                                                      // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RemoteCallObject.BP_RemoteCallObject_C.ExecuteUbergraph_BP_RemoteCallObject
	 */
	struct UBP_RemoteCallObject_C_ExecuteUbergraph_BP_RemoteCallObject_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_66UR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
