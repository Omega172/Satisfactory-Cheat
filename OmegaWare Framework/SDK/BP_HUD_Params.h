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
	 * Function BP_HUD.BP_HUD_C.IsInventoryOpen
	 */
	struct ABP_HUD_C_IsInventoryOpen_Params
	{
	public:
		bool                                                       IsOpen;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AQ84[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_HUD.BP_HUD_C.SetupFrontEnd
	 */
	struct ABP_HUD_C_SetupFrontEnd_Params
	{	};

	/**
	 * Function BP_HUD.BP_HUD_C.ToggleInventoryUI
	 */
	struct ABP_HUD_C_ToggleInventoryUI_Params
	{	};

	/**
	 * Function BP_HUD.BP_HUD_C.OpenInventoryUI
	 */
	struct ABP_HUD_C_OpenInventoryUI_Params
	{	};

	/**
	 * Function BP_HUD.BP_HUD_C.OpenInteractUI
	 */
	struct ABP_HUD_C_OpenInteractUI_Params
	{
	public:
		class UClass*                                              WidgetClass;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		class UObject*                                             interactObject;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HUD.BP_HUD_C.RemovePawnHUD
	 */
	struct ABP_HUD_C_RemovePawnHUD_Params
	{	};

	/**
	 * Function BP_HUD.BP_HUD_C.AddEquipmentHUD
	 */
	struct ABP_HUD_C_AddEquipmentHUD_Params
	{
	public:
		class UClass*                                              WidgetClass;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		EEquipmentSlot                                             Slot;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HUD.BP_HUD_C.RemoveEquipmentHUD
	 */
	struct ABP_HUD_C_RemoveEquipmentHUD_Params
	{
	public:
		EEquipmentSlot                                             Slot;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HUD.BP_HUD_C.CloseInteractUIIfOpen
	 */
	struct ABP_HUD_C_CloseInteractUIIfOpen_Params
	{	};

	/**
	 * Function BP_HUD.BP_HUD_C.NotifyHitFeedbackNormal
	 */
	struct ABP_HUD_C_NotifyHitFeedbackNormal_Params
	{
	public:
		class AFGCharacterBase*                                    hitCharacter;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HUD.BP_HUD_C.NotifyHitFeedbackWeakSpot
	 */
	struct ABP_HUD_C_NotifyHitFeedbackWeakSpot_Params
	{
	public:
		class AFGCharacterBase*                                    hitCharacter;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HUD.BP_HUD_C.ExecuteUbergraph_BP_HUD
	 */
	struct ABP_HUD_C_ExecuteUbergraph_BP_HUD_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DWJV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
