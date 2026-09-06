class components: components
{
	class TransportPylonsComponent
	{
		UIPicture="\A3\Air_F_Jets\Plane_Fighter_02\Data\UI\Fighter_02_3DEN_ca.paa";
		class pylons
		{
			class pylons1
			{
				hardpoints[]=
				{
					"O_R73",
					"O_R77"
				};
				attachment="";
				priority=13;
				maxweight=300;
				UIposition[]={0.60000002,0.44999999};
			};
			class pylons2: pylons1
			{
				UIposition[]={0.050000001,0.44999999};
				mirroredMissilePos=1;
			};
			class pylons3
			{
				hardpoints[]=
				{
					"O_R73",
					"O_R77",
					"O_KH25",
					"O_KAB250_BOMB",
             		"CMD_GDF_O_BOMB_PYLON"
				};
				attachment="CMD_GDF_PylonRack_Bomb_SDB_x4";
				priority=11;
				maxweight=1050;
				UIposition[]={0.55000001,0.34999999};
			};
			class pylons4: pylons3
			{
				UIposition[]={0.1,0.34999999};
				mirroredMissilePos=3;
			};
			class pylons5
			{
				hardpoints[]=
				{
					"O_R73",
					"O_R77",
					"O_KH25",
					"O_KAB250_BOMB",
					"O_KH58",
             		"CMD_GDF_O_BOMB_PYLON"
				};
				attachment="";
				priority=9;
				maxweight=1200;
				UIposition[]={0.5,0.25};
			};
			class pylons6: pylons5
			{
				UIposition[]={0.15000001,0.25};
				mirroredMissilePos=5;
			};
			class pylonBayRight1
			{
				hardpoints[]=
				{
					"O_R73"
				};
				priority=7;
				attachment="PylonMissile_Missile_AA_R73_x1";
				maxweight=300;
				UIposition[]={0.44999999,0.15000001};
				bay=2;
			};
			class pylonBayLeft1: pylonBayRight1
			{
				UIposition[]={0.2,0.15000001};
				mirroredMissilePos=7;
				bay=1;
			};
			class pylonBayRight2
			{
				hardpoints[]=
				{
					"O_R77"
				};
				priority=5;
				attachment="PylonMissile_Missile_AA_R77_x1";
				maxweight=750;
				UIposition[]={0.33000001,0.30000001};
				bay=4;
			};
			class pylonBayLeft2: pylonBayRight2
			{
				UIposition[]={0.33000001,0.34999999};
				mirroredMissilePos=9;
				bay=3;
			};
			class pylonBayCenter1
			{
				hardpoints[]=
				{
					"O_R77_INT"
				};
				priority=2;
				attachment="PylonMissile_Missile_AA_R77_INT_x1";
				maxweight=750;
				UIposition[]={0.33000001,0.44999999};
				bay=5;
			};
			class pylonBayCenter2: pylonBayCenter1
			{
				UIposition[]={0.33000001,0.5};
				mirroredMissilePos=11;
			};
			class pylonBayCenter3
			{
				hardpoints[]=
				{
					"O_R77_INT",
					"O_KH25_INT",
					"O_KAB250_BOMB",
					"O_KH58_INT"
				};
				priority=1;
				attachment="";
				maxweight=1200;
				UIposition[]={0.33000001,0.55000001};
				bay=5;
			};
		};
		class Bays
		{
			class BayLeft1
			{
				bayOpenTime=0.5;
				openBayWhenWeaponSelected=0;
				autoCloseWhenEmptyDelay=1;
			};
			class BayRight1
			{
				bayOpenTime=0.5;
				openBayWhenWeaponSelected=0;
				autoCloseWhenEmptyDelay=1;
			};
			class BayLeft2
			{
				bayOpenTime=0.5;
				openBayWhenWeaponSelected=1;
				autoCloseWhenEmptyDelay=2;
			};
			class BayRight2
			{
				bayOpenTime=0.5;
				openBayWhenWeaponSelected=1;
				autoCloseWhenEmptyDelay=1;
			};
			class BayCenter1
			{
				bayOpenTime=0.5;
				openBayWhenWeaponSelected=1;
				autoCloseWhenEmptyDelay=2;
			};
		};
		class Presets
		{
			class Empty
			{
				displayName="$STR_empty";
				attachment[]={};
			};
			class Default
			{
				displayName="$STR_vehicle_default";
				attachment[]=
				{
					"PylonMissile_Missile_AA_R73_x1",
					"PylonMissile_Missile_AA_R73_x1",
					"PylonMissile_Missile_AA_R77_x1",
					"PylonMissile_Missile_AA_R77_x1",
					"PylonMissile_Bomb_KAB250_x1",
					"PylonMissile_Bomb_KAB250_x1",
					"PylonMissile_Missile_AA_R73_x1",
					"PylonMissile_Missile_AA_R73_x1",
					"PylonMissile_Missile_AA_R77_x1",
					"PylonMissile_Missile_AA_R77_x1",
					"PylonMissile_Missile_AA_R77_INT_x1",
					"PylonMissile_Missile_AA_R77_INT_x1",
					"PylonMissile_Bomb_KAB250_x1"
				};
			};
			class AA
			{
				displayName="$STR_A3_cfgmagazines_titan_aa_dns";
				attachment[]=
				{
					"PylonMissile_Missile_AA_R73_x1",
					"PylonMissile_Missile_AA_R73_x1",
					"PylonMissile_Missile_AA_R77_x1",
					"PylonMissile_Missile_AA_R77_x1",
					"PylonMissile_Missile_AA_R77_x1",
					"PylonMissile_Missile_AA_R77_x1",
					"PylonMissile_Missile_AA_R73_x1",
					"PylonMissile_Missile_AA_R73_x1",
					"PylonMissile_Missile_AA_R77_x1",
					"PylonMissile_Missile_AA_R77_x1",
					"PylonMissile_Missile_AA_R77_INT_x1",
					"PylonMissile_Missile_AA_R77_INT_x1",
					"PylonMissile_Missile_AA_R77_INT_x1"
				};
			};
			class CAS
			{
				displayName="$STR_A3_CAS_PRESET_DISPLAYNAME";
				attachment[]=
				{
					"PylonMissile_Missile_AA_R73_x1",
					"PylonMissile_Missile_AA_R73_x1",
					"PylonMissile_Missile_AGM_KH25_x1",
					"PylonMissile_Missile_AGM_KH25_x1",
					"PylonMissile_Missile_AGM_KH25_x1",
					"PylonMissile_Missile_AGM_KH25_x1",
					"PylonMissile_Missile_AA_R73_x1",
					"PylonMissile_Missile_AA_R73_x1",
					"PylonMissile_Missile_AA_R77_x1",
					"PylonMissile_Missile_AA_R77_x1",
					"PylonMissile_Missile_AA_R77_INT_x1",
					"PylonMissile_Missile_AA_R77_INT_x1",
					"PylonMissile_Missile_AGM_KH25_INT_x1"
				};
			};
		};
	};
};