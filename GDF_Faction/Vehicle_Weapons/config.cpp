class cfgPatches
{
  class CMD_GDF_Vehicle_Weapons
  {
  	addonRootClass="CMD_GDF";
    units[]={""};
    weapons[]={""};
    requiredVersion=0.1;
    requiredAddons[]={"CMD_GDF"};
  };
};

class cfgAmmo
{
	class B_30mm_AP_Tracer_Yellow;
	class R_80mm_HE;
	class ammo_Bomb_SDB;
	class Cannon_30mm_HE_Plane_CAS_02_F;
	class B_65x39_Minigun_Caseless_Yellow_splash;
	class B_40mm_GPR_Tracer_Yellow;
	class B_40mm_APFSDS_Tracer_Yellow;
	class TKE_Bullet_30mm_AA;
	class Sh_120mm_APFSDS_Tracer_Yellow;
	class Sh_120mm_HEAT_MP_T_Yellow;
	class M_AT;
	class CE_SLAP_127x99;

	class CMD_GDF_SLAP_127x99_Y: CE_SLAP_127x99
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		tracerStartTime=0.03;
		cost=1;
	};

	class CMD_GDF_82mm_HEAT_T_Yellow: Sh_120mm_HEAT_MP_T_Yellow
	{
		hit=250;
		indirectHit=20;
		indirectHitRange=1.5;
		caliber=75;
		aiAmmoUsageFlags[]={"128 + 512"};
		aiAmmoUsageFlagsStrict=0;
		submunitionAmmo="";
		tracerStartTime=0;
		typicalSpeed=500;
		cost=10;
	};

	class CMD_GDF_Bullet_30mm_AA: TKE_Bullet_30mm_AA
	{
		aiAmmoUsageFlags="256";
		aiAmmoUsageFlagsStrict = 1;
		ace_frag_skip=1;
		hit=60;
		cost=5;
	};

	class CMD_GDF_40mm_GPR: B_40mm_GPR_Tracer_Yellow
	{
		aiAmmoUsageFlags="128 + 256 + 512";
		aiAmmoUsageFlagsStrict = 1;
		caliber=4.6;
		hit=70;
		indirectHit=8;
		indirectHitRange=2;
	};

	class CMD_GDF_40mm_APFSDS: B_40mm_APFSDS_Tracer_Yellow
	{
		aiAmmoUsageFlags="512";
		aiAmmoUsageFlagsStrict = 1;
		caliber=7;
		hit=120;
	};

	class CMD_GDF_B_65x39_Minigun_Caseless_Yellow: B_65x39_Minigun_Caseless_Yellow_splash
	{
		hit=14
		indirectHit=0
		indirectHitRange=0
	};

	class CMD_GDF_Cannon_30mm_HE_Plane_CAS_02_F: Cannon_30mm_HE_Plane_CAS_02_F
	{
		ace_frag_skip=1;
		aiAmmoUsageFlags="64 + 128 + 256 + 512";
		hit=50;
		caliber=3;
		indirectHit=8;
		indirectHitRange=2;
		model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";

	};

	class CMD_GDF_ammo_Bomb_SDB: ammo_Bomb_SDB
	{
		ace_frag_skip=1;
		hit=300;
		indirectHit=30;
		indirectHitRange=3;
		laserlock=0;
		whistleDist=200;
		aiAmmoUsageFlags="64 + 128 + 512";
		autoSeekTarget=0;
	};

	class CMD_GDF_Player_ammo_Bomb_SDB: CMD_GDF_ammo_Bomb_SDB
	{
		hit=500;
		indirectHit=80;
		indirectHitRange=10;
	};

	class CMD_GDF_R_80mm_HE: R_80mm_HE
	{
		hit=250;
		indirectHit=20;
		indirectHitRange=3;
		whistleDist=50;
		cost=50;
	};

	class CMD_GDF_30mm: B_30mm_AP_Tracer_Yellow
	{
		aiAmmoUsageFlags="64 + 128";
		aiAmmoUsageFlagsStrict = 1;
		hit=25;
		indirectHit=0;
		indirectHitRange=0;
		caliber=4;
		tracerStartTime=0;
		weaponType="default";
	};
	class CMD_GDF_30mm_AP: CMD_GDF_30mm
	{
		aiAmmoUsageFlags="256";
		aiAmmoUsageFlagsStrict = 1;
		hit=80;
		indirectHit=0;
		indirectHitRange=0;
		caliber=6;
		tracerStartTime=0;
	};
	class CMD_GDF_30mm_AA: CMD_GDF_30mm
	{
		aiAmmoUsageFlags="512";
		aiAmmoUsageFlagsStrict = 1;
		hit=40;
		indirectHit=20;
		indirectHitRange=1.5;
		caliber=3;
		tracerStartTime=0;
		explosive=0.6;
	};
};



class cfgMagazines
{
	class 250Rnd_30mm_APDS_shells_Tracer_Yellow;
	class PylonRack_19Rnd_Rocket_Skyfire;
	class PylonRack_Bomb_SDB_x4;
	class 500Rnd_Cannon_30mm_Plane_CAS_02_F;
	class 500Rnd_65x39_Belt_Tracer_Yellow_Splash;
	class 40Rnd_40mm_APFSDS_Tracer_Yellow_shells;
	class 60Rnd_40mm_GPR_Tracer_Yellow_shells;
	class TKE_30mm_HE_700Rnd;
	class PylonRack_12Rnd_missiles_black;
	class 20Rnd_120mm_HEAT_MP_T_Yellow;
	class CE_GAU19_SLAPT_pod_Mag;

	class CMD_GDF_GAU19_SLAPT_pod_Mag_Y: CE_GAU19_SLAPT_pod_Mag
	{
		displayName="GDF - GAU19 [SLAP]";
		ammo="CMD_GDF_SLAP_127x99_Y";
		hardpoints[]={"CE_GAU19_Hardpoint", "CE_SCIFI_MediumCannon_Hardpoint"};
		pylonWeapon="CMD_GDF_GAU19_SLAPT_pod";
	};

	class CMD_GDF_50Rnd_82mm_HEAT_T_Yellow: 20Rnd_120mm_HEAT_MP_T_Yellow
	{
		displayName="82mm HEAT-MP-T";
		ammo="CMD_GDF_82mm_HEAT_T_Yellow";
		initSpeed=600;
	};


	class CMD_GDF_PylonRack_12Rnd_missiles_black: PylonRack_12Rnd_missiles_black
	{
		displayName="DAR (Black) AI";
		model="\A3\Weapons_F\DynamicLoadout\PylonPod_12x_Rocket_DAR_black_F.p3d";
		pylonWeapon="CMD_GDF_rockets_Skyfire";
		hardpoints[]={"CMD_GDF_O_SKYFIRE"};
	};

	class CMD_GDF_30mm_AA_1000Rnd: TKE_30mm_HE_700Rnd
	{
		ammo="CMD_GDF_Bullet_30mm_AA";
		count=1000;
	};

	class CMD_GDF_40Rnd_40mm_APFSDS: 40Rnd_40mm_APFSDS_Tracer_Yellow_shells
	{
		ammo="CMD_GDF_40mm_APFSDS";
	};

	class CMD_GDF_60Rnd_40mm_GPR: 60Rnd_40mm_GPR_Tracer_Yellow_shells
	{
		ammo="CMD_GDF_40mm_GPR";
	};

	class CMD_GDF_2000Rnd_65x39_Belt_Tracer_Yellow: 500Rnd_65x39_Belt_Tracer_Yellow_Splash
	{
		ammo="CMD_GDF_B_65x39_Minigun_Caseless_Yellow";
		count=2000;
	};

	class CMD_GDF_500Rnd_Cannon_30mm_Plane_CAS_02_F: 500Rnd_Cannon_30mm_Plane_CAS_02_F
	{
		ammo="CMD_GDF_Cannon_30mm_HE_Plane_CAS_02_F";
		displayName="30mm HEI-T";
		displayNameShort="30mm HEI-T";
		count=500;
		tracersEvery=2;
		pylonWeapon="CMD_GDF_Cannon_30mm_Plane_CAS_02_F";
	};

	class CMD_GDF_PylonRack_Bomb_SDB_x4: PylonRack_Bomb_SDB_x4
	{
		ammo="CMD_GDF_ammo_Bomb_SDB";
		displayName="4x SDB (AI)";
		displayNameShort="Bomb";
		descriptionShort="Very weak bombs with 3m AoE. Used to instill fear.";
		pylonWeapon="CMD_GDF_weapon_SDBLauncher";
		hardpoints[]={"CMD_GDF_O_BOMB_PYLON"};
	};

	class CMD_GDF_Player_PylonRack_Bomb_SDB_x4: PylonRack_Bomb_SDB_x4
	{
		ammo="CMD_GDF_Player_ammo_Bomb_SDB";
		displayName="4x SDB";
		displayNameShort="Bomb";
		descriptionShort="Small bombs with 7m AoE.";
		pylonWeapon="CMD_GDF_weapon_SDBLauncher";
		hardpoints[]={"CMD_GDF_O_BOMB_PYLON"};
	};

	class CMD_GDF_PylonRack_19Rnd_Rocket_Skyfire: PylonRack_19Rnd_Rocket_Skyfire
	{
		ammo="CMD_GDF_R_80mm_HE";
		displayName="Skyfire 19x (AI)";
		displayNameShort="70mm HE (AI)";
		hardpoints[]={"CMD_GDF_O_SKYFIRE","O_MISSILE_PYLON","B_MISSILE_PYLON"};
		pylonWeapon="CMD_GDF_rockets_Skyfire";
	};

	class CMD_GDF_300Rnd_30mm: 250Rnd_30mm_APDS_shells_Tracer_Yellow
	{
		ammo="CMD_GDF_30mm";
		displayName="30mm FMJ Tracer Shells";
		displayNameShort="30mm FMJ";
		count=300;
		tracersEvery=2;
	};
	class CMD_GDF_300Rnd_30mm_AP: CMD_GDF_300Rnd_30mm
	{
		ammo="CMD_GDF_30mm_AP";
		displayName="30mm AP Tracer Shells";
		displayNameShort="30mm AP";
		count=300;
	};
	class CMD_GDF_300Rnd_30mm_AA: CMD_GDF_300Rnd_30mm
	{
		ammo="CMD_GDF_30mm_AA";
		displayName="30mm AA Tracer Shells";
		displayNameShort="30mm AA";
		count=300;
		tracersEvery=1;
	};
};


class LowROF;
class RocketPods;
class Mode_FullAuto;
class Mode_SemiAuto;
class MGun;
class player;
class CannonCore;
class cfgWeapons
{
	class gatling_30mm_base;
	class rockets_Skyfire;
	class weapon_SDBLauncher;
	class Cannon_30mm_Plane_CAS_02_F;
	class autocannon_Base_F;
	class LMG_Minigun_Transport;
	class autocannon_40mm_CTWS;
	class TKE_MG_Coax;
	class cannon_120mm;
	class TKE_TwinAutocannon_30mm_AA;
	class CE_GAU19_SLAPT_pod;

	class CMD_GDF_GAU19_SLAPT_pod: CE_GAU19_SLAPT_pod
	{
		displayName="[GDF] GAU-19/H Pod (SLAP/T)";
		magazines[]={"CMD_GDF_GAU19_SLAPT_pod_Mag_Y"};
	};

	class CMD_GDF_cannon_82mm: cannon_120mm
	{
		displayName="82mm Smoothbore Cannon";
		magazines[]={"CMD_GDF_50Rnd_82mm_HEAT_T_Yellow"};
		class player: Mode_SemiAuto
    	{
     	 	sounds[]={"StandardSound"};
      		class StandardSound
     		{
        		begin1[]=
        		{
        		  "A3\Sounds_F\arsenal\weapons_vehicles\cannon_120mm\slammer_120mm_distant",
        		  3.1622777,
        		  1,
        		  1500
        		};
        		soundBegin[]=
        		{
        		  "begin1",
        		  1
        		};
      		};
      		showToPlayer=1;
      		displayName="Semi";
      		textureType="Semi";
      		multiplier=1;
      		burst=1;
      		recoil="empty";
      		recoilProne="empty";
      		artilleryCharge=1;
      		artilleryDispersion=1;
      		flash="gunfire";
      		flashSize=0.1;
      		ffCount=1;
      		ffFrequency=11;
      		ffMagnitude=0.5;
      		soundBurst=false
      		useAction=false;
      		useActionTitle="";
      		soundContinuous=0;
      		reloadTime=2.5;
      		magazineReloadTime=15;
      		autoReload=1;
      		autoFire=0;
      		dispersion=0.00056999997;
      		aiDispersionCoefX=6;
      		aiDispersionCoefY=1.5;
      		aiRateOfFire=1;
      		aiRateOfFireDistance=10;
      		minRange=0;
      		minRangeProbab=0.0099999998;
      		midRange=1;
      		midRangeProbab=0.0099999998;
      		maxRange=2;
      		maxRangeProbab=0.0099999998;
    	};
    	//class TopDown: player
    	//{
     	//	textureType="topDown";
     	//	displayName="$STR_A3_FireMode_TopDown0";
     	//	minRange=150;
     	//	minRangeProbab=0.40000001;
     	//	midRange=400;
     	//	midRangeProbab=0.94999999;
     	//	maxRange=8000;
     	//	maxRangeProbab=0.94999999;
    	//};
    	class close: player
    	{
     		showToPlayer=0;
     		burst=1;
     		burstRangeMax=1;
     		aiRateOfFire=6;
     		aiRateOfFireDispersion=0.5;
     		aiRateOfFireDistance=500;
     		minRange=5;
     		minRangeProbab=0.1;
     		midRange=500;
     		midRangeProbab=0.80000001;
     		maxRange=1000;
     		maxRangeProbab=0.85000002;
    	};
    	class short: close
    	{
      		showToPlayer=0;
      		burst=1;
      		burstRangeMax=1;
      		aiRateOfFire=6;
      		aiRateOfFireDispersion=1;
      		aiRateOfFireDistance=1000;
      		minRange=500;
      		minRangeProbab=0.30000001;
      		midRange=1000;
      		midRangeProbab=0.85000002;
      		maxRange=1500;
      		maxRangeProbab=0.85000002;
    	};
    	class medium: close
    	{
      		dispersion=0.00071250001;
      		showToPlayer=0;
      		burst=1;
      		burstRangeMax=1;
      		aiRateOfFire=8;
      		aiRateOfFireDispersion=4;
      		aiRateOfFireDistance=1250;
      		minRange=1000;
      		minRangeProbab=0.60000002;
      		midRange=1500;
      		midRangeProbab=0.85000002;
      		maxRange=2000;
      		maxRangeProbab=0.80000001;
    	};
    	class far: close
    	{
      		dispersion=0.00071250001;
      		showToPlayer=0;
      		burst=1;
      		burstRangeMax=1;
      		aiRateOfFire=10;
      		aiRateOfFireDispersion=8;
      		aiRateOfFireDistance=1500;
      		minRange=1500;
      		minRangeProbab=0.75;
      		midRange=2000;
      		midRangeProbab=0.80000001;
      		maxRange=3500;
      		maxRangeProbab=0.050000001;
    	};
	};

	class CMD_GDF_TwinAutocannon_30mm_AA: TKE_TwinAutocannon_30mm_AA
	{
		displayName="30mm Twin-Autocannon";
		magazines[]=
		{
			"CMD_GDF_30mm_AA_1000Rnd"
		};
		class GunParticles
		{
			class FirstEffect
			{
				effectName="MachineGun1";
				positionName="Usti hlavne";
				directionName="Konec hlavne";
			};
			class SecondEffect
			{
				effectName="MachineGun1";
				positionName="Usti hlavne1";
				directionName="Konec hlavne1";
			};
		};
		class manual: CannonCore
		{
			displayName="30mm Twin-Autocannon";
			textureType="fullAuto";
			autoFire=1;
			burst=2;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_01",
					1.99526,
					1,
					1500
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_02",
					1.99526,
					1,
					1500
				};
				begin3[]=
				{
					"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_03",
					1.99526,
					1,
					1500
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.34
				};
				soundsetshot[]=
				{
					"TKE_AutoCanon_SoundSet",
					"Autocannon30mmBody_tail_SoundSet"
				};
			};
			soundContinuous=0;
			soundBurst=0;
			reloadTime=0.07;
			dispersion=0.0049999999;
			aiDispersionCoefX=1.2;
			aiDispersionCoefY=1.2;
			aiRateOfFire=0;
			aiRateOfFireDistance=1;
			minRange=0;
			minRangeProbab=0.0099999998;
			midRange=1;
			midRangeProbab=0.0099999998;
			maxRange=2;
			maxRangeProbab=0.0099999998;
		};
		class close: manual
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=22;
			burstRangeMax=28;
			aiRateOfFire=0.2;
			aiRateOfFireDispersion=0.5;
			aiRateOfFireDistance=200;
			minRange=1;
			minRangeProbab=0.1;
			midRange=100;
			midRangeProbab=0.75;
			maxRange=400;
			maxRangeProbab=0.85000002;
		};
		class short: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=20;
			burstRangeMax=42;
			aiRateOfFire=0.5;
			aiRateOfFireDispersion=1;
			aiRateOfFireDistance=300;
			minRange=200;
			minRangeProbab=0.30000001;
			midRange=400;
			midRangeProbab=0.85000002;
			maxRange=750;
			maxRangeProbab=0.85000002;
		};
		class medium: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=18;
			burstRangeMax=42;
			aiRateOfFire=1;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=800;
			minRange=600;
			minRangeProbab=0.7;
			midRange=750;
			midRangeProbab=0.85000002;
			maxRange=1250;
			maxRangeProbab=0.7;
		};
		class far: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=16;
			burstRangeMax=42;
			aiRateOfFire=1.3;
			aiRateOfFireDispersion=3;
			aiRateOfFireDistance=1200;
			minRange=1000;
			minRangeProbab=0.69999999;
			midRange=1250;
			midRangeProbab=0.60000002;
			maxRange=2500;
			maxRangeProbab=0.6;
		};
	};

	class CMD_GDF_LMG_Minigun_Transport: LMG_Minigun_Transport
	{
		magazines[]={"CMD_GDF_2000Rnd_65x39_Belt_Tracer_Yellow"};
	};

	class CMD_GDF_Cannon_30mm_Plane_CAS_02_F: Cannon_30mm_Plane_CAS_02_F
	{
		displayName="GSh-301";
		magazines[]={"CMD_GDF_500Rnd_Cannon_30mm_Plane_CAS_02_F"};
		class LowROF: Mode_FullAuto
		{
			displayName="$STR_A3_CFGWEAPONS_CANNON_30MM";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F_epc\weapons\cas_02_cannon",
					1.7782794,
					1,
					3800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			multiplier=1;
			textureType="fullAuto";
			autoFire=true;
			soundContinuous=0;
			flash="gunfire";
			flashSize=0.1;
			recoil="Empty";
			ffMagnitude=0.5;
			ffFrequency=11;
			ffCount=6;
			burst=5;
			showToPlayer=1;
			dispersion=0.003;
			reloadTime=0.039999999;
			aiRateOfFire=1;
			aiRateOfFireDistance=10;
			minRange=0;
			minRangeProbab=0.0099999998;
			midRange=1;
			midRangeProbab=0.0099999998;
			maxRange=2;
			maxRangeProbab=0.0099999998;
		};
		class close: LowROF
		{
			aiDispersionCoefX=2;
			aiDispersionCoefY=2;
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=12;
			burstRangeMax=28;
			aiRateOfFire=0.5;
			aiRateOfFireDispersion=0.5;
			aiRateOfFireDistance=200;
			minRange=1;
			minRangeProbab=0.1;
			midRange=100;
			midRangeProbab=0.75;
			maxRange=400;
			maxRangeProbab=0.85000002;
		};
		class near: close
		{
		};
		class short: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=18;
			burstRangeMax=42;
			aiRateOfFire=1;
			aiRateOfFireDispersion=1;
			aiRateOfFireDistance=300;
			minRange=200;
			minRangeProbab=0.30000001;
			midRange=400;
			midRangeProbab=0.85000002;
			maxRange=750;
			maxRangeProbab=0.85000002;
		};
		class medium: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=18;
			burstRangeMax=42;
			aiRateOfFire=2;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=800;
			minRange=600;
			minRangeProbab=0.60000002;
			midRange=750;
			midRangeProbab=0.85000002;
			maxRange=1250;
			maxRangeProbab=0.60000002;
		};
		class far: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=18;
			burstRangeMax=42;
			aiRateOfFire=2;
			aiRateOfFireDispersion=3;
			aiRateOfFireDistance=1200;
			minRange=1000;
			minRangeProbab=0.69999999;
			midRange=1250;
			midRangeProbab=0.60000002;
			maxRange=2500;
			maxRangeProbab=0.1;
		};
	};

	class CMD_GDF_weapon_SDBLauncher: weapon_SDBLauncher
	{
		displayName="Small Diameter Bomb";
		magazines[]={"CMD_GDF_PylonRack_Bomb_SDB_x4", "CMD_GDF_Player_PylonRack_Bomb_SDB_x4"};
		canLock=0;
	};

	class CMD_GDF_rockets_Skyfire: rockets_Skyfire
	{
		displayName="$STR_A3_rockets_Skyfire0";
		magazines[]={"CMD_GDF_PylonRack_19Rnd_Rocket_Skyfire","CMD_GDF_PylonRack_12Rnd_missiles_black"};
		canLock=0;
		ballisticsComputer=8;
		modes[]=
		{
			"Far_AI",
			"Medium_AI",
			"Close_AI",
			"Burst"
		};
		class Far_AI: RocketPods
		{
			displayName="$STR_A3_missiles_dar0";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F\weapons\Rockets\missile_2",
					1.1220185,
					1,
					1100
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			autoFire=0;
			reloadTime=0.079999998;
			dispersion=0.035;
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=1;
			burstRangeMax=6;
			aiRateOfFire=4;
			aiRateOfFireDispersion=4;
			aiRateOfFireDistance=1000;
			minRange=1000;
			minRangeProbab=0.69999999;
			midRange=1500;
			midRangeProbab=0.69999999;
			maxRange=3200;
			maxRangeProbab=0.1;
		};
		class Medium_AI: Far_AI
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=1;
			burstRangeMax=8;
			aiRateOfFire=3;
			aiRateOfFireDispersion=3;
			aiRateOfFireDistance=1000;
			minRange=400;
			minRangeProbab=0.1;
			midRange=800;
			midRangeProbab=0.69999999;
			maxRange=1200;
			maxRangeProbab=0.75;
		};
		class Close_AI: Far_AI
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=1;
			burstRangeMax=10;
			aiRateOfFire=0.5;
			aiRateOfFireDispersion=1;
			aiRateOfFireDistance=50;
			minRange=0;
			minRangeProbab=0.40000001;
			midRange=100;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.2;
		};
		class Burst: RocketPods
		{
			displayName="$STR_A3_rockets_Skyfire_Burst0";
			textureType="fullAuto";
			autoFire=1;
			burst=1;
			salvo=1;
			reloadTime=0.079999998;
			dispersion=0.025;
			aiRateOfFire=1;
			aiRateOfFireDistance=10;
			minRange=0;
			minRangeProbab=0.0099999998;
			midRange=1;
			midRangeProbab=0.0099999998;
			maxRange=2;
			maxRangeProbab=0.0099999998;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F\weapons\Rockets\missile_2",
					1.1220185,
					1,
					1100
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			soundContinuous=0;
		};
	};

	class CMD_GDF_gatling_30mm: gatling_30mm_base
	{
		aiDispersionCoefX=1.3;
		aiDispersionCoefY=1.3;
		scope=1;
		muzzles[]=
		{
			"FMJ",
			"AP",
			"AA"
		};
		class FMJ: gatling_30mm_base
		{
			aiDispersionCoefX=1.8;
			aiDispersionCoefY=1.8;
			displayName="30mm Autocannon";
			magazines[]=
			{
				"CMD_GDF_300Rnd_30mm"
			};
			class LowROF: LowROF
			{
				dispersion=0.0066;
			};
		};
		class AP: gatling_30mm_base
		{
			aiDispersionCoefX=1.3;
			aiDispersionCoefY=1.3;
			displayName="30mm Autocannon";
			magazines[]=
			{
				"CMD_GDF_300Rnd_30mm_AP"
			};
		};
		class AA: gatling_30mm_base
		{
			aiDispersionCoefX=1.8;
			aiDispersionCoefY=1.8;
			displayName="30mm Autocannon";
			magazines[]=
			{
				"CMD_GDF_300Rnd_30mm_AA"
			};
		};
	};

	class CMD_GDF_MG_Coax: TKE_MG_Coax
	{
		displayName="$STR_A3_cfgweapons_coaxial_mg0";
		magazineReloadTime=10;
		showAimCursorInternal=0;
		ballisticsComputer="2 + 16";
		FCSMaxLeadSpeed=30.555599;
		FCSZeroingDelay=1;
		maxZeroing=1500;
		class GunParticles
		{
			class effect1
			{
				positionName="usti hlavne3";
				directionName="konec hlavne3";
				effectName="MachineGunCloud";
			};
		};
		class manual: MGun
		{
			displayName="$STR_A3_LMG_RCWS0";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				closure1[]=
				{
					"A3\sounds_f\weapons\closure\sfx7",
					0.56234133,
					1,
					40
				};
				closure2[]=
				{
					"A3\sounds_f\weapons\closure\sfx8",
					0.56234133,
					1,
					40
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons_vehicles\LMG_762mm\LMG_762mm_01",
					1,
					1,
					2100
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons_vehicles\LMG_762mm\LMG_762mm_02",
					1,
					1,
					2100
				};
				begin3[]=
				{
					"A3\Sounds_F\arsenal\weapons_vehicles\LMG_762mm\LMG_762mm_03",
					1,
					1,
					2100
				};
				soundBegin[]=
				{
					"begin1",
					0.34,
					"begin2",
					0.33000001,
					"begin3",
					0.33000001
				};
			};
			soundContinuous=0;
			soundBurst=0;
			reloadTime=0.055000003;
			dispersion=0.0016;
			aiDispersionCoefX=2.6;
			aiDispersionCoefY=0.7;
			aiRateOfFire=1;
			aiRateOfFireDistance=10;
			minRange=0;
			minRangeProbab=0.0099999998;
			midRange=1;
			midRangeProbab=0.0099999998;
			maxRange=2;
			maxRangeProbab=0.0099999998;
		};
		class close: manual
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=20;
			burstRangeMax=16;
			aiRateOfFire=0.5;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=50;
			minRange=0;
			minRangeProbab=0.80000001;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=25;
			burstRangeMax=12;
			aiRateOfFire=1;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=150;
			minRange=20;
			minRangeProbab=0.69999999;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.2;
		};
		class medium: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=30;
			burstRangeMax=12;
			aiRateOfFire=2;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=250;
			minRange=150;
			minRangeProbab=0.69999999;
			midRange=600;
			midRangeProbab=0.64999998;
			maxRange=800;
			maxRangeProbab=0.1;
		};
		class far: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=25;
			burstRangeMax=8;
			aiRateOfFire=4;
			aiRateOfFireDispersion=4;
			aiRateOfFireDistance=600;
			minRange=600;
			minRangeProbab=0.64999998;
			midRange=800;
			midRangeProbab=0.40000001;
			maxRange=1200;
			maxRangeProbab=0.1;
		};
		magazines[]=
		{
			"200Rnd_762x51_Belt_T_Yellow"
		};
	};
	class CMD_GDF_autocannon_40mm_CTWS: autocannon_40mm_CTWS
	{
		displayName="40mm Autocannon";
		muzzles[]=
		{
			"HE",
			"AP"
		};
		class HE: autocannon_Base_F
		{
			displayName="$STR_A3_autocannon_40mm_CTWS0";
			magazines[]=
			{
				"CMD_GDF_40Rnd_40mm_APFSDS"
			};
			class player: player
			{
				dispersion=0.0015;
				aiDispersionCoefX=1.3;
				aiDispersionCoefY=1;
				sounds[]=
				{
					"StandardSound"
				};
				class StandardSound
				{
					begin1[]=
					{
						"A3\Sounds_F\arsenal\weapons_vehicles\cannon_40mm\autocannon_40mm_body_01",
						1.9952624,
						1,
						1500
					};
					begin2[]=
					{
						"A3\Sounds_F\arsenal\weapons_vehicles\cannon_40mm\autocannon_40mm_body_02",
						1.9952624,
						1,
						1500
					};
					begin3[]=
					{
						"A3\Sounds_F\arsenal\weapons_vehicles\cannon_40mm\autocannon_40mm_body_03",
						1.9952624,
						1,
						1500
					};
					soundBegin[]=
					{
						"begin1",
						0.33000001,
						"begin2",
						0.33000001,
						"begin3",
						0.34
					};
				};
			};
			class close: player
			{
				aiBurstTerminable=1;
				showToPlayer=0;
				burst=3;
				burstRangeMax=6;
				aiRateOfFire=1;
				aiRateOfFireDispersion=2;
				aiRateOfFireDistance=200;
				minRange=0;
				minRangeProbab=0.1;
				midRange=400;
				midRangeProbab=0.69999999;
				maxRange=800;
				maxRangeProbab=0.80000001;
			};
			class short: close
			{
				aiBurstTerminable=1;
				showToPlayer=0;
				burst=1;
				burstRangeMax=5;
				aiRateOfFire=2;
				aiRateOfFireDispersion=2;
				aiRateOfFireDistance=600;
				minRange=600;
				minRangeProbab=0.75;
				midRange=800;
				midRangeProbab=0.80000001;
				maxRange=1200;
				maxRangeProbab=0.80000001;
			};
			class medium: close
			{
				aiBurstTerminable=1;
				showToPlayer=0;
				burst=1;
				burstRangeMax=3;
				aiRateOfFire=2;
				aiRateOfFireDispersion=3;
				aiRateOfFireDistance=1000;
				minRange=1000;
				minRangeProbab=0.80000001;
				midRange=1500;
				midRangeProbab=0.80000001;
				maxRange=2000;
				maxRangeProbab=0.69999999;
			};
			class far: close
			{
				aiBurstTerminable=1;
				showToPlayer=0;
				burst=1;
				burstRangeMax=1;
				aiRateOfFire=2;
				aiRateOfFireDispersion=4;
				aiRateOfFireDistance=1800;
				minRange=1800;
				minRangeProbab=0.74000001;
				midRange=2400;
				midRangeProbab=0.64999998;
				maxRange=3000;
				maxRangeProbab=0.050000001;
			};
		};
		class AP: autocannon_Base_F
		{
			displayName="$STR_A3_autocannon_40mm_CTWS0";
			magazines[]=
			{
				"CMD_GDF_60Rnd_40mm_GPR"
			};
			class player: player
			{
				dispersion=0.00089999998;
				aiDispersionCoefX=1.3;
				aiDispersionCoefY=1;
				sounds[]=
				{
					"StandardSound"
				};
				class StandardSound
				{
					begin1[]=
					{
						"A3\Sounds_F\arsenal\weapons_vehicles\cannon_40mm\autocannon_40mm_body_01",
						1.9952624,
						1,
						1500
					};
					begin2[]=
					{
						"A3\Sounds_F\arsenal\weapons_vehicles\cannon_40mm\autocannon_40mm_body_02",
						1.9952624,
						1,
						1500
					};
					begin3[]=
					{
						"A3\Sounds_F\arsenal\weapons_vehicles\cannon_40mm\autocannon_40mm_body_03",
						1.9952624,
						1,
						1500
					};
					soundBegin[]=
					{
						"begin1",
						0.33000001,
						"begin2",
						0.33000001,
						"begin3",
						0.34
					};
				};
			};
			class close: player
			{
				aiBurstTerminable=1;
				showToPlayer=0;
				burst=3;
				burstRangeMax=6;
				aiRateOfFire=1;
				aiRateOfFireDispersion=2;
				aiRateOfFireDistance=200;
				minRange=0;
				minRangeProbab=0.1;
				midRange=400;
				midRangeProbab=0.69999999;
				maxRange=800;
				maxRangeProbab=0.80000001;
			};
			class short: close
			{
				aiBurstTerminable=1;
				showToPlayer=0;
				burst=1;
				burstRangeMax=5;
				aiRateOfFire=2;
				aiRateOfFireDispersion=2;
				aiRateOfFireDistance=600;
				minRange=600;
				minRangeProbab=0.75;
				midRange=800;
				midRangeProbab=0.80000001;
				maxRange=1200;
				maxRangeProbab=0.80000001;
			};
			class medium: close
			{
				aiBurstTerminable=1;
				showToPlayer=0;
				burst=1;
				burstRangeMax=3;
				aiRateOfFire=2;
				aiRateOfFireDispersion=3;
				aiRateOfFireDistance=1000;
				minRange=1000;
				minRangeProbab=0.80000001;
				midRange=1500;
				midRangeProbab=0.80000001;
				maxRange=2000;
				maxRangeProbab=0.69999999;
			};
			class far: close
			{
				aiBurstTerminable=1;
				showToPlayer=0;
				burst=1;
				burstRangeMax=1;
				aiRateOfFire=2;
				aiRateOfFireDispersion=4;
				aiRateOfFireDistance=1800;
				minRange=1800;
				minRangeProbab=0.74000001;
				midRange=2400;
				midRangeProbab=0.64999998;
				maxRange=3000;
				maxRangeProbab=0.050000001;
			};
		};
	};
};