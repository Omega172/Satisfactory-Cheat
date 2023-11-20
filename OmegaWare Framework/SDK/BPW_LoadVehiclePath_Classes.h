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
	 * WidgetBlueprintGeneratedClass BPW_LoadVehiclePath.BPW_LoadVehiclePath_C
	 * Size -> 0x00CE (FullSize[0x0421] - InheritedSize[0x0353])
	 */
	class UBPW_LoadVehiclePath_C : public UWidget_UseableBase_C
	{
	public:
		unsigned char                                              UnknownData_61C2[0x5];                                   // 0x0353(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0358(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidget_InputBox_C*                                  mAllPathsSearchbox;                                      // 0x0360(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_VehiclePathMap_C*                               mAllVehiclesMap;                                         // 0x0368(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        mAllVehiclesMapCanvas;                                   // 0x0370(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_StandardButton_C*                            mCancelButton;                                           // 0x0378(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_StandardButton_C*                            mCancelButtonAllPaths;                                   // 0x0380(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_StandardButton_C*                            mDeleteButton;                                           // 0x0388(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_StandardButton_C*                            mDeleteButtonAllPaths;                                   // 0x0390(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_StandardButton_C*                            mLoadButton;                                             // 0x0398(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            mMapAllVehicles;                                         // 0x03A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            mMapSizeBox;                                             // 0x03A8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_VehiclePaths_List_C*                            mPathlistAllVehicles;                                    // 0x03B0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_VehiclePaths_List_C*                            mPathListCurrentVehicle;                                 // 0x03B8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_InputBox_C*                                  mSearchBox;                                              // 0x03C0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_VehiclePathMap_C*                               mVehiclePathMap;                                         // 0x03C8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        mVehiclePathMapCanvas;                                   // 0x03D0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_SlidingTabs_C*                               Widget_SlidingTabs_34;                                   // 0x03D8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Window_ContentBackground_DarkMode_C*         Widget_Window_ContentBackground_DarkMode;                // 0x03E0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Window_ContentBackground_DarkMode_C*         Widget_Window_ContentBackground_DarkMode_2;              // 0x03E8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Window_DarkMode_C*                           Widget_Window_DarkMode;                                  // 0x03F0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class AFGWheeledVehicle*                                   mVehicle;                                                // 0x03F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class AFGSavedWheeledVehiclePath*                          mSelectedPath;                                           // 0x0400(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UTexture2D*                                          MapImage;                                                // 0x0408(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnClosed;                                                // 0x0410(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       mOpenedViaRecordMenu;                                    // 0x0420(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void ClearMapData(class UBPW_VehiclePathMap_C* Map, class UCanvasPanel* IconCanvas);
		void DisplayMapData(class UBPW_VehiclePathMap_C* Map, class UCanvasPanel* IconCanvas, const struct FDrivingTargetListMapData& Data, double MapSize);
		void SearchPaths(const class FString& textFilter, class UBPW_VehiclePaths_List_C* VehicleList, bool filterOnVehicleType, class AFGSavedWheeledVehiclePath* PathToIgnore);
		void Construct();
		void BndEvt__mSaveButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
		void BndEvt__mCancelButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
		void BndEvt__mSearchBox_K2Node_ComponentBoundEvent_2_OnTextChanged__DelegateSignature(const class FText& Text);
		void EventDeletePathInAllPathsList(bool ConfirmClicked);
		void BndEvt__mPathList_K2Node_ComponentBoundEvent_6_OnItemSelectionChanged__DelegateSignature(class UObject* Item, bool IsSelected);
		void BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_7_OnTabButtonClicked__DelegateSignature(int32_t ButtonIndex);
		void BndEvt__mAllPathsSearchbox_K2Node_ComponentBoundEvent_9_OnTextChanged__DelegateSignature(const class FText& Text);
		void BndEvt__mPathlistAllVehicles_K2Node_ComponentBoundEvent_3_OnItemSelectionChanged__DelegateSignature(class UObject* Item, bool IsSelected);
		void BndEvt__mDeleteButtonAllPaths_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
		void BndEvt__mCancelButtonAllPaths_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature();
		void BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_8_OnClose__DelegateSignature();
		void Destruct();
		void BndEvt__mLoadButton_1_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature();
		void EventDeletePathThisVehicleList(bool ConfirmClicked);
		void OnEscapePressed();
		void ExecuteUbergraph_BPW_LoadVehiclePath(int32_t EntryPoint);
		void OnClosed__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
