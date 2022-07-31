#include "BIS_AddonInfo.hpp"
class CfgPatches
{
    class AntistasiServerMembers
    {
        // Meta information for editor
        name = "Antistasi Member List";
        author = "Sparker";
        url = "http://a3antistasi.enjin.com";

        // Minimum compatible version. When the game's version is lower, pop-up warning will appear when launching the game.
        requiredVersion = 1.60;
        // Required addons, used for setting load order.
        // When any of the addons is missing, pop-up warning will appear when launching the game.
        requiredAddons[] = {};
        // List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content unlocking.
        units[] = {};
        // List of weapons (CfgWeapons classes) contained in the addon.
        weapons[] = {};
    };
};
#if __has_include("\A3AMembers.hpp")
#include "\A3AMembers.hpp"
#else
#include "MemberList.hpp"
#endif

class CfgFunctions
{
   class ASMS
   {
       class fnc
       {
           file = "\x\AntistasiServerMembers\Addons\AntistasiServerMembers";
           class getExternalMemberListUIDs {};
            class createRestartDialog {};
            class moderatorRestart {};
            class init { preInit = 1; };
            class onPlayerConnected {};
            class getUIDPermissions {};
       };
   };
};
