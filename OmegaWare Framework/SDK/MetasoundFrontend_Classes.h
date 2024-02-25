#pragma once

/**
 * Name: Satisfactory
 * Version: Early_Access_CL#273254
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
	 * Class MetasoundFrontend.MetasoundParameterPack
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UMetasoundParameterPack : public UObject
	{
	public:
		unsigned char                                              UnknownData_IGTR[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (PADDING)

	public:
		ESetParamResult SetTrigger(const class FName& ParameterName, bool OnlyIfExists);
		ESetParamResult SetString(const class FName& ParameterName, const class FString& InValue, bool OnlyIfExists);
		ESetParamResult SetInt(const class FName& ParameterName, int32_t InValue, bool OnlyIfExists);
		ESetParamResult SetFloat(const class FName& ParameterName, float InValue, bool OnlyIfExists);
		ESetParamResult SetBool(const class FName& ParameterName, bool InValue, bool OnlyIfExists);
		class UMetasoundParameterPack* STATIC_MakeMetasoundParameterPack();
		bool HasTrigger(const class FName& ParameterName);
		bool HasString(const class FName& ParameterName);
		bool HasInt(const class FName& ParameterName);
		bool HasFloat(const class FName& ParameterName);
		bool HasBool(const class FName& ParameterName);
		bool GetTrigger(const class FName& ParameterName, ESetParamResult* Result);
		class FString GetString(const class FName& ParameterName, ESetParamResult* Result);
		int32_t GetInt(const class FName& ParameterName, ESetParamResult* Result);
		float GetFloat(const class FName& ParameterName, ESetParamResult* Result);
		bool GetBool(const class FName& ParameterName, ESetParamResult* Result);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
