class CfgPatches
{
	class Command_Audio_Music
	{
		requiredVersion=1.00;
		requiredAddons[]={};
		units[]={};
		weapons[]={};
		addonRootClass=Command_Audio;
	};
};
class CfgMusic
{
	#include "_EndMusic.hpp"
	#include "AceCombat.hpp"
	#include "AceCombat_Brief.hpp"
	#include "CommandConquer.hpp"
	#include "HAWX.hpp"
	#include "SealTeam.hpp"
	#include "Command.hpp" // Existing Stuff from Commands' Pack
};
class CfgMusicClasses
{
	class _EndMusic
	{
		displayName="Command : _EndMusic";
	};
	class AceCombat
	{
		displayName="Command : Ace Combat";
	};
	class AceCombat_Brief
	{
		displayName="Command : Ace Combat Briefing";
	};
	class CommandConquer
	{
		displayName="Command : Command & Conquer";
	};
	class HAWX
	{
		displayName="Command : HAWX";
	};
	class SealTeam
	{
		displayName="Command : Seal Team";
	};
	class Command
	{
		displayName="Command";
	};
};