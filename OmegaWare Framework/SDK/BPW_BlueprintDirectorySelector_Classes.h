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
	 * WidgetBlueprintGeneratedClass BPW_BlueprintDirectorySelector.BPW_BlueprintDirectorySelector_C
	 * Size -> 0x00A0 (FullSize[0x0320] - InheritedSize[0x0280])
	 */
	class UBPW_BlueprintDirectorySelector_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBPW_BlueprintMenu_C*                                BPW_BlueprintMenu;                                       // 0x0288(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Window_DarkMode_C*                           Widget_Window_DarkMode;                                  // 0x0290(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnClose;                                                 // 0x0298(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       mDirectoryMode;                                          // 0x02A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YXTZ[0x7];                                   // 0x02A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FStruct_BlueprintDirectoryData                      mDirectoryData;                                          // 0x02B0(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       mDirectoryHasBeenSet;                                    // 0x02C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2MRP[0x7];                                   // 0x02C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlueprintRecord                                    mBlueprintRecord;                                        // 0x02D0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void MoveToDirectory();
		void SetCurrentCategoryToBlueprintRecord();
		void SetBlueprintRecord(const struct FBlueprintRecord& mBlueprintRecord);
		void PromptLeaveEditMode(bool* IsInEditMode);
		void SetDirectoryMode(bool mDirectoryMode);
		void Construct();
		void BndEvt__BPW_BlueprintSelector_Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature();
		void BndEvt__BPW_BlueprintDirectorySelector_BPW_BlueprintMenu_K2Node_ComponentBoundEvent_1_OnCloseEditModePrompt__DelegateSignature(bool StayInEditMode);
		void BndEvt__BPW_BlueprintDirectorySelector_BPW_BlueprintMenu_K2Node_ComponentBoundEvent_2_OnNewDirectoryDataUpdated__DelegateSignature(const struct FStruct_BlueprintDirectoryData& DirectoryData);
		void ExecuteUbergraph_BPW_BlueprintDirectorySelector(int32_t EntryPoint);
		void OnClose__DelegateSignature(bool DirectoryHasBeenSet, const struct FStruct_BlueprintDirectoryData& DirectoryData);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
