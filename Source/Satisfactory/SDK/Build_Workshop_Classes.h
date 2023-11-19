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
	 * BlueprintGeneratedClass Build_Workshop.Build_Workshop_C
	 * Size -> 0x0048 (FullSize[0x0620] - InheritedSize[0x05D8])
	 */
	class ABuild_Workshop_C : public AFGBuildable
	{
	public:
		unsigned char                                              UnknownData_74RS[0x8];                                   // 0x05D8(0x0008) Fix Super Size
		class UFGClearanceComponent*                               FGClearance;                                             // 0x05E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_LadderComponent_C*                               BP_LadderComponent;                                      // 0x05E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFGFactoryLegsComponent*                             FGFactoryLegs;                                           // 0x05F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFGColoredInstanceMeshProxy*                         FGColoredInstanceMeshProxy;                              // 0x05F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_WorkshopComponent_C*                             WorkshopComponent;                                       // 0x0600(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class FText                                                mOccupiedText;                                           // 0x0608(0x0018) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		bool IsEquipmentWorkshop();
		class FText GetLookAtDecription(class AFGCharacterPlayer* byCharacter, const struct FUseState& State);
		bool IsUseable();
		void UpdateUseState(class AFGCharacterPlayer* byCharacter, const struct FVector& atLocation, class UPrimitiveComponent* componentHit, struct FUseState* out_useState);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
