class cfgPatches
{
  class CMD_GDF_Garrison_GDF_Garrison
  {
    addonRootClass="CMD_GDF";
    units[]={"CMD_GDF_Garrison_Paladin_SPAAG","CMD_GDF_Garrison_Aegis","CMD_GDF_Garrison_Guardian_Armed","CMD_GDF_Garrison_Guardian_Unarmed","CMD_GDF_Garrison_Guardian_Harvester","CMD_GDF_Garrison_Paladin_APC","CMD_GDF_Garrison_Paladin_APC_Medevac","CMD_GDF_Garrison_I_APC_Wheeled_03","CMD_GDF_Garrison_Harasser_Humvee","CMD_GDF_Garrison_Ironback","CMD_GDF_Garrison_Ironback_Ammo","CMD_GDF_Garrison_Ironback_Medical","CMD_GDF_Garrison_Ironback_Repair","CMD_GDF_Garrison_Ironback_Transport_Covered","CMD_GDF_Garrison_Ironback_Transport_Open","CMD_GDF_Garrison_Ironback_Cargo","CMD_GDF_Garrison_Ironback_Flatbed","CMD_GDF_Garrison_Ironback_Fuel","CMD_GDF_Garrison_Quadbike","CMD_GDF_Garrison_Rover","CMD_GDF_Garrison_Rover_AT","CMD_GDF_Garrison_Shrike_Drone","CMD_GDF_Garrison_Hawk_Gunship","CMD_GDF_Garrison_Hornet_CAS","CMD_GDF_Garrison_Locust_Troop_Transport","CMD_GDF_Garrison_Nomad_Troop_Transport","CMD_GDF_Garrison_Vulture_Gunship","CMD_GDF_Garrison_Paladin_IFV","CMD_GDF_Garrison_Paladin_SPG","CMD_GDF_Garrison_Pike_Light_Bomber","CMD_GDF_Garrison_Hammerhead","CMD_GDF_Garrison_Mammoth","CMD_GDF_Garrison_Atlas_Shuttle","CMD_GDF_Garrison_Kestrel","CMD_GDF_Garrison_Squad_Leader","CMD_GDF_Garrison_Autorifleman_LMG","CMD_GDF_Garrison_Crewman","CMD_GDF_Garrison_Marksman","CMD_GDF_Garrison_Medic","CMD_GDF_Garrison_Rifleman_Light_AT","CMD_GDF_Garrison_Rifleman_AA","CMD_GDF_Garrison_Team_Leader","CMD_GDF_Garrison_Crewman_Operator","CMD_GDF_Garrison_Rifleman","CMD_GDF_Garrison_Heli_Pilot","CMD_GDF_Garrison_Jet_Pilot","CMD_GDF_Garrison_Autorifleman_MMG"};
    weapons[]={"CMD_GDF_Garrison_CMD_GDF_TKE_UCNRifle2_rhsusf_acc_wmx_bk_WideTKE_MRCOSight_rhsusf_acc_wmx_bk_WideTKE_MRCOSight","CMD_GDF_Garrison_CMD_GDF_TKE_UCNLMG_rhsusf_acc_wmx_bkTKE_MRCOSight_rhsusf_acc_wmx_bkTKE_MRCOSight","CMD_GDF_Garrison_CMD_GDF_TKE_UCNRifle2","CMD_GDF_Garrison_CMD_GDF_TKE_UCNDMR_ACE_muzzle_mzls_Hrhsusf_acc_wmx_bkACE_optic_SOS_2D_ACE_muzzle_mzls_Hrhsusf_acc_wmx_bkACE_optic_SOS_2D","CMD_GDF_Garrison_CMD_GDF_TKE_UCNRifle2_rhsusf_acc_wmx_bkTKE_MRCOSight_rhsusf_acc_wmx_bkTKE_MRCOSight","CMD_GDF_Garrison_CMD_GDF_TKE_ATRecoilless1MDTFBrown","CMD_GDF_Garrison_CMD_GDF_launch_B_Titan_olive_F","CMD_GDF_Garrison_CMD_GDF_TKE_UCNRifle3","CMD_GDF_Garrison_CMD_GDF_TKE_UCNPistol","CMD_GDF_Garrison_CMD_GDF_TKE_UCNMMG_rhsusf_acc_wmx_bkTKE_MRCOSight_rhsusf_acc_wmx_bkTKE_MRCOSight","CMD_GDF_Garrison_arifle_MX_ACO_pointer_F_acc_pointer_IRoptic_Aco","CMD_GDF_Garrison_hgun_P07_F"};
    requiredVersion=0.1;
    requiredAddons[]={"A3_Weapons_F_Items","ace_medical_treatment","A3_Weapons_F","TKE_UCN","CMD_GDF","TKE_Uniform_Revamp","TKE_Uniforms_Extended","TKE_General_Gear","kat_pharma","kat_breathing"};
  };
};

class cfgFactionClasses
{
  class CMD_GDF_Garrison
  {
    icon="";
    displayName="[Command] GDF Garrison";
    side=1;
    priority=1;
  };
};


class cfgWeapons
{
  class CMD_GDF_TKE_UCNRifle2_rhsusf_acc_wmx_bk_WideTKE_MRCOSight;
  class CMD_GDF_TKE_UCNLMG_rhsusf_acc_wmx_bkTKE_MRCOSight;
  class CMD_GDF_TKE_UCNRifle2;
  class CMD_GDF_TKE_UCNDMR_ACE_muzzle_mzls_Hrhsusf_acc_wmx_bkACE_optic_SOS_2D;
  class CMD_GDF_TKE_UCNRifle2_rhsusf_acc_wmx_bkTKE_MRCOSight;
  class CMD_GDF_TKE_ATRecoilless1MDTFBrown;
  class CMD_GDF_launch_B_Titan_olive_F;
  class CMD_GDF_TKE_UCNRifle3;
  class CMD_GDF_TKE_UCNPistol;
  class CMD_GDF_TKE_UCNMMG_rhsusf_acc_wmx_bkTKE_MRCOSight;
  class arifle_MX_ACO_pointer_F;
  class hgun_P07_F;

  class CMD_GDF_Garrison_CMD_GDF_TKE_UCNRifle2_rhsusf_acc_wmx_bk_WideTKE_MRCOSight_rhsusf_acc_wmx_bk_WideTKE_MRCOSight: CMD_GDF_TKE_UCNRifle2_rhsusf_acc_wmx_bk_WideTKE_MRCOSight
  {
    displayName="[UCN] ARB/3-D/1 - Carnivore";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="TKE_MRCOSight";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="rhsusf_acc_wmx_bk_Wide";
      };
    };
  };

  class CMD_GDF_Garrison_CMD_GDF_TKE_UCNLMG_rhsusf_acc_wmx_bkTKE_MRCOSight_rhsusf_acc_wmx_bkTKE_MRCOSight: CMD_GDF_TKE_UCNLMG_rhsusf_acc_wmx_bkTKE_MRCOSight
  {
    displayName="[UCN] SAW-ARB/3-D/5 - Ripper";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="TKE_MRCOSight";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="rhsusf_acc_wmx_bk";
      };
    };
  };

  class CMD_GDF_Garrison_CMD_GDF_TKE_UCNRifle2: CMD_GDF_TKE_UCNRifle2
  {
    displayName="[UCN] ARB/3-D/1 - Carnivore";
    scope=1;
    class LinkedItems
    {
    };
  };

  class CMD_GDF_Garrison_CMD_GDF_TKE_UCNDMR_ACE_muzzle_mzls_Hrhsusf_acc_wmx_bkACE_optic_SOS_2D_ACE_muzzle_mzls_Hrhsusf_acc_wmx_bkACE_optic_SOS_2D: CMD_GDF_TKE_UCNDMR_ACE_muzzle_mzls_Hrhsusf_acc_wmx_bkACE_optic_SOS_2D
  {
    displayName="[UCN] M-ARB/3-D/4 - Falcon";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="ACE_muzzle_mzls_H";
      };
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="ACE_optic_SOS_2D";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="rhsusf_acc_wmx_bk";
      };
    };
  };

  class CMD_GDF_Garrison_CMD_GDF_TKE_UCNRifle2_rhsusf_acc_wmx_bkTKE_MRCOSight_rhsusf_acc_wmx_bkTKE_MRCOSight: CMD_GDF_TKE_UCNRifle2_rhsusf_acc_wmx_bkTKE_MRCOSight
  {
    displayName="[UCN] ARB/3-D/1 - Carnivore";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="TKE_MRCOSight";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="rhsusf_acc_wmx_bk";
      };
    };
  };

  class CMD_GDF_Garrison_CMD_GDF_TKE_ATRecoilless1MDTFBrown: CMD_GDF_TKE_ATRecoilless1MDTFBrown
  {
    displayName="[MDTF] AT-9x (Brown)";
    scope=1;
    class LinkedItems
    {
    };
  };

  class CMD_GDF_Garrison_CMD_GDF_launch_B_Titan_olive_F: CMD_GDF_launch_B_Titan_olive_F
  {
    displayName="Titan MPRL (Olive)";
    scope=1;
    class LinkedItems
    {
    };
  };

  class CMD_GDF_Garrison_CMD_GDF_TKE_UCNRifle3: CMD_GDF_TKE_UCNRifle3
  {
    displayName="[UCN] ARB/3-D/3 - Viper";
    scope=1;
    class LinkedItems
    {
    };
  };

  class CMD_GDF_Garrison_CMD_GDF_TKE_UCNPistol: CMD_GDF_TKE_UCNPistol
  {
    displayName="[UCN] Model-30 Combat Pistol";
    scope=1;
    class LinkedItems
    {
    };
  };

  class CMD_GDF_Garrison_CMD_GDF_TKE_UCNMMG_rhsusf_acc_wmx_bkTKE_MRCOSight_rhsusf_acc_wmx_bkTKE_MRCOSight: CMD_GDF_TKE_UCNMMG_rhsusf_acc_wmx_bkTKE_MRCOSight
  {
    displayName="[UCN] SCS/AW - Cerberus ";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="TKE_MRCOSight";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="rhsusf_acc_wmx_bk";
      };
    };
  };

  class CMD_GDF_Garrison_arifle_MX_ACO_pointer_F_acc_pointer_IRoptic_Aco: arifle_MX_ACO_pointer_F
  {
    displayName="MX";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="optic_Aco";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="acc_pointer_IR";
      };
    };
  };

  class CMD_GDF_Garrison_hgun_P07_F: hgun_P07_F
  {
    displayName="P99";
    scope=1;
    class LinkedItems
    {
    };
  };

};

class cfgVehicles
{
  class CMD_GDF_Squad_Leader;
  class CMD_GDF_Autorifleman_LMG;
  class CMD_GDF_Autorifleman_LMG_pack;
  class CMD_GDF_Crewman;
  class CMD_GDF_Marksman;
  class CMD_GDF_Marksman_pack;
  class CMD_GDF_Medic;
  class CMD_GDF_Medic_pack;
  class CMD_GDF_Rifleman_AT;
  class CMD_GDF_Rifleman_AT_pack;
  class CMD_GDF_Rifleman_AA;
  class CMD_GDF_Rifleman_AA_pack;
  class CMD_GDF_Team_Leader;
  class CMD_GDF_Crewman_Operator;
  class CMD_GDF_Rifleman;
  class CMD_GDF_Jet_Pilot;
  class CMD_GDF_Heli_Pilot;
  class CMD_GDF_Autorifleman_MMG;
  class CMD_GDF_Autorifleman_MMG_pack;
  class Eventhandlers;

  class CMD_GDF_Garrison_Squad_Leader: CMD_GDF_Squad_Leader
  {
    faction="CMD_GDF_Garrison";
    side=1;
    displayName="Squad Leader";
    uniformClass="TKE_CombatUniArmy_U_B";
    weapons[]={"TKE_BinoUCN","CMD_GDF_Garrison_CMD_GDF_TKE_UCNRifle2_rhsusf_acc_wmx_bk_WideTKE_MRCOSight_rhsusf_acc_wmx_bk_WideTKE_MRCOSight","Put","Throw"};
    respawnWeapons[]={"TKE_BinoUCN","CMD_GDF_Garrison_CMD_GDF_TKE_UCNRifle2_rhsusf_acc_wmx_bk_WideTKE_MRCOSight_rhsusf_acc_wmx_bk_WideTKE_MRCOSight","Put","Throw"};
    items[]={"FirstAidKit","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_epinephrine","TKE_IntegratedNVGs"};
    respawnItems[]={"FirstAidKit","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_epinephrine","TKE_IntegratedNVGs"};
    magazines[]={"TKE_SMOKE_mag","TKE_SMOKE_mag","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_FRAG_mag"};
    respawnMagazines[]={"TKE_SMOKE_mag","TKE_SMOKE_mag","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_FRAG_mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_UCMCGlasses","TKE_BinoUCN","TKE_UCMRHelmOpen_Army","TKE_UCMCArmour4_1ArmyV3","G_Balaclava_TI_blk_F","TKE_UCMCGlasses"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_UCMCGlasses","TKE_BinoUCN","TKE_UCMRHelmOpen_Army","TKE_UCMCArmour4_1ArmyV3","G_Balaclava_TI_blk_F","TKE_UCMCGlasses"};
    backpack="";
  };

  class CMD_GDF_Garrison_Autorifleman_LMG: CMD_GDF_Autorifleman_LMG
  {
    faction="CMD_GDF_Garrison";
    side=1;
    displayName="Autorifleman - LMG";
    uniformClass="TKE_CombatUniArmy_U_B";
    weapons[]={"CMD_GDF_Garrison_CMD_GDF_TKE_UCNLMG_rhsusf_acc_wmx_bkTKE_MRCOSight_rhsusf_acc_wmx_bkTKE_MRCOSight","Put","Throw"};
    respawnWeapons[]={"CMD_GDF_Garrison_CMD_GDF_TKE_UCNLMG_rhsusf_acc_wmx_bkTKE_MRCOSight_rhsusf_acc_wmx_bkTKE_MRCOSight","Put","Throw"};
    items[]={"FirstAidKit","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","TKE_IntegratedNVGs","TKE_IntegratedNVGs"};
    respawnItems[]={"FirstAidKit","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","TKE_IntegratedNVGs","TKE_IntegratedNVGs"};
    magazines[]={"TKE_150rnd_62x35_magUCN","TKE_150rnd_62x35_magUCN","TKE_150rnd_62x35_magUCN","TKE_SMOKE_mag","TKE_150rnd_62x35_magUCN","TKE_150rnd_62x35_magUCN","TKE_150rnd_62x35_magUCN","TKE_150rnd_62x35_magUCN","TKE_150rnd_62x35_magUCN","TKE_150rnd_62x35_magUCN","TKE_FRAG_mag"};
    respawnMagazines[]={"TKE_150rnd_62x35_magUCN","TKE_150rnd_62x35_magUCN","TKE_150rnd_62x35_magUCN","TKE_SMOKE_mag","TKE_150rnd_62x35_magUCN","TKE_150rnd_62x35_magUCN","TKE_150rnd_62x35_magUCN","TKE_150rnd_62x35_magUCN","TKE_150rnd_62x35_magUCN","TKE_150rnd_62x35_magUCN","TKE_FRAG_mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_UCMRHelmOpen_Army","TKE_UCMCArmour6_4ArmyV3"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_UCMRHelmOpen_Army","TKE_UCMCArmour6_4ArmyV3"};
    backpack="CMD_GDF_Garrison_Autorifleman_LMG_pack";
  };

  class CMD_GDF_Garrison_Crewman: CMD_GDF_Crewman
  {
    faction="CMD_GDF_Garrison";
    side=1;
    displayName="Crewman";
    uniformClass="TKE_CombatUniNAArmy_U_B";
    weapons[]={"CMD_GDF_Garrison_CMD_GDF_TKE_UCNRifle2","Put","Throw"};
    respawnWeapons[]={"CMD_GDF_Garrison_CMD_GDF_TKE_UCNRifle2","Put","Throw"};
    items[]={"FirstAidKit","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage"};
    respawnItems[]={"FirstAidKit","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage"};
    magazines[]={"TKE_FRAG_mag","TKE_SMOKE_mag","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY"};
    respawnMagazines[]={"TKE_FRAG_mag","TKE_SMOKE_mag","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","CMD_GDF_TKE_CrewHelm","TKE_UCMCArmour1ArmyV3","G_Balaclava_TI_blk_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","CMD_GDF_TKE_CrewHelm","TKE_UCMCArmour1ArmyV3","G_Balaclava_TI_blk_F"};
    backpack="";
  };

  class CMD_GDF_Garrison_Marksman: CMD_GDF_Marksman
  {
    faction="CMD_GDF_Garrison";
    side=1;
    displayName="Marksman";
    uniformClass="TKE_CombatUniNAArmy_U_B";
    weapons[]={"TKE_BinoUCN","CMD_GDF_Garrison_CMD_GDF_TKE_UCNDMR_ACE_muzzle_mzls_Hrhsusf_acc_wmx_bkACE_optic_SOS_2D_ACE_muzzle_mzls_Hrhsusf_acc_wmx_bkACE_optic_SOS_2D","Put","Throw"};
    respawnWeapons[]={"TKE_BinoUCN","CMD_GDF_Garrison_CMD_GDF_TKE_UCNDMR_ACE_muzzle_mzls_Hrhsusf_acc_wmx_bkACE_optic_SOS_2D_ACE_muzzle_mzls_Hrhsusf_acc_wmx_bkACE_optic_SOS_2D","Put","Throw"};
    items[]={"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","TKE_UCMCNvgCamo2"};
    respawnItems[]={"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","TKE_UCMCNvgCamo2"};
    magazines[]={"TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN"};
    respawnMagazines[]={"TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_BinoUCN","TKE_BoonieHatHSArmy","TKE_UCMCArmour3_1ArmyV3","G_Lowprofile"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_BinoUCN","TKE_BoonieHatHSArmy","TKE_UCMCArmour3_1ArmyV3","G_Lowprofile"};
    backpack="CMD_GDF_Garrison_Marksman_pack";
  };

  class CMD_GDF_Garrison_Medic: CMD_GDF_Medic
  {
    faction="CMD_GDF_Garrison";
    side=1;
    displayName="Medic";
    uniformClass="TKE_VoidSuitArmy_U_B";
    weapons[]={"CMD_GDF_Garrison_CMD_GDF_TKE_UCNRifle2_rhsusf_acc_wmx_bkTKE_MRCOSight_rhsusf_acc_wmx_bkTKE_MRCOSight","Put","Throw"};
    respawnWeapons[]={"CMD_GDF_Garrison_CMD_GDF_TKE_UCNRifle2_rhsusf_acc_wmx_bkTKE_MRCOSight_rhsusf_acc_wmx_bkTKE_MRCOSight","Put","Throw"};
    items[]={"FirstAidKit","Medikit","TKE_UCMCGlasses","ACE_splint","ACE_splint","ACE_splint","Medikit","ACE_surgicalKit","ACE_splint","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","Medikit","ACE_surgicalKit","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV_500","ACE_bloodIV_500","ACE_bloodIV_500","ACE_bloodIV_500","ACE_bloodIV_500","ACE_bloodIV_500","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","kat_IV_16","kat_IV_16","kat_IV_16","kat_IV_16","kat_IV_16","kat_IV_16","kat_IV_16","kat_IV_16","kat_IV_16","kat_IV_16","kat_chestSeal","kat_chestSeal","kat_chestSeal","kat_chestSeal","kat_chestSeal"};
    respawnItems[]={"FirstAidKit","Medikit","TKE_UCMCGlasses","ACE_splint","ACE_splint","ACE_splint","Medikit","ACE_surgicalKit","ACE_splint","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","Medikit","ACE_surgicalKit","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV_500","ACE_bloodIV_500","ACE_bloodIV_500","ACE_bloodIV_500","ACE_bloodIV_500","ACE_bloodIV_500","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","kat_IV_16","kat_IV_16","kat_IV_16","kat_IV_16","kat_IV_16","kat_IV_16","kat_IV_16","kat_IV_16","kat_IV_16","kat_IV_16","kat_chestSeal","kat_chestSeal","kat_chestSeal","kat_chestSeal","kat_chestSeal"};
    magazines[]={"kat_Painkiller","kat_Painkiller","kat_Painkiller","kat_Painkiller","kat_Painkiller"};
    respawnMagazines[]={"kat_Painkiller","kat_Painkiller","kat_Painkiller","kat_Painkiller","kat_Painkiller"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","CMD_GDF_TKE_UCMCHelmMask_Medic","CMD_GDF_TKE_UCMCArmour2_1ArmyV3_MEDIC"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","CMD_GDF_TKE_UCMCHelmMask_Medic","CMD_GDF_TKE_UCMCArmour2_1ArmyV3_MEDIC"};
    backpack="CMD_GDF_Garrison_Medic_pack";
  };

  class CMD_GDF_Garrison_Rifleman_Light_AT: CMD_GDF_Rifleman_AT
  {
    faction="CMD_GDF_Garrison";
    side=1;
    displayName="Rifleman - Light AT";
    uniformClass="TKE_CombatUniArmy_U_B";
    weapons[]={"CMD_GDF_Garrison_CMD_GDF_TKE_UCNRifle2_rhsusf_acc_wmx_bkTKE_MRCOSight_rhsusf_acc_wmx_bkTKE_MRCOSight","CMD_GDF_Garrison_CMD_GDF_TKE_ATRecoilless1MDTFBrown","Put","Throw"};
    respawnWeapons[]={"CMD_GDF_Garrison_CMD_GDF_TKE_UCNRifle2_rhsusf_acc_wmx_bkTKE_MRCOSight_rhsusf_acc_wmx_bkTKE_MRCOSight","CMD_GDF_Garrison_CMD_GDF_TKE_ATRecoilless1MDTFBrown","Put","Throw"};
    items[]={"FirstAidKit","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","TKE_UCMCGogglesDownNVG"};
    respawnItems[]={"FirstAidKit","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","TKE_UCMCGogglesDownNVG"};
    magazines[]={"TKE_FRAG_mag","TKE_SMOKE_mag","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","MRAWS_HEAT55_F","MRAWS_HEAT55_F","MRAWS_HEAT55_F","MRAWS_HEAT55_F","MRAWS_HEAT55_F"};
    respawnMagazines[]={"TKE_FRAG_mag","TKE_SMOKE_mag","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","MRAWS_HEAT55_F","MRAWS_HEAT55_F","MRAWS_HEAT55_F","MRAWS_HEAT55_F","MRAWS_HEAT55_F"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_UCMCHelm_Camo2","TKE_UCMCArmour6_1ArmyV3"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_UCMCHelm_Camo2","TKE_UCMCArmour6_1ArmyV3"};
    backpack="CMD_GDF_Garrison_Rifleman_Light_AT_pack";
  };

  class CMD_GDF_Garrison_Rifleman_AA: CMD_GDF_Rifleman_AA
  {
    faction="CMD_GDF_Garrison";
    side=1;
    displayName="Rifleman - AA";
    uniformClass="TKE_CombatUniArmy_U_B";
    weapons[]={"CMD_GDF_Garrison_CMD_GDF_TKE_UCNRifle2_rhsusf_acc_wmx_bkTKE_MRCOSight_rhsusf_acc_wmx_bkTKE_MRCOSight","CMD_GDF_Garrison_CMD_GDF_launch_B_Titan_olive_F","Put","Throw"};
    respawnWeapons[]={"CMD_GDF_Garrison_CMD_GDF_TKE_UCNRifle2_rhsusf_acc_wmx_bkTKE_MRCOSight_rhsusf_acc_wmx_bkTKE_MRCOSight","CMD_GDF_Garrison_CMD_GDF_launch_B_Titan_olive_F","Put","Throw"};
    items[]={"FirstAidKit","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","TKE_IntegratedNVGs"};
    respawnItems[]={"FirstAidKit","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","TKE_IntegratedNVGs"};
    magazines[]={"TKE_FRAG_mag","TKE_SMOKE_mag","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY"};
    respawnMagazines[]={"TKE_FRAG_mag","TKE_SMOKE_mag","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_UCMCHelm_Camo2","TKE_UCMCArmour3_1ArmyV3","TKE_UCMCHUDFC"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_UCMCHelm_Camo2","TKE_UCMCArmour3_1ArmyV3","TKE_UCMCHUDFC"};
    backpack="CMD_GDF_Garrison_Rifleman_AA_pack";
  };

  class CMD_GDF_Garrison_Team_Leader: CMD_GDF_Team_Leader
  {
    faction="CMD_GDF_Garrison";
    side=1;
    displayName="Team Leader";
    uniformClass="TKE_CombatUniArmy_U_B";
    weapons[]={"CMD_GDF_Garrison_CMD_GDF_TKE_UCNRifle2_rhsusf_acc_wmx_bk_WideTKE_MRCOSight_rhsusf_acc_wmx_bk_WideTKE_MRCOSight","Put","Throw"};
    respawnWeapons[]={"CMD_GDF_Garrison_CMD_GDF_TKE_UCNRifle2_rhsusf_acc_wmx_bk_WideTKE_MRCOSight_rhsusf_acc_wmx_bk_WideTKE_MRCOSight","Put","Throw"};
    items[]={"FirstAidKit","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_epinephrine","TKE_IntegratedNVGs"};
    respawnItems[]={"FirstAidKit","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_epinephrine","TKE_IntegratedNVGs"};
    magazines[]={"TKE_SMOKE_mag","TKE_SMOKE_mag","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY"};
    respawnMagazines[]={"TKE_SMOKE_mag","TKE_SMOKE_mag","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_UCMRHelmOpen_Army","TKE_UCMCArmour6_3ArmyV3","G_Balaclava_TI_blk_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_UCMRHelmOpen_Army","TKE_UCMCArmour6_3ArmyV3","G_Balaclava_TI_blk_F"};
    backpack="";
  };

  class CMD_GDF_Garrison_Crewman_Operator: CMD_GDF_Crewman_Operator
  {
    faction="CMD_GDF_Garrison";
    side=1;
    displayName="Crewman (Operator)";
    uniformClass="TKE_CombatUniNAArmy_U_B";
    weapons[]={"CMD_GDF_Garrison_CMD_GDF_TKE_UCNRifle3","Put","Throw"};
    respawnWeapons[]={"CMD_GDF_Garrison_CMD_GDF_TKE_UCNRifle3","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"TKE_FRAG_mag","TKE_SMOKE_mag"};
    respawnMagazines[]={"TKE_FRAG_mag","TKE_SMOKE_mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","CMD_GDF_TKE_CrewHelm","TKE_UCMCArmour1ArmyV3","G_Balaclava_TI_blk_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","CMD_GDF_TKE_CrewHelm","TKE_UCMCArmour1ArmyV3","G_Balaclava_TI_blk_F"};
    backpack="";
  };

  class CMD_GDF_Garrison_Rifleman: CMD_GDF_Rifleman
  {
    faction="CMD_GDF_Garrison";
    side=1;
    displayName="Rifleman";
    uniformClass="TKE_CombatUniArmy_U_B";
    weapons[]={"CMD_GDF_Garrison_CMD_GDF_TKE_UCNRifle2_rhsusf_acc_wmx_bkTKE_MRCOSight_rhsusf_acc_wmx_bkTKE_MRCOSight","Put","Throw"};
    respawnWeapons[]={"CMD_GDF_Garrison_CMD_GDF_TKE_UCNRifle2_rhsusf_acc_wmx_bkTKE_MRCOSight_rhsusf_acc_wmx_bkTKE_MRCOSight","Put","Throw"};
    items[]={"FirstAidKit","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","TKE_IntegratedNVGs"};
    respawnItems[]={"FirstAidKit","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","TKE_IntegratedNVGs"};
    magazines[]={"TKE_FRAG_mag","TKE_SMOKE_mag","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY"};
    respawnMagazines[]={"TKE_FRAG_mag","TKE_SMOKE_mag","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_PatrolCapCArmy","TKE_UCMCArmour2_2ArmyV3"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_PatrolCapCArmy","TKE_UCMCArmour2_2ArmyV3"};
    backpack="";
  };

  class CMD_GDF_Garrison_Heli_Pilot: CMD_GDF_Heli_Pilot
  {
    faction="CMD_GDF_Garrison";
    side=1;
    displayName="Heli Pilot";
    uniformClass="TKE_VoidSuitArmy_U_B";
    weapons[]={"CMD_GDF_Garrison_CMD_GDF_TKE_UCNPistol","Put","Throw"};
    respawnWeapons[]={"CMD_GDF_Garrison_CMD_GDF_TKE_UCNPistol","Put","Throw"};
    items[]={"FirstAidKit","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage"};
    respawnItems[]={"FirstAidKit","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage"};
    magazines[]={"TKE_UCNPistol_mag","TKE_UCNPistol_mag","TKE_UCNPistol_mag","TKE_UCNPistol_mag","TKE_UCNPistol_mag"};
    respawnMagazines[]={"TKE_UCNPistol_mag","TKE_UCNPistol_mag","TKE_UCNPistol_mag","TKE_UCNPistol_mag","TKE_UCNPistol_mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","CMD_GDF_PilotHelm","CMD_GDF_PilotVest"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","CMD_GDF_PilotHelm","CMD_GDF_PilotVest"};
    backpack="";
  };

  class CMD_GDF_Garrison_Jet_Pilot: CMD_GDF_Jet_Pilot
  {
    faction="CMD_GDF_Garrison";
    side=1;
    displayName="Jet Pilot";
    uniformClass="TKE_VoidSuitArmy_U_B";
    weapons[]={"CMD_GDF_Garrison_CMD_GDF_TKE_UCNPistol","Put","Throw"};
    respawnWeapons[]={"CMD_GDF_Garrison_CMD_GDF_TKE_UCNPistol","Put","Throw"};
    items[]={"FirstAidKit","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage"};
    respawnItems[]={"FirstAidKit","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage"};
    magazines[]={"TKE_UCNPistol_mag","TKE_UCNPistol_mag","TKE_UCNPistol_mag","TKE_UCNPistol_mag","TKE_UCNPistol_mag"};
    respawnMagazines[]={"TKE_UCNPistol_mag","TKE_UCNPistol_mag","TKE_UCNPistol_mag","TKE_UCNPistol_mag","TKE_UCNPistol_mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","CMD_GDF_PilotHelmRV","CMD_GDF_PilotVest"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","CMD_GDF_PilotHelmRV","CMD_GDF_PilotVest"};
    backpack="";
  };

  class CMD_GDF_Garrison_Autorifleman_MMG: CMD_GDF_Autorifleman_MMG
  {
    faction="CMD_GDF_Garrison";
    side=1;
    displayName="Autorifleman - MMG";
    uniformClass="TKE_VoidSuitArmy_U_B";
    weapons[]={"CMD_GDF_Garrison_CMD_GDF_TKE_UCNMMG_rhsusf_acc_wmx_bkTKE_MRCOSight_rhsusf_acc_wmx_bkTKE_MRCOSight","Put","Throw"};
    respawnWeapons[]={"CMD_GDF_Garrison_CMD_GDF_TKE_UCNMMG_rhsusf_acc_wmx_bkTKE_MRCOSight_rhsusf_acc_wmx_bkTKE_MRCOSight","Put","Throw"};
    items[]={"FirstAidKit","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","TKE_UCMCGogglesDownNVG","TKE_UCMCGogglesDownNVG"};
    respawnItems[]={"FirstAidKit","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","TKE_UCMCGogglesDownNVG","TKE_UCMCGogglesDownNVG"};
    magazines[]={"TKE_100rnd_ucnmmg_mag","TKE_100rnd_ucnmmg_mag","TKE_SMOKE_mag","TKE_100rnd_ucnmmg_mag","TKE_100rnd_ucnmmg_mag","TKE_100rnd_ucnmmg_mag","TKE_FRAG_mag"};
    respawnMagazines[]={"TKE_100rnd_ucnmmg_mag","TKE_100rnd_ucnmmg_mag","TKE_SMOKE_mag","TKE_100rnd_ucnmmg_mag","TKE_100rnd_ucnmmg_mag","TKE_100rnd_ucnmmg_mag","TKE_FRAG_mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_UCMRHelmOpen_Army","TKE_UCMCArmour5_1ArmyV3","TKE_UCMCGogglesDown"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_UCMRHelmOpen_Army","TKE_UCMCArmour5_1ArmyV3","TKE_UCMCGogglesDown"};
    backpack="CMD_GDF_Garrison_Autorifleman_MMG_pack";
  };

  class CMD_GDF_Nomad_Troop_Transport;
  class CMD_GDF_Garrison_Nomad_Troop_Transport: CMD_GDF_Nomad_Troop_Transport
  {
    faction="CMD_GDF_Garrison";
    crew="CMD_GDF_Garrison_Heli_Pilot";
    typicalCargo[]={"CMD_GDF_Garrison_Heli_Pilot"};
  };

  class CMD_GDF_Guardian_Unarmed;
  class CMD_GDF_Garrison_Guardian_Unarmed: CMD_GDF_Guardian_Unarmed
  {
    faction="CMD_GDF_Garrison";
    crew="CMD_GDF_Garrison_Crewman_Operator";
    typicalCargo[]={"CMD_GDF_Garrison_Crewman_Operator"};
  };

  class CMD_GDF_Shrike_Drone;
  class CMD_GDF_Garrison_Shrike_Drone: CMD_GDF_Shrike_Drone
  {
    faction="CMD_GDF_Garrison";
  };

  class CMD_GDF_Atlas_Shuttle;
  class CMD_GDF_Garrison_Atlas_Shuttle: CMD_GDF_Atlas_Shuttle
  {
    faction="CMD_GDF_Garrison";
    crew="CMD_GDF_Garrison_Jet_Pilot";
    typicalCargo[]={"CMD_GDF_Garrison_Jet_Pilot"};
  };

  class CMD_GDF_Locust_Troop_Transport;
  class CMD_GDF_Garrison_Locust_Troop_Transport: CMD_GDF_Locust_Troop_Transport
  {
    faction="CMD_GDF_Garrison";
    crew="CMD_GDF_Garrison_Heli_Pilot";
    typicalCargo[]={"CMD_GDF_Garrison_Heli_Pilot"};
  };

  class CMD_GDF_Hammerhead;
  class CMD_GDF_Garrison_Hammerhead: CMD_GDF_Hammerhead
  {
    faction="CMD_GDF_Garrison";
    crew="CMD_GDF_Garrison_Crewman_Operator";
    typicalCargo[]={"CMD_GDF_Garrison_Crewman_Operator"};
  };

  class CMD_GDF_Aegis;
  class CMD_GDF_Garrison_Aegis: CMD_GDF_Aegis
  {
    faction="CMD_GDF_Garrison";
    crew="CMD_GDF_Garrison_Crewman_Operator";
    typicalCargo[]={"CMD_GDF_Garrison_Crewman_Operator"};
  };

  class CMD_GDF_Guardian_Harvester;
  class CMD_GDF_Garrison_Guardian_Harvester: CMD_GDF_Guardian_Harvester
  {
    faction="CMD_GDF_Garrison";
    crew="CMD_GDF_Garrison_Crewman_Operator";
    typicalCargo[]={"CMD_GDF_Garrison_Crewman_Operator"};
  };

  class CMD_GDF_Guardian_Armed;
  class CMD_GDF_Garrison_Guardian_Armed: CMD_GDF_Guardian_Armed
  {
    faction="CMD_GDF_Garrison";
    crew="CMD_GDF_Garrison_Crewman_Operator";
    typicalCargo[]={"CMD_GDF_Garrison_Crewman_Operator"};
  };

  class CMD_GDF_Paladin_SPAAG;
  class CMD_GDF_Garrison_Paladin_SPAAG: CMD_GDF_Paladin_SPAAG
  {
    faction="CMD_GDF_Garrison";
    crew="CMD_GDF_Garrison_Crewman";
    typicalCargo[]={"CMD_GDF_Garrison_Crewman"};
  };

  class CMD_GDF_Paladin_APC;
  class CMD_GDF_Garrison_Paladin_APC: CMD_GDF_Paladin_APC
  {
    faction="CMD_GDF_Garrison";
    crew="CMD_GDF_Garrison_Crewman";
    typicalCargo[]={"CMD_GDF_Garrison_Crewman"};
  };

  class CMD_GDF_Paladin_APC_Medevac;
  class CMD_GDF_Garrison_Paladin_APC_Medevac: CMD_GDF_Paladin_APC_Medevac
  {
    faction="CMD_GDF_Garrison";
    crew="CMD_GDF_Medic";
    typicalCargo[]={"CMD_GDF_Medic"};
  };

  class CMD_GDF_Quadbike;
  class CMD_GDF_Garrison_Quadbike: CMD_GDF_Quadbike
  {
    faction="CMD_GDF_Garrison";
    crew="CMD_GDF_Garrison_Crewman";
    typicalCargo[]={"CMD_GDF_Garrison_Crewman"};
  };

  class CMD_GDF_Rover;
  class CMD_GDF_Garrison_Rover: CMD_GDF_Rover
  {
    faction="CMD_GDF_Garrison";
    crew="CMD_GDF_Rifleman";
    typicalCargo[]={"CMD_GDF_Rifleman"};
  };

  class CMD_GDF_Rover_AT;
  class CMD_GDF_Garrison_Rover_AT: CMD_GDF_Rover_AT
  {
    faction="CMD_GDF_Garrison";
    crew="CMD_GDF_Rifleman";
    typicalCargo[]={"CMD_GDF_Rifleman"};
  };

  class CMD_GDF_Ironback_Cargo;
  class CMD_GDF_Garrison_Ironback_Cargo: CMD_GDF_Ironback_Cargo
  {
    faction="CMD_GDF_Garrison";
    crew="CMD_GDF_Garrison_Crewman";
    typicalCargo[]={"CMD_GDF_Garrison_Crewman"};
  };

  class CMD_GDF_Ironback;
  class CMD_GDF_Garrison_Ironback: CMD_GDF_Ironback
  {
    faction="CMD_GDF_Garrison";
    crew="CMD_GDF_Garrison_Crewman";
    typicalCargo[]={"CMD_GDF_Garrison_Crewman"};
  };

  class CMD_GDF_Ironback_Flatbed;
  class CMD_GDF_Garrison_Ironback_Flatbed: CMD_GDF_Ironback_Flatbed
  {
    faction="CMD_GDF_Garrison";
    crew="CMD_GDF_Garrison_Crewman";
    typicalCargo[]={"CMD_GDF_Garrison_Crewman"};
  };

  class CMD_GDF_Ironback_Fuel;
  class CMD_GDF_Garrison_Ironback_Fuel: CMD_GDF_Ironback_Fuel
  {
    faction="CMD_GDF_Garrison";
    crew="CMD_GDF_Garrison_Crewman";
    typicalCargo[]={"CMD_GDF_Garrison_Crewman"};
  };

  class CMD_GDF_Paladin_SPG;
  class CMD_GDF_Garrison_Paladin_SPG: CMD_GDF_Paladin_SPG
  {
    faction="CMD_GDF_Garrison";
    crew="CMD_GDF_Garrison_Crewman";
    typicalCargo[]={"CMD_GDF_Garrison_Crewman"};
  };

  class CMD_GDF_Paladin_IFV;
  class CMD_GDF_Garrison_Paladin_IFV: CMD_GDF_Paladin_IFV
  {
    faction="CMD_GDF_Garrison";
    crew="CMD_GDF_Garrison_Crewman";
    typicalCargo[]={"CMD_GDF_Garrison_Crewman"};
  };

  class CMD_GDF_Harasser_Humvee;
  class CMD_GDF_Garrison_Harasser_Humvee: CMD_GDF_Harasser_Humvee
  {
    faction="CMD_GDF_Garrison";
    crew="CMD_GDF_Rifleman";
    typicalCargo[]={"CMD_GDF_Rifleman"};
  };

  class CMD_GDF_Mammoth;
  class CMD_GDF_Garrison_Mammoth: CMD_GDF_Mammoth
  {
    faction="CMD_GDF_Garrison";
    crew="CMD_GDF_Garrison_Crewman_Operator";
    typicalCargo[]={"CMD_GDF_Garrison_Crewman_Operator"};
  };
  class CMD_GDF_Pike_Light_Bomber;
  class CMD_GDF_Garrison_Pike_Light_Bomber: CMD_GDF_Pike_Light_Bomber
  {
    faction="CMD_GDF_Garrison";
    crew="CMD_GDF_Garrison_Jet_Pilot";
    typicalCargo[]={"CMD_GDF_Garrison_Jet_Pilot"};
  };

  class CMD_GDF_Vulture_Gunship;
  class CMD_GDF_Garrison_Vulture_Gunship: CMD_GDF_Vulture_Gunship // To be possibly replaced by Eagle's "Hammerhead" Hind.
  {
    faction="CMD_GDF_Garrison";
    crew="CMD_GDF_Garrison_Heli_Pilot";
    typicalCargo[]={"CMD_GDF_Garrison_Heli_Pilot"};
  };

  class CMD_GDF_Ironback_Ammo;
  class CMD_GDF_Garrison_Ironback_Ammo: CMD_GDF_Ironback_Ammo
  {
    faction="CMD_GDF_Garrison";
    crew="CMD_GDF_Garrison_Crewman";
    typicalCargo[]={"CMD_GDF_Garrison_Crewman"};
  };

  class CMD_GDF_Ironback_Medical;
  class CMD_GDF_Garrison_Ironback_Medical: CMD_GDF_Ironback_Medical
  {
    faction="CMD_GDF_Garrison";
    crew="CMD_GDF_Medic";
    typicalCargo[]={"CMD_GDF_Medic"};
  };

  class CMD_GDF_Ironback_Repair;
  class CMD_GDF_Garrison_Ironback_Repair: CMD_GDF_Ironback_Repair
  {
    faction="CMD_GDF_Garrison";
    crew="CMD_GDF_Garrison_Crewman";
    typicalCargo[]={"CMD_GDF_Garrison_Crewman"};
  };

  class CMD_GDF_Ironback_Transport_Open;
  class CMD_GDF_Garrison_Ironback_Transport_Open: CMD_GDF_Ironback_Transport_Open
  {
    faction="CMD_GDF_Garrison";
    crew="CMD_GDF_Garrison_Crewman";
    typicalCargo[]={"CMD_GDF_Garrison_Crewman"};
  };

  class CMD_GDF_Ironback_Transport_Covered;
  class CMD_GDF_Garrison_Ironback_Transport_Covered: CMD_GDF_Ironback_Transport_Covered
  {
    faction="CMD_GDF_Garrison";
    crew="CMD_GDF_Garrison_Crewman";
    typicalCargo[]={"CMD_GDF_Garrison_Crewman"};
  };

  class CMD_GDF_Hawk_Gunship;
  class CMD_GDF_Garrison_Hawk_Gunship: CMD_GDF_Hawk_Gunship
  {
    faction="CMD_GDF_Garrison";
    crew="CMD_GDF_Garrison_Heli_Pilot";
    typicalCargo[]={"CMD_GDF_Garrison_Heli_Pilot"};
  };

  class CMD_GDF_Hornet_CAS;
  class CMD_GDF_Garrison_Hornet_CAS: CMD_GDF_Hornet_CAS
  {
    faction="CMD_GDF_Garrison";
    crew="CMD_GDF_Garrison_Heli_Pilot";
    typicalCargo[]={"CMD_GDF_Garrison_Heli_Pilot"};
  };

  class CMD_GDF_Kestrel;
  class CMD_GDF_Garrison_Kestrel: CMD_GDF_Kestrel
  {
    faction="CMD_GDF_Garrison";
    crew="CMD_GDF_Garrison_Heli_Pilot";
  };

  class CMD_GDF_I_APC_Wheeled_03;
  class CMD_GDF_Garrison_I_APC_Wheeled_03: CMD_GDF_I_APC_Wheeled_03
  {
    faction="CMD_GDF_Garrison";
    crew="CMD_GDF_Garrison_Crewman";
  };

  class CMD_GDF_Garrison_Autorifleman_LMG_pack: CMD_GDF_Autorifleman_LMG_pack
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems
    {
     class _xx_TKE_IntegratedNVGs {count=1;name="TKE_IntegratedNVGs";};
    };
    class TransportWeapons{};
  };


  class CMD_GDF_Garrison_Marksman_pack: CMD_GDF_Marksman_pack
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems{};
    class TransportWeapons{};
  };


  class CMD_GDF_Garrison_Medic_pack: CMD_GDF_Medic_pack
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_kat_Painkiller {count=5;magazine="kat_Painkiller";};
    };
    class TransportItems
    {
     class _xx_Medikit {count=1;name="Medikit";};
     class _xx_ACE_surgicalKit {count=1;name="ACE_surgicalKit";};
     class _xx_ACE_splint {count=4;name="ACE_splint";};
     class _xx_ACE_packingBandage {count=40;name="ACE_packingBandage";};
     class _xx_ACE_elasticBandage {count=40;name="ACE_elasticBandage";};
     class _xx_ACE_bloodIV {count=6;name="ACE_bloodIV";};
     class _xx_ACE_bloodIV_500 {count=6;name="ACE_bloodIV_500";};
     class _xx_ACE_epinephrine {count=4;name="ACE_epinephrine";};
     class _xx_kat_IV_16 {count=10;name="kat_IV_16";};
     class _xx_kat_chestSeal {count=5;name="kat_chestSeal";};
    };
    class TransportWeapons{};
  };


  class CMD_GDF_Garrison_Rifleman_Light_AT_pack: CMD_GDF_Rifleman_AT_pack
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_MRAWS_HEAT55_F {count=5;magazine="MRAWS_HEAT55_F";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class CMD_GDF_Garrison_Rifleman_AA_pack: CMD_GDF_Rifleman_AA_pack
  {
    scope=1;
    class TransportMagazines
    {
      class _xx_Titan_AA {count=3;magazine="Titan_AA";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class CMD_GDF_Garrison_Autorifleman_MMG_pack: CMD_GDF_Autorifleman_MMG_pack
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems
    {
     class _xx_TKE_UCMCGogglesDownNVG {count=1;name="TKE_UCMCGogglesDownNVG";};
    };
    class TransportWeapons{};
  };

};

//////////////// Paste cfgGroups after this line //////////////// 
