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
	 * BlueprintGeneratedClass BP_PlayerController.BP_PlayerController_C
	 * Size -> 0x00A8 (FullSize[0x0B58] - InheritedSize[0x0AB0])
	 */
	class ABP_PlayerController_C : public AFGPlayerController
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0AB0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAudioComponent*                                     mDialogueComponent;                                      // 0x0AB8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     mRespawnFadeOutTime;                                     // 0x0AC0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FPopupData                                          mPopupDataTest;                                          // 0x0AC8(0x0070) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class UWidget_MapContainer_C*                              mMinimapWidget;                                          // 0x0B38(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnBeginTypeChat;                                         // 0x0B40(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UWidget_PhotoMode_C*                                 PhotoModeInstructionsWidget;                             // 0x0B50(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash

	public:
		class UFGPhotoModeWidget* GetPhotoModeWidget();
		void DismantleGolfCart(class AFGWheeledVehicle* golfCart);
		class UAkComponent* OnSetupMovementWind();
		void DismantlePortableMiner(class AFGPortableMiner* PortableMiner);
		void OnStartRespawn(bool isJoining);
		void ReceiveBeginPlay();
		void CheckAndUpdateGamepad();
		void OnDisabledInputGateChanged();
		void CreateSequenceList();
		void TogglePhotoModeInstructionsWidget();
		void ReceiveTick(float DeltaSeconds);
		void PlayPhotoSound();
		void TakePhoto();
		void OnDismantlePortableMiner(class AFGPortableMiner* PortableMiner);
		void OnDismantleGolfCart(class AFGWheeledVehicle* inGolfCart);
		void OnRespawnFinished();
		void TogglePhotoModeInstructionsWidgetVisibility();
		void OnChat();
		void ToggleMap();
		void ExecuteUbergraph_BP_PlayerController(int32_t EntryPoint);
		void OnBeginTypeChat__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
