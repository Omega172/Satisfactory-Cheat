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
	 * WidgetBlueprintGeneratedClass BPW_HUD_ESlot_BoomBox.BPW_HUD_ESlot_BoomBox_C
	 * Size -> 0x001D (FullSize[0x02E0] - InheritedSize[0x02C3])
	 */
	class UBPW_HUD_ESlot_BoomBox_C : public UBPW_HUD_ESlot_Content_C
	{
	public:
		unsigned char                                              UnknownData_6VAU[0x5];                                   // 0x02C3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              mPlaybackIcon;                                           // 0x02D0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              mTapeIcon;                                               // 0x02D8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void UpdateESlotData();
		void OnSlotSizeChanged(bool IsSmall);
		void IconLoaded(class UTexture2D* Texture);
		void ExecuteUbergraph_BPW_HUD_ESlot_BoomBox(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
