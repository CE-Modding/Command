class CfgPatches
{
	class Command_Audio_Sfx
	{
		requiredVersion=1.00;
		requiredAddons[]={"A3_Sounds_F"};
		units[]=
		{
			"Command_SFX_BF3_UI"
		};
		weapons[]={};
		addonRootClass=Command_Audio;
	};
};

// SFXs for use in Zeus need to be defined CfgSFX (Though this is the main part!) *AND* CfgSounds

class CfgSFX 
{
	class Command_SFX_Base
	{
		name="[CMD] BaseSFX";
		sounds[]=
		{
			"sfxsound"
		};
		empty[]={"",0,0,0,0,0,0,0};
	};
	class Command_SFX_BF3_UI: Command_SFX_Base
	{
		name="[CMD] BF3 UI New Objective Sfx";
		sfxsound[]=
		{
			"\Command\Command_Audio\Sfx\Command_BF3_UI_Sfx.ogg",	//Path
			60,		//Volume
			1,		//Pitch 1=Normal
			800,	//Distance, how far it can be heard from
			1,		//Probability, if played at random (0 to 1)
			1,		//minDelay, Time to wait before playing the same Sound in a loop
			1,		//MidDelay, AS ABOVE
			0		//maxDelay, AS ABOVE
		};
	};
};

class CfgSounds 
{
    class Command_SFX_BF3_UI 
    {
        sound[] = {"\Command\Command_Audio\Sfx\Command_BF3_UI_Sfx.ogg",0.5,1};
        titles[] = {};
    };
};