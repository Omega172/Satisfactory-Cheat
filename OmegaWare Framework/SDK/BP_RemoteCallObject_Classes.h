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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_RemoteCallObject.BP_RemoteCallObject_C
	 * Size -> 0x000C (FullSize[0x0034] - InheritedSize[0x0028])
	 */
	class UBP_RemoteCallObject_C : public UFGRemoteCallObject
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0028(0x0008) ZeroConstructor, Transient, DuplicateTransient
		int32_t                                                    numToPayOff;                                             // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetRemainingCostForSchematic(class UClass* schematic, class UClass* ForItem, int32_t* cost);
		void ServerSetActiveSchematic(class UClass* newActiveSchematic);
		void Server_AddSortRule(class AFGBuildableSplitterSmart* SplitterSmart, const struct FSplitterSortRule& Rule);
		void Server_UpdateSortRule(class AFGBuildableSplitterSmart* SplitterSmart, int32_t Index, const struct FSplitterSortRule& Rule);
		void Server_RemoveSortRule(class AFGBuildableSplitterSmart* SplitterSmart, int32_t Index);
		void ServerCloseVehicleTrunk(class AFGWheeledVehicle* inVehicle, class AFGCharacterPlayer* inPlayer);
		void ServerDismantlePortableMiner(class AFGPortableMiner* inPortableMiner);
		void ServerSetWorkingAtBench(class AFGPlayerController* PlayerWorking, class UFGWorkBench* ResearchMachine);
		void Server_SetRecipeOnManufacturingProxy(class AFGBuildableManufacturer* manufacturer, class UClass* recipe);
		void Server_SplitResource(class UFGInventoryComponent* InventoryComponent, int32_t sourceIdx, int32_t numResourceToMove);
		void Server_MoveItem(class UFGInventoryComponent* SourceComponent, class UFGInventoryComponent* destinationComponent, int32_t sourceIdx, int32_t destinationIdx);
		void Server_MoveItemIfSpace(class UFGInventoryComponent* SourceComponent, int32_t sourceIdx, class UFGInventoryComponent* destinationComponent);
		void PlayDismantlePortableMinerEffects();
		void ServerExtractResourceToPlayer(class AFGResourceNode* ResourceNode, class AFGCharacterPlayer* Player, int32_t Amount);
		void Server_RemoveAllFromIndex(class UFGInventoryComponent* SourceComponent, int32_t sourceIdx);
		void Server_DropItem(class UFGInventoryComponent* InventoryComponent, int32_t sourceIdx, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation);
		void Server_RemoveIngredientsAndAwardRewards(class UFGWorkBench* Workbench, class UFGInventoryComponent* inventory, class UClass* recipe);
		void ServerSetPendingPotentialOnFactory(class AFGBuildableFactory* Factory, double newPotential);
		void ServerOpenVehicleTrunk(class AFGWheeledVehicle* inVehicle, class AFGCharacterPlayer* inPlayer);
		void ServerRegisterInteractingPlayerOnUseInterface(class UObject* interactObject, class AFGCharacterPlayer* Player);
		void ServerUnregisterInteractingPlayerOnUseInterface(class UObject* interactObject, class AFGCharacterPlayer* Player);
		void Server_RemoveNumFromIndex(class UFGInventoryComponent* SourceComponent, int32_t sourceIdx, int32_t NumToRemove);
		void Server_PayOffOnSchematic(class UClass* schematic, class UFGInventoryComponent* FromInventoryComponent, int32_t idx);
		void Server_LaunchShip();
		void Server_ResetFuse(int32_t circuitID);
		void ServerRemoveTargetPoint(class AFGTargetPoint* inTargetPoint, class AFGVehicleSubsystem* Subsystem);
		void Server_ResizeInventory(int32_t NewSize, class UFGInventoryComponent* inInventoryComp);
		void Server_PayOffTowTruckUpgrade(class AFGBuildableSpaceElevator* SpaceElevator, class UFGInventoryComponent* inventory, int32_t inventorySlotIndex);
		void Server_SetTrainStationName(class AFGTrainStationIdentifier* Station, const class FText& Name);
		void Server_GrabAllItemsFromInventory(class UFGInventoryComponent* SourceComponent, class UFGInventoryComponent* destinationComponent, class UClass* onlyGrabOfDesc);
		void Server_RepairDropPod(class AFGDropPod* DropPod, class AFGCharacterPlayer* byCharacter);
		void Server_SetLoadModeOnDockingStation(class AFGBuildableDockingStation* DockingStation, bool isInLoadMode);
		void Server_SetIsProductionPausedOnFactory(class AFGBuildableFactory* Factory, bool IsProductionPaused);
		void Client_RemovePawnHUD();
		void Client_AddPawnHUD(class UClass* HUDClass, class APawn* Pawn);
		void Server_SpaceElevatorUpgradePressed(class AFGBuildableSpaceElevator* SpaceElevator);
		void Server_LaunchTowTruck(class AFGBuildableSpaceElevator* SpaceElevator);
		void Server_UpdateTutorial(EIntroTutorialSteps newTutorialID, class AFGTutorialIntroManager* introManager);
		void Client_PlayTradingPostSequence(class AFGBuildableTradingPost* tradingPost);
		void ServerSetUsingMAM(class AFGPlayerController* PlayerWorking, class UFGResearchMachine* ResearchMachine);
		void ServerInitiateResearch(class AFGResearchManager* ResearchManager, class UFGInventoryComponent* playerInventory, class UClass* schematic, class UClass* InitiatingResearchTree);
		void ServerClaimResearchResults(class AFGResearchManager* ResearchManager, class AFGCharacterPlayer* instigatorPlayer, class UClass* schematic, int32_t selectedRewardIndex);
		void ServerSetWaitTime(class AFGTargetPoint* inTargetPoint, double newWaitTime);
		void Server_SortInventory(class UFGInventoryComponent* InventoryComponent);
		void Server_DropItemIntoStack(class UFGInventoryComponent* InventoryComponent, int32_t sourceIdx, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation);
		void Server_SetLoadModeOnTrainCargoPlatform(class AFGBuildableTrainPlatformCargo* CargoPlatform, bool isInLoadMode);
		void Server_SetTimeTableStops(class AFGRailroadTimeTable* TimeTable, TArray<struct FTimeTableStop> stops);
		void Server_SetTimeTableCurrentStop(class AFGRailroadTimeTable* TimeTable, int32_t Index);
		void Server_SetActorCompassViewDistance(class AActor* Actor, ECompassViewDistance compassViewDistance);
		void Internal_Server_SetActorRepresentationCompassViewDistance(class UFGActorRepresentation* actorRepresentation, ECompassViewDistance compassViewDistance);
		void SetActorRepresentationCompassViewDistance(class UFGActorRepresentation* actorRepresentation, ECompassViewDistance compassViewDistance);
		void Server_SetTrainName(class AFGTrain* train, const class FText& Name);
		void Server_SetTrainSelfDrivingEnabled(class AFGTrain* train, bool IsSelfDriving);
		void Server_DockTrain(class AFGTrain* train);
		void Server_SetActorRepresentationText(class AActor* Actor, const class FText& Text);
		void Server_SetActorRepresentationColor(class AActor* Actor, const struct FLinearColor& NewColor);
		void Server_PurchaseResourceSinkSchematics(class AFGBuildableResourceSinkShop* ResourceSinkShop, class UFGInventoryComponent* playerInventory, TArray<class UClass*> Schematics);
		void Server_ClaimCoupons(class AFGBuildableResourceSink* ResourceSink, int32_t numCoupons);
		void Server_ReturnUnclaimedCoupons(class AFGBuildableResourceSink* ResourceSink);
		void ServerDismantleGolfCart(class AFGWheeledVehicle* inGolfCart);
		void Server_FlushPipeNetwork(class AActor* integrantActor);
		void Server_FlushIntegrant(class AActor* integrantActor);
		void Server_OnCodexOpened(class AFGTutorialIntroManager* introManager);
		void Server_SetSwitchOn(class AFGBuildableCircuitSwitch* circuitSwitch, bool On);
		void Server_SetUserFlowLimit(class AFGBuildablePipelinePump* Pump, double Rate);
		void Server_OpenSlot(class AFGBuildableCalendar* Calendar, int32_t dayNumber);
		void Server_SetPriority(class AFGBuildablePriorityPowerSwitch* priorityPowerSwitch, int32_t Priority);
		void Server_PairDroneStations(class AFGDroneStationInfo* Origin, class AFGDroneStationInfo* Target, class AFGDroneSubsystem* droneSubsystem);
		void Server_SetBuildingTag(class UObject* buildingTagHost, const class FString& buildingTag);
		void Server_SetHasBuildingTag(class UObject* Target, bool HasBuildingTag);
		void Server_SetLightControlDataOnLightSource(class AFGBuildableLightSource* LightSource, const struct FLightSourceControlData& LightControlData);
		void Server_SetLightControlDataOnControlPanel(class AFGBuildableLightsControlPanel* ControlPanel, const struct FLightSourceControlData& LightControlData);
		void Server_SetBuildableLightColorSlot(unsigned char slotIdx, const struct FLinearColor& Color);
		void Server_SetLightSourceEnabled(class AFGBuildableLightSource* LightSource, bool Enabled);
		void Server_SetLightControlPanelEnabled(class AFGBuildableLightsControlPanel* ControlPanel, bool Enabled);
		void Server_SetPrefabSignData(class AFGBuildableWidgetSign* WidgetSign, const struct FPrefabSignData& PrefabSignData);
		void Server_RequestOverlapBox(class ABuild_DoorMiddle_C* Actor, class APlayerController* Player);
		void Server_RequestRemoveOverlapBox(class ABuild_DoorMiddle_C* Actor, class APlayerController* Player);
		void Server_NewTimeTable(class AFGTrain* train);
		void Server_DockVehicle(class AFGWheeledVehicle* Vehicle);
		void Server_AddTetrominoResult(const struct FMiniGameResult& Result);
		void Server_CancelDocking(class AFGTrain* train);
		void Server_AddResourceSinkCoupons(class AFGResourceSinkSubsystem* Subsystem, int32_t numCoupons);
		void Server_SetSpaceRabbitName(const class FText& NewName, class UObject* spaceRabbitObject);
		void Server_SaveAsShopFavorite(class AFGPlayerState* PlayerState, class UClass* ShopSchematic);
		void Server_RemoveAsShopFavorite(class AFGPlayerState* PlayerState, class UClass* ShopSchematic);
		void Server_AddStackToIndex(class UFGInventoryComponent* inInventoryComp, int32_t idx, const struct FInventoryStack& stack, bool allowPartial);
		void Server_MoveStackToInventory(class UFGInventoryComponent* SourceComponent, class UFGInventoryComponent* destinationComponent, int32_t sourceIdx, bool allowPartialAdd);
		void Server_SetSortRules(class AFGBuildableSplitterSmart* SplitterSmart, TArray<struct FSplitterSortRule> NewSortRules);
		void Server_SetPriorityRemotely(class AFGPriorityPowerSwitchInfo* Info, int32_t Priority);
		void Server_SetSwitchOnRemotely(class AFGPriorityPowerSwitchInfo* Info, bool On);
		void Server_SetJunctionConnectionInfo(const struct FFGPipeHyperJunctionConnectionInfo& ConnectionInfo);
		void Server_SetSelectedConsumableTypeIndex(class AFGEquipment* equipment, int32_t selectedIndex);
		void Server_SetPrioritySwitchGroupOnRemotely(int32_t Priority, bool On);
		void ExecuteUbergraph_BP_RemoteCallObject(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
