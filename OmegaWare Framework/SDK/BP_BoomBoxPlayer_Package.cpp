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
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_BoomBoxPlayer.BP_BoomBoxPlayer_C.OnBusMeteringInfoUpdate
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FAkBusMeteringInfo                          MeteringInfo                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_BoomBoxPlayer_C::OnBusMeteringInfoUpdate(const struct FAkBusMeteringInfo& MeteringInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BoomBoxPlayer.BP_BoomBoxPlayer_C.OnBusMeteringInfoUpdate");
		
		ABP_BoomBoxPlayer_C_OnBusMeteringInfoUpdate_Params params {};
		params.MeteringInfo = MeteringInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_BoomBoxPlayer.BP_BoomBoxPlayer_C.PlayAnim
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                AnimCharacter1p                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UAnimMontage*                                AnimCharacter3p                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UCameraAnimationSequence*                    CameraAnim                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UAnimMontage*                                AnimBoomBox1p                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UAnimMontage*                                AnimBoomBox3p                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class AFGCharacterPlayer*                          Instigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bBoomBoxAnimSkipped                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BoomBoxPlayer_C::PlayAnim(class UAnimMontage* AnimCharacter1p, class UAnimMontage* AnimCharacter3p, class UCameraAnimationSequence* CameraAnim, class UAnimMontage* AnimBoomBox1p, class UAnimMontage* AnimBoomBox3p, class AFGCharacterPlayer* Instigator, bool* bBoomBoxAnimSkipped)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BoomBoxPlayer.BP_BoomBoxPlayer_C.PlayAnim");
		
		ABP_BoomBoxPlayer_C_PlayAnim_Params params {};
		params.AnimCharacter1p = AnimCharacter1p;
		params.AnimCharacter3p = AnimCharacter3p;
		params.CameraAnim = CameraAnim;
		params.AnimBoomBox1p = AnimBoomBox1p;
		params.AnimBoomBox3p = AnimBoomBox3p;
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bBoomBoxAnimSkipped != nullptr)
			*bBoomBoxAnimSkipped = params.bBoomBoxAnimSkipped;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_BoomBoxPlayer.BP_BoomBoxPlayer_C.IsUseable
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	bool ABP_BoomBoxPlayer_C::IsUseable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BoomBoxPlayer.BP_BoomBoxPlayer_C.IsUseable");
		
		ABP_BoomBoxPlayer_C_IsUseable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_BoomBoxPlayer.BP_BoomBoxPlayer_C.GetLookAtDecription
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class AFGCharacterPlayer*                          byCharacter                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FUseState                                   State                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	class FText ABP_BoomBoxPlayer_C::GetLookAtDecription(class AFGCharacterPlayer* byCharacter, const struct FUseState& State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BoomBoxPlayer.BP_BoomBoxPlayer_C.GetLookAtDecription");
		
		ABP_BoomBoxPlayer_C_GetLookAtDecription_Params params {};
		params.byCharacter = byCharacter;
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_BoomBoxPlayer.BP_BoomBoxPlayer_C.UpdateUseState
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGCharacterPlayer*                          byCharacter                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     atLocation                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         componentHit                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		struct FUseState                                   out_useState                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_BoomBoxPlayer_C::UpdateUseState(class AFGCharacterPlayer* byCharacter, const struct FVector& atLocation, class UPrimitiveComponent* componentHit, struct FUseState* out_useState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BoomBoxPlayer.BP_BoomBoxPlayer_C.UpdateUseState");
		
		ABP_BoomBoxPlayer_C_UpdateUseState_Params params {};
		params.byCharacter = byCharacter;
		params.atLocation = atLocation;
		params.componentHit = componentHit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (out_useState != nullptr)
			*out_useState = params.out_useState;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_BoomBoxPlayer.BP_BoomBoxPlayer_C.Force Update Game UI
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_BoomBoxPlayer_C::ForceUpdateGameUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BoomBoxPlayer.BP_BoomBoxPlayer_C.Force Update Game UI");
		
		ABP_BoomBoxPlayer_C_ForceUpdateGameUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_BoomBoxPlayer.BP_BoomBoxPlayer_C.PlayTurboBassEffects
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AFGCharacterPlayer*                          Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BoomBoxPlayer_C::PlayTurboBassEffects(class AFGCharacterPlayer* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BoomBoxPlayer.BP_BoomBoxPlayer_C.PlayTurboBassEffects");
		
		ABP_BoomBoxPlayer_C_PlayTurboBassEffects_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_BoomBoxPlayer.BP_BoomBoxPlayer_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_BoomBoxPlayer_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BoomBoxPlayer.BP_BoomBoxPlayer_C.ReceiveBeginPlay");
		
		ABP_BoomBoxPlayer_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_BoomBoxPlayer.BP_BoomBoxPlayer_C.PlayLoadTapeSequence
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AFGCharacterPlayer*                          instigatorPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BoomBoxPlayer_C::PlayLoadTapeSequence(class AFGCharacterPlayer* instigatorPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BoomBoxPlayer.BP_BoomBoxPlayer_C.PlayLoadTapeSequence");
		
		ABP_BoomBoxPlayer_C_PlayLoadTapeSequence_Params params {};
		params.instigatorPlayer = instigatorPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_BoomBoxPlayer.BP_BoomBoxPlayer_C.PlaySwitchTapeSequence
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AFGCharacterPlayer*                          instigatorPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BoomBoxPlayer_C::PlaySwitchTapeSequence(class AFGCharacterPlayer* instigatorPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BoomBoxPlayer.BP_BoomBoxPlayer_C.PlaySwitchTapeSequence");
		
		ABP_BoomBoxPlayer_C_PlaySwitchTapeSequence_Params params {};
		params.instigatorPlayer = instigatorPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_BoomBoxPlayer.BP_BoomBoxPlayer_C.PlayNextSongSequence
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AFGCharacterPlayer*                          instigatorPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BoomBoxPlayer_C::PlayNextSongSequence(class AFGCharacterPlayer* instigatorPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BoomBoxPlayer.BP_BoomBoxPlayer_C.PlayNextSongSequence");
		
		ABP_BoomBoxPlayer_C_PlayNextSongSequence_Params params {};
		params.instigatorPlayer = instigatorPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_BoomBoxPlayer.BP_BoomBoxPlayer_C.PlayPrevSongSequence
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AFGCharacterPlayer*                          instigatorPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BoomBoxPlayer_C::PlayPrevSongSequence(class AFGCharacterPlayer* instigatorPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BoomBoxPlayer.BP_BoomBoxPlayer_C.PlayPrevSongSequence");
		
		ABP_BoomBoxPlayer_C_PlayPrevSongSequence_Params params {};
		params.instigatorPlayer = instigatorPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_BoomBoxPlayer.BP_BoomBoxPlayer_C.PlayPlaySequence
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AFGCharacterPlayer*                          instigatorPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BoomBoxPlayer_C::PlayPlaySequence(class AFGCharacterPlayer* instigatorPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BoomBoxPlayer.BP_BoomBoxPlayer_C.PlayPlaySequence");
		
		ABP_BoomBoxPlayer_C_PlayPlaySequence_Params params {};
		params.instigatorPlayer = instigatorPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_BoomBoxPlayer.BP_BoomBoxPlayer_C.PlayStopSequence
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AFGCharacterPlayer*                          instigatorPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BoomBoxPlayer_C::PlayStopSequence(class AFGCharacterPlayer* instigatorPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BoomBoxPlayer.BP_BoomBoxPlayer_C.PlayStopSequence");
		
		ABP_BoomBoxPlayer_C_PlayStopSequence_Params params {};
		params.instigatorPlayer = instigatorPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_BoomBoxPlayer.BP_BoomBoxPlayer_C.PlayTurboBassSequence
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AFGCharacterPlayer*                          instigatorPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BoomBoxPlayer_C::PlayTurboBassSequence(class AFGCharacterPlayer* instigatorPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BoomBoxPlayer.BP_BoomBoxPlayer_C.PlayTurboBassSequence");
		
		ABP_BoomBoxPlayer_C_PlayTurboBassSequence_Params params {};
		params.instigatorPlayer = instigatorPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_BoomBoxPlayer.BP_BoomBoxPlayer_C.PlayEquipEffects
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AFGCharacterPlayer*                          Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BoomBoxPlayer_C::PlayEquipEffects(class AFGCharacterPlayer* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BoomBoxPlayer.BP_BoomBoxPlayer_C.PlayEquipEffects");
		
		ABP_BoomBoxPlayer_C_PlayEquipEffects_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_BoomBoxPlayer.BP_BoomBoxPlayer_C.PlayStingerEffects
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AFGCharacterPlayer*                          Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BoomBoxPlayer_C::PlayStingerEffects(class AFGCharacterPlayer* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BoomBoxPlayer.BP_BoomBoxPlayer_C.PlayStingerEffects");
		
		ABP_BoomBoxPlayer_C_PlayStingerEffects_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_BoomBoxPlayer.BP_BoomBoxPlayer_C.OnUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class AFGCharacterPlayer*                          byCharacter                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FUseState                                   State                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_BoomBoxPlayer_C::OnUse(class AFGCharacterPlayer* byCharacter, const struct FUseState& State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BoomBoxPlayer.BP_BoomBoxPlayer_C.OnUse");
		
		ABP_BoomBoxPlayer_C_OnUse_Params params {};
		params.byCharacter = byCharacter;
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_BoomBoxPlayer.BP_BoomBoxPlayer_C.StartIsLookedAt
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class AFGCharacterPlayer*                          byCharacter                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FUseState                                   State                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_BoomBoxPlayer_C::StartIsLookedAt(class AFGCharacterPlayer* byCharacter, const struct FUseState& State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BoomBoxPlayer.BP_BoomBoxPlayer_C.StartIsLookedAt");
		
		ABP_BoomBoxPlayer_C_StartIsLookedAt_Params params {};
		params.byCharacter = byCharacter;
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_BoomBoxPlayer.BP_BoomBoxPlayer_C.StopIsLookedAt
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class AFGCharacterPlayer*                          byCharacter                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FUseState                                   State                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_BoomBoxPlayer_C::StopIsLookedAt(class AFGCharacterPlayer* byCharacter, const struct FUseState& State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BoomBoxPlayer.BP_BoomBoxPlayer_C.StopIsLookedAt");
		
		ABP_BoomBoxPlayer_C_StopIsLookedAt_Params params {};
		params.byCharacter = byCharacter;
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_BoomBoxPlayer.BP_BoomBoxPlayer_C.CustomEvent_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_BoomBoxPlayer_C::CustomEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BoomBoxPlayer.BP_BoomBoxPlayer_C.CustomEvent_1");
		
		ABP_BoomBoxPlayer_C_CustomEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_BoomBoxPlayer.BP_BoomBoxPlayer_C.OnPlaybackStateChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            PlaybackState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BoomBoxPlayer_C::OnPlaybackStateChanged(int32_t PlaybackState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BoomBoxPlayer.BP_BoomBoxPlayer_C.OnPlaybackStateChanged");
		
		ABP_BoomBoxPlayer_C_OnPlaybackStateChanged_Params params {};
		params.PlaybackState = PlaybackState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_BoomBoxPlayer.BP_BoomBoxPlayer_C.ExecuteUbergraph_BP_BoomBoxPlayer
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BoomBoxPlayer_C::ExecuteUbergraph_BP_BoomBoxPlayer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BoomBoxPlayer.BP_BoomBoxPlayer_C.ExecuteUbergraph_BP_BoomBoxPlayer");
		
		ABP_BoomBoxPlayer_C_ExecuteUbergraph_BP_BoomBoxPlayer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_BoomBoxPlayer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_BoomBoxPlayer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BoomBoxPlayer.BP_BoomBoxPlayer_C");
		return ptr;
	}

}


