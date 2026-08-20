#define		CMD_LOW_Load	40
#define		CMD_MED_Load	60
#define		CMD_MED2_Load	80
#define		CMD_STD_Load	100
#define		CMD_STD2_Load	120
#define		CMD_HIGH_Load	200
#define		CMD_OP_Load		400

#define		TFR_5K			5000
#define		TFR_10K			10000
#define		TFR_20K			20000
#define		TFR_40K			40000
#define		TFR_60K			60000

#define		TFR_ENC_BFR		"tf_west_radio_code"
#define		TFR_ENC_OPF		"tf_east_radio_code"
#define		TFR_ENC_IND		"tf_independent_radio_code"

#define		TFR_DG_164		"anarc164_radio_dialog"
#define		TFR_DG_210		"anarc210_radio_dialog"
#define		TFR_DG_155		"anprc155_radio_dialog"
#define		TFR_DG_BUS		"bussole_radio_dialog"
#define		TFR_DG_MR3		"mr3000_radio_dialog"
#define		TFR_DG_MR6		"mr6000l_radio_dialog"
#define		TFR_DG_152		"rt1523g_radio_dialog"

#define		TFR_SB_DG		"digital_lr"
#define		TFR_SB_AB		"airborne"

class CfgPatches
{
	class Command_ReTextures_TFAR
	{
		units[]=
		{
			"CMD_B_RadioBag_01_Medic_F",
			"CMD_TFAR_anprc155_Medic"
		};
		weapons[]=
		{};
		requiredAddons[]=
		{
			"tfar_core",
			"A3_Supplies_F_Enoch_Bags"
		};
		skipWhenMissingDependencies=1;
		addonRootClass="Command_ReTextures";
	};
};

/* 
	// \z\tfar\addons\backpacks\models\
	AN/ARC-164 	= TFR_BACKPACK.p3d
	AN/ARC-210 	= TFR_BACKPACK.p3d
	AN/PRC-155 	= clf_nicecomm2.p3d
	MR-3000		= clf_nicecomm2_prc117g.p3d
	MR-6000L	= TFR_BACKPACK.p3d
	RT-152		= clf_prc117g_ap.p3d
	RT-152 BIG	= clf_nicecomm2.p3d
	
	// \Command_ReTextures\TFAR\
	Bussole 	= tf_bussole.p3d

	// \a3\Supplies_F_Enoch\Bags\
	Contact DLC	= B_RadioBag_01_F.p3d

	-------------------------------------------

	// tf_encryptionCode
		tf_independent_radio_code
		tf_west_radio_code
		tf_east_radio_code

	// tf_dialog
		anarc164_radio_dialog	--> https://i.gyazo.com/eda40ca0d80d66e0b4445cca6c099a35.png
		anarc210_radio_dialog	--> https://i.gyazo.com/46b3b9fdff62339a32681b2b19e033ad.png
		anprc155_radio_dialog	--> https://i.gyazo.com/540cf540949a1442f1a26e234580f886.png
		bussole_radio_dialog	--> https://i.gyazo.com/4a53c9792dcda857581bc6f4c049a6e1.png
		mr3000_radio_dialog		--> https://i.gyazo.com/8f9d03558c6e536e137b95c450af94f4.png
		mr6000l_radio_dialog	--> https://i.gyazo.com/4095043ee3e1551ec8d27b2b6ce69adf.png
		rt1523g_radio_dialog	--> https://i.gyazo.com/ddd9f1af8c8ae198e718a56c31cddb41.png
	
	// tf_subtype
		airborne
		digital_lr
	
	-------------------------------------------

	// Contact DLC - Radio Backpack 
	class B_RadioBag_01_base_F;
	class B_RadioBag_01_black_F: B_RadioBag_01_base_F
	{
		tf_dialog="anprc155_radio_dialog";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode="tf_independent_radio_code";
		tf_hasLRradio=1;
		tf_range=TFR_20K;
		tf_subtype="digital_lr";
	};

	-------------------------------------------
	// Adding Specific radios to Vehicles
	tf_dialog="rt1523g_radio_dialog";
	tf_hasLRRadio=1;
*/


class CfgVehicles
{
// Base Classes	
	class ReammoBox;
	class Item_Base_F;
	class Bag_Base: ReammoBox
	{
		tf_hasLRradio=0;
		tf_encryptionCode="";
		tf_range=TFR_20K;
	};
	class B_RadioBag_01_base_F: Bag_Base
	{
		tf_dialog="anprc155_radio_dialog"; // Value from TFAR mod
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;"; // Value from TFAR mod
		tf_encryptionCode="tf_independent_radio_code"; // Value from TFAR mod
		tf_hasLRradio=1; // Value from TFAR mod
		tf_range=TFR_20K; // Value from TFAR mod
		tf_subtype=TFR_SB_DG; // Value from TFAR mod
		maximumLoad=80; // Value from A3_Supplies_F_Enoch_Bags
		mass=160; // Value from A3_Supplies_F_Enoch_Bags
	};
	class TFAR_anarc164: TFAR_Bag_Base
	{
		hiddenSelections[]=
		{
			"camo"
		};
		maximumLoad=20; // Value from TFAR mod
		mass=160; // Value from TFAR mod
		tf_range=TFR_40K; // Value from TFAR mod
	}:
	class TFAR_anarc210: TFAR_Bag_Base
	{
		hiddenSelections[]=
		{
			"camo"
		};
		maximumLoad=20; // Value from TFAR mod
		mass=160; // Value from TFAR mod
		tf_range=TFR_40K; // Value from TFAR mod
	};
	class TFAR_anprc155: TFAR_Bag_Base
	{
		hiddenSelections[]=
		{
			"camo"
		};
		maximumLoad=160; // Value from TFAR mod
		mass=160; // Value from TFAR mod
		tf_range=TFR_20K; // Value from TFAR mod
	};
	class TFAR_bussole: TFAR_Bag_Base
	{
		hiddenSelections[]=
		{
			"camo"
		};
		maximumLoad=30; // Value from TFAR mod
		mass=120; // Value from TFAR mod
		tf_range=TFR_20K; // Value from TFAR mod
		model="\Command_ReTextures\TFAR\tf_bussole";
	};
	class TFAR_mr3000: TFAR_Bag_Base
	{
		hiddenSelections[]=
		{
			"camo"
		};
		maximumLoad=160; // Value from TFAR mod
		mass=160; // Value from TFAR mod
		tf_range=TFR_20K; // Value from TFAR mod
	};
	class TFAR_mr6000l: TFAR_Bag_Base
	{
		hiddenSelections[]=
		{
			"camo"
		};
		maximumLoad=20; // Value from TFAR mod
		mass=160; // Value from TFAR mod
		tf_range=TFR_40K; // Value from TFAR mod
	};
	class TFAR_rt1523g: TFAR_Bag_Base
	{
		hiddenSelections[]=
		{
			"camo"
		};
		maximumLoad=50; // Value from TFAR mod
		mass=80; // Value from TFAR mod
		tf_range=TFR_20K; // Value from TFAR mod
	};
	class TFAR_rt1523g_big: TFAR_rt1523g
	{
		hiddenSelections[]=
		{
			"camo"
		};
		maximumLoad=160; // Value from TFAR mod
		mass=160; // Value from TFAR mod
		tf_range=TFR_20K; // Value from TFAR mod
	};

// Command
	class CMD_TFAR_anprc155_Medic: TFAR_anprc155
	{
        author="Kavik";
        scope=2;
        displayname="[CMD] Medic-Lead [AN/PRC-155]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Command_Data\anprc155_Medic_co.paa"
		};
        maximumLoad=CMD_OP_Load;
		tf_dialog=TFR_DG_MR3;
        tf_encryptionCode=TFR_ENC_BFR;
        tf_range=TFR_40K;
        tf_subtype=TFR_SB_DG;
	};
	class CMD_B_RadioBag_01_Medic_F: B_RadioBag_01_base_F
	{ 
        author="Kavik";
        scope=2;
        displayname="[CMD] Medic-Lead [AN/PRC-117G]";
        hiddenSelectionsTextures[]=
        {
            "Command_ReTextures\TFAR\Command_Data\medic_radiobag1_co.paa"
        };
		maximumLoad=CMD_OP_Load;
		tf_dialog=TFR_DG_MR3;
        tf_encryptionCode=TFR_ENC_BFR;
        tf_range=TFR_40K;
        tf_subtype=TFR_SB_DG;
	};

// AN/ARC-164 (Data\anarc)
    class TFAR_anarc164_BH: TFAR_anarc164
    {
        author="FRXA";
        scope=2;
        displayname="Blue Hex [AN/PRC-164]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\anarc\anarc_BB.paa"
		};
    };
    class TFAR_anarc164_PH: TFAR_anarc164_BH
    {
        scope=2;
        displayname="Pink Hex [AN/PRC-164]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\anarc\anarc_CC.paa"
		};
    };
    class TFAR_anarc164_DH: TFAR_anarc164_BH
    {
        scope=2;
        displayname="Desert Hex [AN/PRC-164]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\anarc\anarc_D.paa"
		};
    };
    class TFAR_anarc164_FH: TFAR_anarc164_BH
    {
        scope=2;
        displayname="Field Hex [AN/PRC-164]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\anarc\anarc_FT.paa"
		};
    };
    class TFAR_anarc164_MH: TFAR_anarc164_BH
    {
        scope=2;
        displayname="Multi Hex [AN/PRC-164]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\anarc\anarc_MTP.paa"
		};
    };
    class TFAR_anarc164_WH: TFAR_anarc164_BH
    {
        scope=2;
        displayname="White Hex [AN/PRC-164]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\anarc\anarc_W.paa"
		};
    };

// AN/PRC-210 (Data\anarc)
    class TFAR_anarc210_BH: TFAR_anarc210
    {
        author="FRXA";
        scope=2;
        displayname="Blue Hex [AN/PRC-210]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\anarc\anarc_BB.paa"
		};
    };
    class TFAR_anarc210_PH: TFAR_anarc210_BH
    {
        scope=2;
        displayname="Pink Hex [AN/PRC-210]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\anarc\anarc_CC.paa"
		};
    };
    class TFAR_anarc210_DH: TFAR_anarc210_BH
    {
        scope=2;
        displayname="Desert Hex [AN/PRC-210]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\anarc\anarc_D.paa"
		};
    };
    class TFAR_anarc210_FH: TFAR_anarc210_BH
    {
        scope=2;
        displayname="Field Hex [AN/PRC-210]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\anarc\anarc_FT.paa"
		};
    };
    class TFAR_anarc210_MH: TFAR_anarc210_BH
    {
        scope=2;
        displayname="Multi Hex [AN/PRC-210]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\anarc\anarc_MTP.paa"
		};
    };
    class TFAR_anarc210_WH: TFAR_anarc210_BH
    {
        scope=2;
        displayname="White Hex [AN/PRC-210]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\anarc\anarc_W.paa"
		};
    };

// MR-6000L (Data\anarc)
    class TFAR_MR6000L_BH: TFAR_MR6000L
    {
        author="FRXA";
        scope=2;
        displayname="Blue Hex [MR-6000L]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\anarc\anarc_BB.paa"
		};
    };
    class TFAR_MR6000L_PH: TFAR_MR6000L_BH
    {
        scope=2;
        displayname="Pink Hex [MR-6000L]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\anarc\anarc_CC.paa"
		};
    };
    class TFAR_MR6000L_DH: TFAR_MR6000L_BH
    {
        scope=2;
        displayname="Desert Hex [MR-6000L]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\anarc\anarc_D.paa"
		};
    };
    class TFAR_MR6000L_FH: TFAR_MR6000L_BH
    {
        scope=2;
        displayname="Field Hex [MR-6000L]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\anarc\anarc_FT.paa"
		};
    };
    class TFAR_MR6000L_MH: TFAR_MR6000L_BH
    {
        scope=2;
        displayname="Multi Hex [MR-6000L]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\anarc\anarc_MTP.paa"
		};
    };
    class TFAR_MR6000L_WH: TFAR_MR6000L_BH
    {
        scope=2;
        displayname="White Hex [MR-6000L]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\anarc\anarc_W.paa"
		};
    };

// AN/PRC-155 (Data\clf_nicecomm)
    class TFAR_anprc155: TFAR_Bag_Base
    {
        author="FRXA";
        scope=2;
        displayname="AAF Digi [AN/PRC-155]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\clf_nicecomm\clf_nicecomm2_aff_digital_co.paa"
		};
    };
    class TFAR_anprc155_coyote: TFAR_anprc155
    {
        scope=2;
        displayname="Coyote [AN/PRC-155]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\clf_nicecomm\clf_nicecomm2_coyote_co.paa"
		};
    };
    class TFAR_anprc155_black: TFAR_anprc155
    {
        scope=2;
        displayname="Black [AN/PRC-155]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\clf_nicecomm\clf_nicecomm2_black_co.paa"
		};
    };
    class TFAR_anprc155_Multitarn: TFAR_anprc155
    {
        scope=2;
        displayname="Multitarn [AN/PRC-155]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\clf_nicecomm\clf_nicecomm2_bwmod_co.paa"
		};
    };
    class TFAR_anprc155_CSAT: TFAR_anprc155
    {
        scope=2;
        displayname="CSAT [AN/PRC-155]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\clf_nicecomm\clf_nicecomm2_csat_multi_co.paa"
		};
    };
    class TFAR_anprc155_CTRG: TFAR_anprc155
    {
        scope=2;
        displayname="CTRG [AN/PRC-155]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\clf_nicecomm\clf_nicecomm2_CTRG_co.paa"
		};
    };
    class TFAR_anprc155_CTRGalt: TFAR_anprc155
    {
        scope=2;
        displayname="CTRG alt [AN/PRC-155]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\clf_nicecomm\clf_nicecomm2_CTRG_Green_co.paa"
		};
    };
    class TFAR_anprc155_Gray: TFAR_anprc155
    {
        scope=2;
        displayname="Gray [AN/PRC-155]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\clf_nicecomm\clf_nicecomm2_gray_co.paa"
		};
    };
    class TFAR_anprc155_m81: TFAR_anprc155
    {
        scope=2;
        displayname="M81 [AN/PRC-155]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\clf_nicecomm\clf_nicecomm2_m81_co.paa"
		};
    };
    class TFAR_anprc155_MARD: TFAR_anprc155
    {
        scope=2;
        displayname="MARPAT D [AN/PRC-155]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\clf_nicecomm\clf_nicecomm2_MARPAT_Desert_co.paa"
		};
    };
    class TFAR_anprc155_MARW: TFAR_anprc155
    {
        scope=2;
        displayname="MARPAT W [AN/PRC-155]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\clf_nicecomm\clf_nicecomm2_MARPAT_Woodland_co.paa"
		};
    };
    class TFAR_anprc155_MC: TFAR_anprc155
    {
        scope=2;
        displayname="Multicam [AN/PRC-155]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\clf_nicecomm\clf_nicecomm2_multi_co.paa"
		};
    };
    class TFAR_anprc155_NATOMC: TFAR_anprc155
    {
        scope=2;
        displayname="NATO Multicam [AN/PRC-155]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\clf_nicecomm\clf_nicecomm2_nato_multi_co.paa"
		};
    };
    class TFAR_anprc155_RB: TFAR_anprc155
    {
        scope=2;
        displayname="Rainbow [AN/PRC-155]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\clf_nicecomm\clf_nicecomm2_rainbow_co.paa"
		};
    };
    class TFAR_anprc155_RG: TFAR_anprc155
    {
        scope=2;
        displayname="Ranger Green [AN/PRC-155]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\clf_nicecomm\clf_nicecomm2_Ranger_Green_co.paa"
		};
    };
    class TFAR_anprc155_RHSMC: TFAR_anprc155
    {
        scope=2;
        displayname="RHS Multicam [AN/PRC-155]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\clf_nicecomm\clf_nicecomm2_rhs_co.paa"
		};
    };
    class TFAR_anprc155_RHSdigi: TFAR_anprc155
    {
        scope=2;
        displayname="RHS SURPAT [AN/PRC-155]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\clf_nicecomm\clf_nicecomm2_rhs_digital_co.paa"
		};
    };
    class TFAR_anprc155_RHSUCP: TFAR_anprc155
    {
        scope=2;
        displayname="RHS UCP [AN/PRC-155]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\clf_nicecomm\clf_nicecomm2_UCP_co.paa"
		};
    };

// MR-3000 (Data\clf_nicecomm)
    class TFAR_MR3000: TFAR_Bag_Base
    {
        author="FRXA";
        scope=2;
        displayname="CSAT [MR-3000]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\clf_nicecomm\clf_nicecomm2_csat_multi_co.paa"
		};
    };
    class TFAR_MR3000_coyote: TFAR_MR3000
    {
        scope=2;
        displayname="Coyote [MR-3000]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\clf_nicecomm\clf_nicecomm2_coyote_co.paa"
		};
    };
    class TFAR_MR3000_black: TFAR_MR3000
    {
        scope=2;
        displayname="Black [MR-3000]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\clf_nicecomm\clf_nicecomm2_black_co.paa"
		};
    };
    class TFAR_mr3000_bwmod: TFAR_MR3000
    {
        scope=2;
        displayname="Multitarn [MR-3000]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\clf_nicecomm\clf_nicecomm2_bwmod_co.paa"
		};
    };
    class TFAR_MR3000_AAF: TFAR_MR3000
    {
        scope=2;
        displayname="AAF Digi [MR-3000]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\clf_nicecomm\clf_nicecomm2_aff_digital_co.paa"
		};
    };
    class TFAR_MR3000_CTRG: TFAR_MR3000
    {
        scope=2;
        displayname="CTRG [MR-3000]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\clf_nicecomm\clf_nicecomm2_CTRG_co.paa"
		};
    };
    class TFAR_MR3000_CTRGalt: TFAR_MR3000
    {
        scope=2;
        displayname="CTRG alt [MR-3000]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\clf_nicecomm\clf_nicecomm2_CTRG_Green_co.paa"
		};
    };
    class TFAR_MR3000_Gray: TFAR_MR3000
    {
        scope=2;
        displayname="Gray [MR-3000]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\clf_nicecomm\clf_nicecomm2_gray_co.paa"
		};
    };
    class TFAR_MR3000_m81: TFAR_MR3000
    {
        scope=2;
        displayname="M81 [MR-3000]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\clf_nicecomm\clf_nicecomm2_m81_co.paa"
		};
    };
    class TFAR_MR3000_MARD: TFAR_MR3000
    {
        scope=2;
        displayname="MARPAT D [MR-3000]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\clf_nicecomm\clf_nicecomm2_MARPAT_Desert_co.paa"
		};
    };
    class TFAR_MR3000_MARW: TFAR_MR3000
    {
        scope=2;
        displayname="MARPAT W [MR-3000]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\clf_nicecomm\clf_nicecomm2_MARPAT_Woodland_co.paa"
		};
    };
    class TFAR_mr3000_multicam: TFAR_MR3000
    {
        scope=2;
        displayname="Multicam [MR-3000]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\clf_nicecomm\clf_nicecomm2_multi_co.paa"
		};
    };
    class TFAR_MR3000_NATOMC: TFAR_MR3000
    {
        scope=2;
        displayname="NATO Multicam [MR-3000]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\clf_nicecomm\clf_nicecomm2_nato_multi_co.paa"
		};
    };
    class TFAR_MR3000_RB: TFAR_MR3000
    {
        scope=2;
        displayname="Rainbow [MR-3000]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\clf_nicecomm\clf_nicecomm2_rainbow_co.paa"
		};
    };
    class TFAR_MR3000_RG: TFAR_MR3000
    {
        scope=2;
        displayname="Ranger Green [MR-3000]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\clf_nicecomm\clf_nicecomm2_Ranger_Green_co.paa"
		};
    };
    class TFAR_MR3000_RHSMC: TFAR_MR3000
    {
        scope=2;
        displayname="RHS Multicam [MR-3000]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\clf_nicecomm\clf_nicecomm2_rhs_co.paa"
		};
    };
    class TFAR_mr3000_rhs: TFAR_MR3000
    {
        scope=2;
        displayname="RHS SURPAT [MR-3000]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\clf_nicecomm\clf_nicecomm2_rhs_digital_co.paa"
		};
    };
    class TFAR_MR3000_RHSUCP: TFAR_MR3000
    {
        scope=2;
        displayname="RHS UCP [MR-3000]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\clf_nicecomm\clf_nicecomm2_UCP_co.paa"
		};
    };

// RT-152 BIG (Data\clf_nicecomm)
    class TFAR_rt1523g_big: TFAR_Bag_Base
    {
        author="FRXA";
        scope=2;
        displayname="NATO Multicam [AN/PRC-152 BIG]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\clf_nicecomm\clf_nicecomm2_nato_multi_co.paa"
		};       
    };
    class TFAR_rt1523g_big_coyote: TFAR_rt1523g_big
    {
        scope=2;
        displayname="Coyote [AN/PRC-152 BIG]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\clf_nicecomm\clf_nicecomm2_coyote_co.paa"
		};
    };
    class TFAR_rt1523g_big_black: TFAR_rt1523g_big
    {
        scope=2;
        displayname="Black [AN/PRC-152 BIG]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\clf_nicecomm\clf_nicecomm2_black_co.paa"
		};
    };
    class TFAR_rt1523g_big_bwmod: TFAR_rt1523g_big
    {
        scope=2;
        displayname="Multitarn [AN/PRC-152 BIG]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\clf_nicecomm\clf_nicecomm2_bwmod_co.paa"
		};
    };
    class TFAR_rt1523g_big_CSAT: TFAR_rt1523g_big
    {
        scope=2;
        displayname="CSAT [AN/PRC-152 BIG]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\clf_nicecomm\clf_nicecomm2_csat_multi_co.paa"
		};
    };
    class TFAR_rt1523g_big_CTRG: TFAR_rt1523g_big
    {
        scope=2;
        displayname="CTRG [AN/PRC-152 BIG]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\clf_nicecomm\clf_nicecomm2_CTRG_co.paa"
		};
    };
    class TFAR_rt1523g_big_CTRGalt: TFAR_rt1523g_big
    {
        scope=2;
        displayname="CTRG alt [AN/PRC-152 BIG]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\clf_nicecomm\clf_nicecomm2_CTRG_Green_co.paa"
		};
    };
    class TFAR_rt1523g_big_Gray: TFAR_rt1523g_big
    {
        scope=2;
        displayname="Gray [AN/PRC-152 BIG]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\clf_nicecomm\clf_nicecomm2_gray_co.paa"
		};
    };
    class TFAR_rt1523g_big_m81: TFAR_rt1523g_big
    {
        scope=2;
        displayname="M81 [AN/PRC-152 BIG]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\clf_nicecomm\clf_nicecomm2_m81_co.paa"
		};
    };
    class TFAR_rt1523g_big_MARD: TFAR_rt1523g_big
    {
        scope=2;
        displayname="MARPAT D [AN/PRC-152 BIG]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\clf_nicecomm\clf_nicecomm2_MARPAT_Desert_co.paa"
		};
    };
    class TFAR_rt1523g_big_MARW: TFAR_rt1523g_big
    {
        scope=2;
        displayname="MARPAT W [AN/PRC-152 BIG]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\clf_nicecomm\clf_nicecomm2_MARPAT_Woodland_co.paa"
		};
    };
    class TFAR_rt1523g_big_MC: TFAR_rt1523g_big
    {
        scope=2;
        displayname="Multicam [AN/PRC-152 BIG]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\clf_nicecomm\clf_nicecomm2_multi_co.paa"
		};
    };
    class TFAR_rt1523g_big_AAF: TFAR_rt1523g_big
    {
        scope=2;
        displayname="AAF Digi [AN/PRC-152 BIG]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\clf_nicecomm\clf_nicecomm2_aff_digital_co.paa"
		};
    };
    class TFAR_rt1523g_big_RB: TFAR_rt1523g_big
    {
        scope=2;
        displayname="Rainbow [AN/PRC-152 BIG]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\clf_nicecomm\clf_nicecomm2_rainbow_co.paa"
		};
    };
    class TFAR_rt1523g_big_RG: TFAR_rt1523g_big
    {
        scope=2;
        displayname="Ranger Green [AN/PRC-152 BIG]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\clf_nicecomm\clf_nicecomm2_Ranger_Green_co.paa"
		};
    };
    class TFAR_rt1523g_big_rhs: TFAR_rt1523g_big
    {
        scope=2;
        displayname="RHS Multicam [AN/PRC-152 BIG]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\clf_nicecomm\clf_nicecomm2_rhs_co.paa"
		};
    };
    class TFAR_rt1523g_big_RHSdigi: TFAR_rt1523g_big
    {
        scope=2;
        displayname="RHS SURPAT [AN/PRC-152 BIG]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\clf_nicecomm\clf_nicecomm2_rhs_digital_co.paa"
		};
    };
    class TFAR_rt1523g_big_RHSUCP: TFAR_rt1523g_big
    {
        scope=2;
        displayname="RHS UCP [AN/PRC-152 BIG]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\clf_nicecomm\clf_nicecomm2_UCP_co.paa"
		};
    };

// RT-152 (Data\clf_prc117g)
    class TFAR_rt1523g_BH: TFAR_rt1523g
    {
        author="FRXA";
        scope=2;
        displayname="Blue Hex [AN/PRC-117]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\clf_prc117g\clf_prc117g_BB.paa"
		};
    };
    class TFAR_rt1523g_PH: TFAR_rt1523g_BH
    {
        scope=2;
        displayname="Pink Hex [AN/PRC-117]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\clf_prc117g\clf_prc117g_CC.paa"
		};
    };
    class TFAR_rt1523g_DH: TFAR_rt1523g_BH
    {
        scope=2;
        displayname="Desert Hex [AN/PRC-117]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\clf_prc117g\clf_prc117g_D.paa"
		};
    };
    class TFAR_rt1523g_FH: TFAR_rt1523g_BH
    {
        scope=2;
        displayname="Field Hex [AN/PRC-117]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\clf_prc117g\clf_prc117g_FT.paa"
		};
    };
    class TFAR_rt1523g_MH: TFAR_rt1523g_BH
    {
        scope=2;
        displayname="Multi Hex [AN/PRC-117]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\clf_prc117g\clf_prc117g_MTP.paa"
		};
    };
    class TFAR_rt1523g_WH: TFAR_rt1523g_BH
    {
        scope=2;
        displayname="White Hex [AN/PRC-117]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\clf_prc117g\clf_prc117g_W.paa"
		};
    };
    class TFAR_rt1523g_Black: TFAR_rt1523g_BH
    {
        scope=2;
        displayname="Black [AN/PRC-117]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\clf_prc117g\clf_prc117g_Black_co.paa"
		};
    };
    class TFAR_rt1523g_CTRG: TFAR_rt1523g_BH
    {
        scope=2;
        displayname="CTRG [AN/PRC-117]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\clf_prc117g\clf_prc117g_CTRG_co.paa"
		};
    };
    class TFAR_rt1523g_CTRGalt: TFAR_rt1523g_BH
    {
        scope=2;
        displayname="CTRG alt [AN/PRC-117]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\clf_prc117g\clf_prc117g_CTRG_Green_co.paa"
		};
    };
    class TFAR_rt1523g_m81: TFAR_rt1523g_BH
    {
        scope=2;
        displayname="M81 [AN/PRC-117]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\clf_prc117g\clf_prc117g_m81_co.paa"
		};
    };
    class TFAR_rt1523g_MARD: TFAR_rt1523g_BH
    {
        scope=2;
        displayname="MARPAT D [AN/PRC-117]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\clf_prc117g\clf_prc117g_MARPAT_Desert_co.paa"
		};
    };
    class TFAR_rt1523g_MARW: TFAR_rt1523g_BH
    {
        scope=2;
        displayname="MARPAT W [AN/PRC-117]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\clf_prc117g\clf_prc117g_MARPAT_Woodland_co.paa"
		};
    };
    class TFAR_rt1523g_MC: TFAR_rt1523g_BH
    {
        scope=2;
        displayname="Multicam [AN/PRC-117]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\clf_prc117g\clf_prc117g_MTP_co.paa"
		};
    };
    class TFAR_rt1523g_RG: TFAR_rt1523g_BH
    {
        scope=2;
        displayname="Ranger Green [AN/PRC-117]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\clf_prc117g\clf_prc117g_Ranger_green_co.paa"
		};
    };
    class TFAR_rt1523g_RHSUCP: TFAR_rt1523g_BH
    {
        scope=2;
        displayname="RHS UCP [AN/PRC-117]";
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\TFAR\Data\clf_prc117g\clf_prc117g_UCP_co.paa"
		};
    };
};