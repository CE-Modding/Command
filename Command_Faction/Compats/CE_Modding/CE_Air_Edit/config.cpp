class CfgPatches
{
	class Command_Faction_Compats_CEModding_AirEdit
	{
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
            "CBA_Main",
            "Command_Master",
			"Command_Faction",
			"Command_Faction_Compats",
			"Command_Faction_Compats_CEModding",
			"CE_Air_Edit_Xian"
		};
		skipWhenMissingDependencies=1;
		addonRootClass=Command_Faction_Compats_CEModding;
	};
};

class CfgVehicles
{
	class CE_Xian_base_InheritDelete;
	class CE_Xian_base: CE_Xian_base_InheritDelete
	{
		class TextureSources
		{
			class Hex
			{
				displayName="$STR_A3_TEXTURESOURCES_HEX0";
				author="$STR_A3_BOHEMIA_INTERACTIVE";
				factions[]={};
				textures[]=
				{
					"\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT01_bhex_CO.paa",
					"\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT02_bhex_CO.paa",
					"\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT03_L_bhex_CO.paa",
					"\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT03_R_bhex_CO.paa"
				};
			};
			class GreenHex
			{
				displayName="$STR_A3_TEXTURESOURCES_GREENHEX0";
				author="$STR_A3_BOHEMIA_INTERACTIVE";
				factions[]={};
				textures[]=
				{
					"\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT01_ghex_CO.paa",
					"\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT02_ghex_CO.paa",
					"\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT03_L_ghex_CO.paa",
					"\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT03_R_ghex_CO.paa"
				};
			};
			class Grey
			{
				displayName="$STR_A3_TEXTURESOURCES_GREY0";
				author="$STR_A3_BOHEMIA_INTERACTIVE";
				factions[]={};
				textures[]=
				{
					"\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT01_CO.paa",
					"\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT02_CO.paa",
					"\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT03_L_CO.paa",
					"\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT03_R_CO.paa"
				};
			};
			class Black
			{
				displayName="Black";
				author="The_Uiltimate_Builder";
				factions[]={};
				textures[]=
				{
					"\CE_Air_Edit\Xian\Data\VTOL_02_EXT01_black_CO.paa",
					"\CE_Air_Edit\Xian\Data\VTOL_02_EXT02_black_CO.paa",
					"\CE_Air_Edit\Xian\Data\VTOL_02_EXT03_L_black_CO.paa",
					"\CE_Air_Edit\Xian\Data\VTOL_02_EXT03_R_black_CO.paa"
				};
			};
			class Blue
			{
				displayName="Blue";
				author="The_Uiltimate_Builder";
				factions[]={};
				textures[]=
				{
					"\CE_Air_Edit\Xian\Data\VTOL_02_EXT01_blue_CO.paa",
					"\CE_Air_Edit\Xian\Data\VTOL_02_EXT02_blue_CO.paa",
					"\CE_Air_Edit\Xian\Data\VTOL_02_EXT03_L_blue_CO.paa",
					"\CE_Air_Edit\Xian\Data\VTOL_02_EXT03_R_blue_CO.paa"
				};
			};
			class Olive
			{
				displayName="Olive";
				author="The_Uiltimate_Builder";
				factions[]={};
				textures[]=
				{
					"\CE_Air_Edit\Xian\Data\VTOL_02_EXT01_Olive_CO.paa",
					"\CE_Air_Edit\Xian\Data\VTOL_02_EXT02_Olive_CO.paa",
					"\CE_Air_Edit\Xian\Data\VTOL_02_EXT03_L_Olive_CO.paa",
					"\CE_Air_Edit\Xian\Data\VTOL_02_EXT03_R_Olive_CO.paa"
				};
			};
			class Sand
			{
				displayName="Sand";
				author="The_Uiltimate_Builder";
				factions[]={};
				textures[]=
				{
					"\CE_Air_Edit\Xian\Data\VTOL_02_EXT01_sand_CO.paa",
					"\CE_Air_Edit\Xian\Data\VTOL_02_EXT02_sand_CO.paa",
					"\CE_Air_Edit\Xian\Data\VTOL_02_EXT03_L_sand_CO.paa",
					"\CE_Air_Edit\Xian\Data\VTOL_02_EXT03_R_sand_CO.paa"
				};
			};
			class White
			{
				displayName="White";
				author="The_Uiltimate_Builder";
				factions[]={};
				textures[]=
				{
					"\CE_Air_Edit\Xian\Data\VTOL_02_EXT01_White_CO.paa",
					"\CE_Air_Edit\Xian\Data\VTOL_02_EXT02_White_CO.paa",
					"\CE_Air_Edit\Xian\Data\VTOL_02_EXT03_L_White_CO.paa",
					"\CE_Air_Edit\Xian\Data\VTOL_02_EXT03_R_White_CO.paa"
				};
			};
			class Command_Xian
			{
				displayName = "[Kavik] Cherry Blossom";
				author = "Kavik";
				textures[] =
				{
					"Command_Faction\Compats\CE_Modding\Data\cherryblossom\VTOL_02_EXT01_CO.paa",
					"Command_Faction\Compats\CE_Modding\Data\cherryblossom\VTOL_02_EXT02_CO.paa",
					"Command_Faction\Compats\CE_Modding\Data\cherryblossom\VTOL_02_EXT03_L_CO.paa",
					"Command_Faction\Compats\CE_Modding\Data\cherryblossom\VTOL_02_EXT03_R_CO.paa",
				};
			};
		};
	};
};