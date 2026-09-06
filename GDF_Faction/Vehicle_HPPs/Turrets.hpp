  class CMD_GDF_Turret_Infantry: UCMC_TRT_40
  {
    faction="CMD_GDF";
    side=1;
    displayName="Anti-Infantry Turret";
    hiddenSelectionsTextures[]={"GDF_Faction\Vehicle_Camos\Paladin\CMD_GDF_TKE_TurretStandTan_co.paa","GDF_Faction\Vehicle_Camos\Paladin\CMD_GDF_TKE_UCNAPC_40mmTan_co.paa"};
    class AnimationSources: AnimationSources
    {
      class muzzle_rot1
      {
        source="ammorandom";
        weapon="CMD_GDF_MG_Coax";
      };
      class recoil_source
      {
        source="reload";
        weapon="CMD_GDF_autocannon_40mm_CTWS";
      };
      class hide_xlr
      {
        scope=1;
        displayName="Hide XLR";
        author="Luca";
        source="user";
        initPhase=1;
        animPeriod=1;
        mass=0;
      };
    };
    class Turrets: Turrets
    {
      class MainTurret: MainTurret
      {
        gunBeg="usti hlavne";
        gunEnd="konec hlavne";
        weapons[]=
        {
          "CMD_GDF_autocannon_40mm_CTWS",
          "CMD_GDF_MG_Coax"
        };
        magazines[]=
        {
          "CMD_GDF_40Rnd_40mm_APFSDS",
          "CMD_GDF_40Rnd_40mm_APFSDS",
          "CMD_GDF_40Rnd_40mm_APFSDS",
          "CMD_GDF_40Rnd_40mm_APFSDS",
          "CMD_GDF_60Rnd_40mm_GPR",
          "CMD_GDF_60Rnd_40mm_GPR",
          "CMD_GDF_60Rnd_40mm_GPR",
          "CMD_GDF_60Rnd_40mm_GPR",
          "200Rnd_762x51_Belt_T_Yellow",
          "200Rnd_762x51_Belt_T_Yellow",
          "200Rnd_762x51_Belt_T_Yellow",
          "200Rnd_762x51_Belt_T_Yellow",
          "200Rnd_762x51_Belt_T_Yellow",
          "200Rnd_762x51_Belt_T_Yellow",
          "200Rnd_762x51_Belt_T_Yellow",
          "200Rnd_762x51_Belt_T_Yellow",
          "200Rnd_762x51_Belt_T_Yellow",
          "200Rnd_762x51_Belt_T_Yellow"
        };
        memoryPointGun[]=
        {
          "usti hlavne1"
        };
        selectionFireAnim="zasleh_1";
        maxHorizontalRotSpeed=1;
        maxVerticalRotSpeed=1.2;
        discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400,2500,2600,2700,2800,2900,3000};
        discreteDistanceInitIndex=2;
        minElev=-15;
        maxElev=50;
        initElev=0;
        minTurn=-360;
        maxTurn=360;
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
      };
    };
  };

  class CMD_GDF_Turret_Air: UCMC_TRT_AA
  {
    faction="CMD_GDF";
    armor=150;
    side=1;
    displayName="Anti-Air Turret";
    hiddenSelectionsTextures[]={"GDF_Faction\Vehicle_Camos\Paladin\CMD_GDF_TKE_TurretStandTan_co.paa","GDF_Faction\Vehicle_Camos\Paladin\CMD_GDF_TKE_UCNAPC_MortarTan_co.paa"};
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
        gunBeg="usti hlavne";
        gunEnd="konec hlavne";
        weapons[]=
        {
          "CMD_GDF_TwinAutocannon_30mm_AA"
        };
        magazines[]=
        {
          "CMD_GDF_30mm_AA_1000Rnd",
          "CMD_GDF_30mm_AA_1000Rnd",
          "CMD_GDF_30mm_AA_1000Rnd"
        };
        turretInfoType="RscOptics_crows";
        memoryPointGun[]=
        {
          "usti hlavne",
          "usti hlavne1"
        };
        maxHorizontalRotSpeed=1;
        maxVerticalRotSpeed=1.2;
        minElev=-10;
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
      };
    };
  };

  class CMD_GDF_Turret_Armor: UCMC_TRT_82
  {
    faction="CMD_GDF";
    armor=150;
    side=1;
    displayName="Anti-Tank Turret";
    hiddenSelectionsTextures[]={"GDF_Faction\Vehicle_Camos\Paladin\CMD_GDF_TKE_TurretStandTan_co.paa","GDF_Faction\Vehicle_Camos\Paladin\CMD_GDF_TKE_UCNAPC_MortarTan_co.paa"};
    artilleryScanner=0;
    class AnimationSources: AnimationSources
    {
      class recoil_source
      {
        source="reload";
        weapon="CMD_GDF_cannon_82mm";
      };
    };
    class Turrets: Turrets
    {
      class MainTurret: MainTurret
      {
        gunBeg="usti hlavne";
        gunEnd="konec hlavne";
        weapons[]=
        {
          "CMD_GDF_cannon_82mm"
        };
        magazines[]=
        {
          "CMD_GDF_50Rnd_82mm_HEAT_T_Yellow",
          "CMD_GDF_50Rnd_82mm_HEAT_T_Yellow",
          "CMD_GDF_50Rnd_82mm_HEAT_T_Yellow"
        };
        turretInfoType="RscOptics_crows";
        elevationMode=0;
        memoryPointGun[]=
        {
          "usti hlavne1"
        };
        selectionFireAnim="zasleh_1";
        maxHorizontalRotSpeed=0.5;
        maxVerticalRotSpeed=0.40000001;
        discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400,2500,2600,2700,2800,2900,3000};
        discreteDistanceInitIndex=2;
        minElev=-5;
        maxElev=90;
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
      };
    };
  };