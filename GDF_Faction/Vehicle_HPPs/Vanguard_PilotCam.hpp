class pilotCamera
{
      class OpticsIn
      {
        class Wide
        {
          opticsDisplayName="WFOV";
          initAngleX=0;
          minAngleX=0;
          maxAngleX=0;
          initAngleY=0;
          minAngleY=0;
          maxAngleY=0;
          initFov="(75 / 120)";
          minFov="(75 / 120)";
          maxFov="(75 / 120)";
          directionStabilized=1;
          visionMode[]=
          {
            "Normal",
            "NVG"
          };
          thermalMode[]={0,1};
          gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
          opticsPPEffects[]=
          {
            "OpticsCHAbera2",
            "OpticsBlur2"
          };
        };
        class Medium: Wide
        {
          opticsDisplayName="MFOV";
          initFov="(14.4 / 120)";
          minFov="(14.4 / 120)";
          maxFov="(14.4 / 120)";
          gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
        };
        class Narrow: Wide
        {
          opticsDisplayName="NFOV";
          initFov="(4.8 / 120)";
          minFov="(4.8 / 120)";
          maxFov="(4.8 / 120)";
          gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
        };
      };
      minTurn=-180;
      maxTurn=180;
      initTurn=0;
      minElev=-10;
      maxElev=90;
      initElev=15;
      maxXRotSpeed=1;
      maxYRotSpeed=1;
      maxMouseXRotSpeed=0.5;
      maxMouseYRotSpeed=0.5;
      pilotOpticsShowCursor=1;
      controllable=1;
};