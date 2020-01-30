// args: unit
// return: whether need repair/heal
private ["_unit", "_heal", "_v", "_x"];

_unit = _this;

_heal = false;

if (_unit == driver vehicle _unit) then
{
	_v = vehicle _unit;
	if (_unit == _v) then
	{
		if ((damage _unit) > 0.2) then {_heal = true};
	}
	else
	{
		if ((damage _v) > 0.2) then {_heal = true};
		{ if ((damage _x) > 0.2) then { _heal = true } } foreach (crew _v);
	};
};
_heal