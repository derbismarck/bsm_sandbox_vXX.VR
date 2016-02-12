//Author:
//Description: INFOR (AAF) Standard

class ind_f {

	//Rifle
    #define IND_RIFLE "hlc_rifle_LAR"
    #define IND_RIFLE_MAG "hlc_20Rnd_762x51_B_fal:8","hlc_20Rnd_762x51_T_fal:2"

	//GL Rifle
    #define IND_GLRIFLE "hlc_rifle_osw_GL"
    #define IND_GLRIFLE_MAG "hlc_20Rnd_762x51_B_fal:8","hlc_20Rnd_762x51_T_fal:2"
    #define IND_GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:4","1Rnd_SmokeGreen_Grenade_shell:2","1Rnd_SmokeRed_Grenade_shell:3"
    #define IND_GLRIFLE_MAG_HE "1Rnd_HE_Grenade_shell:14"

	//Carbine
    #define IND_CARBINE "hlc_rifle_FAL5061Rail"
    #define IND_CARBINE_MAG "hlc_20Rnd_762x51_B_fal:8","hlc_20Rnd_762x51_T_fal:2"

	//Diver
	#define SDAR "arifle_SDAR_F"
	#define SDAR_MAG "20Rnd_556x45_UW_mag:6"

	// AR
    #define IND_AR "hlc_rifle_rpk74n"
    #define IND_AR_MAG "hlc_45Rnd_545x39_t_rpk:9"
    #define IND_AR_MAG2 "hlc_45Rnd_545x39_t_rpk:5"

	// AT
    #define IND_AT "rhs_weap_rpg26"
    #define IND_AT_MAG "NLAW_F:0"

	// MMG
    #define IND_MMG "hlc_lmg_minimi_railed"
    #define IND_MMG_MAG "hlc_200rnd_556x45_M_SAW:5"

	// MAT
    #define IND_MAT "rhs_weap_rpg7"
    #define IND_MAT_MAG "rhs_rpg7_PG7VL_mag:2","rhs_rpg7_PG7VL_mag:1"

	// SAM
    #define IND_SAM "rhs_weap_igla"
    #define IND_SAM_MAG "rhs_mag_9k38_rocket:2"

    // Sniper Rifle
    #define IND_SNIPER "hlc_rifle_M21"
    #define IND_SNIPER_MAG "hlc_20Rnd_762x51_B_M14:8"

	// Spotter Rifle
    #define IND_SPOTTER "srifle_DMR_06_olive_F"
    #define IND_SPOTTER_MAG "20Rnd_762x51_Mag:8"

	// SMG
    #define IND_SMG "hlc_rifle_aks74u"
    #define IND_SMG_MAG "hlc_30Rnd_545x39_t_ak:6"

	// Pistol
    #define IND_PISTOL "rhsusf_weap_glock17g4"
    #define IND_PISTOL_MAG "rhsusf_mag_17Rnd_9x19_JHP:4"

	// Grenades, Smoke and Frag
    #define IND_GRENADE "HandGrenade:2"
    #define IND_SMOKE_WHITE "SmokeShell:2"
    #define IND_SMOKE_GREEN "SmokeShellGreen"
    #define IND_SMOKE_RED "SmokeShellRed"


// ====================================================================================

    class Car {
        TransportMagazines[] = {IND_RIFLE_MAG,IND_RIFLE_MAG,IND_CARBINE_MAG,IND_AR_MAG,IND_AR_MAG,IND_GLRIFLE_MAG_HE,IND_AT_MAG};
        TransportItems[] = {"ACE_fieldDressing:12","ACE_morphine:4"};
    };

    class Tank {
        TransportMagazines[] = {IND_RIFLE_MAG,IND_RIFLE_MAG,IND_CARBINE_MAG,IND_AR_MAG,IND_AR_MAG,IND_GLRIFLE_MAG_HE,IND_AT_MAG};
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

    class I_Soldier_F {// rifleman
        uniform[] = {"U_C_Poloshirt_blue","U_C_Poloshirt_burgundy","U_C_Poloshirt_redwhite","U_C_Poloshirt_salmon","U_C_Poloshirt_stripped","U_C_Poloshirt_tricolour"};  /// randomized
        vest[] = {"V_BandollierB_rgr","LOP_V_6B23_Rifleman_OLV","V_Chestrig_rgr","MNP_Vest_Olive_1"}; /// randomized
        headgear[] = {"H_Cap_grn","H_Booniehat_oli","H_Bandanna_khk","H_Watchcap_camo","H_MilCap_gry","H_Shemag_olive","TRYK_R_CAP_OD_US","TRYK_r_cap_od_Glasses"}; /// randomized
        backpack[] = {"B_AssaultPack_rgr","B_Carryall_oli","B_FieldPack_oli","B_Kitbag_rgr","rhs_sidor","B_TacticalPack_rgr","rhs_assault_umbts"}; /// randomized
        backpackItems[] = {"ACE_fieldDressing:3","ACE_morphine","ACE_IR_Strobe_item"};
        weapons[] = {IND_RIFLE}; /// randomized
        launchers[] = {}; /// randomized
        handguns[] = {}; /// randomized
        magazines[] = {IND_RIFLE_MAG,IND_GRENADE,IND_SMOKE_WHITE};
        items[] = {"ACRE_PRC343"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","G_Bandanna_oli"};
        attachments[] = {"optic_Aco"};
    };

    class I_officer_F: I_Soldier_F {// CO and DC
        weapons[] = {IND_GLRIFLE};
        magazines[] = {IND_GLRIFLE_MAG,IND_GLRIFLE_MAG_HE,IND_GLRIFLE_MAG_SMOKE,IND_PISTOL_MAG,IND_GRENADE,IND_SMOKE_WHITE};
        handguns[] = {IND_PISTOL}; /// randomized
        linkedItems[] += {"ItemGPS","Binocular"};
        attachments[] = {"optic_Aco"};
        backpackItems[] += {"ACE_key_indp","ACRE_PRC117F"};
        items[] = {"ACE_MapTools","ACRE_PRC148"};
    };

    class I_Soldier_SL_F: I_Officer_F {// SL
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ACRE_PRC343","NVGoggles_INDEP","ItemGPS","Binocular","G_Bandanna_oli"};
        items[] = {"ACE_MapTools","ACRE_PRC148", "ACRE_PRC343"};
        backpackItems[] = {"ACE_fieldDressing:4","ACE_morphine","ACE_IR_Strobe_item"};
    };

    class I_soldier_UAV_F: I_Soldier_F {
        backpack[] = {"B_UAV_01_backpack_F"}; /// randomized
        linkedItems[] += {"I_uavterminal","G_Bandanna_oli"};
    };

	class I_medic_F: I_Soldier_F {// Medic
        weapons[] = {IND_CARBINE};
        magazines[] = {IND_CARBINE_MAG,IND_SMOKE_WHITE,IND_SMOKE_WHITE,IND_SMOKE_WHITE};
        backpack[] = {"TRYK_B_Medbag_OD"};
        backpackItems[] = {"ACE_fieldDressing:31","ACE_epinephrine:8","ACE_bloodIV:2","ACE_morphine:14"};
    };

// ====================================================================================
// Grunt Infantry

    class I_Soldier_TL_F: I_Soldier_F {// FTL
        weapons[] = {IND_GLRIFLE};
        headgear[] = {"H_Cap_grn","H_Booniehat_oli","H_Bandanna_khk","H_Watchcap_camo","H_MilCap_gry","H_Shemag_olive","TRYK_R_CAP_OD_US","TRYK_r_cap_od_Glasses"}; /// randomized
        magazines[] = {IND_GLRIFLE_MAG,IND_GLRIFLE_MAG_HE,IND_GLRIFLE_MAG_SMOKE,IND_GRENADE,IND_SMOKE_WHITE};
        linkedItems[] += {"ItemGPS","Binocular","G_Bandanna_oli"};
        backpackItems[] += {"ACE_key_indp"};
        attachments[] = {""};
    };

    class I_Soldier_AR_F: I_Soldier_F {// AR
        weapons[] = {IND_AR};
        magazines[] = {IND_AR_MAG,IND_PISTOL_MAG,IND_GRENADE,IND_SMOKE_WHITE};
        handguns[] = {IND_PISTOL}; /// randomized
        attachments[] = {""};
    };

    class I_Soldier_AAR_F: I_Soldier_F {// AAR
        backpackItems[] += {IND_AR_MAG2};
        attachments[] = {"rhsusf_acc_compm4"};
        linkeditems[] += {"Binocular","G_Bandanna_oli"};
    };

    class I_Soldier_A_F: I_Soldier_AAR_F {// AAR

    };

    class I_Soldier_LAT_F: I_Soldier_F {// RAT
        weapons[] = {IND_CARBINE};
        backpack[] = {"B_Carryall_oli","B_FieldPack_oli","B_Kitbag_rgr","B_TacticalPack_rgr","rhs_assault_umbts"}; /// randomized
        magazines[] = {IND_CARBINE_MAG,IND_AT_MAG,IND_GRENADE,IND_SMOKE_WHITE};
        launchers[] = {IND_AT}; /// randomized
        attachments[] = {"optic_Aco"};
    };

// ====================================================================================
// Support Infantry

    class I_support_MG_F: I_Soldier_F {// MMG
        weapons[] = {IND_MMG};
        backpack[] = {"B_Carryall_oli","B_FieldPack_oli","B_Kitbag_rgr","B_TacticalPack_rgr","rhs_assault_umbts"}; /// randomized
        magazines[] = {IND_MMG_MAG,IND_PISTOL_MAG,IND_GRENADE,IND_SMOKE_WHITE};
        handguns[] = {IND_PISTOL}; /// randomized
    };

    class I_support_AMG_F: I_Soldier_F {// MMG Spotter/Ammo Bearer
        backpack[] = {"B_Carryall_oli","B_FieldPack_oli","B_Kitbag_rgr","B_TacticalPack_rgr","rhs_assault_umbts"}; /// randomized
        backpackItems[] += {IND_MMG_MAG};
        linkedItems[] += {"ACE_Vector","G_Bandanna_oli"};
        items[] += {"ACRE_PRC148"};
    };

    class I_soldier_AT_F: I_Soldier_F {// MAT Gunner
        weapons[] = {IND_CARBINE};
        backpack[] = {"B_AssaultPack_dgtl"};
        magazines[] = {IND_CARBINE_MAG,IND_GRENADE,IND_SMOKE_WHITE};
        launchers[] = {IND_MAT}; /// randomized
        backpackItems[] += {IND_MAT_MAG};
    };
	
    class I_Soldier_AAT_F: I_Soldier_F {// MAT Spotter/Ammo Bearer
        backpack[] = {"B_AssaultPack_dgtl"};
        backpackItems[] += {IND_MAT_MAG};
        linkedItems[] += {"ACE_Vector","G_Bandanna_oli"};
        items[] += {"ACRE_PRC148"};
    };

    class I_soldier_AA_F: I_Soldier_F {// SAM Gunner
        weapons[] = {IND_CARBINE};
        backpack[] = {"B_AssaultPack_dgtl"};
        magazines[] = {IND_CARBINE_MAG,IND_GRENADE,IND_SMOKE_WHITE};
        launchers[] = {IND_SAM}; /// randomized
        backpackItems[] += {IND_SAM_MAG};
    };

    class I_Soldier_AAA_F: I_Soldier_F {// SAM Spotter/Ammo Bearer
        backpackItems[] = {IND_SAM_MAG};
        linkedItems[] += {"ACE_Vector","G_Bandanna_oli"};
        items[] += {"ACRE_PRC148"};
        backpack[] = {"B_AssaultPack_dgtl"};
    };

    class I_support_Mort_F: I_Soldier_F {// Mortar Gunner
        weapons[] = {IND_CARBINE};
        magazines[] = {IND_CARBINE_MAG,IND_GRENADE,IND_SMOKE_WHITE};
        items[] = {"ACE_fieldDressing:3","ACE_morphine"};
        backpack[] = {"I_Mortar_01_weapon_F"}; /// randomized
    };

    class I_support_AMort_F: I_Soldier_F {// Assistant Mortar
        backpack[] = {"I_Mortar_01_support_F"}; /// randomized
        linkedItems[] += {"ACE_Vector","G_Bandanna_oli"};
        items[] += {"ACRE_PRC148"};
    };

    class I_spotter_F {// Spotter
        uniform[] = {"U_C_Poloshirt_blue","U_C_Poloshirt_burgundy","U_C_Poloshirt_redwhite","U_C_Poloshirt_salmon","U_C_Poloshirt_stripped","U_C_Poloshirt_tricolour"};  /// randomized
        vest[] = {"V_Chestrig_oli"}; /// randomized
        headgear[] = {"H_Booniehat_khk"}; /// randomized
        backpack[] = {"B_AssaultPack_rgr"}; /// randomized
        weapons[] = {IND_SPOTTER}; /// randomized
        magazines[] = {IND_SPOTTER_MAG,IND_SMOKE_WHITE};
        items[] = {"ACE_fieldDressing:3","ACE_morphine", "ACRE_PRC343"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemGPS","LaserDesignator","G_Bandanna_oli"};
        attachments[] = {"optic_KHS_blk"};
    };

    class I_sniper_F {// Sniper
        uniform[] = {"U_C_Poloshirt_blue","U_C_Poloshirt_burgundy","U_C_Poloshirt_redwhite","U_C_Poloshirt_salmon","U_C_Poloshirt_stripped","U_C_Poloshirt_tricolour"};  /// randomized
        vest[] = {"V_Chestrig_oli"}; /// randomized
        headgear[] = {"H_Booniehat_khk"}; /// randomized
        backpack[] = {"B_AssaultPack_rgr"}; /// randomized
        weapons[] = {IND_SNIPER}; /// randomized
        magazines[] = {IND_SNIPER_MAG,IND_SMOKE_WHITE};
        items[] = {"ACE_fieldDressing:3","ACE_morphine", "ACRE_PRC343"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemGPS","G_Bandanna_oli"};
        attachments[] = {"optic_KHS_blk"};
    };

// ====================================================================================
// Vehicle Infantry

    class I_Helipilot_F {// Pilot
        uniform[] = {"TRYK_shirts_DENIM_od_Sleeve","TRYK_shirts_DENIM_ylb_Sleeve","TRYK_shirts_DENIM_BK_Sleeve","TRYK_shirts_DENIM_BWH_Sleeve"};  /// randomized
        vest[] = {"V_TacVest_blk"}; /// randomized
        headgear[] = {"rhs_tsh4_ess"}; /// randomized
        backpack[] = {"B_AssaultPack_rgr"};
        weapons[] = {IND_SMG}; /// randomized
        magazines[] = {IND_SMG_MAG,IND_SMOKE_WHITE};
        items[] = {"ACE_fieldDressing:3","ACE_morphine","ACRE_PRC148", "ACRE_PRC343"};
        backpackItems[] += {"ACE_key_indp","ACRE_PRC117F"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemGPS"};
    };

    class I_helicrew_F: I_Helipilot_F { // Pilot

    };

    class I_Pilot_F: I_Helipilot_F { // Pilot
        uniform[] = {"TRYK_shirts_DENIM_od_Sleeve","TRYK_shirts_DENIM_ylb_Sleeve","TRYK_shirts_DENIM_BK_Sleeve","TRYK_shirts_DENIM_BWH_Sleeve"};  /// randomized
        headgear[] = {"rhs_tsh4_ess"}; /// randomized
    };

    class I_crew_F {// Crew
        uniform[] = {"TRYK_shirts_DENIM_od_Sleeve","TRYK_shirts_DENIM_ylb_Sleeve","TRYK_shirts_DENIM_BK_Sleeve","TRYK_shirts_DENIM_BWH_Sleeve"};  /// randomized
        vest[] = {"V_BandollierB_oli"}; // randomized
        headgear[] = {"rhs_tsh4_ess"}; /// randomized
        weapons[] = {IND_SMG}; /// randomized
        magazines[] = {IND_SMG_MAG,IND_SMOKE_WHITE};
        backpackItems[] += {"ACE_key_indp","ACRE_PRC117F"};
        items[] = {"ACE_fieldDressing:3","ACE_morphine","ACRE_PRC148"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemGPS"};
    };

    class I_Soldier_repair_F: I_crew_F {// Repair Specialist
        backpack[] = {"B_Carryall_oli"};
        backpackItems[] = {"Toolkit","ACRE_PRC148"};
        items[] += {"ACRE_PRC343"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
    };

    class I_soldier_exp_F: I_soldier_repair_F {// Explosive Specialist
        uniform[] = {"TRYK_shirts_DENIM_od_Sleeve","TRYK_shirts_DENIM_ylb_Sleeve","TRYK_shirts_DENIM_BK_Sleeve","TRYK_shirts_DENIM_BWH_Sleeve"};  /// randomized
        backpack[] = {"B_Carryall_oli"};
        backpackItems[] = {"Toolkit","ACE_DefusalKit","ACE_Clacker","MineDetector"};
        magazines[] = {IND_CARBINE_MAG,"DemoCharge_Remote_Mag:3","SatchelCharge_Remote_Mag:2"};
    };

    class I_engineer_F: I_soldier_repair_F {// Explosive Specialist
        uniform[] = {"U_I_CombatUniform"};  /// randomized
        backpack[] = {"B_Carryall_oli"};
        backpackItems[] = {"Toolkit","ACE_DefusalKit","ACE_Clacker","MineDetector"};
        magazines[] = {IND_CARBINE_MAG,"ATMine_Range_Mag:2","APERSBoundingMine_Range_Mag:2","APERSMine_Range_Mag:2"};
    };

// ====================================================================================
// Special Infantry

    class I_diver_TL_F: I_Soldier_TL_F {// Diver TL
        weapons[] = {SDAR};
		magazines[] = {SDAR_MAG,IND_CARBINE_MAG,IND_GRENADE,IND_SMOKE_WHITE};
		uniform[] = {"U_I_Wetsuit"};  /// randomized
        vest[] = {"V_RebreatherIA"}; /// randomized
        backpack[] = {"B_Carryall_oli"};
        headgear[] = {};

        backpackItems[] += {/*"U_I_CombatUniform","V_Chestrig_oli","H_HelmetIA",*/IND_CARBINE};
        linkedItems[] += {"G_I_Diving"};

    };

    class I_diver_F: I_Soldier_F {// Diver
        weapons[] = {SDAR};
		magazines[] = {SDAR_MAG,IND_CARBINE_MAG,IND_GRENADE,IND_SMOKE_WHITE};
		uniform[] = {"U_I_Wetsuit"};  /// randomized
        vest[] = {"V_RebreatherIA"}; /// randomized
        backpack[] = {"B_Carryall_oli"};
        headgear[] = {};

        backpackItems[] += {/*"U_I_CombatUniform","V_Chestrig_oli","H_HelmetIA",*/IND_CARBINE};
        linkedItems[] += {"G_I_Diving"};

    };

};