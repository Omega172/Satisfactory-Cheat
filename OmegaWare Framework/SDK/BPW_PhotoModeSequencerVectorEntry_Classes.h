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
	 * WidgetBlueprintGeneratedClass BPW_PhotoModeSequencerVectorEntry.BPW_PhotoModeSequencerVectorEntry_C
	 * Size -> 0x005F (FullSize[0x0300] - InheritedSize[0x02A1])
	 */
	class UBPW_PhotoModeSequencerVectorEntry_C : public UBPW_PhotoModeSequencerEntry_C
	{
	public:
		unsigned char                                              UnknownData_1N1G[0x7];                                   // 0x02A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UImage*                                              ValueImage;                                              // 0x02A8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              XImage;                                                  // 0x02B0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              YImage;                                                  // 0x02B8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ZImage;                                                  // 0x02C0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FFGSequenceVectorSection                            mSequenceVectorSection;                                  // 0x02C8(0x0038) Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn

	public:
		void UpdateEntryIcon();
		struct FEventReply OnMarkerPressed(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void UpdateSequencerEntry();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
