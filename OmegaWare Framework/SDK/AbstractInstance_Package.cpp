/**
 * Name: Satisfactory
 * Version: Early_Access_CL#264901
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
	 * 		Name   -> PredefinedFunction AAbstractInstanceExampleActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAbstractInstanceExampleActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AbstractInstance.AbstractInstanceExampleActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4789BC140
	 * 		Name   -> Function AbstractInstance.AbstractInstanceInterface.PostLazySpawnInstances
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 */
	void UAbstractInstanceInterface::PostLazySpawnInstances()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AbstractInstance.AbstractInstanceInterface.PostLazySpawnInstances");
		
		UAbstractInstanceInterface_PostLazySpawnInstances_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4789BBFE0
	 * 		Name   -> Function AbstractInstance.AbstractInstanceInterface.GetLightweightInstanceActorTransform
	 * 		Flags  -> (Native, Event, Public, HasDefaults, BlueprintEvent, Const)
	 */
	struct FTransform UAbstractInstanceInterface::GetLightweightInstanceActorTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AbstractInstance.AbstractInstanceInterface.GetLightweightInstanceActorTransform");
		
		UAbstractInstanceInterface_GetLightweightInstanceActorTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4789BBD80
	 * 		Name   -> Function AbstractInstance.AbstractInstanceInterface.GetActorLightweightInstanceData
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 */
	TArray<struct FInstanceData> UAbstractInstanceInterface::GetActorLightweightInstanceData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AbstractInstance.AbstractInstanceInterface.GetActorLightweightInstanceData");
		
		UAbstractInstanceInterface_GetActorLightweightInstanceData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4789BBD30
	 * 		Name   -> Function AbstractInstance.AbstractInstanceInterface.DoesContainLightweightInstances
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 */
	bool UAbstractInstanceInterface::DoesContainLightweightInstances()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AbstractInstance.AbstractInstanceInterface.DoesContainLightweightInstances");
		
		UAbstractInstanceInterface_DoesContainLightweightInstances_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbstractInstanceInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbstractInstanceInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AbstractInstance.AbstractInstanceInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4789BC220
	 * 		Name   -> Function AbstractInstance.AbstractInstanceManager.ResolveHit
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FHitResult                                  Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		struct FInstanceHandle                             OutHandle                                                  (Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	bool AAbstractInstanceManager::ResolveHit(const struct FHitResult& Result, struct FInstanceHandle* OutHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AbstractInstance.AbstractInstanceManager.ResolveHit");
		
		AAbstractInstanceManager_ResolveHit_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHandle != nullptr)
			*OutHandle = params.OutHandle;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4789BC160
	 * 		Name   -> Function AbstractInstance.AbstractInstanceManager.RemoveInstance
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FInstanceHandle                             InHandle                                                   (Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void AAbstractInstanceManager::RemoveInstance(struct FInstanceHandle* InHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AbstractInstance.AbstractInstanceManager.RemoveInstance");
		
		AAbstractInstanceManager_RemoveInstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InHandle != nullptr)
			*InHandle = params.InHandle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4789BC070
	 * 		Name   -> Function AbstractInstance.AbstractInstanceManager.GetOwnerByHandle
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FInstanceHandle                             Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	class AActor* AAbstractInstanceManager::STATIC_GetOwnerByHandle(const struct FInstanceHandle& Handle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AbstractInstance.AbstractInstanceManager.GetOwnerByHandle");
		
		AAbstractInstanceManager_GetOwnerByHandle_Params params {};
		params.Handle = Handle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4789BBF50
	 * 		Name   -> Function AbstractInstance.AbstractInstanceManager.GetInstanceManager
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AAbstractInstanceManager* AAbstractInstanceManager::STATIC_GetInstanceManager(class UObject* WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AbstractInstance.AbstractInstanceManager.GetInstanceManager");
		
		AAbstractInstanceManager_GetInstanceManager_Params params {};
		params.WorldContext = WorldContext;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4789BBE20
	 * 		Name   -> Function AbstractInstance.AbstractInstanceManager.GetHandleInfo
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FInstanceHandle                             Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OutInstanceID                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UHierarchicalInstancedStaticMeshComponent* AAbstractInstanceManager::STATIC_GetHandleInfo(const struct FInstanceHandle& Handle, int32_t* OutInstanceID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AbstractInstance.AbstractInstanceManager.GetHandleInfo");
		
		AAbstractInstanceManager_GetHandleInfo_Params params {};
		params.Handle = Handle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutInstanceID != nullptr)
			*OutInstanceID = params.OutInstanceID;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4789BBD60
	 * 		Name   -> Function AbstractInstance.AbstractInstanceManager.DrawDebug
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AAbstractInstanceManager::DrawDebug()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AbstractInstance.AbstractInstanceManager.DrawDebug");
		
		AAbstractInstanceManager_DrawDebug_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAbstractInstanceManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAbstractInstanceManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AbstractInstance.AbstractInstanceManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbstractInstanceDataObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbstractInstanceDataObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AbstractInstance.AbstractInstanceDataObject");
		return ptr;
	}

}


