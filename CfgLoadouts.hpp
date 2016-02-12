class CfgLoadouts {

    #define MEDICAL_MODE_BASIC 1
    #define MEDICAL_MODE_ADVANCED 2

    MEDICAL_MODE = MEDICAL_MODE_ADVANCED;

    class MEDICAL_BASIC {
        class STANDARD {
            items[] = {"ACE_fieldDressing:3","ACE_morphine"};
        };
        class LEADER {
            items[] = {"ACE_fieldDressing:4","ACE_morphine"};
        };
        class MEDIC {
            items[] = {"ACE_fieldDressing:31","ACE_epinephrine:8","ACE_bloodIV:2","ACE_morphine:14"};
        };
        class VEHICLE {
            items[] = {"ACE_fieldDressing:12","ACE_morphine:4"};
        };
    };

    class MEDICAL_ADVANCED {
        class STANDARD {
            items[] = {"ACE_fieldDressing:3","ACE_elasticBandage:3","ACE_packingBandage:3","ACE_morphine","ACE_epinephrine","ACE_tourniquet:2"};
        };
        class LEADER {
            items[] = {"ACE_fieldDressing:4","ACE_elasticBandage:4","ACE_packingBandage:4","ACE_morphine","ACE_epinephrine","ACE_tourniquet:2"};
        };
        class MEDIC {
            items[] = {"ACE_fieldDressing:15","ACE_elasticBandage:20","ACE_packingBandage:20","ACE_atropine:12","ACE_morphine:8","ACE_epinephrine:8","ACE_salineIV_500:4","ACE_personalAidKit"};
        };
        class VEHICLE: MEDIC {};
    };

    // -------------- //
    // --- BLUFOR --- //
    // -------------- //

    class BLUFOR_NATO { //@nothing
        #include "Loadouts\customFactions\BLUFOR\NATO\bluefor_standard.hpp"
    };
    class BLUFOR_FIA {  //@nothing
        #include "Loadouts\customFactions\BLUFOR\FIA\bluefor_standard.hpp"
    };
    class BLUFOR_CDF {  //@rhs, @lop, @ibr
        #include "Loadouts\customFactions\BLUFOR\CDF\bluefor_standard.hpp"
    };
    class BLUFOR_USARMY_UCP {   //@rhs, @hlc
        #include "Loadouts\customFactions\BLUFOR\USA (Army 2014)\UCP\bluefor_standard.hpp"
    };
    class BLUFOR_USARMY_OCP {   //@rhs, @hlc
        #include "Loadouts\customFactions\BLUFOR\USA (Army 2014)\OCP\bluefor_standard.hpp"
    };
    class BLUFOR_USARMY_1959 {  //@hlc, @lop, @mnp
        #include "Loadouts\customFactions\BLUFOR\1959 US Army\bluefor_standard.hpp"
    };
    class BLUFOR_USARMY_10TH_MTN_1993 { //@rhs, @hlc, @mnp
        #include "Loadouts\customFactions\BLUFOR\1993 US Army 10th Mountain\bluefor_standard.hpp"
    };
    class BLUFOR_USARMY_DELTA_1993 {    //@hlc, @tryk,
        #include "Loadouts\customFactions\BLUFOR\1993 US Army Delta - Stealth\bluefor_standard.hpp"
    };
    class BLUFOR_USARMY_WDL_1995 {  //@rhs, @hlc, @mnp, @lop, @tryk
        #include "Loadouts\customFactions\BLUFOR\1995 US Army Woodland\bluefor_standard.hpp"
    };
    class BLUFOR_GHOST_RECON_2008 { //@rhs, @hlc, @tryk
        #include "Loadouts\customFactions\BLUFOR\2008 Ghost Recon\bluefor_standard.hpp"
    };
    class BLUFOR_IDF_2010 { //@rhs, @hlc, @mnp
        #include "Loadouts\customFactions\BLUFOR\2010 Israeli Defense Force\bluefor_standard.hpp"
    };
    class BLUFOR_BW_1 { //@cup, @rhs, @hlc, @mnp, @tryk
        #include "Loadouts\customFactions\BLUFOR\2012 German Bundeswehr Army (NON-BW)\bluefor_standard.hpp"
    };
    class BLUFOR_BW_2 { //@hlc, @rhs, @mnp
        #include "Loadouts\customFactions\BLUFOR\2012 German Bundeswehr SF\bluefor_standard.hpp"
    };
    class BLUFOR_GERMAN_SF {    //@hlc, @mnp
        #include "Loadouts\customFactions\BLUFOR\2012 German Desert SF\bluefor_standard.hpp"
    };
    class BLUFOR_FINNISH_ARMY { //@hlc, @mnp
        #include "Loadouts\customFactions\BLUFOR\2014 Finnish Army\bluefor_standard.hpp"
    };
    class BLUFOR_SWAT { //@rhs, @hlc, @tryk
        #include "Loadouts\customFactions\BLUFOR\2015 FBI SWAT\bluefor_standard.hpp"
    };
    class BLUFOR_FRENCH_ARMY_WNT {  //@r3f, @hlc, @rhs
        #include "Loadouts\customFactions\BLUFOR\2015 French Army (Winter)\bluefor_standard.hpp"
    };
    class BLUFOR_FRENCH_ARMY_WDL {  //@r3f, @hlc, @rhs
        #include "Loadouts\customFactions\BLUFOR\2015 French Army (Woodland)\bluefor_standard.hpp"
    };
    class BLUFOR_FUTURE_ARMY_2075 { //@hlc, @tryk
        #include "Loadouts\customFactions\BLUFOR\2075 Future Army\bluefor_standard.hpp"
    };

    // ------------- //
    // --- OPFOR --- //
    // ------------- //

    class OPFOR_CSAT {  //@nothing
        #include "Loadouts\customFactions\OPFOR\CSAT\opfor_standard.hpp"
    };
    class OPFOR_VDV_EMR {   //@rhs
        #include "Loadouts\customFactions\OPFOR\Russia (VDV)\EMR\opfor_standard.hpp"
    };
    class OPFOR_VDV_FLORA {   //@rhs
        #include "Loadouts\customFactions\OPFOR\Russia (VDV)\Flora\opfor_standard.hpp"
    };
    class OPFOR_VDV_MFLORA {   //@rhs
        #include "Loadouts\customFactions\OPFOR\Russia (VDV)\Mountain Flora\opfor_standard.hpp"
    };
    class OPFOR_SLA {   //@rhs, @ibr, @hlc, @lop
        #include "Loadouts\customFactions\OPFOR\SLA\opfor_standard.hpp"
    };
    class OPFOR_SOVIET_DESERT { //@rhs, @hlc, @lop, @mnp
        #include "Loadouts\customFactions\OPFOR\1980 Soviet Desert\opfor_standard.hpp"
    };
    class OPFOR_RUSSIAN_AIR_ASSAULT {   //@rhs, @hlc, @mnp, @lop
        #include "Loadouts\customFactions\OPFOR\1990 Russian Air-Assault\opfor_standard.hpp"
    };
    class OPFOR_PLA {   //@rhs, @mnp
        #include "Loadouts\customFactions\OPFOR\2012 PLA China\opfor_standard.hpp"
    };
    class OPFOR_SYRIAN_ARMY {   //@rhs, @tryk
        #include "Loadouts\customFactions\OPFOR\2013 SAA Syrian Army\opfor_standard.hpp"
    };

    // -------------- //
    // --- INDFOR --- //
    // -------------- //

    class INDFOR_AAF {  //@nothing
        #include "Loadouts\customFactions\INDEPENDENT\AAF\indfor_standard.hpp"
    };
    class INDFOR_GREEK_INS {    //@hlc, @rhs, @tryk
        #include "Loadouts\customFactions\INDEPENDENT\2015 Greek Insurgents\indfor_standard.hpp"
    };
    class INDFOR_AFGHAN_MILITIA {   //@rhs, @ibr, @lop, @hlc
        #include "Loadouts\customFactions\INDEPENDENT\Afghan Militia\indfor_standard.hpp"
    };
    class INDFOR_AFRICAN_MILITIA {  //@rhs, @ibr, @hlc, @lop
        #include "Loadouts\customFactions\INDEPENDENT\African Militia\indfor_standard.hpp"
    };
    class INDFOR_PMC {  //@rhs
        #include "Loadouts\customFactions\INDEPENDENT\Contractors\indfor_standard.hpp"
    };
    class INDFOR_INS {  //@rhs, @ibr, @hlc
        #include "Loadouts\customFactions\INDEPENDENT\Insurgents\indfor_standard.hpp"
    };
    class INDFOR_PLA {  //@mnp
        #include "Loadouts\customFactions\INDEPENDENT\People's Liberation Army (Modern)\indfor_standard.hpp"
    };
};