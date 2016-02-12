//Author:
//Description: BLUFOR (NATO) Standard
// ====================================================================================

class blu_f {

	// Here we're creating definitions for weapons and magazines that are called later.


	//Rifle
    #define WEST_RIFLE "rhs_weap_ak74m"
    #define WEST_RIFLE_MAG "rhs_30Rnd_545x39_AK:8","rhs_30Rnd_545x39_AK:2"

	//GL Rifle
    #define WEST_GLRIFLE "rhs_weap_ak74m_gp25"
    #define WEST_GLRIFLE_MAG "rhs_30Rnd_545x39_AK:8","rhs_30Rnd_545x39_AK:2"
    #define WEST_GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:4","1Rnd_SmokeGreen_Grenade_shell:2","1Rnd_SmokeRed_Grenade_shell:3"
    #define WEST_GLRIFLE_MAG_HE "rhs_VOG25:8"
    #define WEST_GLRIFLE_MAG_FLARE "UGL_FlareRed_F:2","UGL_FlareGreen_F:2"

	//Carbine
    #define WEST_CARBINE "rhs_weap_ak74m_folded"
    #define WEST_CARBINE_MAG "rhs_30Rnd_545x39_AK:8","rhs_30Rnd_545x39_AK:2"

    //Diver
    #define SDAR "arifle_SDAR_F"
    #define SDAR_MAG "20Rnd_556x45_UW_mag:6"

   // AR
    #define WEST_AR "rhs_weap_pkm"
    #define WEST_AR_MAG "rhs_100Rnd_762x54mmR:2"
    #define WEST_AR_MAG2 "rhs_100Rnd_762x54mmR_green:2"

	// AT
    #define WEST_AT "rhs_weap_rshg2"
    #define WEST_AT_MAG "rhs_rshg2_mag"

	// MMG
    #define WEST_MMG "rhs_weap_pkm"
    #define WEST_MMG_MAG "rhs_100Rnd_762x54mmR:5"

	// MAT
    #define WEST_MAT "rhs_weap_rpg7"
    #define WEST_MAT_MAG "ibr_pg7v:3"

	// SAM
    #define WEST_SAM "rhs_weap_igla"
    #define WEST_SAM_MAG "rhs_mag_9k38_rocket"

	// Sniper Rifle
    #define WEST_SNIPER "ibr_svd"
    #define WEST_SNIPER_MAG "10Rnd_762x54R_ibr:8"

   // Spotter Rifle
    #define WEST_SPOTTER "rhs_weap_ak74m_camo"
    #define WEST_SPOTTER_MAG "rhs_30Rnd_545x39_AK:8"

	// SMG
    #define WEST_SMG "rhs_weap_ak74m_folded"
    #define WEST_SMG_MAG "rhs_30Rnd_545x39_AK:6"

   // Pistol
    #define WEST_PISTOL "rhs_weap_pya"
    #define WEST_PISTOL_MAG "rhs_mag_9x19_17:4"

	// Grenades, Smoke and Frag
	#define WEST_GRENADE "HandGrenade:2"
	#define WEST_SMOKE_WHITE "SmokeShell:2"
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
    };

    class Plane {
        TransportMagazines[] = {};
    };

    class Ship_F {
        TransportMagazines[] = {};
    };

// ====================================================================================
// Leadership INF and Groupies

    class B_Soldier_F {// rifleman
        uniform[] = {"LOP_U_CDF_Fatigue_01"};  /// randomized
        vest[] = {"LOP_V_6B23_Rifleman_CDF","LOP_V_6B23_CDF"}; /// randomized
        headgear[] = {"LOP_H_6B27M_CDF","LOP_H_6B27M_ess_CDF"}; /// randomized
        backpack[] = {"B_AssaultPack_rgr"}; /// randomized
        backpackItems[] = {"MEDICAL_STANDARD","ACE_IR_Strobe_item"};
        weapons[] = {WEST_RIFLE}; /// randomized
        launchers[] = {}; /// randomized
        handguns[] = {}; /// randomized
        magazines[] = {WEST_RIFLE_MAG,WEST_GRENADE,WEST_SMOKE_WHITE};
        items[] = {"ACRE_PRC343"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","NVGoggles"};
        attachments[] = {};
    };

    class B_officer_F: B_Soldier_F {// CO and DC
        weapons[] = {WEST_GLRIFLE};
        vest[] = {"LOP_V_6B23_CrewOfficer_CDF"}; /// randomized
        headgear[] = {"LOP_H_Fieldcap_CDF"}; /// randomized
        magazines[] = {WEST_GLRIFLE_MAG,WEST_GLRIFLE_MAG_HE,WEST_GLRIFLE_MAG_SMOKE,WEST_GLRIFLE_MAG_FLARE,WEST_PISTOL_MAG,WEST_GRENADE,WEST_SMOKE_WHITE,WEST_SMOKE_GREEN};
        handguns[] = {WEST_PISTOL}; /// randomized
        backpackItems[] += {"ACE_key_west", "ACRE_PRC117F"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","NVGoggles","ItemGPS","ACE_Vector"};
        items[] = {"ACE_MapTools","ACRE_PRC148"};
    };

    class B_Soldier_SL_F: B_Officer_F {// SL
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","NVGoggles","ItemGPS","Binocular"};
        items[] = {"ACE_MapTools","ACRE_PRC148", "ACRE_PRC343"};
        backpackItems[] = {"MEDICAL_LEADER","ACE_IR_Strobe_item"};
    };

    class B_soldier_UAV_F: B_Soldier_F {
        backpack[] = {"B_Kitbag_rgr"}; /// randomized
        linkedItems[] += {"B_uavterminal"};
    };

	class B_medic_F: B_Soldier_F {// Medic
        vest[] = {"LOP_V_6B23_6Sh92_OLV"}; /// randomized
        weapons[] = {WEST_CARBINE};
        magazines[] = {WEST_CARBINE_MAG,WEST_SMOKE_WHITE};
        backpackItems[] = {"MEDICAL_MEDIC"};
    };

// ====================================================================================
// Grunt Infantry

    class B_Soldier_TL_F: B_Soldier_F {// FTL
        weapons[] = {WEST_GLRIFLE};
        //headgear[] = {"H_HelmetSpecB"}; /// randomized
        magazines[] = {WEST_GLRIFLE_MAG,WEST_GLRIFLE_MAG_HE,WEST_GLRIFLE_MAG_SMOKE,WEST_GLRIFLE_MAG_FLARE,WEST_SMOKE_WHITE,WEST_GRENADE,WEST_SMOKE_WHITE,WEST_GRENADE,WEST_SMOKE_WHITE};
        backpackItems[] += {"ACE_key_west"};
        linkedItems[] += {"ItemGPS","Binocular"};
    };

    class B_Soldier_AR_F: B_Soldier_F {// AR
        vest[] = {"LOP_V_6B23_6Sh92_CDF"}; /// randomized
        weapons[] = {WEST_AR};
        magazines[] = {WEST_AR_MAG,WEST_PISTOL_MAG,WEST_GRENADE,WEST_SMOKE_WHITE};
        handguns[] = {WEST_PISTOL}; /// randomized
    };

    class B_Soldier_AAR_F: B_Soldier_F {// AAR
        backpackItems[] += {WEST_AR_MAG2};
        attachments[] = {"rhs_acc_1p63"};
        linkedItems[] += {"Binocular"};
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

    class B_Support_AMG_F: B_Soldier_F {// MMG Spotter/Ammo Bearer
        backpackItems[] += {WEST_MMG_MAG};
        linkedItems[] += {"ACE_Vector"};
        items[] += {"ACRE_PRC148"};
    };

    class B_soldier_AT_F: B_Soldier_F {// MAT Gunner
        weapons[] = {WEST_CARBINE};
        magazines[] = {WEST_CARBINE_MAG,WEST_GRENADE,WEST_SMOKE_WHITE};
        launchers[] = {WEST_MAT}; /// randomized
        items[] = {"MEDICAL_STANDARD"};
        backpackItems[] = {WEST_MAT_MAG};
    };

    class B_Soldier_AAT_F: B_Soldier_F {// MAT Spotter/Ammo Bearer
        backpackItems[] = {WEST_MAT_MAG};
        linkedItems[] += {"ACE_Vector"};
        items[] = {"MEDICAL_STANDARD","ACRE_PRC148"};
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
        //uniform[] = {"U_B_CombatUniform_mcam"};  /// randomized
        //vest[] = {"V_Chestrig_rgr"}; /// randomized
        headgear[] = {"rhs_Booniehat_marpatwd"}; /// randomized
        weapons[] = {WEST_SPOTTER}; /// randomized
        magazines[] = {WEST_SPOTTER_MAG,WEST_SMOKE_WHITE,WEST_GRENADE};
        items[] = {"MEDICAL_STANDARD", "ACRE_PRC343"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS","LaserDesignator"};
        attachments[] = {"rhs_acc_1pn93_1"};
    };

    class B_sniper_F {// Sniper
        //uniform[] = {"U_B_CombatUniform_mcam"};  /// randomized
        //vest[] = {"V_Chestrig_rgr"}; /// randomized
        headgear[] = {"rhs_Booniehat_marpatwd"}; /// randomized
        weapons[] = {WEST_SNIPER}; /// randomized
        magazines[] = {WEST_SNIPER_MAG,WEST_SMOKE_WHITE,WEST_GRENADE};
        items[] = {"MEDICAL_STANDARD", "ACRE_PRC343"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
        attachments[] = {"rhs_acc_pso1m2"};
    };

// ====================================================================================
// Vehicle Infantry

    class B_Helipilot_F {// Pilot
        uniform[] = {"LOP_U_CDF_Fatigue_01"};  /// randomized
        //backpack[] = {"B_AssaultPack_blk"};
        vest[] = {"LOP_V_6Sh92_OLV"}; /// randomized
        headgear[] = {"rhs_zsh7a_mike"}; /// randomized
        weapons[] = {WEST_SMG}; /// randomized
        magazines[] = {WEST_SMG_MAG,WEST_SMOKE_WHITE};
        backpackItems[] += {"ACE_key_west","ACRE_PRC117F"};
        items[] = {"MEDICAL_STANDARD","ACRE_PRC148"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemGPS","NVgoggles"};
    };

    class B_helicrew_F: B_Helipilot_F { // Pilot

    };

    class B_Pilot_F: B_Helipilot_F { // Fixed Pilot
        uniform[] = {"U_B_PilotCoveralls"};  /// randomized
        headgear[] = {"H_PilotHelmetFighter_B"}; /// randomized
    };

    class B_crew_F {// Crew
        uniform[] = {"LOP_U_CDF_Fatigue_01"};  // randomized
        vest[] = {"LOP_V_6Sh92_CDF"}; // randomized
        headgear[] = {"rhs_tsh4"}; /// randomized
        //backpack[] = {"B_Carryall_mcamo"};
        weapons[] = {WEST_CARBINE}; /// randomized
        magazines[] = {WEST_CARBINE_MAG,WEST_SMOKE_WHITE};
        items[] = {"MEDICAL_STANDARD"};
        backpackItems[] += {"ACE_key_west","ACRE_PRC148","ACRE_PRC117F"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
    };

    class B_soldier_repair_F: B_crew_F {// Repair Specialist
        backpack[] = {"rhs_assault_umbts_engineer_empty"};
        backpackItems[] = {"Toolkit"};
        vest[] = {"LOP_V_6B23_6Sh92_CDF"}; /// randomized
        items[] += {"ACRE_PRC343"};
        linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch"};
    };

    class B_soldier_exp_F: B_soldier_repair_F {// Explosive Specialist
        //backpack[] = {"B_Carryall_mcamo"};
        backpackItems[] = {"Toolkit","ACE_DefusalKit","ACE_Clacker","MineDetector"};
        magazines[] = {WEST_CARBINE_MAG,"DemoCharge_Remote_Mag:3","SatchelCharge_Remote_Mag:2"};
    };

    class B_engineer_F: B_soldier_repair_F {// Mine Specialist
        //backpack[] = {"B_Carryall_mcamo"};
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
        backpack[] = {"B_Carryall_cbr"};
        headgear[] = {};

        backpackItems[] += {/*"U_B_CombatUniform_mcam","V_PlateCarrier1_rgr","H_HelmetB"*/WEST_CARBINE};
        linkedItems[] += {"G_B_Diving"};

    };

    class B_diver_F: B_Soldier_F {// Diver
        weapons[] = {SDAR};
        magazines[] = {SDAR_MAG,WEST_CARBINE_MAG,WEST_GRENADE,WEST_SMOKE_WHITE};
        uniform[] = {"U_B_Wetsuit"};  /// randomized
        vest[] = {"V_RebreatherB"}; /// randomized
        backpack[] = {"B_Carryall_cbr"};
        headgear[] = {};

        backpackItems[] += {/*"U_B_CombatUniform_mcam","V_PlateCarrier1_rgr","H_HelmetB"*/WEST_CARBINE};
        linkedItems[] += {"G_B_Diving"};

    };
};
