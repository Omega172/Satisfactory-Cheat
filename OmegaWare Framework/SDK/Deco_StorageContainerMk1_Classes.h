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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass Deco_StorageContainerMk1.Deco_StorageContainerMk1_C
	 * Size -> 0x0030 (FullSize[0x0330] - InheritedSize[0x0300])
	 */
	class ADeco_StorageContainerMk1_C : public AFGDecorationTemplate
	{
	public:
		class UFGAttachmentPointComponent*                         AttachmentPoint_Right;                                   // 0x0300(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFGAttachmentPointComponent*                         AttachmentPoint_Left;                                    // 0x0308(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFGAttachmentPointComponent*                         AttachmentPoint_Front;                                   // 0x0310(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFGAttachmentPointComponent*                         AttachmentPoint_Back;                                    // 0x0318(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPC_PoolableFogPlane_C*                             BPC_PoolableFogPlane1;                                   // 0x0320(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPC_PoolableFogPlane_C*                             BPC_PoolableFogPlane;                                    // 0x0328(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
