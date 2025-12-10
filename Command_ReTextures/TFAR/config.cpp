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
		addonRootClass=Command_ReTextures;
	};
};

class CfgVehicles
{
    class B_RadioBag_01_base_F;
	class CMD_B_RadioBag_01_Medic_F: B_RadioBag_01_base_F // First Contact Medic Bag
	{ 
        author="Kavik";
        scope=2;
        displayname="[CMD] Medic-Lead Radio Pack";
        tf_dialog="anprc155_radio_dialog";
        tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode="tf_west_radio_code";
        tf_hasLRradio=1;
        tf_range=20000;
        tf_subtype="digital_lr";
        hiddenSelectionsTextures[]={"Command_ReTextures\TFAR\Data\medic_radiobag1_co.paa"};
        maximumLoad=400;
	};
    class TFAR_anprc155;
	class CMD_TFAR_anprc155_Medic: TFAR_anprc155 { // TFAR Medic Bag
        author="Kavik";
        scope=2;
        displayname="[CMD] Medic-Lead AN/PRC-155";
        tf_dialog="anprc155_radio_dialog";
        tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode="tf_west_radio_code";
        tf_hasLRradio=1;
        tf_range=20000;
        tf_subtype="digital_lr";
        hiddenSelectionsTextures[]={"Command_ReTextures\TFAR\Data\anprc155_Medic_co.paa"};
        maximumLoad=400;
	};
};