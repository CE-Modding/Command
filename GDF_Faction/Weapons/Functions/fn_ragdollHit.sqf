
params ["_target", "_shooter", "_projectile", "_position", "_velocity", "_selection", "_ammo", "_vector", "_radius", "_surfaceType", "_isDirect"];

private _allowedAmmo = [
    "CMD_GDF_12Gauge_Slug",
    "CMD_GDF_408_Ball",
    "CMD_GDF_408_HV",
    "CMD_GDF_408_AP"
];

if (
    !((_ammo select 4) in _allowedAmmo) || 
(getText (configfile >> 'CfgVehicles' >> typeOf _target >> 'moves') != 'CfgMovesMaleSdr')) exitWith {};
[_target, [_shooter vectorModelToWorld [0,1000,100], _target selectionPosition (_selection select 0), false]] remoteExec ["addForce", _target];