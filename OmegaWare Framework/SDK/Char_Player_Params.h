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
	 * Function Char_Player.Char_Player_C.SetNametagHeightOffset
	 */
	struct AChar_Player_C_SetNametagHeightOffset_Params
	{
	public:
		double                                                     Offset;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_Player.Char_Player_C.ResetBoomboxGlobalRTPC
	 */
	struct AChar_Player_C_ResetBoomboxGlobalRTPC_Params
	{	};

	/**
	 * Function Char_Player.Char_Player_C.ShootFingerGuns
	 */
	struct AChar_Player_C_ShootFingerGuns_Params
	{	};

	/**
	 * Function Char_Player.Char_Player_C.GetDefaultRepresentationColor
	 */
	struct AChar_Player_C_GetDefaultRepresentationColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_Player.Char_Player_C.ResetUnderwaterEffects
	 */
	struct AChar_Player_C_ResetUnderwaterEffects_Params
	{	};

	/**
	 * Function Char_Player.Char_Player_C.WaterSplashEnterSFX
	 */
	struct AChar_Player_C_WaterSplashEnterSFX_Params
	{	};

	/**
	 * Function Char_Player.Char_Player_C.WaterSplashExitSFX
	 */
	struct AChar_Player_C_WaterSplashExitSFX_Params
	{	};

	/**
	 * Function Char_Player.Char_Player_C.PlayFlushAnimation
	 */
	struct AChar_Player_C_PlayFlushAnimation_Params
	{
	public:
		class AActor*                                              hubActor;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_Player.Char_Player_C.ResetAudioReverb
	 */
	struct AChar_Player_C_ResetAudioReverb_Params
	{	};

	/**
	 * Function Char_Player.Char_Player_C.TubeTravelHardCorners
	 */
	struct AChar_Player_C_TubeTravelHardCorners_Params
	{
	public:
		double                                                     CurveFloatValue;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_Player.Char_Player_C.AudioWindDirectionSpeedUpdate
	 */
	struct AChar_Player_C_AudioWindDirectionSpeedUpdate_Params
	{	};

	/**
	 * Function Char_Player.Char_Player_C.SlideVFX
	 */
	struct AChar_Player_C_SlideVFX_Params
	{	};

	/**
	 * Function Char_Player.Char_Player_C.TubeTravelSpeedUpdate
	 */
	struct AChar_Player_C_TubeTravelSpeedUpdate_Params
	{	};

	/**
	 * Function Char_Player.Char_Player_C.SlideSpeedWindUpdate
	 */
	struct AChar_Player_C_SlideSpeedWindUpdate_Params
	{	};

	/**
	 * Function Char_Player.Char_Player_C.SlideVelocityUpdate
	 */
	struct AChar_Player_C_SlideVelocityUpdate_Params
	{	};

	/**
	 * Function Char_Player.Char_Player_C.ToggleCodex
	 */
	struct AChar_Player_C_ToggleCodex_Params
	{	};

	/**
	 * Function Char_Player.Char_Player_C.ToggleInventory
	 */
	struct AChar_Player_C_ToggleInventory_Params
	{	};

	/**
	 * Function Char_Player.Char_Player_C.ToggleFlashlight
	 */
	struct AChar_Player_C_ToggleFlashlight_Params
	{	};

	/**
	 * Function Char_Player.Char_Player_C.RemovePlayerHUD
	 */
	struct AChar_Player_C_RemovePlayerHUD_Params
	{
	public:
		class AFGPlayerController*                                 OldController;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_Player.Char_Player_C.SetupPlayerHUD
	 */
	struct AChar_Player_C_SetupPlayerHUD_Params
	{
	public:
		class AFGPlayerController*                                 PlayerController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_Player.Char_Player_C.HandleFlashlight
	 */
	struct AChar_Player_C_HandleFlashlight_Params
	{	};

	/**
	 * Function Char_Player.Char_Player_C.GetHealthPct
	 */
	struct AChar_Player_C_GetHealthPct_Params
	{
	public:
		double                                                     healthPct;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_Player.Char_Player_C.UpdateDamageIndicator
	 */
	struct AChar_Player_C_UpdateDamageIndicator_Params
	{	};

	/**
	 * Function Char_Player.Char_Player_C.PlayDamageVO
	 */
	struct AChar_Player_C_PlayDamageVO_Params
	{
	public:
		class UDamageType*                                         DamageType;                                              // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_Player.Char_Player_C.PlayDamageCameraShake
	 */
	struct AChar_Player_C_PlayDamageCameraShake_Params
	{	};

	/**
	 * Function Char_Player.Char_Player_C.ApplyDamagePP
	 */
	struct AChar_Player_C_ApplyDamagePP_Params
	{	};

	/**
	 * Function Char_Player.Char_Player_C.PlayImpactEffectSound
	 */
	struct AChar_Player_C_PlayImpactEffectSound_Params
	{
	public:
		class UDamageType*                                         DamageType;                                              // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_Player.Char_Player_C.CalculateOnscreenEffectBlendWeight
	 */
	struct AChar_Player_C_CalculateOnscreenEffectBlendWeight_Params
	{
	public:
		double                                                     BlendWeight;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_Player.Char_Player_C.UpdateWindParticle
	 */
	struct AChar_Player_C_UpdateWindParticle_Params
	{	};

	/**
	 * Function Char_Player.Char_Player_C.GetPlayerCameraManager
	 */
	struct AChar_Player_C_GetPlayerCameraManager_Params
	{
	public:
		class APlayerCameraManager*                                CameraManager;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_Player.Char_Player_C.FadeDamageIndicator
	 */
	struct AChar_Player_C_FadeDamageIndicator_Params
	{	};

	/**
	 * Function Char_Player.Char_Player_C.Timeline_0__FinishedFunc
	 */
	struct AChar_Player_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function Char_Player.Char_Player_C.Timeline_0__UpdateFunc
	 */
	struct AChar_Player_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function Char_Player.Char_Player_C.OnLoaded_5BB4F5014CAF3CF6F8C3388A769155DB
	 */
	struct AChar_Player_C_OnLoaded_5BB4F5014CAF3CF6F8C3388A769155DB_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_Player.Char_Player_C.ReceivePossessed
	 */
	struct AChar_Player_C_ReceivePossessed_Params
	{
	public:
		class AController*                                         NewController;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_Player.Char_Player_C.OnLanded
	 */
	struct AChar_Player_C_OnLanded_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x00E8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Char_Player.Char_Player_C.CameraTick
	 */
	struct AChar_Player_C_CameraTick_Params
	{	};

	/**
	 * Function Char_Player.Char_Player_C.ReceiveDestroyed
	 */
	struct AChar_Player_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function Char_Player.Char_Player_C.TakeDamageEvent
	 */
	struct AChar_Player_C_TakeDamageEvent_Params
	{
	public:
		class AActor*                                              DamagedActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		float                                                      DamageAmount;                                            // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZG08[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class AController*                                         InstigatedBy;                                            // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_Player.Char_Player_C.SetFirstPersonMode
	 */
	struct AChar_Player_C_SetFirstPersonMode_Params
	{	};

	/**
	 * Function Char_Player.Char_Player_C.SetThirdPersonMode
	 */
	struct AChar_Player_C_SetThirdPersonMode_Params
	{	};

	/**
	 * Function Char_Player.Char_Player_C.StartFocusAim
	 */
	struct AChar_Player_C_StartFocusAim_Params
	{	};

	/**
	 * Function Char_Player.Char_Player_C.StopFocusAim
	 */
	struct AChar_Player_C_StopFocusAim_Params
	{	};

	/**
	 * Function Char_Player.Char_Player_C.StartFreeRotate3P
	 */
	struct AChar_Player_C_StartFreeRotate3P_Params
	{	};

	/**
	 * Function Char_Player.Char_Player_C.StopFreeRotate3P
	 */
	struct AChar_Player_C_StopFreeRotate3P_Params
	{	};

	/**
	 * Function Char_Player.Char_Player_C.CameraZoomOut
	 */
	struct AChar_Player_C_CameraZoomOut_Params
	{	};

	/**
	 * Function Char_Player.Char_Player_C.CameraZoomIn
	 */
	struct AChar_Player_C_CameraZoomIn_Params
	{	};

	/**
	 * Function Char_Player.Char_Player_C.ReceiveDied
	 */
	struct AChar_Player_C_ReceiveDied_Params
	{	};

	/**
	 * Function Char_Player.Char_Player_C.ReceiveBeginPlay
	 */
	struct AChar_Player_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Char_Player.Char_Player_C.PlayPickupEffects
	 */
	struct AChar_Player_C_PlayPickupEffects_Params
	{	};

	/**
	 * Function Char_Player.Char_Player_C.SnapSpringArmToDesiredLocation
	 */
	struct AChar_Player_C_SnapSpringArmToDesiredLocation_Params
	{	};

	/**
	 * Function Char_Player.Char_Player_C.OnReviveComplete
	 */
	struct AChar_Player_C_OnReviveComplete_Params
	{	};

	/**
	 * Function Char_Player.Char_Player_C.ClientSetupPlayerHUD
	 */
	struct AChar_Player_C_ClientSetupPlayerHUD_Params
	{
	public:
		class AController*                                         InController;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_Player.Char_Player_C.ReceiveUnpossessed
	 */
	struct AChar_Player_C_ReceiveUnpossessed_Params
	{
	public:
		class AController*                                         OldController;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_Player.Char_Player_C.OnReceiveRadiationStart
	 */
	struct AChar_Player_C_OnReceiveRadiationStart_Params
	{	};

	/**
	 * Function Char_Player.Char_Player_C.OnReceiveRadiationStop
	 */
	struct AChar_Player_C_OnReceiveRadiationStop_Params
	{	};

	/**
	 * Function Char_Player.Char_Player_C.Server_SetFlashlightOn
	 */
	struct AChar_Player_C_Server_SetFlashlightOn_Params
	{
	public:
		bool                                                       FlashlightOn;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_Player.Char_Player_C.OnDisabledInputGateChanged
	 */
	struct AChar_Player_C_OnDisabledInputGateChanged_Params
	{
	public:
		struct FDisabledInputGate                                  NewValue;                                                // 0x0000(0x0002)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function Char_Player.Char_Player_C.SpeedWindEvent
	 */
	struct AChar_Player_C_SpeedWindEvent_Params
	{	};

	/**
	 * Function Char_Player.Char_Player_C.LimitLook
	 */
	struct AChar_Player_C_LimitLook_Params
	{
	public:
		bool                                                       doLimit;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_Player.Char_Player_C.End Starting Pod Cinematic
	 */
	struct AChar_Player_C_EndStartingPodCinematic_Params
	{	};

	/**
	 * Function Char_Player.Char_Player_C.DisableGravity
	 */
	struct AChar_Player_C_DisableGravity_Params
	{	};

	/**
	 * Function Char_Player.Char_Player_C.OnSpawnDeathMarker
	 */
	struct AChar_Player_C_OnSpawnDeathMarker_Params
	{	};

	/**
	 * Function Char_Player.Char_Player_C.StartIsLookedAt
	 */
	struct AChar_Player_C_StartIsLookedAt_Params
	{
	public:
		class AFGCharacterPlayer*                                  byCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FUseState                                           State;                                                   // 0x0008(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Char_Player.Char_Player_C.StopIsLookedAt
	 */
	struct AChar_Player_C_StopIsLookedAt_Params
	{
	public:
		class AFGCharacterPlayer*                                  byCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FUseState                                           State;                                                   // 0x0008(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Char_Player.Char_Player_C.OnRadiationIntensityUpdated
	 */
	struct AChar_Player_C_OnRadiationIntensityUpdated_Params
	{
	public:
		float                                                      radiationIntensity;                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      radiationImmunity;                                       // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_Player.Char_Player_C.TickVisuals
	 */
	struct AChar_Player_C_TickVisuals_Params
	{
	public:
		float                                                      dt;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_Player.Char_Player_C.OnSlideStartLocal
	 */
	struct AChar_Player_C_OnSlideStartLocal_Params
	{	};

	/**
	 * Function Char_Player.Char_Player_C.OnSlideEndLocal
	 */
	struct AChar_Player_C_OnSlideEndLocal_Params
	{	};

	/**
	 * Function Char_Player.Char_Player_C.OnSlideEndSimulated
	 */
	struct AChar_Player_C_OnSlideEndSimulated_Params
	{	};

	/**
	 * Function Char_Player.Char_Player_C.OnSlideStartSimulated
	 */
	struct AChar_Player_C_OnSlideStartSimulated_Params
	{	};

	/**
	 * Function Char_Player.Char_Player_C.PlayJumpEffects
	 */
	struct AChar_Player_C_PlayJumpEffects_Params
	{
	public:
		bool                                                       boostJump;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_Player.Char_Player_C.K2_OnMovementModeChanged
	 */
	struct AChar_Player_C_K2_OnMovementModeChanged_Params
	{
	public:
		EMovementMode                                              PrevMovementMode;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EMovementMode                                              NewMovementMode;                                         // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              PrevCustomMode;                                          // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              NewCustomMode;                                           // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_Player.Char_Player_C.AudioTickEvent
	 */
	struct AChar_Player_C_AudioTickEvent_Params
	{
	public:
		double                                                     AudioTick;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_Player.Char_Player_C.SetScannerIK
	 */
	struct AChar_Player_C_SetScannerIK_Params
	{
	public:
		bool                                                       SetScannerIK;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_Player.Char_Player_C.K2_OnEndCrouch
	 */
	struct AChar_Player_C_K2_OnEndCrouch_Params
	{
	public:
		float                                                      HalfHeightAdjust;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ScaledHalfHeightAdjust;                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_Player.Char_Player_C.K2_OnStartCrouch
	 */
	struct AChar_Player_C_K2_OnStartCrouch_Params
	{
	public:
		float                                                      HalfHeightAdjust;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ScaledHalfHeightAdjust;                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_Player.Char_Player_C.PlayScannerPPeffect
	 */
	struct AChar_Player_C_PlayScannerPPeffect_Params
	{	};

	/**
	 * Function Char_Player.Char_Player_C.StartZiplineEffects
	 */
	struct AChar_Player_C_StartZiplineEffects_Params
	{	};

	/**
	 * Function Char_Player.Char_Player_C.StopZiplineEffects
	 */
	struct AChar_Player_C_StopZiplineEffects_Params
	{	};

	/**
	 * Function Char_Player.Char_Player_C.Activate Finger Guns
	 */
	struct AChar_Player_C_ActivateFingerGuns_Params
	{	};

	/**
	 * Function Char_Player.Char_Player_C.NotifyOnToggleInventory
	 */
	struct AChar_Player_C_NotifyOnToggleInventory_Params
	{	};

	/**
	 * Function Char_Player.Char_Player_C.NotifyOnToggleCodex
	 */
	struct AChar_Player_C_NotifyOnToggleCodex_Params
	{	};

	/**
	 * Function Char_Player.Char_Player_C.NotifyOnToggleFlashlight
	 */
	struct AChar_Player_C_NotifyOnToggleFlashlight_Params
	{	};

	/**
	 * Function Char_Player.Char_Player_C.NotifyOnToggleQuickSearch
	 */
	struct AChar_Player_C_NotifyOnToggleQuickSearch_Params
	{	};

	/**
	 * Function Char_Player.Char_Player_C.Begin Starting Pod Exit Cinematic
	 */
	struct AChar_Player_C_BeginStartingPodExitCinematic_Params
	{	};

	/**
	 * Function Char_Player.Char_Player_C.ExecuteUbergraph_Char_Player
	 */
	struct AChar_Player_C_ExecuteUbergraph_Char_Player_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_Player.Char_Player_C.EventFire__DelegateSignature
	 */
	struct AChar_Player_C_EventFire__DelegateSignature_Params
	{	};

	/**
	 * Function Char_Player.Char_Player_C.EventScroll__DelegateSignature
	 */
	struct AChar_Player_C_EventScroll__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_Player.Char_Player_C.EventScrollDown__DelegateSignature
	 */
	struct AChar_Player_C_EventScrollDown__DelegateSignature_Params
	{	};

	/**
	 * Function Char_Player.Char_Player_C.EventScrollUp__DelegateSignature
	 */
	struct AChar_Player_C_EventScrollUp__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
