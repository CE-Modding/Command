class CfgPatches
{
	class Command_ReTextures_RHSAFRF
	{
		units[]={};
		weapons[]=
		{
			"Command_RHS_rpk74_Thunderstruck"
		};
		requiredAddons[]=
		{
			"rhs_main",
			"rhs_c_weapons"
		};
		skipWhenMissingDependencies=1;
		addonRootClass=Command_ReTextures;
	};
};

class CfgWeapons
{
	class rhs_weap_rpk74m_npz;  //Sondegwa
    class Command_RHS_rpk74_Thunderstruck : rhs_weap_rpk74m_npz
    {
        scope=2;
        displayName="[CMD] RPK74 (Thunderstruck)";
        author="Fynn";
        hiddenSelections[]={"Camo1"};
        hiddenSelectionsTextures[]={"Command_ReTextures\RHSAFRF\Data\RPK74.paa"};
        baseWeapon="Command_RHS_rpk74_Thunderstruck";
    };
};