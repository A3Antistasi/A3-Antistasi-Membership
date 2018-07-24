params ["_id", "_uid", "_name", "_jip", "_owner"];

diag_log format ["[ASMS] Info: Player connected: %1", _this];

private _permissions = [_uid] call ASMS_fnc_getUIDPermissions;

if (_uid in ([] call ASMS_fnc_getExternalMemberListUIDs)) then {
	[{
		systemChat "[Anstistasi Members Addon] Member detected";
	}] remoteExecCall ["call", _owner];
	diag_log "[ASMS] Member detected";
};

if ("restart" in _permissions) then {
	// Pass the functions to the client
	[missionNamespace, ["ASMS_fnc_createRestartDialog", ASMS_fnc_createRestartDialog]] remoteExecCall ["setVariable", _owner];
	// Add the event handler to the player and show him a message
	[{
		(findDisplay 46) displayAddEventHandler ["KeyDown", {
			params ["_control", "_key", "_shift", "_ctrl", "_alt"];
				if (_key == 41 && _shift && _ctrl && _alt) then { // Tilde key + ctrl + alt + shift
					[] call ASMS_fnc_createRestartDialog;
				};
			}];
		systemChat "You have permissions to perform a mission restart. Push ALT + SHIFT + CTRL + [~] to open the dialog.";
	}] remoteExecCall ["call", _owner];
	
};