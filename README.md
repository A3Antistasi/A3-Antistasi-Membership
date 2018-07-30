# Antistasi Server Member List Addon

This addon is meant to be an 'easy' way to manage the member list at Antistasi servers.
It also comes with a feature for members to perform a server restart (it executes the #missions command).

## How to add new members

Edit MemberList.hpp file. Only "uid" attribute is required inside classes. Every class name must be unique, or ARMA will crash at startup.

## Specify your server password

If you want the 'Members can do a mission restart' feature to work you must also specify the server password in the .hpp file. It's not the server password used to #login, but a password specified as serverCommandPassword in your server.cfg.

## How to build it

1. Install ARMA 3 Tools from Steam.
### Build with the .bat file
2. Edit the build.bat file: you must specify the location of your AddonBuilder.exe. Launch the file and the addon's .pbo should appear in @AntistasiServerMembers/Addons folder of the repository folder.
### ... or build with Addon Builder manually
2. Launch ARMA 3 Addon Builder in ARMA 3 tools.
3. In Options specify these files in 'List of files to copy directly': `*.p3d;*.paa;*.sqf;*.cpp;*.hpp`
4 Specify `AntistasiServerMembers\AntistasiServerMembers` as addon source directory.
5. Specify `AntistasiServerMembers\@AntistasiServerMembers\Addons` as destination directory.
6. `AntistasiServerMembers\@AntistasiServerMembers` is the folder with your addon. Load it as server-side addon at your dedicated server with this server parameter: `-serverMod=@AntistasiServerMembers;`. Clients don't need to load it.
