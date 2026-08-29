class CfgPatches
{
	class Command_Audio_Music
	{
		requiredVersion=1.00;
		requiredAddons[]={};
		units[]={};
		weapons[]={};
		addonRootClass="Command_Audio";
	};
};
class CfgMusic
{
	#include "\Command\Command_Audio\Music\_EndMusic.hpp"
	#include "\Command\Command_Audio\Music\AceCombat.hpp"
	#include "\Command\Command_Audio\Music\AceCombat_Brief.hpp"
	#include "\Command\Command_Audio\Music\CommandConquer_Generals.hpp"
	#include "\Command\Command_Audio\Music\CommandConquer_RedAlert.hpp"
	#include "\Command\Command_Audio\Music\CommandConquer_RenX.hpp"
	#include "\Command\Command_Audio\Music\CommandConquer_Tiberium.hpp"
	#include "\Command\Command_Audio\Music\HAWX.hpp"
	#include "\Command\Command_Audio\Music\SealTeam.hpp"
	#include "\Command\Command_Audio\Music\Command.hpp" // Existing Stuff from Commands' Pack
};
class CfgMusicClasses
{
	class _EndMusic
	{
		displayName="_EndMusic (Use this to stop any music playing!)";
	};
	class AceCombat
	{
		displayName="Ace Combat";
	};
	class AceCombat_Brief
	{
		displayName="Ace Combat Briefing";
	};
	class CommandConquer_Generals
	{
		displayName="Command & Conquer: Generals";
	};
	class CommandConquer_RedAlert
	{
		displayName="Command & Conquer: Red Alert";
	};
	class CommandConquer_RenX
	{
		displayName="Command & Conquer: Renegade X";
	};
	class CommandConquer_Tiberium
	{
		displayName="Command & Conquer: Tiberium Wars";
	};
	class HAWX
	{
		displayName="HAWX";
	};
	class SealTeam
	{
		displayName="Seal Team";
	};
	class Command
	{
		displayName="Command";
	};
};