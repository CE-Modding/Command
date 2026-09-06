class CfgPatches
{
	class Command_ReTextures
	{
		units[]=
		{
			"CMD_Medic_Kitbag",
			"Command_2nd_Battalion_Banner",
			"Command_Arsenal_SupplyCrate_Orange"
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
        hiddenSelectionsTextures[]={"\Command\Command_ReTextures\Data\Medic_Kitbag_co.paa"};
        maximumLoad=400;
	};
	class Banner_01_F;
    class Command_2nd_Battalion_Banner: Banner_01_F
    {
        scope=2;
        displayName="Command 2nd Battalion Banner";
        editorCategory="Command_EdCat";
        editorSubcategory="Command_Flags_SubEdCat";
        hiddenSelectionsTextures[]={"\Command\Command_ReTextures\Data\2ndBattalionBanner.paa"};
    };

	class Thing;
	class ThingX: Thing
	{
		class eventhandlers;
	};
	class ReammoBox_F: ThingX
	{
		class DestructionEffects;
	};
	class Command_SupplyCrate_base: ReammoBox_F
	{
		mapSize=1.58;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.892;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\B_supplyCrate_F.jpg";
		_generalMacro="Command_SupplyCrate_base";
		scope=0;
		scopeCurator=0;
		displayName="[CMD] Arsenal Crate";
		model="\A3\Weapons_F\Ammoboxes\Supplydrop.p3d";
		editorCategory="Command_EdCat";
		author="CE_Modding";
		icon="iconCrate";
		accuracy=0.2;
		typicalCargo[]={};
		vehicleClass="Ammo";
		destrType=DestructBuilding;
		explosionEffect="BasicAmmoExplosion";
		class DestructionEffects: DestructionEffects
		{
			class Smoke2
			{
				simulation="particles";
				type="AmmoSmokeParticles2";
				position="";
				intensity=1;
				interval=1;
				lifeTime=2;
			};
			class Bullets
			{
				simulation="particles";
				type="AmmoBulletCore";
				position="";
				intensity=1;
				interval=1;
				lifeTime=1.2;
			};
			class HouseDestr
			{
				simulation="destroy";
				type="DelayedDestructionAmmoBox";
				position="";
				intensity=1;
				interval=1;
				lifeTime=10;
			};
		};
		hiddenSelections[]=
        {
            "camo"
        };
		hiddenSelectionsTextures[]=
		{
			""
		};
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"
		};
		maximumLoad=0;
		transportMaxWeapons=0;
		transportMaxMagazines=0;
		transportMaxBackpacks=0;
		transportAmmo=0;
		transportRepair=0;
		transportFuel=0;
		supplyRadius=0;
		cost=0;
		armor=200;
		waterLinearDampingCoefY=1.0;
		waterAngularDampingCoef=0.1;
		editorForceEmpty=1;
        ace_cargo_canLoad=0; // Can be loaded into something else?
		ace_Cargo_hasCargo=0; // Has cargo inventory?
		ace_cargo_size=10000; // How much space this takes up inside vehicle
		ace_cargo_space=0; // How much space for loading crates into this one
        ace_dragging_canDrag=0;
		ace_dragging_canCarry=0;
	};
    class Command_Arsenal_SupplyCrate_Orange: Command_SupplyCrate_base
	{
		scope=2;
		scopeCurator=2;
		displayName="[CMD] Arsenal Crate (Orange)";
		hiddenSelectionsTextures[]=
		{
			"\Command\Command_ReTextures\Data\Arsenal_SupplyDrop_Orange_CO.paa"
		};
	};
};