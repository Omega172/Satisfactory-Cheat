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
	 * WidgetBlueprintGeneratedClass BPW_HUDNotifiaction.BPW_HUDNotifiaction_C
	 * Size -> 0x0068 (FullSize[0x02E8] - InheritedSize[0x0280])
	 */
	class UBPW_HUDNotifiaction_C : public UFGPushNotificationWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimShow;                                                // 0x0288(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
		class UObject*                                             mInstigator;                                             // 0x0290(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class UTexture2D*                                          mIcon;                                                   // 0x0298(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class FText                                                mTitle;                                                  // 0x02A0(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		class FText                                                mDescription;                                            // 0x02B8(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		double                                                     mDuration;                                               // 0x02D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FTimerHandle                                        mDurationHandle;                                         // 0x02D8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UAkAudioEvent*                                       AkEvent;                                                 // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void Construct();
		void HideNotifiaction();
		void ExecuteUbergraph_BPW_HUDNotifiaction(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
