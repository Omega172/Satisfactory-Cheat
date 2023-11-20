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
	 * WidgetBlueprintGeneratedClass Widget_UI_ParticleManager.Widget_UI_ParticleManager_C
	 * Size -> 0x0024 (FullSize[0x02A4] - InheritedSize[0x0280])
	 */
	class UWidget_UI_ParticleManager_C : public UUserWidget
	{
	public:
		class UCanvasPanel*                                        mParticleContainer;                                      // 0x0280(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<struct FCursorParticleStruct>                       mParticleWidgets;                                        // 0x0288(0x0010) Edit, BlueprintVisible, ContainsInstancedReference, ExposeOnSpawn
		class UWidget*                                             mLastClickedParticleWidget;                              // 0x0298(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		int32_t                                                    mParticleWidgetClickCount;                               // 0x02A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void CreateParticle();
		struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
