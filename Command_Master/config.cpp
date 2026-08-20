class CfgPatches
{
	class Command_Master
	{
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
            "CBA_Main"
		};
	};

};

class Extended_PostInit_EventHandlers
{
	class Command_Master
	{
		init="call compileScript ['\Command_Master\XEH_postInit.sqf']";
	};
};

class CfgEditorCategories
{
	class Command_EdCat
    {
        displayName="Command";
    };
};

class CfgEditorSubcategories
{
	class Command_Flags_SubEdCat
    {
        displayName="Flags";
    };
};

class CfgUnitInsignia
{
    /*
    // EXAMPLE
    class Command_Insignia 
    {
        displayName="[CMD] Command"; // Name displayed in Arsenal
        author="Tb"; // Author displayed in Arsenal
        texture="Command_Master\Data\Patch_Command_CA.paa"; // Image path
        textureVehicle="Command_Master\Data\Patch_Command_CA.paa"; // Does nothing currently, reserved for future use
    };
    
    // _CA.paa must be used on textures that have transparent backgrounds! 
    // _CO.paa must be used on textures that have solid backgrounds!
    */

    class Command_Insignia
     {
        displayName="[CMD] Command";
        author="Tb + CE_Modding";
        texture="Command_Master\Data\Patch_Command_CA.paa";
        textureVehicle="Command_Master\Data\Patch_Command_CA.paa";
    };
    class Command_ElementC_Insignia: Command_Insignia
    {
        displayName="[CMD] Command Element (Circle)";
        texture="Command_Master\Data\Patch_CommandCircle_CA.paa";
        textureVehicle="Command_Master\Data\Patch_CommandCircle_CA.paa";
    };
    class Command_ElementS_Insignia: Command_Insignia
    {
        displayName="[CMD] Command Element (Square)";
        texture="Command_Master\Data\Patch_CommandSquare_CA.paa";
        textureVehicle="Command_Master\Data\Patch_CommandSquare_CA.paa";
    };
    class Gator_Insignia: Command_Insignia
    {
        displayName="[CMD] Gator-8";
        texture="Command_Master\Data\Patch_Gator8_CA.paa";
        textureVehicle="Command_Master\Data\Patch_Gator8_CA.paa";
    };
    class Fox_Insignia: Command_Insignia
    {
        displayName="[CMD] Fox-1";
        texture="Command_Master\Data\Patch_Fox1_CA.paa";
        textureVehicle="Command_Master\Data\Patch_Fox1_CA.paa";
    };
    class Bastion_Insignia: Command_Insignia
    {
        displayName="[CMD] Bastion";
        texture="Command_Master\Data\Patch_Bastion_CA.paa";
        textureVehicle="Command_Master\Data\Patch_Bastion_CA.paa";
    };
    class Foehammer_Insignia: Command_Insignia
    {
        displayName="[CMD] Foehammer";
        texture="Command_Master\Data\Patch_Foehammer_CA.paa";
        textureVehicle="Command_Master\Data\Patch_Foehammer_CA.paa";
    };
    class Haven_Insignia: Command_Insignia
    {
        displayName="[CMD] Foehammer";
        texture="Command_Master\Data\Patch_Foehammer_CA.paa";
        textureVehicle="Command_Master\Data\Patch_Foehammer_CA.paa";
    };
    class Angels_Insignia: Command_Insignia
    {
        displayName="[CMD] Haven";
        texture="Command_Master\Data\Patch_Haven_CA.paa";
        textureVehicle="Command_Master\Data\Patch_Haven_CA.paa";
    };
    class AngelsLead_Insignia: Command_Insignia
    {
        displayName="[CMD] Angels Lead";
        texture="Command_Master\Data\Patch_AngelsLead_CA.paa";
        textureVehicle="Command_Master\Data\Patch_AngelsLead_CA.paa";
    };
    class FU_Insignia: Command_Insignia
    {
        displayName="[CMD] SCP / Fuck You";
        author="Cods + CE_Modding";
        texture="Command_Master\Data\Patch_FU_CA.paa";
        textureVehicle="Command_Master\Data\Patch_FU_CA.paa";
    };
    class AntiFurry_Insignia: Command_Insignia
    {
        displayName="[CMD] Anti-Furry";
        author="Andre + CE_Modding";
        texture="Command_Master\Data\Patch_AntiFurry_CA.paa";
        textureVehicle="Command_Master\Data\Patch_AntiFurry_CA.paa";
    };
    class Thankless_Insignia: Command_Insignia
    {
        displayName="[CMD] It's a thankless job";
        author="Gabriel Gilbert + CE_Modding";
        texture="Command_Master\Data\Patch_Thankless_CA.paa";
        textureVehicle="Command_Master\Data\Patch_Thankless_CA.paa";
    };
    class DaWae_Insignia: Command_Insignia
    {
        displayName="[CMD] Do you know da wae?";
        author="CE_Modding";
        texture="Command_Master\Data\Patch_DaWae_CA.paa";
        textureVehicle="Command_Master\Data\Patch_DaWae_CA.paa";
    };
    class Cowabunga_Insignia: Command_Insignia
    {
        displayName="[CMD] Cowabunga it is";
       author="CE_Modding";
        texture="Command_Master\Data\Patch_Cowabunga_CA.paa";
        textureVehicle="Command_Master\Data\Patch_Cowabunga_CA.paa";
    };
    class GovGetOut_Insignia: Command_Insignia
    {
        displayName="[CMD] Government Get Out";
        author="Theplahunter + CE_Modding";
        texture="Command_Master\Data\Patch_GovGetOut_CA.paa";
        textureVehicle="Command_Master\Data\Patch_GovGetOut_CA.paa";
    };
    class Yeeteth_Insignia: Command_Insignia
    {
        displayName="[CMD] Lord Yeeteth";
        texture="Command_Master\Data\Patch_Yeeteth_CA.paa";
        textureVehicle="Command_Master\Data\Patch_Yeeteth_CA.paa";
    };
    class MTF_Insignia: Command_Insignia
    {
        displayName="[CMD] MTF";
        texture="Command_Master\Data\Patch_MTF_CA.paa";
        textureVehicle="Command_Master\Data\Patch_MTF_CA.paa";
    };
    class Krill_Insignia: Command_Insignia
    {
        displayName="[CMD] Krill Yourself";
        texture="Command_Master\Data\Patch_Krill_CA.paa";
        textureVehicle="Command_Master\Data\Patch_Krill_CA.paa";
    };
};  