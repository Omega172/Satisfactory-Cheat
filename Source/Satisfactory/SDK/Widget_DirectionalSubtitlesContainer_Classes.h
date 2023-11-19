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
	 * WidgetBlueprintGeneratedClass Widget_DirectionalSubtitlesContainer.Widget_DirectionalSubtitlesContainer_C
	 * Size -> 0x0058 (FullSize[0x02D8] - InheritedSize[0x0280])
	 */
	class UWidget_DirectionalSubtitlesContainer_C : public UUserWidget
	{
	public:
		class UVerticalBox*                                        mContainer;                                              // 0x0280(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TMap<class AActor*, class UWidget_DirectionalSubtitles_C*> mActiveActors;                                           // 0x0288(0x0050) Edit, BlueprintVisible, DisableEditOnTemplate, ContainsInstancedReference, ExposeOnSpawn

	public:
		void StopSubtitle(class AActor* Instigator);
		void GetFurthestActor(class AActor** Actor);
		void OnSubtitleDestruct(class UWidget_DirectionalSubtitles_C* InstigatingSubtitle);
		void CreateSubtitle(const class FText& Subtitle, class AActor* Instigator, double Duration, bool UseDuration);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
