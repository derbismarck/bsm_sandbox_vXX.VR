//Author:
//Description: BLUFOR (NATO) Standard
// ====================================================================================

class blu_f {

	// Here we're creating definitions for weapons and magazines that are called later.


	//Rifle
    #define WEST_RIFLE "R3F_Famas_G2"
    #define WEST_RIFLE_MAG "30Rnd_556x45_Stanag:7","30Rnd_556x45_Stanag_Tracer_Red:4"

	//GL Rifle
    #define WEST_GLRIFLE "R3F_Famas_G2"
    #define WEST_GLRIFLE_MAG "30Rnd_556x45_Stanag:7","30Rnd_556x45_Stanag_Tracer_Red:4"
    #define WEST_GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:0","1Rnd_SmokeGreen_Grenade_shell:0","1Rnd_SmokeRed_Grenade_shell:0"
    #define WEST_GLRIFLE_MAG_HE "1Rnd_HE_Grenade_shell:0"
    #define WEST_GLRIFLE_MAG_FLARE "UGL_FlareRed_F:0","UGL_FlareWhite_F:0"

	//Carbine
    #define WEST_CARBINE "R3F_Famas_G2"
    #define WEST_CARBINE_MAG "30Rnd_556x45_Stanag:7","30Rnd_556x45_Stanag_Tracer_Red:4"

	//Diver
	#define SDAR "arifle_SDAR_F"
	#define SDAR_MAG "20Rnd_556x45_UW_mag:6"

    // AR
    #define WEST_AR "hlc_lmg_minimi"
    #define WEST_AR_MAG "hlc_200rnd_556x45_M_SAW:2"
    #define WEST_AR_MAG2 "hlc_200rnd_556x45_M_SAW:2"

	// AT
    #define WEST_AT "rhs_weap_M136"
    #define WEST_AT_MAG "rhs_m136_mag"

	// MMG
    #define WEST_MMG "MMG_02_black_F"
    #define WEST_MMG_MAG "130Rnd_338_Mag:5"

	// MAT
    #define WEST_MAT "launch_B_Titan_short_F"
    #define WEST_MAT_MAG "Titan_AT:3"

	// SAM
    #define WEST_SAM "launch_B_Titan_F"
    #define WEST_SAM_MAG "Titan_AA:2"

	// Sniper Rifle
    #define WEST_SNIPER "srifle_DMR_02_F"
    #define WEST_SNIPER_MAG "10Rnd_338_Mag:8"

   // Spotter Rifle
    #define WEST_SPOTTER "arifle_MX_F"
    #define WEST_SPOTTER_MAG "30Rnd_65x39_caseless_mag:8"

	// SMG
    #define WEST_SMG "arifle_MXC_F"
    #define WEST_SMG_MAG "30Rnd_65x39_caseless_mag:6"

   // Pistol
    #define WEST_PISTOL "rhsusf_weap_glock17g4"
    #define WEST_PISTOL_MAG "rhsusf_mag_17Rnd_9x19_JHP:4"

	// Grenades, Smoke and Frag
	#define WEST_GRENADE "BWA3_DM51A1:2"
	#define WEST_SMOKE_WHITE "BWA3_DM25:2"
	#define WEST_SMOKE_GREEN "SmokeShellGreen"
	#define WEST_SMOKE_RED "SmokeShellRed"


// ====================================================================================

    class Car {
        TransportMagazines[] = {WEST_RIFLE_MAG,WEST_RIFLE_MAG,WEST_CARBINE_MAG,WEST_AR_MAG,WEST_AR_MAG,WEST_GLRIFLE_MAG_HE,WEST_AT_MAG};
        TransportItems[] = {"MEDICAL_VEHICLE"};
    };

    class Tank {
        TransportMagazines[] = {WEST_RIFLE_MAG,WEST_RIFLE_MAG,WEST_CARBINE_MAG,WEST_AR_MAG,WEST_AR_MAG,WEST_GLRIFLE_MAG_HE,WEST_AT_MAG};
        TransportItems[] = {"MEDICAL_VEHICLE"};
    };

    class Helicopter {
        TransportMagazines[] = {WEST_RIFLE_MAG,WEST_RIFLE_MAG,WEST_CARBINE_MAG,WEST_AR_MAG,WEST_AR_MAG,WEST_GLRIFLE_MAG_HE};
        TransportItems[] = {"MEDICAL_VEHICLE"};
        TransportBackpack[] = {"B_Parachute:4"};
    };

    class Plane {
        TransportMagazines[] = {};
        TransportBackpack[] = {"B_Parachute:2"};
    };

    class Ship_F {
        TransportMagazines[] = {};
    };

// ====================================================================================
// Leadership INF and Groupies

    class B_Soldier_F {// rifleman
        uniform[] = {"R3F_uniform_apso","R3F_uniform_f1"};  /// randomized
        vest[] = {"R3F_veste_ce300"}; /// randomized
        headgear[] = {"R3F_casque_spectra","R3F_beret_para"}; /// randomized
        backpack[] = {"R3F_sac_moyen_CE"}; /// randomized
        backpackItems[] = {"MEDICAL_STANDARD","ACE_IR_Strobe_item"};
        weapons[] = {WEST_RIFLE}; /// randomized
        launchers[] = {}; /// randomized
        handguns[] = {}; /// randomized
        magazines[] = {WEST_RIFLE_MAG,WEST_GRENADE,WEST_SMOKE_WHITE};
        items[] = {"ACRE_PRC343"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
    };

    class B_officer_F: B_Soldier_F {// CO and DC
        weapons[] = {WEST_GLRIFLE};
        vest[] = {"R3F_veste_ce300"}; /// randomized
        headgear[] = {"R3F_casque_spectra","R3F_beret_para"}; /// randomized
        magazines[] = {WEST_GLRIFLE_MAG,WEST_GLRIFLE_MAG_HE,WEST_GLRIFLE_MAG_SMOKE,WEST_GLRIFLE_MAG_FLARE,WEST_PISTOL_MAG,WEST_GRENADE,WEST_SMOKE_WHITE,WEST_SMOKE_GREEN};
        handguns[] = {WEST_PISTOL}; /// randomized
        backpackItems[] += {"ACE_key_west", "ACRE_PRC117F"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS","ACE_Vector"};
        items[] = {"ACE_MapTools","ACRE_PRC148"};
    };

    class B_Soldier_SL_F: B_Officer_F {// SL
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS","Binocular"};
        items[] = {"ACE_MapTools","ACRE_PRC148", "ACRE_PRC343"};
        backpackItems[] = {"MEDICAL_LEADER","ACE_IR_Strobe_item","R3F_APAV40:8","R3F_AC58:4"};
    };

    class B_soldier_UAV_F: B_Soldier_F {
        backpack[] = {"B_Kitbag_mcamo"}; /// randomized
        linkedItems[] += {"B_uavterminal"};
    };

	class B_medic_F: B_Soldier_F {// Medic
	    uniform[] = {"R3F_uniform_f1_medic"};
        vest[] = {"R3F_veste_ce300"}; /// randomized
		backpack[] = {"R3F_sac_moyen_medic_CE"}; /// randomized
        weapons[] = {WEST_CARBINE};
        magazines[] = {WEST_CARBINE_MAG,WEST_SMOKE_WHITE};
        backpackItems[] = {"MEDICAL_MEDIC"};
    };

// ====================================================================================
// Grunt Infantry

    class B_Soldier_TL_F: B_Soldier_F {// FTL
        weapons[] = {WEST_GLRIFLE};
        headgear[] = {"R3F_casque_spectra","R3F_beret_para"}; /// randomized
        magazines[] = {WEST_GLRIFLE_MAG,WEST_GLRIFLE_MAG_HE,WEST_GLRIFLE_MAG_SMOKE,WEST_GLRIFLE_MAG_FLARE,WEST_SMOKE_WHITE,WEST_GRENADE,WEST_SMOKE_WHITE,WEST_GRENADE,WEST_SMOKE_WHITE};
        backpackItems[] += {"ACE_key_west","R3F_APAV40:8","R3F_AC58:4"};
        linkedItems[] += {"ItemGPS","Binocular","R3F_EOTECH"};
    };

    class B_Soldier_AR_F: B_Soldier_F {// AR
        vest[] = {"R3F_veste_ce300"}; /// randomized
        weapons[] = {WEST_AR};
        magazines[] = {WEST_AR_MAG,WEST_PISTOL_MAG,WEST_GRENADE,WEST_SMOKE_WHITE};
        handguns[] = {WEST_PISTOL}; /// randomized
    };

    class B_Soldier_AAR_F: B_Soldier_F {// AAR
        backpackItems[] += {WEST_AR_MAG2};
        linkedItems[] += {"Binocular","R3F_EOTECH"};
    };

    class B_Soldier_A_F: B_Soldier_AAR_F {// AAR

    };

    class B_Soldier_LAT_F: B_Soldier_F {// RAT
        weapons[] = {WEST_CARBINE};
        magazines[] = {WEST_CARBINE_MAG,WEST_AT_MAG,WEST_GRENADE,WEST_SMOKE_WHITE};
        launchers[] = {WEST_AT}; /// randomized
    };
// ====================================================================================
// Support Infantry

    class B_support_MG_F: B_Soldier_F {// MMG
        weapons[] = {WEST_MMG};
        magazines[] = {WEST_MMG_MAG,WEST_PISTOL_MAG,WEST_GRENADE,WEST_SMOKE_WHITE};
        handguns[] = {WEST_PISTOL}; /// randomized
        attachments[] = {};
    };

    class B_support_AMG_F: B_Soldier_F {// MMG Spotter/Ammo Bearer
        backpackItems[] += {WEST_MMG_MAG};
        linkedItems[] += {"ACE_Vector"};
        items[] += {"ACRE_PRC148"};
    };

    class B_soldier_AT_F: B_Soldier_F {// MAT Gunner
        weapons[] = {WEST_CARBINE};
        magazines[] = {WEST_CARBINE_MAG,WEST_GRENADE,WEST_SMOKE_WHITE};
        launchers[] = {WEST_MAT}; /// randomized
        items[] = {"MEDICAL_STANDARD","ACRE_PRC148"};
        backpackItems[] = {WEST_MAT_MAG};
    };

    class B_Soldier_AAT_F: B_Soldier_F {// MAT Spotter/Ammo Bearer
        backpackItems[] = {WEST_MAT_MAG};
        linkedItems[] += {"ACE_Vector"};
        items[] += {"ACRE_PRC148"};
    };

    class B_soldier_AA_F: B_Soldier_F {// SAM Gunner
        weapons[] = {WEST_CARBINE};
        magazines[] = {WEST_CARBINE_MAG,WEST_GRENADE,WEST_GRENADE,WEST_SMOKE_WHITE};
        launchers[] = {WEST_SAM}; /// randomized
        backpackItems[] += {WEST_SAM_MAG};
    };

    class B_Soldier_AAA_F: B_Soldier_F {// SAM Spotter/Ammo Bearer
        backpackItems[] = {WEST_SAM_MAG};
        linkedItems[] += {"ACE_Vector"};
        items[] += {"ACRE_PRC148"};
    };

    class B_support_Mort_F: B_Soldier_F {// Mortar Gunner
        weapons[] = {WEST_CARBINE};
        magazines[] = {WEST_CARBINE_MAG,WEST_GRENADE,WEST_SMOKE_WHITE};
        items[] = {"MEDICAL_STANDARD"};
        backpack[] = {"B_Mortar_01_weapon_F"}; /// randomized
    };

    class B_support_AMort_F: B_Soldier_F {// Assistant Mortar
        backpack[] = {"B_Mortar_01_support_F"}; /// randomized
        linkedItems[] += {"ACE_Vector"};
        items[] = {"MEDICAL_STANDARD","ACRE_PRC148"};
    };

    class B_spotter_F {// Spotter
        uniform[] = {"U_B_CombatUniform_mcam"};  /// randomized
        vest[] = {"V_Chestrig_rgr"}; /// randomized
        headgear[] = {"H_Watchcap_camo"}; /// randomized
        weapons[] = {WEST_SPOTTER}; /// randomized
        magazines[] = {WEST_SPOTTER_MAG,WEST_SMOKE_WHITE,WEST_GRENADE};
        items[] = {"MEDICAL_STANDARD", "ACRE_PRC343", "ACRE_PRC148"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS","LaserDesignator"};
        attachments[] = {"optic_Holosight","acc_pointer_IR"};
    };

    class B_sniper_F {// Sniper
        uniform[] = {"U_B_CombatUniform_mcam"};  /// randomized
        vest[] = {"V_Chestrig_rgr"}; /// randomized
        headgear[] = {"H_Watchcap_camo"}; /// randomized
        weapons[] = {WEST_SNIPER}; /// randomized
        magazines[] = {WEST_SNIPER_MAG,WEST_SMOKE_WHITE,WEST_GRENADE};
        items[] = {"MEDICAL_STANDARD", "ACRE_PRC343"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
        attachments[] = {"optic_SOS","acc_pointer_IR"};
    };

// ====================================================================================
// Vehicle Infantry

    class B_Helipilot_F {// Pilot
        uniform[] = {"U_B_HeliPilotCoveralls"};  /// randomized
        backpack[] = {"B_AssaultPack_blk"};
        vest[] = {"V_TacVest_blk"}; /// randomized
        headgear[] = {"H_PilotHelmetHeli_B"}; /// randomized
        weapons[] = {WEST_SMG}; /// randomized
        magazines[] = {WEST_SMG_MAG,WEST_SMOKE_WHITE};
        backpackItems[] += {"ACE_key_west","ACRE_PRC117F"};
        items[] = {"MEDICAL_STANDARD","ACRE_PRC148"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemGPS","NVgoggles"};
    };

    class B_helicrew_F: B_Helipilot_F { // Pilot

    };

    class B_Pilot_F: B_Helipilot_F { // Pilot
        uniform[] = {"U_B_PilotCoveralls"};  /// randomized
        headgear[] = {"H_PilotHelmetFighter_B"}; /// randomized
    };

    class B_crew_F {// Crew
        uniform[] = {"R3F_uniform_apso"};  // randomized
        vest[] = {"V_TacVest_blk"}; // randomized
        headgear[] = {"H_HelmetCrew_I"}; /// randomized
        backpack[] = {"B_Carryall_mcamo"};
        weapons[] = {WEST_CARBINE}; /// randomized
        magazines[] = {WEST_CARBINE_MAG,WEST_SMOKE_WHITE};
        items[] = {"MEDICAL_STANDARD"};
        backpackItems[] += {"ACE_key_west","ACRE_PRC148","ACRE_PRC117F"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
    };

    class B_soldier_repair_F: B_crew_F {// Repair Specialist
        backpack[] = {"B_Carryall_mcamo"};
        backpackItems[] = {"Toolkit"};
        vest[] = {"V_PlateCarrier1_rgr"}; /// randomized
        items[] += {"ACRE_PRC343"};
        linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch"};
    };

    class B_soldier_exp_F: B_soldier_repair_F {// Explosive Specialist
        backpack[] = {"B_Carryall_mcamo"};
        backpackItems[] = {"Toolkit","ACE_DefusalKit","ACE_Clacker","MineDetector"};
        magazines[] = {WEST_CARBINE_MAG,"DemoCharge_Remote_Mag:3","SatchelCharge_Remote_Mag:2"};
    };

    class B_engineer_F: B_soldier_repair_F {// Mine Specialist
        backpack[] = {"B_Carryall_mcamo"};
        backpackItems[] = {"Toolkit","ACE_DefusalKit","ACE_Clacker","MineDetector"};
        magazines[] = {WEST_CARBINE_MAG,"ATMine_Range_Mag:2","APERSBoundingMine_Range_Mag:2","APERSMine_Range_Mag:2"};
    };

// ====================================================================================
// Special Infantry

    class B_diver_TL_F: B_Soldier_TL_F {// Diver TL
        weapons[] = {SDAR};
		magazines[] = {SDAR_MAG,WEST_CARBINE_MAG,WEST_GRENADE,WEST_SMOKE_WHITE};
		uniform[] = {"U_B_Wetsuit"};  /// randomized
        vest[] = {"V_RebreatherB"}; /// randomized
        backpack[] = {"MNP_B_WD_CA"};
        headgear[] = {};

        backpackItems[] += {/*"U_B_CombatUniform_mcam","V_PlateCarrier1_rgr","H_HelmetB",*/WEST_CARBINE};
        linkedItems[] += {"G_B_Diving"};

    };

    class B_diver_F: B_Soldier_F {// Diver
        weapons[] = {SDAR};
		magazines[] = {SDAR_MAG,WEST_CARBINE_MAG,WEST_GRENADE,WEST_SMOKE_WHITE};
		uniform[] = {"U_B_Wetsuit"};  /// randomized
        vest[] = {"V_RebreatherB"}; /// randomized
        backpack[] = {"MNP_B_WD_CA"};
        headgear[] = {};

        backpackItems[] += {/*"U_B_CombatUniform_mcam","V_PlateCarrier1_rgr","H_HelmetB",*/WEST_CARBINE};
        linkedItems[] += {"G_B_Diving"};

    };

};
