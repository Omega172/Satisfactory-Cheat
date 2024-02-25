/**
 * Name: Satisfactory
 * Version: Early_Access_CL#273254
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.GetRemainingCostForSchematic
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UClass*                                      schematic                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      ForItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            cost                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::GetRemainingCostForSchematic(class UClass* schematic, class UClass* ForItem, int32_t* cost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.GetRemainingCostForSchematic");
		
		UBP_RemoteCallObject_C_GetRemainingCostForSchematic_Params params {};
		params.schematic = schematic;
		params.ForItem = ForItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (cost != nullptr)
			*cost = params.cost;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerSetActiveSchematic
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      newActiveSchematic                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::ServerSetActiveSchematic(class UClass* newActiveSchematic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerSetActiveSchematic");
		
		UBP_RemoteCallObject_C_ServerSetActiveSchematic_Params params {};
		params.newActiveSchematic = newActiveSchematic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_AddSortRule
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGBuildableSplitterSmart*                   SplitterSmart                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSplitterSortRule                           Rule                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_RemoteCallObject_C::Server_AddSortRule(class AFGBuildableSplitterSmart* SplitterSmart, const struct FSplitterSortRule& Rule)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_AddSortRule");
		
		UBP_RemoteCallObject_C_Server_AddSortRule_Params params {};
		params.SplitterSmart = SplitterSmart;
		params.Rule = Rule;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_UpdateSortRule
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGBuildableSplitterSmart*                   SplitterSmart                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSplitterSortRule                           Rule                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_RemoteCallObject_C::Server_UpdateSortRule(class AFGBuildableSplitterSmart* SplitterSmart, int32_t Index, const struct FSplitterSortRule& Rule)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_UpdateSortRule");
		
		UBP_RemoteCallObject_C_Server_UpdateSortRule_Params params {};
		params.SplitterSmart = SplitterSmart;
		params.Index = Index;
		params.Rule = Rule;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_RemoveSortRule
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGBuildableSplitterSmart*                   SplitterSmart                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::Server_RemoveSortRule(class AFGBuildableSplitterSmart* SplitterSmart, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_RemoveSortRule");
		
		UBP_RemoteCallObject_C_Server_RemoveSortRule_Params params {};
		params.SplitterSmart = SplitterSmart;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerCloseVehicleTrunk
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGWheeledVehicle*                           inVehicle                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class AFGCharacterPlayer*                          inPlayer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::ServerCloseVehicleTrunk(class AFGWheeledVehicle* inVehicle, class AFGCharacterPlayer* inPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerCloseVehicleTrunk");
		
		UBP_RemoteCallObject_C_ServerCloseVehicleTrunk_Params params {};
		params.inVehicle = inVehicle;
		params.inPlayer = inPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerDismantlePortableMiner
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGPortableMiner*                            inPortableMiner                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::ServerDismantlePortableMiner(class AFGPortableMiner* inPortableMiner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerDismantlePortableMiner");
		
		UBP_RemoteCallObject_C_ServerDismantlePortableMiner_Params params {};
		params.inPortableMiner = inPortableMiner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerSetWorkingAtBench
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGPlayerController*                         PlayerWorking                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UFGWorkBench*                                ResearchMachine                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::ServerSetWorkingAtBench(class AFGPlayerController* PlayerWorking, class UFGWorkBench* ResearchMachine)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerSetWorkingAtBench");
		
		UBP_RemoteCallObject_C_ServerSetWorkingAtBench_Params params {};
		params.PlayerWorking = PlayerWorking;
		params.ResearchMachine = ResearchMachine;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetRecipeOnManufacturingProxy
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGBuildableManufacturer*                    manufacturer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      recipe                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::Server_SetRecipeOnManufacturingProxy(class AFGBuildableManufacturer* manufacturer, class UClass* recipe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetRecipeOnManufacturingProxy");
		
		UBP_RemoteCallObject_C_Server_SetRecipeOnManufacturingProxy_Params params {};
		params.manufacturer = manufacturer;
		params.recipe = recipe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SplitResource
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGInventoryComponent*                       InventoryComponent                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            sourceIdx                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            numResourceToMove                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::Server_SplitResource(class UFGInventoryComponent* InventoryComponent, int32_t sourceIdx, int32_t numResourceToMove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SplitResource");
		
		UBP_RemoteCallObject_C_Server_SplitResource_Params params {};
		params.InventoryComponent = InventoryComponent;
		params.sourceIdx = sourceIdx;
		params.numResourceToMove = numResourceToMove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_MoveItem
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGInventoryComponent*                       SourceComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		class UFGInventoryComponent*                       destinationComponent                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            sourceIdx                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            destinationIdx                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::Server_MoveItem(class UFGInventoryComponent* SourceComponent, class UFGInventoryComponent* destinationComponent, int32_t sourceIdx, int32_t destinationIdx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_MoveItem");
		
		UBP_RemoteCallObject_C_Server_MoveItem_Params params {};
		params.SourceComponent = SourceComponent;
		params.destinationComponent = destinationComponent;
		params.sourceIdx = sourceIdx;
		params.destinationIdx = destinationIdx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_MoveItemIfSpace
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGInventoryComponent*                       SourceComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            sourceIdx                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UFGInventoryComponent*                       destinationComponent                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::Server_MoveItemIfSpace(class UFGInventoryComponent* SourceComponent, int32_t sourceIdx, class UFGInventoryComponent* destinationComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_MoveItemIfSpace");
		
		UBP_RemoteCallObject_C_Server_MoveItemIfSpace_Params params {};
		params.SourceComponent = SourceComponent;
		params.sourceIdx = sourceIdx;
		params.destinationComponent = destinationComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.PlayDismantlePortableMinerEffects
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_RemoteCallObject_C::PlayDismantlePortableMinerEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.PlayDismantlePortableMinerEffects");
		
		UBP_RemoteCallObject_C_PlayDismantlePortableMinerEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerExtractResourceToPlayer
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGResourceNode*                             ResourceNode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class AFGCharacterPlayer*                          Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::ServerExtractResourceToPlayer(class AFGResourceNode* ResourceNode, class AFGCharacterPlayer* Player, int32_t Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerExtractResourceToPlayer");
		
		UBP_RemoteCallObject_C_ServerExtractResourceToPlayer_Params params {};
		params.ResourceNode = ResourceNode;
		params.Player = Player;
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_RemoveAllFromIndex
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGInventoryComponent*                       SourceComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            sourceIdx                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::Server_RemoveAllFromIndex(class UFGInventoryComponent* SourceComponent, int32_t sourceIdx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_RemoveAllFromIndex");
		
		UBP_RemoteCallObject_C_Server_RemoveAllFromIndex_Params params {};
		params.SourceComponent = SourceComponent;
		params.sourceIdx = sourceIdx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_DropItem
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGInventoryComponent*                       InventoryComponent                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            sourceIdx                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     SpawnLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    SpawnRotation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_RemoteCallObject_C::Server_DropItem(class UFGInventoryComponent* InventoryComponent, int32_t sourceIdx, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_DropItem");
		
		UBP_RemoteCallObject_C_Server_DropItem_Params params {};
		params.InventoryComponent = InventoryComponent;
		params.sourceIdx = sourceIdx;
		params.SpawnLocation = SpawnLocation;
		params.SpawnRotation = SpawnRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_RemoveIngredientsAndAwardRewards
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGWorkBench*                                Workbench                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		class UFGInventoryComponent*                       inventory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      recipe                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::Server_RemoveIngredientsAndAwardRewards(class UFGWorkBench* Workbench, class UFGInventoryComponent* inventory, class UClass* recipe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_RemoveIngredientsAndAwardRewards");
		
		UBP_RemoteCallObject_C_Server_RemoveIngredientsAndAwardRewards_Params params {};
		params.Workbench = Workbench;
		params.inventory = inventory;
		params.recipe = recipe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerSetPendingPotentialOnFactory
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGBuildableFactory*                         Factory                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             newPotential                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::ServerSetPendingPotentialOnFactory(class AFGBuildableFactory* Factory, double newPotential)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerSetPendingPotentialOnFactory");
		
		UBP_RemoteCallObject_C_ServerSetPendingPotentialOnFactory_Params params {};
		params.Factory = Factory;
		params.newPotential = newPotential;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerOpenVehicleTrunk
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGWheeledVehicle*                           inVehicle                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class AFGCharacterPlayer*                          inPlayer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::ServerOpenVehicleTrunk(class AFGWheeledVehicle* inVehicle, class AFGCharacterPlayer* inPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerOpenVehicleTrunk");
		
		UBP_RemoteCallObject_C_ServerOpenVehicleTrunk_Params params {};
		params.inVehicle = inVehicle;
		params.inPlayer = inPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerRegisterInteractingPlayerOnUseInterface
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     interactObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class AFGCharacterPlayer*                          Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::ServerRegisterInteractingPlayerOnUseInterface(class UObject* interactObject, class AFGCharacterPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerRegisterInteractingPlayerOnUseInterface");
		
		UBP_RemoteCallObject_C_ServerRegisterInteractingPlayerOnUseInterface_Params params {};
		params.interactObject = interactObject;
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerUnregisterInteractingPlayerOnUseInterface
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     interactObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class AFGCharacterPlayer*                          Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::ServerUnregisterInteractingPlayerOnUseInterface(class UObject* interactObject, class AFGCharacterPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerUnregisterInteractingPlayerOnUseInterface");
		
		UBP_RemoteCallObject_C_ServerUnregisterInteractingPlayerOnUseInterface_Params params {};
		params.interactObject = interactObject;
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_RemoveNumFromIndex
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGInventoryComponent*                       SourceComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            sourceIdx                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NumToRemove                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::Server_RemoveNumFromIndex(class UFGInventoryComponent* SourceComponent, int32_t sourceIdx, int32_t NumToRemove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_RemoveNumFromIndex");
		
		UBP_RemoteCallObject_C_Server_RemoveNumFromIndex_Params params {};
		params.SourceComponent = SourceComponent;
		params.sourceIdx = sourceIdx;
		params.NumToRemove = NumToRemove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_PayOffOnSchematic
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      schematic                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UFGInventoryComponent*                       FromInventoryComponent                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            idx                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::Server_PayOffOnSchematic(class UClass* schematic, class UFGInventoryComponent* FromInventoryComponent, int32_t idx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_PayOffOnSchematic");
		
		UBP_RemoteCallObject_C_Server_PayOffOnSchematic_Params params {};
		params.schematic = schematic;
		params.FromInventoryComponent = FromInventoryComponent;
		params.idx = idx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_LaunchShip
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_RemoteCallObject_C::Server_LaunchShip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_LaunchShip");
		
		UBP_RemoteCallObject_C_Server_LaunchShip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_ResetFuse
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            circuitID                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::Server_ResetFuse(int32_t circuitID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_ResetFuse");
		
		UBP_RemoteCallObject_C_Server_ResetFuse_Params params {};
		params.circuitID = circuitID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerRemoveTargetPoint
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGTargetPoint*                              inTargetPoint                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class AFGVehicleSubsystem*                         Subsystem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::ServerRemoveTargetPoint(class AFGTargetPoint* inTargetPoint, class AFGVehicleSubsystem* Subsystem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerRemoveTargetPoint");
		
		UBP_RemoteCallObject_C_ServerRemoveTargetPoint_Params params {};
		params.inTargetPoint = inTargetPoint;
		params.Subsystem = Subsystem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_ResizeInventory
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewSize                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UFGInventoryComponent*                       inInventoryComp                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::Server_ResizeInventory(int32_t NewSize, class UFGInventoryComponent* inInventoryComp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_ResizeInventory");
		
		UBP_RemoteCallObject_C_Server_ResizeInventory_Params params {};
		params.NewSize = NewSize;
		params.inInventoryComp = inInventoryComp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_PayOffTowTruckUpgrade
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGBuildableSpaceElevator*                   SpaceElevator                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UFGInventoryComponent*                       inventory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            inventorySlotIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::Server_PayOffTowTruckUpgrade(class AFGBuildableSpaceElevator* SpaceElevator, class UFGInventoryComponent* inventory, int32_t inventorySlotIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_PayOffTowTruckUpgrade");
		
		UBP_RemoteCallObject_C_Server_PayOffTowTruckUpgrade_Params params {};
		params.SpaceElevator = SpaceElevator;
		params.inventory = inventory;
		params.inventorySlotIndex = inventorySlotIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetTrainStationName
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGTrainStationIdentifier*                   Station                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_RemoteCallObject_C::Server_SetTrainStationName(class AFGTrainStationIdentifier* Station, const class FText& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetTrainStationName");
		
		UBP_RemoteCallObject_C_Server_SetTrainStationName_Params params {};
		params.Station = Station;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_GrabAllItemsFromInventory
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGInventoryComponent*                       SourceComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		class UFGInventoryComponent*                       destinationComponent                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      onlyGrabOfDesc                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::Server_GrabAllItemsFromInventory(class UFGInventoryComponent* SourceComponent, class UFGInventoryComponent* destinationComponent, class UClass* onlyGrabOfDesc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_GrabAllItemsFromInventory");
		
		UBP_RemoteCallObject_C_Server_GrabAllItemsFromInventory_Params params {};
		params.SourceComponent = SourceComponent;
		params.destinationComponent = destinationComponent;
		params.onlyGrabOfDesc = onlyGrabOfDesc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_RepairDropPod
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGDropPod*                                  DropPod                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class AFGCharacterPlayer*                          byCharacter                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::Server_RepairDropPod(class AFGDropPod* DropPod, class AFGCharacterPlayer* byCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_RepairDropPod");
		
		UBP_RemoteCallObject_C_Server_RepairDropPod_Params params {};
		params.DropPod = DropPod;
		params.byCharacter = byCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetLoadModeOnDockingStation
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGBuildableDockingStation*                  DockingStation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isInLoadMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::Server_SetLoadModeOnDockingStation(class AFGBuildableDockingStation* DockingStation, bool isInLoadMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetLoadModeOnDockingStation");
		
		UBP_RemoteCallObject_C_Server_SetLoadModeOnDockingStation_Params params {};
		params.DockingStation = DockingStation;
		params.isInLoadMode = isInLoadMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetIsProductionPausedOnFactory
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGBuildableFactory*                         Factory                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsProductionPaused                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::Server_SetIsProductionPausedOnFactory(class AFGBuildableFactory* Factory, bool IsProductionPaused)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetIsProductionPausedOnFactory");
		
		UBP_RemoteCallObject_C_Server_SetIsProductionPausedOnFactory_Params params {};
		params.Factory = Factory;
		params.IsProductionPaused = IsProductionPaused;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Client_RemovePawnHUD
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_RemoteCallObject_C::Client_RemovePawnHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Client_RemovePawnHUD");
		
		UBP_RemoteCallObject_C_Client_RemovePawnHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Client_AddPawnHUD
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      HUDClass                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::Client_AddPawnHUD(class UClass* HUDClass, class APawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Client_AddPawnHUD");
		
		UBP_RemoteCallObject_C_Client_AddPawnHUD_Params params {};
		params.HUDClass = HUDClass;
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SpaceElevatorUpgradePressed
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGBuildableSpaceElevator*                   SpaceElevator                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::Server_SpaceElevatorUpgradePressed(class AFGBuildableSpaceElevator* SpaceElevator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SpaceElevatorUpgradePressed");
		
		UBP_RemoteCallObject_C_Server_SpaceElevatorUpgradePressed_Params params {};
		params.SpaceElevator = SpaceElevator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_LaunchTowTruck
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGBuildableSpaceElevator*                   SpaceElevator                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::Server_LaunchTowTruck(class AFGBuildableSpaceElevator* SpaceElevator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_LaunchTowTruck");
		
		UBP_RemoteCallObject_C_Server_LaunchTowTruck_Params params {};
		params.SpaceElevator = SpaceElevator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_UpdateTutorial
	 * 		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EIntroTutorialSteps                                newTutorialID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFGTutorialIntroManager*                     introManager                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::Server_UpdateTutorial(EIntroTutorialSteps newTutorialID, class AFGTutorialIntroManager* introManager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_UpdateTutorial");
		
		UBP_RemoteCallObject_C_Server_UpdateTutorial_Params params {};
		params.newTutorialID = newTutorialID;
		params.introManager = introManager;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Client_PlayTradingPostSequence
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGBuildableTradingPost*                     tradingPost                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::Client_PlayTradingPostSequence(class AFGBuildableTradingPost* tradingPost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Client_PlayTradingPostSequence");
		
		UBP_RemoteCallObject_C_Client_PlayTradingPostSequence_Params params {};
		params.tradingPost = tradingPost;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerSetUsingMAM
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGPlayerController*                         PlayerWorking                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UFGResearchMachine*                          ResearchMachine                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::ServerSetUsingMAM(class AFGPlayerController* PlayerWorking, class UFGResearchMachine* ResearchMachine)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerSetUsingMAM");
		
		UBP_RemoteCallObject_C_ServerSetUsingMAM_Params params {};
		params.PlayerWorking = PlayerWorking;
		params.ResearchMachine = ResearchMachine;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerInitiateResearch
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGResearchManager*                          ResearchManager                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UFGInventoryComponent*                       playerInventory                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      schematic                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      InitiatingResearchTree                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::ServerInitiateResearch(class AFGResearchManager* ResearchManager, class UFGInventoryComponent* playerInventory, class UClass* schematic, class UClass* InitiatingResearchTree)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerInitiateResearch");
		
		UBP_RemoteCallObject_C_ServerInitiateResearch_Params params {};
		params.ResearchManager = ResearchManager;
		params.playerInventory = playerInventory;
		params.schematic = schematic;
		params.InitiatingResearchTree = InitiatingResearchTree;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerClaimResearchResults
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGResearchManager*                          ResearchManager                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class AFGCharacterPlayer*                          instigatorPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      schematic                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            selectedRewardIndex                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::ServerClaimResearchResults(class AFGResearchManager* ResearchManager, class AFGCharacterPlayer* instigatorPlayer, class UClass* schematic, int32_t selectedRewardIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerClaimResearchResults");
		
		UBP_RemoteCallObject_C_ServerClaimResearchResults_Params params {};
		params.ResearchManager = ResearchManager;
		params.instigatorPlayer = instigatorPlayer;
		params.schematic = schematic;
		params.selectedRewardIndex = selectedRewardIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerSetWaitTime
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGTargetPoint*                              inTargetPoint                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             newWaitTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::ServerSetWaitTime(class AFGTargetPoint* inTargetPoint, double newWaitTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerSetWaitTime");
		
		UBP_RemoteCallObject_C_ServerSetWaitTime_Params params {};
		params.inTargetPoint = inTargetPoint;
		params.newWaitTime = newWaitTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SortInventory
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGInventoryComponent*                       InventoryComponent                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::Server_SortInventory(class UFGInventoryComponent* InventoryComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SortInventory");
		
		UBP_RemoteCallObject_C_Server_SortInventory_Params params {};
		params.InventoryComponent = InventoryComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_DropItemIntoStack
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGInventoryComponent*                       InventoryComponent                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            sourceIdx                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     SpawnLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    SpawnRotation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_RemoteCallObject_C::Server_DropItemIntoStack(class UFGInventoryComponent* InventoryComponent, int32_t sourceIdx, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_DropItemIntoStack");
		
		UBP_RemoteCallObject_C_Server_DropItemIntoStack_Params params {};
		params.InventoryComponent = InventoryComponent;
		params.sourceIdx = sourceIdx;
		params.SpawnLocation = SpawnLocation;
		params.SpawnRotation = SpawnRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetLoadModeOnTrainCargoPlatform
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGBuildableTrainPlatformCargo*              CargoPlatform                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isInLoadMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::Server_SetLoadModeOnTrainCargoPlatform(class AFGBuildableTrainPlatformCargo* CargoPlatform, bool isInLoadMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetLoadModeOnTrainCargoPlatform");
		
		UBP_RemoteCallObject_C_Server_SetLoadModeOnTrainCargoPlatform_Params params {};
		params.CargoPlatform = CargoPlatform;
		params.isInLoadMode = isInLoadMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetTimeTableStops
	 * 		Flags  -> (Net, NetReliable, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGRailroadTimeTable*                        TimeTable                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FTimeTableStop>                      stops                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_RemoteCallObject_C::Server_SetTimeTableStops(class AFGRailroadTimeTable* TimeTable, TArray<struct FTimeTableStop> stops)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetTimeTableStops");
		
		UBP_RemoteCallObject_C_Server_SetTimeTableStops_Params params {};
		params.TimeTable = TimeTable;
		params.stops = stops;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetTimeTableCurrentStop
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGRailroadTimeTable*                        TimeTable                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::Server_SetTimeTableCurrentStop(class AFGRailroadTimeTable* TimeTable, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetTimeTableCurrentStop");
		
		UBP_RemoteCallObject_C_Server_SetTimeTableCurrentStop_Params params {};
		params.TimeTable = TimeTable;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetActorCompassViewDistance
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		ECompassViewDistance                               compassViewDistance                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::Server_SetActorCompassViewDistance(class AActor* Actor, ECompassViewDistance compassViewDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetActorCompassViewDistance");
		
		UBP_RemoteCallObject_C_Server_SetActorCompassViewDistance_Params params {};
		params.Actor = Actor;
		params.compassViewDistance = compassViewDistance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Internal_Server_SetActorRepresentationCompassViewDistance
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGActorRepresentation*                      actorRepresentation                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		ECompassViewDistance                               compassViewDistance                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::Internal_Server_SetActorRepresentationCompassViewDistance(class UFGActorRepresentation* actorRepresentation, ECompassViewDistance compassViewDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Internal_Server_SetActorRepresentationCompassViewDistance");
		
		UBP_RemoteCallObject_C_Internal_Server_SetActorRepresentationCompassViewDistance_Params params {};
		params.actorRepresentation = actorRepresentation;
		params.compassViewDistance = compassViewDistance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.SetActorRepresentationCompassViewDistance
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGActorRepresentation*                      actorRepresentation                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		ECompassViewDistance                               compassViewDistance                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::SetActorRepresentationCompassViewDistance(class UFGActorRepresentation* actorRepresentation, ECompassViewDistance compassViewDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.SetActorRepresentationCompassViewDistance");
		
		UBP_RemoteCallObject_C_SetActorRepresentationCompassViewDistance_Params params {};
		params.actorRepresentation = actorRepresentation;
		params.compassViewDistance = compassViewDistance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetTrainName
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGTrain*                                    train                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_RemoteCallObject_C::Server_SetTrainName(class AFGTrain* train, const class FText& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetTrainName");
		
		UBP_RemoteCallObject_C_Server_SetTrainName_Params params {};
		params.train = train;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetTrainSelfDrivingEnabled
	 * 		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGTrain*                                    train                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsSelfDriving                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::Server_SetTrainSelfDrivingEnabled(class AFGTrain* train, bool IsSelfDriving)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetTrainSelfDrivingEnabled");
		
		UBP_RemoteCallObject_C_Server_SetTrainSelfDrivingEnabled_Params params {};
		params.train = train;
		params.IsSelfDriving = IsSelfDriving;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_DockTrain
	 * 		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGTrain*                                    train                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::Server_DockTrain(class AFGTrain* train)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_DockTrain");
		
		UBP_RemoteCallObject_C_Server_DockTrain_Params params {};
		params.train = train;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetActorRepresentationText
	 * 		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_RemoteCallObject_C::Server_SetActorRepresentationText(class AActor* Actor, const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetActorRepresentationText");
		
		UBP_RemoteCallObject_C_Server_SetActorRepresentationText_Params params {};
		params.Actor = Actor;
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetActorRepresentationColor
	 * 		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                NewColor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::Server_SetActorRepresentationColor(class AActor* Actor, const struct FLinearColor& NewColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetActorRepresentationColor");
		
		UBP_RemoteCallObject_C_Server_SetActorRepresentationColor_Params params {};
		params.Actor = Actor;
		params.NewColor = NewColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_PurchaseResourceSinkSchematics
	 * 		Flags  -> (Net, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGBuildableResourceSinkShop*                ResourceSinkShop                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UFGInventoryComponent*                       playerInventory                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UClass*>                              Schematics                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_RemoteCallObject_C::Server_PurchaseResourceSinkSchematics(class AFGBuildableResourceSinkShop* ResourceSinkShop, class UFGInventoryComponent* playerInventory, TArray<class UClass*> Schematics)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_PurchaseResourceSinkSchematics");
		
		UBP_RemoteCallObject_C_Server_PurchaseResourceSinkSchematics_Params params {};
		params.ResourceSinkShop = ResourceSinkShop;
		params.playerInventory = playerInventory;
		params.Schematics = Schematics;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_ClaimCoupons
	 * 		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGBuildableResourceSink*                    ResourceSink                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            numCoupons                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::Server_ClaimCoupons(class AFGBuildableResourceSink* ResourceSink, int32_t numCoupons)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_ClaimCoupons");
		
		UBP_RemoteCallObject_C_Server_ClaimCoupons_Params params {};
		params.ResourceSink = ResourceSink;
		params.numCoupons = numCoupons;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_ReturnUnclaimedCoupons
	 * 		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGBuildableResourceSink*                    ResourceSink                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::Server_ReturnUnclaimedCoupons(class AFGBuildableResourceSink* ResourceSink)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_ReturnUnclaimedCoupons");
		
		UBP_RemoteCallObject_C_Server_ReturnUnclaimedCoupons_Params params {};
		params.ResourceSink = ResourceSink;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerDismantleGolfCart
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGWheeledVehicle*                           inGolfCart                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::ServerDismantleGolfCart(class AFGWheeledVehicle* inGolfCart)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.ServerDismantleGolfCart");
		
		UBP_RemoteCallObject_C_ServerDismantleGolfCart_Params params {};
		params.inGolfCart = inGolfCart;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_FlushPipeNetwork
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      integrantActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::Server_FlushPipeNetwork(class AActor* integrantActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_FlushPipeNetwork");
		
		UBP_RemoteCallObject_C_Server_FlushPipeNetwork_Params params {};
		params.integrantActor = integrantActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_FlushIntegrant
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      integrantActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::Server_FlushIntegrant(class AActor* integrantActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_FlushIntegrant");
		
		UBP_RemoteCallObject_C_Server_FlushIntegrant_Params params {};
		params.integrantActor = integrantActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_OnCodexOpened
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGTutorialIntroManager*                     introManager                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::Server_OnCodexOpened(class AFGTutorialIntroManager* introManager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_OnCodexOpened");
		
		UBP_RemoteCallObject_C_Server_OnCodexOpened_Params params {};
		params.introManager = introManager;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetSwitchOn
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGBuildableCircuitSwitch*                   circuitSwitch                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::Server_SetSwitchOn(class AFGBuildableCircuitSwitch* circuitSwitch, bool On)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetSwitchOn");
		
		UBP_RemoteCallObject_C_Server_SetSwitchOn_Params params {};
		params.circuitSwitch = circuitSwitch;
		params.On = On;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetUserFlowLimit
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGBuildablePipelinePump*                    Pump                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Rate                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::Server_SetUserFlowLimit(class AFGBuildablePipelinePump* Pump, double Rate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetUserFlowLimit");
		
		UBP_RemoteCallObject_C_Server_SetUserFlowLimit_Params params {};
		params.Pump = Pump;
		params.Rate = Rate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_OpenSlot
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGBuildableCalendar*                        Calendar                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            dayNumber                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::Server_OpenSlot(class AFGBuildableCalendar* Calendar, int32_t dayNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_OpenSlot");
		
		UBP_RemoteCallObject_C_Server_OpenSlot_Params params {};
		params.Calendar = Calendar;
		params.dayNumber = dayNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetPriority
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGBuildablePriorityPowerSwitch*             priorityPowerSwitch                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Priority                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::Server_SetPriority(class AFGBuildablePriorityPowerSwitch* priorityPowerSwitch, int32_t Priority)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetPriority");
		
		UBP_RemoteCallObject_C_Server_SetPriority_Params params {};
		params.priorityPowerSwitch = priorityPowerSwitch;
		params.Priority = Priority;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_PairDroneStations
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGDroneStationInfo*                         Origin                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class AFGDroneStationInfo*                         Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class AFGDroneSubsystem*                           droneSubsystem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::Server_PairDroneStations(class AFGDroneStationInfo* Origin, class AFGDroneStationInfo* Target, class AFGDroneSubsystem* droneSubsystem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_PairDroneStations");
		
		UBP_RemoteCallObject_C_Server_PairDroneStations_Params params {};
		params.Origin = Origin;
		params.Target = Target;
		params.droneSubsystem = droneSubsystem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetBuildingTag
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     buildingTagHost                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      buildingTag                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::Server_SetBuildingTag(class UObject* buildingTagHost, const class FString& buildingTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetBuildingTag");
		
		UBP_RemoteCallObject_C_Server_SetBuildingTag_Params params {};
		params.buildingTagHost = buildingTagHost;
		params.buildingTag = buildingTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetHasBuildingTag
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               HasBuildingTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::Server_SetHasBuildingTag(class UObject* Target, bool HasBuildingTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetHasBuildingTag");
		
		UBP_RemoteCallObject_C_Server_SetHasBuildingTag_Params params {};
		params.Target = Target;
		params.HasBuildingTag = HasBuildingTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetLightControlDataOnLightSource
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGBuildableLightSource*                     LightSource                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLightSourceControlData                     LightControlData                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_RemoteCallObject_C::Server_SetLightControlDataOnLightSource(class AFGBuildableLightSource* LightSource, const struct FLightSourceControlData& LightControlData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetLightControlDataOnLightSource");
		
		UBP_RemoteCallObject_C_Server_SetLightControlDataOnLightSource_Params params {};
		params.LightSource = LightSource;
		params.LightControlData = LightControlData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetLightControlDataOnControlPanel
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGBuildableLightsControlPanel*              ControlPanel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLightSourceControlData                     LightControlData                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_RemoteCallObject_C::Server_SetLightControlDataOnControlPanel(class AFGBuildableLightsControlPanel* ControlPanel, const struct FLightSourceControlData& LightControlData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetLightControlDataOnControlPanel");
		
		UBP_RemoteCallObject_C_Server_SetLightControlDataOnControlPanel_Params params {};
		params.ControlPanel = ControlPanel;
		params.LightControlData = LightControlData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetBuildableLightColorSlot
	 * 		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		unsigned char                                      slotIdx                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::Server_SetBuildableLightColorSlot(unsigned char slotIdx, const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetBuildableLightColorSlot");
		
		UBP_RemoteCallObject_C_Server_SetBuildableLightColorSlot_Params params {};
		params.slotIdx = slotIdx;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetLightSourceEnabled
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGBuildableLightSource*                     LightSource                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::Server_SetLightSourceEnabled(class AFGBuildableLightSource* LightSource, bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetLightSourceEnabled");
		
		UBP_RemoteCallObject_C_Server_SetLightSourceEnabled_Params params {};
		params.LightSource = LightSource;
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetLightControlPanelEnabled
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGBuildableLightsControlPanel*              ControlPanel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::Server_SetLightControlPanelEnabled(class AFGBuildableLightsControlPanel* ControlPanel, bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetLightControlPanelEnabled");
		
		UBP_RemoteCallObject_C_Server_SetLightControlPanelEnabled_Params params {};
		params.ControlPanel = ControlPanel;
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetPrefabSignData
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGBuildableWidgetSign*                      WidgetSign                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FPrefabSignData                             PrefabSignData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_RemoteCallObject_C::Server_SetPrefabSignData(class AFGBuildableWidgetSign* WidgetSign, const struct FPrefabSignData& PrefabSignData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetPrefabSignData");
		
		UBP_RemoteCallObject_C_Server_SetPrefabSignData_Params params {};
		params.WidgetSign = WidgetSign;
		params.PrefabSignData = PrefabSignData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_RequestOverlapBox
	 * 		Flags  -> (Net, NetReliable, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABuild_DoorMiddle_C*                         Actor                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		class APlayerController*                           Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::Server_RequestOverlapBox(class ABuild_DoorMiddle_C* Actor, class APlayerController* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_RequestOverlapBox");
		
		UBP_RemoteCallObject_C_Server_RequestOverlapBox_Params params {};
		params.Actor = Actor;
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_RequestRemoveOverlapBox
	 * 		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABuild_DoorMiddle_C*                         Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class APlayerController*                           Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::Server_RequestRemoveOverlapBox(class ABuild_DoorMiddle_C* Actor, class APlayerController* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_RequestRemoveOverlapBox");
		
		UBP_RemoteCallObject_C_Server_RequestRemoveOverlapBox_Params params {};
		params.Actor = Actor;
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_NewTimeTable
	 * 		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGTrain*                                    train                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::Server_NewTimeTable(class AFGTrain* train)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_NewTimeTable");
		
		UBP_RemoteCallObject_C_Server_NewTimeTable_Params params {};
		params.train = train;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_DockVehicle
	 * 		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGWheeledVehicle*                           Vehicle                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::Server_DockVehicle(class AFGWheeledVehicle* Vehicle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_DockVehicle");
		
		UBP_RemoteCallObject_C_Server_DockVehicle_Params params {};
		params.Vehicle = Vehicle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_AddTetrominoResult
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMiniGameResult                             Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_RemoteCallObject_C::Server_AddTetrominoResult(const struct FMiniGameResult& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_AddTetrominoResult");
		
		UBP_RemoteCallObject_C_Server_AddTetrominoResult_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_CancelDocking
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGTrain*                                    train                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::Server_CancelDocking(class AFGTrain* train)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_CancelDocking");
		
		UBP_RemoteCallObject_C_Server_CancelDocking_Params params {};
		params.train = train;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_AddResourceSinkCoupons
	 * 		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGResourceSinkSubsystem*                    Subsystem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            numCoupons                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::Server_AddResourceSinkCoupons(class AFGResourceSinkSubsystem* Subsystem, int32_t numCoupons)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_AddResourceSinkCoupons");
		
		UBP_RemoteCallObject_C_Server_AddResourceSinkCoupons_Params params {};
		params.Subsystem = Subsystem;
		params.numCoupons = numCoupons;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetSpaceRabbitName
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        NewName                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     spaceRabbitObject                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::Server_SetSpaceRabbitName(const class FText& NewName, class UObject* spaceRabbitObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetSpaceRabbitName");
		
		UBP_RemoteCallObject_C_Server_SetSpaceRabbitName_Params params {};
		params.NewName = NewName;
		params.spaceRabbitObject = spaceRabbitObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SaveAsShopFavorite
	 * 		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGPlayerState*                              PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      ShopSchematic                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::Server_SaveAsShopFavorite(class AFGPlayerState* PlayerState, class UClass* ShopSchematic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SaveAsShopFavorite");
		
		UBP_RemoteCallObject_C_Server_SaveAsShopFavorite_Params params {};
		params.PlayerState = PlayerState;
		params.ShopSchematic = ShopSchematic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_RemoveAsShopFavorite
	 * 		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGPlayerState*                              PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      ShopSchematic                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::Server_RemoveAsShopFavorite(class AFGPlayerState* PlayerState, class UClass* ShopSchematic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_RemoveAsShopFavorite");
		
		UBP_RemoteCallObject_C_Server_RemoveAsShopFavorite_Params params {};
		params.PlayerState = PlayerState;
		params.ShopSchematic = ShopSchematic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_AddStackToIndex
	 * 		Flags  -> (Net, NetReliable, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGInventoryComponent*                       inInventoryComp                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            idx                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FInventoryStack                             stack                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               allowPartial                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::Server_AddStackToIndex(class UFGInventoryComponent* inInventoryComp, int32_t idx, const struct FInventoryStack& stack, bool allowPartial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_AddStackToIndex");
		
		UBP_RemoteCallObject_C_Server_AddStackToIndex_Params params {};
		params.inInventoryComp = inInventoryComp;
		params.idx = idx;
		params.stack = stack;
		params.allowPartial = allowPartial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_MoveStackToInventory
	 * 		Flags  -> (Net, NetReliable, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGInventoryComponent*                       SourceComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		class UFGInventoryComponent*                       destinationComponent                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            sourceIdx                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               allowPartialAdd                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::Server_MoveStackToInventory(class UFGInventoryComponent* SourceComponent, class UFGInventoryComponent* destinationComponent, int32_t sourceIdx, bool allowPartialAdd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_MoveStackToInventory");
		
		UBP_RemoteCallObject_C_Server_MoveStackToInventory_Params params {};
		params.SourceComponent = SourceComponent;
		params.destinationComponent = destinationComponent;
		params.sourceIdx = sourceIdx;
		params.allowPartialAdd = allowPartialAdd;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetSortRules
	 * 		Flags  -> (Net, NetReliable, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGBuildableSplitterSmart*                   SplitterSmart                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FSplitterSortRule>                   NewSortRules                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_RemoteCallObject_C::Server_SetSortRules(class AFGBuildableSplitterSmart* SplitterSmart, TArray<struct FSplitterSortRule> NewSortRules)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetSortRules");
		
		UBP_RemoteCallObject_C_Server_SetSortRules_Params params {};
		params.SplitterSmart = SplitterSmart;
		params.NewSortRules = NewSortRules;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetPriorityRemotely
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGPriorityPowerSwitchInfo*                  Info                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Priority                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::Server_SetPriorityRemotely(class AFGPriorityPowerSwitchInfo* Info, int32_t Priority)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetPriorityRemotely");
		
		UBP_RemoteCallObject_C_Server_SetPriorityRemotely_Params params {};
		params.Info = Info;
		params.Priority = Priority;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetSwitchOnRemotely
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGPriorityPowerSwitchInfo*                  Info                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::Server_SetSwitchOnRemotely(class AFGPriorityPowerSwitchInfo* Info, bool On)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetSwitchOnRemotely");
		
		UBP_RemoteCallObject_C_Server_SetSwitchOnRemotely_Params params {};
		params.Info = Info;
		params.On = On;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetJunctionConnectionInfo
	 * 		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FFGPipeHyperJunctionConnectionInfo          ConnectionInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	 */
	void UBP_RemoteCallObject_C::Server_SetJunctionConnectionInfo(const struct FFGPipeHyperJunctionConnectionInfo& ConnectionInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetJunctionConnectionInfo");
		
		UBP_RemoteCallObject_C_Server_SetJunctionConnectionInfo_Params params {};
		params.ConnectionInfo = ConnectionInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetSelectedConsumableTypeIndex
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGEquipment*                                equipment                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            selectedIndex                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::Server_SetSelectedConsumableTypeIndex(class AFGEquipment* equipment, int32_t selectedIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetSelectedConsumableTypeIndex");
		
		UBP_RemoteCallObject_C_Server_SetSelectedConsumableTypeIndex_Params params {};
		params.equipment = equipment;
		params.selectedIndex = selectedIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetPrioritySwitchGroupOnRemotely
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Priority                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::Server_SetPrioritySwitchGroupOnRemotely(int32_t Priority, bool On)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.Server_SetPrioritySwitchGroupOnRemotely");
		
		UBP_RemoteCallObject_C_Server_SetPrioritySwitchGroupOnRemotely_Params params {};
		params.Priority = Priority;
		params.On = On;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_RemoteCallObject.BP_RemoteCallObject_C.ExecuteUbergraph_BP_RemoteCallObject
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RemoteCallObject_C::ExecuteUbergraph_BP_RemoteCallObject(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RemoteCallObject.BP_RemoteCallObject_C.ExecuteUbergraph_BP_RemoteCallObject");
		
		UBP_RemoteCallObject_C_ExecuteUbergraph_BP_RemoteCallObject_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_RemoteCallObject_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_RemoteCallObject_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_RemoteCallObject.BP_RemoteCallObject_C");
		return ptr;
	}

}


