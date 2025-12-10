class CfgPatches
{
	class Command_ReTextures_RHSUSAF
	{
		units[]={};
		weapons[]=
		{
			"Command_Haven",
			"Command_haven_mask",
			"Command_haven_visor",
			"Command_haven_visor_mask",
			"Command_Haven_alt",
			"Command_haven_mask_alt",
			"Command_haven_visor_alt",
			"Command_haven_visor_mask_alt",
			"Command_RHS_M4A1_COrvus19"
		};
		requiredAddons[]=
		{
			"rhsusf_main",
			"rhsusf_c_troops",
			"rhsusf_c_weapons",
			"CE_RHSUSAF_Equipment"
		};
		skipWhenMissingDependencies=1;
		addonRootClass=Command_ReTextures;
	};
};

class CfgWeapons
{
	class itemcore;
	class Uniform_Base;
	class UniformItem;
	class U_B_PilotCoveralls;	

// HGU-56P Pilot Helmets
	class rhsusf_hgu56p;
    class rhsusf_hgu56p_mask;
    class rhsusf_hgu56p_visor;
    class rhsusf_hgu56p_visor_mask;
    class rhsusf_hgu56p_visor_saf;
	class Command_hgu56p_base: rhsusf_hgu56p
	{
		scope=0;
		hiddenSelections[]=
		{
			"camo",
			"patches"
		};
		author="Almus";
	};
	class Command_hgu56p_mask_base: rhsusf_hgu56p_mask
	{
		scope=0;
		hiddenSelections[]=
		{
			"camo",
			"patches"
		};
		author="Almus";
	};
	class Command_hgu56p_visor_base: rhsusf_hgu56p_visor
	{
		scope=0;
		hiddenSelections[]=
		{
			"camo",
			"patches"
		};
		author="Almus";
		subItems[]=
		{
			"Integrated_NVG_F"
		};
	};
	class Command_hgu56p_visor_mask_base: rhsusf_hgu56p_visor_mask
	{
		scope=0;
		hiddenSelections[]=
		{
			"camo",
			"patches"
		};
		author="Almus";
		subItems[]=
		{
			"Integrated_NVG_F"
		};
	};
	class Command_hgu56p_visor_saf_base: rhsusf_hgu56p_visor_saf
	{
		scope=0;
		hiddenSelections[]=
		{
			"camo",
			"patches"
		};
		author="Almus";
		subItems[]=
		{
			"Integrated_NVG_F"
		};
	};

	class Command_Haven: Command_hgu56p_base
	{
		scope=2;
		displayName="[CMD] HGU-56/P (Haven)";
		hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\RHSUSAF\Data\Haven_CO.paa",
			"Command_ReTextures\RHSUSAF\Data\Haven_Patches_CA.paa"
		};
	};
	class Command_haven_mask: Command_hgu56p_mask_base
	{
		scope=2;
		displayName="[CMD] HGU-56/P (Haven/Mask)";
		hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\RHSUSAF\Data\Haven_CO.paa",
			"Command_ReTextures\RHSUSAF\Data\Haven_Patches_CA.paa"
		};
	};
	class Command_haven_visor: Command_hgu56p_visor_base
	{
		scope=2;
		displayName="[CMD] HGU-56/P (Haven/Visor) [NVG]";
		hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\RHSUSAF\Data\Haven_CO.paa",
			"Command_ReTextures\RHSUSAF\Data\Haven_Patches_CA.paa"
		};
	};
	class Command_haven_visor_mask: Command_hgu56p_visor_mask_base
	{
		scope=2;
		displayName="[CMD] HGU-56/P (Haven/Visor/Mask) [NVG]";
		hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\RHSUSAF\Data\Haven_CO.paa",
			"Command_ReTextures\RHSUSAF\Data\Haven_Patches_CA.paa"
		};
	};

	class Command_Haven_alt: Command_hgu56p_base
	{
		scope=2;
		displayName="[CMD] HGU-56/P (Haven-Alt)";
		hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\RHSUSAF\Data\Haven2_CO.paa",
			"Command_ReTextures\RHSUSAF\Data\HavenAlt_Patches_CA.paa"
		};
	};
	class Command_haven_mask_alt: Command_hgu56p_mask_base
	{
		scope=2;
		displayName="[CMD] HGU-56/P (Haven-Alt/Mask)";
		hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\RHSUSAF\Data\Haven2_CO.paa",
			"Command_ReTextures\RHSUSAF\Data\HavenAlt_Patches_CA.paa"
		};
	};
	class Command_haven_visor_alt: Command_hgu56p_visor_base
	{
		scope=2;
		displayName="[CMD] HGU-56/P (Haven-Alt/Visor) [NVG]";
		hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\RHSUSAF\Data\Haven2_CO.paa",
			"Command_ReTextures\RHSUSAF\Data\HavenAlt_Patches_CA.paa"
		};
	};
	class Command_haven_visor_mask_alt: Command_hgu56p_visor_mask_base
	{
		scope=2;
		displayName="[CMD] HGU-56/P (Haven-Alt/Visor/Mask) [NVG]";
		hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\RHSUSAF\Data\Haven2_CO.paa",
			"Command_ReTextures\RHSUSAF\Data\HavenAlt_Patches_CA.paa"
		};
	};

// M4
	class rhs_weap_m4a1_carryhandle_mstock;
    class Command_RHS_M4A1_COrvus19 : rhs_weap_m4a1_carryhandle_mstock
    {
        scope=2;
        displayName="[CMD] M4A1 (Corvus19)";
        author="Fynn";
        hiddenSelections[]={ "camo1" };
        hiddenSelectionsTextures[]=
		{
			"Command_ReTextures\RHSUSAF\Data\Corvus19Final.paa"
		};
        baseWeapon="Command_RHS_M4A1_COrvus19";
    };
};