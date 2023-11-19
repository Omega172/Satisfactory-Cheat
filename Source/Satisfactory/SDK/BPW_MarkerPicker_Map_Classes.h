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
	 * WidgetBlueprintGeneratedClass BPW_MarkerPicker_Map.BPW_MarkerPicker_Map_C
	 * Size -> 0x00A0 (FullSize[0x0320] - InheritedSize[0x0280])
	 */
	class UBPW_MarkerPicker_Map_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UHorizontalBox*                                      mButtonContainer;                                        // 0x0288(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    mCurrentIconID;                                          // 0x0290(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_M7M7[0x4];                                   // 0x0294(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnStampSelected;                                         // 0x0298(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnClearSelection;                                        // 0x02A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnNewMarkerSelected;                                     // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       mNewMarkerSelected;                                      // 0x02C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JRP9[0x7];                                   // 0x02C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class URichTextBlock*                                      mMarkerAmount;                                           // 0x02D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class UBPW_MapAreaPainter_ColorPicker_C*                   mColorPicker;                                            // 0x02D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnSwatchSelected;                                        // 0x02E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnPainterBrushSizeChanged;                               // 0x02F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnStampHovered;                                          // 0x0300(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnStampUnhovered;                                        // 0x0310(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void OnIconUnhovered(int32_t IconID);
		void OnIconHovered(int32_t IconID);
		void OnBrushSizeChanged(double Size);
		void OnSwatchDeselected();
		void OnSwatchClicked(int32_t Index);
		void SetMarkerAmount();
		void SelectButtonAfterID(bool mIsNewMarker, bool mIsSwatch);
		void OnNewMarkerButtonClicked();
		void OnIconClicked(int32_t IconID);
		void CreateIcons();
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void OnMapMarkerAdded(int32_t markerIndex);
		void OnMapMarkerRemoved(int32_t markerIndex);
		void Destruct();
		void ExecuteUbergraph_BPW_MarkerPicker_Map(int32_t EntryPoint);
		void OnStampUnhovered__DelegateSignature(int32_t IconID);
		void OnStampHovered__DelegateSignature(int32_t IconID);
		void OnPainterBrushSizeChanged__DelegateSignature(double Size);
		void OnSwatchSelected__DelegateSignature(int32_t ColorIndex);
		void OnNewMarkerSelected__DelegateSignature();
		void OnClearSelection__DelegateSignature();
		void OnStampSelected__DelegateSignature(int32_t IconID);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
