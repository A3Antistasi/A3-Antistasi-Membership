::-----------------------------------
::     Change these variables       |
::-----------------------------------

::Path to your AddonBuilder.exe
SET ADDON_BUILDER_PATH="H:\SteamLibrary\steamapps\common\Arma 3 Tools\AddonBuilder\AddonBuilder.exe"

::-----------------------------------
::   Do not change anything below   |
::-----------------------------------

::Source folder path
SET SOURCE_PATH=%CD%\AntistasiServerMembers

::Destination folder path
SET DEST_PATH=%CD%\@AntistasiServerMembers\Addons

::Path ot the file with fildcards to include into the .pbo
SET WILDCARDS_PATH=%CD%\Wildcards.txt

::Prefix for addon
SET PREFIX=x\AntistasiServerMembers\Addons\AntistasiServerMembers

::Call the Addon Builder
%ADDON_BUILDER_PATH% "%SOURCE_PATH%" "%DEST_PATH%" -clear -include="%WILDCARDS_PATH%" -prefix="%PREFIX%"

pause
