class CfgPatches
{
	class Command_Faction_Compats_RHS
	{
		units[]=
		{
			"Command_Officer",
			"Command_m1151_m2crows"
		};
		weapons[]={};
		requiredAddons[]=
		{
            "CBA_Main",
            "Command_Master",
			"Command_Faction",
			"Command_Faction_Compats",
			"Command_ReTextures_RHSUSAF",
			"rhsusf_main",
			"rhsusf_c_m11xx",
			"rhsusf_c_troops",
			"rhsusf_c_weapons"
		};
		skipWhenMissingDependencies=1;
		addonRootClass=Command_Faction_Compats;
	};
};

class CfgVehicles
{
	class B_officer_F;
    class Command_Officer: B_officer_F
    {
		weapons[]=
		{
			"Command_RHS_M4A1_Corvus19",
			"hgun_Pistol_heavy_01_MRD_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"Command_RHS_M4A1_Corvus19",
			"hgun_Pistol_heavy_01_MRD_F",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
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
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
    };

	class rhsusf_m1151_base;
    class rhsusf_m1151_GPK_base: rhsusf_m1151_base
    {
		class textureSources
		{
			class rhs_desert
			{
				displayName="Desert";
				author="$STR_RHSUSF_AUTHOR_FULL";
				textures[]=
				{
					"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Ext_d_CO.paa",
					"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_d_CO.paa",
					"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_CO.paa",
					"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_d_CO.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
					"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_d_CO.paa",
					"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_GPK_d_CO.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa"
				};
				decals[]={8};
				factions[]={};
			};
			class rhs_woodland
			{
				displayName="Woodland";
				author="$STR_RHSUSF_AUTHOR_FULL";
				textures[]=
				{
					"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Ext_wd_CO.paa",
					"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_wd_CO.paa",
					"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_wd_CO.paa",
					"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_wd_CO.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
					"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_wd_CO.paa",
					"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_GPK_wd_CO.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
				};
				decals[]={8};
				factions[]={};
			};
			class rhs_olive
			{
				displayName="Olive";
				author="$STR_RHSUSF_AUTHOR_FULL";
				textures[]=
				{
					"rhsusf\addons\rhsusf_m11xx\data\rhssaf_M1151_Ext_o_CO.paa",
					"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_wd_CO.paa",
					"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_wd_CO.paa",
					"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_wd_CO.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
					"rhsusf\addons\rhsusf_m11xx\data\rhssaf_M1152M1165_o_CO.paa",
					"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_GPK_wd_CO.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
				};
				factions[]={};
				decals[]={7};
			};
			class Command_THICC
			{
				displayName="[CMD] THICC";
				author="Command";
				textures[]=
				{
					"Command_ReTextures\RHSUSAF\Data\ThiccThighs10.paa",
					"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_wd_CO.paa",
					"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_wd_CO.paa",
					"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_wd_CO.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
					"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_wd_CO.paa",
					"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_GPK_wd_CO.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
				};
				factions[]={};
				decals[]={7};
			};
		};
    };
    class rhsusf_m1151_CROWS_base: rhsusf_m1151_base
    {
		class AnimationSources;
		class Hitpoints;
		class UserActions;
	};
	class rhsusf_M1151_CROWS_M2_base: rhsusf_m1151_CROWS_base
	{
		class AnimationSources: AnimationSources
		{
			class ReloadAnim;
			class ReloadMagazine;
			class Revolving;
			class muzzle_rot_MG;
		};
	};
	class rhsusf_m1151_m2crows_usarmy_wd: rhsusf_M1151_CROWS_M2_base
	{
		editorPreview="rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1151_m2crows_usarmy_wd.paa";
		class AnimationSources: AnimationSources
		{
			class ReloadAnim: ReloadAnim
			{};
			class ReloadMagazine: ReloadMagazine
			{};
			class Revolving: Revolving
			{};
			class muzzle_rot_MG: muzzle_rot_MG
			{};
		};
	};
	class Command_m1151_m2crows: rhsusf_m1151_m2crows_usarmy_wd
	{
		faction="Command_Faction";
		crew="Command_Officer";
		displayName="M1151 THICC (M2-CROWS)";
		scope=2;
		scopeCurator=2;
		forceInGarage=2;
		editorCategory="Command_Faction_EdCat";
		editorSubcategory="Command_M1151";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo13",
			"BFT_screen"
		};
		HiddenSelectionsTextures[]=
		{
			"Command_ReTextures\RHSUSAF\Data\ThiccThighs10.paa",
			"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_wd_CO.paa",
			"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_wd_CO.paa",
			"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_wd_CO.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
			"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_wd_CO.paa",
			"rhsusf\addons\rhsusf_caiman\data\m153_WD_co.paa"
		};
		textureList[]=
		{
			"CommandTHICC",
			1
		};
		class textureSources
		{
			class CommandTHICC
			{
				displayName="THICC";
				author="Tb";
				textures[]=
				{
					"Command_ReTextures\RHSUSAF\Data\ThiccThighs10.paa",
					"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_wd_CO.paa",
					"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_wd_CO.paa",
					"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_wd_CO.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
					"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_wd_CO.paa",
					"rhsusf\addons\rhsusf_caiman\data\m153_WD_co.paa"
				};
				decals[]={8};
				factions[]={};
			};
		};
	};
};