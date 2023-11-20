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
	 * BlueprintGeneratedClass Controller_NonFlyingBird.Controller_NonFlyingBird_C
	 * Size -> 0x0009 (FullSize[0x0579] - InheritedSize[0x0570])
	 */
	class AController_NonFlyingBird_C : public ABP_CreatureController_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0570(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       mIsLuring;                                               // 0x0578(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool IsActorConsideredThreat(class AActor* Actor);
		void SetLuring(bool inLuring);
		void MakePanic();
		void ExecuteUbergraph_Controller_NonFlyingBird(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
