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
	 * Function Equip_GolfCartDispenser.Equip_GolfCartDispenser_C.IsObjectNotChildOfVehicleClass
	 */
	struct AEquip_GolfCartDispenser_C_IsObjectNotChildOfVehicleClass_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0C2C[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Equip_GolfCartDispenser.Equip_GolfCartDispenser_C.GetSecondaryTraceLocations
	 */
	struct AEquip_GolfCartDispenser_C_GetSecondaryTraceLocations_Params
	{
	public:
		bool                                                       IsFirstTraceBlocking;                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JGOO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             FirstTraceHitLocation;                                   // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             FirstTraceEndTrace;                                      // 0x0020(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AFGCharacterPlayer*                                  Instigator;                                              // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             SecondTraceStart;                                        // 0x0040(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             SecondTraceEnd;                                          // 0x0058(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             BoxTraceHalfSize;                                        // 0x0070(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            BoxTraceOrientation;                                     // 0x0088(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Equip_GolfCartDispenser.Equip_GolfCartDispenser_C.GetInitialTraceLocations
	 */
	struct AEquip_GolfCartDispenser_C_GetInitialTraceLocations_Params
	{
	public:
		struct FVector                                             TraceStart;                                              // 0x0000(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             TraceEnd;                                                // 0x0018(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AFGCharacterPlayer*                                  Instigator;                                              // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_GolfCartDispenser.Equip_GolfCartDispenser_C.WasUnEquipped
	 */
	struct AEquip_GolfCartDispenser_C_WasUnEquipped_Params
	{	};

	/**
	 * Function Equip_GolfCartDispenser.Equip_GolfCartDispenser_C.SpawnGolfCart
	 */
	struct AEquip_GolfCartDispenser_C_SpawnGolfCart_Params
	{	};

	/**
	 * Function Equip_GolfCartDispenser.Equip_GolfCartDispenser_C.WasEquipped
	 */
	struct AEquip_GolfCartDispenser_C_WasEquipped_Params
	{	};

	/**
	 * Function Equip_GolfCartDispenser.Equip_GolfCartDispenser_C.PlaySpawnEffects
	 */
	struct AEquip_GolfCartDispenser_C_PlaySpawnEffects_Params
	{
	public:
		class ABP_Golfcart_C*                                      golfCart;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_GolfCartDispenser.Equip_GolfCartDispenser_C.DisplayBuildDisqualifier
	 */
	struct AEquip_GolfCartDispenser_C_DisplayBuildDisqualifier_Params
	{	};

	/**
	 * Function Equip_GolfCartDispenser.Equip_GolfCartDispenser_C.ResetBuildDisqualifierDisplay
	 */
	struct AEquip_GolfCartDispenser_C_ResetBuildDisqualifierDisplay_Params
	{	};

	/**
	 * Function Equip_GolfCartDispenser.Equip_GolfCartDispenser_C.ExecuteUbergraph_Equip_GolfCartDispenser
	 */
	struct AEquip_GolfCartDispenser_C_ExecuteUbergraph_Equip_GolfCartDispenser_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_N6V6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
