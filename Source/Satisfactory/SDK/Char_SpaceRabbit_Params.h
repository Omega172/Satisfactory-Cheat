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
	 * Function Char_SpaceRabbit.Char_SpaceRabbit_C.GetDisplayName
	 */
	struct AChar_SpaceRabbit_C_GetDisplayName_Params
	{
	public:
		class FText                                                DisplayName;                                             // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function Char_SpaceRabbit.Char_SpaceRabbit_C.GetLookAtDecription
	 */
	struct AChar_SpaceRabbit_C_GetLookAtDecription_Params
	{
	public:
		class AFGCharacterPlayer*                                  byCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FUseState                                           State;                                                   // 0x0008(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
		class FText                                                ReturnValue;                                             // 0x0038(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Char_SpaceRabbit.Char_SpaceRabbit_C.IsUseable
	 */
	struct AChar_SpaceRabbit_C_IsUseable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_SpaceRabbit.Char_SpaceRabbit_C.UpdateUseState
	 */
	struct AChar_SpaceRabbit_C_UpdateUseState_Params
	{
	public:
		class AFGCharacterPlayer*                                  byCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             atLocation;                                              // 0x0008(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 componentHit;                                            // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		struct FUseState                                           out_useState;                                            // 0x0028(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Char_SpaceRabbit.Char_SpaceRabbit_C.IsTamed
	 */
	struct AChar_SpaceRabbit_C_IsTamed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_SpaceRabbit.Char_SpaceRabbit_C.TryToOpenUI
	 */
	struct AChar_SpaceRabbit_C_TryToOpenUI_Params
	{
	public:
		class APawn*                                               Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_SpaceRabbit.Char_SpaceRabbit_C.PlayPetAnimation
	 */
	struct AChar_SpaceRabbit_C_PlayPetAnimation_Params
	{
	public:
		class AFGCharacterPlayer*                                  byCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_SpaceRabbit.Char_SpaceRabbit_C.SetupEvents
	 */
	struct AChar_SpaceRabbit_C_SetupEvents_Params
	{	};

	/**
	 * Function Char_SpaceRabbit.Char_SpaceRabbit_C.SetupLootTimer
	 */
	struct AChar_SpaceRabbit_C_SetupLootTimer_Params
	{	};

	/**
	 * Function Char_SpaceRabbit.Char_SpaceRabbit_C.RollLoot
	 */
	struct AChar_SpaceRabbit_C_RollLoot_Params
	{	};

	/**
	 * Function Char_SpaceRabbit.Char_SpaceRabbit_C.SetTamed
	 */
	struct AChar_SpaceRabbit_C_SetTamed_Params
	{
	public:
		bool                                                       IsTamed;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_SpaceRabbit.Char_SpaceRabbit_C.OnUseStop
	 */
	struct AChar_SpaceRabbit_C_OnUseStop_Params
	{
	public:
		class AFGCharacterPlayer*                                  byCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FUseState                                           State;                                                   // 0x0008(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Char_SpaceRabbit.Char_SpaceRabbit_C.RegisterInteractingPlayer
	 */
	struct AChar_SpaceRabbit_C_RegisterInteractingPlayer_Params
	{
	public:
		class AFGCharacterPlayer*                                  Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_SpaceRabbit.Char_SpaceRabbit_C.StartIsLookedAt
	 */
	struct AChar_SpaceRabbit_C_StartIsLookedAt_Params
	{
	public:
		class AFGCharacterPlayer*                                  byCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FUseState                                           State;                                                   // 0x0008(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Char_SpaceRabbit.Char_SpaceRabbit_C.StopIsLookedAt
	 */
	struct AChar_SpaceRabbit_C_StopIsLookedAt_Params
	{
	public:
		class AFGCharacterPlayer*                                  byCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FUseState                                           State;                                                   // 0x0008(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Char_SpaceRabbit.Char_SpaceRabbit_C.UnregisterInteractingPlayer
	 */
	struct AChar_SpaceRabbit_C_UnregisterInteractingPlayer_Params
	{
	public:
		class AFGCharacterPlayer*                                  Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_SpaceRabbit.Char_SpaceRabbit_C.NotifyOnTakeDamage
	 */
	struct AChar_SpaceRabbit_C_NotifyOnTakeDamage_Params
	{
	public:
		class AActor*                                              DamagedActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		float                                                      DamageAmount;                                            // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_M330[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class AController*                                         InstigatedBy;                                            // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_SpaceRabbit.Char_SpaceRabbit_C.ReceiveDied
	 */
	struct AChar_SpaceRabbit_C_ReceiveDied_Params
	{	};

	/**
	 * Function Char_SpaceRabbit.Char_SpaceRabbit_C.ReceiveBeginPlay
	 */
	struct AChar_SpaceRabbit_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Char_SpaceRabbit.Char_SpaceRabbit_C.PlayConsumeItemEffect
	 */
	struct AChar_SpaceRabbit_C_PlayConsumeItemEffect_Params
	{
	public:
		class UClass*                                              itemDescriptor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		int32_t                                                    Amount;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Char_SpaceRabbit.Char_SpaceRabbit_C.OnUse
	 */
	struct AChar_SpaceRabbit_C_OnUse_Params
	{
	public:
		class AFGCharacterPlayer*                                  byCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FUseState                                           State;                                                   // 0x0008(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Char_SpaceRabbit.Char_SpaceRabbit_C.UpdateDisplayName
	 */
	struct AChar_SpaceRabbit_C_UpdateDisplayName_Params
	{
	public:
		class FText                                                NewName;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Char_SpaceRabbit.Char_SpaceRabbit_C.ExecuteUbergraph_Char_SpaceRabbit
	 */
	struct AChar_SpaceRabbit_C_ExecuteUbergraph_Char_SpaceRabbit_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5SND[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
