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
	 * WidgetBlueprintGeneratedClass BPW_Graph.BPW_Graph_C
	 * Size -> 0x01F8 (FullSize[0x0478] - InheritedSize[0x0280])
	 */
	class UBPW_Graph_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCanvasPanel*                                        mCanvas;                                                 // 0x0288(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      mDataPreviewContainer;                                   // 0x0290(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              mDivider;                                                // 0x0298(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TMap<class FString, struct FStruct_FloatArray>             mDataPoints;                                             // 0x02A0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<class FString, struct FGraphCurve>                    mPoints;                                                 // 0x02F0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FVector2D>                                   mMosePosition;                                           // 0x0340(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		double                                                     mHighestPoint;                                           // 0x0350(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    mNumOfPoints;                                            // 0x0358(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_T5N5[0x4];                                   // 0x035C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, class UBPW_Graph_DataPreview_C*>       mPreviewWidgets;                                         // 0x0360(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		double                                                     mGraphPadding;                                           // 0x03B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<class FString, class FText>                           mSuffixes;                                               // 0x03B8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		double                                                     mLineOffset;                                             // 0x0408(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		double                                                     mMinHighestPoint;                                        // 0x0410(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       mHideGraphOnZero;                                        // 0x0418(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KFJ0[0x7];                                   // 0x0419(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              mHighlightedGraphID;                                     // 0x0420(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		struct FLinearColor                                        mPreviewNameColor;                                       // 0x0430(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FLinearColor                                        mPreviewNameHoverColor;                                  // 0x0440(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		double                                                     mPreCalculatedHighestPoint;                              // 0x0450(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FString>                                      mHiddenGraphs;                                           // 0x0458(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		double                                                     mUnHighlightedOpacity;                                   // 0x0468(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		double                                                     mUIScaling;                                              // 0x0470(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void PositionDataPreviews();
		void OnShowGraph(const class FString& GraphID);
		void OnHideGraph(const class FString& GraphID);
		void GetDataPreviewAreaHeight(double* Height);
		void UpdateMultipleGraphs(TArray<struct FStruct_GraphData>* Graphs);
		void ConvertValueToText(double Value, const class FText& Suffix, class FText* Result);
		void OnRedrawCompleted();
		void OnDataPreviewUnhovered();
		void OnDataPreviewHovered(const class FString& GraphID);
		void RemoveGraph(const class FString& GraphID);
		void SetPreviewValueToLastPoint();
		void AddDataPreview(const class FString& GraphID);
		void RedrawGraph(bool RecalculateHighestPoint);
		struct FEventReply OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void UpdateOrAddSingleGraphLine(const class FString& GraphID, const class FText& GraphPreviewDataSuffix, const struct FLinearColor& GraphColor, TArray<double>* GraphData, bool CalculateHighestPoint);
		void OnPaint(struct FPaintContext* Context);
		void Construct();
		void OnMouseLeave(const struct FPointerEvent& MouseEvent);
		void PreConstruct(bool IsDesignTime);
		void OnScalingUpdated(const class FString& updatedCvar);
		void ExecuteUbergraph_BPW_Graph(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
