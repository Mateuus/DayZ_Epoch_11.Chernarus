if (!isDedicated) then {

//Trade
fnc_usec_selfActions =	compile preprocessFileLineNumbers "custom\compile\fn_selfactions.sqf";
player_switchModel =	compile preprocessFileLineNumbers "custom\compile\player_switchmodel.sqf";
player_lockVault =		compile preprocessFileLineNumbers "custom\compile\player_lockvault.sqf";
player_unlockVault =	compile preprocessFileLineNumbers "custom\compile\player_unlockvault.sqf";

//Snap Build Pro
player_build = compile preprocessFileLineNumbers "custom\snap_pro\player_build.sqf";
snap_build = compile preprocessFileLineNumbers "custom\snap_pro\snap_build.sqf";
dayz_spaceInterrupt = compile preprocessFileLineNumbers "custom\snap_pro\dayz_spaceInterrupt.sqf";

/*Plot*/
PlotGetFriends      = compile preprocessFileLineNumbers "plotManagement\plotGetFriends.sqf";
PlotNearbyHumans    = compile preprocessFileLineNumbers "plotManagement\plotNearbyHumans.sqf";
PlotAddFriend       = compile preprocessFileLineNumbers "plotManagement\plotAddFriend.sqf";
PlotRemoveFriend    = compile preprocessFileLineNumbers "plotManagement\plotRemoveFriend.sqf";

player_build =	compile preprocessFileLineNumbers "custom\actions\player_build.sqf";

/*Plot End*/

//GUI MENU
dayz_spaceInterrupt = compile preprocessFileLineNumbers "custom\actions\dayz_spaceInterrupt.sqf";
};