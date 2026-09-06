class cfgPatches
{
  class CMD_GDF
  {
    units[]={"CMD_GDF_Vanguard_Dropship","CMD_GDF_Engineer","CMD_GDF_Combat_Engineer","CMD_GDF_Scientist","CMD_GDF_Sniper_Ghillie","CMD_GDF_Spotter","CMD_GDF_Sniper","CMD_GDF_Spotter_Ghillie","CMD_GDF_Paladin_SPG","CMD_GDF_Turret_Armor","CMD_GDF_Turret_Air","CMD_GDF_Turret_Infantry","CMD_GDF_Nomad_DAP","CMD_GDF_Rifleman_Heavy_AT","CMD_GDF_Paladin_APC_Medevac","CMD_GDF_I_APC_Wheeled_03","CMD_GDF_Tempest","CMD_GDF_Tempest_Stealth","CMD_GDF_Kestrel","CMD_GDF_C_Van_02_vehicle_F","CMD_GDF_Wolf_Lead","CMD_GDF_Wolf","CMD_GDF_Wolf_Medic","CMD_GDF_Wolf_EOD","CMD_GDF_ION_Lancer","CMD_GDF_Headhunter","CMD_GDF_Platoon_Leader","CMD_GDF_Team_Leader","CMD_GDF_Autorifleman_LMG","CMD_GDF_Medic","CMD_GDF_Rifleman_AT","CMD_GDF_Squad_Leader","CMD_GDF_Rifleman_AA","CMD_GDF_Autorifleman_MMG","CMD_GDF_Marksman","CMD_GDF_Rifleman","CMD_GDF_Crewman","CMD_GDF_Grenadier","CMD_GDF_Heli_Pilot","CMD_GDF_Jet_Pilot","CMD_GDF_Crewman_Operator","CMD_GDF_DeleteMe","CMD_GDF_Nomad_Troop_Transport","CMD_GDF_Guardian_Unarmed","CMD_GDF_Shrike_Drone","CMD_GDF_Condor_Armed","CMD_GDF_Atlas_Shuttle","CMD_GDF_Locust_Troop_Transport","CMD_GDF_Hammerhead_LIC","CMD_GDF_Hammerhead","CMD_GDF_Aegis","CMD_GDF_Guardian_Harvester","CMD_GDF_Guardian_Armed","CMD_GDF_Paladin_SPAAG","CMD_GDF_Paladin_IFV_Railgun","CMD_GDF_Paladin_APC","CMD_GDF_Quadbike","CMD_GDF_Rover","CMD_GDF_Rover_AT","CMD_GDF_Ironback_Cargo","CMD_GDF_Ironback","CMD_GDF_Ironback_Flatbed","CMD_GDF_Ironback_Fuel","CMD_GDF_Paladin_AT","CMD_GDF_Paladin_IFV","CMD_GDF_Harasser_Humvee","CMD_GDF_Mammoth","CMD_GDF_Zephyr_Interceptor","CMD_GDF_Pike_Light_Bomber","CMD_GDF_Condor_Infantry","CMD_GDF_Condor_Vehicle","CMD_GDF_Vulture_Gunship","CMD_GDF_Ironback_Ammo","CMD_GDF_Ironback_Medical","CMD_GDF_Ironback_Repair","CMD_GDF_Ironback_Transport_Open","CMD_GDF_Ironback_Transport_Covered","CMD_GDF_Hawk_Gunship","CMD_GDF_Hornet_CAS"};
    weapons[]={"CMD_GDF_TKE_UCMCHelmMask_Medic","CMD_GDF_TKE_UCMCArmour2_1ArmyV3_MEDIC","CMD_GDF_TKE_CrewHelm","CMD_GDF_JMSJEFF_x13Rifle","CMD_GDF_WRS_Weapon_Revolver_Black","CMD_GDF_TKE_UCNLasRifle","CMD_GDF_TKE_UCNPistol","CMD_GDF_TKE_UCNRifle3_muzzle_snds_65_TI_blk_FTKE_ThermScope","CMD_GDF_TKE_UCNBPRifleV2_muzzle_snds_65_TI_blk_Frhsusf_acc_wmx_bkTKE_4xSight","CMD_GDF_TKE_UCNRifle2_rhsusf_acc_wmx_bk_WideTKE_MRCOSight","CMD_GDF_TKE_UCNLMG_rhsusf_acc_wmx_bkTKE_MRCOSight","CMD_GDF_TKE_UCNRifle2_rhsusf_acc_wmx_bkTKE_MRCOSight","CMD_GDF_TKE_ATRecoilless1MDTFBrown","CMD_GDF_launch_B_Titan_olive_F","CMD_GDF_TKE_UCNMMG_rhsusf_acc_wmx_bkTKE_MRCOSight","CMD_GDF_TKE_UCNDMR_ACE_muzzle_mzls_Hrhsusf_acc_wmx_bkACE_optic_SOS_2D","CMD_GDF_TKE_UCNRifle2","CMD_GDF_TKE_UCNRifle3"};
    requiredVersion=0.1;
    requiredAddons[]={"A3_Weapons_F_Items","ace_explosives","ace_logistics_wirecutter","ace_medical_treatment","kat_pharma","A3_Weapons_F","JMSJEFF_x13","CMD_GDF","JMSJEFF_inf","JMSJEFF_inf_armor_mod","JMSJEFF_helm_mod","TKE_Unit_Groups","ace_maptools","ace_flashlights","ace_captives","ace_attach","kat_circulation","kat_misc","ace_parachute","TKE_Weapons_rifles_xlr","TKE_Weapons_handgun_model30","TKE_Uniform_Revamp","TKE_KMC","kat_airway","EquipmentPLUS","TKE_Weapons_rifles_viper","TKE_UCN","TKE_Weapons_rifles_bpr0d1","TKE_Weapons_rifles_carnivore","TKE_Weapons_rifles_ripper","kat_breathing","TKE_Launchers","A3_Weapons_F_Enoch_Launchers_Titan","TKE_Weapons_rifles_cerberus","TKE_Weapons_rifles_falcon","TKE_Uniforms_Extended","TKE_General_Gear"};
  };
};

class cfgFactionClasses
{
  class CMD_GDF
  {
    icon="";
    displayName="[Command] GDF";
    side=1;
    priority=1;
  };
};

class CfgEditorSubcategories
{
    class CMD_GDF_Infantry
    {
        displayName = "Infantry";
    };
    class CMD_GDF_SpecialForces
    {
        displayName = "Special Forces";
    };
    class CMD_GDF_Technicians
    {
        displayName = "Technicians";
    };
    class CMD_GDF_IFV
    {
        displayName = "IFVs";
    };
};

class cfgWeapons
{
  class JMSJEFF_x13Rifle;
  class WRS_Weapon_Revolver_Black;
  class TKE_UCNLasRifle;
  class TKE_UCNPistol;
  class TKE_UCNRifle3;
  class TKE_UCNBPRifleV2;
  class TKE_UCNRifle2;
  class TKE_UCNLMG;
  class TKE_ATRecoilless1MDTFBrown;
  class launch_B_Titan_olive_F;
  class TKE_UCNMMG;
  class TKE_UCNDMR;
  class TKE_UCMCHelmMask_Camo2;
  class HeadgearItem;
  class TKE_UCMCArmour2_1ArmyV3;
  class TKE_FCrewHelmCiv;
  class TKE_PilotVest;
  class TKE_UCNPilotHelmRVUCFA;
  class TKE_MDPistolBlack;
  class WRS_Weapon_Revolver;
  class TKE_MDSniper;
  class TKE_UCNDMRCamo1;
  class CMD_GDF_TKE_MDPistolBlack: TKE_MDPistolBlack
  {
    displayName="[MD] MHG-16 Pugio (Black)";
    scope=1;
    class LinkedItems
    {
    };
  };

  class CMD_GDF_WRS_Weapon_Revolver: WRS_Weapon_Revolver
  {
    displayName="WRS - 2 Constrictor";
    scope=1;
    class LinkedItems
    {
    };
  };

  class CMD_GDF_TKE_MDSniper_TKE_MRCOSight: TKE_MDSniper
  {
    displayName="[MD] MAR/D-06 - Verutum";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="TKE_MRCOSight";
      };
    };
  };

  class CMD_GDF_TKE_UCNDMR_TKE_4xSight: TKE_UCNDMR
  {
    displayName="[UCN] M-ARB/3-D/4 - Falcon";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="TKE_4xSight";
      };
    };
  };

  class CMD_GDF_TKE_UCNDMRCamo1_TKE_4xSight: TKE_UCNDMRCamo1
  {
    displayName="[UCN] M-ARB/3-D/4 - Falcon(Army Camo 1)";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="TKE_4xSight";
      };
    };
  };

  class CMD_GDF_PilotHelmRV: TKE_UCNPilotHelmRVUCFA
  {
    displayName="[UCFA] EA-ACH-22/52 (GDF)";
    hiddenSelectionsTextures[]={"\GDF_Faction\Armor\Vehicle_Crew\CMD_GDF_PilotHelm_co.paa","\GDF_Faction\Armor\Vehicle_Crew\CMD_GDF_PilotHelm_co.paa","\GDF_Faction\Armor\Vehicle_Crew\CMD_GDF_PilotHelm_ca.paa"};
  };

  class CMD_GDF_PilotHelm: TKE_UCNPilotHelmRVUCFA
  {
    displayName="[UCFA] EA-ACH-22/52 (GDF, No Rebreather)";
    hiddenSelectionsTextures[]={"\GDF_Faction\Armor\Vehicle_Crew\CMD_GDF_PilotHelm_co.paa","","\GDF_Faction\Armor\Vehicle_Crew\CMD_GDF_PilotHelm_ca.paa"};
  };

  class CMD_GDF_PilotVest: TKE_PilotVest
  {
    displayName="[UCFA] Pilot Vest (GDF)";
    hiddenSelectionsTextures[]={"\GDF_Faction\Armor\Vehicle_Crew\CMD_GDF_PilotVest_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\GDF_Faction\Armor\Vehicle_Crew\CMD_GDFExtras_Pilot_co.paa"};
  };

  class CMD_GDF_TKE_CrewHelm: TKE_FCrewHelmCiv
  {
    displayName="[UCFN] ETH-FC (GDF Crew)";
    hiddenSelectionsTextures[]={"\GDF_Faction\Armor\Vehicle_Crew\CMD_GDF_TKE_CrewHelm_co.paa","\TKE_Kuiper_Engagements\TKE_General_Gear\data\TKE_FCrewHelmYellow_ca.paa"};
  };

  class CMD_GDF_TKE_UCMCArmour2_1ArmyV3_MEDIC: TKE_UCMCArmour2_1ArmyV3
  {
    displayName="[UCFA] AIBA Heavy Vest (Army, Medic)";
    hiddenSelectionsTextures[]={"\GDF_Faction\Armor\Medic\CMD_GDF_TKE_UCMCArmourArmyV3_MEDIC_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourPArmyV3_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","\GDF_Faction\Armor\Medic\CMD_GDF_TKE_ArmourAddonArmyB_MEDIC_co.paa","\GDF_Faction\Armor\Medic\CMD_GDF_TKE_ArmourAddonArmyB_MEDIC_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCArmourPArmyV3_co.paa","\GDF_Faction\Armor\Medic\CMD_GDF_TKE_UCMCArmourArmyV3_MEDIC_co.paa"};
  };

  class CMD_GDF_TKE_UCMCHelmMask_Medic: TKE_UCMCHelmMask_Camo2
  {
    displayName="[UCFA] ACH-22/50 (Mask, Medic)";
    hiddenSelectionsTextures[]=
    {
      "\GDF_Faction\Armor\Medic\CMD_GDF_TKE_UCMCHelmCamo2M_MEDIC_co.paa",
      "\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCVisor_co"
    };
    class ItemInfo: HeadgearItem
    {
      mass=10;
      uniformModel="\TKE_Kuiper_Engagements\TKE_UCN\TKE_UCMCHelmMask.p3d";
      modelSides[]={3,1};
      hiddenSelections[]=
      {
        "camo",
        "camo1"
      };
      class HitpointsProtectionInfo
      {
        class Head
        {
          hitpointName="HitHead";
          armor=24;
          passThrough=0.2;
        };
        class Face
        {
          hitpointName="HitFace";
          armor=12;
          passThrough=0.3;
        };
      };
    };
  };

  class CMD_GDF_JMSJEFF_x13Rifle: JMSJEFF_x13Rifle
  {
    displayName="X-13";
    scope=1;
    class LinkedItems
    {
    };
  };

  class CMD_GDF_WRS_Weapon_Revolver_Black: WRS_Weapon_Revolver_Black
  {
    displayName="WRS - 2 Constrictor (Black)";
    scope=1;
    class LinkedItems
    {
    };
  };

  class CMD_GDF_TKE_UCNLasRifle: TKE_UCNLasRifle
  {
    displayName="[UCN] XLR-01";
    scope=1;
    class LinkedItems
    {
    };
  };

  class CMD_GDF_TKE_UCNPistol: TKE_UCNPistol
  {
    displayName="[UCN] Model-30 Combat Pistol";
    scope=1;
    class LinkedItems
    {
    };
  };

  class CMD_GDF_TKE_UCNRifle3_muzzle_snds_65_TI_blk_FTKE_ThermScope: TKE_UCNRifle3
  {
    displayName="[UCN] ARB/3-D/3 - Viper";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="muzzle_snds_65_TI_blk_F";
      };
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="TKE_ThermScope";
      };
    };
  };

  class CMD_GDF_TKE_UCNBPRifleV2_muzzle_snds_65_TI_blk_Frhsusf_acc_wmx_bkTKE_4xSight: TKE_UCNBPRifleV2
  {
    displayName="[UCN] BPR/0-D/1 (UBGL)";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="muzzle_snds_65_TI_blk_F";
      };
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="TKE_4xSight";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="rhsusf_acc_wmx_bk";
      };
    };
  };

  class CMD_GDF_TKE_UCNRifle2_rhsusf_acc_wmx_bk_WideTKE_MRCOSight: TKE_UCNRifle2
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

  class CMD_GDF_TKE_UCNLMG_rhsusf_acc_wmx_bkTKE_MRCOSight: TKE_UCNLMG
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

  class CMD_GDF_TKE_UCNRifle2_rhsusf_acc_wmx_bkTKE_MRCOSight: TKE_UCNRifle2
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

  class CMD_GDF_TKE_ATRecoilless1MDTFBrown: TKE_ATRecoilless1MDTFBrown
  {
    displayName="[MDTF] AT-9x (Brown)";
    scope=1;
    class LinkedItems
    {
    };
  };

  class CMD_GDF_launch_B_Titan_olive_F: launch_B_Titan_olive_F
  {
    displayName="Titan MPRL (Olive)";
    scope=1;
    class LinkedItems
    {
    };
  };

  class CMD_GDF_TKE_UCNMMG_rhsusf_acc_wmx_bkTKE_MRCOSight: TKE_UCNMMG
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

  class CMD_GDF_TKE_UCNDMR_ACE_muzzle_mzls_Hrhsusf_acc_wmx_bkACE_optic_SOS_2D: TKE_UCNDMR
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

  class CMD_GDF_TKE_UCNRifle2: TKE_UCNRifle2
  {
    displayName="[UCN] ARB/3-D/1 - Carnivore";
    scope=1;
    class LinkedItems
    {
    };
  };

  class CMD_GDF_TKE_UCNRifle3: TKE_UCNRifle3
  {
    displayName="[UCN] ARB/3-D/3 - Viper";
    scope=1;
    class LinkedItems
    {
    };
  };

};
class Turrets;
class CopilotTurret;
class MainTurret;
class RightDoorGun;
class Eventhandlers;
class components;
class DefaultVehicleSystemsDisplayManagerLeft;
class DefaultVehicleSystemsDisplayManagerRight;
class ViewOptics;
class ViewGunner;
class VehicleSystemsTemplateLeftCommander;
class VehicleSystemsTemplateRightCommander;
class VehicleSystemsTemplateLeftGunner;
class VehicleSystemsTemplateRightGunner;
class CommanderOptics;
class HitPoints;
class HitTurret;
class HitGun;
class AnimationSources;
class cfgVehicles
{
  class UCNFA_R_RFL;
  class ITA_Agent_Eng;
  class B_CivilianBackpack_01_Everyday_Black_F;
  class TKE_CamelBakV2MD;
  class TKE_EVAPack;
  class TKE_EVAPackMDSR;
  class UCNFA_R_XLR;
  class TKE_EVAPackKMC;
  class TKE_BackPack1MDBlack;
  class TKE_CamelBakUCNCamo2;
  class TKE_BackPack2UCN2;
  class UCNFA_R_ARFL;
  class TKE_CamelBakV2UCNCamo2;
  class UCNFA_R_MED;
  class TKE_AlicePackUCNArmyM;
  class UCNFA_R_AT_RFL;
  class TKE_RuckSackArmy;
  class UCNFA_R_MMG;
  class UCNFA_R_DMR;
  class UCNFA_R_GRN;
  class TKE_ReconPackArmy;
  class UCNFA_G_PILOT;
  class CE_UH80_BG;
  class CE_RHS_UN_APC_Namer_Unarmed_B;
  class B_T_UAV_03_dynamicLoadout_F;
  class B_T_VTOL_01_armed_F;
  class TKE_Ext_GUSA_UCNFA;
  class CE_TKE_MH44T;
  class CE_TKE_UH44T;
  class B_MBT_01_TUSK_F;
  class B_MBT_01_cannon_F;
  class B_APC_Tracked_01_AA_F;
  class B_APC_Tracked_01_CRV_F;
  class B_APC_Tracked_01_rcws_F;
  class UCNFA_B_APC_AA;
  class UCNFA_B_APC_AX;
  class UCNFA_B_APC_U;
  class B_Quadbike_01_F;
  class B_LSV_01_unarmed_F;
  class B_LSV_01_AT_F;
  class B_Truck_01_cargo_F;
  class B_Truck_01_mover_F;
  class B_Truck_01_flatbed_F;
  class B_Truck_01_fuel_F;
  class UCNFA_B_APC_Art;
  class UCNFA_B_APC_A;
  class rhsusf_m1151_m2_v1_usarmy_d;
  class HTNK_Nato;
  class I_Plane_Fighter_04_F;
  class O_Plane_CAS_02_dynamicLoadout_F;
  class B_T_VTOL_01_infantry_F;
  class B_T_VTOL_01_vehicle_F;
  class O_Heli_Attack_02_dynamicLoadout_F;
  class B_Truck_01_ammo_F;
  class B_Truck_01_medical_F;
  class B_Truck_01_Repair_F;
  class B_Truck_01_transport_F;
  class B_Truck_01_covered_F;
  class CE_TKE_AH44J;
  class CE_TKE_AH44S;
  class B_CTRG_Heli_Transport_01_DAP_F;
  class C_Van_02_vehicle_F;
  class FT_Hornet_IMC;
  class O_Plane_Fighter_02_F;
  class O_Plane_Fighter_02_Stealth_F;
  class I_APC_Wheeled_03_cannon_F;
  class UCMC_TRT_AA;
  class UCMC_TRT_40;
  class UCMC_TRT_82;
  class FT_Goblin_Dropship_IMC;

  class CMD_GDF_Wolf: UCNFA_R_RFL
  {
    faction="CMD_GDF";
    side=1;
    displayName="Wolf";
    editorSubcategory = "CMD_GDF_SpecialForces";
    uniformClass="JMSJEFF_uniformJ13_black_F_CombatUniform";
    weapons[]={"CMD_GDF_JMSJEFF_x13Rifle","CMD_GDF_WRS_Weapon_Revolver_Black","Put","Throw"};
    respawnWeapons[]={"CMD_GDF_JMSJEFF_x13Rifle","CMD_GDF_WRS_Weapon_Revolver_Black","Put","Throw"};
    items[]={"FirstAidKit","JMSJEFF_NVChip","ACE_DefusalKit","ACE_M26_Clacker","ACE_wirecutter","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV_500","ACE_bloodIV_500","kat_TXA","kat_TXA","kat_EACA","kat_EACA"};
    respawnItems[]={"FirstAidKit","JMSJEFF_NVChip","ACE_DefusalKit","ACE_M26_Clacker","ACE_wirecutter","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV_500","ACE_bloodIV_500","kat_TXA","kat_TXA","kat_EACA","kat_EACA"};
    magazines[]={"WRS_Revolver_Magazine","WRS_Revolver_Magazine","WRS_Revolver_Magazine","WRS_Revolver_Magazine","WRS_Revolver_Magazine","HandGrenade","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","rhsusf_m112_mag"};
    respawnMagazines[]={"WRS_Revolver_Magazine","WRS_Revolver_Magazine","WRS_Revolver_Magazine","WRS_Revolver_Magazine","WRS_Revolver_Magazine","HandGrenade","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","rhsusf_m112_mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","JMSJEFF_Jeff_R4_helmet","JMSJEFF_FarmorS_armor_black","G_Balaclava_TI_blk_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","JMSJEFF_Jeff_R4_helmet","JMSJEFF_FarmorS_armor_black","G_Balaclava_TI_blk_F"};
    backpack="CMD_GDF_Wolf_pack";
    class EventHandlers: Eventhandlers
    {
      init = "_unit = _this select 0; _unit setVariable ['ace_medical_damageThreshold', 1, true]; _unit setVariable ['ace_medical_statemachine_fatalInjuriesPlayer', false]; _unit setAnimSpeedCoef 1.5;";
    };
  };

  class CMD_GDF_Wolf_Lead: CMD_GDF_Wolf
  {
    faction="CMD_GDF";
    side=1;
    displayName="Wolf Lead";
    editorSubcategory = "CMD_GDF_SpecialForces";
    uniformClass="JMSJEFF_uniformJ13_black_F_CombatUniform";
    weapons[]={"CMD_GDF_JMSJEFF_x13Rifle","CMD_GDF_WRS_Weapon_Revolver_Black","Put","Throw"};
    respawnWeapons[]={"CMD_GDF_JMSJEFF_x13Rifle","CMD_GDF_WRS_Weapon_Revolver_Black","Put","Throw"};
    items[]={"FirstAidKit","ACE_DefusalKit","ACE_M26_Clacker","ACE_wirecutter","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_bloodIV","ACE_bloodIV_500","ACE_bloodIV_500","kat_TXA","kat_TXA","kat_EACA","kat_EACA"};
    respawnItems[]={"FirstAidKit","ACE_DefusalKit","ACE_M26_Clacker","ACE_wirecutter","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_bloodIV","ACE_bloodIV_500","ACE_bloodIV_500","kat_TXA","kat_TXA","kat_EACA","kat_EACA"};
    magazines[]={"WRS_Revolver_Magazine","WRS_Revolver_Magazine","WRS_Revolver_Magazine","WRS_Revolver_Magazine","WRS_Revolver_Magazine","HandGrenade","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","rhsusf_m112_mag"};
    respawnMagazines[]={"WRS_Revolver_Magazine","WRS_Revolver_Magazine","WRS_Revolver_Magazine","WRS_Revolver_Magazine","WRS_Revolver_Magazine","HandGrenade","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","rhsusf_m112_mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","JMSJEFF_NVChip","JMSJEFF_Jeff_R4_helmet","JMSJEFF_FarmorSL_armor_black","G_Balaclava_TI_blk_F","JMSJEFF_NVChip"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","JMSJEFF_NVChip","JMSJEFF_Jeff_R4_helmet","JMSJEFF_FarmorSL_armor_black","G_Balaclava_TI_blk_F","JMSJEFF_NVChip"};
    backpack="CMD_GDF_Wolf_Lead_pack";
  };

  class CMD_GDF_Wolf_Medic: CMD_GDF_Wolf
  {
    faction="CMD_GDF";
    side=1;
    displayName="Wolf Medic";
    editorSubcategory = "CMD_GDF_SpecialForces";
    uniformClass="JMSJEFF_uniformJ13_black_F_CombatUniform";
    weapons[]={"CMD_GDF_JMSJEFF_x13Rifle","Put","Throw"};
    respawnWeapons[]={"CMD_GDF_JMSJEFF_x13Rifle","Put","Throw"};
    items[]={"ACE_M26_Clacker","ACE_DefusalKit","ACE_MapTools","ACE_Flashlight_XL50","ACE_wirecutter","MineDetector","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_IR_Strobe_Item","JMSJEFF_NVChip","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","kat_IV_16","kat_IV_16","kat_IV_16","kat_IV_16","kat_IV_16","kat_IV_16","kat_IV_16","kat_IV_16","kat_IV_16","kat_IV_16","ACE_surgicalKit","kat_X_AED","kat_TXA","kat_TXA","kat_TXA","kat_TXA","kat_TXA","kat_TXA","kat_TXA","kat_TXA","kat_TXA","kat_TXA","kat_EACA","kat_EACA","kat_EACA","kat_EACA","kat_EACA","kat_EACA","kat_EACA","kat_EACA","kat_EACA","kat_EACA","ACE_epinephrine","ACE_epinephrine","kat_IO_FAST","kat_IO_FAST","kat_IO_FAST","kat_IO_FAST","kat_IO_FAST","kat_ketamine","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet"};
    respawnItems[]={"ACE_M26_Clacker","ACE_DefusalKit","ACE_MapTools","ACE_Flashlight_XL50","ACE_wirecutter","MineDetector","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_IR_Strobe_Item","JMSJEFF_NVChip","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","kat_IV_16","kat_IV_16","kat_IV_16","kat_IV_16","kat_IV_16","kat_IV_16","kat_IV_16","kat_IV_16","kat_IV_16","kat_IV_16","ACE_surgicalKit","kat_X_AED","kat_TXA","kat_TXA","kat_TXA","kat_TXA","kat_TXA","kat_TXA","kat_TXA","kat_TXA","kat_TXA","kat_TXA","kat_EACA","kat_EACA","kat_EACA","kat_EACA","kat_EACA","kat_EACA","kat_EACA","kat_EACA","kat_EACA","kat_EACA","ACE_epinephrine","ACE_epinephrine","kat_IO_FAST","kat_IO_FAST","kat_IO_FAST","kat_IO_FAST","kat_IO_FAST","kat_ketamine","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet"};
    magazines[]={"JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","rhsusf_m112_mag","kat_Painkiller","kat_Painkiller","kat_Painkiller","kat_Painkiller","kat_Painkiller","kat_Pervitin","kat_Pervitin"};
    respawnMagazines[]={"JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","rhsusf_m112_mag","kat_Painkiller","kat_Painkiller","kat_Painkiller","kat_Painkiller","kat_Painkiller","kat_Pervitin","kat_Pervitin"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","JMSJEFF_Jeff_R4_helmet","JMSJEFF_FarmorTroop_armor_black","G_Balaclava_TI_blk_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","JMSJEFF_Jeff_R4_helmet","JMSJEFF_FarmorTroop_armor_black","G_Balaclava_TI_blk_F"};
    backpack="CMD_GDF_Wolf_Medic_pack";
  };

  class CMD_GDF_Wolf_EOD: CMD_GDF_Wolf
  {
    faction="CMD_GDF";
    side=1;
    displayName="Wolf EOD";
    editorSubcategory = "CMD_GDF_SpecialForces";
    uniformClass="JMSJEFF_uniformJ13_black_F_CombatUniform";
    weapons[]={"CMD_GDF_JMSJEFF_x13Rifle","CMD_GDF_WRS_Weapon_Revolver_Black","Put","Throw"};
    respawnWeapons[]={"CMD_GDF_JMSJEFF_x13Rifle","CMD_GDF_WRS_Weapon_Revolver_Black","Put","Throw"};
    items[]={"FirstAidKit","JMSJEFF_NVChip","ACE_DefusalKit","ACE_M26_Clacker","ACE_wirecutter","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_bloodIV","ACE_bloodIV_500","ACE_bloodIV_500","kat_TXA","kat_TXA","kat_EACA","kat_EACA","ACE_M26_Clacker","ACE_DefusalKit"};
    respawnItems[]={"FirstAidKit","JMSJEFF_NVChip","ACE_DefusalKit","ACE_M26_Clacker","ACE_wirecutter","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_bloodIV","ACE_bloodIV_500","ACE_bloodIV_500","kat_TXA","kat_TXA","kat_EACA","kat_EACA","ACE_M26_Clacker","ACE_DefusalKit"};
    magazines[]={"WRS_Revolver_Magazine","WRS_Revolver_Magazine","WRS_Revolver_Magazine","WRS_Revolver_Magazine","WRS_Revolver_Magazine","HandGrenade","rhsusf_m112_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","APERSMineDispenser_Mag","APERSBoundingMine_Range_Mag","APERSBoundingMine_Range_Mag"};
    respawnMagazines[]={"WRS_Revolver_Magazine","WRS_Revolver_Magazine","WRS_Revolver_Magazine","WRS_Revolver_Magazine","WRS_Revolver_Magazine","HandGrenade","rhsusf_m112_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","JMSJEFF_30Rnd_ARX160_mag","APERSMineDispenser_Mag","APERSBoundingMine_Range_Mag","APERSBoundingMine_Range_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","JMSJEFF_Jeff_R4_helmet","JMSJEFF_FarmorTroop_armor_black","G_Balaclava_TI_blk_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","JMSJEFF_Jeff_R4_helmet","JMSJEFF_FarmorTroop_armor_black","G_Balaclava_TI_blk_F"};
    backpack="CMD_GDF_Wolf_EOD_pack";
  };

  class CMD_GDF_ION_Lancer: UCNFA_R_XLR
  {
    faction="CMD_GDF";
    side=1;
    displayName="ION Lancer";
    editorSubcategory = "CMD_GDF_SpecialForces";
    uniformClass="TKE_CombatUniKMC_U_B";
    weapons[]={"TKE_BinoUCN","CMD_GDF_TKE_UCNLasRifle","CMD_GDF_TKE_UCNPistol","Put","Throw"};
    respawnWeapons[]={"TKE_BinoUCN","CMD_GDF_TKE_UCNLasRifle","CMD_GDF_TKE_UCNPistol","Put","Throw"};
    items[]={"FirstAidKit","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_bloodIV","kat_TXA","kat_EACA","kat_IFAK","TKE_IntegratedNVGs"};
    respawnItems[]={"FirstAidKit","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_bloodIV","kat_TXA","kat_EACA","kat_IFAK","TKE_IntegratedNVGs"};
    magazines[]={"TKE_Powerpack","TKE_Powerpack","TKE_FRAG_mag","TKE_SMOKE_mag","TKE_Powerpack","TKE_Powerpack","TKE_Powerpack","TKE_Powerpack","TKE_UCNPistol_mag","TKE_UCNPistol_mag","TKE_UCNPistol_mag","TKE_UCNPistol_mag","TKE_UCNPistol_mag","TKE_UCNPistol_mag","TKE_UCNPistol_mag","TKE_UCNPistol_mag","TKE_UCNPistol_mag","TKE_UCNPistol_mag","TKE_SMOKE_mag","TKE_SMOKE_mag","TKE_SMOKE_mag","kat_Pervitin","kat_Painkiller","kat_Painkiller"};
    respawnMagazines[]={"TKE_Powerpack","TKE_Powerpack","TKE_FRAG_mag","TKE_SMOKE_mag","TKE_Powerpack","TKE_Powerpack","TKE_Powerpack","TKE_Powerpack","TKE_UCNPistol_mag","TKE_UCNPistol_mag","TKE_UCNPistol_mag","TKE_UCNPistol_mag","TKE_UCNPistol_mag","TKE_UCNPistol_mag","TKE_UCNPistol_mag","TKE_UCNPistol_mag","TKE_UCNPistol_mag","TKE_UCNPistol_mag","TKE_SMOKE_mag","TKE_SMOKE_mag","TKE_SMOKE_mag","kat_Pervitin","kat_Painkiller","kat_Painkiller"};
    linkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","ItemGPS","TKE_BinoUCN","TKE_KMCHelm","TKE_KMCArmour1","G_Balaclava_TI_blk_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","ItemRadio","ItemGPS","TKE_BinoUCN","TKE_KMCHelm","TKE_KMCArmour1","G_Balaclava_TI_blk_F"};
    backpack="CMD_GDF_ION_Lancer_pack";
    class EventHandlers: Eventhandlers
    {
        init = "_unit = _this select 0; _unit setVariable ['ace_medical_damageThreshold', 5, true]; _unit setVariable ['ace_medical_statemachine_fatalInjuriesPlayer', false];";
    };
  };

  class CMD_GDF_Headhunter: UCNFA_R_RFL
  {
    faction="CMD_GDF";
    side=1;
    displayName="Headhunter";
    editorSubcategory = "CMD_GDF_SpecialForces";
    uniformClass="TKE_CombatUni_U_B";
    weapons[]={"TKE_BinoUCN","CMD_GDF_TKE_UCNRifle3_muzzle_snds_65_TI_blk_FTKE_ThermScope","CMD_GDF_WRS_Weapon_Revolver_Black","Put","Throw"};
    respawnWeapons[]={"TKE_BinoUCN","CMD_GDF_TKE_UCNRifle3_muzzle_snds_65_TI_blk_FTKE_ThermScope","CMD_GDF_WRS_Weapon_Revolver_Black","Put","Throw"};
    items[]={"kat_TXA","kat_TXA","kat_TXA","kat_TXA","kat_TXA","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_surgicalKit","ACE_suture","ACE_suture","ACE_suture","ACE_suture","ACE_suture","ACE_suture","ACE_suture","ACE_suture","ACE_suture","ACE_suture","ACE_suture","ACE_suture","ACE_suture","ACE_suture","ACE_suture","ACE_suture","ACE_suture","ACE_suture","ACE_suture","ACE_suture","ACE_suture","ACE_suture","ACE_suture","ACE_suture","ACE_suture","ACE_suture","ACE_suture","ACE_suture","ACE_suture","ACE_suture","ACE_personalAidKit","ACE_morphine","ACE_morphine","kat_larynx","kat_larynx","kat_IO_FAST","kat_IO_FAST","ACE_epinephrine","ACE_epinephrine","kat_EACA","kat_EACA","kat_EACA","kat_EACA","kat_EACA","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV_500","ACE_bloodIV_500","kat_IV_16","kat_IV_16","kat_IV_16","kat_IV_16","kat_IV_16","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage"};
    respawnItems[]={"kat_TXA","kat_TXA","kat_TXA","kat_TXA","kat_TXA","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_surgicalKit","ACE_suture","ACE_suture","ACE_suture","ACE_suture","ACE_suture","ACE_suture","ACE_suture","ACE_suture","ACE_suture","ACE_suture","ACE_suture","ACE_suture","ACE_suture","ACE_suture","ACE_suture","ACE_suture","ACE_suture","ACE_suture","ACE_suture","ACE_suture","ACE_suture","ACE_suture","ACE_suture","ACE_suture","ACE_suture","ACE_suture","ACE_suture","ACE_suture","ACE_suture","ACE_suture","ACE_personalAidKit","ACE_morphine","ACE_morphine","kat_larynx","kat_larynx","kat_IO_FAST","kat_IO_FAST","ACE_epinephrine","ACE_epinephrine","kat_EACA","kat_EACA","kat_EACA","kat_EACA","kat_EACA","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV_500","ACE_bloodIV_500","kat_IV_16","kat_IV_16","kat_IV_16","kat_IV_16","kat_IV_16","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage"};
    magazines[]={"kat_Pervitin","kat_Pervitin","kat_Painkiller","kat_Painkiller","kat_Caffeine","Laserbatteries","WRS_Revolver_Magazine","WRS_Revolver_Magazine","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_SMOKE_mag","TKE_SMOKE_mag","TKE_SMOKE_mag","TKE_SMOKE_mag","TKE_SMOKE_mag","TKE_SMOKE_mag","TKE_SMOKE_mag","TKE_SMOKE_mag","TKE_SMOKE_mag","TKE_SMOKE_mag","TKE_FRAG_mag","TKE_FRAG_mag","rhsusf_m112_mag","rhsusf_m112_mag","rhsusf_m112_mag","rhsusf_m112_mag","DemoCharge_Remote_Mag","DemoCharge_Remote_Mag","DemoCharge_Remote_Mag","DemoCharge_Remote_Mag","rhsusf_m112x4_mag","rhsusf_m112x4_mag","rhsusf_m112x4_mag","rhsusf_m112x4_mag"};
    respawnMagazines[]={"kat_Pervitin","kat_Pervitin","kat_Painkiller","kat_Painkiller","kat_Caffeine","Laserbatteries","WRS_Revolver_Magazine","WRS_Revolver_Magazine","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_SMOKE_mag","TKE_SMOKE_mag","TKE_SMOKE_mag","TKE_SMOKE_mag","TKE_SMOKE_mag","TKE_SMOKE_mag","TKE_SMOKE_mag","TKE_SMOKE_mag","TKE_SMOKE_mag","TKE_SMOKE_mag","TKE_FRAG_mag","TKE_FRAG_mag","rhsusf_m112_mag","rhsusf_m112_mag","rhsusf_m112_mag","rhsusf_m112_mag","DemoCharge_Remote_Mag","DemoCharge_Remote_Mag","DemoCharge_Remote_Mag","DemoCharge_Remote_Mag","rhsusf_m112x4_mag","rhsusf_m112x4_mag","rhsusf_m112x4_mag","rhsusf_m112x4_mag"};
    linkedItems[]={"ItemMap","ItemCompass","EQPLUS_CloakEquipment_Item","ItemRadio","TKE_CAGenNVG","TKE_BinoUCN","TKE_UCMCHelmMaskSkull","TKE_UCMCArmour2_1","G_Balaclava_TI_blk_F","TKE_CAGenNVG"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","EQPLUS_CloakEquipment_Item","ItemRadio","TKE_CAGenNVG","TKE_BinoUCN","TKE_UCMCHelmMaskSkull","TKE_UCMCArmour2_1","G_Balaclava_TI_blk_F","TKE_CAGenNVG"};
    backpack="CMD_GDF_Headhunter_pack";
    class EventHandlers: Eventhandlers
    {
        init = "_unit = _this select 0; _unit setVariable ['ace_medical_damageThreshold', 8, true]; _unit setVariable ['ace_medical_statemachine_fatalInjuriesPlayer', false]; _unit setAnimSpeedCoef 2;";
    };
  };

  class CMD_GDF_Platoon_Leader: UCNFA_R_RFL
  {
    faction="CMD_GDF";
    side=1;
    displayName="Platoon Leader";
    editorSubcategory = "CMD_GDF_Infantry";
    uniformClass="TKE_CombatUniArmy_U_B";
    weapons[]={"TKE_BinoUCN","CMD_GDF_TKE_UCNBPRifleV2_muzzle_snds_65_TI_blk_Frhsusf_acc_wmx_bkTKE_4xSight","Put","Throw"};
    respawnWeapons[]={"TKE_BinoUCN","CMD_GDF_TKE_UCNBPRifleV2_muzzle_snds_65_TI_blk_Frhsusf_acc_wmx_bkTKE_4xSight","Put","Throw"};
    items[]={"FirstAidKit","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage"};
    respawnItems[]={"FirstAidKit","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage"};
    magazines[]={"TKE_SMOKE_mag","TKE_FRAG_mag","TKE_30rnd_575x45_magTY","TKE_30rnd_575x45_magTY","TKE_30rnd_575x45_magTY","TKE_30rnd_575x45_magTY","TKE_30rnd_575x45_magTY","TKE_30rnd_575x45_magTY","TKE_30rnd_575x45_magTY","TKE_30rnd_575x45_magTY","1Rnd_HE_Grenade_shell","TKE_30rnd_575x45_magTY","TKE_30rnd_575x45_magTY","TKE_30rnd_575x45_magTY","TKE_30rnd_575x45_magTY","TKE_30rnd_575x45_magTY","TKE_30rnd_575x45_magTY","TKE_30rnd_575x45_magTY","TKE_30rnd_575x45_magTY","TKE_30rnd_575x45_magTY","TKE_30rnd_575x45_magTY","TKE_30rnd_575x45_magTY","TKE_30rnd_575x45_magTY","TKE_30rnd_575x45_magTY","TKE_30rnd_575x45_magTY"};
    respawnMagazines[]={"TKE_SMOKE_mag","TKE_FRAG_mag","TKE_30rnd_575x45_magTY","TKE_30rnd_575x45_magTY","TKE_30rnd_575x45_magTY","TKE_30rnd_575x45_magTY","TKE_30rnd_575x45_magTY","TKE_30rnd_575x45_magTY","TKE_30rnd_575x45_magTY","TKE_30rnd_575x45_magTY","1Rnd_HE_Grenade_shell","TKE_30rnd_575x45_magTY","TKE_30rnd_575x45_magTY","TKE_30rnd_575x45_magTY","TKE_30rnd_575x45_magTY","TKE_30rnd_575x45_magTY","TKE_30rnd_575x45_magTY","TKE_30rnd_575x45_magTY","TKE_30rnd_575x45_magTY","TKE_30rnd_575x45_magTY","TKE_30rnd_575x45_magTY","TKE_30rnd_575x45_magTY","TKE_30rnd_575x45_magTY","TKE_30rnd_575x45_magTY","TKE_30rnd_575x45_magTY"};
    linkedItems[]={"ItemMap","ItemCompass","ItemRadio","ItemGPS","TKE_BinoUCN","TKE_UCMCHelmClosedCamo2","TKE_UCMCArmour4_1ArmyV3","JCA_G_FaceMask_01_headset_black_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemRadio","ItemGPS","TKE_BinoUCN","TKE_UCMCHelmClosedCamo2","TKE_UCMCArmour4_1ArmyV3","JCA_G_FaceMask_01_headset_black_F"};
    backpack="CMD_GDF_Platoon_Leader_pack";
  };

  class CMD_GDF_Team_Leader: UCNFA_R_RFL
  {
    faction="CMD_GDF";
    side=1;
    displayName="Team Leader";
    editorSubcategory = "CMD_GDF_Infantry";
    uniformClass="TKE_CombatUniArmy_U_B";
    weapons[]={"CMD_GDF_TKE_UCNRifle2_rhsusf_acc_wmx_bk_WideTKE_MRCOSight","Put","Throw"};
    respawnWeapons[]={"CMD_GDF_TKE_UCNRifle2_rhsusf_acc_wmx_bk_WideTKE_MRCOSight","Put","Throw"};
    items[]={"FirstAidKit","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_epinephrine","TKE_IntegratedNVGs"};
    respawnItems[]={"FirstAidKit","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_epinephrine","TKE_IntegratedNVGs"};
    magazines[]={"TKE_FRAG_mag","TKE_SMOKE_mag","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_SMOKE_mag","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY"};
    respawnMagazines[]={"TKE_FRAG_mag","TKE_SMOKE_mag","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_SMOKE_mag","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_UCMCHelmMask_Camo2","TKE_UCMCArmour6_3ArmyV3","G_Balaclava_TI_blk_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_UCMCHelmMask_Camo2","TKE_UCMCArmour6_3ArmyV3","G_Balaclava_TI_blk_F"};
    backpack="CMD_GDF_Team_Leader_pack";
  };

  class CMD_GDF_Autorifleman_LMG: UCNFA_R_ARFL
  {
    faction="CMD_GDF";
    side=1;
    displayName="Autorifleman - LMG";
    editorSubcategory = "CMD_GDF_Infantry";
    uniformClass="TKE_CombatUniArmy_U_B";
    weapons[]={"CMD_GDF_TKE_UCNLMG_rhsusf_acc_wmx_bkTKE_MRCOSight","Put","Throw"};
    respawnWeapons[]={"CMD_GDF_TKE_UCNLMG_rhsusf_acc_wmx_bkTKE_MRCOSight","Put","Throw"};
    items[]={"FirstAidKit","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","TKE_IntegratedNVGs"};
    respawnItems[]={"FirstAidKit","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","TKE_IntegratedNVGs"};
    magazines[]={"TKE_150rnd_62x35_magUCN","TKE_150rnd_62x35_magUCN","TKE_150rnd_62x35_magUCN","TKE_150rnd_62x35_magUCN","TKE_FRAG_mag","TKE_SMOKE_mag","TKE_150rnd_62x35_magUCN","TKE_150rnd_62x35_magUCN","TKE_150rnd_62x35_magUCN","TKE_150rnd_62x35_magUCN","TKE_150rnd_62x35_magUCN","TKE_150rnd_62x35_magUCN"};
    respawnMagazines[]={"TKE_150rnd_62x35_magUCN","TKE_150rnd_62x35_magUCN","TKE_150rnd_62x35_magUCN","TKE_150rnd_62x35_magUCN","TKE_FRAG_mag","TKE_SMOKE_mag","TKE_150rnd_62x35_magUCN","TKE_150rnd_62x35_magUCN","TKE_150rnd_62x35_magUCN","TKE_150rnd_62x35_magUCN","TKE_150rnd_62x35_magUCN","TKE_150rnd_62x35_magUCN"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_UCMCHelmClosedCamo2","TKE_UCMCArmour6_4ArmyV3","G_Balaclava_TI_blk_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_UCMCHelmClosedCamo2","TKE_UCMCArmour6_4ArmyV3","G_Balaclava_TI_blk_F"};
    backpack="CMD_GDF_Autorifleman_LMG_pack";
  };

  class CMD_GDF_Medic: UCNFA_R_MED
  {
    faction="CMD_GDF";
    side=1;
    displayName="Medic";
    editorSubcategory = "CMD_GDF_Infantry";
    uniformClass="TKE_VoidSuitArmy_U_B";
    weapons[]={"CMD_GDF_TKE_UCNRifle2_rhsusf_acc_wmx_bkTKE_MRCOSight","Put","Throw"};
    respawnWeapons[]={"CMD_GDF_TKE_UCNRifle2_rhsusf_acc_wmx_bkTKE_MRCOSight","Put","Throw"};
    items[]={"FirstAidKit","Medikit","TKE_UCMCGlasses","Medikit","ACE_surgicalKit"};
    respawnItems[]={"FirstAidKit","Medikit","TKE_UCMCGlasses","Medikit","ACE_surgicalKit"};
    magazines[]={"TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","kat_Painkiller"};
    respawnMagazines[]={"TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","kat_Painkiller"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","CMD_GDF_TKE_UCMCHelmMask_Medic","CMD_GDF_TKE_UCMCArmour2_1ArmyV3_MEDIC"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","CMD_GDF_TKE_UCMCHelmMask_Medic","CMD_GDF_TKE_UCMCArmour2_1ArmyV3_MEDIC"};
    backpack="CMD_GDF_Medic_pack";
  };

  class CMD_GDF_Rifleman_AT: UCNFA_R_AT_RFL
  {
    faction="CMD_GDF";
    side=1;
    displayName="Rifleman - AT";
    editorSubcategory = "CMD_GDF_Infantry";
    uniformClass="TKE_CombatUniArmy_U_B";
    weapons[]={"CMD_GDF_TKE_UCNRifle2_rhsusf_acc_wmx_bkTKE_MRCOSight","CMD_GDF_TKE_ATRecoilless1MDTFBrown","Put","Throw"};
    respawnWeapons[]={"CMD_GDF_TKE_UCNRifle2_rhsusf_acc_wmx_bkTKE_MRCOSight","CMD_GDF_TKE_ATRecoilless1MDTFBrown","Put","Throw"};
    items[]={"FirstAidKit","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","TKE_UCMCGogglesDownNVG"};
    respawnItems[]={"FirstAidKit","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","TKE_UCMCGogglesDownNVG"};
    magazines[]={"TKE_FRAG_mag","TKE_SMOKE_mag","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","MRAWS_HEAT55_F","MRAWS_HEAT55_F","MRAWS_HEAT55_F"};
    respawnMagazines[]={"TKE_FRAG_mag","TKE_SMOKE_mag","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","MRAWS_HEAT55_F","MRAWS_HEAT55_F","MRAWS_HEAT55_F"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_UCMCHelmMask_Camo2","TKE_UCMCArmour6_1ArmyV3","G_Balaclava_TI_blk_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_UCMCHelmMask_Camo2","TKE_UCMCArmour6_1ArmyV3","G_Balaclava_TI_blk_F"};
    backpack="CMD_GDF_Rifleman_AT_pack";
  };

  class CMD_GDF_Rifleman_Heavy_AT: UCNFA_R_AT_RFL
  {
    faction="CMD_GDF";
    side=1;
    displayName="Rifleman - Heavy AT";
    editorSubcategory = "CMD_GDF_Infantry";
    uniformClass="TKE_CombatUniArmy_U_B";
    weapons[]={"CMD_GDF_TKE_UCNRifle2_rhsusf_acc_wmx_bkTKE_MRCOSight","CMD_GDF_TKE_ATRecoilless1MDTFBrown","Put","Throw"};
    respawnWeapons[]={"CMD_GDF_TKE_UCNRifle2_rhsusf_acc_wmx_bkTKE_MRCOSight","CMD_GDF_TKE_ATRecoilless1MDTFBrown","Put","Throw"};
    items[]={"FirstAidKit","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","TKE_UCMCGogglesDownNVG"};
    respawnItems[]={"FirstAidKit","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","TKE_UCMCGogglesDownNVG"};
    magazines[]={"TKE_FRAG_mag","TKE_SMOKE_mag","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","MRAWS_HEAT_F","MRAWS_HEAT_F","MRAWS_HEAT_F"};
    respawnMagazines[]={"TKE_FRAG_mag","TKE_SMOKE_mag","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","MRAWS_HEAT_F","MRAWS_HEAT_F","MRAWS_HEAT_F"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_UCMCHelmClosedCamo2","TKE_UCMCArmour2_1ArmyV3","G_Balaclava_TI_blk_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_UCMCHelmClosedCamo2","TKE_UCMCArmour2_1ArmyV3","G_Balaclava_TI_blk_F"};
    backpack="CMD_GDF_Rifleman_AT_pack";
  };

  class CMD_GDF_Squad_Leader: UCNFA_R_RFL
  {
    faction="CMD_GDF";
    side=1;
    displayName="Squad Leader";
    editorSubcategory = "CMD_GDF_Infantry";
    uniformClass="TKE_CombatUniArmy_U_B";
    weapons[]={"TKE_BinoUCN","CMD_GDF_TKE_UCNRifle2_rhsusf_acc_wmx_bk_WideTKE_MRCOSight","Put","Throw"};
    respawnWeapons[]={"TKE_BinoUCN","CMD_GDF_TKE_UCNRifle2_rhsusf_acc_wmx_bk_WideTKE_MRCOSight","Put","Throw"};
    items[]={"FirstAidKit","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_epinephrine","TKE_IntegratedNVGs"};
    respawnItems[]={"FirstAidKit","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_epinephrine","TKE_IntegratedNVGs"};
    magazines[]={"TKE_FRAG_mag","TKE_SMOKE_mag","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_SMOKE_mag","TKE_FRAG_mag","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY"};
    respawnMagazines[]={"TKE_FRAG_mag","TKE_SMOKE_mag","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_SMOKE_mag","TKE_FRAG_mag","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_BinoUCN","TKE_UCMCHelmMask_Camo2","TKE_UCMCArmour4_1ArmyV3","G_Balaclava_TI_blk_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_BinoUCN","TKE_UCMCHelmMask_Camo2","TKE_UCMCArmour4_1ArmyV3","G_Balaclava_TI_blk_F"};
    backpack="CMD_GDF_Squad_Leader_pack";
  };

  class CMD_GDF_Rifleman_AA: UCNFA_R_AT_RFL
  {
    faction="CMD_GDF";
    side=1;
    displayName="Rifleman - AA";
    editorSubcategory = "CMD_GDF_Infantry";
    uniformClass="TKE_CombatUniArmy_U_B";
    weapons[]={"CMD_GDF_TKE_UCNRifle2_rhsusf_acc_wmx_bkTKE_MRCOSight","CMD_GDF_launch_B_Titan_olive_F","Put","Throw"};
    respawnWeapons[]={"CMD_GDF_TKE_UCNRifle2_rhsusf_acc_wmx_bkTKE_MRCOSight","CMD_GDF_launch_B_Titan_olive_F","Put","Throw"};
    items[]={"FirstAidKit","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","TKE_IntegratedNVGs"};
    respawnItems[]={"FirstAidKit","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","TKE_IntegratedNVGs"};
    magazines[]={"TKE_FRAG_mag","TKE_SMOKE_mag","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY"};
    respawnMagazines[]={"TKE_FRAG_mag","TKE_SMOKE_mag","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_UCMCHelmMask_Camo2","TKE_UCMCArmour3_1ArmyV3","G_Balaclava_TI_blk_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_UCMCHelmMask_Camo2","TKE_UCMCArmour3_1ArmyV3","G_Balaclava_TI_blk_F"};
    backpack="CMD_GDF_Rifleman_AA_pack";
  };

  class CMD_GDF_Autorifleman_MMG: UCNFA_R_MMG
  {
    faction="CMD_GDF";
    side=1;
    displayName="Autorifleman - MMG";
    editorSubcategory = "CMD_GDF_Infantry";
    uniformClass="TKE_VoidSuitArmy_U_B";
    weapons[]={"CMD_GDF_TKE_UCNMMG_rhsusf_acc_wmx_bkTKE_MRCOSight","Put","Throw"};
    respawnWeapons[]={"CMD_GDF_TKE_UCNMMG_rhsusf_acc_wmx_bkTKE_MRCOSight","Put","Throw"};
    items[]={"FirstAidKit","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","TKE_UCMCGogglesDownNVG"};
    respawnItems[]={"FirstAidKit","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","TKE_UCMCGogglesDownNVG"};
    magazines[]={"TKE_100rnd_ucnmmg_mag","TKE_100rnd_ucnmmg_mag","TKE_100rnd_ucnmmg_mag","TKE_FRAG_mag","TKE_SMOKE_mag","TKE_100rnd_ucnmmg_mag","TKE_100rnd_ucnmmg_mag","TKE_100rnd_ucnmmg_mag"};
    respawnMagazines[]={"TKE_100rnd_ucnmmg_mag","TKE_100rnd_ucnmmg_mag","TKE_100rnd_ucnmmg_mag","TKE_FRAG_mag","TKE_SMOKE_mag","TKE_100rnd_ucnmmg_mag","TKE_100rnd_ucnmmg_mag","TKE_100rnd_ucnmmg_mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_UCMCHelmMask_Camo2","TKE_UCMCArmour5_1ArmyV3"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_UCMCHelmMask_Camo2","TKE_UCMCArmour5_1ArmyV3"};
    backpack="CMD_GDF_Autorifleman_MMG_pack";
  };

  class CMD_GDF_Marksman: UCNFA_R_DMR
  {
    faction="CMD_GDF";
    side=1;
    displayName="Marksman";
    editorSubcategory = "CMD_GDF_Infantry";
    uniformClass="TKE_CombatUniNAArmy_U_B";
    weapons[]={"TKE_BinoUCN","CMD_GDF_TKE_UCNDMR_ACE_muzzle_mzls_Hrhsusf_acc_wmx_bkACE_optic_SOS_2D","Put","Throw"};
    respawnWeapons[]={"TKE_BinoUCN","CMD_GDF_TKE_UCNDMR_ACE_muzzle_mzls_Hrhsusf_acc_wmx_bkACE_optic_SOS_2D","Put","Throw"};
    items[]={"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","TKE_UCMCNvgCamo2","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage"};
    respawnItems[]={"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","TKE_UCMCNvgCamo2","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage"};
    magazines[]={"TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN"};
    respawnMagazines[]={"TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_BinoUCN","TKE_UCMCHelmMask_Camo2","TKE_UCMCArmour3_1ArmyV3","G_Balaclava_TI_blk_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_BinoUCN","TKE_UCMCHelmMask_Camo2","TKE_UCMCArmour3_1ArmyV3","G_Balaclava_TI_blk_F"};
    backpack="CMD_GDF_Marksman_pack";
  };

  class CMD_GDF_Rifleman: UCNFA_R_RFL
  {
    faction="CMD_GDF";
    side=1;
    displayName="Rifleman";
    editorSubcategory = "CMD_GDF_Infantry";
    uniformClass="TKE_CombatUniArmy_U_B";
    weapons[]={"CMD_GDF_TKE_UCNRifle2_rhsusf_acc_wmx_bkTKE_MRCOSight","Put","Throw"};
    respawnWeapons[]={"CMD_GDF_TKE_UCNRifle2_rhsusf_acc_wmx_bkTKE_MRCOSight","Put","Throw"};
    items[]={"FirstAidKit","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","TKE_IntegratedNVGs"};
    respawnItems[]={"FirstAidKit","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","TKE_IntegratedNVGs"};
    magazines[]={"TKE_FRAG_mag","TKE_SMOKE_mag","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY"};
    respawnMagazines[]={"TKE_FRAG_mag","TKE_SMOKE_mag","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_UCMCHelmMask_Camo2","TKE_UCMCArmour2_2ArmyV3","G_Balaclava_TI_blk_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_UCMCHelmMask_Camo2","TKE_UCMCArmour2_2ArmyV3","G_Balaclava_TI_blk_F"};
    backpack="CMD_GDF_Rifleman_pack";
  };

  class CMD_GDF_Crewman: UCNFA_R_RFL
  {
    faction="CMD_GDF";
    side=1;
    displayName="Crewman";
    editorSubcategory = "CMD_GDF_Infantry";
    uniformClass="TKE_CombatUniNAArmy_U_B";
    weapons[]={"CMD_GDF_TKE_UCNRifle2","Put","Throw"};
    respawnWeapons[]={"CMD_GDF_TKE_UCNRifle2","Put","Throw"};
    items[]={"FirstAidKit","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage"};
    respawnItems[]={"FirstAidKit","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage"};
    magazines[]={"TKE_FRAG_mag","TKE_SMOKE_mag","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY"};
    respawnMagazines[]={"TKE_FRAG_mag","TKE_SMOKE_mag","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY","TKE_35rnd_62x35_magTY"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","CMD_GDF_TKE_CrewHelm","TKE_UCMCArmour1ArmyV3","G_Balaclava_TI_blk_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","CMD_GDF_TKE_CrewHelm","TKE_UCMCArmour1ArmyV3","G_Balaclava_TI_blk_F"};
    backpack="";
  };

  class CMD_GDF_Grenadier: UCNFA_R_GRN
  {
    faction="CMD_GDF";
    side=1;
    displayName="Grenadier";
    editorSubcategory = "CMD_GDF_Infantry";
    uniformClass="TKE_CombatUniArmy_U_B";
    weapons[]={"CMD_GDF_TKE_UCNPistol","Put","Throw"};
    respawnWeapons[]={"CMD_GDF_TKE_UCNPistol","Put","Throw"};
    items[]={"FirstAidKit","TKE_UCMCGlasses","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage"};
    respawnItems[]={"FirstAidKit","TKE_UCMCGlasses","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage"};
    magazines[]={"TKE_FRAG_mag","TKE_SMOKE_mag","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","TKE_FRAG_mag","TKE_FRAG_mag","TKE_FRAG_mag","TKE_FRAG_mag","TKE_FRAG_mag","TKE_FRAG_mag","TKE_FRAG_mag","TKE_FRAG_mag","TKE_FRAG_mag","TKE_FRAG_mag"};
    respawnMagazines[]={"TKE_FRAG_mag","TKE_SMOKE_mag","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","TKE_FRAG_mag","TKE_FRAG_mag","TKE_FRAG_mag","TKE_FRAG_mag","TKE_FRAG_mag","TKE_FRAG_mag","TKE_FRAG_mag","TKE_FRAG_mag","TKE_FRAG_mag","TKE_FRAG_mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_UCMRHelmOpen_Army","TKE_UCMCArmour6_2ArmyV3","G_Balaclava_TI_blk_F","TKE_UCMCGlasses"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_UCMRHelmOpen_Army","TKE_UCMCArmour6_2ArmyV3","G_Balaclava_TI_blk_F","TKE_UCMCGlasses"};
    backpack="CMD_GDF_Grenadier_pack";
  };

  class CMD_GDF_Heli_Pilot: UCNFA_G_PILOT
  {
    faction="CMD_GDF";
    side=1;
    displayName="Heli Pilot";
    editorSubcategory = "CMD_GDF_Infantry";
    uniformClass="TKE_VoidSuitArmy_U_B";
    weapons[]={"CMD_GDF_TKE_UCNPistol","Put","Throw"};
    respawnWeapons[]={"CMD_GDF_TKE_UCNPistol","Put","Throw"};
    items[]={"FirstAidKit","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage"};
    respawnItems[]={"FirstAidKit","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage"};
    magazines[]={"TKE_UCNPistol_mag","TKE_UCNPistol_mag","TKE_UCNPistol_mag","TKE_UCNPistol_mag","TKE_UCNPistol_mag","TKE_UCNPistol_mag"};
    respawnMagazines[]={"TKE_UCNPistol_mag","TKE_UCNPistol_mag","TKE_UCNPistol_mag","TKE_UCNPistol_mag","TKE_UCNPistol_mag","TKE_UCNPistol_mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","CMD_GDF_PilotHelm","CMD_GDF_PilotVest"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","CMD_GDF_PilotHelm","CMD_GDF_PilotVest"};
    backpack="";
  };

  class CMD_GDF_Jet_Pilot: UCNFA_G_PILOT
  {
    faction="CMD_GDF";
    side=1;
    displayName="Jet Pilot";
    editorSubcategory = "CMD_GDF_Infantry";
    uniformClass="TKE_VoidSuitArmy_U_B";
    weapons[]={"CMD_GDF_TKE_UCNPistol","Put","Throw"};
    respawnWeapons[]={"CMD_GDF_TKE_UCNPistol","Put","Throw"};
    items[]={"FirstAidKit","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage"};
    respawnItems[]={"FirstAidKit","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage"};
    magazines[]={"TKE_UCNPistol_mag","TKE_UCNPistol_mag","TKE_UCNPistol_mag","TKE_UCNPistol_mag","TKE_UCNPistol_mag","TKE_UCNPistol_mag"};
    respawnMagazines[]={"TKE_UCNPistol_mag","TKE_UCNPistol_mag","TKE_UCNPistol_mag","TKE_UCNPistol_mag","TKE_UCNPistol_mag","TKE_UCNPistol_mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","CMD_GDF_PilotHelmRV","CMD_GDF_PilotVest"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","CMD_GDF_PilotHelmRV","CMD_GDF_PilotVest"};
    backpack="";
  };

  class CMD_GDF_Crewman_Operator: UCNFA_R_RFL
  {
    faction="CMD_GDF";
    side=1;
    displayName="Crewman (Operator)";
    editorSubcategory = "CMD_GDF_Infantry";
    uniformClass="TKE_CombatUniNAArmy_U_B";
    weapons[]={"CMD_GDF_TKE_UCNRifle3","Put","Throw"};
    respawnWeapons[]={"CMD_GDF_TKE_UCNRifle3","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"TKE_FRAG_mag","TKE_SMOKE_mag"};
    respawnMagazines[]={"TKE_FRAG_mag","TKE_SMOKE_mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","CMD_GDF_TKE_CrewHelm","TKE_UCMCArmour1ArmyV3","G_Balaclava_TI_blk_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","CMD_GDF_TKE_CrewHelm","TKE_UCMCArmour1ArmyV3","G_Balaclava_TI_blk_F"};
    backpack="";
  };

  class CMD_GDF_Engineer: ITA_Agent_Eng
  {
    faction="CMD_GDF";
    side=1;
    displayName="Engineer";
    uniformClass="TKE_CIVOutfit1Worker2_U_B";
    editorSubcategory = "CMD_GDF_Technicians";
    weapons[]={"CMD_GDF_TKE_MDPistolBlack","Put","Throw"};
    respawnWeapons[]={"CMD_GDF_TKE_MDPistolBlack","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag"};
    respawnMagazines[]={"TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag"};
    linkedItems[]={"ItemWatch","TKE_UCMCGlasses","H_Construction_earprot_yellow_F","TKE_CIVVest1ConstructionOrange","G_AirPurifyingRespirator_01_nofilter_F","TKE_UCMCGlasses"};
    respawnLinkedItems[]={"ItemWatch","TKE_UCMCGlasses","H_Construction_earprot_yellow_F","TKE_CIVVest1ConstructionOrange","G_AirPurifyingRespirator_01_nofilter_F","TKE_UCMCGlasses"};
    backpack="";
  };

  class CMD_GDF_Combat_Engineer: ITA_Agent_Eng
  {
    faction="CMD_GDF";
    side=1;
    displayName="Combat Engineer";
    uniformClass="TKE_VoidSuitMDGrey_U_B";
    editorSubcategory = "CMD_GDF_Technicians";
    weapons[]={"CMD_GDF_WRS_Weapon_Revolver","Put","Throw"};
    respawnWeapons[]={"CMD_GDF_WRS_Weapon_Revolver","Put","Throw"};
    items[]={"FirstAidKit","ACE_Fortify","ACE_EntrenchingTool","ACE_DefusalKit","ToolKit","ACE_wirecutter"};
    respawnItems[]={"FirstAidKit","ACE_Fortify","ACE_EntrenchingTool","ACE_DefusalKit","ToolKit","ACE_wirecutter"};
    magazines[]={"WRS_Revolver_Magazine","WRS_Revolver_Magazine","WRS_Revolver_Magazine","WRS_Revolver_Magazine","WRS_Revolver_Magazine","WRS_Revolver_Magazine","WRS_Revolver_Magazine","WRS_Revolver_Magazine","WRS_Revolver_Magazine","WRS_Revolver_Magazine","rhsusf_m112_mag","rhsusf_m112_mag","rhsusf_m112_mag","rhsusf_m112_mag"};
    respawnMagazines[]={"WRS_Revolver_Magazine","WRS_Revolver_Magazine","WRS_Revolver_Magazine","WRS_Revolver_Magazine","WRS_Revolver_Magazine","WRS_Revolver_Magazine","WRS_Revolver_Magazine","WRS_Revolver_Magazine","WRS_Revolver_Magazine","WRS_Revolver_Magazine","rhsusf_m112_mag","rhsusf_m112_mag","rhsusf_m112_mag","rhsusf_m112_mag"};
    linkedItems[]={"ItemWatch","TKE_UCMCGlasses","H_Construction_earprot_black_F","TKE_CIVPonchoGrey","G_AirPurifyingRespirator_01_nofilter_F","TKE_UCMCGlasses"};
    respawnLinkedItems[]={"ItemWatch","TKE_UCMCGlasses","H_Construction_earprot_black_F","TKE_CIVPonchoGrey","G_AirPurifyingRespirator_01_nofilter_F","TKE_UCMCGlasses"};
    backpack="CMD_GDF_Combat_Engineer_pack";
  };

  class CMD_GDF_Scientist: ITA_Agent_Eng
  {
    faction="CMD_GDF";
    side=1;
    displayName="Scientist";
    uniformClass="U_C_CBRN_Suit_01_Blue_F";
    editorSubcategory = "CMD_GDF_Technicians";
    weapons[]={"CMD_GDF_TKE_MDPistolBlack","Put","Throw"};
    respawnWeapons[]={"CMD_GDF_TKE_MDPistolBlack","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag"};
    respawnMagazines[]={"TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag"};
    linkedItems[]={"ItemWatch","JCA_G_AirPurifyingRespirator_04_black_clear_F"};
    respawnLinkedItems[]={"ItemWatch","JCA_G_AirPurifyingRespirator_04_black_clear_F"};
    backpack="";
  };

  class CMD_GDF_Sniper_Ghillie: UCNFA_R_DMR
  {
    faction="CMD_GDF";
    side=1;
    displayName="Sniper Ghillie";
    uniformClass="U_B_FullGhillie_lsh";
    editorSubcategory = "CMD_GDF_Infantry";
    weapons[]={"TKE_BinoMDTF","CMD_GDF_TKE_MDSniper_TKE_MRCOSight","Put","Throw"};
    respawnWeapons[]={"TKE_BinoMDTF","CMD_GDF_TKE_MDSniper_TKE_MRCOSight","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"TKE_SMOKE_mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag"};
    respawnMagazines[]={"TKE_SMOKE_mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_MDTFNvgGrey","TKE_BinoMDTF","V_HarnessO_brn","CE_scrimNet_under_sand_F","TKE_MDTFNvgGrey"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_MDTFNvgGrey","TKE_BinoMDTF","V_HarnessO_brn","CE_scrimNet_under_sand_F","TKE_MDTFNvgGrey"};
    backpack="CMD_GDF_Sniper_Ghillie_pack";
  };

  class CMD_GDF_Spotter: UCNFA_R_DMR
  {
    faction="CMD_GDF";
    side=1;
    displayName="Spotter";
    uniformClass="TKE_CombatShirtFCF_U_B";
    editorSubcategory = "CMD_GDF_Infantry";
    weapons[]={"TKE_BinoMDTF","CMD_GDF_TKE_UCNDMR_TKE_4xSight","Put","Throw"};
    respawnWeapons[]={"TKE_BinoMDTF","CMD_GDF_TKE_UCNDMR_TKE_4xSight","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"TKE_SMOKE_mag","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN"};
    respawnMagazines[]={"TKE_SMOKE_mag","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_BinoMDTF","TKE_BoonieHatHSFCFGrey","G_Shades_Green"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_BinoMDTF","TKE_BoonieHatHSFCFGrey","G_Shades_Green"};
    backpack="CMD_GDF_Spotter_pack";
  };

  class CMD_GDF_Sniper: UCNFA_R_DMR
  {
    faction="CMD_GDF";
    side=1;
    displayName="Sniper";
    uniformClass="TKE_FCFSweaterV4_U_B";
    editorSubcategory = "CMD_GDF_Infantry";
    weapons[]={"TKE_BinoMDTF","CMD_GDF_TKE_MDSniper_TKE_MRCOSight","Put","Throw"};
    respawnWeapons[]={"TKE_BinoMDTF","CMD_GDF_TKE_MDSniper_TKE_MRCOSight","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"TKE_SMOKE_mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag"};
    respawnMagazines[]={"TKE_SMOKE_mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_BinoMDTF","TKE_BoonieHatHSFCFBrown","G_Shades_Green"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_BinoMDTF","TKE_BoonieHatHSFCFBrown","G_Shades_Green"};
    backpack="CMD_GDF_Sniper_pack";
  };

  class CMD_GDF_Spotter_Ghillie: UCNFA_R_DMR
  {
    faction="CMD_GDF";
    side=1;
    displayName="Spotter Ghillie";
    uniformClass="U_B_FullGhillie_lsh";
    editorSubcategory = "CMD_GDF_Infantry";
    weapons[]={"TKE_BinoMDTF","CMD_GDF_TKE_UCNDMRCamo1_TKE_4xSight","Put","Throw"};
    respawnWeapons[]={"TKE_BinoMDTF","CMD_GDF_TKE_UCNDMRCamo1_TKE_4xSight","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"TKE_SMOKE_mag","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN"};
    respawnMagazines[]={"TKE_SMOKE_mag","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_MDTFNvgGrey","TKE_BinoMDTF","V_HarnessO_brn","CE_scrimNet_under_sand_F","TKE_MDTFNvgGrey"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_MDTFNvgGrey","TKE_BinoMDTF","V_HarnessO_brn","CE_scrimNet_under_sand_F","TKE_MDTFNvgGrey"};
    backpack="CMD_GDF_Spotter_Ghillie_pack";
  };

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////// Start of Vehicles //////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  class CMD_GDF_Nomad_Troop_Transport: CE_UH80_BG
  {
    faction="CMD_GDF";
    side=1;
    displayName="Nomad (Troop Transport)";
    hiddenSelectionsTextures[]={"GDF_Faction\Vehicle_Camos\Nomad\Heli_Transport_01_ext01_TAN_CO.paa","GDF_Faction\Vehicle_Camos\Nomad\Heli_Transport_01_ext02_TAN_CO.paa"};
    crew="CMD_GDF_Heli_Pilot";
    typicalCargo[]={"CMD_GDF_Heli_Pilot"};
    ace_cargo_space=16;
    #include "\GDF_Faction\Vehicle_Inventories\StandardVehicleInventory.hpp"
    class Turrets: Turrets
    {
        class CopilotTurret: CopilotTurret
        {
            gunnerType="CMD_GDF_Heli_Pilot";
        };
        class MainTurret: MainTurret
        {
            gunnerType="CMD_GDF_Heli_Pilot";
        };
        class RightDoorGun: RightDoorGun
        {
            gunnerType="CMD_GDF_Heli_Pilot";
        };
    };
  };

  class CMD_GDF_Vanguard_Dropship: FT_Goblin_Dropship_IMC
  {
    faction="CMD_GDF";
    side=1;
    displayName="DS-12 Vanguard - Dropship";
    hiddenSelectionsTextures[]={"GDF_Faction\Vehicle_Camos\Vanguard\ft_goblin_dropship_01.paa","GDF_Faction\Vehicle_Camos\Vanguard\ft_goblin_dropship_02.paa","GDF_Faction\Vehicle_Camos\Vanguard\ft_goblin_dropship_03.paa","GDF_Faction\Vehicle_Camos\Vanguard\ft_goblin_dropship_04.paa","GDF_Faction\Vehicle_Camos\Vanguard\ft_goblin_dropship_interior_01.paa","GDF_Faction\Vehicle_Camos\Vanguard\ft_goblin_dropship_interior_02.paa",""};
    crew="CMD_GDF_Heli_Pilot";
    typicalCargo[]={"CMD_GDF_Heli_Pilot"};
    ace_Cargo_hasCargo=1;
    ace_cargo_space=24;
    weapons[]={"FT_20mm_Gatling_Plane","Laserdesignator_pilotCamera","CMFlareLauncher"};
    magazines[]={"FT_1200Rnd_20mm_Autocannon_Plane","Laserbatteries","240Rnd_CMFlare_Chaff_Magazine","240Rnd_CMFlare_Chaff_Magazine"};
    memoryPointDriverOptics="turret_elevation";
    #include "\GDF_Faction\Vehicle_Inventories\CargoPlaneInventory.hpp"
    #include "\GDF_Faction\Vehicle_HPPs\Vanguard_PilotCam.hpp"
  };

  class CMD_GDF_Nomad_DAP: B_CTRG_Heli_Transport_01_DAP_F
  {
    faction="CMD_GDF";
    side=1;
    displayName="WIP! Nomad (DAP)";
    hiddenSelectionsTextures[]={"GDF_Faction\Vehicle_Camos\Nomad\Heli_Transport_01_ext01_TAN_CO.paa","GDF_Faction\Vehicle_Camos\Nomad\Heli_Transport_01_ext02_TAN_CO.paa"};
    crew="CMD_GDF_Heli_Pilot";
    typicalCargo[]={"CMD_GDF_Heli_Pilot"};
    ace_cargo_space=16;
    #include "\GDF_Faction\Vehicle_Inventories\StandardVehicleInventory.hpp"
  };

  class CMD_GDF_Guardian_Unarmed: CE_RHS_UN_APC_Namer_Unarmed_B
  {
    faction="CMD_GDF";
    side=1;
    displayName="Guardian - APC (Unarmed)";
    hiddenSelectionsTextures[]={"a3\armor_f_beta\apc_tracked_01\data\apc_tracked_01_body_co.paa","a3\armor_f_beta\apc_tracked_01\data\mbt_01_body_co.paa","a3\data_f\vehicles\turret_co.paa","a3\armor_f\data\camonet_nato_desert_co.paa"};
    crew="CMD_GDF_Crewman_Operator";
    typicalCargo[]={"CMD_GDF_Crewman_Operator"};
    #include "\GDF_Faction\Vehicle_Inventories\StandardVehicleInventory.hpp"
  };

  class CMD_GDF_Shrike_Drone: B_T_UAV_03_dynamicLoadout_F
  {
    faction="CMD_GDF";
    side=1;
    displayName="Shrike - Drone Gunship";
    hiddenSelectionsTextures[]={"GDF_Faction\Vehicle_Camos\Shrike\CMD_GDF_UAV_03_1_CO.paa","GDF_Faction\Vehicle_Camos\Shrike\CMD_GDF_UAV_03_2_CO.paa","GDF_Faction\Vehicle_Camos\Shrike\CMD_GDF_UAV_03_mlod_CO.paa"};
    crew="B_UAV_AI";
    typicalCargo[]={"B_UAV_AI"};
    weapons[]={"LMG_Minigun_Transport","CMFlareLauncher"};
    magazines[]={"5000Rnd_762x51_Yellow_Belt","120Rnd_CMFlare_Chaff_Magazine"};
    class Components: Components
    {
      class TransportPylonsComponent
      {
        uiPicture="\A3\Air_F_Exp\UAV_03\Data\UI\Map_UAV_03_3DEN_CA.paa";
        class Pylons
        {
          class Pylons1
          {
            hardpoints[]=
            {
              "DAR",
              "DAGR",
              "B_SHIEKER",
              "UNI_SCALPEL",
              "CMD_GDF_O_SKYFIRE"
            };
            attachment="CMD_GDF_PylonRack_12Rnd_missiles_black";
            priority=5;
            turret[]={0};
            maxweight=300;
            UIposition[]={0.050000001,0.30000001};
          };
          class Pylons2: Pylons1
          {
            hardpoints[]=
            {
              "DAR",
              "DAGR",
              "B_SHIEKER",
              "UNI_SCALPEL"
            };
            priority=4;
            attachment="";
            maxweight=300;
            UIposition[]={0.1,0.38};
          };
          class Pylons3: Pylons2
          {
            UIposition[]={0.52999997,0.38};
            mirroredMissilePos=2;
          };
          class Pylons4: Pylons1
          {
            UIposition[]={0.57999998,0.30000001};
            mirroredMissilePos=1;
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
              "PylonRack_12Rnd_missiles",
              "PylonRack_3Rnd_LG_scalpel",
              "PylonRack_3Rnd_LG_scalpel",
              "PylonRack_12Rnd_missiles"
            };
          };
          class AT
          {
            displayName="$STR_A3_cfgmagazines_titan_at_dns";
            attachment[]=
            {
              "PylonRack_12Rnd_PG_missiles",
              "PylonRack_3Rnd_LG_scalpel",
              "PylonRack_3Rnd_LG_scalpel",
              "PylonRack_12Rnd_PG_missiles"
            };
          };
        };
      };
    };
  };

  class CMD_GDF_Condor_Armed: B_T_VTOL_01_armed_F
  {
    faction="CMD_GDF";
    side=1;
    displayName="Condor (Armed)";
    hiddenSelectionsTextures[]={"GDF_Faction\Vehicle_Camos\Condor\VTOL_01_EXT01_GDF_CO.paa","GDF_Faction\Vehicle_Camos\Condor\VTOL_01_EXT02_GDF_CO.paa","GDF_Faction\Vehicle_Camos\Condor\VTOL_01_EXT03_GDF_CO.paa","GDF_Faction\Vehicle_Camos\Condor\VTOL_01_EXT04_GDF_CO.paa","a3\air_f_exp\vtol_01\data\vtol_01_signs_ca.paa"};
    crew="CMD_GDF_Jet_Pilot";
    typicalCargo[]={"CMD_GDF_Jet_Pilot"};
    editorSubcategory="CE_VTOLs_SubClass";
    #include "\GDF_Faction\Vehicle_Inventories\CargoPlaneInventory.hpp"
  };

  class CMD_GDF_Atlas_Shuttle: TKE_Ext_GUSA_UCNFA
  {
    faction="CMD_GDF";
    side=1;
    displayName="Atlas - Shuttle";
    hiddenSelectionsTextures[]={"GDF_Faction\Vehicle_Camos\Atlas\Shuttle.paa"};
    textureList[]={"",1};
    crew="CMD_GDF_Jet_Pilot";
    typicalCargo[]={"CMD_GDF_Jet_Pilot"};
    editorSubcategory="CE_VTOLs_SubClass";
    #include "\GDF_Faction\Vehicle_Inventories\CargoPlaneInventory.hpp"
  };

  class CMD_GDF_Locust_Troop_Transport: CE_TKE_UH44T
  {
    faction="CMD_GDF";
    side=1;
    displayName="Locust - Troop Transport";
    hiddenSelectionsTextures[]={"GDF_Faction\Vehicle_Camos\Locust\TKE_Ext_Helidataheli_GDF_co.paa","GDF_Faction\Vehicle_Camos\Locust\TKE_Ext_Helidataheli1_GDF_co.paa","tke_ext_apc\data\apc_ucmc_co.paa"};
    crew="CMD_GDF_Heli_Pilot";
    typicalCargo[]={"CMD_GDF_Heli_Pilot"};
    ace_cargo_space=16;
    damageResistance=0.00555;
    #include "\GDF_Faction\Vehicle_Inventories\StandardVehicleInventory.hpp"
    #include "\GDF_Faction\Vehicle_HPPs\Locust_Cam.hpp"
    class components: components
    {
      class TransportPylonsComponent
        {
          UIPicture="\TKE_Ext_Core_V\data\ui\heli_eden_icon_ca.paa";
          class pylons
          {
            class pylon1
            {
              hardpoints[]={"B_AIM9M_DUAL_RAIL","B_AIM9X_DUAL_RAIL","B_USAF_AIM9X_Pylon","B_USAF_AIM9M","B_USAF_AIM9X_Int","B_USAF_AIM9X","B_USAF_AIM9M_Pylon","RHS_HP_AIM9_2x","RHS_HP_AIM9","RHS_HP_AIM9_HELI_ARMY","RHS_HP_AIM9_HELI_USMC","RHS_HP_AIM9_int","RHS_HP_aim120_int","RHS_HP_ATAS","RHS_HP_ATAS_AH64","CE_AA_ShortRange_Missile_Hardpoint","CE_AGM_ShortRange_Radar_Hardpoint","B_MISSILE_AGM65K","B_MISSILE_2AGM65K","CE_AGM_ShortRange_IR_Hardpoint","B_MISSILE_AGM65D","B_MISSILE_2AGM65D","B_MISSILE_3AGM65D","DAGR","CE_AGM_ShortRange_Laser_Hardpoint","B_MISSILE_AGM65E","B_MISSILE_2AGM65E","CE_AGM_ShortRange_HARM_Hardpoint","CE_Bomb_500lbs_IR_Hardpoint","CE_Bomb_500lbs_Dumb_Hardpoint","RHS_HP_BOMB_500","B_BOMB_MK82","CE_Bomb_500lbs_GPS_Hardpoint","RHS_HP_JDAM_500","CE_Bomb_500lbs_Laser_Hardpoint","RHS_HP_LGB_500","CE_Bomb_500lbs_Radar_Hardpoint","CE_Bomb_500lbsNapalm_Dumb_Hardpoint","CE_Bomb_1000lbs_Dumb_Hardpoint","RHS_HP_BOMB_1000","CE_Bomb_1000lbs_GPS_Hardpoint","RHS_HP_JDAM_1000","CE_Bomb_1000lbs_Laser_Hardpoint","RHS_HP_LGB_1000","CE_Bomb_1000lbsNapalm_Dumb_Hardpoint","CE_Bomb_2000lbs_Dumb_Hardpoint","CE_Bomb_2000lbs_GPS_Hardpoint","CE_Bomb_2000lbs_Laser_Hardpoint","CE_Bomb_2000lbsNapalm_Dumb_Hardpoint","CE_Bomb_Cluster_Hardpoint","B_BOMB_CBU87","B_BOMB_CBU89","B_BOMB_CBU97","B_BOMB_CBU103","B_BOMB_CBU104","B_BOMB_CBU105","CE_Bomb_ClusterNapalm_Hardpoint","CE_BasicCannon_Hardpoint","CE_MortarCannon_Hardpoint","CE_GrenadeLauncher_Hardpoint","CE_GAU19_Hardpoint","CE_Minigun_Hardpoint","CE_BigCannon_Hardpoint","CE_RocketPod_Dumb_Hardpoint","B_BOMB_FFAR7","B_BOMB_FFAR21","B_SHIEKER","DAR","RHS_HP_FFAR_USAF","RHS_HP_FFAR_USAF_green","RHS_HP_FFAR_ARMY","RHS_HP_FFAR_HEAVY_USAF","RHS_HP_FFAR_HEAVY_USAF_3x","RHS_HP_FFAR_USMC","RHS_HP_FFAR_USAF_3x","RHS_HP_HYDRA_USAF","RHS_HP_HYDRA_USAF_3x","CE_RocketPod_Laser_Hardpoint","CE_RocketPod_Napalm_Hardpoint","CE_Meme_Munitions_Hardpoint","OPAEX_Hardpoint_UH144_Lower","OPAEX_Hardpoint_UH144_Upper"};
              attachment="CE_50cal_pod_Mag";
              priority=10;
              maxweight=500;
              UIposition[]={0.45,0.3};
            };
            class pylon2: pylon1
            {
              UIposition[]={0.2,0.3};
              mirroredMissilePos=1;
            };
            class pylon3
            {
              hardpoints[]={"B_AIM9M_DUAL_RAIL","B_AIM9X_DUAL_RAIL","B_USAF_AIM9X_Pylon","B_USAF_AIM9M","B_USAF_AIM9X_Int","B_USAF_AIM9X","B_USAF_AIM9M_Pylon","RHS_HP_AIM9_2x","RHS_HP_AIM9","RHS_HP_AIM9_HELI_ARMY","RHS_HP_AIM9_HELI_USMC","RHS_HP_AIM9_int","RHS_HP_aim120_int","RHS_HP_ATAS","RHS_HP_ATAS_AH64","CE_AA_ShortRange_Missile_Hardpoint","CE_AGM_ShortRange_Radar_Hardpoint","B_MISSILE_AGM65K","B_MISSILE_2AGM65K","CE_AGM_ShortRange_IR_Hardpoint","B_MISSILE_AGM65D","B_MISSILE_2AGM65D","B_MISSILE_3AGM65D","DAGR","CE_AGM_ShortRange_Laser_Hardpoint","B_MISSILE_AGM65E","B_MISSILE_2AGM65E","CE_AGM_ShortRange_HARM_Hardpoint","CE_Bomb_500lbs_IR_Hardpoint","CE_Bomb_500lbs_Dumb_Hardpoint","RHS_HP_BOMB_500","B_BOMB_MK82","CE_Bomb_500lbs_GPS_Hardpoint","RHS_HP_JDAM_500","CE_Bomb_500lbs_Laser_Hardpoint","RHS_HP_LGB_500","CE_Bomb_500lbs_Radar_Hardpoint","CE_Bomb_500lbsNapalm_Dumb_Hardpoint","CE_Bomb_1000lbs_Dumb_Hardpoint","RHS_HP_BOMB_1000","CE_Bomb_1000lbs_GPS_Hardpoint","RHS_HP_JDAM_1000","CE_Bomb_1000lbs_Laser_Hardpoint","RHS_HP_LGB_1000","CE_Bomb_1000lbsNapalm_Dumb_Hardpoint","CE_Bomb_2000lbs_Dumb_Hardpoint","CE_Bomb_2000lbs_GPS_Hardpoint","CE_Bomb_2000lbs_Laser_Hardpoint","CE_Bomb_2000lbsNapalm_Dumb_Hardpoint","CE_Bomb_Cluster_Hardpoint","B_BOMB_CBU87","B_BOMB_CBU89","B_BOMB_CBU97","B_BOMB_CBU103","B_BOMB_CBU104","B_BOMB_CBU105","CE_Bomb_ClusterNapalm_Hardpoint","CE_BasicCannon_Hardpoint","CE_MortarCannon_Hardpoint","CE_GrenadeLauncher_Hardpoint","CE_GAU19_Hardpoint","CE_Minigun_Hardpoint","CE_BigCannon_Hardpoint","CE_RocketPod_Dumb_Hardpoint","B_BOMB_FFAR7","B_BOMB_FFAR21","B_SHIEKER","DAR","RHS_HP_FFAR_USAF","RHS_HP_FFAR_USAF_green","RHS_HP_FFAR_ARMY","RHS_HP_FFAR_HEAVY_USAF","RHS_HP_FFAR_HEAVY_USAF_3x","RHS_HP_FFAR_USMC","RHS_HP_FFAR_USAF_3x","RHS_HP_HYDRA_USAF","RHS_HP_HYDRA_USAF_3x","CE_RocketPod_Laser_Hardpoint","CE_RocketPod_Napalm_Hardpoint","CE_Meme_Munitions_Hardpoint","OPAEX_Hardpoint_UH144_Lower","OPAEX_Hardpoint_UH144_Upper"};
              priority=10;
              attachment="";
              maxweight=500;
              UIposition[]={0.5,0.35};
            };
            class Pylon4: pylon3
            {
              UIposition[]={0.15,0.35};
              mirroredMissilePos=3;
            };
          };
        };
      };
  };

  class CMD_GDF_Hammerhead_LIC: B_MBT_01_TUSK_F
  {
    faction="CMD_GDF";
    side=1;
    displayName="Hammerhead LIC - MBT";
    hiddenSelectionsTextures[]={"GDF_Faction\Vehicle_Camos\Hammerhead\CMD_GDF_MBT_01_body_CO.paa","GDF_Faction\Vehicle_Camos\Hammerhead\CMD_GDF_MBT_01_tow_CO.paa","a3\armor_f_epc\mbt_01\data\mbt_addons_co.paa","a3\armor_f\data\camonet_nato_desert_co.paa"};
    crew="CMD_GDF_Crewman_Operator";
    typicalCargo[]={"CMD_GDF_Crewman_Operator"};
    #include "\GDF_Faction\Vehicle_Inventories\StandardVehicleInventory.hpp"
  };

  class CMD_GDF_Hammerhead: B_MBT_01_cannon_F
  {
    faction="CMD_GDF";
    side=1;
    displayName="Hammerhead - MBT";
    hiddenSelectionsTextures[]={"GDF_Faction\Vehicle_Camos\Hammerhead\CMD_GDF_MBT_01_body_CO.paa","GDF_Faction\Vehicle_Camos\Hammerhead\CMD_GDF_MBT_01_tow_CO.paa","a3\armor_f\data\camonet_nato_desert_co.paa"};
    crew="CMD_GDF_Crewman_Operator";
    typicalCargo[]={"CMD_GDF_Crewman_Operator"};
    #include "\GDF_Faction\Vehicle_Inventories\StandardVehicleInventory.hpp"
  };

  class CMD_GDF_Aegis: B_APC_Tracked_01_AA_F
  {
    faction="CMD_GDF";
    side=1;
    displayName="Aegis - AA";
    hiddenSelectionsTextures[]={"a3\armor_f_beta\apc_tracked_01\data\apc_tracked_01_aa_body_co.paa","a3\armor_f_beta\apc_tracked_01\data\mbt_01_body_co.paa","a3\armor_f_beta\apc_tracked_01\data\apc_tracked_01_aa_tower_co.paa","a3\armor_f\data\camonet_nato_desert_co.paa"};
    crew="CMD_GDF_Crewman_Operator";
    typicalCargo[]={"CMD_GDF_Crewman_Operator"};
    #include "\GDF_Faction\Vehicle_Inventories\StandardVehicleInventory.hpp"
  };

  class CMD_GDF_Guardian_Harvester: B_APC_Tracked_01_CRV_F
  {
    faction="CMD_GDF";
    side=1;
    displayName="Guardian Harvester";
    hiddenSelectionsTextures[]={"a3\armor_f_beta\apc_tracked_01\data\apc_tracked_01_body_crv_co.paa","a3\armor_f_beta\apc_tracked_01\data\mbt_01_body_co.paa","a3\data_f\vehicles\turret_co.paa","a3\armor_f_beta\apc_tracked_01\data\apc_tracked_01_crv_co.paa","a3\armor_f\data\camonet_nato_desert_co.paa"};
    crew="CMD_GDF_Crewman_Operator";
    typicalCargo[]={"CMD_GDF_Crewman_Operator"};
    #include "\GDF_Faction\Vehicle_Inventories\StandardVehicleInventory.hpp"
  };

  class CMD_GDF_Guardian_Armed: B_APC_Tracked_01_rcws_F
  {
    faction="CMD_GDF";
    side=1;
    displayName="Guardian - APC (Armed)";
    hiddenSelectionsTextures[]={"a3\armor_f_beta\apc_tracked_01\data\apc_tracked_01_body_co.paa","a3\armor_f_beta\apc_tracked_01\data\mbt_01_body_co.paa","a3\data_f\vehicles\turret_co.paa","a3\armor_f\data\camonet_nato_desert_co.paa"};
    crew="CMD_GDF_Crewman_Operator";
    typicalCargo[]={"CMD_GDF_Crewman_Operator"};
    class Turrets: Turrets
    {
      class MainTurret: MainTurret
      {
        weapons[]={"HMG_127_APC","GMG_40mm"};
        magazines[]={"200Rnd_127x99_mag_Tracer_Red","200Rnd_127x99_mag_Tracer_Red","200Rnd_127x99_mag_Tracer_Red","200Rnd_127x99_mag_Tracer_Red"};
        gunnerGetInAction="GetInAMV_cargo";
        gunnerGetOutAction="GetOutLow";
        LODTurnedIn=1100;
      };
      class CommanderOptics: CommanderOptics
      {
        LODTurnedIn=1000;
      };
    };
    #include "\GDF_Faction\Vehicle_Inventories\StandardVehicleInventory.hpp"
  };

  class CMD_GDF_Paladin_SPAAG: UCNFA_B_APC_AA
  {
    faction="CMD_GDF";
    side=1;
    displayName="Paladin - SPAAG";
    editorSubcategory="EdSubcat_AAs";
    hiddenSelectionsTextures[]={"GDF_Faction\Vehicle_Camos\Paladin\CMD_GDF_TKE_UCNAPCTan_Base_co.paa","GDF_Faction\Vehicle_Camos\Paladin\CMD_GDF_TKE_UCNAPC_MortarTan_co.paa"}; 
    crew="CMD_GDF_Crewman";
    typicalCargo[]={"CMD_GDF_Crewman"};
    #include "\GDF_Faction\Vehicle_HPPs\Paladin_SPAAG.hpp"
    #include "\GDF_Faction\Vehicle_Inventories\StandardVehicleInventory.hpp"
  };

  class CMD_GDF_Paladin_IFV_Railgun: UCNFA_B_APC_AX
  {
    faction="CMD_GDF";
    side=1;
    displayName="Paladin - IFV (Railgun)";
    editorSubcategory="CMD_GDF_IFV";
    hiddenSelectionsTextures[]={"GDF_Faction\Vehicle_Camos\Paladin\CMD_GDF_TKE_UCNAPCTan_Base_co.paa","GDF_Faction\Vehicle_Camos\Paladin\CMD_GDF_TKE_UCNAPC_40mmTan_co.paa"};
    crew="CMD_GDF_Crewman";
    typicalCargo[]={"CMD_GDF_Crewman"};
    class AnimationSources: AnimationSources
    {
      class muzzle_rot1
      {
        source="ammorandom";
        weapon="TKE_MG_Coax";
      };
      class recoil_source
      {
        source="reload";
        weapon="TKE_Autocannon";
      };
      class hide_xlr
      {
        scope=1;
        displayName="Hide XLR";
        author="Luca";
        source="user";
        initPhase=0;
        animPeriod=1;
        mass=0;
      };
    };
    #include "\GDF_Faction\Vehicle_HPPs\Paladin_Railgun.hpp"
    #include "\GDF_Faction\Vehicle_Inventories\StandardVehicleInventory.hpp"
  };

  class CMD_GDF_Paladin_APC: UCNFA_B_APC_U
  {
    faction="CMD_GDF";
    side=1;
    displayName="Paladin - APC";
    editorSubcategory="EdSubcat_APCs";
    hiddenSelectionsTextures[]={"GDF_Faction\Vehicle_Camos\Paladin\CMD_GDF_TKE_UCNAPCTan_Base_co.paa"};
    crew="CMD_GDF_Crewman";
    typicalCargo[]={"CMD_GDF_Crewman"};
    #include "\GDF_Faction\Vehicle_Inventories\StandardVehicleInventory.hpp"
  };

  class CMD_GDF_Paladin_APC_Medevac: UCNFA_B_APC_U
  {
    faction="CMD_GDF";
    side=1;
    displayName="Paladin - Medevac";
    editorSubcategory="EdSubcat_APCs";
    hiddenSelectionsTextures[]={"GDF_Faction\Vehicle_Camos\Paladin\CMD_GDF_TKE_UCNAPCTan_Medic_co.paa"};
    crew="CMD_GDF_Medic";
    typicalCargo[]={"CMD_GDF_Medic"};
    maximumLoad=2000;
    #include "\GDF_Faction\Vehicle_Inventories\MedevacVehicleInventory.hpp"
  };

  class CMD_GDF_Quadbike: B_Quadbike_01_F
  {
    faction="CMD_GDF";
    side=1;
    displayName="Quadbike";
    hiddenSelectionsTextures[]={"a3\soft_f\quadbike_01\data\quadbike_01_co.paa","a3\soft_f\quadbike_01\data\quadbike_01_wheel_co.paa"};
    crew="CMD_GDF_Crewman";
    typicalCargo[]={"CMD_GDF_Crewman"};
    #include "\GDF_Faction\Vehicle_Inventories\StandardVehicleInventory.hpp"
  };

  class CMD_GDF_Rover: B_LSV_01_unarmed_F
  {
    faction="CMD_GDF";
    side=1;
    displayName="Rover";
    hiddenSelectionsTextures[]={"a3\soft_f_exp\lsv_01\data\nato_lsv_01_sand_co.paa","a3\soft_f_exp\lsv_01\data\nato_lsv_02_sand_co.paa","a3\soft_f_exp\lsv_01\data\nato_lsv_03_sand_co.paa","a3\soft_f_exp\lsv_01\data\nato_lsv_adds_sand_co.paa"};
    crew="CMD_GDF_Rifleman";
    typicalCargo[]={"CMD_GDF_Rifleman"};
    #include "\GDF_Faction\Vehicle_Inventories\StandardVehicleInventory.hpp"
  };

  class CMD_GDF_Rover_AT: B_LSV_01_AT_F
  {
    faction="CMD_GDF";
    side=1;
    displayName="Rover (AT)";
    hiddenSelectionsTextures[]={"a3\soft_f_exp\lsv_01\data\nato_lsv_01_sand_co.paa","a3\soft_f_exp\lsv_01\data\nato_lsv_02_sand_co.paa","a3\soft_f_exp\lsv_01\data\nato_lsv_03_sand_co.paa","a3\soft_f_exp\lsv_01\data\nato_lsv_adds_sand_co.paa","a3\weapons_f_beta\launchers\titan\data\launcher_co.paa","a3\weapons_f_beta\launchers\titan\data\tubem_co.paa"};
    crew="CMD_GDF_Rifleman";
    typicalCargo[]={"CMD_GDF_Rifleman"};
    #include "\GDF_Faction\Vehicle_Inventories\StandardVehicleInventory.hpp"
  };

  class CMD_GDF_Ironback_Cargo: B_Truck_01_cargo_F
  {
    faction="CMD_GDF";
    side=1;
    displayName="Ironback Cargo";
    hiddenSelectionsTextures[]={"a3\soft_f_beta\truck_01\data\truck_01_ext_01_co.paa","a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa","a3\soft_f_enoch\truck_01\data\truck_01_ammo_co.paa","a3\soft_f_enoch\truck_01\data\truck_01_cargo_co.paa"};
    crew="CMD_GDF_Crewman";
    typicalCargo[]={"CMD_GDF_Crewman"};
    #include "\GDF_Faction\Vehicle_Inventories\StandardVehicleInventory.hpp"
  };

  class CMD_GDF_Ironback: B_Truck_01_mover_F
  {
    faction="CMD_GDF";
    side=1;
    displayName="Ironback";
    hiddenSelectionsTextures[]={"a3\soft_f_beta\truck_01\data\truck_01_ext_01_co.paa","a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa","a3\soft_f_gamma\truck_01\data\truck_01_mprimer_co.paa"};
    crew="CMD_GDF_Crewman";
    typicalCargo[]={"CMD_GDF_Crewman"};
    #include "\GDF_Faction\Vehicle_Inventories\StandardVehicleInventory.hpp"
  };

  class CMD_GDF_Ironback_Flatbed: B_Truck_01_flatbed_F
  {
    faction="CMD_GDF";
    side=1;
    displayName="Ironback Flatbed";
    hiddenSelectionsTextures[]={"a3\soft_f_beta\truck_01\data\truck_01_ext_01_co.paa","a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa","a3\soft_f_enoch\truck_01\data\truck_01_ammo_co.paa","a3\soft_f_enoch\truck_01\data\truck_01_cargo_co.paa"};
    crew="CMD_GDF_Crewman";
    typicalCargo[]={"CMD_GDF_Crewman"};
    #include "\GDF_Faction\Vehicle_Inventories\StandardVehicleInventory.hpp"
  };

  class CMD_GDF_Ironback_Fuel: B_Truck_01_fuel_F
  {
    faction="CMD_GDF";
    side=1;
    displayName="Ironback Fuel";
    hiddenSelectionsTextures[]={"a3\soft_f_beta\truck_01\data\truck_01_ext_01_co.paa","a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa","a3\soft_f_gamma\truck_01\data\truck_01_fuel_co.paa"};
    crew="CMD_GDF_Crewman";
    typicalCargo[]={"CMD_GDF_Crewman"};
    #include "\GDF_Faction\Vehicle_Inventories\StandardVehicleInventory.hpp"
  };

  class CMD_GDF_Paladin_AT: UCNFA_B_APC_Art
  {
    faction="CMD_GDF";
    side=1;
    displayName="Paladin - APC (AT)";
    editorSubcategory="CMD_GDF_IFV";
    hiddenSelectionsTextures[]={"GDF_Faction\Vehicle_Camos\Paladin\CMD_GDF_TKE_UCNAPCTan_Base_co.paa","GDF_Faction\Vehicle_Camos\Paladin\CMD_GDF_TKE_UCNAPC_MortarTan_co.paa"};
    crew="CMD_GDF_Crewman";
    typicalCargo[]={"CMD_GDF_Crewman"};
    #include "\GDF_Faction\Vehicle_HPPs\Paladin_AT.hpp"
    #include "\GDF_Faction\Vehicle_Inventories\StandardVehicleInventory.hpp"
  };

  class CMD_GDF_Paladin_SPG: UCNFA_B_APC_Art
  {
    faction="CMD_GDF";
    side=1;
    displayName="WIP! Paladin - APC (Mortar)";
    editorSubcategory="CMD_GDF_IFV";
    hiddenSelectionsTextures[]={"GDF_Faction\Vehicle_Camos\Paladin\CMD_GDF_TKE_UCNAPCTan_Base_co.paa","GDF_Faction\Vehicle_Camos\Paladin\CMD_GDF_TKE_UCNAPC_MortarTan_co.paa"};
    crew="CMD_GDF_Crewman";
    typicalCargo[]={"CMD_GDF_Crewman"};
    #include "\GDF_Faction\Vehicle_Inventories\StandardVehicleInventory.hpp"
  };

  class CMD_GDF_Paladin_IFV: UCNFA_B_APC_A
  {
    faction="CMD_GDF";
    side=1;
    displayName="Paladin - APC (Armed)";
    editorSubcategory="CMD_GDF_IFV";
    hiddenSelectionsTextures[]={"GDF_Faction\Vehicle_Camos\Paladin\CMD_GDF_TKE_UCNAPCTan_Base_co.paa","GDF_Faction\Vehicle_Camos\Paladin\CMD_GDF_TKE_UCNAPC_40mmTan_co.paa"};
    crew="CMD_GDF_Crewman";
    typicalCargo[]={"CMD_GDF_Crewman"};
    #include "\GDF_Faction\Vehicle_HPPs\Paladin_IFV.hpp"
    #include "\GDF_Faction\Vehicle_Inventories\StandardVehicleInventory.hpp"
  };

  class CMD_GDF_Harasser_Humvee: rhsusf_m1151_m2_v1_usarmy_d
  {
    faction="CMD_GDF";
    side=1;
    displayName="Harasser Humvee";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_m11xx\data\rhsusf_m1151_ext_d_co.paa","rhsusf\addons\rhsusf_m11xx\data\rhsusf_m1151_tire_d_co.paa","rhsusf\addons\rhsusf_m11xx\data\rhsusf_m1151_int_co.paa","rhsusf\addons\rhsusf_m11xx\data\rhsusf_m1151_acc_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa","rhsusf\addons\rhsusf_m11xx\data\rhsusf_m1152m1165_d_co.paa","rhsusf\addons\rhsusf_m11xx\data\rhsusf_m1151_gpk_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa","a3\map_vr\data\picturemap_ca.paa"};
    crew="CMD_GDF_Rifleman";
    typicalCargo[]={"CMD_GDF_Rifleman"};
    #include "\GDF_Faction\Vehicle_Inventories\StandardVehicleInventory.hpp"
  };

  class CMD_GDF_Mammoth: HTNK_Nato
  {
    faction="CMD_GDF";
    side=1;
    armor=300;
    displayName="Mammoth - Super Heavy Tank";
    hiddenSelectionsTextures[]={"htnk\textures\htnk_chassis_nato_co.paa","htnk\textures\htnk_tourelle_nato_co.paa","htnk\textures\htnk_grilles_grey_co.paa","","",""};
    crew="CMD_GDF_Crewman_Operator";
    typicalCargo[]={"CMD_GDF_Crewman_Operator"};
    #include "\GDF_Faction\Vehicle_Inventories\StandardVehicleInventory.hpp"
  };

  class CMD_GDF_Zephyr_Interceptor: I_Plane_Fighter_04_F
  {
    faction="CMD_GDF";
    side=1;
    displayName="Zephyr - Interceptor";
    hiddenSelectionsTextures[]={"GDF_Faction\Vehicle_Camos\Zephyr\Fighter_04_fuselage_01_co.paa","GDF_Faction\Vehicle_Camos\Zephyr\Fighter_04_fuselage_02_co.paa","a3\air_f_jets\plane_fighter_04\data\fighter_04_misc_01_co.paa","a3\air_f_jets\plane_fighter_04\data\numbers\fighter_04_number_04_ca.paa","a3\air_f_jets\plane_fighter_04\data\numbers\fighter_04_number_04_ca.paa","a3\air_f_jets\plane_fighter_04\data\numbers\fighter_04_number_08_ca.paa"};
    crew="CMD_GDF_Jet_Pilot";
    typicalCargo[]={"CMD_GDF_Jet_Pilot"};
    #include "\GDF_Faction\Vehicle_Inventories\StandardVehicleInventory.hpp"
    class components: components
    {
      class TransportPylonsComponent
        {
          UIPicture="\A3\Air_F_Jets\Plane_Fighter_04\Data\UI\Fighter_04_3DEN_CA.paa";
          class pylons
          {
            class pylon1
            {
              hardpoints[]=
              {
                "I_BIM9X",
                "I_AMRAAM_C_RAIL"
              };
              attachment="PylonRack_Missile_AMRAAM_C_x1";
              priority=5;
              maxweight=300;
              UIposition[]={0.55000001,0.40000001};
            };
            class pylon2: pylon1
            {
              UIposition[]={0.1,0.40000001};
              mirroredMissilePos=1;
            };
            class pylon3
            {
              hardpoints[]=
              {
                "I_BIM9X_RAIL",
                "I_AMRAAM_C_RAIL",
                "I_AGM65_RAIL"
              };
              priority=4;
              attachment="";
              maxweight=750;
              UIposition[]={0.5,0.34999999};
            };
            class Pylon4: pylon3
            {
              UIposition[]={0.15000001,0.34999999};
              mirroredMissilePos=3;
            };
            class pylon5
            {
              hardpoints[]=
              {
                "I_BIM9X_RAIL",
                "I_BIM9X_DUAL_RAIL",
                "I_AMRAAM_C_RAIL",
                "I_AMRAAM_C_DUAL_RAIL",
                "I_AGM65_RAIL",
                "I_AGM65_DUAL_RAIL",
                "I_GBU12"
              };
              priority=3;
              attachment="";
              maxweight=1200;
              UIposition[]={0.44999999,0.30000001};
            };
            class Pylon6: pylon5
            {
              UIposition[]={0.2,0.30000001};
              mirroredMissilePos=5;
            };
          };
      };
    };
  };

  class CMD_GDF_Pike_Light_Bomber: O_Plane_CAS_02_dynamicLoadout_F
  {
    faction="CMD_GDF";
    side=1;
    displayName="Pike - Ground Attack Craft";
    hiddenSelectionsTextures[]={"\GDF_Faction\Vehicle_Camos\Pike\CMD_GDF_fighter02_ext01_co.paa","\GDF_Faction\Vehicle_Camos\Pike\CMD_GDF_fighter02_ext02_co.paa"};
    crew="CMD_GDF_Jet_Pilot";
    typicalCargo[]={"CMD_GDF_Jet_Pilot"};
    weapons[]={"CMD_GDF_Cannon_30mm_Plane_CAS_02_F","Laserdesignator_pilotCamera","CMFlareLauncher"};
    magazines[]={"CMD_GDF_500Rnd_Cannon_30mm_Plane_CAS_02_F","Laserbatteries","120Rnd_CMFlare_Chaff_Magazine"};
    #include "\GDF_Faction\Vehicle_Inventories\StandardVehicleInventory.hpp"
    #include "\GDF_Faction\Vehicle_HPPs\Pike_Pylons.hpp"
  };

  class CMD_GDF_Condor_Infantry: B_T_VTOL_01_infantry_F
  {
    faction="CMD_GDF";
    side=1;
    displayName="Condor (Infantry Transport)";
    hiddenSelectionsTextures[]={"GDF_Faction\Vehicle_Camos\Condor\VTOL_01_EXT01_GDF_CO.paa","GDF_Faction\Vehicle_Camos\Condor\VTOL_01_EXT02_GDF_CO.paa","GDF_Faction\Vehicle_Camos\Condor\VTOL_01_EXT03_GDF_CO.paa","GDF_Faction\Vehicle_Camos\Condor\VTOL_01_EXT04_GDF_CO.paa","a3\air_f_exp\vtol_01\data\vtol_01_signs_ca.paa"};
    crew="CMD_GDF_Jet_Pilot";
    typicalCargo[]={"CMD_GDF_Jet_Pilot"};
    editorSubcategory="CE_VTOLs_SubClass";
    #include "\GDF_Faction\Vehicle_Inventories\CargoPlaneInventory.hpp"
  };

  class CMD_GDF_Condor_Vehicle: B_T_VTOL_01_vehicle_F
  {
    faction="CMD_GDF";
    side=1;
    displayName="Condor (Vehicle Transport)";
    hiddenSelectionsTextures[]={"GDF_Faction\Vehicle_Camos\Condor\VTOL_01_EXT01_GDF_CO.paa","GDF_Faction\Vehicle_Camos\Condor\VTOL_01_EXT02_GDF_CO.paa","GDF_Faction\Vehicle_Camos\Condor\VTOL_01_EXT03_GDF_CO.paa","GDF_Faction\Vehicle_Camos\Condor\VTOL_01_EXT04_GDF_CO.paa","a3\air_f_exp\vtol_01\data\vtol_01_signs_ca.paa"};
    crew="CMD_GDF_Jet_Pilot";
    typicalCargo[]={"CMD_GDF_Jet_Pilot"};
    editorSubcategory="CE_VTOLs_SubClass";
    #include "\GDF_Faction\Vehicle_Inventories\CargoPlaneInventory.hpp"
  };

  class CMD_GDF_Vulture_Gunship: O_Heli_Attack_02_dynamicLoadout_F // To be possibly replaced by Eagle's "Hammerhead" Hind.
  {
    faction="CMD_GDF";
    side=1;
    displayName="Vulture - Gunship Transport";
    hiddenSelectionsTextures[]={"GDF_Faction\Vehicle_Camos\Vulture\Heli_Attack_02_body1_tan_CO.paa","GDF_Faction\Vehicle_Camos\Vulture\Heli_Attack_02_body2_tan_CO.paa"};
    crew="CMD_GDF_Heli_Pilot";
    typicalCargo[]={"CMD_GDF_Heli_Pilot"};
    #include "\GDF_Faction\Vehicle_Camos\Vulture\Vulture_Texture_List.hpp"
    #include "\GDF_Faction\Vehicle_Inventories\StandardVehicleInventory.hpp"
    #include "\GDF_Faction\Vehicle_HPPs\Vulture_Turret.hpp"
    #include "\GDF_Faction\Vehicle_HPPs\Vulture_Pylons.hpp"
  };

  class CMD_GDF_Ironback_Ammo: B_Truck_01_ammo_F
  {
    faction="CMD_GDF";
    side=1;
    displayName="Ironback (Ammo)";
    hiddenSelectionsTextures[]={"a3\soft_f_beta\truck_01\data\truck_01_ext_01_co.paa","a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa","a3\soft_f_gamma\truck_01\data\truck_01_ammo_co.paa"};
    crew="CMD_GDF_Crewman";
    typicalCargo[]={"CMD_GDF_Crewman"};
    #include "\GDF_Faction\Vehicle_Inventories\StandardVehicleInventory.hpp"
  };

  class CMD_GDF_Ironback_Medical: B_Truck_01_medical_F
  {
    faction="CMD_GDF";
    side=1;
    displayName="Ironback (Medical)";
    hiddenSelectionsTextures[]={"a3\soft_f_beta\truck_01\data\truck_01_ext_01_co.paa","a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa","a3\soft_f_beta\truck_01\data\truck_01_cargo_co.paa","a3\soft_f_beta\truck_01\data\truck_01_cover_co.paa"};
    crew="CMD_GDF_Medic";
    typicalCargo[]={"CMD_GDF_Medic"};
    #include "\GDF_Faction\Vehicle_Inventories\MedevacVehicleInventory.hpp"
  };

  class CMD_GDF_Ironback_Repair: B_Truck_01_Repair_F
  {
    faction="CMD_GDF";
    side=1;
    displayName="Ironback (Repair)";
    hiddenSelectionsTextures[]={"a3\soft_f_beta\truck_01\data\truck_01_ext_01_co.paa","a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa","a3\soft_f_gamma\truck_01\data\truck_01_ammo_co.paa","a3\structures_f\data\metal\containers\containers_02_set_co.paa"};
    crew="CMD_GDF_Crewman";
    typicalCargo[]={"CMD_GDF_Crewman"};
    #include "\GDF_Faction\Vehicle_Inventories\StandardVehicleInventory.hpp"
  };

  class CMD_GDF_Ironback_Transport_Open: B_Truck_01_transport_F
  {
    faction="CMD_GDF";
    side=1;
    displayName="Ironback - Transport (Open)";
    hiddenSelectionsTextures[]={"a3\soft_f_beta\truck_01\data\truck_01_ext_01_co.paa","a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa","a3\soft_f_beta\truck_01\data\truck_01_cargo_co.paa"};
    crew="CMD_GDF_Crewman";
    typicalCargo[]={"CMD_GDF_Crewman"};
    #include "\GDF_Faction\Vehicle_Inventories\StandardVehicleInventory.hpp"
  };

  class CMD_GDF_Ironback_Transport_Covered: B_Truck_01_covered_F
  {
    faction="CMD_GDF";
    side=1;
    displayName="Ironback - Transport (Covered)";
    hiddenSelectionsTextures[]={"a3\soft_f_beta\truck_01\data\truck_01_ext_01_co.paa","a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa","a3\soft_f_beta\truck_01\data\truck_01_cargo_co.paa","a3\soft_f_beta\truck_01\data\truck_01_cover_co.paa"};
    crew="CMD_GDF_Crewman";
    typicalCargo[]={"CMD_GDF_Crewman"};
    #include "\GDF_Faction\Vehicle_Inventories\StandardVehicleInventory.hpp"
  };

  class CMD_GDF_Hawk_Gunship: CE_TKE_AH44J
  {
    faction="CMD_GDF";
    side=1;
    displayName="Hawk - Heavy Gunship";
    hiddenSelectionsTextures[]={"GDF_Faction\Vehicle_Camos\Locust\TKE_Ext_Helidataheli_GDF_co.paa","GDF_Faction\Vehicle_Camos\Locust\TKE_Ext_Helidataheli1_GDF_co.paa","tke_ext_apc\data\apc_ucmc_co.paa"};
    crew="CMD_GDF_Heli_Pilot";
    typicalCargo[]={"CMD_GDF_Heli_Pilot"};
    damageResistance=0.00555;
    #include "\GDF_Faction\Vehicle_HPPs\Hawk_Pylons.hpp"
    #include "\GDF_Faction\Vehicle_Inventories\StandardVehicleInventory.hpp"
  };

  class CMD_GDF_Hornet_CAS: CE_TKE_AH44S
  {
    faction="CMD_GDF";
    side=1;
    displayName="Hornet - Gunship";
    hiddenSelectionsTextures[]={"GDF_Faction\Vehicle_Camos\Locust\TKE_Ext_Helidataheli_GDF_co.paa","GDF_Faction\Vehicle_Camos\Locust\TKE_Ext_Helidataheli1_GDF_co.paa","tke_ext_apc\data\apc_ucmc_co.paa"};
    crew="CMD_GDF_Heli_Pilot";
    typicalCargo[]={"CMD_GDF_Heli_Pilot"};
    ace_cargo_space=16;
    damageResistance=0.00555;
    weapons[]={"CMD_GDF_LMG_Minigun_Transport","CE_CMLauncher","Laserdesignator_pilotCamera"};
    magazines[]={"CMD_GDF_2000Rnd_65x39_Belt_Tracer_Yellow","CMD_GDF_2000Rnd_65x39_Belt_Tracer_Yellow","CMD_GDF_2000Rnd_65x39_Belt_Tracer_Yellow","Laserbatteries","CE_480rnd_CMFlare_Chaff_Magazine"};
    #include "\GDF_Faction\Vehicle_HPPs\Hornet_Pylons.hpp"
    #include "\GDF_Faction\Vehicle_Inventories\StandardVehicleInventory.hpp"
  };

  class CMD_GDF_Kestrel: FT_Hornet_IMC
  {
    faction="CMD_GDF";
    armor=60;
    displayName="Kestrel - Multirole";
    hiddenSelectionsTextures[]={"GDF_Faction\Vehicle_Camos\Hornet\FT_Hornet_01_GDF_co.paa","GDF_Faction\Vehicle_Camos\Hornet\FT_Hornet_02_GDF_co.paa","GDF_Faction\Vehicle_Camos\Hornet\FT_Hornet_03_GDF_co.paa","War_on_the_Frontier\FT_Vehicles\FT_Hornet\data\interior\FT_Hornet_Interior_01_co.paa","War_on_the_Frontier\FT_Vehicles\FT_Hornet\data\interior\FT_Hornet_Interior_02_co.paa"};
    crew="CMD_GDF_Heli_Pilot";
    weapons[]={"FT_20mm_Autocannon_Plane","Laserdesignator_pilotCamera","CMFlareLauncher"};
    magazines[]={"FT_1200Rnd_20mm_Autocannon_Plane","Laserbatteries","240Rnd_CMFlare_Chaff_Magazine","240Rnd_CMFlare_Chaff_Magazine"};
    editorSubcategory="CE_VTOLs_SubClass";
    #include "\GDF_Faction\Vehicle_Inventories\StandardVehicleInventory.hpp"
    //#include "\GDF_Faction\Vehicle_HPPs\kestrel_MFD_PilotCam.hpp"
  };

  class CMD_GDF_Tempest: O_Plane_Fighter_02_F
  {
    faction="CMD_GDF";
    side=1;
    displayName="Tempest - Air Superiority Fighter";
    crew="CMD_GDF_Heli_Pilot";
    hiddenSelectionsTextures[]={"GDF_Faction\Vehicle_Camos\Tempest\CMD_GDF_Fighter_02_fuselage_01_co.paa","GDF_Faction\Vehicle_Camos\Tempest\CMD_GDF_Fighter_02_fuselage_02_co.paa","GDF_Faction\Vehicle_Camos\Tempest\CMD_GDF_Fighter_02_fuselage_01_co.paa"};
    #include "\GDF_Faction\Vehicle_HPPs\Tempest_Pylons.hpp"
    weapons[]={"weapon_Fighter_Gun_30mm","Laserdesignator_pilotCamera","CMFlareLauncher"};
    magazines[]={"magazine_Fighter02_Gun30mm_AA_x180","magazine_Fighter02_Gun30mm_AA_x180","magazine_Fighter02_Gun30mm_AA_x180","Laserbatteries","240Rnd_CMFlare_Chaff_Magazine"};
  };

  class CMD_GDF_Tempest_Stealth: O_Plane_Fighter_02_Stealth_F
  {
    faction="CMD_GDF";
    side=1;
    displayName="Tempest - Air Superiority Fighter (Stealth)";
    crew="CMD_GDF_Heli_Pilot";
    hiddenSelectionsTextures[]={"GDF_Faction\Vehicle_Camos\Tempest\CMD_GDF_Fighter_02_fuselage_01_co.paa","GDF_Faction\Vehicle_Camos\Tempest\CMD_GDF_Fighter_02_fuselage_02_co.paa","GDF_Faction\Vehicle_Camos\Tempest\CMD_GDF_Fighter_02_fuselage_01_co.paa"};
    #include "\GDF_Faction\Vehicle_HPPs\Tempest_Stealth_Pylons.hpp"
    weapons[]={"weapon_Fighter_Gun_30mm","Laserdesignator_pilotCamera","CMFlareLauncher"};
    magazines[]={"magazine_Fighter02_Gun30mm_AA_x180","magazine_Fighter02_Gun30mm_AA_x180","magazine_Fighter02_Gun30mm_AA_x180","Laserbatteries","240Rnd_CMFlare_Chaff_Magazine"};
  };

  class CMD_GDF_C_Van_02_vehicle_F: C_Van_02_vehicle_F
  {
    displayName="Steam Support Van";
    side=1;
    editorCategory="Command_Faction_EdCat";
    hiddenSelectionsTextures[]={"GDF_Faction\Vehicle_Camos\Steam_Support_Van\van_body_steam_CO.paa","\a3\soft_f_orange\van_02\data\van_wheel_co.paa","a3\soft_f_orange\van_02\data\van_glass_civservice_ca.paa","GDF_Faction\Vehicle_Camos\Steam_Support_Van\van_body_steam_CO.paa"};
    #include "\GDF_Faction\Vehicle_Camos\Steam_Support_Van\Steam_Support_Van_Texture_List.hpp"
    #include "\GDF_Faction\Vehicle_Inventories\StandardVehicleInventory.hpp"
  };

  class CMD_GDF_I_APC_Wheeled_03: I_APC_Wheeled_03_cannon_F
  {
    faction="CMD_GDF";
    displayName="Pioneer - APC";
    side=1;
    hiddenSelectionsTextures[]={"A3\armor_f_gamma\APC_Wheeled_03\data\APC_Wheeled_03_Ext_CO.paa","A3\armor_f_gamma\APC_Wheeled_03\data\APC_Wheeled_03_Ext2_CO.paa","A3\armor_f_gamma\APC_Wheeled_03\data\RCWS30_CO.paa","A3\armor_f_gamma\APC_Wheeled_03\data\APC_Wheeled_03_Ext_alpha_CO.paa","A3\Armor_F\Data\camonet_NATO_Desert_CO.paa","A3\armor_f\data\cage_sand_CO.paa"};
    weapons[]={"TruckHorn","SmokeLauncher"};
    magazines[]={"SmokeLauncherMag","SmokeLauncherMag"};
    crew="CMD_GDF_Crewman";
    class EventHandlers: Eventhandlers
    {
    init = "(_this select 0) lockTurret [[0], true]; (_this select 0) lockTurret [[0,0], true]; (_this select 0) animate ['HideTurret',1, true];";    
    };
  };

  class CMD_GDF_Combat_Engineer_pack: B_CivilianBackpack_01_Everyday_Black_F
  {
    scope=1;
    scopeArsenal=1;
    class TransportMagazines
    {
     class _xx_rhsusf_m112_mag {count=4;magazine="rhsusf_m112_mag";};
    };
    class TransportItems
    {
     class _xx_ACE_Fortify {count=1;name="ACE_Fortify";};
     class _xx_ACE_EntrenchingTool {count=1;name="ACE_EntrenchingTool";};
     class _xx_ACE_DefusalKit {count=1;name="ACE_DefusalKit";};
     class _xx_ToolKit {count=1;name="ToolKit";};
     class _xx_ACE_wirecutter {count=1;name="ACE_wirecutter";};
    };
    class TransportWeapons{};
  };


  class CMD_GDF_Sniper_Ghillie_pack: TKE_CamelBakV2MD
  {
    scope=1;
    scopeArsenal=1;
    class TransportMagazines
    {
     class _xx_5Rnd_127x108_Mag {count=10;magazine="5Rnd_127x108_Mag";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class CMD_GDF_Spotter_pack: TKE_CamelBakV2MD
  {
    scope=1;
    scopeArsenal=1;
    class TransportMagazines
    {
     class _xx_TKE_20rnd_969x51_magUCN {count=10;magazine="TKE_20rnd_969x51_magUCN";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class CMD_GDF_Sniper_pack: TKE_CamelBakV2MD
  {
    scope=1;
    scopeArsenal=1;
    class TransportMagazines
    {
     class _xx_5Rnd_127x108_Mag {count=10;magazine="5Rnd_127x108_Mag";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class CMD_GDF_Spotter_Ghillie_pack: TKE_CamelBakV2MD
  {
    scope=1;
    scopeArsenal=1;
    class TransportMagazines
    {
     class _xx_TKE_20rnd_969x51_magUCN {count=10;magazine="TKE_20rnd_969x51_magUCN";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };

  class CMD_GDF_Wolf_Lead_pack: TKE_EVAPack
  {
    scope=1;
    scopeArsenal=1;
    class TransportMagazines
    {
     class _xx_JMSJEFF_30Rnd_ARX160_mag {count=20;magazine="JMSJEFF_30Rnd_ARX160_mag";};
     class _xx_rhsusf_m112_mag {count=1;magazine="rhsusf_m112_mag";};
    };
    class TransportItems
    {
     class _xx_ACE_packingBandage {count=15;name="ACE_packingBandage";};
     class _xx_ACE_elasticBandage {count=15;name="ACE_elasticBandage";};
     class _xx_ACE_bloodIV {count=1;name="ACE_bloodIV";};
     class _xx_ACE_bloodIV_500 {count=2;name="ACE_bloodIV_500";};
     class _xx_kat_TXA {count=2;name="kat_TXA";};
     class _xx_kat_EACA {count=2;name="kat_EACA";};
    };
    class TransportWeapons{};
  };


  class CMD_GDF_Wolf_pack: TKE_EVAPack
  {
    scope=1;
    scopeArsenal=1;
    class TransportMagazines
    {
     class _xx_JMSJEFF_30Rnd_ARX160_mag {count=20;magazine="JMSJEFF_30Rnd_ARX160_mag";};
     class _xx_rhsusf_m112_mag {count=1;magazine="rhsusf_m112_mag";};
    };
    class TransportItems
    {
     class _xx_ACE_packingBandage {count=15;name="ACE_packingBandage";};
     class _xx_ACE_elasticBandage {count=15;name="ACE_elasticBandage";};
     class _xx_ACE_bloodIV {count=4;name="ACE_bloodIV";};
     class _xx_ACE_bloodIV_500 {count=2;name="ACE_bloodIV_500";};
     class _xx_kat_TXA {count=2;name="kat_TXA";};
     class _xx_kat_EACA {count=2;name="kat_EACA";};
    };
    class TransportWeapons{};
  };


  class CMD_GDF_Wolf_Medic_pack: TKE_EVAPack
  {
    scope=1;
    scopeArsenal=1;
    class TransportMagazines
    {
     class _xx_JMSJEFF_30Rnd_ARX160_mag {count=2;magazine="JMSJEFF_30Rnd_ARX160_mag";};
     class _xx_rhsusf_m112_mag {count=1;magazine="rhsusf_m112_mag";};
     class _xx_kat_Painkiller {count=5;magazine="kat_Painkiller";};
     class _xx_kat_Pervitin {count=2;magazine="kat_Pervitin";};
    };
    class TransportItems
    {
     class _xx_ACE_elasticBandage {count=50;name="ACE_elasticBandage";};
     class _xx_ACE_packingBandage {count=50;name="ACE_packingBandage";};
     class _xx_ACE_bloodIV {count=6;name="ACE_bloodIV";};
     class _xx_kat_IV_16 {count=10;name="kat_IV_16";};
     class _xx_ACE_surgicalKit {count=1;name="ACE_surgicalKit";};
     class _xx_kat_X_AED {count=1;name="kat_X_AED";};
     class _xx_kat_TXA {count=10;name="kat_TXA";};
     class _xx_kat_EACA {count=10;name="kat_EACA";};
     class _xx_ACE_epinephrine {count=2;name="ACE_epinephrine";};
     class _xx_kat_IO_FAST {count=5;name="kat_IO_FAST";};
     class _xx_kat_ketamine {count=1;name="kat_ketamine";};
     class _xx_ACE_splint {count=4;name="ACE_splint";};
     class _xx_ACE_tourniquet {count=4;name="ACE_tourniquet";};
    };
    class TransportWeapons{};
  };


  class CMD_GDF_Wolf_EOD_pack: TKE_EVAPackMDSR
  {
    scope=1;
    scopeArsenal=1;
    class TransportMagazines
    {
     class _xx_rhsusf_m112_mag {count=1;magazine="rhsusf_m112_mag";};
     class _xx_JMSJEFF_30Rnd_ARX160_mag {count=10;magazine="JMSJEFF_30Rnd_ARX160_mag";};
     class _xx_APERSMineDispenser_Mag {count=1;magazine="APERSMineDispenser_Mag";};
     class _xx_APERSBoundingMine_Range_Mag {count=2;magazine="APERSBoundingMine_Range_Mag";};
    };
    class TransportItems
    {
     class _xx_ACE_packingBandage {count=15;name="ACE_packingBandage";};
     class _xx_ACE_elasticBandage {count=15;name="ACE_elasticBandage";};
     class _xx_ACE_bloodIV {count=1;name="ACE_bloodIV";};
     class _xx_ACE_bloodIV_500 {count=2;name="ACE_bloodIV_500";};
     class _xx_kat_TXA {count=2;name="kat_TXA";};
     class _xx_kat_EACA {count=2;name="kat_EACA";};
     class _xx_ACE_M26_Clacker {count=1;name="ACE_M26_Clacker";};
     class _xx_ACE_DefusalKit {count=1;name="ACE_DefusalKit";};
    };
    class TransportWeapons{};
  };


  class CMD_GDF_ION_Lancer_pack: TKE_EVAPackKMC
  {
    scope=1;
    scopeArsenal=1;
    class TransportMagazines
    {
     class _xx_TKE_UCNPistol_mag {count=10;magazine="TKE_UCNPistol_mag";};
     class _xx_TKE_SMOKE_mag {count=3;magazine="TKE_SMOKE_mag";};
     class _xx_kat_Pervitin {count=1;magazine="kat_Pervitin";};
     class _xx_kat_Painkiller {count=2;magazine="kat_Painkiller";};
    };
    class TransportItems
    {
     class _xx_ACE_elasticBandage {count=10;name="ACE_elasticBandage";};
     class _xx_ACE_packingBandage {count=10;name="ACE_packingBandage";};
     class _xx_ACE_bloodIV {count=1;name="ACE_bloodIV";};
     class _xx_kat_TXA {count=1;name="kat_TXA";};
     class _xx_kat_EACA {count=1;name="kat_EACA";};
     class _xx_kat_IFAK {count=1;name="kat_IFAK";};
     class _xx_TKE_IntegratedNVGs {count=1;name="TKE_IntegratedNVGs";};
    };
    class TransportWeapons{};
  };


  class CMD_GDF_Headhunter_pack: TKE_BackPack1MDBlack
  {
    scope=1;
    scopeArsenal=1;
    class TransportMagazines
    {
     class _xx_TKE_SMOKE_mag {count=10;magazine="TKE_SMOKE_mag";};
     class _xx_TKE_FRAG_mag {count=2;magazine="TKE_FRAG_mag";};
     class _xx_rhsusf_m112_mag {count=4;magazine="rhsusf_m112_mag";};
     class _xx_DemoCharge_Remote_Mag {count=4;magazine="DemoCharge_Remote_Mag";};
     class _xx_rhsusf_m112x4_mag {count=4;magazine="rhsusf_m112x4_mag";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class CMD_GDF_Platoon_Leader_pack: TKE_CamelBakUCNCamo2
  {
    scope=1;
    scopeArsenal=1;
    class TransportMagazines{};
    class TransportItems{};
    class TransportWeapons{};
  };


  class CMD_GDF_Team_Leader_pack: TKE_BackPack2UCN2
  {
    scope=1;
    scopeArsenal=1;
    class TransportMagazines{};
    class TransportItems{};
    class TransportWeapons{};
  };


  class CMD_GDF_Autorifleman_LMG_pack: TKE_CamelBakV2UCNCamo2
  {
    scope=1;
    scopeArsenal=1;
    class TransportMagazines{};
    class TransportItems
    {
     class _xx_TKE_IntegratedNVGs {count=1;name="TKE_IntegratedNVGs";};
    };
    class TransportWeapons{};
  };


  class CMD_GDF_Medic_pack: TKE_AlicePackUCNArmyM
  {
    scope=1;
    scopeArsenal=1;
    class TransportMagazines
    {
     class _xx_kat_Painkiller {count=5;magazine="kat_Painkiller";};
     class _xx_TKE_35rnd_62x35_magTY {count=5;magazine="TKE_35rnd_62x35_magTY";};
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


  class CMD_GDF_Rifleman_AT_pack: TKE_RuckSackArmy
  {
    scope=1;
    scopeArsenal=1;
    class TransportMagazines
    {
     class _xx_MRAWS_HEAT55_F {count=5;magazine="MRAWS_HEAT55_F";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class CMD_GDF_Squad_Leader_pack: TKE_CamelBakV2UCNCamo2
  {
    scope=1;
    scopeArsenal=1;
    class TransportMagazines{};
    class TransportItems{};
    class TransportWeapons{};
  };


  class CMD_GDF_Rifleman_AA_pack: TKE_RuckSackArmy
  {
    scope=1;
    scopeArsenal=1;
    class TransportMagazines
    {
      class _xx_Titan_AA {count=3;magazine="Titan_AA";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class CMD_GDF_Autorifleman_MMG_pack: TKE_RuckSackArmy
  {
    scope=1;
    scopeArsenal=1;
    class TransportMagazines{};
    class TransportItems
    {
     class _xx_TKE_UCMCGogglesDownNVG {count=1;name="TKE_UCMCGogglesDownNVG";};
    };
    class TransportWeapons{};
  };


  class CMD_GDF_Marksman_pack: TKE_CamelBakV2UCNCamo2
  {
    scope=1;
    scopeArsenal=1;
    class TransportMagazines{};
    class TransportItems{};
    class TransportWeapons{};
  };


  class CMD_GDF_Rifleman_pack: TKE_BackPack2UCN2
  {
    scope=1;
    scopeArsenal=1;
    class TransportMagazines{};
    class TransportItems{};
    class TransportWeapons{};
  };


  class CMD_GDF_Grenadier_pack: TKE_ReconPackArmy
  {
    scope=1;
    scopeArsenal=1;
    class TransportMagazines
    {
     class _xx_MiniGrenade {count=50;magazine="MiniGrenade";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };

  #include "\GDF_Faction\Vehicle_HPPs\Turrets.hpp"

};

//////////////// Paste cfgGroups after this line //////////////// 

class cfgGroups
{  
  class WEST
  {
    name="BLUFOR";
    class GDF
    {
      name="[Command] GDF";

      class Infantry
      {
        name="Infantry";

        class CMD_GDF_B_Fireteam
        {
          name="Fireteam";
          faction="CMD_GDF";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="CMD_GDF_Team_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="CMD_GDF_Medic";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit2
          {
            side=1;
            vehicle="CMD_GDF_Autorifleman_LMG";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit3
          {
            side=1;
            vehicle="CMD_GDF_Marksman";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
        };
        class CMD_GDF_B_Squad
        {
          name="Squad";
          faction="CMD_GDF";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="CMD_GDF_Squad_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="CMD_GDF_Team_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit2
          {
            side=1;
            vehicle="CMD_GDF_Medic";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit3
          {
            side=1;
            vehicle="CMD_GDF_Autorifleman_LMG";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit4
          {
            side=1;
            vehicle="CMD_GDF_Marksman";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit5
          {
            side=1;
            vehicle="CMD_GDF_Team_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit6
          {
            side=1;
            vehicle="CMD_GDF_Autorifleman_LMG";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit7
          {
            side=1;
            vehicle="CMD_GDF_Autorifleman_MMG";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit8
          {
            side=1;
            vehicle="CMD_GDF_Autorifleman_MMG";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
        };
        class CMD_GDF_B_Fireteam_AT_Light
        {
          name="Fireteam - (AT Light)";
          faction="CMD_GDF";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="CMD_GDF_Team_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="CMD_GDF_Medic";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit2
          {
            side=1;
            vehicle="CMD_GDF_Autorifleman_LMG";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit3
          {
            side=1;
            vehicle="CMD_GDF_Rifleman_AT";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
        };
        class CMD_GDF_B_Fireteam_AT_Heavy
        {
          name="Fireteam - (AT Heavy)";
          faction="CMD_GDF";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="CMD_GDF_Team_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="CMD_GDF_Medic";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit2
          {
            side=1;
            vehicle="CMD_GDF_Autorifleman_LMG";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit3
          {
            side=1;
            vehicle="CMD_GDF_Rifleman_Heavy_AT";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
        };
        class CMD_GDF_B_Fireteam_AA
        {
          name="Fireteam - (AA)";
          faction="CMD_GDF";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="CMD_GDF_Team_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="CMD_GDF_Medic";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit2
          {
            side=1;
            vehicle="CMD_GDF_Autorifleman_LMG";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit3
          {
            side=1;
            vehicle="CMD_GDF_Rifleman_AA";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
        };
        class CMD_GDF_B_Fireteam_Medical
        {
          name="Fireteam - (Medical)";
          faction="CMD_GDF";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="CMD_GDF_Team_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="CMD_GDF_Medic";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit2
          {
            side=1;
            vehicle="CMD_GDF_Medic";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit3
          {
            side=1;
            vehicle="CMD_GDF_Medic";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
        };
        class CMD_GDF_B_Grenadier_Team
        {
          name="Grenadier Team";
          faction="CMD_GDF";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="CMD_GDF_Grenadier";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="CMD_GDF_Grenadier";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit2
          {
            side=1;
            vehicle="CMD_GDF_Grenadier";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit3
          {
            side=1;
            vehicle="CMD_GDF_Grenadier";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
        };
        class CMD_GDF_B_Squad_Light_AT
        {
          name="Squad - (Light AT)";
          faction="CMD_GDF";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="CMD_GDF_Squad_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="CMD_GDF_Team_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit2
          {
            side=1;
            vehicle="CMD_GDF_Medic";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit3
          {
            side=1;
            vehicle="CMD_GDF_Marksman";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit4
          {
            side=1;
            vehicle="CMD_GDF_Team_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit5
          {
            side=1;
            vehicle="CMD_GDF_Autorifleman_LMG";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit6
          {
            side=1;
            vehicle="CMD_GDF_Autorifleman_MMG";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit7
          {
            side=1;
            vehicle="CMD_GDF_Rifleman_AT";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit8
          {
            side=1;
            vehicle="CMD_GDF_Rifleman_AT";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
        };
        class CMD_GDF_B_Squad_Heavy_AT
        {
          name="Squad - (Heavy AT)";
          faction="CMD_GDF";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="CMD_GDF_Squad_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="CMD_GDF_Team_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit2
          {
            side=1;
            vehicle="CMD_GDF_Medic";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit3
          {
            side=1;
            vehicle="CMD_GDF_Marksman";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit4
          {
            side=1;
            vehicle="CMD_GDF_Team_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit5
          {
            side=1;
            vehicle="CMD_GDF_Autorifleman_LMG";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit6
          {
            side=1;
            vehicle="CMD_GDF_Autorifleman_MMG";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit7
          {
            side=1;
            vehicle="CMD_GDF_Rifleman_Heavy_AT";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit8
          {
            side=1;
            vehicle="CMD_GDF_Rifleman_Heavy_AT";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
        };
        class CMD_GDF_B_Squad_AA
        {
          name="Squad - (AA)";
          faction="CMD_GDF";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="CMD_GDF_Squad_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="CMD_GDF_Team_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit2
          {
            side=1;
            vehicle="CMD_GDF_Medic";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit3
          {
            side=1;
            vehicle="CMD_GDF_Marksman";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit4
          {
            side=1;
            vehicle="CMD_GDF_Team_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit5
          {
            side=1;
            vehicle="CMD_GDF_Autorifleman_LMG";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit6
          {
            side=1;
            vehicle="CMD_GDF_Autorifleman_MMG";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit7
          {
            side=1;
            vehicle="CMD_GDF_Rifleman_AA";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit8
          {
            side=1;
            vehicle="CMD_GDF_Rifleman_AA";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
        };
        class CMD_GDF_B_Sniper_Team
        {
          name="Sniper Team";
          faction="CMD_GDF";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="CMD_GDF_Spotter";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="CMD_GDF_Sniper";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
        };
        class CMD_GDF_B_Sniper_Team_Ghillie
        {
          name="Sniper Team (Ghillie)";
          faction="CMD_GDF";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="CMD_GDF_Sniper_Ghillie";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="CMD_GDF_Spotter_Ghillie";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
        };
      };
      class Motorized
      {
        name="Motorized";

        class CMD_GDF_B_Motorized_Reinforcements_2x_Squads
        {
          name="Motorized Reinforcements - (2x Squads)";
          faction="CMD_GDF";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="CMD_GDF_Ironback_Transport_Covered";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="CMD_GDF_Team_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit2
          {
            side=1;
            vehicle="CMD_GDF_Medic";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit3
          {
            side=1;
            vehicle="CMD_GDF_Autorifleman_LMG";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit4
          {
            side=1;
            vehicle="CMD_GDF_Marksman";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit5
          {
            side=1;
            vehicle="CMD_GDF_Team_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit6
          {
            side=1;
            vehicle="CMD_GDF_Autorifleman_LMG";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit7
          {
            side=1;
            vehicle="CMD_GDF_Autorifleman_MMG";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit8
          {
            side=1;
            vehicle="CMD_GDF_Autorifleman_MMG";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit9
          {
            side=1;
            vehicle="CMD_GDF_Team_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit10
          {
            side=1;
            vehicle="CMD_GDF_Medic";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit11
          {
            side=1;
            vehicle="CMD_GDF_Autorifleman_LMG";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit12
          {
            side=1;
            vehicle="CMD_GDF_Marksman";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit13
          {
            side=1;
            vehicle="CMD_GDF_Team_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit14
          {
            side=1;
            vehicle="CMD_GDF_Autorifleman_LMG";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit15
          {
            side=1;
            vehicle="CMD_GDF_Autorifleman_MMG";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit16
          {
            side=1;
            vehicle="CMD_GDF_Autorifleman_MMG";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
        };
        class CMD_GDF_B_Rover_Team
        {
          name="Rover - Team";
          faction="CMD_GDF";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="CMD_GDF_Rover";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="CMD_GDF_Team_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit2
          {
            side=1;
            vehicle="CMD_GDF_Medic";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit3
          {
            side=1;
            vehicle="CMD_GDF_Autorifleman_LMG";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit4
          {
            side=1;
            vehicle="CMD_GDF_Marksman";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit5
          {
            side=1;
            vehicle="CMD_GDF_Autorifleman_MMG";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit6
          {
            side=1;
            vehicle="CMD_GDF_Autorifleman_MMG";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
        };
      };
      class Mechanized
      {
        name="Mechanized";

        class CMD_GDF_B_Guardian_Armed_Squad
        {
          name="Guardian (Armed) - Squad";
          faction="CMD_GDF";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="CMD_GDF_Guardian_Armed";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="CMD_GDF_Squad_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit2
          {
            side=1;
            vehicle="CMD_GDF_Medic";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit3
          {
            side=1;
            vehicle="CMD_GDF_Autorifleman_LMG";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit4
          {
            side=1;
            vehicle="CMD_GDF_Marksman";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit5
          {
            side=1;
            vehicle="CMD_GDF_Team_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit6
          {
            side=1;
            vehicle="CMD_GDF_Autorifleman_LMG";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit7
          {
            side=1;
            vehicle="CMD_GDF_Autorifleman_MMG";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit8
          {
            side=1;
            vehicle="CMD_GDF_Autorifleman_MMG";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
        };

        class CMD_GDF_B_Guardian_Unarmed_Squad
        {
          name="Guardian (Unarmed) - Squad";
          faction="CMD_GDF";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="CMD_GDF_Guardian_Unarmed";
            rank="MAJOR";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="CMD_GDF_Squad_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit2
          {
            side=1;
            vehicle="CMD_GDF_Medic";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit3
          {
            side=1;
            vehicle="CMD_GDF_Autorifleman_LMG";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit4
          {
            side=1;
            vehicle="CMD_GDF_Marksman";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit5
          {
            side=1;
            vehicle="CMD_GDF_Team_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit6
          {
            side=1;
            vehicle="CMD_GDF_Autorifleman_LMG";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit7
          {
            side=1;
            vehicle="CMD_GDF_Autorifleman_MMG";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit8
          {
            side=1;
            vehicle="CMD_GDF_Autorifleman_MMG";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
        };
        class CMD_GDF_B_Paladin_Squad
        {
          name="Paladin Squad";
          faction="CMD_GDF";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="CMD_GDF_Paladin_APC";
            rank="MAJOR";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="CMD_GDF_Squad_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit2
          {
            side=1;
            vehicle="CMD_GDF_Medic";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit3
          {
            side=1;
            vehicle="CMD_GDF_Autorifleman_LMG";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit4
          {
            side=1;
            vehicle="CMD_GDF_Marksman";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit5
          {
            side=1;
            vehicle="CMD_GDF_Team_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit6
          {
            side=1;
            vehicle="CMD_GDF_Autorifleman_LMG";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit7
          {
            side=1;
            vehicle="CMD_GDF_Autorifleman_MMG";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit8
          {
            side=1;
            vehicle="CMD_GDF_Autorifleman_MMG";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
        };
        class CMD_GDF_B_Medevac_Team
        {
          name="Medevac Team";
          faction="CMD_GDF";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="CMD_GDF_Paladin_APC_Medevac";
            rank="MAJOR";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="CMD_GDF_Team_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit2
          {
            side=1;
            vehicle="CMD_GDF_Medic";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit3
          {
            side=1;
            vehicle="CMD_GDF_Medic";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit4
          {
            side=1;
            vehicle="CMD_GDF_Medic";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
        };
        class CMD_GDF_B_Pioneer_Squad
        {
          name="Pioneer Squad";
          faction="CMD_GDF";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="CMD_GDF_I_APC_Wheeled_03";
            rank="MAJOR";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="CMD_GDF_Squad_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit2
          {
            side=1;
            vehicle="CMD_GDF_Medic";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit3
          {
            side=1;
            vehicle="CMD_GDF_Autorifleman_LMG";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit4
          {
            side=1;
            vehicle="CMD_GDF_Marksman";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit5
          {
            side=1;
            vehicle="CMD_GDF_Team_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit6
          {
            side=1;
            vehicle="CMD_GDF_Autorifleman_LMG";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit7
          {
            side=1;
            vehicle="CMD_GDF_Autorifleman_MMG";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit8
          {
            side=1;
            vehicle="CMD_GDF_Autorifleman_MMG";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
        };
      };
      class Armored
      {
        name="Armored";

      };
      class SpecOps
      {
        name="Special Forces";

        class CMD_GDF_B_Ion_Lancer_Section
        {
          name="Ion Lancer Section";
          faction="CMD_GDF";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="CMD_GDF_ION_Lancer";
            rank="COLONEL";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="CMD_GDF_ION_Lancer";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
        };
        class CMD_GDF_B_Ion_Lancer_Squad
        {
          name="Ion Lancer Squad";
          faction="CMD_GDF";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="CMD_GDF_ION_Lancer";
            rank="COLONEL";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="CMD_GDF_ION_Lancer";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit2
          {
            side=1;
            vehicle="CMD_GDF_ION_Lancer";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit3
          {
            side=1;
            vehicle="CMD_GDF_ION_Lancer";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
        };
        class CMD_GDF_B_Wolf_Pack
        {
          name="Wolf Pack";
          faction="CMD_GDF";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="CMD_GDF_Wolf_Lead";
            rank="COLONEL";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="CMD_GDF_Wolf_EOD";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit2
          {
            side=1;
            vehicle="CMD_GDF_Wolf_Medic";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit3
          {
            side=1;
            vehicle="CMD_GDF_Wolf";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
        };
        class CMD_GDF_B_The_Pride
        {
          name="The Pride";
          faction="CMD_GDF";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="CMD_GDF_Headhunter";
            rank="COLONEL";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="CMD_GDF_Wolf_Lead";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit2
          {
            side=1;
            vehicle="CMD_GDF_Wolf_EOD";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit3
          {
            side=1;
            vehicle="CMD_GDF_Wolf_Medic";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit4
          {
            side=1;
            vehicle="CMD_GDF_Wolf";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit5
          {
            side=1;
            vehicle="CMD_GDF_Wolf_Lead";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit6
          {
            side=1;
            vehicle="CMD_GDF_Wolf_EOD";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit7
          {
            side=1;
            vehicle="CMD_GDF_Wolf_Medic";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit8
          {
            side=1;
            vehicle="CMD_GDF_Wolf";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
        };
      };
      class Support
      {
        name="Support Infantry";

      };
      class Airborne
      {
        name="Airborne";

        class CMD_GDF_B_Nomad_Squad
        {
          name="Nomad - Squad";
          faction="CMD_GDF";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="CMD_GDF_Nomad_Troop_Transport";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="CMD_GDF_Squad_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit2
          {
            side=1;
            vehicle="CMD_GDF_Medic";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit3
          {
            side=1;
            vehicle="CMD_GDF_Autorifleman_LMG";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit4
          {
            side=1;
            vehicle="CMD_GDF_Marksman";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit5
          {
            side=1;
            vehicle="CMD_GDF_Team_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit6
          {
            side=1;
            vehicle="CMD_GDF_Autorifleman_LMG";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit7
          {
            side=1;
            vehicle="CMD_GDF_Autorifleman_MMG";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit8
          {
            side=1;
            vehicle="CMD_GDF_Autorifleman_MMG";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
        };

        class CMD_GDF_B_Condor_Platoon
        {
          name="Condor Platoon";
          faction="CMD_GDF";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="CMD_GDF_Condor_Infantry";
            rank="MAJOR";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="CMD_GDF_Platoon_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit2
          {
            side=1;
            vehicle="CMD_GDF_Team_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit3
          {
            side=1;
            vehicle="CMD_GDF_Medic";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit4
          {
            side=1;
            vehicle="CMD_GDF_Autorifleman_LMG";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit5
          {
            side=1;
            vehicle="CMD_GDF_Marksman";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit6
          {
            side=1;
            vehicle="CMD_GDF_Team_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit7
          {
            side=1;
            vehicle="CMD_GDF_Autorifleman_LMG";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit8
          {
            side=1;
            vehicle="CMD_GDF_Autorifleman_MMG";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit9
          {
            side=1;
            vehicle="CMD_GDF_Autorifleman_MMG";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit10
          {
            side=1;
            vehicle="CMD_GDF_Team_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit11
          {
            side=1;
            vehicle="CMD_GDF_Medic";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit12
          {
            side=1;
            vehicle="CMD_GDF_Autorifleman_LMG";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit13
          {
            side=1;
            vehicle="CMD_GDF_Marksman";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit14
          {
            side=1;
            vehicle="CMD_GDF_Team_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit15
          {
            side=1;
            vehicle="CMD_GDF_Autorifleman_LMG";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit16
          {
            side=1;
            vehicle="CMD_GDF_Autorifleman_MMG";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit17
          {
            side=1;
            vehicle="CMD_GDF_Autorifleman_MMG";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit18
          {
            side=1;
            vehicle="CMD_GDF_Team_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit19
          {
            side=1;
            vehicle="CMD_GDF_Medic";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit20
          {
            side=1;
            vehicle="CMD_GDF_Autorifleman_LMG";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit21
          {
            side=1;
            vehicle="CMD_GDF_Marksman";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit22
          {
            side=1;
            vehicle="CMD_GDF_Team_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit23
          {
            side=1;
            vehicle="CMD_GDF_Autorifleman_LMG";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit24
          {
            side=1;
            vehicle="CMD_GDF_Autorifleman_MMG";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit25
          {
            side=1;
            vehicle="CMD_GDF_Autorifleman_MMG";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit26
          {
            side=1;
            vehicle="CMD_GDF_Team_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit27
          {
            side=1;
            vehicle="CMD_GDF_Medic";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit28
          {
            side=1;
            vehicle="CMD_GDF_Autorifleman_LMG";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit29
          {
            side=1;
            vehicle="CMD_GDF_Marksman";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit30
          {
            side=1;
            vehicle="CMD_GDF_Team_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit31
          {
            side=1;
            vehicle="CMD_GDF_Autorifleman_MMG";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit32
          {
            side=1;
            vehicle="CMD_GDF_Autorifleman_MMG";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
        };

      };
      class Air
      {
        name="Air";

      };
    };
  };
};
