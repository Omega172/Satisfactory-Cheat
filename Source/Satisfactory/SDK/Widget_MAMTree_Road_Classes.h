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
	 * WidgetBlueprintGeneratedClass Widget_MAMTree_Road.Widget_MAMTree_Road_C
	 * Size -> 0x0058 (FullSize[0x02D8] - InheritedSize[0x0280])
	 */
	class UWidget_MAMTree_Road_C : public UUserWidget
	{
	public:
		struct FLinearColor                                        mHighlightTint;                                          // 0x0280(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FLinearColor                                        mDefaultTint;                                            // 0x0290(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		double                                                     mThickness;                                              // 0x02A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		TArray<struct FVector2D>                                   mTempRoad;                                               // 0x02A8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FMAMTree_Vector2D_Array>                     mConvertedRoadData;                                      // 0x02B8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FMAMTree_Vector2D_Array>                     mHighlightedRoadData;                                    // 0x02C8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void OnPaint(struct FPaintContext* Context);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
