class Components: Components
    {
      class TransportPylonsComponent
      {
        uiPicture="\A3\Air_F_EPC\Plane_CAS_02\Data\UI\Plane_cas_02_3DEN_CA.paa";
        class Pylons
        {
          class Pylons1
          {
            hardpoints[]=
            {
              "O_MISSILE_PYLON",
              "UNI_SCALPEL",
              "CMD_GDF_O_SKYFIRE"
            };
            attachment="";
            priority=5;
            maxweight=150;
            UIposition[]={0.34999999,0};
          };
          class Pylons2: Pylons1
          {
            priority=4;
            attachment="";
            maxweight=500;
            UIposition[]={0.345,0.050000001};
          };
          class Pylons3: Pylons1
          {
            hardpoints[]=
            {
              "O_BOMB_PYLON",
              "O_MISSILE_PYLON",
              "UNI_SCALPEL",
              "CMD_GDF_O_SKYFIRE",
              "CMD_GDF_O_BOMB_PYLON"
            };
            priority=3;
            attachment="CMD_GDF_PylonRack_Bomb_SDB_x4";
            maxweight=1050;
            UIposition[]={0.34,0.1};
          };
          class Pylons4: Pylons1
          {
            hardpoints[]=
            {
              "O_BOMB_PYLON",
              "O_MISSILE_PYLON",
              "UNI_SCALPEL",
              "CMD_GDF_O_SKYFIRE",
              "CMD_GDF_O_BOMB_PYLON"
            };
            priority=2;
            attachment="CMD_GDF_PylonRack_19Rnd_Rocket_Skyfire";
            maxweight=1200;
            UIposition[]={0.33000001,0.2};
          };
          class Pylons5: Pylons1
          {
            hardpoints[]=
            {
              "O_BOMB_PYLON",
              "O_MISSILE_PYLON",
              "UNI_SCALPEL",
              "CMD_GDF_O_SKYFIRE",
              "CMD_GDF_O_BOMB_PYLON"
            };
            priority=1;
            attachment="";
            maxweight=1200;
            UIposition[]={0.33000001,0.25};
          };
          class Pylons6: Pylons5
          {
            UIposition[]={0.33000001,0.30000001};
            mirroredMissilePos=5;
          };
          class Pylons7: Pylons4
          {
            UIposition[]={0.33000001,0.34999999};
            mirroredMissilePos=4;
          };
          class Pylons8: Pylons3
          {
            UIposition[]={0.34,0.44999999};
            mirroredMissilePos=3;
          };
          class Pylons9: Pylons2
          {
            UIposition[]={0.345,0.5};
            mirroredMissilePos=2;
          };
          class Pylons10: Pylons1
          {
            UIposition[]={0.34999999,0.55000001};
            mirroredMissilePos=1;
          };
        };
      };
    };