class CfgPatches
{
	class Command_Assets_MalicMalprac_WRS
	{
		units[]={};
		weapons[]=
		{
			"CMD_MedicalDart_HG"
		};
		requiredAddons[]=
		{
			"WBK_SciFiWeaponary",
            "Command_Assets_MalicMalprac" // addonRootClass
		};
		addonRootClass="Command_Assets_MalicMalprac";
		skipWhenMissingDependencies=1;
	};
};
class cfgAmmo 
{
    class B_9x21_Ball;
	class CMD_MedicalDart_base: B_9x21_Ball
	{
		hit=0;
		indirectHit=0;
		indirectHitRange=0;
		cartridge="";
        model="\A3\Weapons_f\Data\bullettracer\tracer_Red";
		tracerScale=0.01;
		tracerStartTime=0.050000001;
		tracerEndTime=1;
		nvgOnly=0;
		dangerRadiusBulletClose=0;
		dangerRadiusHit=0;
		suppressionRadiusBulletClose=0;
		suppressionRadiusHit=0;
		audibleFire=2;
	};
};
class cfgWeapons
{
    class WRS_Weapon_Revolver;
    class CMD_MedicalDart_HG: WRS_Weapon_Revolver 
    {
        hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\Command\Command_Assets\MalicMalprac\data\WRS_Constrictor_Med_CO.paa"
		};
    };
};