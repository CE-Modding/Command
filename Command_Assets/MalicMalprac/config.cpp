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
            file="\Command\Command_Assets\MalicMalprac\functions";
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
        animationMedic="AinvPknlMstpSnonWnonDnon_medic1";
        sounds[]={{"\z\ace\addons\field_rations\sounds\drink2.ogg",1,1,50}};
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
		cartridge="CE_StimDart_Cartridge_Efx";
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
        craterEffects="";
        effectFly="";
        explosionEffects="";
	};
    class CMD_MedicalDart_Bandage: CMD_MedicalDart_base 
    {
        effectFly="KAV_Healing_Cyan";
        explosionEffects="KAV_Cyan_Healing_Smoke";
        explosive=0.2;
    };
    class CMD_MedicalDart_Cyanide: CMD_MedicalDart_base // Black smoke?
    {};
    class CMD_MedicalDart_Tranq: CMD_MedicalDart_base // Green smoke?
    {};
    class CMD_MedicalDart_Painkiller: CMD_MedicalDart_base // White/Grey smoke?
    {};
    class CMD_MedicalDart_EACA: CMD_MedicalDart_base  // ??? smoke?
    {};
    class CMD_MedicalDart_TXA: CMD_MedicalDart_base // ??? smoke?
    {};
	class CMD_MedicalDart_Blood: CMD_MedicalDart_base
    {
        explosive=0.2;
        effectFly="KAV_Healing_Red";
        explosionEffects="KAV_Blood_Smoke";
    };
};
class cfgMagazines 
{
    class 16rnd_9x21_Mag;
	class CMD_6Rnd_Stim_base: 16rnd_9x21_Mag
	{
		scope=0;
        scopeArsenal=0;
        author="Gray + Kavik";
		count=6;
        tracersEvery=1;
		lastRoundsTracer=0;
		ammo="";
	};
    class CMD_6Rnd_Bandage: CMD_6Rnd_Stim_base 
    {
        scope=2;
        scopeArsenal=2;
        displayName="6Rnd Bandage Stim";
        ammo="CMD_MedicalDart_Bandage";
    };
    class CMD_6Rnd_Cyanide: CMD_6Rnd_Stim_base 
    {
        scope=2;
        scopeArsenal=2;
        displayName="6Rnd Cyanide Stim";
        ammo="CMD_MedicalDart_Cyanide";
    };
    class CMD_6Rnd_Tranq: CMD_6Rnd_Stim_base 
    {
        scope=2;
        scopeArsenal=2;
        displayName="6Rnd Tranquilizer Stim";
        ammo="CMD_MedicalDart_Tranq";
    };
    class CMD_6Rnd_Painkiller: CMD_6Rnd_Stim_base 
    {
        scope=2;
        scopeArsenal=2;
        displayName="6Rnd Painkiller Stim";
        ammo="CMD_MedicalDart_Painkiller";
    };
    class CMD_6Rnd_EACA: CMD_6Rnd_Stim_base 
    {
        scope=2;
        scopeArsenal=2;
        displayName="6Rnd EACA Stim";
        ammo="CMD_MedicalDart_EACA";
    };
    class CMD_6Rnd_TXA: CMD_6Rnd_Stim_base 
    {
        scope=2;
        scopeArsenal=2;
        displayName="6Rnd TXA Stim";
        ammo="CMD_MedicalDart_TXA";
    };
	class CMD_6Rnd_Blood: CMD_6Rnd_Stim_base 
    {
        scope=2;
        scopeArsenal=2;
        displayName="6Rnd Blood Stim";
        ammo="CMD_MedicalDart_Blood";
    };
};

class CfgMagazineWells
{
	class CMD_Stims_9x21
	{
		Magazines[]=
		{
            "CMD_6Rnd_Bandage",
            "CMD_6Rnd_Cyanide",
            "CMD_6Rnd_Tranq",
            "CMD_6Rnd_Painkiller",
            "CMD_6Rnd_EACA",
            "CMD_6Rnd_TXA",
			"CMD_6Rnd_Blood"
		};
	};
};

class cfgWeapons
{
    class ACE_morphine;
    class ACE_elasticBandage;
    class CMD_MedicalDart_Death_Cyanide: ACE_morphine
    {
        scope=2;
        scopeArsenal=2;
        displayName="Cyanide Pill";
        author="Gray + CE_Modding";
        descriptionShort="Taking the easy way out, just like those Nazi Bastards did.";
        descriptionUse="Neifer told me to.";
        model="\Command\Command_Assets\MalicMalprac\data\cyanide.p3d";
        picture="\Command\Command_Assets\MalicMalprac\data\cyanide.paa";
    };
    class CMD_MedicalDart_Morph_ChocolateMilk: ACE_morphine
    {
        scope=2;
        scopeArsenal=2;
        displayName="Choccy Milk";
        author="Gray + CE_Modding";
        descriptionShort="For the weak minded.";
        descriptionUse="Slurpy Splurp";
        model="\Command\Command_Assets\MalicMalprac\data\choccymilky.p3d";
        picture="\Command\Command_Assets\MalicMalprac\data\choccymilky.paa";
    };
    class CMD_MedicalDart_Bandages_HelloKitty: ACE_elasticBandage
    {
        scope=2;
        scopeArsenal=2;
        displayName="Bandage (Hello Kitty)";
        author="Gray + CE_Modding";
        descriptionShort="Great for your ouch pouch.";
        descriptionUse="Because having Fox-1 wasn't enough for the furries..";
        model="\Command\Command_Assets\MalicMalprac\data\bandages.p3d";
        picture="\Command\Command_Assets\MalicMalprac\data\bandages.paa";
    };
    class ACE_bloodIV;
    class CMD_MedicalDart_IV_MugManiac: ACE_bloodIV 
	{
        scope=2;
        scopeArsenal=2;
        displayName="Mug IV (1000ml)";
        author="Gray + CE_Modding";
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
        magazineWell[]=
		{
			"CMD_Stims_9x21"
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




class cfgLights
{
    class KAV_HealingCyan
    {
        color[]={0,1,1,1};
        ambient[]={0,1,1,1};
        brightness=10;
        intensity=4000;
        drawLight=0;
        class Attenuation
        {
            start=0;
            constant=1;
            linear=0;
            quadratic=40;
        };
        dayLight=1;
        position[]={0,0.2,0};
        diffuse[]={0,0,0.1};
    };
    class KAV_HealingRed
    {
        color[]={1,0,0,1};
        ambient[]={1,0,0,1};
        brightness=10;
        intensity=4000;
        drawLight=0;
        class Attenuation
        {
            start=0;
            constant=1;
            linear=0;
            quadratic=40;
        };
        dayLight=1;
        position[]={0,0.2,0};
        diffuse[]={0,0,0.1};
    };
};
class SmokeShellWhiteSmall;
class cfgCloudlets
{
    class KAV_Cyan_Smoke: SmokeShellWhiteSmall
    {
        lifeTime=0.8;
        lifeTimeVar=0.2;
        moveVelocity[]={0,0.3,0};
        moveVelocityVar[]={0.1,0.1,0.1};
        color[]={{0,0.71,0.67,0.8},{0,0.71,0.67,0.3},{0,0.71,0.67,0.25},{0,0.71,0.67,0.2},{0,0.71,0.67,0.15},{0,0.71,0.67,0.2},{0,0.71,0.67,0.01}};
        colorCoef[]={0.2,0.5,0.5,1};
        colorVar[]={0,0,0,1};
        size[]={0.2,0.5,1}; //[0.2,6,10]
    };
    class KAV_Blood_Smoke: SmokeShellWhiteSmall
    {
        lifeTime=0.8;
        lifeTimeVar=0.2;
        moveVelocity[]={0,0.3,0};
        moveVelocityVar[]={0.1,0.1,0.1};
        color[]={{0.4,0.1,0.1,0.8},{0.4,0.1,0.1,0.3},{0.4,0.1,0.1,0.25},{0.4,0.1,0.1,0.2},{0.4,0.1,0.1,0.15},{0.4,0.1,0.1,0.2},{0.4,0.1,0.1,0.01}};
        colorCoef[]={0.3,0.1,0.1,1};
        colorVar[]={0,0,0,1};
        size[]={0.2,0.5,1}; //[0.2,6,10]
    };
    class FxCartridge_slug;
    class CE_StimDart_Cartridge_Efx: FxCartridge_slug
	{
		model="\A3\weapons_f\ammo\cartridge_slug"; // Until we get a dart p3d 
		size[]={0.1};
		_generalMacro="CE_StimDart_Cartridge_Efx";
	};
};
class KAV_Blood_Smoke
{
    class Healing_Blood_Smoke
    {
        simulation="particles";
        type="KAV_Blood_Smoke";
        position[]={0,0,0};
        intensity=1;
        interval=1;
        lifeTime=2;
    };
};
class KAV_Cyan_Healing_Smoke
{
    class Healing_Cyan_Smoke
    {
        simulation="particles";
        type="KAV_Cyan_Smoke";
        position[]={0,0,0};
        intensity=1;
        interval=1;
        lifeTime=2;
    };
};
class KAV_Healing_Cyan
{
    class KAV_Cyan_Healing
    {
        simulation="light";
        type="KAV_HealingCyan";
        position[]={0,0,0};
        intensity=0;
        interval=1;
        lifeTime=1;
    };
};
class KAV_Healing_Red
{
    class KAV_Red_Healing
    {
        simulation="light";
        type="KAV_HealingRed";
        position[]={0,0,0};
        intensity=0;
        interval=1;
        lifeTime=6;
    };
};