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

#include "MemberList.hpp"

class CfgFunctions
{
   class ASMS
   {
	   class Functions
	   {
			tag = "ASMS";
			class getExternalMemberListUIDs
			{
			   file = "AntistasiServerMembers\fn_getExternalMemberListUIDs.sqf";
			};
			class createRestartDialog
			{
				file = "AntistasiServerMembers\fn_createRestartDialog.sqf";
			};
			class moderatorRestart
			{
				file = "AntistasiServerMembers\fn_moderatorRestart.sqf";
			};
			class init
			{
				file = "AntistasiServerMembers\fn_init.sqf";
				preInit = 1;
			};
			class onPlayerConnected
			{
				file = "AntistasiServerMembers\fn_onPlayerConnected.sqf";
			};
			class getUIDPermissions
			{
				file = "AntistasiServerMembers\fn_getUIDPermissions.sqf";
			};
	   };
   };  
};