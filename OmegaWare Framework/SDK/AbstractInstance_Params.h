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
	 * Function AbstractInstance.AbstractInstanceInterface.PostLazySpawnInstances
	 */
	struct UAbstractInstanceInterface_PostLazySpawnInstances_Params
	{	};

	/**
	 * Function AbstractInstance.AbstractInstanceInterface.GetLightweightInstanceActorTransform
	 */
	struct UAbstractInstanceInterface_GetLightweightInstanceActorTransform_Params
	{
	public:
		struct FTransform                                          ReturnValue;                                             // 0x0000(0x0060)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AbstractInstance.AbstractInstanceInterface.GetActorLightweightInstanceData
	 */
	struct UAbstractInstanceInterface_GetActorLightweightInstanceData_Params
	{
	public:
		TArray<struct FInstanceData>                               ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AbstractInstance.AbstractInstanceInterface.DoesContainLightweightInstances
	 */
	struct UAbstractInstanceInterface_DoesContainLightweightInstances_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AbstractInstance.AbstractInstanceManager.ResolveHit
	 */
	struct AAbstractInstanceManager_ResolveHit_Params
	{
	public:
		struct FHitResult                                          Result;                                                  // 0x0000(0x00E8)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FInstanceHandle                                     OutHandle;                                               // 0x00E8(0x0048)  (Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0130(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AbstractInstance.AbstractInstanceManager.RemoveInstance
	 */
	struct AAbstractInstanceManager_RemoveInstance_Params
	{
	public:
		struct FInstanceHandle                                     InHandle;                                                // 0x0000(0x0048)  (Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AbstractInstance.AbstractInstanceManager.GetOwnerByHandle
	 */
	struct AAbstractInstanceManager_GetOwnerByHandle_Params
	{
	public:
		struct FInstanceHandle                                     Handle;                                                  // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		class AActor*                                              ReturnValue;                                             // 0x0048(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AbstractInstance.AbstractInstanceManager.GetInstanceManager
	 */
	struct AAbstractInstanceManager_GetInstanceManager_Params
	{
	public:
		class UObject*                                             WorldContext;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AAbstractInstanceManager*                            ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AbstractInstance.AbstractInstanceManager.GetHandleInfo
	 */
	struct AAbstractInstanceManager_GetHandleInfo_Params
	{
	public:
		struct FInstanceHandle                                     Handle;                                                  // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		int32_t                                                    OutInstanceID;                                           // 0x0048(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8W9R[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UHierarchicalInstancedStaticMeshComponent*           ReturnValue;                                             // 0x0050(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AbstractInstance.AbstractInstanceManager.DrawDebug
	 */
	struct AAbstractInstanceManager_DrawDebug_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
