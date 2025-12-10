class CfgPatches
{
	class Command_Master_ACE
	{
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"ace_main",
            "ace_common",
            "ace_interaction",
            "ace_interact_menu",
            "ace_medical_treatment"
		};
		skipWhenMissingDependencies=1;
		addonRootClass=Command_Master;
	};
};

class ace_medical_treatment_actions
{
    class BasicBandage;
    class PersonalAidKit: BasicBandage
    {
        condition="";
    };
};