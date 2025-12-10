class CfgPatches
{
	class Command_ReTextures_AOT
	{
		units[]={};
		weapons[]=
		{
			"Command_BallisticMask_Jewbussy",
			"Command_BallisticMask_Yoshi",
			"Command_BallisticMask_SMILE",
			"Command_BallisticMask_Fox",
			"Command_BallisticMask_Frog",
			"Command_BallisticMask_Spider",
			"Command_BallisticMask_Cods",
			"Command_BallisticMask_Chase",
			"Command_BallisticMask_Potato",
			"Command_BallisticMask_Jonesy",
			"Command_BallisticMask_Unknown",
			"Command_BallisticMask_Jules",
			"Command_BallisticMask_Outbreak",
			"Command_BallisticMask_Peasant",
			"Command_BallisticMask_Andre"
		};
		requiredAddons[]=
		{
			"aotmask"
		};
		skipWhenMissingDependencies=1;
		addonRootClass=Command_ReTextures;
	};
};

class CfgWeapons
{
	class aot_mask;
	class Command_BallisticMask_base: aot_mask
	{
		picture="Command_ReTextures\AOT\UI\Command_BallisticMask_UI_ca.paa";
		author="Almus";
		scope=0;
	};

    class Command_BallisticMask_Jewbussy: Command_BallisticMask_base // JEWBARD
	{
		scope=2;
		displayName="[CMD] Ballistic Mask - Jewbussy";
		hiddenSelectionsTextures[]={"Command_ReTextures\AOT\Data\Jewbard.paa"};
	};
	class Command_BallisticMask_Yoshi: Command_BallisticMask_base // Yoshi
	{
		scope=2;
		displayName="[CMD] Ballistic Mask - Yoshi";
		hiddenSelectionsTextures[]={"Command_ReTextures\AOT\Data\Yoshi.paa"};
	};
	class Command_BallisticMask_SMILE: Command_BallisticMask_base // Evil Smile
	{
		scope=2;
		displayName="[CMD] Ballistic Mask - Evil Smile";
		hiddenSelectionsTextures[]={"Command_ReTextures\AOT\Data\EvilSmile.paa"};
	};
	class Command_BallisticMask_Fox: Command_BallisticMask_base // Almus
	{
		scope=2;
		displayName="[CMD] Ballistic Mask - Almus";
		hiddenSelectionsTextures[]={"Command_ReTextures\AOT\Data\Almus.paa"};
	};
	class Command_BallisticMask_Frog: Command_BallisticMask_base // Frog
	{
		scope=2;
		displayName="[CMD] Ballistic Mask - Frog";
		hiddenSelectionsTextures[]={"Command_ReTextures\AOT\Data\Frog.paa"};
	};
	class Command_BallisticMask_Spider: Command_BallisticMask_base // Spider
	{
		scope=2;
		displayName="[CMD] Ballistic Mask - Spider";
		hiddenSelectionsTextures[]={"Command_ReTextures\AOT\Data\Spider.paa"};
	};
	class Command_BallisticMask_Cods: Command_BallisticMask_base // Codsworth
	{
		scope=2;
		displayName="[CMD] Ballistic Mask - Codsworth";
		hiddenSelectionsTextures[]={"Command_ReTextures\AOT\Data\Codsworth.paa"};
	}; 
	class Command_BallisticMask_Chase: Command_BallisticMask_base // Chase
	{
		scope=2;
		displayName="[CMD] Ballistic Mask - Chase";
		hiddenSelectionsTextures[]={"Command_ReTextures\AOT\Data\Chase.paa"};
	};
	class Command_BallisticMask_Potato: Command_BallisticMask_base // Potato
	{
		scope=2;
		displayName="[CMD] Ballistic Mask - Potato";
		hiddenSelectionsTextures[]={"Command_ReTextures\AOT\Data\Potato.paa"};
	};
	class Command_BallisticMask_Jonesy: Command_BallisticMask_base // Jonesy
	{
		scope=2;
		displayName="[CMD] Ballistic Mask - Jonesy";
		hiddenSelectionsTextures[]={"Command_ReTextures\AOT\Data\Jonesy.paa"};
	};
	class Command_BallisticMask_Unknown: Command_BallisticMask_base // Unknown
	{
		scope=2;
		displayName="[CMD] Ballistic Mask - Unknown";
		hiddenSelectionsTextures[]={"Command_ReTextures\AOT\Data\Unknown.paa"};
	};
	class Command_BallisticMask_Jules: Command_BallisticMask_base // Jules
	{
		scope=2;
		displayName="[CMD] Ballistic Mask - Jules";
		hiddenSelectionsTextures[]={"Command_ReTextures\AOT\Data\Jules.paa"};
	};
	class Command_BallisticMask_Outbreak: Command_BallisticMask_base // Outbreak
	{
		scope=2;
		displayName="[CMD] Ballistic Mask - Outbreak";
		hiddenSelectionsTextures[]={"Command_ReTextures\AOT\Data\Outbreak.paa"};
	};
	class Command_BallisticMask_Peasant: Command_BallisticMask_base // Peasant
	{
		scope=2;
		displayName="[CMD] Ballistic Mask - Peasant";
		hiddenSelectionsTextures[]={"Command_ReTextures\AOT\Data\Peasant.paa"};
	};
	class Command_BallisticMask_Andre: Command_BallisticMask_base // Andre
	{
		scope=2;
		displayName="[CMD] Ballistic Mask - Andre";
		hiddenSelectionsTextures[]={"Command_ReTextures\AOT\Data\Andre.paa"};
	};
	class Command_BallisticMask_Micky: Command_BallisticMask_base // Mickey Mouse
	{
		scope=2;
		displayName="[CMD] Ballistic Mask - Micky Mouse";
		hiddenSelectionsTextures[]={"Command_ReTextures\AOT\Data\Mickey.paa"};
	};
	class Command_BallisticMask_Pooh: Command_BallisticMask_base // Winnie the Pooh
	{
		scope=2;
		displayName="[CMD] Ballistic Mask - Winnie the Pooh";
		hiddenSelectionsTextures[]={"Command_ReTextures\AOT\Data\Pooh.paa"};
	};
	class Command_BallisticMask_Goofy: Command_BallisticMask_base // Mickey Mouse
	{
		scope=2;
		displayName="[CMD] Ballistic Mask - Goofy";
		hiddenSelectionsTextures[]={"Command_ReTextures\AOT\Data\Goofy.paa"};
	};
	class Command_BallisticMask_Duck: Command_BallisticMask_base // Donald Duck
	{
		scope=2;
		displayName="[CMD] Ballistic Mask - Donald Duck";
		hiddenSelectionsTextures[]={"Command_ReTextures\AOT\Data\Mickey.paa"};
	};
};