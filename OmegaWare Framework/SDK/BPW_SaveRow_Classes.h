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
	 * WidgetBlueprintGeneratedClass BPW_SaveRow.BPW_SaveRow_C
	 * Size -> 0x00F0 (FullSize[0x0370] - InheritedSize[0x0280])
	 */
	class UBPW_SaveRow_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              mHoverImage;                                             // 0x0288(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      mPlayDurationSaveTimeText;                               // 0x0290(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              mSelectedImage;                                          // 0x0298(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          mTitle;                                                  // 0x02A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              mWarningIcon;                                            // 0x02A8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FSaveHeader                                         mSaveHeader;                                             // 0x02B0(0x00A8) Edit, BlueprintVisible, DisableEditOnInstance
		class UFGSaveHeaderWrapper*                                mSaveHeaderObject;                                       // 0x0358(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class FString                                              mNewSaveGameName;                                        // 0x0360(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void IsButtonSelected(bool IsSelected);
		void IsButtonHovered(bool mIsHovered);
		void SetWarningIconVisibility(const struct FSaveHeader& SaveGame);
		void GetPlayDurationAndSaveTime(const struct FSaveHeader& mSaveHeader);
		void GetSaveName(struct FSaveHeader* mSaveHeader);
		void GetSave(class UObject* mListObject);
		void UpdateButton(const struct FSaveHeader& mSaveHeader);
		void BP_OnEntryReleased();
		void BP_OnItemExpansionChanged(bool bIsExpanded);
		void OnListItemObjectSet(class UObject* ListItemObject);
		void BP_OnItemSelectionChanged(bool bIsSelected);
		void ExecuteUbergraph_BPW_SaveRow(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
