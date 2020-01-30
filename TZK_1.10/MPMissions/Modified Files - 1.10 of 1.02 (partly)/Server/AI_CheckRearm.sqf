// args: unit
// return: whether need rearm
private ["_unit", "_rearm", "_v", "_x", "_wpnPrim", "_wpnSec", "_rearmData", "_rearmMags", "_weapons"];

_unit = _this;

_rearm = false;

if (_unit == driver vehicle _unit) then
{
	_v = vehicle _unit;
	if (_unit == _v) then
	{
		_wpnPrim = primaryWeapon _unit;
		_wpnSec = secondaryWeapon _unit;
		if (_wpnPrim != "") then
		{
			if ((_unit ammo _wpnPrim) == 0) then { _rearm = true };
		};
		if (_wpnSec != "") then
		{
			if ((_unit ammo _wpnSec) == 0) then { _rearm = true };
		};
		// Do not check if soldier is out of Satchel or Mine.
	}
	else
	{
		_rearmData = _v call funcGetRearmData;
		_rearmMags = _rearmData select 1;
		if ((count _rearmMags) > 0) then
		{
			_weapons = weapons _v;
			{ if ((_v ammo _x) == 0) then { _rearm = true };  } foreach _weapons;
		};
		// Do not check if vehicle is out of a magazine, such as Sabot/Heat to Tank Gun.
	};
};
_rearm