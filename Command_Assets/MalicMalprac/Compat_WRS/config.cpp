class CfgPatches
{
	class Command_Assets_MalicMalprac_WRS
	{
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"WBK_SciFiWeaponary",
            "Command_Assets_MalicMalprac" // addonRootClass
		};
		addonRootClass="Command_Assets_MalicMalprac";
		skipWhenMissingDependencies=1;
	};
};

class cfgWeapons
{
    class WRS_Weapon_Revolver;
    class CMD_MedicalDart_HG: WRS_Weapon_Revolver 
    {
        hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\Command\Command_Assets\MalicMalprac\data\WRS_Constrictor_Med_CO.paa"
		};
    };
};