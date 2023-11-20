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
	 * WidgetBlueprintGeneratedClass BPW_WorldObjectHUDIndicator.BPW_WorldObjectHUDIndicator_C
	 * Size -> 0x00B0 (FullSize[0x0330] - InheritedSize[0x0280])
	 */
	class UBPW_WorldObjectHUDIndicator_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCanvasPanel*                                        mContainer;                                              // 0x0288(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<struct FWorldObjectHUDIndicator_Struct>             mWorldObjectData;                                        // 0x0290(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		double                                                     mMinDistance;                                            // 0x02A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mMaxDistance;                                            // 0x02A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mMinScale;                                               // 0x02B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mMaxScale;                                               // 0x02B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mCenterSizeNormalized;                                   // 0x02C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    mMaximumNumberOfSimultaneousObjects;                     // 0x02C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_UZ9U[0x4];                                   // 0x02CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UBPW_WorldObjectHUDIndicator_Object_C*, struct FVector2D> mPotentialCenterObjects;                                 // 0x02D0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class UBPW_WorldObjectHUDIndicator_Object_C*               mMostCenteredWidget;                                     // 0x0320(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		double                                                     mUIScaling;                                              // 0x0328(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetScale(const struct FVector& WorldLocation, double* Scale);
		void GetCentermostWidget();
		void GetIsInCenterArea(const struct FVector2D& PosOnScreen, const struct FVector2D& ScreenSize, bool* IsInCenterArea);
		void ScaleWidget(const struct FWorldObjectHUDIndicator_Struct& ObjectData, bool ShouldScale);
		void AddWidget(class UBPW_WorldObjectHUDIndicator_Object_C* Widget, const struct FVector& Location);
		void LerpFromStickyToLockedSidePosition(const struct FVector2D& InPosition, const struct FVector2D& ScreenSize, const struct FVector& PingPosition, double padding, struct FVector2D* OutPosition);
		double GetTargetAngleToPlayer(const struct FVector& Position);
		void CalculateStickyEdgePosition(double AngleFromCenter, const struct FVector2D& InPositionOnScreen, const struct FVector2D& ScreenSize, double padding, struct FVector2D* OutPositionOnScreen);
		void PositionWidget(const struct FWorldObjectHUDIndicator_Struct& ObjectData);
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void Construct();
		void OnScalingUpdated(const class FString& updatedCvar);
		void ExecuteUbergraph_BPW_WorldObjectHUDIndicator(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
