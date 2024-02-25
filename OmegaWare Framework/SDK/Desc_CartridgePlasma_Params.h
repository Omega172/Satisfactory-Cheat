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
	 * Function Desc_CartridgePlasma.Desc_CartridgePlasma_C.UpdateBeamEndPoint
	 */
	struct UDesc_CartridgePlasma_C_UpdateBeamEndPoint_Params
	{	};

	/**
	 * Function Desc_CartridgePlasma.Desc_CartridgePlasma_C.Stop Weapon Effect
	 */
	struct UDesc_CartridgePlasma_C_StopWeaponEffect_Params
	{	};

	/**
	 * Function Desc_CartridgePlasma.Desc_CartridgePlasma_C.StartWeaponEffect
	 */
	struct UDesc_CartridgePlasma_C_StartWeaponEffect_Params
	{	};

	/**
	 * Function Desc_CartridgePlasma.Desc_CartridgePlasma_C.OnBeginFire
	 */
	struct UDesc_CartridgePlasma_C_OnBeginFire_Params
	{	};

	/**
	 * Function Desc_CartridgePlasma.Desc_CartridgePlasma_C.OnEndFire
	 */
	struct UDesc_CartridgePlasma_C_OnEndFire_Params
	{	};

	/**
	 * Function Desc_CartridgePlasma.Desc_CartridgePlasma_C.AmmoTick
	 */
	struct UDesc_CartridgePlasma_C_AmmoTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Desc_CartridgePlasma.Desc_CartridgePlasma_C.ExecuteUbergraph_Desc_CartridgePlasma
	 */
	struct UDesc_CartridgePlasma_C_ExecuteUbergraph_Desc_CartridgePlasma_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
