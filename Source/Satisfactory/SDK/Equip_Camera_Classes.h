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
	 * BlueprintGeneratedClass Equip_Camera.Equip_Camera_C
	 * Size -> 0x0018 (FullSize[0x0498] - InheritedSize[0x0480])
	 */
	class AEquip_Camera_C : public AFGEquipment
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0480(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0488(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPW_PhotoAnalyser_C*                                mPhotoAnalyserWidget;                                    // 0x0490(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash

	public:
		void InpActEvt_Reload_K2Node_InputActionEvent_1(const struct FKey& Key);
		void WasEquipped();
		void WasUnEquipped();
		void DoDefaultPrimaryFire();
		void ExecuteUbergraph_Equip_Camera(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
