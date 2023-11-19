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
	 * Function BPW_HandEquipmentSwap.BPW_HandEquipmentSwap_C.CacheStacks
	 */
	struct UBPW_HandEquipmentSwap_C_CacheStacks_Params
	{
	public:
		bool                                                       CachChanged;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_H9N1[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_HandEquipmentSwap.BPW_HandEquipmentSwap_C.GetEquipmentOnScroll
	 */
	struct UBPW_HandEquipmentSwap_C_GetEquipmentOnScroll_Params
	{	};

	/**
	 * Function BPW_HandEquipmentSwap.BPW_HandEquipmentSwap_C.Construct
	 */
	struct UBPW_HandEquipmentSwap_C_Construct_Params
	{	};

	/**
	 * Function BPW_HandEquipmentSwap.BPW_HandEquipmentSwap_C.Start FadeOut Timer
	 */
	struct UBPW_HandEquipmentSwap_C_StartFadeOutTimer_Params
	{	};

	/**
	 * Function BPW_HandEquipmentSwap.BPW_HandEquipmentSwap_C.OnActiveAquipmentChanged
	 */
	struct UBPW_HandEquipmentSwap_C_OnActiveAquipmentChanged_Params
	{
	public:
		EEquipmentSlot                                             Slot;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_HandEquipmentSwap.BPW_HandEquipmentSwap_C.ExecuteUbergraph_BPW_HandEquipmentSwap
	 */
	struct UBPW_HandEquipmentSwap_C_ExecuteUbergraph_BPW_HandEquipmentSwap_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
