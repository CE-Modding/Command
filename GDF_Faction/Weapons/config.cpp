class cfgPatches
{
  class CMD_GDF_Weapons
  {
  	addonRootClass="CMD_GDF";
    units[]={""};
    weapons[]={""};
    requiredVersion=0.1;
    requiredAddons[]={"CMD_GDF","TKE_Weapons"};
  };
};

class cfgAmmo
{
	class TKE_338_Ball;
	class ACE_12Gauge_Pellets_Submunition_No1_Buck;
	class ACE_12Gauge_Pellets_Submunition_No1_Buck_Deploy;
	class ACE_12Gauge_Slug_NoCartridge;
	class B_127x108_Ball;
	class TKE_62x35_Ball;

	class CMD_GDF_SpecOps_Bullet: TKE_62x35_Ball
	{
		hit=12;
		caliber=1.8;
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
	};

	class CMD_GDF_408_Ball: B_127x108_Ball
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		tracerStartTime=0.05;
	};

	class CMD_GDF_408_HV: CMD_GDF_408_Ball
	{
		airFriction=-0.00075; // -0.00065098
	};

	class CMD_GDF_408_AP: CMD_GDF_408_Ball
	{
		hit=50
		caliber=5;
		airFriction=-0.00075;
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
	};

	class CMD_GDF_408_HE: CMD_GDF_408_Ball
	{
		hit=100
		caliber=1;
		explosive=0.2;
		indirectHit=50;
		indirectHitRange=2;		
		fuseDistance=10;
		craterEffects="ExploAmmoCrater";
		explosionEffects="ExploAmmoExplosion";
		deflecting=0;
	};

	class CMD_GDF_12Gauge_Slug: ACE_12Gauge_Slug_NoCartridge // Slug
	{
		hit=40;
		caliber=3;
		model="\A3\Weapons_f\ammo\shell";
	};

	class CMD_GDF_12Gauge_Slug_HE: CMD_GDF_12Gauge_Slug // Slug HE
	{
		hit=100;
		caliber=0;
		indirectHit=20;
		indirectHitRange=1;
		explosive=0.5;
		craterEffects="ExploAmmoCrater";
		explosionEffects="ExploAmmoExplosion";
		deflecting=0;
	};

	class CMD_GDF_12Gauge_Pellets_Submunition_Buck_Deploy: ACE_12Gauge_Pellets_Submunition_No1_Buck_Deploy // Pellets
	{
		hit=16;
		caliber=4;
		timeToLive=2;
		typicalSpeed=500;
		initSpeed=600;
	};

	class CMD_GDF_12Gauge_Pellets_Submunition_Buck: ACE_12Gauge_Pellets_Submunition_No1_Buck // Main shell
	{
		submunitionAmmo="CMD_GDF_12Gauge_Pellets_Submunition_Buck_Deploy";
	};

	class CMD_GDF_338_Ball: TKE_338_Ball
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
};



class cfgMagazines
{
	class TKE_35rnd_62x35_magTY;
	class TKE_ARX12_62x35_magTY;
	class TKE_MD30rnd_575x45_magTY;
	class TKE_20rnd_969x51_magUCN;
	class TKE_100rnd_ucnmmg_mag;
	class TKE_150rnd_62x35_magUCN;
	class ACE_6Rnd_12Gauge_Pellets_No1_Buck;
	class ACE_2Rnd_12Gauge_Slug;
	class 5Rnd_127x108_Mag;
	class WRS_Ar_Magazine;

	class CMD_GDF_SpecOps_Mag: WRS_Ar_Magazine
	{
		ammo="CMD_GDF_SpecOps_Bullet";
		count=45;
		initSpeed=900;
		displayName="45rnd DUR";
		descriptionShort="Caseless Depleted Uranium rounds<br />Caliber: 6.5x39mm<br />Used in: [GDF] SpecOps Rifle";
		tracersEvery=2;
	};

	class CMD_GDF_Rifle_Prototype_Mag: CMD_GDF_SpecOps_Mag
	{
		ammo="CMD_GDF_SpecOps_Bullet";
		count=50;
		initSpeed=900;
		displayName="50rnd DUR";
		descriptionShort="Caseless Depleted Uranium rounds<br />Caliber: 6.5x39mm<br />Used in: [GDF] Prototype Rifle";
		tracersEvery=3;
	};

	class CMD_GDF_5Rnd_Sniper_Mag: 5Rnd_127x108_Mag
	{
		ammo="CMD_GDF_408_Ball";
		displayName="5Rnd .408 Cheytac";
		displayNameShort="FMJ";
		descriptionShort="Caliber: .408 Cheytac<br />Rounds: 5<br />Used in: GDF Sniper";
		tracersEvery=1;
		initSpeed=820; // 820 default
	};

	class CMD_GDF_5Rnd_Sniper_Mag_HV: CMD_GDF_5Rnd_Sniper_Mag
	{
		ammo="CMD_GDF_408_HV";
		displayName="5Rnd .408 Cheytac (High Velocity)";
		displayNameShort="HV";
		descriptionShort="Caliber: .408 Cheytac HV<br />Rounds: 5<br />Used in: GDF Sniper";
		initSpeed=1200;
	};

	class CMD_GDF_5Rnd_Sniper_Mag_AP: CMD_GDF_5Rnd_Sniper_Mag
	{
		ammo="CMD_GDF_408_AP";
		displayName="5Rnd .408 Cheytac (Armor Piercing)";
		displayNameShort="AP";
		descriptionShort="Caliber: .408 Cheytac AP<br />Rounds: 5<br />Used in: GDF Sniper";
		initSpeed=1200;
	};

	class CMD_GDF_5Rnd_Sniper_Mag_HE: CMD_GDF_5Rnd_Sniper_Mag
	{
		ammo="CMD_GDF_408_HE";
		displayName="5Rnd .408 Cheytac (High Explosive)";
		displayNameShort="HE";
		descriptionShort="Caliber: .408 Cheytac HE<br />Rounds: 5<br />Used in: GDF Sniper";
	};

	class CMD_GDF_10Rnd_12Gauge_Slugs: ACE_2Rnd_12Gauge_Slug // Slug Mag
	{
		displayName="10rnd Slugs";
		descriptionShort="Slug";
		displayNameShort="Slug";
		count=10;
		ammo="CMD_GDF_12Gauge_Slug";
		mass=12;
	};

	class CMD_GDF_10Rnd_12Gauge_Slugs_HE: CMD_GDF_10Rnd_12Gauge_Slugs // Slug (HE) Mag
	{
		displayName="10rnd Slugs (HE)";
		descriptionShort="Slug (HE)";
		displayNameShort="Slug (HE)";
		ammo="CMD_GDF_12Gauge_Slug_HE";
		mass=18;
	};

	class CMD_GDF_10Rnd_12Gauge_Flechette: ACE_6Rnd_12Gauge_Pellets_No1_Buck // Flechette Mag
	{
		displayName="10rnd Flechette";
		descriptionShort="Flechette";
		displayNameShort="Flechette";
		count=10;
		ammo="CMD_GDF_12Gauge_Pellets_Submunition_Buck";
		mass=8;
	};

	class CMD_GDF_35rnd_62x35_magTY: TKE_35rnd_62x35_magTY // Assault Rifle Mag
	{
		displayName="PDW 35rnd Mag (Tracer Yellow)";
		count=35;
		tracersEvery=3;
		mass=4;
	};

	class CMD_GDF_150rnd_62x35_mag: TKE_150rnd_62x35_magUCN // LMG Mag
	{
		count=150;
		ammo="TKE_62x35_Ball_TY";
		tracersEvery=4;
	};
	class CMD_GDF_100rnd_mmg_mag: TKE_100rnd_ucnmmg_mag // MMG Mag
	{
		ammo="CMD_GDF_338_Ball";
		tracersEvery=4;
		mass=28;
	};
	class CMD_GDF_200rnd_mmg_mag: CMD_GDF_100rnd_mmg_mag // MMG Mag
	{
		displayName="SCS/AW 200rnd Box Mag";
		descriptionShort="200rnd 338";
		mass=60;
	};
	class CMD_GDF_25rnd_969x51_magTW: TKE_20rnd_969x51_magUCN // Battle Rifle Mag
	{
		displayName="Battle Rifle 25rnd Mag (Tracer Yellow)";
		count=25;
		tracersEvery=2;
		mass=10;
	};
	class CMD_GDF_25rnd_575x45_magTY: TKE_MD30rnd_575x45_magTY // Scout Rifle Mag 
	{
		displayName="Scout Rifle 25rnd Mag (Tracer Yellow)";
		count=25;
		tracersEvery=1;
		mass=4;
	};
	class CMD_GDF_ARX12_62x35_magTY: TKE_ARX12_62x35_magTY // Burst Rifle Mag
	{
		displayName="Burst Rifle 45rnd Mag (Tracer Yellow)";
		count=45;
		tracersEvery=3;
		mass=10;
	};
	class CMD_GDF_45rnd_62x35_magTY: TKE_35rnd_62x35_magTY // Assault Rifle Mag
	{
		displayName="Assualt Rifle 45rnd Mag (Tracer Yellow)";
		count=45;
		tracersEvery=3;
	};
};

class CfgRecoils
{
	class recoil_CMD_GDF_Rifle_Burst
    {
        muzzleOuter[] = {0.09,0.30,0.09,0.050};
        muzzleInner[] = {0, 0, 0.070, 0.070};
        kickBack[] = {0.01, 0.02};
        permanent = 0.030;
        temporary = 0.0075;
    };
    class recoil_CMD_GDF_Rifle_Scout
    {
        muzzleOuter[] = {0.08,0.28,0.08,0.045};
        muzzleInner[] = {0, 0, 0.062, 0.062};
        kickBack[] = {0.01, 0.02};
        permanent = 0.035;
        temporary = 0.006;
    };
    class recoil_CMD_GDF_Rifle_Prototype
    {
        muzzleOuter[] = {0.1,0.30,0.1,0.060};
        muzzleInner[] = {0, 0, 0.080, 0.080};
        kickBack[] = {0.015, 0.025};
        permanent = 0.035;
        temporary = 0.009;
    };
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CowsSlot_Rail;
class MuzzleSlot_65;
class UnderBarrelSlot;
class PointerSlot_Rail;
class WeaponSlotsInfo;
class cfgWeapons
{
	class TKE_BPRA5; // Mastiff
	class TKE_MDStdRifleGrey; // Velites
	class TKE_UCNRifle2; // Carnivore
	class TKE_UCNDMR; // Falcon
	class TKE_UCNMMG; // Cerberus
	class TKE_UCNLMG; // Ripper
	class TKE_UCNRifle3; // Viper
	class TKE_UCNBPRifle; // BPR
	class TKE_MDSniperGrey; // Veretum sniper
	class WRS_Weapon_AR_2;
	class WRS_Weapon_Sniper;
	class WRS_Weapon_AR;

	class CMD_GDF_Rifle_SpecOps: WRS_Weapon_AR
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot_Rail
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				displayName="$STR_A3_CowsSlot0";
				class compatibleItems
				{
					#include "\GDF_Faction\Weapons\Attachment_HPPs\ScoutRifle_Sights.hpp"
				};
			};
			class MuzzleSlot
			{
			};
			class UnderBarrelSlot
			{
			};
			class PointerSlot: PointerSlot_Rail
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				displayName="$STR_A3_PointerSlot0";
			};
		};
		recoil="recoil_CMD_GDF_Rifle_Prototype";
		magazines[]={"CMD_GDF_SpecOps_Mag"};
		dispersion=0;
		displayName="[GDSF] SpecOps Rifle";
		baseWeapon="CMD_GDF_Rifle_SpecOps";

		class Library
		{
			libTextDesc="Its like an M4, but SCI-FI ok?";
		};
		muzzles[]=
		{
			"this"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_01",
					0.50118721,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_02",
					0.50118721,
					1.1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"WBK_SCIFI_AR_SoundSet",
					"SPAR02_silencerTail_SoundSet",
					"SPAR02_silencerInteriorTail_SoundSet"
				};
			};
			reloadTime=0.085000001;
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
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_01",
					0.50118721,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_02",
					0.50118721,
					1.1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"WBK_SCIFI_AR_SoundSet",
					"SPAR02_silencerTail_SoundSet",
					"SPAR02_silencerInteriorTail_SoundSet"
				};
			};
			reloadTime=0.085000001;
			recoil="recoil_auto_primary_3outof10";
			recoilProne="recoil_auto_primary_prone_3outof10";
			dispersion=0;
			minRange=0;
			minRangeProbab=0.1;
			midRange=25;
			midRangeProbab=0.69999999;
			maxRange=70;
			maxRangeProbab=0.050000001;
			aiRateOfFire=0.0049999999;
			aiRateOfFireDistance=70;
			aiDispersionCoefY=3;
			aiDispersionCoefX=2;
		};
		class single_medium_optics1: FullAuto
		{
			showToPlayer=0;
			dispersion=0.00086999999;
			aiRateOfFire=8;
			aiRateOfFireDistance=700;
		};
		class single_medium_optics2: FullAuto
		{
			showToPlayer=0;
			dispersion=0.00086999999;
			aiRateOfFire=5;
			aiRateOfFireDistance=500;
		};
		class single_far_optics1: FullAuto
		{
			showToPlayer=0;
			dispersion=0.00086999999;
			aiRateOfFire=5;
			aiRateOfFireDistance=500;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer=0;
			dispersion=0.00086999999;
			aiRateOfFire=5;
			aiRateOfFireDistance=500;
			aiBurstTerminable=1;
		};
	};

	class CMD_GDF_Rifle_Prototype: WRS_Weapon_AR_2
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot_Rail
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				displayName="$STR_A3_CowsSlot0";
				class compatibleItems
				{
					#include "\GDF_Faction\Weapons\Attachment_HPPs\General_Purpose_Sights.hpp"
				};
			};
			class MuzzleSlot
			{
			};
			class UnderBarrelSlot
			{
			};
			class PointerSlot
			{
			};
			mass=10;
		};
		magazines[]=
		{
			"CMD_GDF_Rifle_Prototype_Mag"
		};
		displayName="[GDSF] Prototype Rifle";
		recoil="recoil_CMD_GDF_Rifle_Prototype";
		baseWeapon="CMD_GDF_Rifle_Prototype";
		muzzles[]=
		{
			"this", "Secondary"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_01",
					0.50118721,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_02",
					0.50118721,
					1.1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"WBK_SCIFI_RAPTOR_SoundSet",
					"SPAR02_Tail_SoundSet",
					"SPAR02_InteriorTail_SoundSet"
				};
			};
			reloadTime=0.067;
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
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_01",
					0.50118721,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_02",
					0.50118721,
					1.1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"WBK_SCIFI_RAPTOR_SoundSet",
					"SPAR02_Tail_SoundSet",
					"SPAR02_InteriorTail_SoundSet"
				};
			};
			reloadTime=0.067;
			recoil="recoil_auto_primary_3outof10";
			recoilProne="recoil_auto_primary_prone_3outof10";
			dispersion=0;
			minRange=0;
			minRangeProbab=0.1;
			midRange=25;
			midRangeProbab=0.69999999;
			maxRange=70;
			maxRangeProbab=0.050000001;
			aiRateOfFire=0.0049999999;
			aiRateOfFireDistance=70;
			aiDispersionCoefY=3;
			aiDispersionCoefX=2;
		};
		class Secondary: WRS_Weapon_Sniper
		{
			autoFire=0;
			modes[]={"Single"};
		    magazines[] =
		    {
		        "WRS_Sniper_Magazine"
		    };
		};
		class single_medium_optics1: FullAuto
		{
			showToPlayer=0;
			dispersion=0.00086999999;
			aiRateOfFire=8;
			aiRateOfFireDistance=700;
		};
		class single_medium_optics2: FullAuto
		{
			showToPlayer=0;
			dispersion=0.00086999999;
			aiRateOfFire=5;
			aiRateOfFireDistance=500;
		};
		class single_far_optics1: FullAuto
		{
			showToPlayer=0;
			dispersion=0.00086999999;
			aiRateOfFire=5;
			aiRateOfFireDistance=500;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer=0;
			dispersion=0.00086999999;
			aiRateOfFire=5;
			aiRateOfFireDistance=500;
			aiBurstTerminable=1;
		};
	};

	class CMD_GDF_Rifle_Sniper: TKE_MDSniperGrey
	{
		displayName="[GDF] Sniper Rifle";
		magazines[]={"CMD_GDF_5Rnd_Sniper_Mag","CMD_GDF_5Rnd_Sniper_Mag_HV","CMD_GDF_5Rnd_Sniper_Mag_AP","CMD_GDF_5Rnd_Sniper_Mag_HE"};
		magazineWell[]={};
		baseWeapon="CMD_GDF_Rifle_Sniper";
	};

	class CMD_GDF_Shotgun: TKE_UCNBPRifle
	{
		displayName="[GDF] Shotgun";
		magazines[]={"CMD_GDF_10Rnd_12Gauge_Flechette","CMD_GDF_10Rnd_12Gauge_Slugs","CMD_GDF_10Rnd_12Gauge_Slugs_HE"};
		magazineWell[]={};
		baseWeapon="CMD_GDF_Shotgun";
		discreteDistanceInitIndex=0;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot_Rail
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				iconPosition[]={0.44999999,0.28};
				iconScale=0.2;
				class compatibleItems
				{
					#include "\GDF_Faction\Weapons\Attachment_HPPs\General_Purpose_Sights.hpp"
				};
			};
			class MuzzleSlot: MuzzleSlot_65
			{
				iconPosition[]={0,0.44999999};
				iconScale=0.2;
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				linkProxy="\a3\data_f_mark\proxies\weapon_slots\underbarrel";
				iconPinpoint="center";
				iconPosition[]={0.2,0.69999999};
				iconScale=0.2;
			};
			class PointerSlot: PointerSlot_Rail
			{
				iconPosition[]={0.25,0.40000001};
				iconScale=0.25;
			};
			mass=120;
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]={"HunterShotgun_01_Shot_SoundSet","HunterShotgun_01_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"WBK_TKE_ARBSilenced_SoundSet",
					"Msbs65_01_Tail_Int_Silencer_SoundSet"
				};
			};
			reloadTime=0.1;
			dispersion=0.00086999999;
			minRange=2;
			minRangeProbab=0.5;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.30000001;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]={"HunterShotgun_01_Shot_SoundSet","HunterShotgun_01_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"WBK_TKE_ARBSilenced_SoundSet",
					"Msbs65_01_Tail_Int_Silencer_SoundSet"
				};
			};
			reloadTime=0.15;
			dispersion=0.00086999999;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		class FullAuto_medium: FullAuto
		{
			showToPlayer=0;
			burst=3;
			aiBurstTerminable=1;
			minRange=2;
			minRangeProbab=0.5;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
			aiRateOfFireDistance=200;
		};
	};

	class CMD_GDF_SMG: TKE_UCNRifle3
	{
		displayName="[GDF] PDW";
		magazines[]={"CMD_GDF_35rnd_62x35_magTY"};
		magazineWell[]={};
		baseWeapon="CMD_GDF_SMG";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot_Rail
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				iconPosition[]={0.44999999,0.28};
				iconScale=0.2;
				class compatibleItems
				{
					#include "\GDF_Faction\Weapons\Attachment_HPPs\General_Purpose_Sights.hpp"
				};
			};
			class MuzzleSlot: MuzzleSlot_65
			{
				iconPosition[]={0,0.44999999};
				iconScale=0.2;
			};
			class PointerSlot: PointerSlot_Rail
			{
				iconPosition[]={0.25,0.40000001};
				iconScale=0.25;
			};
			mass=60;
		};
	};

	class CMD_GDF_LMG: TKE_UCNLMG
	{
		displayName="[GDF] Light Machine Gun";
		magazines[]={"CMD_GDF_150rnd_62x35_mag"};
		magazineWell[]={};
		baseWeapon="CMD_GDF_LMG";
		modes[]={"manual","BurstFast","single","close","short","medium","far_optic1","far_optic2"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot_Rail
			
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				iconPosition[]={0.44999999,0.28};
				iconScale=0.2;
				class compatibleItems
				{
					#include "\GDF_Faction\Weapons\Attachment_HPPs\General_Purpose_Sights.hpp"
				};
			};
			class MuzzleSlot: MuzzleSlot_65
			{
				iconPosition[]={0,0.44999999};
				iconScale=0.2;
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				linkProxy="\a3\data_f_mark\proxies\weapon_slots\underbarrel";
				iconPinpoint="center";
				iconPosition[]={0.215,0.685};
				iconScale=0.34999999;
			};
			class PointerSlot: PointerSlot_Rail
			{
				iconPosition[]={0.25,0.40000001};
				iconScale=0.25;
			};
			mass=120;
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"WBK_TKE_ARBV2_SoundSet",
					"DMR03_tail_SoundSet",
					"DMR03_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"WBK_TKE_ARBSilenced_SoundSet",
					"SPAR02_silencerTail_SoundSet",
					"SPAR02_silencerInteriorTail_SoundSet"
				};
			};
			showToPlayer=0;
			reloadTime=0.086000003;
			dispersion=0.00096999999;
			minRange=2;
			minRangeProbab=0.0099999998;
			midRange=200;
			midRangeProbab=0.0099999998;
			maxRange=400;
			maxRangeProbab=0.0099999998;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"WBK_TKE_ARBV2_SoundSet",
					"DMR03_tail_SoundSet",
					"DMR03_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"WBK_TKE_ARBSilenced_SoundSet",
					"SPAR02_silencerTail_SoundSet",
					"SPAR02_silencerInteriorTail_SoundSet"
				};
			};
			showToPlayer=0;
			reloadTime=0.086000003;
			dispersion=0.00096999999;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		class BurstFast: FullAuto
		{
			showToPlayer=1;
			autoFire=0
			burst=5;
			reloadTime=0.0430000015;
			dispersion=0.002854999985;
			textureType="burst";
			displayName="Burst";
		};
		class manual: FullAuto
		{
			reloadTime=0.086000003;
			dispersion=0.00096999999;
			recoilProne="recoil_single_prone_mx_sw";
			minRange=0;
			minRangeProbab=0.30000001;
			midRange=5;
			midRangeProbab=0.69999999;
			maxRange=10;
			maxRangeProbab=0.039999999;
			showToPlayer=1;
		};
		class close: manual
		{
			burst=10;
			aiBurstTerminable=1;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=50;
			minRange=10;
			minRangeProbab=0.050000001;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.039999999;
			showToPlayer=0;
		};
		class short: close
		{
			burst=8;
			aiBurstTerminable=1;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.050000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.039999999;
		};
		class medium: close
		{
			burst=5;
			aiRateOfFire=4;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.050000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.1;
		};
		class far_optic1: close
		{
			burst=3;
			requiredOpticType=1;
			aiRateOfFire=5;
			aiRateOfFireDistance=650;
			minRange=300;
			minRangeProbab=0.050000001;
			midRange=500;
			midRangeProbab=0.40000001;
			maxRange=650;
			maxRangeProbab=0.0099999998;
		};
		class far_optic2: far_optic1
		{
			burst=3;
			requiredOpticType=2;
			minRange=400;
			minRangeProbab=0.050000001;
			midRange=750;
			midRangeProbab=0.69999999;
			maxRange=900;
			maxRangeProbab=0.0099999998;
			aiRateOfFire=10;
			aiRateOfFireDistance=900;
		};
	};

	class CMD_GDF_MMG: TKE_UCNMMG
	{
		displayName="[GDF] Medium Machine Gun";
		magazines[]={"CMD_GDF_100rnd_mmg_mag","CMD_GDF_200rnd_mmg_mag"};
		magazineWell[]={};
		baseWeapon="CMD_GDF_MMG";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot_Rail
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				iconPosition[]={0.44999999,0.28};
				iconScale=0.2;
				class compatibleItems
				{
					#include "\GDF_Faction\Weapons\Attachment_HPPs\MMG_Sights.hpp"
				};
			};
			class MuzzleSlot: MuzzleSlot_65
			{
				iconPosition[]={0,0.44999999};
				iconScale=0.2;
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				linkProxy="\a3\data_f_mark\proxies\weapon_slots\underbarrel";
				iconPinpoint="center";
				iconPosition[]={0.215,0.685};
				iconScale=0.34999999;
			};
			class PointerSlot: PointerSlot_Rail
			{
				iconPosition[]={0.25,0.40000001};
				iconScale=0.25;
			};
			mass=220;
		};
	};

	class CMD_GDF_Rifle_Battle: TKE_UCNDMR
	{
		displayName="[GDF] Battle Rifle";
		magazines[]={"CMD_GDF_25rnd_969x51_magTW"};
		magazineWell[]={};
		initSpeed=-1.2;
		baseWeapon="CMD_GDF_Rifle_Battle";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot_Rail
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				iconPosition[]={0.44999999,0.28};
				iconScale=0.2;
				class compatibleItems
				{
					#include "\GDF_Faction\Weapons\Attachment_HPPs\General_Purpose_Sights.hpp"
				};
			};
			class MuzzleSlot: MuzzleSlot_65
			{
				iconPosition[]={0,0.44999999};
				iconScale=0.2;
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				linkProxy="\a3\data_f_mark\proxies\weapon_slots\underbarrel";
				iconPinpoint="center";
				iconPosition[]={0.215,0.685};
				iconScale=0.34999999;
			};
			class PointerSlot: PointerSlot_Rail
			{
				iconPosition[]={0.25,0.40000001};
				iconScale=0.25;
			};
			mass=120;
		};
	};

	class CMD_GDF_Rifle_Assault: TKE_UCNRifle2
	{
		displayName="[GDF] Assault Rifle";
		magazines[]={"CMD_GDF_45rnd_62x35_magTY"};
		magazineWell[]={};
		baseWeapon="CMD_GDF_Rifle_Assault";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot_Rail
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				iconPosition[]={0.44999999,0.28};
				iconScale=0.2;
				class compatibleItems
				{
					#include "\GDF_Faction\Weapons\Attachment_HPPs\General_Purpose_Sights.hpp"
				};
			};
			class MuzzleSlot: MuzzleSlot_65
			{
				iconPosition[]={0,0.44999999};
				iconScale=0.2;
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				linkProxy="\a3\data_f_mark\proxies\weapon_slots\underbarrel";
				iconPinpoint="center";
				iconPosition[]={0.2,0.69999999};
				iconScale=0.2;
			};
			class PointerSlot: PointerSlot_Rail
			{
				iconPosition[]={0.25,0.40000001};
				iconScale=0.25;
			};
			mass=100;
		};
		modes[]=
		{
			"Single",
			"FullAuto",
			"FullAutoFast",
			"fullauto_medium",
			"single_medium_optics1",
			"single_far_optics2"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"WBK_TKE_ARB_SoundSet",
					"AK12_Tail_SoundSet",
					"AK12_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"WBK_TKE_ARBSilenced_SoundSet",
					"SPAR02_silencerTail_SoundSet",
					"SPAR02_silencerInteriorTail_SoundSet"
				};
			};
			showToPlayer=0;
			reloadTime=0.096000001;
			dispersion=0.00086999999;
			minRange=2;
			minRangeProbab=0.5;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.30000001;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"WBK_TKE_ARB_SoundSet",
					"AK12_Tail_SoundSet",
					"AK12_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"WBK_TKE_ARBSilenced_SoundSet",
					"SPAR02_silencerTail_SoundSet",
					"SPAR02_silencerInteriorTail_SoundSet"
				};
			};
			reloadTime=0.096000001;
			dispersion=0.001;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		class FullAutoFast: FullAuto
		{
			reloadTime=0.06;
			textureType="fastAuto";
		};
		class FullAuto_medium: FullAuto
		{
			showToPlayer=0;
			burst=3;
			aiBurstTerminable=1;
			minRange=2;
			minRangeProbab=0.5;
			midRange=75;
			midRangeProbab=0.69999999;
			maxRange=150;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
			aiRateOfFireDistance=200;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType=1;
			showToPlayer=0;
			minRange=2;
			minRangeProbab=0.2;
			midRange=450;
			midRangeProbab=0.69999999;
			maxRange=600;
			maxRangeProbab=0.2;
			aiRateOfFire=6;
			aiRateOfFireDistance=600;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType=2;
			showToPlayer=0;
			minRange=100;
			minRangeProbab=0.1;
			midRange=500;
			midRangeProbab=0.60000002;
			maxRange=700;
			maxRangeProbab=0.050000001;
			aiRateOfFire=8;
			aiRateOfFireDistance=700;
		};
	};

	class CMD_GDF_Rifle_Scout: TKE_MDStdRifleGrey
	{
		displayName="[GDF] Scout Rifle";
		initSpeed=-1.5;
		magazines[]={"CMD_GDF_25rnd_575x45_magTY"};
		magazineWell[]={};
		baseWeapon="CMD_GDF_Rifle_Scout";
		recoil="recoil_CMD_GDF_Rifle_Scout";
		modes[]=
		{
			"Single",
			"FullAuto",
			"fullauto_medium",
			"single_medium_optics1",
			"single_far_optics2"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot_Rail
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				iconPosition[]={0.44999999,0.28};
				iconScale=0.2;
				class compatibleItems
				{
					#include "\GDF_Faction\Weapons\Attachment_HPPs\ScoutRifle_Sights.hpp"
				};
			};
			class MuzzleSlot: MuzzleSlot_65
			{
				iconPosition[]={0,0.44999999};
				iconScale=0.2;
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				linkProxy="\a3\data_f_mark\proxies\weapon_slots\underbarrel";
				iconPinpoint="center";
				iconPosition[]={0.2,0.69999999};
				iconScale=0.2;
			};
			class PointerSlot: PointerSlot_Rail
			{
				iconPosition[]={0.25,0.40000001};
				iconScale=0.25;
			};
			mass=70;
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"WBK_TKE_MAW_SoundSet",
					"DMR03_tail_SoundSet",
					"DMR03_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"WBK_TKE_ARBSilenced_SoundSet",
					"SPAR02_silencerTail_SoundSet",
					"SPAR02_silencerInteriorTail_SoundSet"
				};
			};
			reloadTime=0.090000004;
			dispersion=0.00086999999;
			minRange=2;
			minRangeProbab=0.5;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.30000001;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"WBK_TKE_MAW_SoundSet",
					"DMR03_tail_SoundSet",
					"DMR03_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"WBK_TKE_ARBSilenced_SoundSet",
					"SPAR02_silencerTail_SoundSet",
					"SPAR02_silencerInteriorTail_SoundSet"
				};
			};
			showToPlayer=0;
			reloadTime=0.090000004;
			dispersion=0.00086999999;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		class FullAuto_medium: FullAuto
		{
			showToPlayer=0;
			burst=3;
			aiBurstTerminable=1;
			minRange=2;
			minRangeProbab=0.5;
			midRange=75;
			midRangeProbab=0.69999999;
			maxRange=150;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
			aiRateOfFireDistance=200;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType=1;
			showToPlayer=0;
			minRange=2;
			minRangeProbab=0.2;
			midRange=450;
			midRangeProbab=0.69999999;
			maxRange=600;
			maxRangeProbab=0.2;
			aiRateOfFire=6;
			aiRateOfFireDistance=600;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType=2;
			showToPlayer=0;
			minRange=100;
			minRangeProbab=0.1;
			midRange=500;
			midRangeProbab=0.60000002;
			maxRange=700;
			maxRangeProbab=0.050000001;
			aiRateOfFire=8;
			aiRateOfFireDistance=700;
		};
	};
	
	class CMD_GDF_Rifle_Burst: TKE_BPRA5
	{
		displayName="[GDF] Burst Rifle";
		recoil="recoil_CMD_GDF_Rifle_Burst";
		magazines[]={"CMD_GDF_ARX12_62x35_magTY"};
		magazineWell[]={};
		baseWeapon="CMD_GDF_Rifle_Burst";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot_Rail
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				iconPosition[]={0.44999999,0.28};
				iconScale=0.2;
				class compatibleItems
				{
					#include "\GDF_Faction\Weapons\Attachment_HPPs\General_Purpose_Sights.hpp"
				};
			};
			class MuzzleSlot: MuzzleSlot_65
			{
				iconPosition[]={0,0.44999999};
				iconScale=0.2;
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				linkProxy="\a3\data_f_mark\proxies\weapon_slots\underbarrel";
				iconPinpoint="center";
				iconPosition[]={0.2,0.69999999};
				iconScale=0.2;
			};
			class PointerSlot: PointerSlot_Rail
			{
				iconPosition[]={0.25,0.40000001};
				iconScale=0.25;
			};
			mass=100;
		};
		modes[]=
		{
			"Burst",
			"Single",
			"FullAuto",
			"fullauto_medium",
			"single_medium_optics1",
			"single_far_optics2"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"WBK_TKE_MAW_SoundSet",
					"DMR03_tail_SoundSet",
					"DMR03_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"WBK_TKE_ARBSilenced_SoundSet",
					"SPAR02_silencerTail_SoundSet",
					"SPAR02_silencerInteriorTail_SoundSet"
				};
			};
			reloadTime=0.096000001;
			dispersion=0.00086999999; 
			minRange=2;
			minRangeProbab=0.5;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.30000001;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"WBK_TKE_MAW_SoundSet",
					"DMR03_tail_SoundSet",
					"DMR03_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"WBK_TKE_ARBSilenced_SoundSet",
					"SPAR02_silencerTail_SoundSet",
					"SPAR02_silencerInteriorTail_SoundSet"
				};
			};
			showToPlayer=0;
			reloadTime=0.096000001;
			dispersion=0.00086999999;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		class Burst: FullAuto
		{
			displayName="Burst";
			textureType="burst";
			showToPlayer=1;
			reloadTime=0.0667;
			autoFire=0;
			burst=3;
			aiBurstTerminable=1;
			minRange=0;
			minRangeProbab=0.5;
			midRange=0;
			midRangeProbab=0.69999999;
			maxRange=0;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
			aiRateOfFireDistance=200;
		};
		class FullAuto_medium: FullAuto
		{
			showToPlayer=0;
			burst=3;
			aiBurstTerminable=1;
			minRange=2;
			minRangeProbab=0.5;
			midRange=75;
			midRangeProbab=0.69999999;
			maxRange=150;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
			aiRateOfFireDistance=200;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType=1;
			showToPlayer=0;
			minRange=2;
			minRangeProbab=0.2;
			midRange=450;
			midRangeProbab=0.69999999;
			maxRange=600;
			maxRangeProbab=0.2;
			aiRateOfFire=6;
			aiRateOfFireDistance=600;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType=2;
			showToPlayer=0;
			minRange=100;
			minRangeProbab=0.1;
			midRange=500;
			midRangeProbab=0.60000002;
			maxRange=700;
			maxRangeProbab=0.050000001;
			aiRateOfFire=8;
			aiRateOfFireDistance=700;
		};
	};
};

class CfgFunctions
{
    class Command
    {
        class Functions
        {
        	file = "GDF_Faction\Weapons\Functions";
            class ragdollHit {};
        };
    };
};

class Extended_HitPart_EventHandlers
{
    class CAManBase
    {
        CMDRagdollHit = "(_this select 0) call Command_fnc_ragdollHit";
    };
};