// All things marked F3 come from F3 code. All things marked otherwise come from that source.
// ====================================================================================

// F3 - Disable Saving and Auto Saving
// Credits: Please see the F3 online manual (http://www.ferstaberinde.com/f3/en/)

enableSaving [false, false];

// ====================================================================================

// F3 - Mute Orders and Reports
// Credits: Please see the F3 online manual (http://www.ferstaberinde.com/f3/en/)

enableSentences false;

// ====================================================================================

// F3 - MapClick Teleport
// Credits: Please see the F3 online manual (http://www.ferstaberinde.com/f3/en/)

// f_var_mapClickTeleport_Uses = 0;					// How often the teleport action can be used. 0 = infinite usage.
// f_var_mapClickTeleport_TimeLimit = 0; 			// If higher than 0 the action will be removed after the given time.
// f_var_mapClickTeleport_GroupTeleport = false; 	// False: everyone can teleport. True: Only group leaders can teleport and will move their entire group.
// f_var_mapClickTeleport_Units = [];				// Restrict map click teleport to these units
// f_var_mapClickTeleport_Height = 0;				// If > 0 map click teleport will act as a HALO drop and automatically assign parachutes to units
// [] execVM "f\mapClickTeleport\f_mapClickTeleportAction.sqf";

// ====================================================================================

// F3 - Briefing
[] call F_fnc_showBriefing;
[] call F_fnc_showOrbatNotes;

// ====================================================================================

// F3 - Buddy Team Colours
[] call F_fnc_setTeamColours;

// ====================================================================================

// F3 - F3 Common Local Variables
// Credits: Please see the F3 online manual (http://www.ferstaberinde.com/f3/en/)
// WARNING: DO NOT DISABLE THIS COMPONENT
if(isServer) then {
	f_script_setLocalVars = [] execVM "f\common\f_setLocalVars.sqf";
};

// ====================================================================================

// F3 - Automatic Body Removal
// Credits: Please see the F3 online manual (http://www.ferstaberinde.com/f3/en/)

// f_var_removeBodyDelay = 180;
// f_var_removeBodyDistance = 500;
// f_var_doNotRemoveBodies = [];
// [] execVM "f\removeBody\f_addRemoveBodyEH.sqf";

// ====================================================================================

// F3 - Dynamic View Distance
// Credits: Please see the F3 online manual (http://www.ferstaberinde.com/f3/en/)

// f_var_viewDistance_default = 1250;
// f_var_viewDistance_tank = 2000;
// f_var_viewDistance_car = 2000;
// f_var_viewDistance_rotaryWing = 2500;
// f_var_viewDistance_fixedWing = 5000;
// f_var_viewDistance_crewOnly = true;
// [] execVM "f\dynamicViewDistance\f_setViewDistanceLoop.sqf";

// ====================================================================================

// F3 - Casualties Cap
// Credits: Please see the F3 online manual (http://www.ferstaberinde.com/f3/en/)

// [[GroupName or SIDE],100,1] execVM "f\casualtiesCap\f_CasualtiesCapCheck.sqf";
// [[GroupName or SIDE],100,{code}] execVM "f\casualtiesCap\f_CasualtiesCapCheck.sqf";

// BLUFOR > NATO
// [BLUFOR,100,1] execVM "f\casualtiesCap\f_CasualtiesCapCheck.sqf";

// OPFOR > CSAT
// [OPFOR,100,1] execVM "f\casualtiesCap\f_CasualtiesCapCheck.sqf";

// INDEPENDENT > AAF
// [INDEPENDENT,100,1] execVM "f\casualtiesCap\f_CasualtiesCapCheck.sqf";

// ====================================================================================

// F3 - Assign Gear AI
// Credits: Please see the F3 online manual (http://www.ferstaberinde.com/f3/en/)

// [] execVM "f\assignGear\f_assignGear_AI.sqf";

// ====================================================================================

// F3 - Group E&E Check
// Credits: Please see the F3 online manual (http://www.ferstaberinde.com/f3/en/)

// [side,ObjectName or "MarkerName",100,1] execVM "f\EandEcheck\f_EandECheckLoop.sqf";
// [["Grp1","Grp2"],ObjectName or "MarkerName",100,1] execVM "f\EandEcheck\f_EandECheckLoop.sqf";

// ====================================================================================

// F3 - JIP setup
// Credits: Please see the F3 online manual (http://www.ferstaberinde.com/f3/en/)

//f_var_JIP_FirstMenu = false;		// Do players connecting for the first time get the JIP menu? - This only works in missions with respawn.
//f_var_JIP_RemoveCorpse = false;		// Remove the old corpse of respawning players?
//f_var_JIP_GearMenu = true;			// Can JIP/respawned players select their own gear? False will use gear assigned by F3 Gear Component if possible

// ====================================================================================

// F3 - Radio Systems Support
// Credits: Please see the F3 online manual (http://www.ferstaberinde.com/f3/en/)

[] execVM "f\radios\radio_init.sqf";

// ====================================================================================

// BWMF: Group and FTL Markers
[] call F_Markers_fnc_playerInit;

// ====================================================================================

// BWMF - Mission Timer/Safe Start
// Credits: Pabst

if (!isNil "PABST_fnc_safeStart") then {[] spawn PABST_fnc_safeStart;};

// ====================================================================================

/*
// _wolfenswan - flashlight addition and NVG removal on AI

{
    private ["_unit"];
    _unit = _x;

    // Only run where the unit is local, it isn't a player and doesn't have a flashlight
    if (local _unit && !isplayer _unit && !("acc_flashlight" in primaryWeaponItems _unit)) then {

    // Remove laser if equipped
    if ("acc_pointer_IR" in primaryWeaponItems _unit) then {_x removePrimaryWeaponItem "acc_pointer_IR"};
    _unit addPrimaryWeaponItem "acc_flashlight";    // Add flashlight

        // Removes NVGs from unit
        {
            if (_x in assigneditems _unit) exitWith {_unit unlinkItem _x};
        } forEach ["NVGoggles_OPFOR","NVGoggles_INDEP","NVGoggles"];
    };

    // Forces flashlights on
    // _unit enablegunlights "forceOn";
} forEach allUnits;
*/

// ====================================================================================
// ==========================================
// ====================
// ========
// ===
//				//		//		/////////
//				//		//		//
//				//////////		//
//				//		//		/////////
// ====================================================================================
// BWMF: DAC Debug Params
// This doesn't even call HC. DAC on-server doesn't call HC any more. This is just for DAC setup. It should be investigated in the future to make sure DAC units are going in the correct places, rather than a HC server.

[] call F_DAC_fnc_setupDacParams;

// ====================================================================================
// ====================================================================================
// eulerfoiler - HC Round-Robin Load Balancing
// This automatically carries over units and data from Zeus or main spawn. DAC spawn works as well.
// This is currently in use. DAC HC is not in use, it should be turned off.
 
//execVM "f\headlessclient\passToHCs.sqf";

// ====================================================================================
