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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDataStream.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDataStream::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IrisCore.DataStream");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDataStreamDefinitions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDataStreamDefinitions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IrisCore.DataStreamDefinitions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDataStreamManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDataStreamManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IrisCore.DataStreamManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNetObjectFilterConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNetObjectFilterConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IrisCore.NetObjectFilterConfig");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFilterOutNetObjectFilterConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFilterOutNetObjectFilterConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IrisCore.FilterOutNetObjectFilterConfig");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNetObjectFilter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNetObjectFilter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IrisCore.NetObjectFilter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFilterOutNetObjectFilter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFilterOutNetObjectFilter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IrisCore.FilterOutNetObjectFilter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIrisObjectReferencePackageMap.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIrisObjectReferencePackageMap::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IrisCore.IrisObjectReferencePackageMap");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNetObjectPrioritizer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNetObjectPrioritizer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IrisCore.NetObjectPrioritizer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULocationBasedNetObjectPrioritizer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULocationBasedNetObjectPrioritizer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IrisCore.LocationBasedNetObjectPrioritizer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNetBlobHandler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNetBlobHandler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IrisCore.NetBlobHandler");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNetBlobHandlerDefinitions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNetBlobHandlerDefinitions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IrisCore.NetBlobHandlerDefinitions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNetObjectBlobHandler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNetObjectBlobHandler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IrisCore.NetObjectBlobHandler");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNetObjectPrioritizerConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNetObjectPrioritizerConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IrisCore.NetObjectPrioritizerConfig");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNetObjectCountLimiterConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNetObjectCountLimiterConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IrisCore.NetObjectCountLimiterConfig");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNetObjectCountLimiter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNetObjectCountLimiter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IrisCore.NetObjectCountLimiter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNetObjectFilterDefinitions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNetObjectFilterDefinitions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IrisCore.NetObjectFilterDefinitions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNetObjectGridFilterConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNetObjectGridFilterConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IrisCore.NetObjectGridFilterConfig");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNetObjectGridFilter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNetObjectGridFilter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IrisCore.NetObjectGridFilter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNetObjectPrioritizerDefinitions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNetObjectPrioritizerDefinitions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IrisCore.NetObjectPrioritizerDefinitions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNetRPCHandler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNetRPCHandler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IrisCore.NetRPCHandler");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNetTokenDataStream.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNetTokenDataStream::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IrisCore.NetTokenDataStream");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNopNetObjectFilterConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNopNetObjectFilterConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IrisCore.NopNetObjectFilterConfig");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNopNetObjectFilter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNopNetObjectFilter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IrisCore.NopNetObjectFilter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UReplicationBridge.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReplicationBridge::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IrisCore.ReplicationBridge");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UObjectReplicationBridge.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UObjectReplicationBridge::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IrisCore.ObjectReplicationBridge");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UObjectReplicationBridgeConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UObjectReplicationBridgeConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IrisCore.ObjectReplicationBridgeConfig");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USequentialPartialNetBlobHandlerConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USequentialPartialNetBlobHandlerConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IrisCore.SequentialPartialNetBlobHandlerConfig");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPartialNetObjectAttachmentHandlerConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPartialNetObjectAttachmentHandlerConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IrisCore.PartialNetObjectAttachmentHandlerConfig");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USequentialPartialNetBlobHandler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USequentialPartialNetBlobHandler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IrisCore.SequentialPartialNetBlobHandler");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPartialNetObjectAttachmentHandler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPartialNetObjectAttachmentHandler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IrisCore.PartialNetObjectAttachmentHandler");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UReplicationDataStream.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReplicationDataStream::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IrisCore.ReplicationDataStream");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UReplicationSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReplicationSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IrisCore.ReplicationSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USphereNetObjectPrioritizerConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USphereNetObjectPrioritizerConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IrisCore.SphereNetObjectPrioritizerConfig");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USphereNetObjectPrioritizer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USphereNetObjectPrioritizer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IrisCore.SphereNetObjectPrioritizer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USphereWithOwnerBoostNetObjectPrioritizerConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USphereWithOwnerBoostNetObjectPrioritizerConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IrisCore.SphereWithOwnerBoostNetObjectPrioritizerConfig");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USphereWithOwnerBoostNetObjectPrioritizer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USphereWithOwnerBoostNetObjectPrioritizer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IrisCore.SphereWithOwnerBoostNetObjectPrioritizer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UReplicationStateDescriptorConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReplicationStateDescriptorConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IrisCore.ReplicationStateDescriptorConfig");
		return ptr;
	}

}


