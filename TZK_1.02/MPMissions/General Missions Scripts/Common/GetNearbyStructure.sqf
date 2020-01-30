// returns nearby structures in side
// arguments: [pos, distance, types, except, side]
// return: [ [struct, type, distance], ... ]

private ["_x", "_posOrigin", "_distMax", "_types", "_pos", "_except", "_structs", "_type", "_count", "_distance"];

_posOrigin = _this select 0;
_distMax = _this select 1;
_types = _this select 2;
_except = _this select 3;
_si = _this select 4;




_structs = [];

_type = 0;
_count = count structDefs;
while "_type < _count" do
{
	if ( ((count _types == 0) || (_type in _types)) ) then
	{
		{
			_pos = getPos _x;
			_distance = sqrt ( ((_pos select 0) - (_posOrigin select 0))^2 + ((_pos select 1) - (_posOrigin select 1))^2 );
			if (!(_x in _except) && alive _x && _distance < _distMax) then
			{
				_structs set [count _structs, [_x, _type, _distance]];
			}
		} foreach ((structMatrix select _si) select _type);
	};
	
	_type = _type + 1;
};

_structs