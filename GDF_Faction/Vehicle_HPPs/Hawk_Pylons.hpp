class Components: Components
{
	class TransportPylonsComponent
	{
		UIPicture="\TKE_Ext_Core_V\data\ui\heli_eden_icon_ca.paa";
		class pylons
		{
			class pylons1
			{
				hardpoints[]={"include \CE_Aviation_Munitions\CE_AvMunitions_Hardpoint_Overhaul\zzLongDefines\AA_SR.hpp","CMD_GDF_rockets_Skyfire","CMD_GDF_GAU19_SLAPT_pod_Mag_Y","CE_AGM_SR_HARM_Hardpoint","CE_AGM_SR_IR_Hardpoint","B_MISSILE_AGM65D","B_MISSILE_2AGM65D","B_MISSILE_3AGM65D","CE_AGM_SR_LSR_Hardpoint","B_MISSILE_AGM65E","B_MISSILE_2AGM65E","CE_AGM_SR_RDR_Hardpoint","B_MISSILE_AGM65K","B_MISSILE_2AGM65K","CE_AGM_SR_TV_Hardpoint","RHS_HP_AGM65","RHS_HP_AGM65_3x","CE_RocketPod_DAGR_Hardpoint","DAGR","CE_RocketPod_APKWS_Hardpoint","CE_RocketPod_Zuni_LSR_Hardpoint","CE_RocketPod_Hydra_Hardpoint","RHS_HP_HYDRA_USAF","RHS_HP_HYDRA_USAF_3x","include \CE_Aviation_Munitions\CE_AvMunitions_Hardpoint_Overhaul\zzLongDefines\RK_Zuni.hpp""","CE_RocketPod_NPM_Hardpoint","CE_Bomb_500lbs_DB_Hardpoint","RHS_HP_BOMB_500","B_BOMB_MK82","CE_Bomb_500lbs_GPS_Hardpoint","RHS_HP_JDAM_500","CE_Bomb_500lbs_IR_Hardpoint","CE_Bomb_500lbs_LSR_Hardpoint","RHS_HP_LGB_500","CE_Bomb_500lbs_RDR_Hardpoint","CE_Bomb_500lbs_NPM_DB_Hardpoint","CE_Bomb_1000lbs_DB_Hardpoint","RHS_HP_BOMB_1000","CE_Bomb_1000lbs_GPS_Hardpoint","RHS_HP_JDAM_1000","B_1000lb_IR","CE_Bomb_1000lbs_LSR_Hardpoint","RHS_HP_LGB_1000_3x","B_1000lb_RDR","CE_Bomb_1000lbs_NPM_DB_Hardpoint","CE_Bomb_2000lbs_DB_Hardpoint","CE_Bomb_2000lbs_GPS_Hardpoint","B_2000lb_IR","CE_Bomb_2000lbs_LSR_Hardpoint","B_2000lb_RDR","CE_Bomb_2000lbs_NPM_DB_Hardpoint","include \CE_Aviation_Munitions\CE_AvMunitions_Hardpoint_Overhaul\zzLongDefines\B_CBU.hpp""","CE_Bomb_Cluster_NPM_Hardpoint","CE_SCIFI_SmallCannon_Hardpoint","CE_SCIFI_MediumCannon_Hardpoint","CE_SCIFI_LargeCannon_Hardpoint","OPAEX_Hardpoint_UH144_Lower","OPAEX_Hardpoint_UH144_Upper"};
				attachment="CMD_GDF_GAU19_SLAPT_pod_Mag_Y";
				priority=10;
				maxweight=500;
				UIposition[]={0.44999999,0.30000001};
			};
			class pylons2: pylons1
			{
				UIposition[]={0.2,0.30000001};
				mirroredMissilePos=1;
			};
			class pylons3: pylons1
			{
				attachment="CMD_GDF_PylonRack_19Rnd_Rocket_Skyfire";
				UIposition[]={0.5,0.34999999};
			};
			class pylons4: pylons3
			{
				UIposition[]={0.15000001,0.34999999};
				mirroredMissilePos=3;
			};
			class pylons5: pylons1
			{
				hardpoints[]={"include \CE_Aviation_Munitions\CE_AvMunitions_Hardpoint_Overhaul\zzLongDefines\AA_SR.hpp","CMD_GDF_rockets_Skyfire","CMD_GDF_GAU19_SLAPT_pod_Mag_Y","CE_AGM_SR_HARM_Hardpoint","CE_AGM_SR_IR_Hardpoint","B_MISSILE_AGM65D","B_MISSILE_2AGM65D","B_MISSILE_3AGM65D","CE_AGM_SR_LSR_Hardpoint","B_MISSILE_AGM65E","B_MISSILE_2AGM65E","CE_AGM_SR_RDR_Hardpoint","B_MISSILE_AGM65K","B_MISSILE_2AGM65K","CE_AGM_SR_TV_Hardpoint","RHS_HP_AGM65","RHS_HP_AGM65_3x","CE_RocketPod_DAGR_Hardpoint","DAGR","CE_RocketPod_APKWS_Hardpoint","CE_RocketPod_Zuni_LSR_Hardpoint","CE_RocketPod_Hydra_Hardpoint","RHS_HP_HYDRA_USAF","RHS_HP_HYDRA_USAF_3x","include \CE_Aviation_Munitions\CE_AvMunitions_Hardpoint_Overhaul\zzLongDefines\RK_Zuni.hpp""","CE_RocketPod_NPM_Hardpoint","CE_Bomb_500lbs_DB_Hardpoint","RHS_HP_BOMB_500","B_BOMB_MK82","CE_Bomb_500lbs_GPS_Hardpoint","RHS_HP_JDAM_500","CE_Bomb_500lbs_IR_Hardpoint","CE_Bomb_500lbs_LSR_Hardpoint","RHS_HP_LGB_500","CE_Bomb_500lbs_RDR_Hardpoint","CE_Bomb_500lbs_NPM_DB_Hardpoint","CE_Bomb_1000lbs_DB_Hardpoint","RHS_HP_BOMB_1000","CE_Bomb_1000lbs_GPS_Hardpoint","RHS_HP_JDAM_1000","B_1000lb_IR","CE_Bomb_1000lbs_LSR_Hardpoint","RHS_HP_LGB_1000_3x","B_1000lb_RDR","CE_Bomb_1000lbs_NPM_DB_Hardpoint","CE_Bomb_2000lbs_DB_Hardpoint","CE_Bomb_2000lbs_GPS_Hardpoint","B_2000lb_IR","CE_Bomb_2000lbs_LSR_Hardpoint","B_2000lb_RDR","CE_Bomb_2000lbs_NPM_DB_Hardpoint","include \CE_Aviation_Munitions\CE_AvMunitions_Hardpoint_Overhaul\zzLongDefines\B_CBU.hpp""","CE_Bomb_Cluster_NPM_Hardpoint","CE_SCIFI_SmallCannon_Hardpoint","CE_SCIFI_MediumCannon_Hardpoint","CE_SCIFI_LargeCannon_Hardpoint","CE_Meme_Munitions_Hardpoint","OPAEX_Hardpoint_UH144_Lower","OPAEX_Hardpoint_UH144_Upper"};
				attachment="";
				UIposition[]={0.55000001,0.40000001};
			};
			class pylons6: pylons5
			{
				UIposition[]={0.1,0.40000001};
				mirroredMissilePos=5;
			};
		};
		class presets
		{
			class empty
			{
				displayName="$STR_empty";
				attachment[]={};
			};
			class Default
			{
				displayName="Default";
				attachment[]=
				{
					"PylonRack_19Rnd_Rocket_Skyfire",
					"PylonRack_19Rnd_Rocket_Skyfire",
					"PylonRack_3Rnd_LG_scalpel",
					"PylonRack_3Rnd_LG_scalpel",
					"PylonRack_Missile_BIM9X_x1",
					"PylonRack_Missile_BIM9X_x1"
				};
			};
		};
	};
};
