#pragma once

// Generate on Thu Mar 06 18:31:30 2025

/*</> These sdk were generated by the MONSTER tool
contact: @EspSAFE </>*/

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class bp_plugin.bp_pluginBPLibrary
// 0x0000 (0x0020 - 0x0020)
class Ubp_pluginBPLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class bp_plugin.bp_pluginBPLibrary");
		return pStaticClass;
	}


	static void bp_pluginSendEvent(const struct FString& jsonEventCmd);
	static int bp_pluginRequestInstallWidget(int wigetType, const struct FString& authInfo);
	static float bp_pluginLaunchMeemoFunction(const struct FString& Param);
	static bool bp_pluginIsInForeground();
	static int bp_pluginGetInstalledWidgetType();
};


}

