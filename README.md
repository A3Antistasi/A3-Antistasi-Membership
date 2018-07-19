# Antistasi Server Member List Addon

This addon is meant to be an 'easy' way to manage the member list at Antistasi servers.

## How to add new members

Edit MemberList.hpp file. Only "uid" attribute is required inside classes. Every class name must be unique, or ARMA will crash at startup.

## How to set it up

1. Launch ARMA 3 Addon Builder in ARMA 3 tools.
2. In Options specify these files in 'List of files to copy directly': `*.p3d;*.paa;*.sqf;*.cpp;*.hpp`
3. Specify `AntistasiServerMembers\AntistasiServerMembers` as addon source directory.
4. Specify `AntistasiServerMembers\@AntistasiServerMembers\Addons` as destination directory.
5. `AntistasiServerMembers\@AntistasiServerMembers` is the folder with your addon. Load it as server-side addon at your dedicated server with this server parameter: `-serverMod=@AntistasiServerMembers;`. Clients don't need to load it.
