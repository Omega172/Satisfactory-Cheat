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
	 * Function Equip_Hookshot.Equip_Hookshot_C.ReceiveTick
	 */
	struct AEquip_Hookshot_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_Hookshot.Equip_Hookshot_C.OnFire
	 */
	struct AEquip_Hookshot_C_OnFire_Params
	{
	public:
		bool                                                       attachedToSomething;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TJRA[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          HitResult;                                               // 0x0008(0x00E8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Equip_Hookshot.Equip_Hookshot_C.OwnerLanded
	 */
	struct AEquip_Hookshot_C_OwnerLanded_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x00E8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Equip_Hookshot.Equip_Hookshot_C.OnWireDetach
	 */
	struct AEquip_Hookshot_C_OnWireDetach_Params
	{	};

	/**
	 * Function Equip_Hookshot.Equip_Hookshot_C.DidNotAffordUse
	 */
	struct AEquip_Hookshot_C_DidNotAffordUse_Params
	{	};

	/**
	 * Function Equip_Hookshot.Equip_Hookshot_C.ExecuteUbergraph_Equip_Hookshot
	 */
	struct AEquip_Hookshot_C_ExecuteUbergraph_Equip_Hookshot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
