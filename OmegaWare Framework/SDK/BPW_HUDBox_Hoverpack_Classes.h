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
	 * WidgetBlueprintGeneratedClass BPW_HUDBox_Hoverpack.BPW_HUDBox_Hoverpack_C
	 * Size -> 0x0030 (FullSize[0x02D8] - InheritedSize[0x02A8])
	 */
	class UBPW_HUDBox_Hoverpack_C : public UWidget_HUDBox_Equipment_Parent_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    NoConnectionAnim;                                        // 0x02B0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    IsHoveringAnim;                                          // 0x02B8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              mAnimIcon;                                               // 0x02C0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UProgressBar*                                        mConnectionBar;                                          // 0x02C8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FTimerHandle                                        mHoverPackActiveTimer;                                   // 0x02D0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void GetNormalizedRangeWarningDistanceThreshold(double* RangeWarningNormalizedDistanceThreshold);
		void IsHoverpackHovering(bool* IsHovering);
		void SetBrushForHoverpackState();
		void PlayIsHoveringAnimation(bool IsHovering);
		void OnConnectionStatusUpdated(bool HasConnection);
		void UnbindHoverpackEvents();
		void BindHoverpackEvents();
		void UpdateProgressBar();
		void GetCurrentConnectionNormalisedDistance(double* NormalisedConnectionDistance);
		void IsHoverpackConnected(bool* IsConnected);
		void PreConstruct(bool IsDesignTime);
		void Destruct();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void EventIsHovering(EHoverPackMode NewMode);
		void PlayWarningAnimation();
		void EventPlayRangeWarningAnimation(bool ShouldPlayWarning);
		void Construct();
		void ExecuteUbergraph_BPW_HUDBox_Hoverpack(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
