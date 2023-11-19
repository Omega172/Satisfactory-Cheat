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
	 * Function Attach_Machinegun.Attach_Machinegun_C.PlayFireEffect
	 */
	struct AAttach_Machinegun_C_PlayFireEffect_Params
	{
	public:
		class UFGAmmoType*                                         ammoType;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Attach_Machinegun.Attach_Machinegun_C.ClientPlayReloadEffect
	 */
	struct AAttach_Machinegun_C_ClientPlayReloadEffect_Params
	{	};

	/**
	 * Function Attach_Machinegun.Attach_Machinegun_C.ExecuteUbergraph_Attach_Machinegun
	 */
	struct AAttach_Machinegun_C_ExecuteUbergraph_Attach_Machinegun_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TD5J[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
