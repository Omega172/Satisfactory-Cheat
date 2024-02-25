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
	 * Function Widget_HUDBox_Weapon.Widget_HUDBox_Weapon_C.SetAmmoTextVisibility
	 */
	struct UWidget_HUDBox_Weapon_C_SetAmmoTextVisibility_Params
	{
	public:
		class UClass*                                              CurrentAmmoClass;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_HUDBox_Weapon.Widget_HUDBox_Weapon_C.UpdateAmmoSlots
	 */
	struct UWidget_HUDBox_Weapon_C_UpdateAmmoSlots_Params
	{	};

	/**
	 * Function Widget_HUDBox_Weapon.Widget_HUDBox_Weapon_C.Construct
	 */
	struct UWidget_HUDBox_Weapon_C_Construct_Params
	{	};

	/**
	 * Function Widget_HUDBox_Weapon.Widget_HUDBox_Weapon_C.UpdateContent
	 */
	struct UWidget_HUDBox_Weapon_C_UpdateContent_Params
	{	};

	/**
	 * Function Widget_HUDBox_Weapon.Widget_HUDBox_Weapon_C.Tick
	 */
	struct UWidget_HUDBox_Weapon_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_HUDBox_Weapon.Widget_HUDBox_Weapon_C.ExecuteUbergraph_Widget_HUDBox_Weapon
	 */
	struct UWidget_HUDBox_Weapon_C_ExecuteUbergraph_Widget_HUDBox_Weapon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
