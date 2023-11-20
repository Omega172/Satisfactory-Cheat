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
	 * BlueprintGeneratedClass BP_EquipmentDescriptorBeacon.BP_EquipmentDescriptorBeacon_C
	 * Size -> 0x0000 (FullSize[0x01F8] - InheritedSize[0x01F8])
	 */
	class UBP_EquipmentDescriptorBeacon_C : public UFGConsumableDescriptor
	{
	public:
		void ConsumedBy(class AFGCharacterPlayer* Player);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
