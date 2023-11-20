﻿#pragma once

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
	 * Class PropertyPath.PropertyPathTestObject
	 * Size -> 0x0128 (FullSize[0x0150] - InheritedSize[0x0028])
	 */
	class UPropertyPathTestObject : public UObject
	{
	public:
		bool                                                       Bool;                                                    // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPropertyPathTestEnum                                      EnumOne;                                                 // 0x0029(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPropertyPathTestEnum                                      EnumTwo;                                                 // 0x002A(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPropertyPathTestEnum                                      EnumThree;                                               // 0x002B(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPropertyPathTestEnum                                      EnumFour;                                                // 0x002C(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3C1W[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Integer;                                                 // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RI4O[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              String;                                                  // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float;                                                   // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JCH9[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPropertyPathTestStruct                             Struct;                                                  // 0x0050(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FPropertyPathTestStruct                             StructRef;                                               // 0x00A0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FPropertyPathTestStruct                             StructConstRef;                                          // 0x00F0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		class UPropertyPathTestObject*                             InnerObject;                                             // 0x0140(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W6KD[0x8];                                   // 0x0148(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetStructRef(const struct FPropertyPathTestStruct& InStruct);
		void SetStructConstRef(const struct FPropertyPathTestStruct& InStruct);
		void SetStruct(const struct FPropertyPathTestStruct& InStruct);
		void SetFloat(float InFloat);
		struct FPropertyPathTestStruct GetStructRef();
		struct FPropertyPathTestStruct GetStructConstRef();
		struct FPropertyPathTestStruct GetStruct();
		float GetFloat();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
