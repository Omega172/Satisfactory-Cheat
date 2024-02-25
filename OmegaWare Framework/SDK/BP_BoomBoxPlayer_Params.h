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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_BoomBoxPlayer.BP_BoomBoxPlayer_C.OnBusMeteringInfoUpdate
	 */
	struct ABP_BoomBoxPlayer_C_OnBusMeteringInfoUpdate_Params
	{
	public:
		struct FAkBusMeteringInfo                                  MeteringInfo;                                            // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_BoomBoxPlayer.BP_BoomBoxPlayer_C.PlayAnim
	 */
	struct ABP_BoomBoxPlayer_C_PlayAnim_Params
	{
	public:
		class UAnimMontage*                                        AnimCharacter1p;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UAnimMontage*                                        AnimCharacter3p;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UCameraAnimationSequence*                            CameraAnim;                                              // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UAnimMontage*                                        AnimBoomBox1p;                                           // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UAnimMontage*                                        AnimBoomBox3p;                                           // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class AFGCharacterPlayer*                                  Instigator;                                              // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bBoomBoxAnimSkipped;                                     // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_14GF[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_BoomBoxPlayer.BP_BoomBoxPlayer_C.IsUseable
	 */
	struct ABP_BoomBoxPlayer_C_IsUseable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BoomBoxPlayer.BP_BoomBoxPlayer_C.GetLookAtDecription
	 */
	struct ABP_BoomBoxPlayer_C_GetLookAtDecription_Params
	{
	public:
		class AFGCharacterPlayer*                                  byCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FUseState                                           State;                                                   // 0x0008(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
		class FText                                                ReturnValue;                                             // 0x0038(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_BoomBoxPlayer.BP_BoomBoxPlayer_C.UpdateUseState
	 */
	struct ABP_BoomBoxPlayer_C_UpdateUseState_Params
	{
	public:
		class AFGCharacterPlayer*                                  byCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             atLocation;                                              // 0x0008(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 componentHit;                                            // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		struct FUseState                                           out_useState;                                            // 0x0028(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_BoomBoxPlayer.BP_BoomBoxPlayer_C.Force Update Game UI
	 */
	struct ABP_BoomBoxPlayer_C_ForceUpdateGameUI_Params
	{	};

	/**
	 * Function BP_BoomBoxPlayer.BP_BoomBoxPlayer_C.PlayTurboBassEffects
	 */
	struct ABP_BoomBoxPlayer_C_PlayTurboBassEffects_Params
	{
	public:
		class AFGCharacterPlayer*                                  Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BoomBoxPlayer.BP_BoomBoxPlayer_C.ReceiveBeginPlay
	 */
	struct ABP_BoomBoxPlayer_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_BoomBoxPlayer.BP_BoomBoxPlayer_C.PlayLoadTapeSequence
	 */
	struct ABP_BoomBoxPlayer_C_PlayLoadTapeSequence_Params
	{
	public:
		class AFGCharacterPlayer*                                  instigatorPlayer;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BoomBoxPlayer.BP_BoomBoxPlayer_C.PlaySwitchTapeSequence
	 */
	struct ABP_BoomBoxPlayer_C_PlaySwitchTapeSequence_Params
	{
	public:
		class AFGCharacterPlayer*                                  instigatorPlayer;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BoomBoxPlayer.BP_BoomBoxPlayer_C.PlayNextSongSequence
	 */
	struct ABP_BoomBoxPlayer_C_PlayNextSongSequence_Params
	{
	public:
		class AFGCharacterPlayer*                                  instigatorPlayer;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BoomBoxPlayer.BP_BoomBoxPlayer_C.PlayPrevSongSequence
	 */
	struct ABP_BoomBoxPlayer_C_PlayPrevSongSequence_Params
	{
	public:
		class AFGCharacterPlayer*                                  instigatorPlayer;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BoomBoxPlayer.BP_BoomBoxPlayer_C.PlayPlaySequence
	 */
	struct ABP_BoomBoxPlayer_C_PlayPlaySequence_Params
	{
	public:
		class AFGCharacterPlayer*                                  instigatorPlayer;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BoomBoxPlayer.BP_BoomBoxPlayer_C.PlayStopSequence
	 */
	struct ABP_BoomBoxPlayer_C_PlayStopSequence_Params
	{
	public:
		class AFGCharacterPlayer*                                  instigatorPlayer;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BoomBoxPlayer.BP_BoomBoxPlayer_C.PlayTurboBassSequence
	 */
	struct ABP_BoomBoxPlayer_C_PlayTurboBassSequence_Params
	{
	public:
		class AFGCharacterPlayer*                                  instigatorPlayer;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BoomBoxPlayer.BP_BoomBoxPlayer_C.PlayEquipEffects
	 */
	struct ABP_BoomBoxPlayer_C_PlayEquipEffects_Params
	{
	public:
		class AFGCharacterPlayer*                                  Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BoomBoxPlayer.BP_BoomBoxPlayer_C.PlayStingerEffects
	 */
	struct ABP_BoomBoxPlayer_C_PlayStingerEffects_Params
	{
	public:
		class AFGCharacterPlayer*                                  Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BoomBoxPlayer.BP_BoomBoxPlayer_C.OnUse
	 */
	struct ABP_BoomBoxPlayer_C_OnUse_Params
	{
	public:
		class AFGCharacterPlayer*                                  byCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FUseState                                           State;                                                   // 0x0008(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_BoomBoxPlayer.BP_BoomBoxPlayer_C.StartIsLookedAt
	 */
	struct ABP_BoomBoxPlayer_C_StartIsLookedAt_Params
	{
	public:
		class AFGCharacterPlayer*                                  byCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FUseState                                           State;                                                   // 0x0008(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_BoomBoxPlayer.BP_BoomBoxPlayer_C.StopIsLookedAt
	 */
	struct ABP_BoomBoxPlayer_C_StopIsLookedAt_Params
	{
	public:
		class AFGCharacterPlayer*                                  byCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FUseState                                           State;                                                   // 0x0008(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_BoomBoxPlayer.BP_BoomBoxPlayer_C.CustomEvent_1
	 */
	struct ABP_BoomBoxPlayer_C_CustomEvent_1_Params
	{	};

	/**
	 * Function BP_BoomBoxPlayer.BP_BoomBoxPlayer_C.OnPlaybackStateChanged
	 */
	struct ABP_BoomBoxPlayer_C_OnPlaybackStateChanged_Params
	{
	public:
		int32_t                                                    PlaybackState;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BoomBoxPlayer.BP_BoomBoxPlayer_C.ExecuteUbergraph_BP_BoomBoxPlayer
	 */
	struct ABP_BoomBoxPlayer_C_ExecuteUbergraph_BP_BoomBoxPlayer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BL58[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
