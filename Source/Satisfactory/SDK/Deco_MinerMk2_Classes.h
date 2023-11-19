﻿#pragma once

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
	 * BlueprintGeneratedClass Deco_MinerMk2.Deco_MinerMk2_C
	 * Size -> 0x0018 (FullSize[0x0318] - InheritedSize[0x0300])
	 */
	class ADeco_MinerMk2_C : public AFGDecorationTemplate
	{
	public:
		class UFGAttachmentPointComponent*                         AttachmentPoint_Sign_Conveyor;                           // 0x0300(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFGAttachmentPointComponent*                         AttachmentPoint_Sign_Top;                                // 0x0308(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFGClearanceComponent*                               FGClearance;                                             // 0x0310(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
