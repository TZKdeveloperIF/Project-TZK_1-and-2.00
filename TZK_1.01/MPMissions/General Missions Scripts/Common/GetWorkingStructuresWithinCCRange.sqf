// args: [si, structType] (e.g. [si0, stBarracks])
// return: [struct, struct, ...]

private ["_x", "_res", "_structs"];

_res = [];
_structs = (structMatrix select (_this select 0)) select (_this select 1);
// if (((upgMatrix select (_this select 0)) select upgCCdistance) == 2) then { _distMaxCC = distMaxCCUpgraded } else { _distMaxCC = distMaxCC };

{
	if (!(isNull _x) && (alive _x) && ( (([getPos _x, _this select 0, stComm] call funcGetClosestStructure) select 1) < distMaxCC )) then
	{
		_res = _res + [_x]
	};
} foreach _structs;

_structs = _structs - [objNull];
(structMatrix select (_this select 0)) set [_this select 1, _structs];

_res