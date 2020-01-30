// args: none
// return: AI groups index

private ["_groups", "_gis", "_index", "_x", "_groupsAI"];

_groups = groupMatrix select siPlayer;
_groupsAI = groupAiMatrix select siPlayer;
_index = 0;
_gis = [];
{
	if (_x in _groupsAI) then
	{
		_gis set [count _gis, _index]
	};
	_index = _index + 1;
} foreach _groups;

_gis