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
	 * Function Equip_Decoration.Equip_Decoration_C.SetupActor
	 */
	struct AEquip_Decoration_C_SetupActor_Params
	{
	public:
		class AActor*                                              InActor;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_Decoration.Equip_Decoration_C.CacheDescriptor
	 */
	struct AEquip_Decoration_C_CacheDescriptor_Params
	{	};

	/**
	 * Function Equip_Decoration.Equip_Decoration_C.WasEquipped
	 */
	struct AEquip_Decoration_C_WasEquipped_Params
	{	};

	/**
	 * Function Equip_Decoration.Equip_Decoration_C.SpawnDecoration
	 */
	struct AEquip_Decoration_C_SpawnDecoration_Params
	{	};

	/**
	 * Function Equip_Decoration.Equip_Decoration_C.ExecuteUbergraph_Equip_Decoration
	 */
	struct AEquip_Decoration_C_ExecuteUbergraph_Equip_Decoration_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
