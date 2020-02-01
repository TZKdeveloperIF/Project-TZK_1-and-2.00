// args: [object, type]
// return: none

private [ "_object", "_type", "_found", "_i", "_c", "_entry", "_objects" ];

_object = _this select 0;
_type = _this select 1;
_i = 0; _c = count(structuresServer); _found = false;


if (_type != -1) then
{
	while "_i < _c && !_found" do
	{
		_entry = structuresServer select _i;
		_objects = _entry select 0;
		if ( isNull (_objects select 0) ) then
		{
			_i=_i-1;
			_found=true;
		};
		_i=_i+1;
	};
	[_objects,_type,_i] exec "Server\StructuresServerAdd.sqs";
}
else
{
	while "_i < _c && !_found" do
	{
		_entry = structuresServer select _i;
		_objects = _entry select 0;
		_type = _entry select 1
		if ( _object in _objects ) then
		{
			_i=_i-1;
			_found=true;
		};
		_i=_i+1;
	};
	[_objects,_type,_i] exec "Server\StructuresServerRemove.sqs";
};
