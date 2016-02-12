//Author:
//Description: BLUFOR (NATO) Standard
// ====================================================================================

class blu_f {

	// Here we're creating definitions for weapons and magazines that are called later.

	//Rifle
    #define WEST_RIFLE "rhs_weap_m16a4_carryhandle"
    #define WEST_RIFLE_MAG "rhs_mag_30Rnd_556x45_Mk318_Stanag:8","30Rnd_556x45_Stanag_Tracer_Red:2"

	//GL Rifle
    #define WEST_GLRIFLE "rhs_weap_m4_m203"
    #define WEST_GLRIFLE_MAG "rhs_mag_30Rnd_556x45_Mk318_Stanag:8","30Rnd_556x45_Stanag_Tracer_Red:2"
    #define WEST_GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:6","1Rnd_SmokeGreen_Grenade_shell:4","1Rnd_SmokeRed_Grenade_shell:5"
    #define WEST_GLRIFLE_MAG_FLARE "UGL_FlareRed_F:3","UGL_FlareGreen_F:3"

	//Carbine
    #define WEST_CARBINE "rhs_weap_m4_carryhandle"
    #define WEST_CARBINE_MAG "rhs_mag_30Rnd_556x45_Mk318_Stanag:8","30Rnd_556x45_Stanag_Tracer_Red:2"

	//Diver
	#define SDAR "arifle_SDAR_F"
	#define SDAR_MAG "20Rnd_556x45_UW_mag:6"

    // AR
    #define WEST_AR "hlc_smg_mp5a3"
    #define WEST_AR_MAG "hlc_30Rnd_9x19_B_MP5:8"
    #define WEST_AR_MAG2 "hlc_30Rnd_9x19_GD_MP5:2"

	// AT - CT N/A

	// MMG
    #define WEST_MMG "hlc_rifle_honeybadger"
    #define WEST_MMG_MAG "29rnd_300BLK_STANAG:8","29rnd_300BLK_STANAG_T:2"

	// MAT - CT N/A

	// SAM - CT/NA

	// Sniper Rifle
    #define WEST_SNIPER "rhs_weap_sr25"
    #define WEST_SNIPER_MAG "rhsusf_20Rnd_762x51_m118_special_Mag:8"

   // Spotter Rifle
    #define WEST_SPOTTER "rhs_weap_sr25_ec"
    #define WEST_SPOTTER_MAG "rhsusf_20Rnd_762x51_m118_special_Mag:8"

	// SMG
    #define WEST_SMG "hlc_smg_mp5k_PDW"
    #define WEST_SMG_MAG "hlc_30Rnd_9x19_B_MP5:6"

   // Pistol
    #define WEST_PISTOL "hgun_ACPC2_F"
    #define WEST_PISTOL_MAG "9Rnd_45ACP_Mag:4"

	// Grenades, Smoke and Frag
	#define WEST_GRENADE "rhs_mag_mk84:2"
	#define WEST_SMOKE_WHITE "SmokeShell:2"
	#define WEST_SMOKE_GREEN "SmokeShellGreen"
	#define WEST_SMOKE_RED "SmokeShellRed"


// ====================================================================================

    class Car {
        TransportMagazines[] = {WEST_RIFLE_MAG,WEST_RIFLE_MAG,WEST_CARBINE_MAG,WEST_AR_MAG,WEST_AR_MAG,WEST_GLRIFLE_MAG_HE,WEST_AT_MAG};
        TransportItems[] = {"ACE_fieldDressing:12","ACE_morphine:4"};
    };

    class Tank {
        TransportMagazines[] = {WEST_RIFLE_MAG,WEST_RIFLE_MAG,WEST_CARBINE_MAG,WEST_AR_MAG,WEST_AR_MAG,WEST_GLRIFLE_MAG_HE,WEST_AT_MAG};
        TransportItems[] = {"ACE_fieldDressing:12","ACE_morphine:4"};
    };

    class Helicopter {
        TransportMagazines[] = {WEST_RIFLE_MAG,WEST_RIFLE_MAG,WEST_CARBINE_MAG,WEST_AR_MAG,WEST_AR_MAG,WEST_GLRIFLE_MAG_HE};
        TransportItems[] = {"ACE_fieldDressing:12","ACE_morphine:4"};
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
        uniform[] = {"TRYK_U_B_OD_BLK_2","TRYK_U_B_OD_BLK","TRYK_U_pad_hood_odBK"};  /// randomized
        vest[] = {"TRYK_V_IOTV_BLK","TRYK_V_PlateCarrier_blk","TRYK_V_ArmorVest_Delta2","TRYK_V_Bulletproof_BLK"}; /// randomized
        headgear[] = {"TRYK_H_PASGT_BLK","TRYK_H_PASGT_OD","TRYK_H_TACEARMUFF_H"}; /// randomized
        backpack[] = {"B_AssaultPack_blk","TRYK_B_Kitbag_blk"}; /// randomized
        backpackItems[] = {"ACE_fieldDressing:3","ACE_morphine","ACE_IR_Strobe_item"};
        weapons[] = {WEST_RIFLE}; /// randomized
        launchers[] = {}; /// randomized
        handguns[] = {}; /// randomized
        magazines[] = {WEST_RIFLE_MAG,WEST_GRENADE,WEST_SMOKE_WHITE};
        items[] = {"ACRE_PRC343"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","NVGoggles","TRYK_kio_balaclava_ESS"};
        attachments[] = {"rhsusf_acc_compm4","acc_flashlight"};
    };

    class B_officer_F: B_Soldier_F {// CO and DC
        weapons[] = {WEST_GLRIFLE};
        vest[] = {"TRYK_V_IOTV_BLK","TRYK_V_PlateCarrier_blk","TRYK_V_ArmorVest_Delta2","TRYK_V_Bulletproof_BLK"}; /// randomized
        headgear[] = {"TRYK_H_PASGT_BLK","TRYK_H_PASGT_OD","TRYK_H_TACEARMUFF_H"}; /// randomized
        magazines[] = {WEST_GLRIFLE_MAG,WEST_GLRIFLE_MAG_HE,WEST_GLRIFLE_MAG_SMOKE,WEST_GLRIFLE_MAG_FLARE,WEST_PISTOL_MAG,WEST_GRENADE,WEST_SMOKE_WHITE,WEST_SMOKE_GREEN};
        handguns[] = {WEST_PISTOL}; /// randomized
        backpackItems[] += {"ACE_key_west", "ACRE_PRC117F"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","NVGoggles","ItemGPS","ACE_Vector","TRYK_kio_balaclava_ESS"};
        items[] = {"ACE_MapTools","ACRE_PRC148"};
    };

    class B_Soldier_SL_F: B_Officer_F {// SL
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","NVGoggles","ItemGPS","Binocular","TRYK_kio_balaclava_ESS"};
        items[] = {"ACE_MapTools","ACRE_PRC148", "ACRE_PRC343"};
        backpackItems[] = {"ACE_fieldDressing:4","ACE_morphine","ACE_IR_Strobe_item"};
    };

    class B_soldier_UAV_F: B_Soldier_F {
        backpack[] = {"TRYK_B_Carryall_blk"}; /// randomized
        linkedItems[] += {"B_uavterminal","TRYK_kio_balaclava_ESS"};
    };

	class B_medic_F: B_Soldier_F {// Medic
        vest[] = {"TRYK_V_IOTV_BLK","TRYK_V_PlateCarrier_blk","TRYK_V_ArmorVest_Delta2","TRYK_V_Bulletproof_BLK"}; /// randomized
        weapons[] = {WEST_CARBINE};
        magazines[] = {WEST_CARBINE_MAG,WEST_SMOKE_WHITE};
        backpackItems[] = {"ACE_fieldDressing:31","ACE_epinephrine:8","ACE_bloodIV:2","ACE_morphine:14"};
    };

// ====================================================================================
// Grunt Infantry

    class B_Soldier_TL_F: B_Soldier_F {// FTL
        weapons[] = {WEST_GLRIFLE};
        headgear[] = {"TRYK_H_PASGT_BLK","TRYK_H_PASGT_OD","TRYK_H_TACEARMUFF_H"}; /// randomized
        magazines[] = {WEST_GLRIFLE_MAG,WEST_GLRIFLE_MAG_HE,WEST_GLRIFLE_MAG_SMOKE,WEST_GLRIFLE_MAG_FLARE,WEST_SMOKE_WHITE,WEST_GRENADE,WEST_SMOKE_WHITE,WEST_GRENADE,WEST_SMOKE_WHITE};
        backpackItems[] += {"ACE_key_west"};
        linkedItems[] += {"ItemGPS","Binocular","TRYK_kio_balaclava_ESS"};
    };

    class B_Soldier_AR_F: B_Soldier_F {// AR
        vest[] = {"TRYK_V_IOTV_BLK","TRYK_V_PlateCarrier_blk","TRYK_V_ArmorVest_Delta2","TRYK_V_Bulletproof_BLK"}; /// randomized
        weapons[] = {WEST_AR};
        magazines[] = {WEST_AR_MAG,WEST_PISTOL_MAG,WEST_GRENADE,WEST_SMOKE_WHITE};
        handguns[] = {WEST_PISTOL}; /// randomized
    };

    class B_Soldier_AAR_F: B_Soldier_F {// AAR
        backpackItems[] += {WEST_AR_MAG2};
        attachments[] = {"optic_MRCO"};
        linkedItems[] += {"Binocular","TRYK_kio_balaclava_ESS"};
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
        attachments[] = {"muzzle_HBADGER","acc_flashlight","optic_MRCO"};
    };

    class B_support_AMG_F: B_Soldier_F {// MMG Spotter/Ammo Bearer
        backpackItems[] += {WEST_MMG_MAG};
        linkedItems[] += {"ACE_Vector","TRYK_kio_balaclava_ESS"};
        items[] += {"ACRE_PRC148"};
    };

    class B_soldier_AT_F: B_Soldier_F {// MAT Gunner
        weapons[] = {WEST_CARBINE};
        magazines[] = {WEST_CARBINE_MAG,WEST_GRENADE,WEST_SMOKE_WHITE};
        launchers[] = {WEST_MAT}; /// randomized
        items[] = {"ACE_fieldDressing:3","ACE_morphine","ACRE_PRC148"};
        backpackItems[] = {WEST_MAT_MAG};
    };

    class B_Soldier_AAT_F: B_Soldier_F {// MAT Spotter/Ammo Bearer
        backpackItems[] = {WEST_MAT_MAG};
        linkedItems[] += {"ACE_Vector","TRYK_kio_balaclava_ESS"};
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
        items[] = {"ACE_fieldDressing:3","ACE_morphine"};
        backpack[] = {"B_Mortar_01_weapon_F"}; /// randomized
    };

    class B_support_AMort_F: B_Soldier_F {// Assistant Mortar
        backpack[] = {"B_Mortar_01_support_F"}; /// randomized
        linkedItems[] += {"ACE_Vector","TRYK_kio_balaclava_ESS"};
        items[] = {"ACE_fieldDressing:3","ACE_morphine","ACRE_PRC148"};
    };

    class B_spotter_F {// Spotter
        uniform[] = {"TRYK_U_B_PCUHsW3nh"};  /// randomized
        vest[] = {"TRYK_V_Sheriff_BA_TB"}; /// randomized
        headgear[] = {"TRYK_H_TACEARMUFF_H"}; /// randomized
        weapons[] = {WEST_SPOTTER}; /// randomized
        magazines[] = {WEST_SPOTTER_MAG,WEST_SMOKE_WHITE,WEST_GRENADE};
        items[] = {"ACE_fieldDressing:3","ACE_morphine", "ACRE_PRC343", "ACRE_PRC148"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS","LaserDesignator","TRYK_kio_balaclava_ESS"};
        attachments[] = {"rhsusf_acc_ACOG","acc_pointer_IR"};
    };

    class B_sniper_F {// Sniper
        uniform[] = {"TRYK_U_B_PCUHsW3"};  /// randomized
        vest[] = {"TRYK_V_Sheriff_BA_TB"}; /// randomized
        headgear[] = {"TRYK_H_TACEARMUFF_H"}; /// randomized
        weapons[] = {WEST_SNIPER}; /// randomized
        magazines[] = {WEST_SNIPER_MAG,WEST_SMOKE_WHITE,WEST_GRENADE};
        items[] = {"ACE_fieldDressing:3","ACE_morphine", "ACRE_PRC343"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS","TRYK_kio_balaclava_ESS"};
        attachments[] = {"optic_LRPS","acc_pointer_IR"};
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
        items[] = {"ACE_fieldDressing:3","ACE_morphine","ACRE_PRC148"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemGPS","NVgoggles"};
    };

    class B_helicrew_F: B_Helipilot_F { // Pilot

    };

    class B_Pilot_F: B_Helipilot_F { // Pilot
        uniform[] = {"U_B_PilotCoveralls"};  /// randomized
        headgear[] = {"H_PilotHelmetFighter_B"}; /// randomized
    };

    class B_crew_F {// Crew
        uniform[] = {"U_B_CombatUniform_mcam"};  // randomized
        vest[] = {"V_TacVest_blk"}; // randomized
        headgear[] = {"H_Watchcap_camo"}; /// randomized
        backpack[] = {"B_Carryall_mcamo"};
        weapons[] = {WEST_CARBINE}; /// randomized
        magazines[] = {WEST_CARBINE_MAG,WEST_SMOKE_WHITE};
        items[] = {"ACE_fieldDressing:3","ACE_morphine"};
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