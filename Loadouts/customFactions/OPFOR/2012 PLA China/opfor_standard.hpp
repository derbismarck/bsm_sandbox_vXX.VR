//Author: 
//Description: OPFOR (CSAT) Standard

class opf_f {
    //Rifle
    #define EAST_RIFLE "arifle_Katiba_F"
    #define EAST_RIFLE_MAG "30Rnd_65x39_caseless_green:8","30Rnd_65x39_caseless_green_mag_Tracer:2"
    
	//GL Rifle
    #define EAST_GLRIFLE "arifle_Katiba_GL_F"
    #define EAST_GLRIFLE_MAG "30Rnd_65x39_caseless_green:8","30Rnd_65x39_caseless_green_mag_Tracer:2"
    #define EAST_GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:4","1Rnd_SmokeGreen_Grenade_shell:1","1Rnd_SmokeRed_Grenade_shell:2"
    #define EAST_GLRIFLE_MAG_HE "1Rnd_HE_Grenade_shell:10"
    #define EAST_GLRIFLE_MAG_FLARE "UGL_FlareWhite_F:2","UGL_FlareRed_F:2","UGL_FlareWhite_F:2","UGL_FlareGreen_F:2"
    
	//Carbine
    #define EAST_CARBINE "arifle_Katiba_C_F"
    #define EAST_CARBINE_MAG "30Rnd_65x39_caseless_green:8","30Rnd_65x39_caseless_green_mag_Tracer:2"
    
	// AR
    #define EAST_AR "rhs_weap_pkp"
    #define EAST_AR_MAG "rhs_100Rnd_762x54mmR:5"
    #define EAST_AR_MAG2 "rhs_100Rnd_762x54mmR_green:4"
    
	// AT
    #define EAST_AT "rhs_weap_rpg26"
    #define EAST_AT_MAG "rhs_rpg26_mag"
    
	// MMG
    #define EAST_MMG "rhs_weap_pkp"
    #define EAST_MMG_MAG "rhs_100Rnd_762x54mmR:5"
    
	// MAT
    #define EAST_MAT "launch_O_Titan_short_F"
    #define EAST_MAT_MAG "Titan_AT:2","Titan_AP:2"
    
	// SAM
    #define EAST_SAM "launch_O_Titan_F"
    #define EAST_SAM_MAG "Titan_AA:2"
    
	// Sniper Rifle
    #define EAST_SNIPER "srifle_DMR_01_F"
    #define EAST_SNIPER_MAG "10Rnd_762x54_Mag:8"
    
	// Spotter Rifle
    #define EAST_SPOTTER "arifle_Katiba_F"
    #define EAST_SPOTTER_MAG "30Rnd_65x39_caseless_green:8"
    
	// SMG
    #define EAST_SMG "SMG_02_F"
    #define EAST_SMG_MAG "30Rnd_9x21_Mag:5"
    
	// Pistol
    #define EAST_PISTOL "hgun_Rook40_F"
    #define EAST_PISTOL_MAG "16Rnd_9x21_Mag:4"

    // Grenades, Smoke and Frag
    #define EAST_GRENADE "HandGrenade:2"
    #define EAST_SMOKE_WHITE "SmokeShell:2"
    #define EAST_SMOKE_GREEN "SmokeShellGreen"
    #define EAST_SMOKE_RED "SmokeShellRed"


// ====================================================================================

    class Car {
        TransportMagazines[] = {EAST_RIFLE_MAG,EAST_RIFLE_MAG,EAST_CARBINE_MAG,EAST_AR_MAG,EAST_AR_MAG,EAST_GLRIFLE_MAG_HE,EAST_AT_MAG};
        TransportItems[] = {"ACE_fieldDressing:12","ACE_morphine:4"};
    };
	
    class Tank {
        TransportMagazines[] = {EAST_RIFLE_MAG,EAST_RIFLE_MAG,EAST_CARBINE_MAG,EAST_AR_MAG,EAST_AR_MAG,EAST_GLRIFLE_MAG_HE,EAST_AT_MAG};
        TransportItems[] = {"ACE_fieldDressing:12","ACE_morphine:4"};
    };
	
    class Helicopter {
        TransportMagazines[] = {};
    };
	
    class Plane {
        TransportMagazines[] = {};
    };
	
    class Ship_F {
        TransportMagazines[] = {};
    };
	
// ====================================================================================
// Leadership INF and Groupies

    class O_Soldier_F { // rifleman
        uniform[] = {"MNP_CombatUniform_China"};  /// randomized
        vest[] = {"MNP_Vest_ChinaH_T2"}; /// randomized
        headgear[] = {"MNP_Helmet_China","MNP_Boonie_CN_T"}; /// randomized
        backpack[] = {"MNP_B_FieldPack_PLA_Basic"}; /// randomized
        backpackItems[] = {"ACE_fieldDressing:3","ACE_morphine","ACE_IR_Strobe_item"};
        weapons[] = {EAST_RIFLE}; /// randomized
        launchers[] = {}; /// randomized
        handguns[] = {}; /// randomized
        magazines[] = {EAST_RIFLE_MAG,EAST_GRENADE,EAST_SMOKE_WHITE};
        items[] = {"ACRE_PRC343"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
        attachments[] = {"optic_Hamr"};
    };
	
    class O_officer_F: O_Soldier_F { // CO and DC
        weapons[] = {EAST_GLRIFLE};
        //vest[] = {"rhsusf_iotv_ocp_Grenadier"}; /// randomized
        //headgear[] = {"rhsusf_ach_helmet_headset_ocp"}; /// randomized
        magazines[] = {EAST_GLRIFLE_MAG,EAST_GLRIFLE_MAG_HE,EAST_GLRIFLE_MAG_FLARE,EAST_GLRIFLE_MAG_SMOKE,EAST_PISTOL_MAG,EAST_GRENADE,EAST_SMOKE_WHITE};
        handguns[] = {EAST_PISTOL}; /// randomized
        linkedItems[] += {"ItemGPS","Binocular"};
        backpackItems[] += {"ACE_key_east","ACRE_PRC117F"};
        items[] = {"ACE_MapTools", "ACRE_PRC148"};
    };
	
    class O_soldier_SL_F: O_Officer_F { // SL
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ACRE_PRC343","NVGoggles","ItemGPS","Binocular"};
        items[] = {"ACE_MapTools","ACRE_PRC148", "ACRE_PRC343"};
        backpackItems[] = {"ACE_fieldDressing:4","ACE_morphine","ACE_IR_Strobe_item"};
    };
	
    class O_soldier_UAV_F: O_Soldier_F {
        backpack[] = {"O_UAV_01_backpack_F"}; /// randomized
        linkedItems[] += {"O_uavterminal"};
    };

	class O_medic_F: O_Soldier_F {// Medic
        //vest[] = {"rhsusf_iotv_ocp_medic"}; /// randomized
        weapons[] = {EAST_CARBINE};
        magazines[] = {EAST_CARBINE_MAG,EAST_SMOKE_WHITE};
        backpackItems[] = {"ACE_fieldDressing:31","ACE_epinephrine:8","ACE_bloodIV:2","ACE_morphine:14"};
    };
	
// ====================================================================================
// Grunt Infantry	
	
    class O_Soldier_TL_F: O_Soldier_F {// FTL
        weapons[] = {EAST_GLRIFLE};
        //headgear[] = {"rhsusf_ach_helmet_headset_ess_ocp"}; /// randomized
        magazines[] = {EAST_GLRIFLE_MAG,EAST_GLRIFLE_MAG_HE,EAST_GLRIFLE_MAG_SMOKE,EAST_GRENADE,EAST_SMOKE_WHITE};
        linkedItems[] += {"ItemGPS","Binocular"};
        backpackItems[] += {"ACE_key_east"};
    };
	
    class O_soldier_GL_F: O_Soldier_TL_F { // SL
    
	};
	
    class O_Soldier_AR_F: O_Soldier_F {// AR
        //vest[] = {"rhsusf_iotv_ocp_SAW"}; /// randomized
        weapons[] = {EAST_AR};
        magazines[] = {EAST_AR_MAG,EAST_PISTOL_MAG,EAST_GRENADE,EAST_SMOKE_WHITE};
        handguns[] = {EAST_PISTOL}; /// randomized
        attachments[] = {};
    };
	
    class O_Soldier_AAR_F: O_Soldier_F {// AAR
        backpackItems[] += {EAST_AR_MAG2};
        attachments[] = {"optic_Hamr"};
        linkedItems[] += {"Binocular"};
    };

    class O_Soldier_A_F: O_Soldier_AAR_F {// AAR

    };
	
    class O_Soldier_LAT_F: O_Soldier_F {// RAT
        weapons[] = {EAST_CARBINE};
        magazines[] = {EAST_CARBINE_MAG,EAST_AT_MAG,EAST_GRENADE,EAST_SMOKE_WHITE};
        launchers[] = {EAST_AT}; /// randomized
    };
	

// ====================================================================================
// Support Infantry
 	
    class O_support_MG_F: O_Soldier_F {// MMG
        weapons[] = {EAST_MMG};
        magazines[] = {EAST_MMG_MAG,EAST_PISTOL_MAG,EAST_GRENADE,EAST_SMOKE_WHITE};
        handguns[] = {EAST_PISTOL}; /// randomized		
    };
	
    class O_support_AMG_F: O_Soldier_F {// MMG Spotter/Ammo Bearer
        backpackItems[] += {EAST_MMG_MAG};
        linkedItems[] += {"ACE_Vector"};
        items[] += {"ACRE_PRC148"};		
    };
	
    class O_soldier_AT_F: O_Soldier_F {// MAT Gunner
        weapons[] = {EAST_CARBINE};
        backpack[] = {"MNP_B_FieldPack_PLA_Basic"};
        magazines[] = {EAST_CARBINE_MAG,EAST_GRENADE,EAST_SMOKE_WHITE};
        launchers[] = {EAST_MAT}; /// randomized
        backpackItems[] += {EAST_MAT_MAG};
        attachments[] = {"rhs_acc_1p63","rhs_acc_pgo7v","rhs_acc_dtk"};
    };
	
    class O_Soldier_AAT_F: O_Soldier_F {// MAT Spotter/Ammo Bearer
        backpack[] = {"MNP_B_FieldPack_PLA_Basic"};
        backpackItems[] += {EAST_MAT_MAG};
        linkedItems[] += {"ACE_Vector"};
        items[] += {"ACRE_PRC148"};	
	
    };
	
    class O_soldier_AA_F: O_Soldier_F {// SAM Gunner
        weapons[] = {EAST_CARBINE};
        magazines[] = {EAST_CARBINE_MAG,EAST_GRENADE,EAST_SMOKE_WHITE};
        launchers[] = {EAST_SAM}; /// randomized
        backpackItems[] += {EAST_SAM_MAG};
    };
	
    class O_Soldier_AAA_F: O_Soldier_F {// SAM Spotter/Ammo Bearer
        backpackItems[] += {EAST_SAM_MAG};
        linkedItems[] += {"ACE_Vector"};
        items[] += {"ACRE_PRC148"};			
    };
	
    class O_support_Mort_F: O_Soldier_F {// Mortar Gunner
        weapons[] = {EAST_CARBINE};
        magazines[] = {EAST_CARBINE_MAG,EAST_GRENADE,EAST_SMOKE_WHITE};
        items[] = {"ACE_fieldDressing:3","ACE_morphine","ACRE_PRC148"};
        backpack[] = {"O_Mortar_01_weapon_F"}; /// randomized		
    };
	
    class O_support_AMort_F: O_Soldier_F {// Assistant Mortar
        backpack[] = {"O_Mortar_01_support_F"}; /// randomized
        linkedItems[] += {"ACE_Vector"};
        items[] += {"ACRE_PRC148"};			
    };
	
    class O_spotter_F {// Spotter
        headgear[] = {"H_HelmetSpecO_ocamo"}; /// randomized
        uniform[] = {"U_O_GhillieSuit"};  /// randomized
        vest[] = {"V_Chestrig_khk"}; /// randomized
        weapons[] = {EAST_SPOTTER}; /// randomized
        magazines[] = {EAST_SPOTTER_MAG,EAST_SMOKE_WHITE};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemGPS","LaserDesignator"};
        attachments[] = {"optic_Hamr"};
        items[] += {"ACRE_PRC148"};		
    };
	
    class O_sniper_F {// Sniper
        headgear[] = {"H_HelmetSpecO_ocamo"}; /// randomized
        uniform[] = {"U_O_GhillieSuit"};  /// randomized
        vest[] = {"V_Chestrig_khk"}; /// randomized
        weapons[] = {EAST_SNIPER}; /// randomized
        magazines[] = {EAST_SNIPER_MAG,EAST_SMOKE_WHITE};
        items[] = {"ACE_fieldDressing:3","ACE_morphine", "ACRE_PRC343"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemGPS"};
        attachments[] = {"optic_Hamr"};
    };

// ====================================================================================
// Vehicle Infantry

    class O_Helipilot_F {// Pilot
        uniform[] = {"rhs_uniform_df15"};  /// randomized
        vest[] = {"V_TacVest_blk"}; /// randomized
        headgear[] = {"rhs_zsh7a_mike"}; /// randomized
        backpack[] = {"B_AssaultPack_rgr"};
        weapons[] = {EAST_SMG}; /// randomized
        magazines[] = {EAST_SMG_MAG,EAST_SMOKE_WHITE};
        items[] = {"ACE_fieldDressing:3","ACE_morphine","ACRE_PRC148"};
        backpackItems[] = {"ACRE_PRC117F"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemGPS","NVgoggles"};
        attachments[] = {};
    };

    class O_helicrew_F: O_Helipilot_F { // Pilot

    };

    class O_Pilot_F: O_Helipilot_F { // Pilot
        uniform[] = {"rhs_uniform_df15"};  /// randomized
        headgear[] = {"rhs_zsh7a_mike"}; /// randomized
    };
	
    class O_crew_F {// Crew
        headgear[] = {"H_HelmetCrew_O"}; /// randomized
        uniform[] = {"U_O_SpecopsUniform_ocamo"};  /// randomized
        vest[] = {"V_BandollierB_khk"}; /// randomized
        backpack[] = {"B_Carryall_mcamo"};
        weapons[] = {EAST_CARBINE}; /// randomized
        magazines[] = {EAST_CARBINE_MAG,EAST_SMOKE_WHITE};
        items[] = {};
        backpackItems[] = {"ACRE_PRC117F", "ACE_fieldDressing:3","ACE_morphine","ACRE_PRC148"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemGPS"};
        attachments[] = {};
    };
	
    class O_soldier_repair_F: O_crew_F {// Repair Specialist
        backpack[] = {"B_Carryall_mcamo"};
        backpackItems[] = {"Toolkit", "ACE_fieldDressing:3","ACE_morphine","ACRE_PRC148"};
        items[] = {"ACRE_PRC343"};
        vest[] = {"V_HarnessO_brn"}; /// randomized
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
        attachments[] = {};
    };
	
    class O_soldier_exp_F: O_soldier_repair_F {// Mines Specialist
        backpack[] = {"B_Carryall_mcamo"};
        backpackItems[] = {"Toolkit","ACE_DefusalKit","ACE_Clacker","MineDetector"};
        magazines[] = {EAST_CARBINE_MAG,"ATMine_Range_Mag:2","APERSBoundingMine_Range_Mag:2","APERSMine_Range_Mag:2"};
        attachments[] = {};
    };
	
    class O_engineer_F: O_soldier_repair_F {// Explosive Specialist
        backpack[] = {"B_Carryall_mcamo"};
        backpackItems[] = {"Toolkit","ACE_DefusalKit","ACE_Clacker","MineDetector"};
        magazines[] = {EAST_CARBINE_MAG,"DemoCharge_Remote_Mag:3","SatchelCharge_Remote_Mag:2"};
        attachments[] = {};
    };

// ====================================================================================
// Special Infantry

    class O_diver_TL_F: O_Soldier_TL_F {// Diver TL
        uniform[] = {"U_O_Wetsuit"};  /// randomized
        vest[] = {"V_RebreatherIR"}; /// randomized
        backpack[] = {"B_Carryall_mcamo"};
        headgear[] = {};

        backpackItems[] += {"U_O_CombatUniform_ocamo","V_HarnessO_brn","H_HelmetO_ocamo"};
        linkedItems[] += {"G_O_Diving"};

    }

    class O_diver_F: O_Soldier_F {// Diver
        uniform[] = {"U_O_Wetsuit"};  /// randomized
        vest[] = {"V_RebreatherIR"}; /// randomized
        backpack[] = {"B_Carryall_mcamo"};
        headgear[] = {};

        backpackItems[] += {"U_O_CombatUniform_ocamo","V_HarnessO_brn","H_HelmetO_ocamo"};
        linkedItems[] += {"G_O_Diving"};

    }

};
