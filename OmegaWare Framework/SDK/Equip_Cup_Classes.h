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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass Equip_Cup.Equip_Cup_C
	 * Size -> 0x0018 (FullSize[0x0498] - InheritedSize[0x0480])
	 */
	class AEquip_Cup_C : public AFGEquipment
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0480(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UParticleSystemComponent*                            P_CoffeeCup_Steam;                                       // 0x0488(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              SK_Coffeecup;                                            // 0x0490(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void WasEquipped();
		void DoHandleDefaultEquipmentActionEvent(EDefaultEquipmentAction Action, EDefaultEquipmentActionEvent actionEvent);
		void ExecuteUbergraph_Equip_Cup(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
