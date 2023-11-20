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
	 * WidgetBlueprintGeneratedClass BPW_NumericEntry_Vector.BPW_NumericEntry_Vector_C
	 * Size -> 0x00A0 (FullSize[0x0320] - InheritedSize[0x0280])
	 */
	class UBPW_NumericEntry_Vector_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBPW_NumericEntry_Labeled_C*                         BPW_NumericEntry_X;                                      // 0x0288(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_NumericEntry_Labeled_C*                         BPW_NumericEntry_Y;                                      // 0x0290(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_NumericEntry_Labeled_C*                         BPW_NumericEntry_Z;                                      // 0x0298(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          LabelText;                                               // 0x02A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                Label;                                                   // 0x02A8(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		class FText                                                LabelX;                                                  // 0x02C0(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		class FText                                                LabelY;                                                  // 0x02D8(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		class FText                                                LabelZ;                                                  // 0x02F0(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		double                                                     ValueX;                                                  // 0x0308(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ValueY;                                                  // 0x0310(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ValueZ;                                                  // 0x0318(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetValuesFromVector(const struct FVector& newValues);
		void SetValuesFromRotator(const struct FRotator& newValues);
		void UpdateTextAndValues();
		void Construct();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_BPW_NumericEntry_Vector(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
