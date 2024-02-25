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
	 * WidgetBlueprintGeneratedClass BPW_SessionRow.BPW_SessionRow_C
	 * Size -> 0x0132 (FullSize[0x03B2] - InheritedSize[0x0280])
	 */
	class UBPW_SessionRow_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    IsCreative;                                              // 0x0288(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              mHoveredImage;                                           // 0x0290(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             mIconBorder;                                             // 0x0298(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          mSaveNameTimeText;                                       // 0x02A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              mSelectedImage;                                          // 0x02A8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              mSessionTypeIcon;                                        // 0x02B0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          mTitle;                                                  // 0x02B8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_AutoScrollingContainer_C*                    Widget_AutoScrollingContainer;                           // 0x02C0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FSessionSaveStruct                                  mSession;                                                // 0x02C8(0x0020) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSaveHeader                                         mRecentSave;                                             // 0x02E8(0x00A8) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                mName;                                                   // 0x0390(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		class UFGSessionSaveStructWrapper*                         mSessionObjectWrapper;                                   // 0x03A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		bool                                                       mIsSelected;                                             // 0x03B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mIsDisabled;                                             // 0x03B1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void GetSessionIcon(const struct FSessionSaveStruct& Session);
		void SetIsDisabled(bool IsDisabled);
		void SetIsSelected(bool IsSelected);
		void IsButtonHovered(bool IsHovered);
		void GetSession(class UObject* mListObject);
		void GetMostRecentSaveFromSession(const struct FSessionSaveStruct& mSession);
		void GetSaveNameAndSaveTime(const struct FSessionSaveStruct& mSession);
		void GetSessionName(struct FSessionSaveStruct* mSession);
		void UpdateButton(const struct FSessionSaveStruct& mSaveSession);
		void BP_OnEntryReleased();
		void BP_OnItemExpansionChanged(bool bIsExpanded);
		void OnListItemObjectSet(class UObject* ListItemObject);
		void StartAutoscrollSessionRow();
		void StopAutoscrollSessionRow();
		void BP_OnItemSelectionChanged(bool bIsSelected);
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_BPW_SessionRow(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
