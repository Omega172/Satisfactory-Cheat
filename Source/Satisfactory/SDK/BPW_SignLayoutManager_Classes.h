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
	 * WidgetBlueprintGeneratedClass BPW_SignLayoutManager.BPW_SignLayoutManager_C
	 * Size -> 0x0200 (FullSize[0x0480] - InheritedSize[0x0280])
	 */
	class UBPW_SignLayoutManager_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              mBG;                                                     // 0x0288(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UClass*                                              mSignTypeDescriptor;                                     // 0x0290(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FVector2D                                           mSizeReadOnly;                                           // 0x0298(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<class FString, class UImage*>                         mImages;                                                 // 0x02A8(0x0050) Edit, BlueprintVisible, ContainsInstancedReference, ExposeOnSpawn
		TMap<class FString, class URichTextBlock*>                 mTexts;                                                  // 0x02F8(0x0050) Edit, BlueprintVisible, ContainsInstancedReference, ExposeOnSpawn
		TArray<class UImage*>                                      mOtherColorImages;                                       // 0x0348(0x0010) Edit, BlueprintVisible, ContainsInstancedReference, ExposeOnSpawn
		TArray<class UWidget*>                                     mUsesBackgroundColor;                                    // 0x0358(0x0010) Edit, BlueprintVisible, ContainsInstancedReference, ExposeOnSpawn
		bool                                                       mIsDesignTime;                                           // 0x0368(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KA4G[0x7];                                   // 0x0369(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPrefabSignData                                     mPrefabData;                                             // 0x0370(0x00F0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FVector2D                                           mSizeDiscrepancy;                                        // 0x0460(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mSizeDiscrepancyAccountedFor;                            // 0x0470(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PX7U[0x7];                                   // 0x0471(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             InBrushImage;                                            // 0x0478(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateMaterialParameters(class UImage* ImageObject, bool mIsBackgroundObject);
		void CalculateSizeDiscrepancy();
		struct FLinearColor GetValidColor(class UWidget* InWidget, bool IsAlwaysBackground, bool UsesAuxilliary);
		void GetActiveKeys(TArray<class FString>* ImageKeys, TArray<class FString>* TextKeys);
		void UpdateColors();
		void SetColorToOtherImages();
		void SetSignPrefabData(const struct FPrefabSignData& SignPrefabData);
		void ShowBackground(bool ShowBackground);
		void SendDataToFGPrefab();
		void SetupText();
		void SetupImage();
		void SetupElementData();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_BPW_SignLayoutManager(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
