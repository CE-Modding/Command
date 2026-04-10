class CfgPatches
{
	class Command_ReTextures_CEModding_RHS
	{
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
            "CBA_Main",
            "Command_Master",
			"Command_ReTextures_RHSUSAF",
			"Command_ReTextures_CEModding",
			"CE_RHSUSAF_Equipment_Headgear_HGU56P"
		};
		skipWhenMissingDependencies=1;
		addonRootClass="Command_ReTextures_CEModding";
	};
};

class CfgWeapons
{

	class CE_HGU56P_base;
	class Command_hgu56p_base: CE_HGU56P_base
	{
		scope=0;
	};

	class CE_HGU56P_Visor_base;
	class Command_hgu56p_visor_base: CE_HGU56P_Visor_base
	{
		scope=0;
	};

	class CE_HGU56P_Mask_base;
	class Command_hgu56p_mask_base: CE_HGU56P_Mask_base
	{
		scope=0;
	};

	class CE_HGU56P_VisorMask_base;
	class Command_hgu56p_visor_mask_base: CE_HGU56P_VisorMask_base
	{
		scope=0;
	};

	class Command_Haven: Command_hgu56p_base
	{};
	class Command_haven_mask: Command_hgu56p_mask_base
	{};
	class Command_haven_visor: Command_hgu56p_visor_base
	{};
	class Command_haven_visor_mask: Command_hgu56p_visor_mask_base
	{};

	class Command_Haven_alt: Command_hgu56p_base
	{};
	class Command_haven_mask_alt: Command_hgu56p_mask_base
	{};
	class Command_haven_visor_alt: Command_hgu56p_visor_base
	{};
	class Command_haven_visor_mask_alt: Command_hgu56p_visor_mask_base
	{};
};