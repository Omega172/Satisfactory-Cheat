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
	 * Function ChaosCaching.ChaosCacheManager.TriggerComponentByCache
	 */
	struct AChaosCacheManager_TriggerComponentByCache_Params
	{
	public:
		class FName                                                InCacheName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosCaching.ChaosCacheManager.TriggerComponent
	 */
	struct AChaosCacheManager_TriggerComponent_Params
	{
	public:
		class UPrimitiveComponent*                                 InComponent;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosCaching.ChaosCacheManager.TriggerAll
	 */
	struct AChaosCacheManager_TriggerAll_Params
	{	};

	/**
	 * Function ChaosCaching.ChaosCacheManager.SetStartTime
	 */
	struct AChaosCacheManager_SetStartTime_Params
	{
	public:
		float                                                      InStartTime;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosCaching.ChaosCacheManager.ResetSingleTransform
	 */
	struct AChaosCacheManager_ResetSingleTransform_Params
	{
	public:
		int32_t                                                    InIndex;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosCaching.ChaosCacheManager.ResetAllComponentTransforms
	 */
	struct AChaosCacheManager_ResetAllComponentTransforms_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
