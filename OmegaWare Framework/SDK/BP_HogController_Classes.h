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
	 * BlueprintGeneratedClass BP_HogController.BP_HogController_C
	 * Size -> 0x0010 (FullSize[0x0580] - InheritedSize[0x0570])
	 */
	class ABP_HogController_C : public ABP_CreatureController_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0570(0x0008) ZeroConstructor, Transient, DuplicateTransient
		double                                                     mPanicNearbyHogsRadius;                                  // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool IsOfSameFamily(class UObject* Object);
		void PanicNearbyHogs();
		void OnCreatureStateChanged(ECreatureState PreviousState, ECreatureState NewState);
		void ExecuteUbergraph_BP_HogController(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
