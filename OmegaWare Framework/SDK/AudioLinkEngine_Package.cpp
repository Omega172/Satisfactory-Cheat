﻿/**
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
	 * 		RVA    -> 0x4C0853FF0
	 * 		Name   -> Function AudioLinkEngine.AudioLinkBlueprintInterface.StopLink
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UAudioLinkBlueprintInterface::StopLink()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioLinkEngine.AudioLinkBlueprintInterface.StopLink");
		
		UAudioLinkBlueprintInterface_StopLink_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C0853F60
	 * 		Name   -> Function AudioLinkEngine.AudioLinkBlueprintInterface.SetLinkSound
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USoundBase*                                  NewSound                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioLinkBlueprintInterface::SetLinkSound(class USoundBase* NewSound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioLinkEngine.AudioLinkBlueprintInterface.SetLinkSound");
		
		UAudioLinkBlueprintInterface_SetLinkSound_Params params {};
		params.NewSound = NewSound;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C0853ED0
	 * 		Name   -> Function AudioLinkEngine.AudioLinkBlueprintInterface.PlayLink
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              StartTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioLinkBlueprintInterface::PlayLink(float StartTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioLinkEngine.AudioLinkBlueprintInterface.PlayLink");
		
		UAudioLinkBlueprintInterface_PlayLink_Params params {};
		params.StartTime = StartTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C0853EA0
	 * 		Name   -> Function AudioLinkEngine.AudioLinkBlueprintInterface.IsLinkPlaying
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UAudioLinkBlueprintInterface::IsLinkPlaying()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioLinkEngine.AudioLinkBlueprintInterface.IsLinkPlaying");
		
		UAudioLinkBlueprintInterface_IsLinkPlaying_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioLinkBlueprintInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioLinkBlueprintInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioLinkEngine.AudioLinkBlueprintInterface");
		return ptr;
	}

}


