class AntistasiServerMembers
{
	// Server password for the restart command (not 'password' or 'passwordAdmin', but the 'serverCommandPassword' parameter in server.cfg)
	serverPassword = "amra";
	
	// It's just an array like we had in mList.sqf previously
	class MembersArray
	{
		uidArray[] = {
			"123",
			"456",
			"789"
			// Check the ',' after the last entry! It must be absent!
		};
	};
	
	// Alternative way to store data, should be more organized
	class MembersClasses
	{
		class member_John // Class name does not matter but it MUST be unique
		{
			uid = "123123213";
			// You can put any other data here for future use in case you need it
			// Only uid is being really used now
			name = "John";
			comment = "John is a cool guy";
		};
		
		class member_James
		{
			uid = "666";
			name = "James";
		};
	};
};