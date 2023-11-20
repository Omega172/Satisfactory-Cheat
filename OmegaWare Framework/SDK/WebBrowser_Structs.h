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
	 * ScriptStruct WebBrowser.WebJSCallbackBase
	 * Size -> 0x0020
	 */
	struct FWebJSCallbackBase
	{
	public:
		unsigned char                                              UnknownData_MWP3[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WebBrowser.WebJSFunction
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FWebJSFunction : public FWebJSCallbackBase
	{	};

	/**
	 * ScriptStruct WebBrowser.WebJSResponse
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FWebJSResponse : public FWebJSCallbackBase
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
