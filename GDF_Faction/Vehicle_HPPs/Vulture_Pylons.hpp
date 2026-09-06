		class Components: Components
		{
			class TransportPylonsComponent
			{
				uiPicture="\A3\Air_F_Beta\Heli_Attack_02\Data\UI\Heli_Attack_02_3DEN_CA.paa";
				class Pylons
				{
					class PylonLeft1
					{
						attachment="CMD_GDF_PylonRack_19Rnd_Rocket_Skyfire";
						priority=5;
						hardpoints[]=
						{
							"O_MISSILE_PYLON",
							"O_BOMB_PYLON_HELI",
							"UNI_SCALPEL",
							"20MM_TWIN_CANNON",
							"CMD_GDF_O_SKYFIRE"
						};
						turret[]={-1};
						UIposition[]={0.059999999,0.40000001};
					};
					class PylonLeft2: PylonLeft1
					{
						attachment="";
						priority=4;
						hardpoints[]=
						{
							"O_MISSILE_PYLON",
							"O_BOMB_PYLON_HELI",
							"UNI_SCALPEL",
							"20MM_TWIN_CANNON",
							"CMD_GDF_O_SKYFIRE"
						};
						UIposition[]={0.079999998,0.34999999};
					};
					class PylonRight2: PylonLeft2
					{
						mirroredMissilePos=2;
						UIposition[]={0.56999999,0.34999999};
					};
					class PylonRight1: PylonLeft1
					{
						mirroredMissilePos=1;
						UIposition[]={0.58999997,0.40000001};
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
							"PylonRack_4Rnd_LG_scalpel",
							"PylonRack_19Rnd_Rocket_Skyfire",
							"PylonRack_19Rnd_Rocket_Skyfire",
							"PylonRack_4Rnd_LG_scalpel"
						};
					};
					class AT
					{
						displayName="$STR_A3_cfgmagazines_titan_at_dns";
						attachment[]=
						{
							"PylonRack_4Rnd_LG_scalpel",
							"PylonRack_4Rnd_LG_scalpel",
							"PylonRack_4Rnd_LG_scalpel",
							"PylonRack_4Rnd_LG_scalpel"
						};
					};
					class HAT
					{
						displayName="$STR_A3_Heavy_AT_preset_displayName";
						attachment[]=
						{
							"PylonRack_4Rnd_LG_scalpel",
							"PylonRack_1Rnd_Missile_AGM_01_F",
							"PylonRack_1Rnd_Missile_AGM_01_F",
							"PylonRack_4Rnd_LG_scalpel"
						};
					};
					class CAS
					{
						displayName="$STR_A3_CAS_PRESET_DISPLAYNAME";
						attachment[]=
						{
							"PylonRack_19Rnd_Rocket_Skyfire",
							"PylonMissile_1Rnd_Bomb_03_F",
							"PylonMissile_1Rnd_Bomb_03_F",
							"PylonRack_19Rnd_Rocket_Skyfire"
						};
					};
				};
			};
		};