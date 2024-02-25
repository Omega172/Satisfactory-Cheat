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
	 * 		Name   -> PredefinedFunction UChaosCacheCollection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChaosCacheCollection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ChaosCaching.ChaosCacheCollection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x7138EEC50
	 * 		Name   -> Function ChaosCaching.ChaosCacheManager.TriggerComponentByCache
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        InCacheName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AChaosCacheManager::TriggerComponentByCache(const class FName& InCacheName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosCaching.ChaosCacheManager.TriggerComponentByCache");
		
		AChaosCacheManager_TriggerComponentByCache_Params params {};
		params.InCacheName = InCacheName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x7138EEBC0
	 * 		Name   -> Function ChaosCaching.ChaosCacheManager.TriggerComponent
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         InComponent                                                (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AChaosCacheManager::TriggerComponent(class UPrimitiveComponent* InComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosCaching.ChaosCacheManager.TriggerComponent");
		
		AChaosCacheManager_TriggerComponent_Params params {};
		params.InComponent = InComponent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x7138EEBA0
	 * 		Name   -> Function ChaosCaching.ChaosCacheManager.TriggerAll
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void AChaosCacheManager::TriggerAll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosCaching.ChaosCacheManager.TriggerAll");
		
		AChaosCacheManager_TriggerAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x7138EEB10
	 * 		Name   -> Function ChaosCaching.ChaosCacheManager.SetStartTime
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		float                                              InStartTime                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AChaosCacheManager::SetStartTime(float InStartTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosCaching.ChaosCacheManager.SetStartTime");
		
		AChaosCacheManager_SetStartTime_Params params {};
		params.InStartTime = InStartTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x7138EEA80
	 * 		Name   -> Function ChaosCaching.ChaosCacheManager.ResetSingleTransform
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            InIndex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AChaosCacheManager::ResetSingleTransform(int32_t InIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosCaching.ChaosCacheManager.ResetSingleTransform");
		
		AChaosCacheManager_ResetSingleTransform_Params params {};
		params.InIndex = InIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x7138EEA60
	 * 		Name   -> Function ChaosCaching.ChaosCacheManager.ResetAllComponentTransforms
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AChaosCacheManager::ResetAllComponentTransforms()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosCaching.ChaosCacheManager.ResetAllComponentTransforms");
		
		AChaosCacheManager_ResetAllComponentTransforms_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AChaosCacheManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AChaosCacheManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ChaosCaching.ChaosCacheManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AChaosCachePlayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AChaosCachePlayer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ChaosCaching.ChaosCachePlayer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChaosCache.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChaosCache::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ChaosCaching.ChaosCache");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneChaosCacheSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneChaosCacheSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ChaosCaching.MovieSceneChaosCacheSection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneChaosCacheTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneChaosCacheTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ChaosCaching.MovieSceneChaosCacheTrack");
		return ptr;
	}

}


