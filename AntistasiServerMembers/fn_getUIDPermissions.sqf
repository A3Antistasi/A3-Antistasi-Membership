/*
Returns the permissions of the given UID
*/

params [ ["_uid", "", [""]] ];

private _list = [] call ASMS_fnc_getExternalMemberListUIDs;

private _return = [];
if (_uid in _list) then {
	_return = ["kick", "ban", "restart"];
};

_return