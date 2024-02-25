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
	 * BlueprintGeneratedClass BP_PassengerSeat.BP_PassengerSeat_C
	 * Size -> 0x0020 (FullSize[0x0410] - InheritedSize[0x03F0])
	 */
	class ABP_PassengerSeat_C : public AFGPassengerSeat
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USpringArmComponent*                                 SpringArm;                                               // 0x03F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPostProcessComponent*                               PostProcess;                                             // 0x0400(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCameraComponent*                                    Camera;                                                  // 0x0408(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void InpActEvt_Use_K2Node_InputActionEvent_1(const struct FKey& Key);
		void UpdateCamera();
		void ReceivePossessed(class AController* NewController);
		void ReceiveUnpossessed(class AController* OldController);
		void Server_Leave();
		void ExecuteUbergraph_BP_PassengerSeat(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
