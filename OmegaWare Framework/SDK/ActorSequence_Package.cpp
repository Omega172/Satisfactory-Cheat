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
	 * 		Name   -> PredefinedFunction UActorSequence.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActorSequence::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActorSequence.ActorSequence");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EA3D4550
	 * 		Name   -> Function ActorSequence.ActorSequenceComponent.StopSequence
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UActorSequenceComponent::StopSequence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActorSequence.ActorSequenceComponent.StopSequence");
		
		UActorSequenceComponent_StopSequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EA3D4520
	 * 		Name   -> Function ActorSequence.ActorSequenceComponent.PlaySequence
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UActorSequenceComponent::PlaySequence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActorSequence.ActorSequenceComponent.PlaySequence");
		
		UActorSequenceComponent_PlaySequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EA3D44F0
	 * 		Name   -> Function ActorSequence.ActorSequenceComponent.PauseSequence
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UActorSequenceComponent::PauseSequence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActorSequence.ActorSequenceComponent.PauseSequence");
		
		UActorSequenceComponent_PauseSequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActorSequenceComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActorSequenceComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActorSequence.ActorSequenceComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActorSequencePlayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActorSequencePlayer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActorSequence.ActorSequencePlayer");
		return ptr;
	}

}


