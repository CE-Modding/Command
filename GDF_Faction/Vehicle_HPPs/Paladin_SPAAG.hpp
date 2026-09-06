class AnimationSources: AnimationSources
		{
			class muzzle_rot1
			{
				source="ammorandom";
				weapon="CMD_GDF_TwinAutocannon_30mm_AA";
			};
			class recoil_source
			{
				source="reload";
				weapon="CMD_GDF_TwinAutocannon_30mm_AA";
			};
		};
class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						commanding=2;
						body="commander_turret";
						gun="commander_gun";
						memoryPointGunnerOutOptics="commanderview";
						memoryPointGunnerOptics="commanderview";
						minElev=-15;
						maxElev=55;
						initElev=0;
						minTurn=-360;
						maxTurn=360;
						initTurn=0;
						minCamElev=-90;
						maxCamElev=90;
						weapons[]=
						{
							"Laserdesignator_mounted",
							"TKE_SmokeLauncher"
						};
						magazines[]=
						{
							"Laserbatteries",
							"TKE_3Rnd_SmokeLauncherMag"
						};
						soundServo[]=
						{
							"TKE_Kuiper_Engagements\TKE_Wheeled_C\sounds\weapons\servo",
							0.5,
							1,
							10
						};
						soundServoVertical[]=
						{
							"TKE_Kuiper_Engagements\TKE_Wheeled_C\sounds\weapons\servo",
							0.5,
							1,
							10
						};
						forceHideGunner=1;
						gunnerAction="driver_hemtt";
						gunnerInAction="Driver_APC_Wheeled_03_cannon_F_in";
						gunnerGetInAction="GetInLow";
						gunnerGetOutAction="GetOutLow";
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F";
						gunnerOutOpticsModel="";
						gunnerOpticsEffect[]={};
						isPersonTurret=0;
						outGunnerMayFire=0;
						inGunnerMayFire=1;
						personTurretAction="vehicle_turnout_2";
						minOutElev=-45;
						maxOutElev=65;
						initOutElev=0;
						minOutTurn=-90;
						maxOutTurn=90;
						initOutTurn=0;
						gunnerForceOptics=1;
						class ViewGunner: ViewGunner
						{
						};
						class ViewOptics: ViewOptics
						{
							initAngleX=0;
							minAngleX=-30;
							maxAngleX=30;
							initAngleY=0;
							minAngleY=-100;
							maxAngleY=100;
							initFov=0.60000002;
							minFov=0.60000002;
							maxFov=0.60000002;
							visionMode[]=
							{
								"Normal",
								"NVG",
							};
							thermalMode[]={0,1};
						};
						class OpticsIn
						{
							class Wide: ViewOptics
							{
								initAngleX=0;
								minAngleX=-30;
								maxAngleX=30;
								initAngleY=0;
								minAngleY=-100;
								maxAngleY=100;
								initFov=0.60000002;
								minFov=0.60000002;
								maxFov=0.60000002;
								visionMode[]=
								{
									"Normal",
									"NVG",
								};
								thermalMode[]={0,1};
								gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Commander_01_w_F.p3d";
								gunnerOpticsEffect[]={};
							};
							class Medium: Wide
							{
								gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Commander_01_m_F.p3d";
								initFov=0.07;
								minFov=0.07;
								maxFov=0.07;
							};
							class Narrow: Wide
							{
								gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Commander_01_n_F.p3d";
								initFov=0.028000001;
								minFov=0.028000001;
								maxFov=0.028000001;
							};
						};
						turretInfoType="RscOptics_MBT_01_commander";
						usePip=1;
						showCrewAim=1;
						startEngine=0;
						class HitPoints
						{
						};
						stabilizedInAxes=3;
						maxHorizontalRotSpeed=4;
						maxVerticalRotSpeed=4;
						gunnerHasFlares=0;
						viewGunnerInExternal=1;
						class Components
						{
							class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftCommander
							{
								class Components: components
								{
									class SensorDisplay
									{
										componentType="SensorsDisplayComponent";
										range[]={10000,5000,2000};
										resource="RscCustomInfoSensors";
									};
								};
							};
							class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightCommander
							{
								defaultDisplay="SensorDisplay";
								class Components: components
								{
									class SensorDisplay
									{
										componentType="SensorsDisplayComponent";
										range[]={10000,5000,2000};
										resource="RscCustomInfoSensors";
									};
								};
							};
						};
					};
				};
				commanding=1;
				body="mainTurret";
				gun="mainGun";
				gunBeg="usti hlavne";
				gunEnd="konec hlavne";
				weapons[]=
				{
					"CMD_GDF_TwinAutocannon_30mm_AA"
				};
				magazines[]=
				{
					"CMD_GDF_30mm_AA_1000Rnd",
					"CMD_GDF_30mm_AA_1000Rnd"
				};
				gunnerName="Gunner";
				gunnerForceOptics=1;
				memoryPointGun[]=
				{
					"usti hlavne",
					"usti hlavne1"
				};
				selectionFireAnim="zasleh_1";
				maxHorizontalRotSpeed=1;
				maxVerticalRotSpeed=1.2;
				soundServo[]=
				{
					"TKE_Kuiper_Engagements\TKE_Wheeled_C\sounds\weapons\servo",
					0.5,
					1,
					10
				};
				soundServoVertical[]=
				{
					"TKE_Kuiper_Engagements\TKE_Wheeled_C\sounds\weapons\servo",
					0.5,
					1,
					10
				};
				gunnerAction="driver_hemtt";
				gunnerInAction="Driver_APC_Wheeled_03_cannon_F_in";
				forceHideGunner=1;
				gunnerGetInAction="GetInLow";
				gunnerGetOutAction="GetOutLow";
				viewGunnerInExternal=1;
				castGunnerShadow=1;
				stabilizedInAxes=3;
				memoryPointGunnerOptics="gunnerview";
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400,2500,2600,2700,2800,2900,3000};
				discreteDistanceInitIndex=2;
				turretInfoType="RscOptics_APC_Wheeled_01_gunner";
				usePip=0;
				minElev=-10;
				maxElev=90;
				initElev=0;
				minTurn=-360;
				maxTurn=360;
				initTurn=0;
				isPersonTurret=0;
				personTurretAction="vehicle_turnout_1";
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.5;
						minFov=0.5;
						maxFov=0.5;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"TI"
						};
						thermalMode[]={0,1};
						gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_APC_01_w_F.p3d";
						gunnerOpticsEffect[]={};
					};
					class Medium: Wide
					{
						gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_APC_01_m_F.p3d";
						initFov=0.07;
						minFov=0.07;
						maxFov=0.07;
					};
					class Narrow: Wide
					{
						gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_APC_01_n_F.p3d";
						initFov=0.028000001;
						minFov=0.028000001;
						maxFov=0.028000001;
					};
				};
				class ViewOptics: ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.5;
					minFov=0.5;
					maxFov=0.5;
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					thermalMode[]={0,1};
				};
				class ViewGunner: ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=15;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					minFov=0.25;
					maxFov=1.25;
					initFov=0.75;
					visionMode[]={};
				};
				class HitPoints: HitPoints
				{
					class HitTurret: HitTurret
					{
						armor="2*(19+2*19+19)/((18+2*9+9) + (19+2*19+19))";
						name="vez";
						visual="OtocVez";
					};
					class HitGun: HitGun
					{
						armor="4*100/((18+2*9+9) + (19+2*19+19))";
						name="zbranVelitele";
						visual="OtocHlaven";
					};
				};
				gunnerDoor="";
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftGunner
					{
						class Components: components
						{
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={10000,5000,2000};
								resource="RscCustomInfoSensors";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightGunner
					{
						defaultDisplay="SensorDisplay";
						class Components: components
						{
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={10000,5000,2000};
								resource="RscCustomInfoSensors";
							};
						};
					};
				};
			};
		};