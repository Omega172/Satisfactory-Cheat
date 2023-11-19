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
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct Struct_PSS_WorldAmbienceOnIndex.Struct_PSS_WorldAmbienceOnIndex
	 * Size -> 0x0090
	 */
	struct FStruct_PSS_WorldAmbienceOnIndex
	{
	public:
		class FName                                                FoliageName_2_BFF8DFD2423811C43BF06DA56CE41ED1;          // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                Category_35_52A1DC1845810366311583811EFAC6FD;            // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                SubCategory_37_2E4C2B0B4326D28E79B3A98A5D98D671;         // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ProbabilityofSpawning01_29_26CD257E4815717DADD85383AE0DBAFF; // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsAmbientLife_20_23945E08458C07425E178C899853CDE3;       // 0x001C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JJ6K[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UNiagaraSystem*                                      FoliageDayNiagaraFar_57_C87A26FF4E72A07D67AA269974BD1C60; // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class UNiagaraSystem*                                      FoliageDayNiagaraClose_58_062848484846963EAFD043B0574F4386; // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class UNiagaraSystem*                                      FoliageNightNiagaraFar_64_2C8CC1C54A1856AB9CAD6C81CEBD5059; // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class UNiagaraSystem*                                      FoliageNightNiagaraClose_66_5195B08E4B654D8D35416B987B6F1B29; // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     FoliageDayCascadeFar_59_37956AAE4821276848DE008A3C2D20FD; // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     FoliageDayCascadeClose_60_91175259420E168BEEE3678FD4362944; // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     FoliageNightCascadeFar_69_CCA4DE6E45801F7F74BB89B2230B5D6F; // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     FoliageNightCascadeClose_71_A69260174E12F142AAFD6EA03614094F; // 0x0058(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class UAkAudioEvent*                                       FoliageDayAkEvent_61_EF81BF46448BB9EA4583A5B4F123B956;   // 0x0060(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class UAkAudioEvent*                                       FoliageNightAkEvent_74_C5BC1C4841E6CB2CE31F84A81A9A9CF2; // 0x0068(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		bool                                                       ShouldUseFlipBookIndex_28_78F96FBA4197847F581AAEBB2E334308; // 0x0070(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NP0S[0x3];                                   // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    FlipBookIndex_14_3DC0D43045754231E592F49D3DB0CD72;       // 0x0074(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShouldAdjustSize_50_B931709A47614BA5EC27518AADF6D319;    // 0x0078(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YBLX[0x3];                                   // 0x0079(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Size_53_7909CA9344454E6BCC13089BFF5761DF;                // 0x007C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseSpawnRate_85_1134265F4BEEC826E4498F824B916CAB;        // 0x0080(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_EVAT[0x3];                                   // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SpawnRate_82_86E2C0534180CBE0E4F853B5780EF3A7;           // 0x0084(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UsingWindDirection_56_4420D1824B0B75B150780085780A35AF;  // 0x0088(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShouldSpawnInAir_76_D98585E1430A5BC494A5CD94E2F4E79B;    // 0x0089(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FKGY[0x2];                                   // 0x008A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HeightAboveMesh_79_10B031254DFE43E7AD9D268D1FF282B8;     // 0x008C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
