// args: [objects, type]
// return: none

private [ "_object", "_type", "_found", "_i", "_c", "_entry", "_objects" ];


_type = _this select 1;

_i = 0; _c = count(structuresServer); _found = false;

while "_i < _c && !_found" do
{
	_entry = structuresServer select _i;
	_objects = _entry select 0;
	if ( isNull (_objects select 0) ) then
	{
		_found = true;
	}
	else
	{
		_i = _i + 1;
	};
};
[_this select 0,_type,_i] exec "Server\StructuresServerAdd.sqs";