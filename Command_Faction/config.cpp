class CfgPatches
{
	class Command_Faction
	{
		units[]=
        {
            "Command_Officer"
        };
		weapons[]={};
		requiredAddons[]=
		{
            "CBA_Main",
            "Command_Master"
		};
	};

};


class CfgEditorCategories
{
	class Command_Faction_EdCat
    {
        displayName="[Command]";
    };
};

class CfgEditorSubCategories
{
	class Command_Man
    {
        displayName="Soldiers";
    };
	class Command_Haven
    {
        displayName="Haven";
    };
	class Command_M1151
    {
        displayName="M1151 (Humvee)";
    };
};

class cfgFactionClasses
{
    class Command_Faction
    {
        displayName="[Command]";
        priority=3; // Position in list.
        side=1; // Opfor=0, Blufor=1, Indep=2.
        icon="Command_Master/Command_Logo_512_ca.paa"; //Custom Icon
    };
};

class CfgVehicles
{
    class B_officer_F;
    class Command_Officer: B_officer_F
    {
        _generalMacro="Command_Officer";
		scope=2;
		displayName="[Command] Officer (!Placeholder!)";
        editorCategory="Command_Faction_EdCat";
        editorSubcategory="Command_Man";
        faction="Command_Faction";
		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_NATO",
			"G_NATO_casual"
		};
		weapons[]=
		{
			"arifle_MXC_Aco_F",
			"hgun_Pistol_heavy_01_MRD_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"arifle_MXC_Aco_F",
			"hgun_Pistol_heavy_01_MRD_F",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
        linkedItems[]=
		{
			"V_BandollierB_rgr",
			"H_MilCap_mcamo",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_BandollierB_rgr",
			"H_MilCap_mcamo",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
    };
};