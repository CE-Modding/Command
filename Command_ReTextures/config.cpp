class CfgPatches
{
	class Command_ReTextures
	{
		units[]=
		{
			"CMD_Medic_Kitbag",
			"Command_2nd_Battalion_Banner"
		};
		weapons[]={};
		requiredAddons[]=
		{
			"A3_Weapons_F_Ammoboxes",
			"Command_Master"
		};
	};
};

class CfgVehicles
{
	class B_Kitbag_tan;
	class CMD_Medic_Kitbag: B_Kitbag_tan // Medic Kitbag
	{
        author="Kavik";
        scope=2;
        displayname="[CMD] Medic Kitbag";
        hiddenSelectionsTextures[]={"Command_ReTextures\Data\Medic_Kitbag_co.paa"};
        maximumLoad=400;
	};
	class Banner_01_F;
    class Command_2nd_Battalion_Banner: Banner_01_F
    {
        scope=2;
        displayName="Command 2nd Battalion Banner";
        editorCategory="Command_EdCat";
        editorSubcategory="Command_Flags_SubEdCat";
        hiddenSelectionsTextures[]={"Command_ReTextures\Data\2ndBattalionBanner.paa"};
    };
};