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
	 * BlueprintGeneratedClass BP_DebugCameraController.BP_DebugCameraController_C
	 * Size -> 0x0010 (FullSize[0x0A50] - InheritedSize[0x0A40])
	 */
	class ABP_DebugCameraController_C : public ADebugCameraController
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A40(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class AFGHUD*                                              mOriginalHUD;                                            // 0x0A48(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void InpActEvt_Shift_P_K2Node_InputKeyEvent_1(const struct FKey& Key);
		void ReceiveOnActivate(class APlayerController* OriginalPC);
		void ReceiveOnDeactivate(class APlayerController* RestoredPC);
		void ExecuteUbergraph_BP_DebugCameraController(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
