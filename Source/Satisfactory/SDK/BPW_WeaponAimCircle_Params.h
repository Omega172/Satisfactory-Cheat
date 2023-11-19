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
	 * Function BPW_WeaponAimCircle.BPW_WeaponAimCircle_C.SetForcedVisibility
	 */
	struct UBPW_WeaponAimCircle_C_SetForcedVisibility_Params
	{
	public:
		bool                                                       mIsVisible;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_WeaponAimCircle.BPW_WeaponAimCircle_C.ToggleVisibility
	 */
	struct UBPW_WeaponAimCircle_C_ToggleVisibility_Params
	{	};

	/**
	 * Function BPW_WeaponAimCircle.BPW_WeaponAimCircle_C.GetTraceLocations
	 */
	struct UBPW_WeaponAimCircle_C_GetTraceLocations_Params
	{
	public:
		struct FVector                                             TraceStart;                                              // 0x0000(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             TraceEnd;                                                // 0x0018(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_WeaponAimCircle.BPW_WeaponAimCircle_C.Construct
	 */
	struct UBPW_WeaponAimCircle_C_Construct_Params
	{	};

	/**
	 * Function BPW_WeaponAimCircle.BPW_WeaponAimCircle_C.Tick
	 */
	struct UBPW_WeaponAimCircle_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_WeaponAimCircle.BPW_WeaponAimCircle_C.OnEquipmentUpdated
	 */
	struct UBPW_WeaponAimCircle_C_OnEquipmentUpdated_Params
	{
	public:
		EEquipmentSlot                                             Slot;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_WeaponAimCircle.BPW_WeaponAimCircle_C.ForceUpdateCrosshair
	 */
	struct UBPW_WeaponAimCircle_C_ForceUpdateCrosshair_Params
	{	};

	/**
	 * Function BPW_WeaponAimCircle.BPW_WeaponAimCircle_C.OnBuildGunStateChanged
	 */
	struct UBPW_WeaponAimCircle_C_OnBuildGunStateChanged_Params
	{
	public:
		EBuildGunState                                             NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_WeaponAimCircle.BPW_WeaponAimCircle_C.OnCrosshairUpdated
	 */
	struct UBPW_WeaponAimCircle_C_OnCrosshairUpdated_Params
	{
	public:
		bool                                                       crosshairVisibility;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4VSS[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTexture2D*                                          crossHairTexture;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        Color;                                                   // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_WeaponAimCircle.BPW_WeaponAimCircle_C.ExecuteUbergraph_BPW_WeaponAimCircle
	 */
	struct UBPW_WeaponAimCircle_C_ExecuteUbergraph_BPW_WeaponAimCircle_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
