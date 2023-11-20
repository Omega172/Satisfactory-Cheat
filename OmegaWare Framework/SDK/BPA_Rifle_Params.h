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
	 * Function BPA_Rifle.BPA_Rifle_C.AnimGraph
	 */
	struct UBPA_Rifle_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function BPA_Rifle.BPA_Rifle_C.SetReloadedOnce
	 */
	struct UBPA_Rifle_C_SetReloadedOnce_Params
	{
	public:
		bool                                                       HasReloadedOnce;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Rifle.BPA_Rifle_C.BlueprintInitializeAnimation
	 */
	struct UBPA_Rifle_C_BlueprintInitializeAnimation_Params
	{	};

	/**
	 * Function BPA_Rifle.BPA_Rifle_C.AnimNotify_FGHideEjectMagazine
	 */
	struct UBPA_Rifle_C_AnimNotify_FGHideEjectMagazine_Params
	{	};

	/**
	 * Function BPA_Rifle.BPA_Rifle_C.AnimNotify_HideCurrentAmmo
	 */
	struct UBPA_Rifle_C_AnimNotify_HideCurrentAmmo_Params
	{	};

	/**
	 * Function BPA_Rifle.BPA_Rifle_C.AnimNotify_ShowCurrentAmmo
	 */
	struct UBPA_Rifle_C_AnimNotify_ShowCurrentAmmo_Params
	{	};

	/**
	 * Function BPA_Rifle.BPA_Rifle_C.ExecuteUbergraph_BPA_Rifle
	 */
	struct UBPA_Rifle_C_ExecuteUbergraph_BPA_Rifle_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
