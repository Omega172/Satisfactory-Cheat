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
	 * WidgetBlueprintGeneratedClass BPW_CreatureIndicator.BPW_CreatureIndicator_C
	 * Size -> 0x0069 (FullSize[0x02E9] - InheritedSize[0x0280])
	 */
	class UBPW_CreatureIndicator_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBPW_WorldObjectHUDIndicator_C*                      BPW_WorldObjectHUDIndicator;                             // 0x0288(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TMap<class AActor*, class UBPW_CreatureIndicator_Object_C*> mCreatures;                                              // 0x0290(0x0050) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, ContainsInstancedReference
		class AFGCharacterPlayer*                                  mCharacterPlayer;                                        // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		bool                                                       mShowIndicators;                                         // 0x02E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnCreatureStateChanged(const struct FFGActorPlayerPerceptionInfo& perceptionInfo, ECreatureState NewState);
		void OnCreatureRemoved(const struct FFGActorPlayerPerceptionInfo& perceptionInfo);
		void OnCreatureAdded(const struct FFGActorPlayerPerceptionInfo& perceptionInfo);
		void Construct();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void OnShowCreatureIndicatorUpdated(const class FString& updatedCvar);
		void ExecuteUbergraph_BPW_CreatureIndicator(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
