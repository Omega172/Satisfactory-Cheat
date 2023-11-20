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
	 * WidgetBlueprintGeneratedClass BPW_PhotoModeSequencerFloatEntry.BPW_PhotoModeSequencerFloatEntry_C
	 * Size -> 0x0027 (FullSize[0x02C8] - InheritedSize[0x02A1])
	 */
	class UBPW_PhotoModeSequencerFloatEntry_C : public UBPW_PhotoModeSequencerEntry_C
	{
	public:
		unsigned char                                              UnknownData_3W81[0x7];                                   // 0x02A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UImage*                                              ValueImage;                                              // 0x02A8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FFGSequenceFloatSection                             mSequenceFloatSection;                                   // 0x02B0(0x0018) Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn

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
