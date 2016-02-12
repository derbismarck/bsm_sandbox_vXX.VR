// F3 - F3 Folk ARPS Assign Gear
// Credits: Please see the F3 online manual (http://www.ferstaberinde.com/f3/en/)
// ====================================================================================
private ["_theVehicle", "_defaultLoadout", "_typeOf", "_loadout", "_faction", "_path"];

//For Vehicles - Pabst Mirror

_theVehicle = _this select 0;
_defaultLoadout = _this select 1;

if (isNil "f_var_medical_replacements") then {
    _medicalMode = getNumber (missionConfigFile >> "CfgLoadouts" >> "MEDICAL_MODE");
     switch (_medicalMode) do
     {
         case 1:
         {
            f_var_medical_standard = getArray (missionConfigFile >> "CfgLoadouts" >> "MEDICAL_BASIC" >> "STANDARD" >> "items");
            f_var_medical_leader = getArray (missionConfigFile >> "CfgLoadouts" >> "MEDICAL_BASIC" >> "LEADER" >> "items");
            f_var_medical_medic = getArray (missionConfigFile >> "CfgLoadouts" >> "MEDICAL_BASIC" >> "MEDIC" >> "items");
            f_var_medical_vehicle = getArray (missionConfigFile >> "CfgLoadouts" >> "MEDICAL_BASIC" >> "VEHICLE" >> "items");
         };
        case 2:
         {
            f_var_medical_standard = getArray (missionConfigFile >> "CfgLoadouts" >> "MEDICAL_ADVANCED" >> "STANDARD" >> "items");
            f_var_medical_leader = getArray (missionConfigFile >> "CfgLoadouts" >> "MEDICAL_ADVANCED" >> "LEADER" >> "items");
            f_var_medical_medic = getArray (missionConfigFile >> "CfgLoadouts" >> "MEDICAL_ADVANCED" >> "MEDIC" >> "items");
            f_var_medical_vehicle = getArray (missionConfigFile >> "CfgLoadouts" >> "MEDICAL_ADVANCED" >> "VEHICLE" >> "items");
         };
     };

    f_var_medical_replacements = [
        ["MEDICAL_STANDARD", f_var_medical_standard],
        ["MEDICAL_LEADER", f_var_medical_leader],
        ["MEDICAL_MEDIC", f_var_medical_medic],
        ["MEDICAL_VEHICLE", f_var_medical_vehicle]
    ];
};

// _theVehicle setVariable ["F_gearAssigned", true, true];
_typeOf = typeOf _theVehicle;
_loadout = _theVehicle getVariable ["F_Gear", _typeOf];
_faction = tolower (faction _theVehicle);

//Leave default gear when "F_Gear" is "Default"
if (_loadout == "Default") exitWith {};

//Clean out starting inventory when "F_Gear" is "Empty"
if (_loadout == "Empty") exitWith {
    clearWeaponCargoGlobal _theVehicle;
    clearMagazineCargoGlobal _theVehicle;
    clearItemCargoGlobal _theVehicle;
    clearBackpackCargoGlobal _theVehicle;
};

if (isNil "F_Gear_Path_Override") then {
    _path = missionConfigFile >> "CfgLoadouts" >> _faction >> _loadout;
} else {
    _path = [_faction, _loadout] call F_Gear_Path_Override;
};

if (!isClass _path) then {
    //No CfgLoadouts for exact loadout, try default
    if (!isClass _path) then {
        _vehConfigSide = [_theVehicle, true] call BIS_fnc_objectSide;
        _vehConfigFaction = switch (_vehConfigSide) do {
        case (west): {"blu_f"};
        case (east): {"rhs_faction_msv"};
        case (independent): {"ind_f"};
            default {"CIV_F"};
        };

        if (isNil "F_Gear_Path_Override") then {
            _path = missionConfigFile >> "CfgLoadouts" >> _vehConfigFaction >> _defaultLoadout;
        } else {
            _path = [_vehConfigFaction, _defaultLoadout] call F_Gear_Path_Override;
        };

        if (!isClass _path) then {
            if (_vehConfigSide == east) then {
                _vehConfigFaction = "OPF_F";
                if (isNil "F_Gear_Path_Override") then {
                    _path = missionConfigFile >> "CfgLoadouts" >> _vehConfigFaction >> _defaultLoadout;
                } else {
                    _path = [_vehConfigFaction, _defaultLoadout] call F_Gear_Path_Override;
                };
            };
        };
    };
};

if (!isClass _path) exitWith {
    // systemChat format ["No loadout found for %1 (typeOf %2) (kindOf %3)", _theVehicle, (typeof _theVehicle), _loadout];
};

//Clean out starting inventory (even if there is no class)
clearWeaponCargoGlobal _theVehicle;
clearMagazineCargoGlobal _theVehicle;
clearItemCargoGlobal _theVehicle;
clearBackpackCargoGlobal _theVehicle;

_transportMagazines = getArray(_path >> "TransportMagazines");
_transportItems = getArray(_path >> "TransportItems");
_transportWeapons = getArray(_path >> "TransportWeapons");
_transportBackpack = getArray(_path >> "TransportBackpack");

if (isNil "F_Gear_Replace_MedicalItems") then {
    F_Gear_Replace_MedicalItems = {
        _array = _this;
        {
            _itemsEntry = _x;
            _itemsIndex = _forEachIndex;
            {
                if ((_x select 0) == _itemsEntry) then {
                    _array deleteAt _itemsIndex;
                    {_array pushBack _x} forEach (_x select 1);
                };
            } forEach f_var_medical_replacements;
        } forEach _array;
    };
};

_transportItems call F_Gear_Replace_MedicalItems;

// ====================================================================================
// _transportMagazines
{
    _arr = [_x,":"] call BIS_fnc_splitString;
    _classname = _arr select 0;
    _amt = 1;
    if(count _arr > 1) then
    {
        _amt = parseNumber (_arr select 1);
    };
    _theVehicle addMagazineCargoGlobal [_classname,_amt];
} foreach _transportMagazines;
// ====================================================================================
// _transportItems
{
    _arr = [_x,":"] call BIS_fnc_splitString;
    _classname = _arr select 0;
    _amt = 1;
    if(count _arr > 1) then
    {
        _amt = parseNumber (_arr select 1);
    };
    _theVehicle addItemCargoGlobal [_classname,_amt];
} foreach _transportItems;
// ====================================================================================
// _transportItems
{
    _arr = [_x,":"] call BIS_fnc_splitString;
    _classname = _arr select 0;
    _amt = 1;
    if(count _arr > 1) then
    {
        _amt = parseNumber (_arr select 1);
    };
    _theVehicle addWeaponCargoGlobal [_classname,_amt];
} foreach _transportWeapons;
// ====================================================================================
// _transportBackpack
{
    _arr = [_x,":"] call BIS_fnc_splitString;
    _classname = _arr select 0;
    _amt = 1;
    if(count _arr > 1) then
    {
        _amt = parseNumber (_arr select 1);
    };
    _theVehicle addBackpackCargoGlobal [_classname,_amt];
} foreach _transportBackpack;

_theVehicle setvariable ["f_var_assignGear_done", true,true];