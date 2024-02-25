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
	 * Function Widget_TakeDamageIndicator.Widget_TakeDamageIndicator_C.GetOwnerFGPlayer
	 */
	struct UWidget_TakeDamageIndicator_C_GetOwnerFGPlayer_Params
	{
	public:
		class AFGCharacterPlayer*                                  AsFGCharacterPlayer;                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_TakeDamageIndicator.Widget_TakeDamageIndicator_C.SetRotation
	 */
	struct UWidget_TakeDamageIndicator_C_SetRotation_Params
	{	};

	/**
	 * Function Widget_TakeDamageIndicator.Widget_TakeDamageIndicator_C.DestroySelf
	 */
	struct UWidget_TakeDamageIndicator_C_DestroySelf_Params
	{	};

	/**
	 * Function Widget_TakeDamageIndicator.Widget_TakeDamageIndicator_C.Construct
	 */
	struct UWidget_TakeDamageIndicator_C_Construct_Params
	{	};

	/**
	 * Function Widget_TakeDamageIndicator.Widget_TakeDamageIndicator_C.Tick
	 */
	struct UWidget_TakeDamageIndicator_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_TakeDamageIndicator.Widget_TakeDamageIndicator_C.ExecuteUbergraph_Widget_TakeDamageIndicator
	 */
	struct UWidget_TakeDamageIndicator_C_ExecuteUbergraph_Widget_TakeDamageIndicator_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LCND[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
