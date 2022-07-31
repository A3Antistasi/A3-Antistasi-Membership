/*
Returns the list of UIDs in the external member list.
Author: Sparker 14.07.2018
*/

// Load data from the array
private _memberUIDs = getArray (configFile >> "AntistasiServerMembers" >> "MembersArray" >> "uidArray");

// Load data from the classes
private _memberClasses = "true" configClasses (configFile >> "AntistasiServerMembers" >> "MembersClasses");
{_memberUIDs pushBackUnique (getText (_x >> "uid"))} forEach _memberClasses;

// Return
_memberUIDs arrayIntersect _memberUIDs //return unique values only
