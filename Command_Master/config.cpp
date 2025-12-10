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
    // Invis Background Textures (_CA)
    class Command_Insignia 
    {
        displayName="[CMD] Command"; // Name displayed in Arsenal
        author="Tb"; // Author displayed in Arsenal
        texture="Command_Master\Data\Patch_Command_CA.paa"; // Image path
        textureVehicle="Command_Master\Data\Patch_Command_CA.paa"; // Does nothing currently, reserved for future use
    };
    class Gator_Insignia 
    {
        displayName="[CMD] Gator-8"; // Name displayed in Arsenal
        author="Tb"; // Author displayed in Arsenal
        texture="Command_Master\Data\Patch_Gator8_CA.paa"; // Image path
        textureVehicle="Command_Master\Data\Patch_Gator8_CA.paa"; // Does nothing currently, reserved for future use
    };
    class Fox_Insignia
    {
        displayName="[CMD] Fox-1";
        author="Tb";
        texture="Command_Master\Data\Patch_Fox1_CA.paa";
        textureVehicle="Command_Master\Data\Patch_Fox1_CA.paa";
    };
    class Angels_Insignia
    {
        displayName="[CMD] Angels";
        author="Tb";
        texture="Command_Master\Data\Patch_Angels_CA.paa";
        textureVehicle="Command_Master\Data\Patch_Angels_CA.paa";
    };
    class Foehammer_Insignia
    {
        displayName="[CMD] Foehammer";
        author="Tb";
        texture="Command_Master\Data\Patch_Foehammer_CA.paa";
        textureVehicle="Command_Master\Data\Patch_Foehammer_CA.paa";
    };
    class FU_Insignia
    {
        displayName="[CMD] SCP / Fuck You";
        author="Cods";
        texture="Command_Master\Data\Patch_FU_CA.paa";
        textureVehicle="Command_Master\Data\Patch_FU_CA.paa";
    };
    class AntiFurry_Insignia
    {
        displayName="[CMD] Anti-Furry";
        author="Andre";
        texture="Command_Master\Data\Patch_AntiFurry.paa";
        textureVehicle="Command_Master\Data\Patch_AntiFurry.paa";
    };

    // Patch Background Textures (_CO)
    class CommandAlt_Insignia
    {
        displayName="[CMD] Command (Alt)";
        author="Tb";
        texture="Command_Master\Data\Patch_CommandAlt_CO.paa";
        textureVehicle="Command_Master\Data\Patch_CommandAlt_CO.paa";
    };
    class AngelsAlt_Insignia
    {
        displayName="[CMD] Angels (Alt)";
        author="Tb";
        texture="Command_Master\Data\Patch_AngelsAlt_CO.paa";
        textureVehicle="Command_Master\Data\Patch_AngelsAlt_CO.paa";
    };
    class GovGetOut_Insignia
    {
        displayName="[CMD] Government Get Out";
        author="Theplahunter";
        texture="Command_Master\Data\Patch_GovGetOut_CO.paa";
        textureVehicle="Command_Master\Data\Patch_GovGetOut_CO.paa";
    };
    class Yeeteth_Insignia
    {
        displayName="[CMD] Lord Yeeteth";
        author="Tb";
        texture="Command_Master\Data\Patch_Yeeteth_CO.paa";
        textureVehicle="Command_Master\Data\Patch_Yeeteth_CO.paa";
    };
};  