class CfgPatches
{
	class Command_Faction_Compats_CEModding_RHS
	{
		units[]=
		{
			"Command_AH6M_Empty"
		};
		weapons[]={};
		requiredAddons[]=
		{
            "CBA_Main",
            "Command_Master",
			"Command_Faction",
			"Command_Faction_Compats",
			"Command_Faction_Compats_CEModding",
			"CE_RHSUSAF_AH6M"
		};
		skipWhenMissingDependencies=1;
		addonRootClass=Command_Faction_Compats_CEModding;
	};
};

class CfgVehicles
{
	class RHS_MELB_AH6M;
	class Command_AH6M: RHS_MELB_AH6M
	{
		displayName="AH-6M Little Bird - Empty (Hammerhead)";
		faction="Command_Faction";
		crew="Command_Officer";
		scope=2;
		scopeCurator=2;
		editorCategory="Command_Faction_EdCat";
		editorSubcategory="Command_Haven";
		hiddenSelectionsTextures[]=
		{
			"CE_RHS\CE_RHSUSAF_Vehicles\Bro_MELB_Skins\hammerhead\HammerHeadPrime.paa",
			"rhsusf\addons\rhsusf_melb\data\decals\SN\blank_ca.paa"
		};
		class TextureSources
		{};
	};

	class RHS_MELB_MH6M;
	class Command_MH6M: RHS_MELB_MH6M
	{
		displayName="MH-6M Little Bird (Hammerhead)";
		faction="Command_Faction";
		crew="Command_Officer";
		scope=2;
		scopeCurator=2;
		editorCategory="Command_Faction_EdCat";
		editorSubcategory="Command_Haven";
		hiddenSelectionsTextures[]=
		{
			"CE_RHS\CE_RHSUSAF_Vehicles\Bro_MELB_Skins\hammerhead\HammerHeadPrime.paa",
			"rhsusf\addons\rhsusf_melb\data\decals\SN\blank_ca.paa"
		};
		class TextureSources
		{};
	};
};