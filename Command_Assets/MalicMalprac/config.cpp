class CfgPatches
{
	class Command_Assets_MalicMalprac
	{
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
            "A3_Weapons_F",
			"ace_medical_treatment",
			"Command_Assets" // addonRootClass
		};
		addonRootClass="Command_Assets";
		skipWhenMissingDependencies=1;
	};
};

class Mode_SemiAuto;

class cfgFunctions 
{
    class CMD_A_MM
	{
        class functions 
		{
            file="Command\Command_Assets\MalicMalprac\functions";
            class cyanide {}; // CMD_A_MM_fnc_cyanide;
            class chocolatemilk {}; // CMD_A_MM_fnc_chocolatemilk;
            class mugManiac {}; // CMD_A_MM_fnc_mugManiac;
            class mugManiacLocal {}; // CMD_A_MM_fnc_mugManiacLocal;
			class stimSwitch {}; // CMD_A_MM_fnc_stimSwitch;
            class benadrylBuckshot {}; // CMD_A_MM_fnc_benadrylBuckshot;
        };
    };
};

class Ace_Medical_Treatment_Actions
{
    class Morphine;
    class Painkillers;
    class ElasticBandage;
    class Cyanide: Morphine 
	{
        displayName="Force Cyanide Tablet";
        displayNameProgress="Pathetic...";
        allowedSelections[]={"Head"};
        category="medication";
        items[]={"CMD_MedicalDart_Death_Cyanide"};
        condition="";
        treatmentTime=2;
        callbackSuccess="CMD_A_MM_fnc_cyanide";
        animationMedic="AinvPknlMstpSnonWnonDnon_medic1";
        sounds[]={{QPATHTO_R(sounds\Inject.ogg),1,1,50}};
        litter[]={{"CMD_MedicalDart_Litter_Cyanide"}};
    };
    class ChocolateMilk: Painkillers 
	{
        displayName="Give Choccy Milk";
        displayNameProgress="Giving Chocolate Milk...";
        medicRequired=0;
        allowedSelections[]={"Head"};
        category="medication";
        items[]={"CMD_MedicalDart_Morph_ChocolateMilk"};
        condition="";
        treatmentTime=3;
        callbackSuccess="CMD_A_MM_fnc_chocolatemilk";
        animationMedic="AinvPknlMstpSnonWnonDnon_medic1";
        sounds[]={{"\z\ace\addons\field_rations\sounds\drink2.ogg",1,1,50}};
        litter[]={{"CMD_MedicalDart_Litter_ChocolateMilk"}};
    };
    class HKBandages: ElasticBandage
	{
        displayName="Hello Kitty Bandages";
        items[]={"CMD_MedicalDart_Bandages_HelloKitty"};
        litter[]={{"CMD_MedicalDart_Litter_HKBandages"}};
    };
    class BloodIV;
    class WarmBloodIV_Mug: BloodIV
	{
        displayName="Give Mug of Warm Blood (1000ml)";
        items[]={"CMD_MedicalDart_IV_MugManiac"};
        displayNameProgress="Can I harvest some of your friends for more blood?!";
        treatmentTime=8;
    };
};

class Ace_Medical_Treatment 
{
    class Bandaging 
	{
        class ElasticBandage;
        class HKBandages: ElasticBandage {};
    };
    class IV 
	{
        class MugIV 
		{
            volume=1000;
            type="Mug";
            rateCoef=1;
        };
    };
};

class Extended_HitPart_EventHandlers
{
    class CAManBase
    {
        mpHit="(_this select 0) call CMD_A_MM_fnc_stimSwitch";
    };
};

class cfgVehicles
{
    class ACE_MedicalLitter_morphine;
    class CMD_MedicalDart_Litter_ChocolateMilk: ACE_MedicalLitter_morphine 
	{
        displayName="";
        simulation="thing";
        model="\Command\Command_Assets\MalicMalprac\data\choccymilky.p3d";
    };
    class CMD_MedicalDart_Litter_HKBandages: ACE_MedicalLitter_morphine 
	{
        displayName="";
        simulation="thing";
        model="\Command\Command_Assets\MalicMalprac\data\bandages_litter.p3d";
    };
    class CMD_MedicalDart_Litter_Cyanide: ACE_MedicalLitter_morphine 
	{
        displayName="";
        simulation="thing";
        model="\Command\Command_Assets\MalicMalprac\data\cyanide_litter.p3d";
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
		cartridge="FxCartridge_slug";
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
    class CMD_MedicalDart_Bandage: CMD_MedicalDart_base 
    {};
    class CMD_MedicalDart_Cyanide: CMD_MedicalDart_base
    {};
    class CMD_MedicalDart_Tranq: CMD_MedicalDart_base
    {};
    class CMD_MedicalDart_Painkiller: CMD_MedicalDart_base
    {};
    class CMD_MedicalDart_EACA: CMD_MedicalDart_base
    {};
    class CMD_MedicalDart_TXA: CMD_MedicalDart_base
    {};
	class CMD_MedicalDart_Blood: CMD_MedicalDart_base
    {};
};
class cfgMagazines 
{
    class 16rnd_9x21_Mag;
	class CMD_6Rnd_Stim_base: 16rnd_9x21_Mag
	{
		author="Gray + Kavik";
		count=8;
        tracersEvery=1;
		lastRoundsTracer=0;
		ammo="";
	};
    class CMD_6Rnd_Bandage: CMD_6Rnd_Stim_base 
    {
        displayName="6Rnd Bandage Stim";
        ammo="CMD_MedicalDart_Bandage";
    };
    class CMD_6Rnd_Cyanide: CMD_6Rnd_Stim_base 
    {
        displayName="6Rnd Cyanide Stim";
        ammo="CMD_MedicalDart_Cyanide";
    };
    class CMD_6Rnd_Tranq: CMD_6Rnd_Stim_base 
    {
        displayName="6Rnd Tranquilizer Stim";
        ammo="CMD_MedicalDart_Tranq";
    };
    class CMD_6Rnd_Painkiller: CMD_6Rnd_Stim_base 
    {
        displayName="6Rnd Painkiller Stim";
        ammo="CMD_MedicalDart_Painkiller";
    };
    class CMD_6Rnd_EACA: CMD_6Rnd_Stim_base 
    {
        displayName="6Rnd EACA Stim";
        ammo="CMD_MedicalDart_EACA";
    };
    class CMD_6Rnd_TXA: CMD_6Rnd_Stim_base 
    {
        displayName="6Rnd TXA Stim";
        ammo="CMD_MedicalDart_TXA";
    };
	class CMD_6Rnd_Blood: CMD_6Rnd_Stim_base 
    {
        displayName="6Rnd Blood Stim";
        ammo="CMD_MedicalDart_Blood";
    };
};

class cfgWeapons
{
    class ACE_morphine;
    class ACE_elasticBandage;
    class CMD_MedicalDart_Death_Cyanide: ACE_morphine
    {
        displayName="Cyanide Pill";
        author="Gray";
        descriptionShort="Taking the easy way out, just like those Nazi Bastards did.";
        descriptionUse="Neifer told me to.";
        model="\Command\Command_Assets\MalicMalprac\data\cyanide.p3d";
        picture="\Command\Command_Assets\MalicMalprac\data\cyanide.paa";
    };
    class CMD_MedicalDart_Morph_ChocolateMilk: ACE_morphine
    {
        displayName="Choccy Milk";
        author="Gray";
        descriptionShort="For the weak minded.";
        descriptionUse="Slurpy Splurp";
        model="\Command\Command_Assets\MalicMalprac\data\choccymilky.p3d";
        picture="\Command\Command_Assets\MalicMalprac\data\choccymilky.paa";
    };
    class CMD_MedicalDart_Bandages_HelloKitty: ACE_elasticBandage
    {
        displayName="Bandage (Hello Kitty)";
        author="Gray";
        descriptionShort="Great for your ouch pouch.";
        descriptionUse="Because having Fox-1 wasn't enough for the furries..";
        model="\Command\Command_Assets\MalicMalprac\data\bandages.p3d";
        picture="\Command\Command_Assets\MalicMalprac\data\bandages.paa";
    };
    class ACE_bloodIV;
    class CMD_MedicalDart_IV_MugManiac: ACE_bloodIV 
	{
        displayName="Mug IV (1000ml)";
        author="Gray";
        descriptionShort="A mug of warm blood, enjoy it Vampire!";
        descriptionUse="Harvested from warm humans, without their knowledge";
        hiddenSelectionsTextures[]={"\Command\Command_Assets\MalicMalprac\data\mug_bag.paa"};
    };

	class hgun_Rook40_F;
    class CMD_MedicalDart_HG: hgun_Rook40_F 
    {
        scope=2;
        scopeArsenal=2;
        displayName="[CMD] Medical Stim Dispenser";
        author="Gray + Kavik";
        baseWeapon="CMD_MedicalDart_HG";
        magazines[]=
		{
            "CMD_6Rnd_Bandage",
            "CMD_6Rnd_Cyanide",
            "CMD_6Rnd_Tranq",
            "CMD_6Rnd_Painkiller",
            "CMD_6Rnd_EACA",
            "CMD_6Rnd_TXA",
			"CMD_6Rnd_Blood"
        };
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"\Command\Command_Assets\MalicMalprac\data\acFuture_fire",
					3.9810717,
					1,
					2000
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime=0.25;
			recoil="recoil_single_primary_3outof10";
			recoilProne="recoil_single_primary_prone_3outof10";
			dispersion=0;
			minRange=50;
			minRangeProbab=0.30000001;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=350;
			maxRangeProbab=0.050000001;
			aiDispersionCoefX=0;
			aiDispersionCoefY=0;
			aiRateOfFire=2;
			aiRateOfFireDistance=500;
    	};
    };
};