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
	 * BlueprintGeneratedClass BUILD_SingleDoor_Base_01.BUILD_SingleDoor_Base_01_C
	 * Size -> 0x0019 (FullSize[0x0679] - InheritedSize[0x0660])
	 */
	class ABUILD_SingleDoor_Base_01_C : public AFGBuildableDoor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0660(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAkComponent*                                        mOpeningDoor;                                            // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class UAkComponent*                                        mClosingDoors;                                           // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		bool                                                       IsDoorOpen;                                              // 0x0678(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		class FText GetLookAtDecription(class AFGCharacterPlayer* byCharacter, const struct FUseState& State);
		void PlayCloseFromStart();
		void PlayCloseFromSeekTime(double SeekTime);
		void PlayOpenFromSeekTime(double SeekTime);
		void PlayOpenFromStart();
		struct FVector GetDoorLocation();
		void OnMovementStateChanged(EFactoryGame_EDoorState oldState, EFactoryGame_EDoorState NewState, float percentage);
		void OnDoorConfigurationChanged(EDoorConfiguration NewState);
		void ExecuteUbergraph_BUILD_SingleDoor_Base_01(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
