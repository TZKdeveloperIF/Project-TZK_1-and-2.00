////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.05
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _OFP_

//ndefs=102
enum {
	manactstop,	//0
	manposweapon,	//1
	cpcommander,	//2
	manactturnr,	//3
	destructtent,	//4
	manposhandgunlying,	//5
	,	//6
	manactreloadmgun,	//7
	manposcombat,	//8
	manposhandgunstand,	//9
	manactthrowgrenade,	//10
	manposnoweapon,	//11
	manactwalklf,	//12
	manactwalkrf,	//13
	manactwalkl,	//14
	manactwalkr,	//15
	manactwalklb,	//16
	manactwalkrb,	//17
	manactwalkb,	//18
	manactslowf,	//19
	manactslowlf,	//20
	manactslowrf,	//21
	manactslowl,	//22
	manactslowr,	//23
	manactslowlb,	//24
	manactslowrb,	//25
	manactslowb,	//26
	manactfastf,	//27
	manactfastlf,	//28
	manactfastrf,	//29
	manactfastl,	//30
	manactfastr,	//31
	manactfastlb,	//32
	manactfastrb,	//33
	manactfastb,	//34
	manactdown,	//35
	manactup,	//36
	manactlying,	//37
	manactstand,	//38
	manactcombat,	//39
	manactcrouch,	//40
	manactcivil,	//41
	manactcivillying,	//42
	manactfirenotpossible,	//43
	manactdie,	//44
	manactweaponon,	//45
	manactweaponoff,	//46
	manactdefault,	//47
	manactjumpoff,	//48
	manactstrokefist,	//49
	manactstrokegun,	//50
	manactsitdown,	//51
	manactsalute,	//52
	manactbinocon,	//53
	manactbinocoff,	//54
	manactputdown,	//55
	manactmedic,	//56
	manacttreated,	//57
	manactladderondown,	//58
	manactladderonup,	//59
	manactladderoff,	//60
	manactladderofftop,	//61
	manactladderoffbottom,	//62
	manactgetincar,	//63
	manactgetoutcar,	//64
	manactgetintank,	//65
	manactgetouttank,	//66
	manacttakeflag,	//67
	manacthandgunon,	//68
	manactn,	//69
};
enum {
	manposdead,	//0
	unitinfotank,	//1
	destructengine,	//2
	destructtree,	//3
	manposlying,	//4
	unitinfohelicopter,	//5
	manposcrouch,	//6
	manposhandguncrouch,	//7
	manactreloadat,	//8
	manactreloadmortar,	//9
	manposstand,	//10
	manactwalkf,	//11
	manposbinoc,	//12
	manposbinocstand,	//13
};
enum {
	destructno,	//0
	cpgunner,	//1
	unitinfocar,	//2
	unitinfoship,	//3
	unitinfoairplane,	//4
	manactturnrrelaxed,	//5
	destructdefault,	//6
};
enum {
	unitinfosoldier,	//0
	manactstoprelaxed,	//1
	manposbinoclying,	//2
	cpcargo,	//3
	manactturnlrelaxed,	//4
	destructman,	//5
	manactreloadmagazine,	//6
};
enum {
	cpdriver,	//0
	destructbuilding,	//1
	manactturnl,	//2
	manposlyingnoweapon,	//3
};

//class config.bin {
class CfgExperience {
	access = 1;
	destroyUnit[] = {"unit1","unit2","unit3","unit4"};
	unit1[] = {2000,0};
	unit2[] = {200000,200};
	unit3[] = {500000,500};
	unit4[] = {1000000,1000};
	destroyEnemy = 1;
	destroyFriendly = -7;
	destroyCivilian = -2;
	destroyYourUnit = -0.2;
	renegadeLimit = -2000;
	playerKilled = 0;
	commandCompleted = 0;
	commandFailed = 0;
	followMe = 0;
	missionCompleted = 0;
	missionFailed = 0;
	ranks[] = {0,500,1500,2500,3500,5000,7500};
	courage[] = {0.2,0.35,0.55,0.65,0.7,0.8,0.9};
};
class CfgTextureToMaterial {
	class CarGlass {
		textures[] = {"data\jeep4x4_glass.paa","data\jeep_kab_sklo1.paa","data\jeep_kab_sklo2.paa","data\jepp4x4_glass.paa","data\jepp_kab_sklo1.paa","data\jepp_kab_sklo2.paa","data\scud_sklo.paa","data\scud_sklo2.paa","data\scud_sklo3.paa","data\scud_sklo4.paa"};
		material = "#SpecularGlass";
	};
	class AirborneGlass {
		textures[] = {"data\jeep_kab_sklo1.paa","data\uh60_kab_sklo2.paa","data\uh30_cargo_pilotdoors.paa","data\uh60_cargo_dvereokno.paa","data\uh60_gunner_okna.paa","data\ah-1_kabina_predokno.paa","data\ah-1_kabina_zadokno.paa","data\ah-1_kabina_topokno.paa"};
		material = "#SpecularGlass";
	};
	class Metal {
		textures[] = {"data\mutt_frontg.pac","data\mutt_kapotag.pac","data\mutt_sklog.pac","data\mutt_sideg.pac"};
		material = "#Metal";
	};
	class AirBorneMetal {
		textures[] = {"data\ah-1_1_pokus.pac","data\ah-1_2_pokus.pac","data\ah-1_opak_pokus.pac","data\ah-1_kabina_predo.paa","data\ah-1_kabina_topokno.paa","data\ah-1_kabina_zadokno.paa","data\cobra_rotor_top.pac","data\cobra_rotor_top.pac","data\cobra2_kridlo_predni.pac","data\cobra2_kanon_front_b.pac","data\cobra2_kulas_front.paa","data\cobra2_kanon_side.pac","data\cobra2_vejfuk.paa","data\cobra3_cumak.pac","data\ah-1_bottom1.pac","data\ah-1_bottom2.pac"};
		material = "#Metal";
	};
	class RifleMetal {
		textures[] = {"data\m16_pmp_1s.pac","data\m16_pmp_ph.pac","data\m16_pmp_lod.paa","data\m16_pmp_lod_gif.pac","data\m4_1.pac","data\m4_2.pac","data\m4_miridla.pac","data\xm177_1s.pac","data\xm177_ph.pac","data\xm177_details.pac"};
		material = "#RifleMetal";
	};
};
class CfgMaterials {
	class Water {
		ambient[] = {1,1,1,1};
		diffuse[] = {1,1,1,1};
		forcedDiffuse[] = {0,0,0,0};
		specular[] = {0.4,0.4,0.45,0};
		specularPower = 6;
		emmisive[] = {0,0,0,0};
	};
	class Terrain {
		ambient[] = {1,1,1,1};
		diffuse[] = {1,1,1,1};
		forcedDiffuse[] = {0,0,0,0};
		specular[] = {0.03,0.03,0.03,0};
		specularPower = 3;
		emmisive[] = {0,0,0,0};
	};
	class SpecularGlass {
		ambient[] = {1,1,1,1};
		diffuse[] = {1,1,1,1};
		forcedDiffuse[] = {0,0,0,0};
		specular[] = {0.8,0.8,0.8,0};
		specularPower = 5;
		emmisive[] = {0,0,0,0};
	};
	class Metal {
		ambient[] = {1,1,1,1};
		diffuse[] = {1,1,1,1};
		forcedDiffuse[] = {0,0,0,0};
		specular[] = {0.2,0.2,0.2,0};
		specularPower = 5;
		emmisive[] = {0,0,0,0};
	};
	class RifleMetal {
		ambient[] = {1,1,1,1};
		diffuse[] = {1,1,1,1};
		forcedDiffuse[] = {0,0,0,0};
		specular[] = {0.2,0.2,0.2,0};
		specularPower = 5;
		emmisive[] = {0,0,0,0};
	};
};
class CfgModels {
	class Default {
		sections[] = {};
		sectionsInherit = "";
	};
	class Head: Default {
		sections[] = {"osobnost","brejle"};
	};
	class Man: Default {
		sections[] = {"head injury","body injury","l arm injury","r arm injury","p arm injury","l leg injury","r leg injury","p leg injury","medic","hlava","krk","zasleh"};
		sectionsInherit = "Head";
	};
	class Vehicle: Default {
		sections[] = {"cislo","grupa","side","sektor","clan","podsvit pristroju","poskozeni","L svetlo","P svetlo","zasleh"};
	};
	class Tank: Vehicle {
		sectionsInherit = "Vehicle";
		sections[] = {"zadni svetlo","brzdove svetlo","pruh"};
	};
	class Car: Vehicle {
		sectionsInherit = "Vehicle";
		sections[] = {"ammo","sklo predni p","sklo predni l","zadni svetlo","brzdove svetlo"};
	};
	class Helicopter {
		sectionsInherit = "Vehicle";
		sections[] = {"sklo predni p","sklo predni l","velka vrtule staticka","velka vrtule blur","mala vrtule staticka","mala vrtule blur"};
	};
	class Weapon: Default {
		sections[] = {"zasleh"};
	};
	class hlavaw: Head {};
	class mc_vojakw2: Man {};
	class mc_vojakwo2: Man {};
	class mc_tankistaw2: Man {};
	class mc_pilotw2: Man {};
	class mc_sniperw2: Man {};
	class mc_saboteur: Man {};
	class mc_saboteurday: Man {};
	class mc_vojake2: Man {};
	class mc_vojakeo2: Man {};
	class mc_tankistae2: Man {};
	class mc_pilote2: Man {};
	class mc_snipere2: Man {};
	class mc_vojake2_guba: Man {};
	class angelina: Man {};
	class mc_specnas2: Man {};
	class mc_civil: Man {};
	class mc_civil2: Man {};
	class mc_civil3: Man {};
	class mc_vojakg2: Man {};
	class mc_vojakg3: Man {};
	class mc_vojakgo2: Man {};
	class mc_crewg: Man {};
	class mc_crewg2: Man {};
	class m16_proxy: Weapon {};
	class xm_177e2_proxy: Weapon {};
	class optika_m16: Weapon {};
	class m16_granatomet_proxy: Weapon {};
	class m60_mg_proxy: Weapon {};
	class optika_m60_mg: Weapon {};
	class m21_proxy: Weapon {};
	class optika_snpierw: Weapon {};
	class ak_74_su_proxy: Weapon {};
	class ak_74_granatomet_proxy: Weapon {};
	class pk_mg_proxy: Weapon {};
	class optika_pk: Weapon {};
	class ak_74_proxy: Weapon {};
	class optika_ak47: Weapon {};
	class ak_47_v58_proxy: Weapon {};
	class svd_dragunov_proxy: Weapon {};
	class optika_snpiere: Weapon {};
	class optika_night: Weapon {};
	class ak_47_granatomet_proxy: Weapon {};
	class ak_47_proxy: Weapon {};
	class kozlice: Weapon {};
	class optika_kozlice: Weapon {};
	class Steyr: Weapon {};
	class optika_steyr: Weapon {};
	class G36: Weapon {};
	class G36_optics: Weapon {};
	class XMS: Weapon {};
	class optika_XMS: Weapon {};
	class Bizon: Weapon {};
	class optika_Bizon: Weapon {};
	class 6g30: Weapon {};
	class t80: Tank {};
	class t72: Tank {};
	class t55: Tank {};
	class m1_abrams: Tank {};
	class m60: Tank {};
	class bmp: Tank {};
	class m113: Tank {};
	class m113_ambulance: Tank {};
	class bmp_ambu: Tank {};
	class zsu: Tank {};
	class truck5t: Car {};
	class truck5t2: Car {};
	class truck5trepair: Car {};
	class truck5tfuel: Car {};
	class ural: Car {};
	class uralrepair: Car {};
	class uralfuel: Car {};
	class v3s: Car {};
	class v3sfuel: Car {};
	class v3srepair: Car {};
	class jeep: Car {};
	class uaz: Car {};
	class guaz: Car {};
	class scud: Car {};
	class gjeep: Car {};
	class sguaz: Car {};
	class jeep_mg: Car {};
	class skodovka: Car {};
	class skodovka_blue: Car {};
	class skodovka_red: Car {};
	class skodovka_green: Car {};
	class traktor: Car {};
	class rapid: Car {};
	class rapid_y: Car {};
	class v3scivil: Car {};
	class m2_mg: Vehicle {};
	class uh_60: Helicopter {};
	class uh_60mg: Helicopter {};
	class ah1_cobra: Helicopter {};
	class mi24_hind: Helicopter {};
	class mi17_hip: Helicopter {};
	class a10: Vehicle {};
	class cessna182: Vehicle {
		sectionsInherit = "Vehicle";
		sections[] = {"vrtule staticka","vrtule blur"};
	};
	class Ship {
		sectionsInherit = "Vehicle";
		sections[] = {"zadni svetlo"};
	};
	class hrl: Ship {};
	class pbr: Ship {};
	class Flag: Default {
		sections[] = {"latka"};
	};
	class flag_vojak: Flag {};
	class flag_stozar: Flag {};
	class flag_alone: Flag {};
	class flag_alone_big: Flag {};
	class flag_auto: Flag {};
	class flag_plane: Flag {};
	class flag_plane_big: Flag {};
	class blok: Default {
		sections[] = {"papir"};
	};
	class trabant: Car {};
	class m163A1vulcan: Tank {};
	class su25: Vehicle {};
	class ch_47d: Helicopter {};
	class apac: Helicopter {};
	class hmmwv: Car {};
	class brmd: Car {};
	class brdm: Car {};
	class bmp2: Tank {};
	class kiowa: Helicopter {};
	class m2a2: Tank {};
};
class CfgVehicleActions {
	m113gunner = "M113Gunner";
	m113driver = "M113Driver";
	m113driverOut = "M113DriverOut";
	m113medic = "M113Medic";
	m113injured = "Nemocnej";
	m60driver = "M60Driver";
	m60gunner = "M60Gunner";
	m60commander = "M60Commander";
	m60driverOut = "M60DriverOut";
	m60commanderOut = "M60CommanderOut";
	m1A1driver = "M1A1Driver";
	m1A1gunner = "M1A1Gunner";
	m1A1commander = "M1A1Commander";
	m1A1driverOut = "M1A1DriverOut";
	m1A1commanderOut = "M1A1CommanderOut";
	bmpdriver = "BMPDriver";
	bmpgunner = "BMPGunner";
	bmpgunnerOut = "BMPGunnerOut";
	bmpcommander = "BMPCommander";
	bmpdriverOut = "BMPDriverOut";
	bmpcommanderOut = "BMPCommanderOut";
	t72driver = "T72Driver";
	t72gunner = "T72Gunner";
	t72gunnerOut = "T72GunnerOut";
	t72commander = "T72Commander";
	t72driverOut = "T72DriverOut";
	t72commanderOut = "T72CommanderOut";
	t80driver = "T72Driver";
	t80gunner = "T72Gunner";
	t80gunnerOut = "T80GunnerOut";
	t80commander = "T72Commander";
	t80driverOut = "T72DriverOut";
	t80commanderOut = "T80CommanderOut";
	t55driver = "T72Driver";
	t55gunner = "T55Gunner";
	t55gunnerOut = "T55Gunner";
	t55commander = "T55Commander";
	t55driverOut = "T55DriverOut";
	t55commanderOut = "T55CommanderOut";
	uh60pilot = "UH60Pilot";
	uh60gunner = "UH60Gunner";
	ah1pilot = "AH1Pilot";
	ah1gunner = "AH1Gunner";
	a10pilot = "A10Pilot";
	cessnaPilot = "cesnaPilot";
	cessnaCoPilot = "cesnaPilot";
	cessnaCargo = "cesnaCargo";
	mi17pilot = "Mi17Pilot";
	mi24pilot = "Mi24Pilot";
	mi24gunner = "Mi24Gunner";
	jeepDriver = "JeepDriver";
	jeepGunner = "JeepGunner";
	jeepCoDriver = "JeepCoDriver";
	jeepCoDriverBack = "JeepCoDriverBack";
	truck5TDriver = "5TDriver";
	truck5TCoDriver = "5TCoDriver";
	uralDriver = "uralDriver";
	uralCoDriver = "uralCoDriver";
	skodaDriver = "skodaDriver";
	skodaCoDriver = "skodaCoDriver";
	skodaCoDriverBack = "skodaCoDriverBack";
	pbrDriver = "pbrDriver";
	pbrGunner = "pbrGunner";
	hrlDriver = "pbrDriver";
	hrlGunner = "hrlGunner";
	m2gunner = "m2Gunner";
	ScudDriver = "ScudDriver";
	ScudCoDriver = "ScudCoDriver";
	v3sDriver = "v3sDriver";
	v3sCoDriver = "v3sCoDriver";
	cargo = "Cargo";
	UAZDriver = "UAZDriver";
	UAZCoDriver = "UAZCoDriver";
	ZSUDriver = "ZSUDriver";
	ZSUGunner = "ZSUGunner";
	ZSUGunnerOut = "ZSUGunnerOut";
	ZSUCommander = "ZSUCommander";
	ZSUCommanderOut = "ZSUCommanderOut";
	tractorDriver = "TractorDriver";
	shipCargo = "Cargo";
	shipDriver = "Cargo";
	para = "Para";
};
class CfgManActions {
	access = 3;
	Stop = "";
	StopRelaxed = "";
	TurnL = "";
	TurnR = "";
	TurnLRelaxed = "";
	TurnRRelaxed = "";
	ReloadMagazine = "";
	ReloadMGun = "";
	ReloadAT = "";
	ReloadMortar = "";
	ThrowGrenade = "";
	WalkF = "";
	WalkLF = "";
	WalkRF = "";
	WalkL = "";
	WalkR = "";
	WalkLB = "";
	WalkRB = "";
	WalkB = "";
	SlowF = "";
	SlowLF = "";
	SlowRF = "";
	SlowL = "";
	SlowR = "";
	SlowLB = "";
	SlowRB = "";
	SlowB = "";
	FastF = "";
	FastLF = "";
	FastRF = "";
	FastL = "";
	FastR = "";
	FastLB = "";
	FastRB = "";
	FastB = "";
	Down = "";
	Up = "";
	Lying = "";
	Stand = "";
	Combat = "";
	Crouch = "";
	Civil = "";
	CivilLying = "";
	FireNotPossible = "";
	Die = "";
	WeaponOn = "";
	WeaponOff = "";
	Default = "";
	JumpOff = "";
	StrokeFist = "";
	StrokeGun = "";
	SitDown = "";
	Salute = "";
	BinocOn = "";
	BinocOff = "";
	PutDown = "";
	Medic = "";
	Treated = "";
	LadderOnDown = "";
	LadderOnUp = "";
	LadderOff = "";
	LadderOffTop = "";
	LadderOffBottom = "";
	GetInCar = "";
	GetOutCar = "";
	GetInTank = "";
	GetOutTank = "";
	TakeFlag = "";
	HandGunOn = "";
};
class CfgMovesMC {
	access = 1;
	vehicleActions = "CfgVehicleActions";
	class Actions {
		class NoActionsAll: CfgManActions {
			access = 3;
		};
		class NoActions: NoActionsAll {
			ladderOnDown = "LadderDownStart";
			ladderOnUp = "LadderUpStart";
			turnSpeed = 1;
			upDegree = -1;
			limitFast = 5;
		};
		class DeadActions: NoActions {
			upDegree = "ManPosDead";
		};
		class CargoActions: NoActions {
			die = "DeadState";
		};
		class WeaponActions: NoActions {
			stop = "Weapon";
			upDegree = "ManPosWeapon";
			weaponOn = "Weapon";
			weaponOff = "Crouch";
			handGunOn = "HandGunCrouch";
			down = "Lying";
			up = "Combat";
			lying = "Lying";
			combat = "Combat";
			crouch = "Crouch";
			stand = "Stand";
			die = "WeaponDead";
			civilLying = "CivilLying";
			civil = "Civil";
			walkF = "WeaponWalkF";
			walkLF = "WeaponWalkLF";
			walkRF = "WeaponWalkRF";
			walkL = "WeaponWalkL";
			walkR = "WeaponWalkR";
			walkLB = "WeaponWalkLB";
			walkRB = "WeaponWalkRB";
			walkB = "WeaponWalkB";
			slowF = "WeaponWalkF";
			slowLF = "WeaponWalkLF";
			slowRF = "WeaponWalkRF";
			slowL = "WeaponWalkL";
			slowR = "WeaponWalkR";
			slowLB = "WeaponWalkLB";
			slowRB = "WeaponWalkRB";
			slowB = "WeaponWalkB";
			fastF = "WeaponWalkF";
			fastLF = "WeaponWalkLF";
			fastRF = "WeaponWalkRF";
			fastL = "WeaponWalkL";
			fastR = "WeaponWalkR";
			fastLB = "WeaponWalkLB";
			fastRB = "WeaponWalkRB";
			fastB = "WeaponWalkB";
			turnL = "WeaponTurnL";
			turnR = "WeaponTurnR";
			default = "Combat";
			getInCar = "CombatGetInCar";
			getOutCar = "Combat";
			getInTank = "CombatGetInTank";
			getOutTank = "CombatGetOutTank";
			reloadAT = "WeaponReloadAT";
		};
		class StandActions: NoActions {
			stop = "Stand";
			default = "Stand";
			walkF = "StandWalkF";
			walkLF = "StandWalkLF";
			walkRF = "StandWalkRF";
			walkL = "StandWalkL";
			walkR = "StandWalkR";
			walkLB = "StandWalkLB";
			walkRB = "StandWalkRB";
			walkB = "StandWalkB";
			slowF = "StandWalkF";
			slowLF = "StandWalkLF";
			slowRF = "StandWalkRF";
			slowL = "StandWalkL";
			slowR = "StandWalkR";
			slowLB = "StandWalkLB";
			slowRB = "StandWalkRB";
			slowB = "StandWalkB";
			fastF = "StandRunF";
			fastLF = "StandWalkLF";
			fastRF = "StandWalkRF";
			fastL = "StandWalkL";
			fastR = "StandWalkR";
			fastLB = "StandWalkLB";
			fastRB = "StandWalkRB";
			fastB = "StandWalkB";
			down = "Combat";
			up = "Combat";
			weaponOn = "Weapon";
			weaponOff = "Stand";
			binocOn = "BinocStand";
			binocOff = "Stand";
			handGunOn = "HandGunStand";
			strokeFist = "StandStrokeFist";
			strokeGun = "";
			lying = "Lying";
			combat = "Combat";
			crouch = "Crouch";
			stand = "Stand";
			civil = "Civil";
			civilLying = "CivilLying";
			fireNotPossible = "Combat";
			throwGrenade = "StandThrowGrenadeStart";
			turnL = "StandTurnL";
			turnR = "StandTurnR";
			getInCar = "StandGetInCar";
			getOutCar = "Stand";
			getInTank = "StandGetInTank";
			getOutTank = "StandGetOutTank";
			sitDown = "StandToSitDown";
			salute = "EffectStandSaluteStart";
			turnSpeed = 4;
			limitFast = 2.5;
			die = "StandDead";
			takeFlag = "StandToStandTakeFlag";
			putDown = "StandPutDown";
			upDegree = "ManPosStand";
		};
		class StandStillActions: StandActions {
			stop = "EffectStandStill";
			default = "EffectStandStill";
		};
		class StandStandActions: StandActions {
			stop = "EffectStand";
			default = "EffectStand";
		};
		class StandSaluteActions: StandActions {
			stop = "EffectStandSalute";
			default = "EffectStandSalute";
			salute = "";
		};
		class StandTalkActions: StandActions {
			stop = "EffectStandTalk";
			default = "EffectStandTalk";
		};
		class SitActions: StandActions {
			turnL = "";
			turnR = "";
			stop = "EffectStandSitDown";
			default = "EffectStandSitDown";
			strokeFist = "";
			sitDown = "";
			die = "SitDownDead";
		};
		class CivilActions: StandActions {
			stop = "Civil";
			default = "Civil";
			walkF = "CivilWalkF";
			walkLF = "CivilWalkLF";
			walkRF = "CivilWalkRF";
			walkL = "CivilWalkL";
			walkR = "CivilWalkR";
			walkLB = "CivilWalkLB";
			walkRB = "CivilWalkRB";
			walkB = "CivilWalkB";
			slowF = "CivilWalkF";
			slowLF = "CivilWalkLF";
			slowRF = "CivilWalkRF";
			slowL = "CivilWalkL";
			slowR = "CivilWalkR";
			slowLB = "CivilWalkLB";
			slowRB = "CivilWalkRB";
			slowB = "CivilWalkB";
			fastF = "CivilRunF";
			fastLF = "CivilRunLF";
			fastRF = "CivilRunRF";
			fastL = "CivilRunL";
			fastR = "CivilRunR";
			fastLB = "CivilRunLB";
			fastRB = "CivilRunRB";
			fastB = "CivilRunB";
			down = "CivilLying";
			up = "CivilLying";
			lying = "Lying";
			combat = "Combat";
			crouch = "Crouch";
			stand = "Stand";
			civil = "Civil";
			civilLying = "CivilLying";
			throwGrenade = "CivilThrowGrenadeStart";
			turnL = "CivilTurnL";
			turnR = "CivilTurnR";
			handGunOn = "HandGunStand";
			die = "CivilDead";
			getInCar = "CivilGetInCar";
			getOutCar = "Civil";
			getInTank = "CivilGetInTank";
			getOutTank = "CivilGetOutTank";
			takeFlag = "CivilToCivilTakeFlag";
			putDown = "CivilPutDown";
			limitFast = 4;
			upDegree = "ManPosNoWeapon";
		};
		class CombatActions: NoActions {
			stop = "Combat";
			default = "Combat";
			stopRelaxed = "CombatRelaxed";
			reloadMagazine = "CombatReloadMagazine";
			reloadMGun = "CombatReloadMGun";
			reloadMortar = "CombatReloadMortarStart";
			throwGrenade = "CombatThrowGrenadeStart";
			walkF = "CombatWalkF";
			walkLF = "CombatWalkLF";
			walkRF = "CombatWalkRF";
			walkL = "CombatWalkL";
			walkR = "CombatWalkR";
			walkLB = "CombatWalkLB";
			walkRB = "CombatWalkRB";
			walkB = "CombatWalkB";
			slowF = "CombatRunF";
			slowLF = "CombatRunLF";
			slowRF = "CombatRunRF";
			slowL = "CombatRunL";
			slowR = "CombatRunR";
			slowLB = "CombatRunLB";
			slowRB = "CombatRunRB";
			slowB = "CombatRunB";
			fastF = "CombatSprintF";
			fastLF = "CombatSprintLF";
			fastRF = "CombatSprintRF";
			fastL = "CombatRunL";
			fastR = "CombatRunR";
			fastLB = "CombatRunLB";
			fastRB = "CombatRunRB";
			fastB = "CombatRunB";
			down = "Lying";
			up = "Crouch";
			lying = "Lying";
			combat = "Combat";
			crouch = "Crouch";
			stand = "Stand";
			civil = "Civil";
			civilLying = "CivilLying";
			die = "CombatDead";
			weaponOn = "Weapon";
			binocOn = "Binoc";
			binocOff = "Combat";
			handGunOn = "HandGunStand";
			takeFlag = "CombatToTakeFlag";
			putDown = "PutDown";
			medic = "Medic";
			treated = "Treated";
			strokeFist = "";
			strokeGun = "CombatStrokeGun";
			turnL = "CombatTurnL";
			turnR = "CombatTurnR";
			turnLRelaxed = "CombatTurnLRelaxed";
			turnRRelaxed = "CombatTurnRRelaxed";
			getInCar = "CombatGetInCar";
			getOutCar = "Combat";
			getInTank = "CombatGetInTank";
			getOutTank = "CombatGetOutTank";
			turnSpeed = 8;
			limitFast = 5.5;
			upDegree = "ManPosCombat";
		};
		class CrouchActions: CombatActions {
			stop = "Crouch";
			default = "Crouch";
			up = "Combat";
			reloadMagazine = "CrouchReloadMagazine";
			reloadMG = "CrouchReloadMagazine";
			die = "CrouchDead";
			weaponOn = "Weapon";
			walkF = "CrouchWalkF";
			walkLF = "CrouchWalkLF";
			walkRF = "CrouchWalkRF";
			walkL = "CrouchWalkL";
			walkR = "CrouchWalkR";
			walkLB = "CrouchWalkLB";
			walkRB = "CrouchWalkRB";
			walkB = "CrouchWalkB";
			slowF = "CrouchRunF";
			slowLF = "CrouchRunLF";
			slowRF = "CrouchRunRF";
			slowL = "CrouchRunL";
			slowR = "CrouchRunR";
			slowLB = "CrouchRunLB";
			slowRB = "CrouchRunRB";
			slowB = "CrouchRunB";
			fastF = "CrouchSprintF";
			fastLF = "CrouchSprintLF";
			fastRF = "CrouchSprintRF";
			fastL = "CrouchRunL";
			fastR = "CrouchRunR";
			fastLB = "CrouchRunLB";
			fastRB = "CrouchRunRB";
			fastB = "CrouchRunB";
			binocOn = "BinocCrouch";
			binocOff = "Crouch";
			handGunOn = "HandGunCrouch";
			turnL = "CrouchTurnL";
			turnR = "CrouchTurnR";
		};
		class CombatStandingUpActions: CombatActions {
			die = "LyingDead";
		};
		class CombatRunFActions: CombatActions {
			throwGrenade = "CombatRunThrowGrenadeStart";
			die = "CombatRunDead";
		};
		class CombatRunBActions: CombatActions {
			die = "CombatRunBDead";
		};
		class CivilRunFActions: CivilActions {
			throwGrenade = "CivilRunThrowGrenadeStart";
		};
		class CrouchRunFActions: CrouchActions {
			throwGrenade = "CombatRunThrowGrenadeStart";
			die = "CombatRunDead";
		};
		class CrouchRunBActions: CrouchActions {
			die = "CombatRunBDead";
		};
		class CombatRelaxedActions: CombatActions {
			die = "CombatRelaxedDead";
		};
		class LyingActions: NoActions {
			stop = "Lying";
			default = "Lying";
			reloadMagazine = "LyingReloadMagazine";
			reloadMGun = "LyingReloadMagazine";
			throwGrenade = "LyingThrowGrenadeStart";
			walkF = "LyingCrawlF";
			walkLF = "LyingCrawlLF";
			walkRF = "LyingCrawlRF";
			walkL = "LyingCrawlL";
			walkR = "LyingCrawlR";
			walkLB = "LyingCrawlLB";
			walkRB = "LyingCrawlRB";
			walkB = "LyingCrawlB";
			slowF = "LyingCrawlF";
			slowLF = "LyingCrawlLF";
			slowRF = "LyingCrawlRF";
			slowL = "LyingCrawlL";
			slowR = "LyingCrawlR";
			slowLB = "LyingCrawlLB";
			slowRB = "LyingCrawlRB";
			slowB = "LyingCrawlB";
			fastF = "LyingFastCrawlF";
			fastLF = "LyingCrawlLF";
			fastRF = "LyingCrawlRF";
			fastL = "LyingCrawlL";
			fastR = "LyingCrawlR";
			fastLB = "LyingCrawlLB";
			fastRB = "LyingCrawlRB";
			fastB = "LyingCrawlB";
			down = "Combat";
			up = "Crouch";
			lying = "Lying";
			combat = "Combat";
			crouch = "Crouch";
			stand = "Stand";
			civil = "Civil";
			civilLying = "CivilLying";
			die = "LyingDead";
			weaponOn = "Weapon";
			weaponOff = "Lying";
			binocOn = "BinocLying";
			binocOff = "Lying";
			handGunOn = "HandGunLying";
			turnL = "LyingTurnL";
			turnR = "LyingTurnR";
			getInCar = "CombatGetInCar";
			getOutCar = "Combat";
			getInTank = "CombatGetInTank";
			getOutTank = "CombatGetOutTank";
			takeFlag = "CombatToTakeFlag";
			putDown = "PutDownLying";
			medic = "Medic";
			treated = "TreatedLying";
			turnSpeed = 3;
			upDegree = "ManPosLying";
		};
		class CrawlingActions: LyingActions {
			up = "CombatRunF";
			combat = "CombatRunF";
		};
		class CivilLyingActions: LyingActions {
			stop = "CivilLying";
			down = "Civil";
			up = "Civil";
			walkF = "CivilLyingCrawlF";
			walkLF = "CivilLyingCrawlLF";
			walkRF = "CivilLyingCrawlRF";
			walkL = "CivilLyingCrawlL";
			walkR = "CivilLyingCrawlR";
			walkLB = "CivilLyingCrawlLB";
			walkRB = "CivilLyingCrawlRB";
			walkB = "CivilLyingCrawlB";
			slowF = "CivilLyingCrawlF";
			slowLF = "CivilLyingCrawlLF";
			slowRF = "CivilLyingCrawlRF";
			slowL = "CivilLyingCrawlL";
			slowR = "CivilLyingCrawlR";
			slowLB = "CivilLyingCrawlLB";
			slowRB = "CivilLyingCrawlRB";
			slowB = "CivilLyingCrawlB";
			fastF = "CivilLyingFastCrawlF";
			fastLF = "CivilLyingCrawlLF";
			fastRF = "CivilLyingCrawlRF";
			fastL = "CivilLyingCrawlL";
			fastR = "CivilLyingCrawlR";
			fastLB = "CivilLyingCrawlLB";
			fastRB = "CivilLyingCrawlRB";
			fastB = "CivilLyingCrawlB";
			die = "CivilLyingDead";
			takeFlag = "CivilLyingToCivilLyingTakeFlag";
			putDown = "CivilLyingPutDown";
			upDegree = "ManPosLyingNoWeapon";
		};
		class CivilCrawlingActions: CivilLyingActions {};
		class LadderActions: NoActions {
			stop = "LadderStatic";
			default = "LadderStatic";
			upDegree = "ManPosStand";
			turnSpeed = 0.1;
			ladderOff = "LadderDownEnd";
			ladderOffTop = "LadderUpEnd";
			ladderOffBottom = "LadderDownEnd";
			down = "LadderDownLoop";
			up = "LadderUpLoop";
			die = "StandDead";
		};
		class LadderUpActions: LadderActions {
			ladderOff = "LadderUpEnd";
		};
		class LadderDownActions: LadderActions {
			ladderOff = "LadderDownEnd";
		};
		class CombatNoMoveActions: CombatActions {
			stopRelaxed = "";
			walkF = "";
			walkLF = "";
			walkRF = "";
			walkL = "";
			walkR = "";
			walkLB = "";
			walkRB = "";
			walkB = "";
			slowF = "";
			slowLF = "";
			slowRF = "";
			slowL = "";
			slowR = "";
			slowLB = "";
			slowRB = "";
			slowB = "";
			fastF = "";
			fastLF = "";
			fastRF = "";
			fastL = "";
			fastR = "";
			fastLB = "";
			fastRB = "";
			fastB = "";
			turnL = "";
			turnR = "";
			turnLRelaxed = "";
			turnRRelaxed = "";
			turnSpeed = 2;
		};
		class PutDownActions: CombatActions {
			stop = "PutDown";
			default = "PutDown";
			down = "Lying";
			up = "Combat";
			turnL = "";
			turnR = "";
			turnLRelaxed = "";
			turnRRelaxed = "";
			putDownEnd = "Combat";
			fireNotPossible = "Combat";
		};
		class TakeFlagActions: CombatActions {
			stop = "Combat";
			default = "Combat";
			down = "Lying";
			up = "Combat";
			turnL = "";
			turnR = "";
			turnLRelaxed = "";
			turnRRelaxed = "";
			putDownEnd = "Combat";
			fireNotPossible = "Combat";
		};
		class MedicActions: CombatActions {
			stop = "Medic";
			default = "Medic";
			down = "Lying";
			up = "Combat";
			turnL = "";
			turnR = "";
			turnLRelaxed = "";
			turnRRelaxed = "";
			putDownEnd = "Combat";
			fireNotPossible = "Combat";
		};
		class TreatedActions: CombatActions {
			stop = "Treated";
			default = "Treated";
			down = "Lying";
			up = "Combat";
			turnL = "";
			turnR = "";
			turnLRelaxed = "";
			turnRRelaxed = "";
			putDownEnd = "Combat";
			fireNotPossible = "Combat";
		};
		class StandPutDownActions: StandActions {
			stop = "StandPutDown";
			default = "StandPutDown";
			down = "Stand";
			up = "Stand";
			turnL = "";
			turnR = "";
			turnLRelaxed = "";
			turnRRelaxed = "";
			putDownEnd = "Stand";
			fireNotPossible = "Stand";
		};
		class StandTakeFlagActions: StandActions {
			stop = "Stand";
			default = "Stand";
			down = "Stand";
			up = "Stand";
			turnL = "";
			turnR = "";
			turnLRelaxed = "";
			turnRRelaxed = "";
			putDownEnd = "Stand";
			fireNotPossible = "Stand";
		};
		class CivilPutDownActions: CivilActions {
			stop = "CivilPutDown";
			default = "CivilPutDown";
			down = "CivilLying";
			up = "Civil";
			turnL = "";
			turnR = "";
			turnLRelaxed = "";
			turnRRelaxed = "";
			putDownEnd = "Civil";
			fireNotPossible = "Civil";
		};
		class CivilTakeFlagActions: CivilActions {
			stop = "Civil";
			default = "Civil";
			down = "CivilLying";
			up = "Civil";
			turnL = "";
			turnR = "";
			turnLRelaxed = "";
			turnRRelaxed = "";
			putDownEnd = "Civil";
			fireNotPossible = "Civil";
		};
		class PutDownLyingActions: LyingActions {
			stop = "PutDownLying";
			default = "PutDownLying";
			down = "Lying";
			up = "Lying";
			turnL = "";
			turnR = "";
			turnLRelaxed = "";
			turnRRelaxed = "";
			putDownEnd = "Lying";
			fireNotPossible = "Lying";
		};
		class TreatedLyingActions: LyingActions {
			stop = "TreatedLying";
			default = "TreatedLying";
			down = "Lying";
			up = "Lying";
			turnL = "";
			turnR = "";
			turnLRelaxed = "";
			turnRRelaxed = "";
			putDownEnd = "Lying";
			fireNotPossible = "Lying";
		};
		class CivilLyingPutDownActions: CivilLyingActions {
			stop = "CivilLyingPutDown";
			default = "CivilLyingPutDown";
			down = "CivilLying";
			up = "CivilLying";
			turnL = "";
			turnR = "";
			turnLRelaxed = "";
			turnRRelaxed = "";
			putDownEnd = "CivilLying";
			fireNotPossible = "CivilLying";
		};
		class CivilLyingTakeFlagActions: CivilLyingActions {
			stop = "CivilLying";
			default = "CivilLying";
			down = "CivilLying";
			up = "CivilLying";
			turnL = "";
			turnR = "";
			turnLRelaxed = "";
			turnRRelaxed = "";
			putDownEnd = "CivilLying";
			fireNotPossible = "CivilLying";
		};
		class BinocActions: CombatNoMoveActions {
			stop = "Binoc";
			default = "Binoc";
			binocOff = "Combat";
			upDegree = "ManPosBinoc";
		};
		class BinocLyingActions: LyingActions {
			stop = "BinocLying";
			default = "BinocLying";
			binocOff = "Lying";
			walkF = "";
			walkLF = "";
			walkRF = "";
			walkL = "";
			walkR = "";
			walkLB = "";
			walkRB = "";
			walkB = "";
			slowF = "";
			slowLF = "";
			slowRF = "";
			slowL = "";
			slowR = "";
			slowLB = "";
			slowRB = "";
			slowB = "";
			fastF = "";
			fastLF = "";
			fastRF = "";
			fastL = "";
			fastR = "";
			fastLB = "";
			fastRB = "";
			fastB = "";
			turnL = "";
			turnR = "";
			turnLRelaxed = "";
			turnRRelaxed = "";
			upDegree = "ManPosBinocLying";
			turnSpeed = 1;
		};
		class BinocStandActions: StandActions {
			stop = "BinocStand";
			default = "BinocStand";
			binocOff = "Stand";
			walkF = "";
			walkLF = "";
			walkRF = "";
			walkL = "";
			walkR = "";
			walkLB = "";
			walkRB = "";
			walkB = "";
			slowF = "";
			slowLF = "";
			slowRF = "";
			slowL = "";
			slowR = "";
			slowLB = "";
			slowRB = "";
			slowB = "";
			fastF = "";
			fastLF = "";
			fastRF = "";
			fastL = "";
			fastR = "";
			fastLB = "";
			fastRB = "";
			fastB = "";
			turnL = "";
			turnR = "";
			turnLRelaxed = "";
			turnRRelaxed = "";
			upDegree = "ManPosBinocStand";
			turnSpeed = 2;
		};
		class BinocCrouchActions: CrouchActions {
			stop = "BinocCrouch";
			default = "BinocCrouch";
			binocOff = "Crouch";
			walkF = "";
			walkLF = "";
			walkRF = "";
			walkL = "";
			walkR = "";
			walkLB = "";
			walkRB = "";
			walkB = "";
			slowF = "";
			slowLF = "";
			slowRF = "";
			slowL = "";
			slowR = "";
			slowLB = "";
			slowRB = "";
			slowB = "";
			fastF = "";
			fastLF = "";
			fastRF = "";
			fastL = "";
			fastR = "";
			fastLB = "";
			fastRB = "";
			fastB = "";
			turnL = "";
			turnR = "";
			turnLRelaxed = "";
			turnRRelaxed = "";
			upDegree = "ManPosBinoc";
			turnSpeed = 2;
		};
	};
	class BlendAnims {
		aimingDefault[] = {"hlava",1,"krk",1,"zbran",1,"roura",1,"lrameno",1,"prameno",1,"lbiceps",1,"lloket",1,"lruka",1,"pbiceps",1,"ploket",1,"pruka",1,"hrudnik",0.9,"zebra",0.5,"bricho",0.2};
		legsDefault[] = {"lprsty",1,"pprsty",1,"lchodidlo",1,"pchodidlo",1,"lholen",0.95,"pholen",0.95,"lstehno",0.9,"pstehno",0.9,"lzadek",0.5,"pzadek",0.5};
		headDefault[] = {"hlava",1,"krk",0.5};
		aimingLying[] = {"hlava",1,"krk",0.9,"lrameno",0.5,"prameno",0.5,"hrudnik",0.8,"zebra",0.5};
		aimingNo[] = {};
		legsNo[] = {};
		headNo[] = {};
	};
	class Default {
		access = 3;
		actions = "StandActions";
		file = "";
		looped = 1;
		speed = 0.5;
		disableWeapons = 0;
		enableOptics = 1;
		disableWeaponsLong = 0;
		showWeaponAim = 1;
		enableMissile = 0;
		enableBinocular = 0;
		showItemInHand = 0;
		showItemInRightHand = 0;
		showHandGun = 0;
		onLandBeg = 0;
		onLandEnd = 0;
		onLadder = 0;
		duty = -0.5;
		visibleSize = 1;
		aimPrecision = 1;
		recoilSuffix = "";
		relSpeedMin = 1.0;
		relSpeedMax = 1.0;
		soundEnabled = 1;
		soundOverride = "";
		soundEdge1 = 0.5;
		soundEdge2 = 1;
		terminal = 0;
		limitGunMovement = 1;
		variantsPlayer[] = {};
		variantsAI[] = {""};
		equivalentTo = "";
		connectAs = "";
		variantAfter[] = {5,10,20};
		connectFrom[] = {};
		connectTo[] = {};
		interpolateWith[] = {};
		interpolateTo[] = {};
		interpolateFrom[] = {};
		aiming = "aimingDefault";
		legs = "legsDefault";
		head = "headDefault";
		interpolationSpeed = 6;
		interpolationRestart = 0;
		preload = 0;
	};
	class StandBase: Default {
		limitGunMovement = 0;
		aiming = "aimingNo";
		disableWeapons = 1;
		disableWeaponsLong = 1;
	};
	class LadderBase: StandBase {
		actions = "LadderActions";
		aiming = "aimingNo";
		legs = "legsNo";
		onLadder = 1;
		disableWeapons = 1;
	};
	class LadderUpBase: LadderBase {
		actions = "LadderUpActions";
	};
	class LadderDownBase: LadderBase {
		actions = "LadderDownActions";
	};
	class DefaultDie: Default {
		limitGunMovement = 0;
		aiming = "aimingNo";
		legs = "legsNo";
		head = "headNo";
		disableWeapons = 1;
		interpolationRestart = 1;
		soundOverride = "fallbody";
		soundEdge1 = 0.45;
		soundEdge2 = 0.45;
	};
	class States {
		class DeadState: Default {
			actions = "DeadActions";
			file = "bezsmrt2.rtm";
			speed = 1e+010;
			looped = 1;
			onLandBeg = 1;
			onLandEnd = 1;
			soundEnabled = 0;
			terminal = 1;
		};
		class Stand: StandBase {
			actions = "StandActions";
			file = "bezstanistat.rtm";
			speed = 1e+010;
			looped = 1;
			soundEnabled = 0;
			variantAfter[] = {1,3,6};
			variantsAI[] = {"StandVar2",0.7,"Stand",0.3};
			equivalentTo = "Stand";
			interpolationSpeed = 2;
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
		};
		class StandVar2: Stand {
			file = "bezstanistill.rtm";
			speed = -7.8;
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
		};
		class StandWalkF: StandBase {
			actions = "StandActions";
			file = "chuzeBez0l.rtm";
			speed = -1.2;
			looped = 1;
			duty = -0.7;
			relSpeedMin = 0.7;
			relSpeedMax = 1.0;
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
		};
		class StandWalkLF: StandWalkF {
			file = "chuzebez-45L.rtm";
			speed = -1.53;
			looped = 1;
		};
		class StandWalkRF: StandWalkF {
			file = "chuzebez45L.rtm";
			speed = -1.53;
			looped = 1;
		};
		class StandWalkL: StandWalkF {
			file = "chuzebez-90L.rtm";
			speed = -1.53;
			looped = 1;
		};
		class StandWalkR: StandWalkF {
			file = "chuzebez90L.rtm";
			speed = -1.53;
			looped = 1;
		};
		class StandWalkLB: StandWalkF {
			file = "chuzebez-135l.rtm";
			speed = -1.53;
			looped = 1;
		};
		class StandWalkRB: StandWalkF {
			file = "chuzebez135l.rtm";
			speed = -1.53;
			looped = 1;
		};
		class StandWalkB: StandWalkF {
			file = "chuzebez180l.rtm";
			speed = -1.53;
			looped = 1;
		};
		class StandRunF: StandWalkF {
			file = "bezbeh.rtm";
			speed = -0.8;
			duty = -0.5;
			relSpeedMin = 0.7;
			relSpeedMax = 1.0;
		};
		class StandToCombat: Default {
			actions = "CombatActions";
			file = "stanidostanis.rtm";
			speed = -1.8;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class CombatToStand: Default {
			actions = "StandActions";
			file = "sstanidostani.rtm";
			speed = -1.5;
			looped = 0;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			soundEnabled = 0;
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
		};
		class CombatToLying: Default {
			actions = "LyingActions";
			file = "stanisdolehu.rtm";
			speed = -1.5;
			looped = 0;
			onLandEnd = 1;
			enableOptics = 0;
			interpolateTo[] = {"LyingDying",1};
			soundEnabled = 1;
			soundOverride = "laydown";
			soundEdge1 = 0.1;
			soundEdge2 = 0.1;
		};
		class CombatRunFToLying: Default {
			actions = "LyingActions";
			file = "behleh.rtm";
			speed = -1.5;
			looped = 0;
			onLandEnd = 1;
			disableWeapons = 1;
			soundEnabled = 1;
			interpolateTo[] = {"LyingDying",1};
			soundOverride = "laydown";
			soundEdge1 = 0.1;
			soundEdge2 = 0.1;
		};
		class LyingToCombat: Default {
			actions = "CombatStandingUpActions";
			file = "lehdostanis.rtm";
			speed = -2;
			looped = 0;
			onLandBeg = 1;
			enableOptics = 0;
			interpolateTo[] = {"LyingDying",1};
			soundEnabled = 1;
			soundOverride = "standup";
			soundEdge1 = 0.01;
			soundEdge2 = 0.01;
		};
		class LyingToCombatRun: Default {
			actions = "CombatStandingUpActions";
			file = "lehbeh.rtm";
			speed = -1.0;
			looped = 0;
			onLandBeg = 1;
			disableWeapons = 1;
			soundEnabled = 1;
			interpolateTo[] = {"LyingDying",1};
			soundOverride = "standup";
			soundEdge1 = 0;
			soundEdge2 = 0;
		};
		class Combat: Default {
			actions = "CombatActions";
			preload = 1;
			file = "sstanistat.rtm";
			speed = 1e+010;
			looped = 1;
			soundEnabled = 0;
			duty = -1;
			variantsPlayer[] = {"CombatStillPlayer",0.5,"Combat"};
			variantsAI[] = {"CombatStillPlayer",0.3,"CombatStillV1",0.5,"Combat"};
		};
		class CombatRelaxed: Combat {
			actions = "CombatRelaxedActions";
			file = "savarestanistat.rtm";
			speed = 1e+010;
			looped = 1;
			disableWeapons = 0;
			variantsAI[] = {"CombatRelaxedStill",0.8,"CombatRelaxed"};
			interpolateTo[] = {"CombatRelaxedDying",0.1,"CombatRelaxedDyingVer2",0.1};
		};
		class CombatStillV1: Combat {
			file = "sstani.rtm";
			speed = -6.8;
			looped = 1;
			equivalentTo = "Combat";
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class CombatStillPlayer: Combat {
			file = "sstaniSoft.rtm";
			speed = -6.8;
			looped = 1;
			equivalentTo = "Combat";
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class CombatRelaxedStill: Combat {
			actions = "CombatRelaxedActions";
			file = "savarestani.rtm";
			speed = -5;
			looped = 1;
			disableWeapons = 0;
			equivalentTo = "CombatRelaxed";
		};
		class CombatReloadMagazine: Default {
			preload = 1;
			actions = "CombatActions";
			file = "snabij.rtm";
			speed = "- 2.4";
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class CombatToBinoc: Default {
			actions = "CombatActions";
			file = "sdalek.rtm";
			speed = -1.0;
			looped = 0;
			disableWeapons = 1;
			showItemInHand = 1;
			soundEnabled = 0;
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class Binoc: Default {
			actions = "BinocActions";
			file = "sdalekstat.rtm";
			speed = 1e+010;
			looped = 1;
			disableWeapons = 0;
			showItemInHand = 1;
			soundEnabled = 0;
			enableBinocular = 1;
			head = "headNo";
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class BinocToCombat: Default {
			actions = "CombatActions";
			file = "sdalek2.rtm";
			speed = -1.0;
			looped = 0;
			disableWeapons = 1;
			showItemInHand = 1;
			soundEnabled = 0;
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class Crouch: Combat {
			preload = 1;
			actions = "CrouchActions";
			file = "klek.rtm";
			speed = 1e+010;
			variantsPlayer[] = {};
			variantsAI[] = {};
			visibleSize = 0.6;
			aimPrecision = 0.5;
			recoilSuffix = "halffixed";
		};
		class CrouchIM: Combat {
			actions = "CrouchActions";
			speed = 1e+010;
			variantsPlayer[] = {};
			variantsAI[] = {};
		};
		class CrouchToCombat: Default {
			preload = 1;
			actions = "CombatActions";
			file = "klekdostani.rtm";
			speed = -0.4;
			looped = 0;
			soundEnabled = 0;
			enableOptics = 0;
			connectFrom[] = {"Crouch",0.5};
			connectTo[] = {"Combat",0.5};
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class CrouchToCrouchSprintF: Default {
			preload = 1;
			actions = "CrouchRunFActions";
			file = "klekbeh.rtm";
			speed = -0.4;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"Crouch",0.4};
			enableOptics = 0;
			connectTo[] = {"CrouchSprintF",0.4};
			interpolateTo[] = {"Crouch",1};
		};
		class CombatToCrouch: Default {
			preload = 1;
			actions = "CrouchActions";
			file = "sstanidoklek.rtm";
			speed = -0.4;
			looped = 0;
			soundEnabled = 0;
			enableOptics = 0;
			connectFrom[] = {"Combat",0.5};
			connectTo[] = {"Crouch",0.5};
			interpolateTo[] = {"CrouchDying",0.1};
		};
		class CrouchToLying: Default {
			preload = 1;
			actions = "LyingActions";
			file = "klekleh.rtm";
			speed = -1;
			looped = 0;
			connectFrom[] = {"Crouch",1};
			connectTo[] = {"Lying",1};
			soundEnabled = 1;
			enableOptics = 0;
			soundOverride = "laydown";
			soundEdge1 = 0.1;
			soundEdge2 = 0.1;
			onLandEnd = 1;
			interpolateTo[] = {"LyingDying",0.1};
		};
		class LyingToCrouch: Default {
			preload = 1;
			actions = "CrouchActions";
			file = "lehklek.rtm";
			speed = -1;
			looped = 0;
			connectFrom[] = {"Lying",1};
			connectTo[] = {"Crouch",1};
			soundEnabled = 1;
			enableOptics = 0;
			soundOverride = "standup";
			soundEdge1 = 0.01;
			soundEdge2 = 0.01;
			onLandBeg = 1;
			interpolateTo[] = {"CrouchDying",0.1};
		};
		class CrouchReloadMagazine: Default {
			preload = 1;
			actions = "CrouchActions";
			file = "kleknabij.rtm";
			speed = "- 2.4";
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			visibleSize = 0.6;
			aimPrecision = 0.5;
			recoilSuffix = "halffixed";
			connectFrom[] = {"Crouch",1};
			connectTo[] = {"Crouch",1};
			interpolateTo[] = {"CrouchDying",0.1};
		};
		class CrouchDying: DefaultDie {
			actions = "NoActions";
			file = "kleksmrt.rtm";
			speed = -1.6;
			looped = 0;
			onLandEnd = 1;
			connectFrom[] = {"Crouch",1};
			connectTo[] = {"CrouchDead",1};
		};
		class CrouchDead: CrouchDying {
			actions = "DeadActions";
			file = "kleksmrt2.rtm";
			speed = 1e+010;
			looped = 1;
			onLandBeg = 1;
			onLandEnd = 1;
			soundEnabled = 0;
			terminal = 1;
			connectFrom[] = {};
			interpolateFrom[] = {};
			connectTo[] = {"DeadState",10};
		};
		class CrouchToWeapon: Default {
			actions = "WeaponActions";
			file = "klekdoAT.rtm";
			speed = -2.0;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"Crouch",1};
			connectTo[] = {"Weapon",1};
			interpolateTo[] = {"WeaponDying",0.1,"WeaponDyingVer2",0.1};
		};
		class WeaponToCrouch: Default {
			actions = "CrouchActions";
			file = "atdoklek.rtm";
			speed = -2.0;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"Weapon",1.2};
			connectTo[] = {"Crouch",1.2};
			interpolateTo[] = {"CrouchDying",0.1};
		};
		class LyingToBinocLying: Default {
			actions = "LyingActions";
			file = "plazenidalek.rtm";
			speed = -2.0;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			showItemInHand = 1;
			onLandBeg = 1;
			onLandEnd = 1;
			interpolateTo[] = {"LyingDying",0.1};
		};
		class BinocLying: Default {
			actions = "BinocLyingActions";
			file = "plazenidalekstat.rtm";
			speed = 1e+010;
			looped = 1;
			disableWeapons = 0;
			showItemInHand = 1;
			soundEnabled = 0;
			enableBinocular = 1;
			onLandBeg = 1;
			onLandEnd = 1;
			duty = -1;
			interpolateTo[] = {"LyingDying",0.1};
		};
		class BinocLyingToLying: Default {
			actions = "LyingActions";
			file = "plazenidalek2.rtm";
			speed = -2.0;
			looped = 0;
			disableWeapons = 1;
			showItemInHand = 1;
			soundEnabled = 0;
			onLandBeg = 1;
			onLandEnd = 1;
			interpolateTo[] = {"LyingDying",0.1};
		};
		class StandToBinocStand: Default {
			actions = "StandActions";
			file = "bezdalek.rtm";
			speed = -1.0;
			looped = 0;
			disableWeapons = 1;
			showItemInHand = 1;
			soundEnabled = 0;
			connectFrom[] = {"Stand",2};
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
		};
		class BinocStand: Default {
			actions = "BinocStandActions";
			file = "bezdalekstat.rtm";
			speed = 1e+010;
			looped = 1;
			disableWeapons = 0;
			showItemInHand = 1;
			soundEnabled = 0;
			enableBinocular = 1;
			connectFrom[] = {"StandToBinocStand",1};
			connectTo[] = {"BinocStandToStand",1};
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
		};
		class BinocStandToStand: Default {
			actions = "StandActions";
			file = "bezdalek2.rtm";
			speed = -1.0;
			looped = 0;
			disableWeapons = 1;
			showItemInHand = 1;
			soundEnabled = 0;
			connectTo[] = {"Stand",2};
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
		};
		class StandThrowGrenadeStart: Default {
			actions = "StandActions";
			file = "bezgranat1.rtm";
			speed = -1.4;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			duty = 0.6;
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
		};
		class StandThrowGrenadeEnd: Default {
			actions = "StandActions";
			file = "bezgranat2.rtm";
			speed = -0.97;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			duty = 0.6;
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
		};
		class CombatToTakeFlag: Default {
			actions = "CombatActions";
			file = "spoloz.rtm";
			speed = -0.7;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"Combat",1};
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class TakeFlag: Default {
			actions = "TakeFlagActions";
			file = "spolozstat.rtm";
			speed = -2.5;
			looped = 1;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			soundEnabled = 0;
			aiming = "aimingNo";
			connectFrom[] = {"CombatToTakeFlag",2};
			connectTo[] = {"TakeFlagToCombat",2};
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class TakeFlagToCombat: Default {
			actions = "CombatActions";
			file = "spoloz2.rtm";
			speed = -1.0;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectTo[] = {"Combat",1};
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class CombatToPutDown: Default {
			actions = "CombatActions";
			file = "spoloz.rtm";
			speed = -0.7;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"Combat",1};
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class PutDown: Default {
			actions = "PutDownActions";
			file = "spolozstat.rtm";
			speed = 1e+010;
			looped = 1;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			soundEnabled = 0;
			aiming = "aimingNo";
			connectFrom[] = {"CombatToPutDown",2};
			connectTo[] = {"PutDownToCombat",2};
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class PutDownToCombat: Default {
			actions = "CombatActions";
			file = "spoloz2.rtm";
			speed = -1.0;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectTo[] = {"Combat",1};
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class CombatToMedic: Default {
			actions = "CombatActions";
			file = "smedicstart.rtm";
			speed = -1;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"Combat",1};
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class Medic: Default {
			actions = "MedicActions";
			file = "smedicloop.rtm";
			speed = -3;
			looped = 0;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			soundEnabled = 0;
			aiming = "aimingNo";
			connectFrom[] = {"CombatToMedic",2};
			connectTo[] = {"MedicToCombat",2};
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class MedicToCombat: Default {
			actions = "CombatActions";
			file = "smedicend.rtm";
			speed = -1.0;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectTo[] = {"Combat",1};
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class CombatToTreated: Default {
			actions = "CombatActions";
			file = "sosetrenstart.rtm";
			speed = -5;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"Combat",1};
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class Treated: Default {
			actions = "TreatedActions";
			file = "sosetrenloop.rtm";
			speed = -3;
			looped = 0;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			soundEnabled = 0;
			aiming = "aimingNo";
			connectFrom[] = {"CombatToTreated",2};
			connectTo[] = {"TreatedToCombat",2};
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class TreatedToCombat: Default {
			actions = "CombatActions";
			file = "sosetrenend.rtm";
			speed = -1.0;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectTo[] = {"Combat",1};
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class StandToStandTakeFlag: Default {
			actions = "StandActions";
			file = "bezstanipoloz1.rtm";
			speed = -0.7;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"Stand",1};
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
		};
		class StandTakeFlag: Default {
			actions = "StandTakeFlagActions";
			file = "bezstanipolozstat.rtm";
			speed = -2.5;
			looped = 1;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			soundEnabled = 0;
			aiming = "aimingNo";
			connectFrom[] = {"StandToStandTakeFlag",2};
			connectTo[] = {"StandTakeFlagToStand",2};
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
		};
		class StandTakeFlagToStand: Default {
			actions = "StandActions";
			file = "bezstanipoloz2.rtm";
			speed = -1.0;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectTo[] = {"Stand",1};
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
		};
		class StandToStandPutDown: Default {
			actions = "StandActions";
			file = "bezstanipoloz1.rtm";
			speed = -0.7;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"Stand",1};
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
		};
		class StandPutDown: Default {
			actions = "StandPutDownActions";
			file = "bezstanipolozstat.rtm";
			speed = 1e+010;
			looped = 1;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			soundEnabled = 0;
			aiming = "aimingNo";
			connectFrom[] = {"StandToStandPutDown",2};
			connectTo[] = {"StandPutDownToStand",2};
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
		};
		class StandPutDownToStand: Default {
			actions = "StandActions";
			file = "bezstanipoloz2.rtm";
			speed = -1.0;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectTo[] = {"Stand",1};
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
		};
		class CivilToCivilTakeFlag: Default {
			actions = "CivilActions";
			file = "civilstanipoloz1.rtm";
			speed = -0.7;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"Civil",1};
			interpolateTo[] = {"CivilDying",0.1,"CivilDyingVer2",0.1};
		};
		class CivilTakeFlag: Default {
			actions = "CivilTakeFlagActions";
			file = "civilstanipolozstat.rtm";
			speed = -2.5;
			looped = 1;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			soundEnabled = 0;
			aiming = "aimingNo";
			connectFrom[] = {"CivilToCivilTakeFlag",2};
			connectTo[] = {"CivilTakeFlagToCivil",2};
			interpolateTo[] = {"CivilDying",0.1,"CivilDyingVer2",0.1};
		};
		class CivilTakeFlagToCivil: Default {
			actions = "CivilActions";
			file = "civilstanipoloz2.rtm";
			speed = -1.0;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectTo[] = {"Civil",1};
			interpolateTo[] = {"CivilDying",0.1,"CivilDyingVer2",0.1};
		};
		class CivilToCivilPutDown: Default {
			actions = "CivilActions";
			file = "civilstanipoloz1.rtm";
			speed = -0.7;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"Civil",1};
			interpolateTo[] = {"CivilDying",0.1,"CivilDyingVer2",0.1};
		};
		class CivilPutDown: Default {
			actions = "CivilPutDownActions";
			file = "civilstanipolozstat.rtm";
			speed = 1e+010;
			looped = 1;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			soundEnabled = 0;
			aiming = "aimingNo";
			connectFrom[] = {"CivilToCivilPutDown",2};
			connectTo[] = {"CivilPutDownToCivil",2};
			interpolateTo[] = {"CivilDying",0.1,"CivilDyingVer2",0.1};
		};
		class CivilPutDownToCivil: Default {
			actions = "CivilActions";
			file = "civilstanipoloz2.rtm";
			speed = -1.0;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectTo[] = {"Civil",1};
			interpolateTo[] = {"CivilDying",0.1,"CivilDyingVer2",0.1};
		};
		class LyingToPutDownLying: Default {
			actions = "LyingActions";
			file = "lehpoloz.rtm";
			speed = -1.0;
			looped = 0;
			visibleSize = 0.28;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"Lying",1};
			interpolateTo[] = {"LyingDying",0.1};
		};
		class PutDownLying: Default {
			actions = "PutDownLyingActions";
			file = "lehpolozstat.rtm";
			speed = 1e+010;
			looped = 1;
			visibleSize = 0.28;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			soundEnabled = 0;
			aiming = "aimingNo";
			connectFrom[] = {"LyingToPutDownLying",2};
			connectTo[] = {"PutDownLyingToLying",2};
			interpolateTo[] = {"LyingDying",0.1};
		};
		class PutDownLyingToLying: Default {
			actions = "LyingActions";
			file = "lehpoloz2.rtm";
			speed = -1.0;
			looped = 0;
			visibleSize = 0.28;
			disableWeapons = 1;
			soundEnabled = 0;
			connectTo[] = {"Lying",1};
			interpolateTo[] = {"LyingDying",0.1};
		};
		class LyingToTreatedLying: Default {
			actions = "LyingActions";
			file = "lehosetrenstart.rtm";
			speed = -5;
			looped = 0;
			visibleSize = 0.28;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"Lying",1};
			interpolateTo[] = {"LyingDying",0.1};
		};
		class TreatedLying: Default {
			actions = "TreatedLyingActions";
			file = "lehosetrenloop.rtm";
			speed = -3;
			looped = 0;
			visibleSize = 0.28;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			soundEnabled = 0;
			aiming = "aimingNo";
			connectFrom[] = {"LyingToTreatedLying",2};
			connectTo[] = {"TreatedLyingToLying",2};
			interpolateTo[] = {"LyingDying",0.1};
		};
		class TreatedLyingToLying: Default {
			actions = "LyingActions";
			file = "lehosetrenend.rtm";
			speed = -1.0;
			looped = 0;
			visibleSize = 0.28;
			disableWeapons = 1;
			soundEnabled = 0;
			connectTo[] = {"Lying",1};
			interpolateTo[] = {"LyingDying",0.1};
		};
		class CivilLyingToCivilLyingTakeFlag: Default {
			actions = "CivilLyingActions";
			file = "lehcivilpoloz1.rtm";
			speed = -1.0;
			looped = 0;
			visibleSize = 0.28;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"CivilLying",1};
			interpolateTo[] = {"CivilLyingDying",0.1};
		};
		class CivilLyingTakeFlag: Default {
			actions = "CivilLyingTakeFlagActions";
			file = "lehcivilpolozstat.rtm";
			speed = -2.5;
			looped = 1;
			visibleSize = 0.28;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			soundEnabled = 0;
			aiming = "aimingNo";
			connectFrom[] = {"CivilLyingToCivilLyingTakeFlag",2};
			connectTo[] = {"CivilLyingTakeFlagToCivilLying",2};
			interpolateTo[] = {"CivilLyingDying",0.1};
		};
		class CivilLyingTakeFlagToCivilLying: Default {
			actions = "CivilLyingActions";
			file = "lehcivilpoloz2.rtm";
			speed = -1.0;
			looped = 0;
			visibleSize = 0.28;
			disableWeapons = 1;
			soundEnabled = 0;
			connectTo[] = {"CivilLying",1};
			interpolateTo[] = {"CivilLyingDying",0.1};
		};
		class CivilLyingToCivilLyingPutDown: Default {
			actions = "CivilLyingActions";
			file = "lehcivilpoloz1.rtm";
			speed = -1.0;
			looped = 0;
			visibleSize = 0.28;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"CivilLying",1};
			interpolateTo[] = {"CivilLyingDying",0.1};
		};
		class CivilLyingPutDown: Default {
			actions = "CivilLyingPutDownActions";
			file = "lehcivilpolozstat.rtm";
			speed = 1e+010;
			looped = 1;
			visibleSize = 0.28;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			soundEnabled = 0;
			aiming = "aimingNo";
			connectFrom[] = {"CivilLyingToCivilLyingPutDown",2};
			connectTo[] = {"CivilLyingPutDownToCivilLying",2};
			interpolateTo[] = {"CivilLyingDying",0.1};
		};
		class CivilLyingPutDownToCivilLying: Default {
			actions = "CivilLyingActions";
			file = "lehcivilpoloz2.rtm";
			speed = -1.0;
			looped = 0;
			visibleSize = 0.28;
			disableWeapons = 1;
			soundEnabled = 0;
			connectTo[] = {"CivilLying",1};
			interpolateTo[] = {"CivilLyingDying",0.1};
		};
		class CombatReloadMGun: Default {
			actions = "CombatActions";
			file = "kulometnabij.rtm";
			speed = -2.93;
			looped = 0;
			disableWeapons = 1;
		};
		class CombatReloadMortarStart: Default {
			actions = "CombatActions";
			file = "minabijstart.rtm";
			speed = -2.415;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
		};
		class CombatReloadMortarEnd: Default {
			actions = "CombatActions";
			file = "minabijend.rtm";
			speed = -0.7;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
		};
		class CombatThrowGrenadeStart: Default {
			actions = "CombatActions";
			file = "sgranat.rtm";
			speed = -1.4;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			duty = 0.6;
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class CombatThrowGrenadeEnd: Default {
			actions = "CombatActions";
			file = "sgranat2.rtm";
			speed = -0.97;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			duty = 0.6;
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class CombatRunThrowGrenadeStart: Default {
			actions = "CombatRunFActions";
			file = "sbehgranat.rtm";
			speed = -1.4;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			duty = 0.6;
			interpolateTo[] = {"CombatRunDying",0.1,"CombatRunDyingVer2",0.1};
		};
		class CombatRunThrowGrenadeEnd: Default {
			actions = "CombatRunFActions";
			file = "sbehgranat2.rtm";
			speed = -0.97;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			duty = 0.6;
			connectFrom[] = {"Combat",1};
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class CombatStrokeGun: Default {
			actions = "CombatActions";
			file = "spazba.rtm";
			speed = -2.2;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			duty = 0.6;
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
			connectFrom[] = {"Combat",1};
			connectTo[] = {"CombatStrokeGunEnd",1};
		};
		class CombatStrokeGunEnd: Default {
			actions = "CombatActions";
			file = "sstanistat.rtm";
			speed = 1e+010;
			looped = 1;
			disableWeapons = 1;
			soundEnabled = 0;
			duty = 0.6;
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
			connectTo[] = {"Combat",1};
		};
		class CombatRunF: Default {
			preload = 1;
			actions = "CombatRunFActions";
			file = "sbeh0l.rtm";
			speed = -0.6;
			looped = 1;
			duty = -0.5;
			showWeaponAim = 0;
			relSpeedMin = 0.7;
			relSpeedMax = 1.0;
		};
		class CombatRunLF: CombatRunF {
			preload = 0;
			file = "sbeh-45l.rtm";
			speed = -0.7;
		};
		class CombatRunRF: CombatRunF {
			preload = 0;
			file = "sbeh45l.rtm";
			speed = -0.7;
		};
		class CombatRunNF: CombatRunF {
			preload = 0;
			actions = "CombatActions";
		};
		class CombatRunL: CombatRunNF {
			file = "sbeh-90l.rtm";
			speed = -0.7;
		};
		class CombatRunR: CombatRunNF {
			file = "sbeh90l.rtm";
			speed = -0.76;
		};
		class CombatRunLB: CombatRunNF {
			actions = "CombatRunBActions";
			file = "sbeh-135l.rtm";
			speed = -0.7;
		};
		class CombatRunRB: CombatRunNF {
			actions = "CombatRunBActions";
			file = "sbeh135l.rtm";
			speed = -0.7;
		};
		class CombatRunB: CombatRunNF {
			actions = "CombatRunBActions";
			file = "sbeh180L.rtm";
			speed = -0.7;
			soundEdge1 = 1;
			soundEdge2 = 0.5;
		};
		class CombatSprintF: Default {
			preload = 1;
			actions = "CombatRunFActions";
			looped = 1;
			file = "ssprint0.rtm";
			speed = -0.4;
			duty = 0.6;
			showWeaponAim = 0;
			enableOptics = 0;
			relSpeedMin = 0.7;
			relSpeedMax = 1.0;
		};
		class CombatSprintLF: CombatSprintF {
			preload = 0;
			file = "ssprint-45l.rtm";
			speed = -0.45;
			duty = 0.6;
		};
		class CombatSprintRF: CombatSprintF {
			preload = 0;
			file = "ssprint45l.rtm";
			speed = -0.45;
			duty = 0.6;
		};
		class CombatTurnR: Default {
			actions = "CombatActions";
			file = "svpravo.rtm";
			speed = -1.8;
			looped = 1;
			soundEnabled = 0;
			relSpeedMin = 0.9;
			relSpeedMax = 1.0;
		};
		class CombatTurnL: Default {
			actions = "CombatActions";
			file = "svlevo.rtm";
			speed = -1.8;
			looped = 1;
			soundEnabled = 0;
			relSpeedMin = 0.9;
			relSpeedMax = 1.0;
		};
		class CombatTurnRRelaxed: CombatTurnR {
			file = "savaredoprava.rtm";
			speed = -2.6;
		};
		class CombatTurnLRelaxed: CombatTurnL {
			file = "savaredoleva.rtm";
			speed = -2.6;
		};
		class CombatWalkF: Default {
			actions = "CombatActions";
			file = "schuze0l.rtm";
			speed = -0.8;
			looped = 1;
			duty = -0.7;
			relSpeedMin = 0.7;
			relSpeedMax = 1.0;
		};
		class CombatWalkLF: CombatWalkF {
			file = "schuze-45l.rtm";
		};
		class CombatWalkRF: CombatWalkF {
			file = "schuze45l.rtm";
		};
		class CombatWalkL: CombatWalkF {
			file = "schuze-90l.rtm";
		};
		class CombatWalkR: CombatWalkF {
			file = "schuze90l.rtm";
		};
		class CombatWalkLB: CombatWalkF {
			file = "schuze-135l.rtm";
		};
		class CombatWalkRB: CombatWalkF {
			file = "schuze135l.rtm";
		};
		class CombatWalkB: CombatWalkF {
			file = "schuze180l.rtm";
		};
		class CrouchRunF: CombatRunF {
			actions = "CrouchRunFActions";
			connectAs = "CombatRunF";
			interpolateTo[] = {"Crouch",1};
			enableOptics = 0;
		};
		class CrouchRunLF: CombatRunLF {
			actions = "CrouchRunFActions";
			connectAs = "CombatRunLF";
			interpolateWith[] = {"Crouch",1};
			enableOptics = 0;
		};
		class CrouchRunRF: CombatRunRF {
			actions = "CrouchRunFActions";
			connectAs = "CombatRunRF";
			interpolateWith[] = {"Crouch",1};
			enableOptics = 0;
		};
		class CrouchRunL: CombatRunL {
			actions = "CrouchRunFActions";
			connectAs = "CombatRunL";
			interpolateWith[] = {"Crouch",1};
		};
		class CrouchRunR: CombatRunR {
			actions = "CrouchRunFActions";
			connectAs = "CombatRunR";
			interpolateWith[] = {"Crouch",1};
		};
		class CrouchRunLB: CombatRunLB {
			actions = "CrouchRunBActions";
			connectAs = "CombatRunLB";
			interpolateWith[] = {"Crouch",1};
			enableOptics = 0;
		};
		class CrouchRunRB: CombatRunRB {
			actions = "CrouchRunBActions";
			connectAs = "CombatRunRB";
			interpolateWith[] = {"Crouch",1};
			enableOptics = 0;
		};
		class CrouchRunB: CombatRunB {
			actions = "CrouchRunBActions";
			connectAs = "CombatRunB";
			interpolateWith[] = {"Crouch",1};
			enableOptics = 0;
		};
		class CrouchWalkF: CombatWalkF {
			actions = "CrouchActions";
			connectAs = "CombatWalkF";
			enableOptics = 0;
			interpolateWith[] = {"Crouch",1};
		};
		class CrouchWalkLF: CombatWalkLF {
			actions = "CrouchActions";
			connectAs = "CombatWalkLF";
			enableOptics = 0;
			interpolateWith[] = {"Crouch",1};
		};
		class CrouchWalkRF: CombatWalkRF {
			actions = "CrouchActions";
			connectAs = "CombatWalkRF";
			enableOptics = 0;
			interpolateWith[] = {"Crouch",1};
		};
		class CrouchWalkL: CombatWalkL {
			actions = "CrouchActions";
			connectAs = "CombatWalkL";
			interpolateWith[] = {"Crouch",1};
		};
		class CrouchWalkR: CombatWalkR {
			actions = "CrouchActions";
			connectAs = "CombatWalkR";
			interpolateWith[] = {"Crouch",1};
		};
		class CrouchWalkLB: CombatWalkLB {
			actions = "CrouchActions";
			connectAs = "CombatWalkLB";
			enableOptics = 0;
			interpolateWith[] = {"Crouch",1};
		};
		class CrouchWalkRB: CombatWalkRB {
			actions = "CrouchActions";
			connectAs = "CombatWalkRB";
			enableOptics = 0;
			interpolateWith[] = {"Crouch",1};
		};
		class CrouchWalkB: CombatWalkB {
			actions = "CrouchActions";
			connectAs = "CombatWalkB";
			enableOptics = 0;
			interpolateWith[] = {"Crouch",1};
		};
		class CrouchSprintF: CombatSprintF {
			actions = "CrouchRunFActions";
			connectAs = "CombatSprintF";
			enableOptics = 0;
		};
		class CrouchSprintLF: CombatSprintLF {
			actions = "CrouchRunFActions";
			connectAs = "CombatSprintLF";
			enableOptics = 0;
		};
		class CrouchSprintRF: CombatSprintRF {
			actions = "CrouchRunFActions";
			connectAs = "CombatSprintRF";
			enableOptics = 0;
		};
		class CrouchTurnR: CombatTurnR {
			actions = "CrouchActions";
			connectAs = "CombatTurnR";
		};
		class CrouchTurnL: CombatTurnL {
			actions = "CrouchActions";
			connectAs = "CombatTurnL";
		};
		class CrouchToBinocCrouch: Default {
			actions = "CrouchActions";
			file = "klekdalekstart.rtm";
			speed = -1.0;
			looped = 0;
			disableWeapons = 1;
			showItemInHand = 1;
			soundEnabled = 0;
			connectFrom[] = {"Crouch",2};
			interpolateTo[] = {"CrouchDying",0.1};
		};
		class BinocCrouch: Default {
			actions = "BinocCrouchActions";
			file = "klekdalekstat.rtm";
			speed = 1e+010;
			looped = 1;
			disableWeapons = 0;
			showItemInHand = 1;
			soundEnabled = 0;
			enableBinocular = 1;
			connectFrom[] = {"CrouchToBinocCrouch",1};
			connectTo[] = {"BinocCrouchToCrouch",1};
			interpolateTo[] = {"CrouchDying",0.1};
		};
		class BinocCrouchToCrouch: Default {
			actions = "CrouchActions";
			file = "klekdalekend.rtm";
			speed = -1.0;
			looped = 0;
			disableWeapons = 1;
			showItemInHand = 1;
			soundEnabled = 0;
			connectTo[] = {"Crouch",2};
			interpolateTo[] = {"CrouchDying",0.1};
		};
		class CivilBase: Default {
			aiming = "aimingNo";
			actions = "CivilActions";
			duty = -1;
			disableWapons = 1;
			interpolateTo[] = {"CivilDying",0.1,"CivilDyingVer2",0.1};
			interpolationSpeed = 3;
		};
		class Civil: CivilBase {
			file = "civilstat.rtm";
			speed = 1e+010;
			looped = 1;
			soundEnabled = 0;
			variantAfter[] = {1,3,6};
			variantsAI[] = {"Civil",0.2,"CivilStillV1",0.8};
			equivalentTo = "Civil";
			interpolateTo[] = {"CivilDying",0.1,"CivilDyingVer2",0.1};
			interpolateFrom[] = {"CombatThrowGrenadeEnd",1};
		};
		class CivilStillV1: Civil {
			actions = "CivilActions";
			file = "civilstani.rtm";
			speed = -10;
			looped = 1;
			soundEnabled = 0;
			duty = -1;
		};
		class CivilWalkF: CivilBase {
			file = "civilchuze0l.rtm";
			speed = -1.0;
			looped = 1;
			duty = -0.7;
			relSpeedMin = 0.7;
			relSpeedMax = 1.0;
		};
		class CivilWalkLF: CivilWalkF {
			file = "civilchuze-45l.rtm";
		};
		class CivilWalkRF: CivilWalkF {
			file = "civilchuze45l.rtm";
		};
		class CivilWalkL: CivilWalkF {
			file = "civilchuze90l.rtm";
		};
		class CivilWalkR: CivilWalkF {
			file = "civilchuze-90l.rtm";
		};
		class CivilWalkLB: CivilWalkF {
			file = "civilchuze-135l.rtm";
		};
		class CivilWalkRB: CivilWalkF {
			file = "civilchuze135l.rtm";
		};
		class CivilWalkB: CivilWalkF {
			file = "civilchuze180l.rtm";
		};
		class CivilRunF: CivilWalkF {
			actions = "CivilRunFActions";
			file = "civilbeh0l.rtm";
			speed = -0.55;
			looped = 1;
			duty = -0.5;
		};
		class CivilRunLF: CivilRunF {
			file = "civilbeh-45l.rtm";
		};
		class CivilRunRF: CivilRunF {
			file = "civilbeh45l.rtm";
		};
		class CivilRunL: CivilRunF {
			file = "civilbeh-90l.rtm";
		};
		class CivilRunR: CivilRunF {
			file = "civilbeh90l.rtm";
		};
		class CivilRunB: CivilRunF {
			actions = "CivilActions";
			file = "civilbeh180l.rtm";
		};
		class CivilRunLB: CivilRunB {
			file = "civilbeh-135l.rtm";
		};
		class CivilRunRB: CivilRunB {
			file = "civilbeh135l.rtm";
		};
		class CivilTurnR: CivilBase {
			actions = "CivilActions";
			file = "civildoprava.rtm";
			speed = -1.6;
			looped = 1;
			soundEnabled = 0;
			relSpeedMin = 0.9;
			relSpeedMax = 1.0;
			duty = -1;
			interpolationSpeed = 5;
		};
		class CivilTurnL: CivilBase {
			actions = "CivilActions";
			file = "civildoleva.rtm";
			speed = -1.6;
			looped = 1;
			soundEnabled = 0;
			relSpeedMin = 0.9;
			relSpeedMax = 1.0;
			duty = -1;
			interpolationSpeed = 5;
		};
		class CivilThrowGrenadeStart: Default {
			actions = "CivilActions";
			file = "civilgranat1.rtm";
			speed = -1.4;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			duty = 0.6;
			interpolateTo[] = {"CivilDying",0.1,"CivilDyingVer2",0.1};
		};
		class CivilThrowGrenadeEnd: Default {
			actions = "CivilActions";
			file = "civilgranat2.rtm";
			speed = -0.97;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			duty = 0.6;
			interpolateTo[] = {"CivilDying",0.1,"CivilDyingVer2",0.1};
		};
		class CivilRunThrowGrenadeStart: Default {
			actions = "CivilRunFActions";
			file = "behgranat1.rtm";
			speed = -1.4;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			duty = 0.6;
			interpolateTo[] = {"CivilDying",0.1,"CivilDyingVer2",0.1};
		};
		class CivilRunThrowGrenadeEnd: Default {
			actions = "CivilRunFActions";
			file = "behgranat2.rtm";
			speed = -0.97;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			duty = 0.6;
			interpolateTo[] = {"CivilDying",0.1,"CivilDyingVer2",0.1};
		};
		class CivilToCivilLying: Default {
			actions = "CivilLyingActions";
			file = "civil2leh.rtm";
			speed = -1.5;
			looped = 0;
			onLandEnd = 1;
			enableOptics = 0;
			soundEnabled = 1;
			soundOverride = "laydown";
			soundEdge1 = 0.1;
			soundEdge2 = 0.1;
			interpolateTo[] = {"CivilLyingDying",1};
		};
		class CivilLyingToCivil: Default {
			actions = "CivilActions";
			file = "leh2civil.rtm";
			speed = -2;
			looped = 0;
			onLandBeg = 1;
			enableOptics = 0;
			soundEnabled = 1;
			soundOverride = "standup";
			soundEdge1 = 0.01;
			soundEdge2 = 0.01;
			interpolateTo[] = {"CivilDying",1,"CivilDyingVer2",1};
		};
		class Lying: Default {
			preload = 1;
			actions = "LyingActions";
			file = "leh.rtm";
			speed = 1e+010;
			looped = 1;
			onLandBeg = 1;
			onLandEnd = 1;
			soundEnabled = 0;
			duty = -1;
			visibleSize = 0.25;
			aimPrecision = 0.3;
			recoilSuffix = "fixed";
		};
		class LyingNoAim: Lying {
			preload = 0;
			limitGunMovement = 0;
			aiming = "aimingLying";
			legs = "legsNo";
		};
		class LyingStillV1: Lying {
			file = "polehavani.rtm";
			speed = -6.2;
		};
		class LyingTurnL: Lying {
			preload = 0;
			file = "plizenidoleva.rtm";
			speed = -4;
			duty = -0.0;
		};
		class LyingTurnR: Lying {
			preload = 0;
			file = "plizenidoprava.rtm";
			speed = -4;
			duty = -0.0;
		};
		class LyingReloadMagazine: LyingNoAim {
			preload = 1;
			actions = "LyingActions";
			file = "plizeninabij.rtm";
			speed = -2.4;
			disableWeapons = 1;
			looped = 0;
			interpolateTo[] = {"LyingDying",1};
		};
		class LyingThrowGrenadeStart: LyingNoAim {
			looped = 0;
			limitGunMovement = 1;
			file = "plazenigranat.rtm";
			speed = -1.8;
			disableWeapons = 1;
			duty = -0.0;
			interpolateTo[] = {"LyingDying",0.1};
		};
		class LyingThrowGrenadeEnd: LyingNoAim {
			looped = 0;
			limitGunMovement = 1;
			file = "plazenigranat2.rtm";
			speed = -2.3;
			disableWeapons = 1;
			duty = -0.0;
			interpolateTo[] = {"LyingDying",0.1};
		};
		class LyingCrawlF: LyingNoAim {
			preload = 1;
			actions = "CrawlingActions";
			file = "plazni0l.rtm";
			speed = -1.0;
			duty = -0.0;
			disableWeapons = 1;
			enableOptics = 0;
			soundEnabled = 1;
			soundOverride = "crawl";
		};
		class LyingFastCrawlF: LyingCrawlF {
			actions = "CrawlingActions";
			file = "ultraplaz.rtm";
			speed = -0.8;
			disableWeapons = 1;
			duty = 0.6;
		};
		class LyingCrawlLF: LyingCrawlF {
			preload = 0;
			file = "plizeni-45l.rtm";
			speed = -1.0;
		};
		class LyingCrawlRF: LyingCrawlF {
			preload = 0;
			file = "plizeni45l.rtm";
			speed = -1.0;
		};
		class LyingCrawlL: LyingCrawlF {
			preload = 0;
			actions = "LyingActions";
			file = "plizeni-90l.rtm";
			speed = -1.0;
		};
		class LyingCrawlR: LyingCrawlL {
			preload = 0;
			file = "plizeni90l.rtm";
			speed = -1.0;
		};
		class LyingCrawlLB: LyingCrawlL {
			preload = 0;
			file = "plizeni-135l.rtm";
			speed = -1.1;
		};
		class LyingCrawlRB: LyingCrawlL {
			preload = 0;
			file = "plizeni135l.rtm";
			speed = -1.1;
		};
		class LyingCrawlB: LyingCrawlL {
			preload = 0;
			file = "plizeni180L.rtm";
			speed = -1.1;
		};
		class LyingDying: DefaultDie {
			preload = 1;
			actions = "NoActions";
			file = "plazenismrt.rtm";
			speed = -1;
			onLandEnd = 1;
			looped = 0;
			soundEnabled = 0;
		};
		class CivilLying: Default {
			actions = "CivilLyingActions";
			file = "lehcivil.rtm";
			speed = 1e+010;
			looped = 1;
			onLandBeg = 1;
			onLandEnd = 1;
			soundEnabled = 0;
			duty = -1;
			disableWapons = 1;
			disableWeaponsLong = 1;
			visibleSize = 0.25;
			aimPrecision = 0.3;
			recoilSuffix = "fixed";
		};
		class CivilLyingNoAim: CivilLying {
			limitGunMovement = 0;
			aiming = "aimingNo";
			legs = "legsNo";
		};
		class CivilLyingStillV1: CivilLying {
			file = "lehcivilvar.rtm";
			speed = -6.2;
		};
		class CivilLyingCrawlF: CivilLyingNoAim {
			actions = "CivilCrawlingActions";
			file = "plazni0l.rtm";
			speed = -1.0;
			duty = -0.0;
		};
		class CivilLyingFastCrawlF: CivilLyingCrawlF {
			actions = "CivilCrawlingActions";
			file = "ultraplaz.rtm";
			speed = -0.8;
			duty = 0.6;
		};
		class CivilLyingCrawlLF: CivilLyingCrawlF {
			file = "plizeni-45l.rtm";
			speed = -1.0;
		};
		class CivilLyingCrawlRF: CivilLyingCrawlF {
			file = "plizeni45l.rtm";
			speed = -1.0;
		};
		class CivilLyingCrawlL: CivilLyingCrawlF {
			actions = "CivilLyingActions";
			file = "plizeni-90l.rtm";
			speed = -1.0;
		};
		class CivilLyingCrawlR: CivilLyingCrawlL {
			file = "plizeni90l.rtm";
			speed = -1.0;
		};
		class CivilLyingCrawlLB: CivilLyingCrawlL {
			file = "plizeni-135l.rtm";
			speed = -1.1;
		};
		class CivilLyingCrawlRB: CivilLyingCrawlL {
			file = "plizeni135l.rtm";
			speed = -1.1;
		};
		class CivilLyingCrawlB: CivilLyingCrawlL {
			file = "plizeni180L.rtm";
			speed = -1.1;
		};
		class CivilLyingDying: DefaultDie {
			actions = "NoActions";
			file = "civillehsmrt.rtm";
			speed = -1;
			onLandEnd = 1;
			looped = 0;
			soundEnabled = 0;
		};
		class CivilLyingDead: CivilLyingDying {
			actions = "DeadActions";
			file = "civillehsmrt2.rtm";
			speed = 1e+010;
			looped = 1;
			onLandBeg = 1;
			onLandEnd = 1;
			soundEnabled = 0;
			terminal = 1;
		};
		class WeaponDying: DefaultDie {
			actions = "NoActions";
			file = "atsmrt.rtm";
			speed = -1.6;
			looped = 0;
			onLandEnd = 1;
			soundEnabled = 0;
		};
		class WeaponDyingVer2: WeaponDying {
			file = "atsmrtB.rtm";
		};
		class WeaponDead: WeaponDying {
			actions = "DeadActions";
			file = "atsmrt2.rtm";
			speed = 1e+010;
			looped = 1;
			onLandBeg = 1;
			onLandEnd = 1;
			soundEnabled = 0;
			variantsPlayer[] = {"WeaponDead",0.5,"WeaponDeadVer2"};
			equivalentTo = "WeaponDead";
			variantAfter[] = {0,0,0};
			terminal = 1;
		};
		class WeaponDeadVer2: WeaponDead {
			file = "atsmrtB2.rtm";
		};
		class SitDownDying: DefaultDie {
			actions = "NoActions";
			file = "bezsedismrt.rtm";
			speed = -0.6;
			looped = 0;
			onLandEnd = 1;
			soundEnabled = 0;
		};
		class SitDownDead: SitDownDying {
			actions = "DeadActions";
			file = "bezsedismrt2.rtm";
			speed = 1e+010;
			looped = 1;
			onLandBeg = 1;
			onLandEnd = 1;
			soundEnabled = 0;
			terminal = 1;
		};
		class StandDying: DefaultDie {
			preload = 1;
			actions = "NoActions";
			file = "bezsmrt.rtm";
			speed = -2;
			looped = 0;
			onLandEnd = 1;
			interpolationSpeed = 5;
		};
		class StandDead: StandDying {
			actions = "DeadActions";
			file = "bezsmrt2.rtm";
			speed = 1e+010;
			looped = 1;
			onLandBeg = 1;
			onLandEnd = 1;
			soundEnabled = 0;
			variantsPlayer[] = {"StandDead",0.5,"StandDeadVer2"};
			equivalentTo = "StandDead";
			variantAfter[] = {0,0,0};
			terminal = 1;
		};
		class StandDyingVer2: DefaultDie {
			preload = 1;
			actions = "NoActions";
			file = "bezsmrtB.rtm";
			speed = -2;
			looped = 0;
			onLandEnd = 1;
			interpolationSpeed = 5;
		};
		class StandDeadVer2: StandDead {
			actions = "DeadActions";
			file = "bezsmrtB2.rtm";
			looped = 1;
			onLandBeg = 1;
			onLandEnd = 1;
			soundEnabled = 0;
		};
		class CivilDying: DefaultDie {
			actions = "NoActions";
			file = "civilsmrtb.rtm";
			speed = -1.6;
			looped = 0;
			onLandEnd = 1;
			interpolateFrom[] = {};
			connectTo[] = {"CivilDead",1};
		};
		class CivilDead: CivilDying {
			actions = "DeadActions";
			file = "civilsmrtb2.rtm";
			speed = 1e+010;
			looped = 1;
			onLandBeg = 1;
			onLandEnd = 1;
			soundEnabled = 0;
			terminal = 1;
			connectFrom[] = {};
			interpolateFrom[] = {};
			connectTo[] = {"DeadState",10};
			variantsPlayer[] = {"CivilDead",0.5,"CivilDeadVer2"};
			variantAfter[] = {0,0,0};
			equivalentTo = "CivilDead";
		};
		class CivilDyingVer2: CivilDying {
			file = "civilsmrt.rtm";
			connectTo[] = {"CivilDeadVer2",1};
		};
		class CivilDeadVer2: CivilDead {
			file = "civilsmrt2.rtm";
		};
		class CombatDying: DefaultDie {
			preload = 1;
			actions = "NoActions";
			file = "ssmrt.rtm";
			speed = -1.6;
			looped = 0;
			onLandEnd = 1;
			connectFrom[] = {"Combat",1};
			connectTo[] = {"CombatDead",1};
		};
		class CombatDead: CombatDying {
			actions = "DeadActions";
			file = "ssmrt2.rtm";
			speed = 1e+010;
			looped = 1;
			onLandBeg = 1;
			onLandEnd = 1;
			soundEnabled = 0;
			variantsPlayer[] = {"CombatDead",0.5,"CombatDeadVer3",0.2,"CombatDeadVer2"};
			variantAfter[] = {0,0,0};
			equivalentTo = "CombatDead";
			terminal = 1;
			connectFrom[] = {};
			interpolateFrom[] = {};
			connectTo[] = {"DeadState",10};
		};
		class CombatDyingVer2: DefaultDie {
			preload = 1;
			actions = "NoActions";
			file = "ssmrtB.rtm";
			speed = -1.6;
			looped = 0;
			onLandEnd = 1;
			connectFrom[] = {"Combat",1};
			connectTo[] = {"CombatDeadVer2",1};
		};
		class CombatDeadVer2: CombatDead {
			actions = "DeadActions";
			file = "ssmrtb2.rtm";
			looped = 1;
			onLandBeg = 1;
			onLandEnd = 1;
			soundEnabled = 0;
			connectFrom[] = {};
			interpolateFrom[] = {};
			connectTo[] = {"DeadState",10};
		};
		class CombatDyingVer3: DefaultDie {
			preload = 1;
			actions = "NoActions";
			file = "kulometsmrt.rtm";
			speed = -1.6;
			looped = 0;
			onLandEnd = 1;
			connectFrom[] = {"Combat",1};
			connectTo[] = {"CombatDeadVer3",1};
		};
		class CombatDeadVer3: CombatDead {
			actions = "DeadActions";
			file = "kulometsmrt2.rtm";
			looped = 1;
			onLandBeg = 1;
			onLandEnd = 1;
			soundEnabled = 0;
			connectFrom[] = {};
			interpolateFrom[] = {};
			connectTo[] = {"DeadState",10};
		};
		class CombatRunDying: DefaultDie {
			actions = "NoActions";
			file = "sbehsmrt0b.rtm";
			speed = -1.6;
			looped = 0;
			onLandEnd = 1;
			interpolateFrom[] = {"CombatRunF",1};
			connectTo[] = {"CombatRunDead",1};
		};
		class CombatRunDead: CombatRunDying {
			actions = "DeadActions";
			file = "sbehsmrt0b2.rtm";
			speed = 1e+010;
			looped = 1;
			onLandBeg = 1;
			onLandEnd = 1;
			soundEnabled = 0;
			terminal = 1;
			connectFrom[] = {};
			interpolateFrom[] = {};
			connectTo[] = {"DeadState",10};
			variantsPlayer[] = {"CombatRunDead",0.75,"CombatRunDeadVer2"};
			variantAfter[] = {0,0,0};
			equivalentTo = "CombatRunDead";
		};
		class CombatRunDyingVer2: DefaultDie {
			actions = "NoActions";
			file = "sbehsmrt0.rtm";
			speed = -1.6;
			looped = 0;
			onLandEnd = 1;
			interpolateFrom[] = {"CombatRunF",1};
			connectTo[] = {"CombatRunDeadVer2",1};
		};
		class CombatRunDeadVer2: CombatRunDyingVer2 {
			actions = "DeadActions";
			file = "sbehsmrt02.rtm";
			speed = 1e+010;
			looped = 1;
			onLandBeg = 1;
			onLandEnd = 1;
			soundEnabled = 0;
			terminal = 1;
			connectFrom[] = {};
			interpolateFrom[] = {};
			connectTo[] = {"DeadState",10};
			equivalentTo = "CombatRunDead";
			variantAfter[] = {0,0,0};
		};
		class CombatRunBDying: DefaultDie {
			actions = "NoActions";
			file = "sbehsmrt180b.rtm";
			speed = -1.6;
			looped = 0;
			onLandEnd = 1;
			interpolateFrom[] = {"CombatRunB",1};
			connectTo[] = {"CombatRunBDead",1};
		};
		class CombatRunBDead: CombatRunBDying {
			actions = "DeadActions";
			file = "sbehsmrt180b2.rtm";
			speed = 1e+010;
			looped = 1;
			onLandBeg = 1;
			onLandEnd = 1;
			soundEnabled = 0;
			terminal = 1;
			connectFrom[] = {};
			interpolateFrom[] = {};
			connectTo[] = {"DeadState",10};
			variantsPlayer[] = {"CombatRunBDead",0.75,"CombatRunBDeadVer2"};
			variantAfter[] = {0,0,0};
			equivalentTo = "CombatRunBDead";
		};
		class CombatRunBDyingVer2: CombatRunBDying {
			file = "sbehsmrt180.rtm";
			connectTo[] = {"CombatRunBDeadVer2",1};
		};
		class CombatRunBDeadVer2: CombatRunBDead {
			file = "sbehsmrt1802.rtm";
		};
		class CombatRelaxedDying: DefaultDie {
			actions = "NoActions";
			file = "kulometsmrt.rtm";
			speed = -1.6;
			looped = 0;
			onLandEnd = 1;
			connectFrom[] = {"CombatRelaxed",1};
			connectTo[] = {"CombatRelaxedDead",1};
		};
		class CombatRelaxedDead: DefaultDie {
			actions = "DeadActions";
			file = "kulometsmrt2.rtm";
			speed = 1e+010;
			looped = 1;
			onLandBeg = 1;
			onLandEnd = 1;
			soundEnabled = 0;
			connectFrom[] = {};
			interpolateFrom[] = {};
			connectTo[] = {"DeadState",10};
			variantsPlayer[] = {"CombatRelaxedDeadVer2",0.25,"CombatRelaxedDead"};
			variantAfter[] = {0,0,0};
		};
		class CombatRelaxedDyingVer2: DefaultDie {
			actions = "NoActions";
			file = "ssmrt.rtm";
			speed = -1.6;
			looped = 0;
			onLandEnd = 1;
			connectFrom[] = {"CombatRelaxed",1};
			connectTo[] = {"CombatRelaxedDeadVer2",1};
		};
		class CombatRelaxedDeadVer2: DefaultDie {
			actions = "DeadActions";
			file = "ssmrt2.rtm";
			speed = 1e+010;
			looped = 1;
			onLandBeg = 1;
			onLandEnd = 1;
			soundEnabled = 0;
			connectFrom[] = {};
			interpolateFrom[] = {};
			connectTo[] = {"DeadState",10};
			equivalentTo = "CombatRelaxedDead";
			variantsPlayer[] = {"CombatRelaxedDeadVer2",0.25,"CombatRelaxedDead"};
			variantAfter[] = {0,0,0};
		};
		class LyingDead: LyingDying {
			actions = "DeadActions";
			file = "plazenismrt2.rtm";
			speed = 1e+010;
			looped = 1;
			onLandBeg = 1;
			onLandEnd = 1;
			soundEnabled = 0;
			terminal = 1;
		};
		class CargoDying: DefaultDie {
			actions = "NoActions";
			file = "Cargosmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
		};
		class CargoDead: CargoDying {
			actions = "DeadActions";
			file = "Cargosmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"CargoDying",1};
			connectTo[] = {"DeadState",1};
		};
		class CombatToWeapon: Default {
			actions = "WeaponActions";
			file = "stanidoAT.rtm";
			speed = -2.4;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			interpolateTo[] = {"WeaponDying",0.1,"WeaponDyingVer2",0.1};
		};
		class LyingToWeapon: Default {
			actions = "WeaponActions";
			file = "lehdoat.rtm";
			speed = "- 3.0";
			visibleSize = 0.7;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			interpolateTo[] = {"WeaponDying",0.1,"WeaponDyingVer2",0.1};
		};
		class WeaponToLying: Default {
			actions = "WeaponActions";
			file = "atdolehu.rtm";
			speed = -2.8;
			looped = 0;
			visibleSize = 0.7;
			disableWeapons = 1;
			soundEnabled = 0;
			interpolateTo[] = {"WeaponDying",0.1,"WeaponDyingVer2",0.1};
		};
		class Weapon: Default {
			actions = "WeaponActions";
			file = "atstat.rtm";
			speed = 1e+010;
			looped = 1;
			soundEnabled = 0;
			enableMissile = 1;
			duty = -1;
			visibleSize = 0.6;
			aimPrecision = 0.5;
			recoilSuffix = "halffixed";
		};
		class WeaponWalkF: Weapon {
			file = "at0l.rtm";
			speed = -0.8;
			looped = 1;
			duty = -0.5;
		};
		class WeaponWalkL: Weapon {
			file = "at-90l.rtm";
			speed = -0.6;
			looped = 1;
			duty = -0.5;
		};
		class WeaponWalkR: Weapon {
			file = "at90l.rtm";
			speed = -0.6;
			looped = 1;
			duty = -0.5;
		};
		class WeaponWalkB: Weapon {
			file = "at180l.rtm";
			speed = -0.9;
			looped = 1;
			duty = -0.5;
		};
		class WeaponWalkLF: Weapon {
			file = "at-45l.rtm";
			speed = -0.6;
			looped = 1;
			duty = -0.5;
		};
		class WeaponWalkRF: Weapon {
			file = "at45l.rtm";
			speed = -0.6;
			looped = 1;
			duty = -0.5;
		};
		class WeaponWalkLB: Weapon {
			file = "at-135l.rtm";
			speed = -0.6;
			looped = 1;
			duty = -0.5;
		};
		class WeaponWalkRB: Weapon {
			file = "at135l.rtm";
			speed = -0.6;
			looped = 1;
			duty = -0.5;
		};
		class WeaponTurnL: Weapon {
			file = "atdoleva.rtm";
			speed = -1.5;
			looped = 1;
			duty = -0.5;
			soundEnabled = 0;
		};
		class WeaponTurnR: Weapon {
			file = "atdoprava.rtm";
			speed = -1.5;
			looped = 1;
			duty = -0.5;
			soundEnabled = 0;
		};
		class WeaponReloadAT: Weapon {
			file = "atnabij.rtm";
			speed = -4.0;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			interpolateTo[] = {"WeaponDying",0.1,"WeaponDyingVer2",0.1};
		};
		class WeaponToCombat: Default {
			actions = "WeaponActions";
			file = "ATdostani.rtm";
			speed = "- 1.5";
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"Weapon",2};
			connectTo[] = {"Combat",2};
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class HandGunStand: Default {
			access = 0;
		};
		class HandGunCrouch: Default {
			access = 0;
		};
		class HandGunLying: Default {
			access = 0;
		};
		class Driver: Default {
			actions = "CargoActions";
			file = "cargo.rtm";
			speed = -25;
			looped = 1;
			soundEnabled = 0;
		};
		class Pilot: Driver {
			file = "cargo.rtm";
			speed = -1;
			looped = 1;
		};
		class Gunner: Driver {
			file = "cargo.rtm";
			speed = -10;
			looped = 1;
		};
		class Commander: Driver {
			file = "cargo.rtm";
			speed = -10;
			looped = 1;
		};
		class Cargo: Driver {
			actions = "CargoActions";
			file = "cargostat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"CargoVer1",0.6,"CargoVer2",0.1,"CargoVer3",0.1,"CargoVer4",0.1,"CargoVer5",0.1,"Cargo"};
			equivalentTo = "Cargo";
			interpolationSpeed = 1;
		};
		class CargoVer1: Cargo {
			file = "cargosoft.rtm";
			speed = -3.8;
			looped = 1;
		};
		class CargoVer2: Cargo {
			file = "cargomenipusku.rtm";
			speed = -3.8;
			looped = 1;
		};
		class CargoVer3: Cargo {
			file = "cargopuska.rtm";
			speed = -4.2;
			looped = 1;
		};
		class CargoVer4: Cargo {
			file = "cargorozhlizise.rtm";
			speed = -3.2;
			looped = 1;
		};
		class CargoVer5: Cargo {
			file = "cargo.rtm";
			speed = -9.6;
			looped = 1;
		};
		class M113Gunner: Driver {
			file = "M113Gunnerstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"M113GunnerV1",0.7,"M113Gunner"};
			interpolateWith[] = {"M113GunnerV1",0.5};
			equivalentTo = "M113Gunner";
			interpolationSpeed = 1;
			connectTo[] = {"M113GunnerDying",1};
		};
		class M113GunnerV1: M113Gunner {
			file = "M113Gunner.rtm";
			speed = -4;
			looped = 1;
		};
		class M113GunnerDying: DefaultDie {
			actions = "NoActions";
			file = "M113Gunnersmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"M113Gunner",1};
		};
		class M113GunnerDead: M113GunnerDying {
			actions = "DeadActions";
			file = "M113Gunnersmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"M113GunnerDying",1};
			connectTo[] = {"DeadState",1};
		};
		class M113Driver: Driver {
			file = "M113Driverstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"M113DriverV1",0.7,"M113Driver"};
			interpolateWith[] = {"M113DriverV1",0.5};
			equivalentTo = "M113Driver";
			interpolationSpeed = 1;
		};
		class M113DriverV1: M113Driver {
			file = "M113Driver.rtm";
			speed = -4;
			looped = 1;
		};
		class M113DriverOut: Driver {
			file = "M113DriverOutstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"M113DriverOutV1",0.7,"M113DriverOut"};
			interpolateWith[] = {"M113DriverOutV1",0.5};
			equivalentTo = "M113DriverOut";
			interpolationSpeed = 1;
			connectTo[] = {"M113DriverOutDying",1};
		};
		class M113DriverOutV1: M113DriverOut {
			file = "M113DriverOut.rtm";
			speed = -4;
			looped = 1;
		};
		class M113DriverOutDying: DefaultDie {
			actions = "NoActions";
			file = "M113DriverOutsmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"M113DriverOut",1};
		};
		class M113DriverOutDead: M113DriverOutDying {
			actions = "DeadActions";
			file = "M113DriverOutsmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"M113DriverOutDying",1};
			connectTo[] = {"DeadState",1};
		};
		class M113Medic: Driver {
			file = "M113Medicstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"M113MedicV1",0.7,"M113Medic"};
			interpolateWith[] = {"M113MedicV1",0.5};
			equivalentTo = "M113Medic";
			interpolationSpeed = 1;
		};
		class M113MedicV1: M113Medic {
			file = "M113Medic.rtm";
			speed = -4;
			looped = 1;
		};
		class Nemocnej: Driver {
			file = "Nemocnejstat.rtm";
			speed = 1e+010;
			looped = 1;
		};
		class M60Gunner: Driver {
			file = "M60Gunnerstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"M60GunnerV1",0.7,"M60Gunner"};
			interpolateWith[] = {"M60GunnerV1",0.5};
			equivalentTo = "M60Gunner";
			interpolationSpeed = 1;
		};
		class M60GunnerV1: M60Gunner {
			file = "M60Gunner.rtm";
			speed = -4;
			looped = 1;
		};
		class M60Driver: Driver {
			file = "M60Driverstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"M60DriverV1",0.7,"M60Driver"};
			interpolateWith[] = {"M60DriverV1",0.5};
			equivalentTo = "M60Driver";
			interpolationSpeed = 1;
		};
		class M60DriverV1: M60Driver {
			file = "M60Driver.rtm";
			speed = -4;
			looped = 1;
		};
		class M60Commander: Driver {
			file = "M60Commanderstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"M60CommanderV1",0.7,"M60Commander"};
			interpolateWith[] = {"M60CommanderV1",0.5};
			equivalentTo = "M60Commander";
			interpolationSpeed = 1;
		};
		class M60CommanderV1: M60Commander {
			file = "M60Commander.rtm";
			speed = -4;
			looped = 1;
		};
		class M60DriverOut: Driver {
			file = "M60DriverOutstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"M60DriverOutV1",0.7,"M60DriverOut"};
			interpolateWith[] = {"M60DriverOutV1",0.5};
			equivalentTo = "M60DriverOut";
			interpolationSpeed = 1;
			connectTo[] = {"M60DriverOutDying",1};
		};
		class M60DriverOutV1: M60DriverOut {
			file = "M60DriverOut.rtm";
			speed = -4;
			looped = 1;
		};
		class M60DriverOutDying: DefaultDie {
			actions = "NoActions";
			file = "M60DriverOutsmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"M60DriverOut",1};
		};
		class M60DriverOutDead: M60DriverOutDying {
			actions = "DeadActions";
			file = "M60DriverOutsmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"M60DriverOutDying",1};
			connectTo[] = {"DeadState",1};
		};
		class M60CommanderOut: Driver {
			file = "M60CommanderOutstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"M60CommanderOutV1",0.7,"M60CommanderOut"};
			interpolateWith[] = {"M60CommanderOutV1",0.5};
			equivalentTo = "M60CommanderOut";
			interpolationSpeed = 1;
			connectTo[] = {"M60CommanderOutDying",1};
		};
		class M60CommanderOutV1: M60CommanderOut {
			file = "M60CommanderOut.rtm";
			speed = -4;
			looped = 1;
		};
		class M60CommanderOutDying: DefaultDie {
			actions = "NoActions";
			file = "M60CommanderOutsmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"M60CommanderOut",1};
		};
		class M60CommanderOutDead: M60CommanderOutDying {
			actions = "DeadActions";
			file = "M60CommanderOutsmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"M60CommanderOutDying",1};
			connectTo[] = {"DeadState",1};
		};
		class M1A1Commander: Driver {
			file = "M1A1Commanderstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"M1A1CommanderV1",0.7,"M1A1Commander"};
			interpolateWith[] = {"M1A1CommanderV1",0.5};
			equivalentTo = "M1A1Commander";
			interpolationSpeed = 1;
		};
		class M1A1CommanderV1: M1A1Commander {
			file = "M1A1Commander.rtm";
			speed = -4;
			looped = 1;
		};
		class M1A1Gunner: Driver {
			file = "M1A1Gunnerstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"M1A1GunnerV1",0.7,"M1A1Gunner"};
			interpolateWith[] = {"M1A1GunnerV1",0.5};
			equivalentTo = "M1A1Gunner";
			interpolationSpeed = 1;
		};
		class M1A1GunnerV1: M1A1Gunner {
			file = "M1A1Gunner.rtm";
			speed = -4;
			looped = 1;
		};
		class M1A1Driver: Driver {
			file = "M1A1Driverstat.rtm";
			speed = 1e+010;
			looped = 1;
		};
		class M1A1DriverOut: Driver {
			file = "M1A1DriverOutstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"M1A1DriverOutV1",0.7,"M1A1DriverOut"};
			interpolateWith[] = {"M1A1DriverOutV1",0.5};
			equivalentTo = "M1A1DriverOut";
			interpolationSpeed = 1;
			connectTo[] = {"M1A1DriverOutDying",1};
		};
		class M1A1DriverOutV1: M1A1DriverOut {
			file = "M1A1DriverOut.rtm";
			speed = -4;
			looped = 1;
		};
		class M1A1DriverOutDying: DefaultDie {
			actions = "NoActions";
			file = "M1A1DriverOutsmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"M1A1DriverOut",1};
		};
		class M1A1DriverOutDead: M1A1DriverOutDying {
			actions = "DeadActions";
			file = "M1A1DriverOutsmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"M1A1DriverOutDying",1};
			connectTo[] = {"DeadState",1};
		};
		class M1A1CommanderOut: Driver {
			file = "M1A1CommanderOutstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"M1A1CommanderOutV1",0.7,"M1A1CommanderOut"};
			interpolateWith[] = {"M1A1CommanderOutV1",0.5};
			equivalentTo = "M1A1CommanderOut";
			interpolationSpeed = 1;
			connectTo[] = {"M1A1CommanderOutDying",1};
		};
		class M1A1CommanderOutV1: M1A1CommanderOut {
			file = "M1A1CommanderOut.rtm";
			speed = -4;
			looped = 1;
		};
		class M1A1CommanderOutDying: DefaultDie {
			actions = "NoActions";
			file = "M1A1CommanderOutsmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"M1A1CommanderOut",1};
		};
		class M1A1CommanderOutDead: M1A1CommanderOutDying {
			actions = "DeadActions";
			file = "M1A1CommanderOutsmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"M1A1CommanderOutDying",1};
			connectTo[] = {"DeadState",1};
		};
		class BMPGunner: Driver {
			file = "BMPGunnerstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"BMPGunnerV1",0.7,"BMPGunner"};
			interpolateWith[] = {"BMPGunnerV1",0.5};
			equivalentTo = "BMPGunner";
			interpolationSpeed = 1;
		};
		class BMPGunnerV1: BMPGunner {
			file = "BMPGunner.rtm";
			speed = -4;
			looped = 1;
		};
		class BMPDriver: Driver {
			file = "BMPDriverstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"BMPDriverV1",0.7,"BMPDriver"};
			interpolateWith[] = {"BMPDriverV1",0.5};
			equivalentTo = "BMPDriver";
			interpolationSpeed = 1;
		};
		class BMPDriverV1: BMPDriver {
			file = "BMPDriver.rtm";
			speed = -4;
			looped = 1;
		};
		class BMPCommander: Driver {
			file = "BMPCommanderstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"BMPCommanderV1",0.7,"BMPCommander"};
			interpolateWith[] = {"BMPCommanderV1",0.5};
			equivalentTo = "BMPCommander";
			interpolationSpeed = 1;
		};
		class BMPCommanderV1: BMPCommander {
			file = "BMPCommander.rtm";
			speed = -4;
			looped = 1;
		};
		class BMPGunnerOut: Driver {
			file = "BMPGunnerOutstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"BMPGunnerOutV1",0.7,"BMPGunnerOut"};
			interpolateWith[] = {"BMPGunnerOutV1",0.5};
			equivalentTo = "BMPGunnerOut";
			interpolationSpeed = 1;
			connectTo[] = {"BMPGunnerOutDying",1};
		};
		class BMPGunnerOutV1: BMPGunnerOut {
			file = "BMPGunnerOut.rtm";
			speed = -4;
			looped = 1;
		};
		class BMPGunnerOutDying: DefaultDie {
			actions = "NoActions";
			file = "BMPGunnerOutsmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"BMPGunnerOut",1};
		};
		class BMPGunnerOutDead: BMPGunnerOutDying {
			actions = "DeadActions";
			file = "BMPGunnerOutsmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"BMPGunnerOutDying",1};
			connectTo[] = {"DeadState",1};
		};
		class BMPDriverOut: Driver {
			file = "BMPDriverOutstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"BMPDriverOutV1",0.7,"BMPDriverOut"};
			interpolateWith[] = {"BMPDriverOutV1",0.5};
			equivalentTo = "BMPDriverOut";
			interpolationSpeed = 1;
			connectTo[] = {"BMPDriverOutDying",1};
		};
		class BMPDriverOutV1: BMPDriverOut {
			file = "BMPDriverOut.rtm";
			speed = -4;
			looped = 1;
		};
		class BMPDriverOutDying: DefaultDie {
			actions = "NoActions";
			file = "BMPDriverOutsmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"BMPDriverOut",1};
		};
		class BMPDriverOutDead: BMPDriverOutDying {
			actions = "DeadActions";
			file = "BMPDriverOutsmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"BMPDriverOutDying",1};
			connectTo[] = {"DeadState",1};
		};
		class BMPCommanderOut: Driver {
			file = "BMPCommanderOutstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"BMPCommanderOutV1",0.7,"BMPCommanderOut"};
			interpolateWith[] = {"BMPCommanderOutV1",0.5};
			equivalentTo = "BMPCommanderOut";
			interpolationSpeed = 1;
			connectTo[] = {"BMPCommanderOutDying",1};
		};
		class BMPCommanderOutV1: BMPCommanderOut {
			file = "BMPCommanderOut.rtm";
			speed = -4;
			looped = 1;
		};
		class BMPCommanderOutDying: DefaultDie {
			actions = "NoActions";
			file = "BMPCommanderOutsmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"BMPCommanderOut",1};
		};
		class BMPCommanderOutDead: BMPCommanderOutDying {
			actions = "DeadActions";
			file = "BMPCommanderOutsmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"BMPCommanderOutDying",1};
			connectTo[] = {"DeadState",1};
		};
		class T72Gunner: Driver {
			file = "T72Gunnerstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"T72GunnerV1",0.7,"T72Gunner"};
			interpolateWith[] = {"T72GunnerV1",0.5};
			equivalentTo = "T72Gunner";
			interpolationSpeed = 1;
		};
		class T72GunnerV1: T72Gunner {
			file = "T72Gunner.rtm";
			speed = -4;
			looped = 1;
		};
		class T72Driver: Driver {
			file = "T72Driverstat.rtm";
			speed = 1e+010;
			looped = 1;
		};
		class T72Commander: Driver {
			file = "T72Commanderstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"T72CommanderV1",0.7,"T72Commander"};
			interpolateWith[] = {"T72CommanderV1",0.5};
			equivalentTo = "T72Commander";
			interpolationSpeed = 1;
		};
		class T72CommanderV1: T72Commander {
			file = "T72Commander.rtm";
			speed = -4;
			looped = 1;
		};
		class T72DriverOut: Driver {
			file = "T72DriverOutstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"T72DriverOutV1",0.7,"T72DriverOut"};
			interpolateWith[] = {"T72DriverOutV1",0.5};
			equivalentTo = "T72DriverOut";
			interpolationSpeed = 1;
			connectTo[] = {"T72DriverOutDying",1};
		};
		class T72DriverOutV1: T72DriverOut {
			file = "T72DriverOut.rtm";
			speed = -4;
			looped = 1;
		};
		class T72DriverOutDying: DefaultDie {
			actions = "NoActions";
			file = "T72DriverOutsmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"T72DriverOut",1};
		};
		class T72DriverOutDead: T72DriverOutDying {
			actions = "DeadActions";
			file = "T72DriverOutsmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"T72DriverOutDying",1};
			connectTo[] = {"DeadState",1};
		};
		class T72GunnerOut: Driver {
			file = "T72GunnerOutstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"T72GunnerOutV1",0.7,"T72GunnerOut"};
			interpolateWith[] = {"T72GunnerOutV1",0.5};
			equivalentTo = "T72GunnerOut";
			interpolationSpeed = 1;
			connectTo[] = {"T72GunnerOutDying",1};
		};
		class T72GunnerOutV1: T72GunnerOut {
			file = "T72GunnerOut.rtm";
			speed = -4;
			looped = 1;
		};
		class T72GunnerOutDying: DefaultDie {
			actions = "NoActions";
			file = "T72GunnerOutsmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"T72GunnerOut",1};
		};
		class T72GunnerOutDead: T72GunnerOutDying {
			actions = "DeadActions";
			file = "T72GunnerOutsmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"T72GunnerOutDying",1};
			connectTo[] = {"DeadState",1};
		};
		class T72CommanderOut: Driver {
			file = "T72CommanderOutstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"T72CommanderOutV1",0.7,"T72CommanderOut"};
			interpolateWith[] = {"T72CommanderOutV1",0.5};
			equivalentTo = "T72CommanderOut";
			interpolationSpeed = 1;
			connectTo[] = {"T72CommanderOutDying",1};
		};
		class T72CommanderOutV1: T72CommanderOut {
			file = "T72CommanderOut.rtm";
			speed = -4;
			looped = 1;
		};
		class T72CommanderOutDying: DefaultDie {
			actions = "NoActions";
			file = "T72CommanderOutsmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"T72CommanderOut",1};
		};
		class T72CommanderOutDead: T72CommanderOutDying {
			actions = "DeadActions";
			file = "T72CommanderOutsmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"T72CommanderOutDying",1};
			connectTo[] = {"DeadState",1};
		};
		class T80GunnerOut: Driver {
			file = "T80GunnerOutstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"T80GunnerOutV1",0.7,"T80GunnerOut"};
			interpolateWith[] = {"T80GunnerOutV1",0.5};
			equivalentTo = "T80GunnerOut";
			interpolationSpeed = 1;
			connectTo[] = {"T80GunnerOutDying",1};
		};
		class T80GunnerOutV1: T80GunnerOut {
			file = "T80GunnerOut.rtm";
			speed = -4;
			looped = 1;
		};
		class T80GunnerOutDying: DefaultDie {
			actions = "NoActions";
			file = "T80GunnerOutsmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"T80GunnerOut",1};
		};
		class T80GunnerOutDead: T80GunnerOutDying {
			actions = "DeadActions";
			file = "T80GunnerOutsmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"T80GunnerOutDying",1};
			connectTo[] = {"DeadState",1};
		};
		class T80CommanderOut: Driver {
			file = "T80CommanderOutstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"T80CommanderOutV1",0.7,"T80CommanderOut"};
			interpolateWith[] = {"T80CommanderOutV1",0.5};
			equivalentTo = "T80CommanderOut";
			interpolationSpeed = 1;
			connectTo[] = {"T80CommanderOutDying",1};
		};
		class T80CommanderOutV1: T80CommanderOut {
			file = "T80CommanderOut.rtm";
			speed = -4;
			looped = 1;
		};
		class T80CommanderOutDying: DefaultDie {
			actions = "NoActions";
			file = "T80CommanderOutsmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"T80CommanderOut",1};
		};
		class T80CommanderOutDead: T80CommanderOutDying {
			actions = "DeadActions";
			file = "T80CommanderOutsmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"T80CommanderOutDying",1};
			connectTo[] = {"DeadState",1};
		};
		class T55Gunner: Driver {
			file = "T55Gunnerstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"T55GunnerV1",0.7,"T55Gunner"};
			interpolateWith[] = {"T55GunnerV1",0.5};
			equivalentTo = "T55Gunner";
			interpolationSpeed = 1;
		};
		class T55GunnerV1: T55Gunner {
			file = "T55Gunner.rtm";
			speed = -4;
			looped = 1;
		};
		class T55Commander: Driver {
			file = "T55Commanderstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"T55CommanderV1",0.7,"T55Commander"};
			interpolateWith[] = {"T55CommanderV1",0.5};
			equivalentTo = "T55Commander";
			interpolationSpeed = 1;
		};
		class T55CommanderV1: T55Commander {
			file = "T55Commander.rtm";
			speed = -4;
			looped = 1;
		};
		class T55DriverOut: Driver {
			file = "T55DriverOutstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"T55DriverOutV1",0.7,"T55DriverOut"};
			interpolateWith[] = {"T55DriverOutV1",0.5};
			equivalentTo = "T55DriverOut";
			interpolationSpeed = 1;
			connectTo[] = {"T55DriverOutDying",1};
		};
		class T55DriverOutV1: T55DriverOut {
			file = "T55DriverOut.rtm";
			speed = -4;
			looped = 1;
		};
		class T55DriverOutDying: DefaultDie {
			actions = "NoActions";
			file = "T55DriverOutsmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"T55DriverOut",1};
		};
		class T55DriverOutDead: T55DriverOutDying {
			actions = "DeadActions";
			file = "T55DriverOutsmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"T55DriverOutDying",1};
			connectTo[] = {"DeadState",1};
		};
		class T55CommanderOut: Driver {
			file = "T55CommanderOutstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"T55CommanderOutV1",0.7,"T55CommanderOut"};
			interpolateWith[] = {"T55CommanderOutV1",0.5};
			equivalentTo = "T55CommanderOut";
			interpolationSpeed = 1;
			connectTo[] = {"T55CommanderOutDying",1};
		};
		class T55CommanderOutV1: T55CommanderOut {
			file = "T55CommanderOut.rtm";
			speed = -4;
			looped = 1;
		};
		class T55CommanderOutDying: DefaultDie {
			actions = "NoActions";
			file = "T55CommanderOutsmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"T55CommanderOut",1};
		};
		class T55CommanderOutDead: T55CommanderOutDying {
			actions = "DeadActions";
			file = "T55CommanderOutsmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"T55CommanderOutDying",1};
			connectTo[] = {"DeadState",1};
		};
		class ZSUGunner: Driver {
			file = "ZSUGunnerstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"ZSUGunnerV1",0.7,"ZSUGunner"};
			interpolateWith[] = {"ZSUGunnerV1",0.5};
			equivalentTo = "ZSUGunner";
			interpolationSpeed = 1;
		};
		class ZSUGunnerV1: ZSUGunner {
			file = "ZSUGunner.rtm";
			speed = -4;
			looped = 1;
		};
		class ZSUDriver: Driver {
			file = "ZSUDriverstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"ZSUDriverV1",0.7,"ZSUDriver"};
			interpolateWith[] = {"ZSUDriverV1",0.5};
			equivalentTo = "ZSUDriver";
			interpolationSpeed = 1;
			connectTo[] = {"ZSUDriverDying",1};
		};
		class ZSUDriverV1: ZSUDriver {
			file = "ZSUDriver.rtm";
			speed = -4;
			looped = 1;
		};
		class ZSUDriverDying: DefaultDie {
			actions = "NoActions";
			file = "ZSUDriversmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"ZSUDriver",1};
		};
		class ZSUDriverDead: ZSUDriverDying {
			actions = "DeadActions";
			file = "ZSUDriversmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"ZSUDriverDying",1};
			connectTo[] = {"DeadState",1};
		};
		class ZSUCommander: Driver {
			file = "ZSUCommanderstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"ZSUCommanderV1",0.7,"ZSUCommander"};
			interpolateWith[] = {"ZSUCommanderV1",0.5};
			equivalentTo = "ZSUCommander";
			interpolationSpeed = 1;
		};
		class ZSUCommanderV1: ZSUCommander {
			file = "ZSUCommander.rtm";
			speed = -4;
			looped = 1;
		};
		class ZSUGunnerOut: Driver {
			file = "ZSUGunnerOutstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"ZSUGunnerOutV1",0.7,"ZSUGunnerOut"};
			interpolateWith[] = {"ZSUGunnerOutV1",0.5};
			equivalentTo = "ZSUGunnerOut";
			interpolationSpeed = 1;
			connectTo[] = {"ZSUGunnerOutDying",1};
		};
		class ZSUGunnerOutV1: ZSUGunnerOut {
			file = "ZSUGunnerOut.rtm";
			speed = -4;
			looped = 1;
		};
		class ZSUGunnerOutDying: DefaultDie {
			actions = "NoActions";
			file = "ZSUGunnerOutsmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"ZSUGunnerOut",1};
		};
		class ZSUGunnerOutDead: ZSUGunnerOutDying {
			actions = "DeadActions";
			file = "ZSUGunnerOutsmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"ZSUGunnerOutDying",1};
			connectTo[] = {"DeadState",1};
		};
		class ZSUCommanderOut: Driver {
			file = "ZSUCommanderOutstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"ZSUCommanderOutV1",0.7,"ZSUCommanderOut"};
			interpolateWith[] = {"ZSUCommanderOutV1",0.5};
			equivalentTo = "ZSUCommanderOut";
			interpolationSpeed = 1;
			connectTo[] = {"ZSUCommanderOutDying",1};
		};
		class ZSUCommanderOutV1: ZSUCommanderOut {
			file = "ZSUCommanderOut.rtm";
			speed = -4;
			looped = 1;
		};
		class ZSUCommanderOutDying: DefaultDie {
			actions = "NoActions";
			file = "ZSUCommanderOutsmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"ZSUCommanderOut",1};
		};
		class ZSUCommanderOutDead: ZSUCommanderOutDying {
			actions = "DeadActions";
			file = "ZSUCommanderOutsmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"ZSUCommanderOutDying",1};
			connectTo[] = {"DeadState",1};
		};
		class UH60Pilot: Driver {
			file = "UH60Pilotstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"UH60PilotV1",0.7,"UH60Pilot"};
			interpolateWith[] = {"UH60PilotV1",0.5};
			equivalentTo = "UH60Pilot";
			interpolationSpeed = 1;
			connectTo[] = {"UH60PilotDying",1};
		};
		class UH60PilotV1: UH60Pilot {
			file = "UH60Pilot.rtm";
			speed = -4;
			looped = 1;
		};
		class UH60PilotDying: DefaultDie {
			actions = "NoActions";
			file = "UH60Pilotsmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"UH60Pilot",1};
		};
		class UH60PilotDead: UH60PilotDying {
			actions = "DeadActions";
			file = "UH60Pilotsmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"UH60PilotDying",1};
			connectTo[] = {"DeadState",1};
		};
		class UH60Gunner: Driver {
			file = "UH60Gunnerstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"UH60GunnerV1",0.7,"UH60Gunner"};
			interpolateWith[] = {"UH60GunnerV1",0.5};
			equivalentTo = "UH60Gunner";
			interpolationSpeed = 1;
			connectTo[] = {"UH60GunnerDying",1};
		};
		class UH60GunnerV1: UH60Gunner {
			file = "UH60Gunner.rtm";
			speed = -4;
			looped = 1;
		};
		class UH60GunnerDying: DefaultDie {
			actions = "NoActions";
			file = "UH60Gunnersmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"UH60Gunner",1};
		};
		class UH60GunnerDead: UH60GunnerDying {
			actions = "DeadActions";
			file = "UH60Gunnersmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"UH60GunnerDying",1};
			connectTo[] = {"DeadState",1};
		};
		class AH1Pilot: Driver {
			file = "AH1Pilotstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"AH1PilotV1",0.7,"AH1Pilot"};
			interpolateWith[] = {"AH1PilotV1",0.5};
			equivalentTo = "AH1Pilot";
			interpolationSpeed = 1;
			connectTo[] = {"AH1PilotDying",1};
		};
		class AH1PilotV1: AH1Pilot {
			file = "AH1Pilot.rtm";
			speed = -4;
			looped = 1;
		};
		class AH1PilotDying: DefaultDie {
			actions = "NoActions";
			file = "AH1Pilotsmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"AH1Pilot",1};
		};
		class AH1PilotDead: AH1PilotDying {
			actions = "DeadActions";
			file = "AH1Pilotsmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"AH1PilotDying",1};
			connectTo[] = {"DeadState",1};
		};
		class AH1Gunner: Driver {
			file = "AH1Gunnerstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"AH1GunnerV1",0.7,"AH1Gunner"};
			interpolateWith[] = {"AH1GunnerV1",0.5};
			equivalentTo = "AH1Gunner";
			interpolationSpeed = 1;
			connectTo[] = {"AH1GunnerDying",1};
		};
		class AH1GunnerV1: AH1Gunner {
			file = "AH1Gunner.rtm";
			speed = -4;
			looped = 1;
		};
		class AH1GunnerDying: DefaultDie {
			actions = "NoActions";
			file = "AH1Gunnersmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"AH1Gunner",1};
		};
		class AH1GunnerDead: AH1GunnerDying {
			actions = "DeadActions";
			file = "AH1Gunnersmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"AH1GunnerDying",1};
			connectTo[] = {"DeadState",1};
		};
		class A10Pilot: Driver {
			file = "A10Pilotstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"A10PilotV1",0.7,"A10Pilot"};
			interpolateWith[] = {"A10PilotV1",0.5};
			equivalentTo = "A10Pilot";
			interpolationSpeed = 1;
			connectTo[] = {"A10PilotDying",1};
		};
		class A10PilotV1: A10Pilot {
			file = "A10Pilot.rtm";
			speed = -4;
			looped = 1;
		};
		class A10PilotDying: DefaultDie {
			actions = "NoActions";
			file = "A10Pilotsmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"A10Pilot",1};
		};
		class A10PilotDead: A10PilotDying {
			actions = "DeadActions";
			file = "A10Pilotsmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"A10PilotDying",1};
			connectTo[] = {"DeadState",1};
		};
		class CesnaPilot: Driver {
			file = "CesnaPilotstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"CesnaPilotV1",0.7,"CesnaPilot"};
			interpolateWith[] = {"CesnaPilotV1",0.5};
			equivalentTo = "CesnaPilot";
			interpolationSpeed = 1;
			connectTo[] = {"CesnaPilotDying",1};
		};
		class CesnaPilotV1: CesnaPilot {
			file = "CesnaPilot.rtm";
			speed = -4;
			looped = 1;
		};
		class CesnaPilotDying: DefaultDie {
			actions = "NoActions";
			file = "CesnaPilotsmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"CesnaPilot",1};
		};
		class CesnaPilotDead: CesnaPilotDying {
			actions = "DeadActions";
			file = "CesnaPilotsmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"CesnaPilotDying",1};
			connectTo[] = {"DeadState",1};
		};
		class CesnaCargo: Driver {
			file = "CesnaCargostat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"CesnaCargoV1",0.7,"CesnaCargo"};
			interpolateWith[] = {"CesnaCargoV1",0.5};
			equivalentTo = "CesnaCargo";
			interpolationSpeed = 1;
			connectTo[] = {"CesnaCargoDying",1};
		};
		class CesnaCargoV1: CesnaCargo {
			file = "CesnaCargo.rtm";
			speed = -4;
			looped = 1;
		};
		class CesnaCargoDying: DefaultDie {
			actions = "NoActions";
			file = "CesnaCargosmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"CesnaCargo",1};
		};
		class CesnaCargoDead: CesnaCargoDying {
			actions = "DeadActions";
			file = "CesnaCargosmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"CesnaCargoDying",1};
			connectTo[] = {"DeadState",1};
		};
		class Mi17Pilot: Driver {
			file = "Mi17Pilotstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"Mi17PilotV1",0.7,"Mi17Pilot"};
			interpolateWith[] = {"Mi17PilotV1",0.5};
			equivalentTo = "Mi17Pilot";
			interpolationSpeed = 1;
			connectTo[] = {"Mi17PilotDying",1};
		};
		class Mi17PilotV1: Mi17Pilot {
			file = "Mi17Pilot.rtm";
			speed = -4;
			looped = 1;
		};
		class Mi17PilotDying: DefaultDie {
			actions = "NoActions";
			file = "Mi17Pilotsmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"Mi17Pilot",1};
		};
		class Mi17PilotDead: Mi17PilotDying {
			actions = "DeadActions";
			file = "Mi17Pilotsmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"Mi17PilotDying",1};
			connectTo[] = {"DeadState",1};
		};
		class Mi24Pilot: Driver {
			file = "Mi24Pilotstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"Mi24PilotV1",0.7,"Mi24Pilot"};
			interpolateWith[] = {"Mi24PilotV1",0.5};
			equivalentTo = "Mi24Pilot";
			interpolationSpeed = 1;
			connectTo[] = {"Mi24PilotDying",1};
		};
		class Mi24PilotV1: Mi24Pilot {
			file = "Mi24Pilot.rtm";
			speed = -4;
			looped = 1;
		};
		class Mi24PilotDying: DefaultDie {
			actions = "NoActions";
			file = "Mi24Pilotsmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"Mi24Pilot",1};
		};
		class Mi24PilotDead: Mi24PilotDying {
			actions = "DeadActions";
			file = "Mi24Pilotsmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"Mi24PilotDying",1};
			connectTo[] = {"DeadState",1};
		};
		class Mi24Gunner: Driver {
			file = "Mi24Gunnerstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"Mi24GunnerV1",0.7,"Mi24Gunner"};
			interpolateWith[] = {"Mi24GunnerV1",0.5};
			equivalentTo = "Mi24Gunner";
			interpolationSpeed = 1;
			connectTo[] = {"Mi24GunnerDying",1};
		};
		class Mi24GunnerV1: Mi24Gunner {
			file = "Mi24Gunner.rtm";
			speed = -4;
			looped = 1;
		};
		class Mi24GunnerDying: DefaultDie {
			actions = "NoActions";
			file = "Mi24Gunnersmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"Mi24Gunner",1};
		};
		class Mi24GunnerDead: Mi24GunnerDying {
			actions = "DeadActions";
			file = "Mi24Gunnersmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"Mi24GunnerDying",1};
			connectTo[] = {"DeadState",1};
		};
		class 5TDriver: Driver {
			file = "5TDriverstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"5TDriverV1",0.7,"5TDriver"};
			interpolateWith[] = {"5TDriverV1",0.5};
			equivalentTo = "5TDriver";
			interpolationSpeed = 1;
			connectTo[] = {"5TDriverDying",1};
		};
		class 5TDriverV1: 5TDriver {
			file = "5TDriver.rtm";
			speed = -4;
			looped = 1;
		};
		class 5TDriverDying: DefaultDie {
			actions = "NoActions";
			file = "5TDriversmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"5TDriver",1};
		};
		class 5TDriverDead: 5TDriverDying {
			actions = "DeadActions";
			file = "5TDriversmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"5TDriverDying",1};
			connectTo[] = {"DeadState",1};
		};
		class 5TCoDriver: Driver {
			file = "5TCoDriverstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"5TCoDriverV1",0.7,"5TCoDriver"};
			interpolateWith[] = {"5TCoDriverV1",0.5};
			equivalentTo = "5TCoDriver";
			interpolationSpeed = 1;
			connectTo[] = {"5TCoDriverDying",1};
		};
		class 5TCoDriverV1: 5TCoDriver {
			file = "5TCoDriver.rtm";
			speed = -4;
			looped = 1;
		};
		class 5TCoDriverDying: DefaultDie {
			actions = "NoActions";
			file = "5TCoDriversmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"5TCoDriver",1};
		};
		class 5TCoDriverDead: 5TCoDriverDying {
			actions = "DeadActions";
			file = "5TCoDriversmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"5TCoDriverDying",1};
			connectTo[] = {"DeadState",1};
		};
		class UralDriver: Driver {
			file = "UralDriverstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"UralDriverV1",0.7,"UralDriver"};
			interpolateWith[] = {"UralDriverV1",0.5};
			equivalentTo = "UralDriver";
			interpolationSpeed = 1;
			connectTo[] = {"UralDriverDying",1};
		};
		class UralDriverV1: UralDriver {
			file = "UralDriver.rtm";
			speed = -4;
			looped = 1;
		};
		class UralDriverDying: DefaultDie {
			actions = "NoActions";
			file = "UralDriversmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"UralDriver",1};
		};
		class UralDriverDead: UralDriverDying {
			actions = "DeadActions";
			file = "UralDriversmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"UralDriverDying",1};
			connectTo[] = {"DeadState",1};
		};
		class UralCoDriver: Driver {
			file = "UralCoDriverstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"UralCoDriverV1",0.7,"UralCoDriver"};
			interpolateWith[] = {"UralCoDriverV1",0.5};
			equivalentTo = "UralCoDriver";
			interpolationSpeed = 1;
			connectTo[] = {"UralCoDriverDying",1};
		};
		class UralCoDriverV1: UralCoDriver {
			file = "UralCoDriver.rtm";
			speed = -4;
			looped = 1;
		};
		class UralCoDriverDying: DefaultDie {
			actions = "NoActions";
			file = "UralCoDriversmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"UralCoDriver",1};
		};
		class UralCoDriverDead: UralCoDriverDying {
			actions = "DeadActions";
			file = "UralCoDriversmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"UralCoDriverDying",1};
			connectTo[] = {"DeadState",1};
		};
		class V3SDriver: Driver {
			file = "V3SDriverstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"V3SDriverV1",0.7,"V3SDriver"};
			interpolateWith[] = {"V3SDriverV1",0.5};
			equivalentTo = "V3SDriver";
			interpolationSpeed = 1;
			connectTo[] = {"V3SDriverDying",1};
		};
		class V3SDriverV1: V3SDriver {
			file = "V3SDriver.rtm";
			speed = -4;
			looped = 1;
		};
		class V3SDriverDying: DefaultDie {
			actions = "NoActions";
			file = "V3SDriversmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"V3SDriver",1};
		};
		class V3SDriverDead: V3SDriverDying {
			actions = "DeadActions";
			file = "V3SDriversmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"V3SDriverDying",1};
			connectTo[] = {"DeadState",1};
		};
		class V3SCoDriver: Driver {
			file = "V3SCoDriverstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"V3SCoDriverV1",0.7,"V3SCoDriver"};
			interpolateWith[] = {"V3SCoDriverV1",0.5};
			equivalentTo = "V3SCoDriver";
			interpolationSpeed = 1;
			connectTo[] = {"V3SCoDriverDying",1};
		};
		class V3SCoDriverV1: V3SCoDriver {
			file = "V3SCoDriver.rtm";
			speed = -4;
			looped = 1;
		};
		class V3SCoDriverDying: DefaultDie {
			actions = "NoActions";
			file = "V3SCoDriversmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"V3SCoDriver",1};
		};
		class V3SCoDriverDead: V3SCoDriverDying {
			actions = "DeadActions";
			file = "V3SCoDriversmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"V3SCoDriverDying",1};
			connectTo[] = {"DeadState",1};
		};
		class JeepDriver: Driver {
			file = "JeepDriverstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"JeepDriverV1",0.7,"JeepDriver"};
			interpolateWith[] = {"JeepDriverV1",0.5};
			equivalentTo = "JeepDriver";
			interpolationSpeed = 1;
			connectTo[] = {"JeepDriverDying",1};
		};
		class JeepDriverV1: JeepDriver {
			file = "JeepDriver.rtm";
			speed = -4;
			looped = 1;
		};
		class JeepDriverDying: DefaultDie {
			actions = "NoActions";
			file = "JeepDriversmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"JeepDriver",1};
		};
		class JeepDriverDead: JeepDriverDying {
			actions = "DeadActions";
			file = "JeepDriversmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"JeepDriverDying",1};
			connectTo[] = {"DeadState",1};
		};
		class JeepGunner: Driver {
			file = "JeepGunnerstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"JeepGunnerV1",0.7,"JeepGunner"};
			interpolateWith[] = {"JeepGunnerV1",0.5};
			equivalentTo = "JeepGunner";
			interpolationSpeed = 1;
			connectTo[] = {"JeepGunnerDying",1};
		};
		class JeepGunnerV1: JeepGunner {
			file = "JeepGunner.rtm";
			speed = -4;
			looped = 1;
		};
		class JeepGunnerDying: DefaultDie {
			actions = "NoActions";
			file = "JeepGunnersmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"JeepGunner",1};
		};
		class JeepGunnerDead: JeepGunnerDying {
			actions = "DeadActions";
			file = "JeepGunnersmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"JeepGunnerDying",1};
			connectTo[] = {"DeadState",1};
		};
		class JeepCoDriver: Driver {
			file = "JeepCoDriverstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"JeepCoDriverV1",0.7,"JeepCoDriver"};
			interpolateWith[] = {"JeepCoDriverV1",0.5};
			equivalentTo = "JeepCoDriver";
			interpolationSpeed = 1;
			connectTo[] = {"JeepCoDriverDying",1};
		};
		class JeepCoDriverV1: JeepCoDriver {
			file = "JeepCoDriver.rtm";
			speed = -4;
			looped = 1;
		};
		class JeepCoDriverDying: DefaultDie {
			actions = "NoActions";
			file = "JeepCoDriversmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"JeepCoDriver",1};
		};
		class JeepCoDriverDead: JeepCoDriverDying {
			actions = "DeadActions";
			file = "JeepCoDriversmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"JeepCoDriverDying",1};
			connectTo[] = {"DeadState",1};
		};
		class JeepCoDriverBack: Driver {
			file = "JeepCoDriverBackstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"JeepCoDriverBackV1",0.7,"JeepCoDriverBack"};
			interpolateWith[] = {"JeepCoDriverBackV1",0.5};
			equivalentTo = "JeepCoDriverBack";
			interpolationSpeed = 1;
			connectTo[] = {"JeepCoDriverBackDying",1};
		};
		class JeepCoDriverBackV1: JeepCoDriverBack {
			file = "JeepCoDriverBack.rtm";
			speed = -4;
			looped = 1;
		};
		class JeepCoDriverBackDying: DefaultDie {
			actions = "NoActions";
			file = "JeepCoDriverBacksmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"JeepCoDriverBack",1};
		};
		class JeepCoDriverBackDead: JeepCoDriverBackDying {
			actions = "DeadActions";
			file = "JeepCoDriverBacksmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"JeepCoDriverBackDying",1};
			connectTo[] = {"DeadState",1};
		};
		class UazDriver: Driver {
			file = "UazDriverstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"UazDriverV1",0.7,"UazDriver"};
			interpolateWith[] = {"UazDriverV1",0.5};
			equivalentTo = "UazDriver";
			interpolationSpeed = 1;
			connectTo[] = {"UazDriverDying",1};
		};
		class UazDriverV1: UazDriver {
			file = "UazDriver.rtm";
			speed = -4;
			looped = 1;
		};
		class UazDriverDying: DefaultDie {
			actions = "NoActions";
			file = "UazDriversmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"UazDriver",1};
		};
		class UazDriverDead: UazDriverDying {
			actions = "DeadActions";
			file = "UazDriversmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"UazDriverDying",1};
			connectTo[] = {"DeadState",1};
		};
		class UazCoDriver: Driver {
			file = "UazCoDriverstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"UazCoDriverV1",0.7,"UazCoDriver"};
			interpolateWith[] = {"UazCoDriverV1",0.5};
			equivalentTo = "UazCoDriver";
			interpolationSpeed = 1;
			connectTo[] = {"UazCoDriverDying",1};
		};
		class UazCoDriverV1: UazCoDriver {
			file = "UazCoDriver.rtm";
			speed = -4;
			looped = 1;
		};
		class UazCoDriverDying: DefaultDie {
			actions = "NoActions";
			file = "UazCoDriversmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"UazCoDriver",1};
		};
		class UazCoDriverDead: UazCoDriverDying {
			actions = "DeadActions";
			file = "UazCoDriversmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"UazCoDriverDying",1};
			connectTo[] = {"DeadState",1};
		};
		class SkodaDriver: Driver {
			file = "SkodaDriverstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"SkodaDriverV1",0.7,"SkodaDriver"};
			interpolateWith[] = {"SkodaDriverV1",0.5};
			equivalentTo = "SkodaDriver";
			interpolationSpeed = 1;
			connectTo[] = {"SkodaDriverDying",1};
		};
		class SkodaDriverV1: SkodaDriver {
			file = "SkodaDriver.rtm";
			speed = -4;
			looped = 1;
		};
		class SkodaDriverDying: DefaultDie {
			actions = "NoActions";
			file = "SkodaDriversmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"SkodaDriver",1};
		};
		class SkodaDriverDead: SkodaDriverDying {
			actions = "DeadActions";
			file = "SkodaDriversmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"SkodaDriverDying",1};
			connectTo[] = {"DeadState",1};
		};
		class SkodaCoDriver: Driver {
			file = "SkodaCoDriverstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"SkodaCoDriverV1",0.7,"SkodaCoDriver"};
			interpolateWith[] = {"SkodaCoDriverV1",0.5};
			equivalentTo = "SkodaCoDriver";
			interpolationSpeed = 1;
			connectTo[] = {"SkodaCoDriverDying",1};
		};
		class SkodaCoDriverV1: SkodaCoDriver {
			file = "SkodaCoDriver.rtm";
			speed = -4;
			looped = 1;
		};
		class SkodaCoDriverDying: DefaultDie {
			actions = "NoActions";
			file = "SkodaCoDriversmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"SkodaCoDriver",1};
		};
		class SkodaCoDriverDead: SkodaCoDriverDying {
			actions = "DeadActions";
			file = "SkodaCoDriversmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"SkodaCoDriverDying",1};
			connectTo[] = {"DeadState",1};
		};
		class SkodaCoDriverBack: Driver {
			file = "SkodaCoDriverBackstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"SkodaCoDriverBackV1",0.7,"SkodaCoDriverBack"};
			interpolateWith[] = {"SkodaCoDriverBackV1",0.5};
			equivalentTo = "SkodaCoDriverBack";
			interpolationSpeed = 1;
			connectTo[] = {"SkodaCoDriverBackDying",1};
		};
		class SkodaCoDriverBackV1: SkodaCoDriverBack {
			file = "SkodaCoDriverBack.rtm";
			speed = -4;
			looped = 1;
		};
		class SkodaCoDriverBackDying: DefaultDie {
			actions = "NoActions";
			file = "SkodaCoDriverBacksmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"SkodaCoDriverBack",1};
		};
		class SkodaCoDriverBackDead: SkodaCoDriverBackDying {
			actions = "DeadActions";
			file = "SkodaCoDriverBacksmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"SkodaCoDriverBackDying",1};
			connectTo[] = {"DeadState",1};
		};
		class PBRDriver: Driver {
			file = "PBRDriverstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"PBRDriverV1",0.7,"PBRDriver"};
			interpolateWith[] = {"PBRDriverV1",0.5};
			equivalentTo = "PBRDriver";
			interpolationSpeed = 1;
			connectTo[] = {"PBRDriverDying",1};
		};
		class PBRDriverV1: PBRDriver {
			file = "PBRDriver.rtm";
			speed = -4;
			looped = 1;
		};
		class PBRDriverDying: DefaultDie {
			actions = "NoActions";
			file = "PBRDriversmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"PBRDriver",1};
		};
		class PBRDriverDead: PBRDriverDying {
			actions = "DeadActions";
			file = "PBRDriversmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"PBRDriverDying",1};
			connectTo[] = {"DeadState",1};
		};
		class PBRGunner: Driver {
			file = "PBRGunnerstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"PBRGunnerV1",0.7,"PBRGunner"};
			interpolateWith[] = {"PBRGunnerV1",0.5};
			equivalentTo = "PBRGunner";
			interpolationSpeed = 1;
			connectTo[] = {"PBRGunnerDying",1};
		};
		class PBRGunnerV1: PBRGunner {
			file = "PBRGunner.rtm";
			speed = -4;
			looped = 1;
		};
		class PBRGunnerDying: DefaultDie {
			actions = "NoActions";
			file = "PBRGunnersmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"PBRGunner",1};
		};
		class PBRGunnerDead: PBRGunnerDying {
			actions = "DeadActions";
			file = "PBRGunnersmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"PBRGunnerDying",1};
			connectTo[] = {"DeadState",1};
		};
		class M2Gunner: Driver {
			file = "M2Gunnerstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"M2GunnerV1",0.7,"M2Gunner"};
			interpolateWith[] = {"M2GunnerV1",0.5};
			equivalentTo = "M2Gunner";
			interpolationSpeed = 1;
			connectTo[] = {"M2GunnerDying",1};
		};
		class M2GunnerV1: M2Gunner {
			file = "M2Gunner.rtm";
			speed = -4;
			looped = 1;
		};
		class M2GunnerDying: DefaultDie {
			actions = "NoActions";
			file = "M2Gunnersmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"M2Gunner",1};
		};
		class M2GunnerDead: M2GunnerDying {
			actions = "DeadActions";
			file = "M2Gunnersmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"M2GunnerDying",1};
			connectTo[] = {"DeadState",1};
		};
		class HRLGunner: Driver {
			file = "HRLGunnerstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"HRLGunnerV1",0.7,"HRLGunner"};
			interpolateWith[] = {"HRLGunnerV1",0.5};
			equivalentTo = "HRLGunner";
			interpolationSpeed = 1;
			connectTo[] = {"HRLGunnerDying",1};
		};
		class HRLGunnerV1: HRLGunner {
			file = "HRLGunner.rtm";
			speed = -4;
			looped = 1;
		};
		class HRLGunnerDying: DefaultDie {
			actions = "NoActions";
			file = "HRLGunnersmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"HRLGunner",1};
		};
		class HRLGunnerDead: HRLGunnerDying {
			actions = "DeadActions";
			file = "HRLGunnersmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"HRLGunnerDying",1};
			connectTo[] = {"DeadState",1};
		};
		class ScudDriver: Driver {
			file = "ScudDriverstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"ScudDriverV1",0.7,"ScudDriver"};
			interpolateWith[] = {"ScudDriverV1",0.5};
			equivalentTo = "ScudDriver";
			interpolationSpeed = 1;
			connectTo[] = {"ScudDriverDying",1};
		};
		class ScudDriverV1: ScudDriver {
			file = "ScudDriver.rtm";
			speed = -4;
			looped = 1;
		};
		class ScudDriverDying: DefaultDie {
			actions = "NoActions";
			file = "ScudDriversmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"ScudDriver",1};
		};
		class ScudDriverDead: ScudDriverDying {
			actions = "DeadActions";
			file = "ScudDriversmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"ScudDriverDying",1};
			connectTo[] = {"DeadState",1};
		};
		class ScudCoDriver: Driver {
			file = "ScudCoDriverstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"ScudCoDriverV1",0.7,"ScudCoDriver"};
			interpolateWith[] = {"ScudCoDriverV1",0.5};
			equivalentTo = "ScudCoDriver";
			interpolationSpeed = 1;
			connectTo[] = {"ScudCoDriverDying",1};
		};
		class ScudCoDriverV1: ScudCoDriver {
			file = "ScudCoDriver.rtm";
			speed = -4;
			looped = 1;
		};
		class ScudCoDriverDying: DefaultDie {
			actions = "NoActions";
			file = "ScudCoDriversmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"ScudCoDriver",1};
		};
		class ScudCoDriverDead: ScudCoDriverDying {
			actions = "DeadActions";
			file = "ScudCoDriversmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"ScudCoDriverDying",1};
			connectTo[] = {"DeadState",1};
		};
		class TractorDriver: Driver {
			file = "traktordriverstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"TractorDriverV1",0.7,"TractorDriver"};
			interpolateWith[] = {"TractorDriverV1",0.5};
			equivalentTo = "TractorDriver";
			interpolationSpeed = 1;
			connectTo[] = {"TractorDriverDying",1};
		};
		class TractorDriverV1: TractorDriver {
			file = "traktordriver.rtm";
			speed = -4;
			looped = 1;
		};
		class TractorDriverDying: DefaultDie {
			actions = "NoActions";
			file = "traktordriversmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"TractorDriver",1};
		};
		class TractorDriverDead: TractorDriverDying {
			actions = "DeadActions";
			file = "traktordriversmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"TractorDriverDying",1};
			connectTo[] = {"DeadState",1};
		};
		class Para: Driver {
			file = "Parastat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"ParaV1",0.7,"Para"};
			interpolateWith[] = {"ParaV1",0.5};
			equivalentTo = "Para";
			interpolationSpeed = 1;
			connectTo[] = {"ParaDying",1};
		};
		class ParaV1: Para {
			file = "Para.rtm";
			speed = -4;
			looped = 1;
		};
		class ParaDying: DefaultDie {
			actions = "NoActions";
			file = "Parasmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"Para",1};
		};
		class ParaDead: ParaDying {
			actions = "DeadActions";
			file = "Parasmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"ParaDying",1};
			connectTo[] = {"DeadState",1};
		};
		class StandTurnR: StandBase {
			actions = "StandActions";
			file = "dopravabez.rtm";
			speed = -1.6;
			looped = 1;
			soundEnabled = 0;
			relSpeedMin = 0.5;
			relSpeedMax = 1.0;
			duty = -1;
			interpolationSpeed = 5;
		};
		class StandTurnL: StandBase {
			actions = "StandActions";
			file = "dolevabez.rtm";
			speed = -1.6;
			looped = 1;
			soundEnabled = 0;
			relSpeedMin = 0.5;
			relSpeedMax = 1.0;
			duty = -1;
			interpolationSpeed = 5;
		};
		class StandStrokeFist: Default {
			actions = "StandActions";
			file = "bezuder.rtm";
			speed = -0.97;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			duty = 0.6;
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
			connectFrom[] = {"Stand",1};
			connectTo[] = {"StandStrokeFistEnd",1};
		};
		class StandStrokeFistEnd: Default {
			actions = "StandActions";
			file = "bezstanistat.rtm";
			speed = 1e+010;
			looped = 1;
			disableWeapons = 1;
			soundEnabled = 0;
			duty = 0.6;
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
			connectTo[] = {"Stand",1};
		};
		class OnChair: StandBase {
			actions = "NoActions";
			file = "zidle.rtm";
			speed = 1e+010;
			looped = 1;
			soundEnabled = 0;
			duty = -1;
			interpolationSpeed = 2;
		};
		class EffectStand: StandBase {
			actions = "StandStandActions";
			file = "bezstanistill.rtm";
			speed = -8.8;
			looped = 1;
			soundEnabled = 0;
			duty = -1;
			interpolationSpeed = 2;
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
		};
		class EffectStandStill: StandBase {
			actions = "StandStillActions";
			file = "bezstanistat.rtm";
			speed = 1e+010;
			looped = 1;
			soundEnabled = 0;
			equivalentTo = "EffectStandStill";
			interpolationSpeed = 1;
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
		};
		class EffectStandTalk: StandBase {
			actions = "StandTalkActions";
			file = "bezpovidani.rtm";
			speed = -14.0;
			looped = 1;
			soundEnabled = 0;
			duty = -1;
			interpolationSpeed = 2;
		};
		class EffectStandSaluteStart: StandBase {
			actions = "StandSaluteActions";
			file = "bezhlas.rtm";
			speed = -0.5;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"Stand",2};
		};
		class EffectStandSalute: StandBase {
			actions = "StandSaluteActions";
			file = "bezhlasstat.rtm";
			speed = 1e+010;
			looped = 1;
			soundEnabled = 0;
			connectFrom[] = {"EffectStandSaluteStart",1};
			connectTo[] = {"EffectStandSaluteEnd",1};
		};
		class EffectStandSaluteEnd: StandBase {
			actions = "StandActions";
			file = "bezhlas2.rtm";
			speed = -0.5;
			looped = 0;
			soundEnabled = 0;
			connectTo[] = {"Stand",2};
		};
		class EffectStandmove: StandBase {
			actions = "StandStillActions";
			file = "bezstani.rtm";
			speed = -8.8;
			looped = 1;
			soundEnabled = 0;
			equivalentTo = "EffectStandStill";
			interpolationSpeed = 1;
		};
		class EffectStandSitDown: StandBase {
			actions = "SitActions";
			file = "bezsedi2.rtm";
			speed = -4.0;
			looped = 1;
			soundEnabled = 0;
			duty = -1;
			variantsPlayer[] = {"EffectStandSitDown",0.3,"EffectStandSitDownVer2",0.3,"EffectStandSitDownVer1"};
			equivalentTo = "EffectStandSitDown";
			interpolateTo[] = {"SitDownDying",0.1};
		};
		class EffectStandSitDownVer1: EffectStandSitDown {
			file = "bezsedi2.rtm";
			speed = 1e+010;
			looped = 1;
			interpolateTo[] = {"SitDownDying",0.1};
		};
		class EffectStandSitDownVer2: EffectStandSitDown {
			file = "bezsedi.rtm";
			speed = -4.6;
			looped = 1;
			interpolateTo[] = {"SitDownDying",0.1};
		};
		class EffectStandSitDownStill: EffectStandSitDown {
			file = "bezsedi.rtm";
			speed = 1e+010;
			interpolateTo[] = {"SitDownDying",0.1};
		};
		class StandToSitDown: StandBase {
			actions = "SitActions";
			file = "bezdosedu.rtm";
			speed = -3.2;
			looped = 0;
			soundEnabled = 0;
			duty = -1;
		};
		class SitDownToStand: StandBase {
			actions = "StandActions";
			file = "bezvztava.rtm";
			speed = -2.5;
			looped = 0;
			soundEnabled = 0;
			duty = -1;
		};
		class FXBase: StandBase {
			actions = "StandActions";
			looped = 0;
			soundEnabled = 0;
			duty = -1;
			interpolationSpeed = 1;
		};
		class FXStandToTel: FXBase {
			file = "ktelefonustart.rtm";
			speed = -0.5;
			connectTo[] = {"FXStandToTelHand",1};
		};
		class FXStandToTelHand: FXBase {
			file = "ktelefonuend.rtm";
			speed = -4.5;
			showItemInRightHand = 1;
		};
		class FXStandTelLoop: FXBase {
			file = "telloop.rtm";
			speed = -10.0;
			looped = 1;
			showItemInRightHand = 1;
		};
		class FXStandDropTel: FXBase {
			file = "poloztelefon.rtm";
			speed = -4.0;
			interpolateWith[] = {"FXStandToTel",1};
		};
		class FXStandFromTable: FXBase {
			file = "staniodstolu.rtm";
			speed = -3.0;
		};
		class FXStandUnivTable: FXBase {
			file = "univsezeni.rtm";
			speed = -8.0;
			looped = 1;
		};
		class FXStandToTable: FXBase {
			file = "sedkestolu.rtm";
			speed = -2.5;
		};
		class FXStandDangle: FXBase {
			file = "houpese.rtm";
			speed = -4.0;
		};
		class FXStandToDip: FXBase {
			file = "dokliku.rtm";
			speed = -2.0;
			connectFrom[] = {"Stand",1};
			connectTo[] = {"FXStandDip",1};
		};
		class FXStandDip: FXBase {
			file = "klik.rtm";
			speed = -1.5;
			looped = 1;
		};
		class FXStandFromDip: FXBase {
			file = "zkliku.rtm";
			speed = -2.0;
			connectFrom[] = {"FXStandDip",1};
			connectTo[] = {"Stand",1};
		};
		class FXStandSur: FXBase {
			file = "zajatecstani.rtm";
			speed = -2.0;
		};
		class FXStandSurDead: FXBase {
			file = "zajatecsmrtb.rtm";
			speed = -2.0;
		};
		class FXStandSurUniv: FXBase {
			file = "zajatecstat.rtm";
			speed = 1e+010;
		};
		class FXStandSurDown: FXBase {
			file = "lehzajatec.rtm";
			speed = -3.5;
		};
		class FXStandRotateTable: FXBase {
			file = "kestolu.rtm";
			speed = -2.0;
		};
		class FXStandShowTable: FXBase {
			file = "ukazujeustolu.rtm";
			speed = -3.0;
		};
		class FXStandEndTable: FXBase {
			file = "ukazodstolu.rtm";
			speed = -5.0;
		};
		class FXStandStraight: FXBase {
			file = "staninic.rtm";
			speed = -2.0;
		};
		class FXStandBug: FXBase {
			file = "buzeruje.rtm";
			speed = -10.0;
		};
		class FXStandhip: FXBase {
			file = "rucevbok.rtm";
			speed = -5.0;
		};
		class FXStandAtt: FXBase {
			file = "uspozorstat.rtm";
			speed = 1e+010;
		};
		class FXStandAttVar1: FXBase {
			file = "rucevbok.rtm";
			speed = -3.0;
		};
		class FXangel: FXBase {
			file = "fx_angel_stand.rtm";
			speed = 1e+010;
		};
		class FXangel2: FXBase {
			file = "fx_angel_stand2.rtm";
			speed = 1e+010;
		};
		class LadderStatic: LadderBase {
			file = "upDownStat2.rtm";
			looped = 1;
			soundEnabled = 0;
			speed = 1e+010;
			duty = -1;
		};
		class LadderUpStart: LadderUpBase {
			file = "upstart2.rtm";
			looped = 0;
			soundEnabled = 0;
			speed = -0.75;
			duty = -0.5;
			connectFrom[] = {"Stand",1};
			connectTo[] = {"LadderStatic",1};
		};
		class LadderUpLoop: LadderUpBase {
			file = "uploop2.rtm";
			looped = 1;
			soundEnabled = 0;
			speed = -0.6;
			duty = -0.5;
			interpolateWith[] = {"LadderStatic",1};
		};
		class LadderUpEnd: LadderBase {
			actions = "StandActions";
			file = "upend2.rtm";
			looped = 0;
			soundEnabled = 0;
			speed = -1;
			duty = -0.5;
			onLadder = 0;
			connectFrom[] = {"LadderStatic",1};
			connectTo[] = {"Stand",1};
		};
		class LadderDownStart: LadderDownBase {
			file = "downstart2.rtm";
			looped = 0;
			soundEnabled = 0;
			speed = -1;
			duty = -0.5;
			connectFrom[] = {"Stand",1};
			connectTo[] = {"LadderStatic",1};
		};
		class LadderDownLoop: LadderDownBase {
			file = "downloop3.rtm";
			looped = 1;
			soundEnabled = 0;
			speed = -0.6;
			duty = -0.5;
			interpolateWith[] = {"LadderStatic",1};
		};
		class LadderDownEnd: LadderDownBase {
			actions = "StandActions";
			file = "downend2.rtm";
			looped = 0;
			soundEnabled = 0;
			speed = -1;
			duty = -0.5;
			onLadder = 0;
			connectFrom[] = {"LadderStatic",1};
			connectTo[] = {"Stand",0.9};
		};
		class EffectWeaponPanic: Default {
			file = "szmaten.rtm";
			speed = -9.0;
			looped = 1;
			soundEnabled = 0;
			duty = -1;
		};
		class CommandEngageAtWill: Default {
			file = "sengageatwill.rtm";
			speed = -3.0;
			looped = 1;
			soundEnabled = 0;
			duty = -1;
		};
		class CommandFireAtWill: Default {
			file = "sengageatwill.rtm";
			speed = -3.0;
			looped = 1;
			soundEnabled = 0;
			duty = -1;
		};
		class CommandFormation: Default {
			file = "sformace.rtm";
			speed = -3.0;
			looped = 1;
			soundEnabled = 0;
			duty = -1;
		};
		class CommandHoldFire: Default {
			file = "sholdfire.rtm";
			speed = -3.0;
			looped = 1;
			soundEnabled = 0;
			duty = -1;
		};
		class CommandStop: Default {
			file = "sstop.rtm";
			speed = -3.0;
			looped = 1;
			soundEnabled = 0;
			duty = -1;
		};
		class CommandForward: Default {
			file = "svpred.rtm";
			speed = -3.0;
			looped = 1;
			soundEnabled = 0;
			duty = -1;
		};
		class EffectCombatStand: Default {
			file = "sstani.rtm";
			speed = -3.0;
			looped = 1;
			soundEnabled = 0;
			duty = -1;
		};
		class StandGetInCar: StandBase {
			actions = "StandActions";
			file = "bezosobak.rtm";
			speed = -2.25;
			looped = 0;
			soundEnabled = 0;
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
		};
		class StandGetInTank: StandBase {
			actions = "StandActions";
			file = "nastupbez.rtm";
			speed = -1.3;
			looped = 0;
			soundEnabled = 0;
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
		};
		class StandGetOutTank: StandBase {
			actions = "StandActions";
			file = "bezseskok.rtm";
			speed = -3.065;
			looped = 0;
			soundEnabled = 0;
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
		};
		class CombatGetInCar: Default {
			actions = "CombatActions";
			file = "sosobak.rtm";
			speed = -1.23;
			looped = 0;
			soundEnabled = 0;
			disableWeapons = 1;
			enableOptics = 0;
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class CombatGetInTank: Default {
			actions = "CombatActions";
			file = "snastup.rtm";
			speed = -2.38;
			looped = 0;
			soundEnabled = 0;
			disableWeapons = 1;
			enableOptics = 0;
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class CombatGetOutTank: Default {
			actions = "CombatActions";
			file = "sdoskok.rtm";
			speed = -0.915;
			looped = 0;
			soundEnabled = 0;
			disableWeapons = 1;
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class CivilGetInCar: Default {
			actions = "CivilActions";
			file = "civilosobak.rtm";
			speed = -1.23;
			looped = 0;
			soundEnabled = 0;
			disableWeapons = 1;
			enableOptics = 0;
			interpolateTo[] = {"CivilDying",0.1,"CivilDyingVer2",0.1};
		};
		class CivilGetInTank: Default {
			actions = "CivilActions";
			file = "civilnastup.rtm";
			speed = -2.38;
			looped = 0;
			soundEnabled = 0;
			disableWeapons = 1;
			enableOptics = 0;
			interpolateTo[] = {"CivilDying",0.1,"CivilDyingVer2",0.1};
		};
		class CivilGetOutTank: Default {
			actions = "CivilActions";
			file = "civilseskok.rtm";
			speed = -0.915;
			looped = 0;
			soundEnabled = 0;
			disableWeapons = 1;
			interpolateTo[] = {"CivilDying",0.1,"CivilDyingVer2",0.1};
		};
	};
	class Interpolations {
		standF[] = {1,"Stand","StandWalkF","StandWalkLF","StandWalkRF","StandWalkL","StandWalkR","StandRunF"};
		standB[] = {1,"Stand","StandWalkLB","StandWalkRB","StandWalkB"};
		combatF[] = {0.9,"Combat","CombatStillPlayer","CombatRelaxed","CombatRunF","CombatRunLF","CombatRunRF","CombatRunL","CombatRunR","CombatSprintF","CombatSprintLF","CombatSprintRF","CombatWalkF","CombatWalkLF","CombatWalkRF","CombatWalkL","CombatWalkR"};
		combatB[] = {1,"Combat","CombatStillPlayer","CombatRelaxed","CombatRunLB","CombatRunRB","CombatRunB","CombatWalkLB","CombatWalkRB","CombatWalkB"};
		crouchF[] = {0.5,"CrouchIM","CrouchRunF","CrouchRunLF","CrouchRunRF","CrouchRunL","CrouchRunR","CrouchSprintF","CrouchSprintLF","CrouchSprintRF"};
		crouchFW[] = {0.5,"CrouchIM","CrouchWalkF","CrouchWalkLF","CrouchWalkRF","CrouchWalkL","CrouchWalkR"};
		crouchB[] = {0.5,"CrouchIM","CrouchRunLB","CrouchRunRB","CrouchRunB","CrouchWalkLB","CrouchWalkRB","CrouchWalkB"};
		civilF[] = {1,"Civil","CivilRunF","CivilRunLF","CivilRunRF","CivilRunL","CivilRunR","CivilWalkF","CivilWalkLF","CivilWalkRF","CivilWalkL","CivilWalkR"};
		civilB[] = {1,"Civil","CivilWalkLB","CivilWalkRB","CivilWalkB","CivilRunLB","CivilRunRB","CivilRunB"};
		lyingF[] = {1,"Lying","LyingCrawlF","LyingFastCrawlF","LyingCrawlLF","LyingCrawlRF","LyingCrawlL","LyingCrawlR"};
		lyingB[] = {1,"Lying","LyingCrawlLB","LyingCrawlRB","LyingCrawlB"};
		civilLyingF[] = {1,"CivilLying","CivilLyingCrawlF","CivilLyingFastCrawlF","CivilLyingCrawlLF","CivilLyingCrawlRF","CivilLyingCrawlL","CivilLyingCrawlR"};
		civilLyingB[] = {1,"CivilLying","CivilLyingCrawlLB","CivilLyingCrawlRB","CivilLyingCrawlB"};
		lyingVars[] = {0.1,"Lying","LyingStillV1","LyingTurnL","LyingTurnR"};
		civilLyingVars[] = {0.1,"CivilLying","CivilLyingStillV1"};
		combatVars[] = {0.1,"Combat","CombatStillPlayer","CombatStillV1"};
		combatReleaxedVars[] = {0.1,"Combat","CombatRelaxed","CombatRelaxedStill"};
		combatTurnRelaxed[] = {0.1,"CombatRelaxed","CombatTurnLRelaxed","CombatTurnRRelaxed"};
		combatTurn[] = {0.1,"Combat","CombatStillPlayer","CombatTurnL","CombatTurnR"};
		standTurn[] = {0.1,"Stand","StandTurnL","StandTurnR"};
		standFX[] = {1,"Stand","EffectStand","EffectStandTalk","EffectStand","EffectCombatStand","EffectStandStill","CommandFireAtWill","CommandFormation","CommandHoldFire","CommandStop","CommandForward"};
		standVars[] = {1,"Stand","StandVar2"};
		weaponF[] = {1,"Weapon","WeaponWalkF","WeaponWalkLF","WeaponWalkRF","WeaponWalkL","WeaponWalkR"};
		weaponB[] = {1,"Weapon","WeaponWalkLB","WeaponWalkRB","WeaponWalkB"};
		weaponTurn[] = {1,"Weapon","WeaponTurnL","WeaponTurnR"};
		civilLyingTrans[] = {2,"CivilLying","Lying"};
		civilCombatTrans[] = {2,"Combat","Civil"};
		civilStandTrans[] = {2,"Stand","Civil"};
		civilVars[] = {0.1,"Civil","CivilStillV1"};
		civilTurn[] = {1,"Civil","CivilTurnL","CivilTurnR"};
		cargoEquiv[] = {2,"M113Gunner","M113Driver","M113DriverOut","M60Gunner","M60Driver","M60DriverOut","M60Commander","M60CommanderOut","M1A1Gunner","M1A1Driver","M1A1DriverOut","M1A1Commander","Cargo"};
		cargoVars[] = {0.1,"Cargo","CargoVer1","CargoVer2","CargoVer3","CargoVer4","CargoVer5"};
		sitDownVars[] = {1.0,"EffectStandSitDown","EffectStandSitDownVer2","EffectStandSitDownVer1"};
	};
	transitionsInterpolated[] = {};
	transitionsSimple[] = {"Lying","LyingDying",1,"LyingDying","LyingDead",1,"CivilLying","CivilLyingDying",1,"CivilLyingDying","CivilLyingDead",1,"Stand","StandDying",1,"StandDying","StandDead",1,"Stand","StandDyingVer2",1,"StandDyingVer2","StandDeadVer2",1,"Weapon","WeaponDying",1,"WeaponDying","WeaponDead",1,"Weapon","WeaponDyingVer2",1,"WeaponDyingVer2","WeaponDeadVer2",1,"Cargo","CargoDying",1,"CargoDying","CargoDead",1,"Combat","CombatToWeapon",2,"CombatToWeapon","Weapon",2,"Lying","LyingToWeapon",2,"LyingToWeapon","Weapon",2,"Weapon","WeaponToLying",2,"WeaponToLying","Lying",2,"Combat","CombatReloadMagazine",2,"CombatReloadMagazine","Combat",2,"Combat","CombatReloadMGun",2,"CombatReloadMGun","Combat",2,"Combat","CombatReloadMortarStart",2,"CombatReloadMortarStart","CombatReloadMortarEnd",2,"CombatReloadMortarEnd","Combat",2,"Combat","CombatThrowGrenadeStart",2,"CombatThrowGrenadeStart","CombatThrowGrenadeEnd",2,"CombatThrowGrenadeEnd","Combat",2,"Stand","StandThrowGrenadeStart",2,"StandThrowGrenadeStart","StandThrowGrenadeEnd",2,"StandThrowGrenadeEnd","Stand",2,"Civil","CivilThrowGrenadeStart",2,"CivilThrowGrenadeStart","CivilThrowGrenadeEnd",2,"CivilThrowGrenadeEnd","Civil",2,"Lying","LyingThrowGrenadeStart",2,"LyingThrowGrenadeStart","LyingThrowGrenadeEnd",2,"LyingThrowGrenadeEnd","Lying",2,"CombatRunF","CombatRunThrowGrenadeStart",2,"CombatRunThrowGrenadeStart","CombatRunThrowGrenadeEnd",2,"CombatRunThrowGrenadeEnd","Combat",2,"CivilRunF","CivilRunThrowGrenadeStart",2,"CivilRunThrowGrenadeStart","CivilRunThrowGrenadeEnd",2,"CivilRunThrowGrenadeEnd","Civil",2,"Lying","LyingReloadMagazine",2,"LyingReloadMagazine","Lying",2,"Combat","CombatToBinoc",2,"CombatToBinoc","Binoc",2,"Binoc","BinocToCombat",2,"BinocToCombat","Combat",2,"Lying","LyingToBinocLying",2,"LyingToBinocLying","BinocLying",2,"BinocLying","BinocLyingToLying",2,"BinocLyingToLying","Lying",2,"Weapon","WeaponReloadAT",2,"WeaponReloadAT","Weapon",2,"Stand","StandToCombat",1,"StandToCombat","Combat",1,"Combat","CombatToStand",1,"CombatToStand","Stand",1,"Lying","LyingToCombat",1.2,"LyingToCombat","Combat",1.2,"Combat","CombatToLying",1.2,"CombatToLying","Lying",1.2,"CombatRunF","CombatRunFToLying",1,"CombatRunFToLying","Lying",1,"Lying","LyingToCombatRun",1,"LyingToCombatRun","CombatRunF",1,"Civil","CivilToCivilLying",1.2,"CivilToCivilLying","CivilLying",1.2,"CivilLying","CivilLyingToCivil",1.2,"CivilLyingToCivil","Civil",1.2,"Combat","CombatGetInCar",1,"CombatGetInCar","Combat",1,"Combat","CombatGetInTank",1,"CombatGetInTank","Combat",1,"CombatGetOutTank","Combat",1,"Civil","CivilGetInCar",1,"CivilGetInCar","Civil",1,"Civil","CivilGetInTank",1,"CivilGetInTank","Civil",1,"CivilGetOutTank","Civil",1,"Stand","StandGetInCar",1,"StandGetInCar","Stand",1,"Stand","StandGetInTank",1,"StandGetInTank","Stand",1,"StandGetOutTank","Stand",1,"Stand","StandToSitDown",1,"StandToSitDown","EffectStandSitDown",1,"EffectStandSitDown","SitDownToStand",1,"SitDownToStand","Stand",1,"EffectStandSitDown","SitDownDying",1,"SitDownDying","SitDownDead",1,"CombatDead","DeadState",10,"CombatDeadVer2","DeadState",10,"StandDead","DeadState",10,"StandDeadVer2","DeadState",10,"LyingDead","DeadState",10,"CivilLyingDead","DeadState",10,"WeaponDead","DeadState",10,"WeaponDeadVer2","DeadState",10,"SitDownDead","DeadState",10};
	transitionsDisabled[] = {};
};
class CfgAmmo {
	access = 1;
	class Default {
		access = 3;
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 1;
		minRange = 0.5;
		minRangeProbab = 0.5;
		midRange = 100;
		midRangeProbab = 0.8;
		maxRange = 450;
		maxRangeProbab = 0.05;
		model = "";
		proxyShape = "";
		simulation = "";
		cost = 0;
		maxSpeed = 0;
		cartridge = "";
		simulationStep = 0.05;
		tracerColor[] = {0.7,0.7,0.5,0.04};
		tracerColorR[] = {0.7,0.7,0.5,0.04};
		soundFly[] = {"",1,1};
		soundEngine[] = {"",1,1};
		soundHit[] = {"",1,1};
		hitGround[] = {"soundHit",1};
		hitMan[] = {"soundHit",1};
		hitArmor[] = {"soundHit",1};
		hitBuilding[] = {"soundHit",1};
		explosive = 1;
		irLock = 0;
		airLock = 0;
		laserLock = 0;
		manualControl = 0;
		maxControlRange = 350;
		maneuvrability = 1.0;
		sideAirFriction = 1;
		visibleFire = 0;
		audibleFire = 0;
		visibleFireTime = 0;
		initTime = 0;
		thrustTime = 1.5;
		thrust = 210;
	};
	class BulletSingle: Default {
		hit = 9;
		indirectHit = 2;
		indirectHitRange = 0.1;
		model = "shell";
		simulation = "shotBullet";
		simulationStep = 0.05;
		soundFly[] = {"objects\bulletnoise",0.25118864,0.7};
		explosive = 0;
		visibleFire = 16;
		audibleFire = 16;
		visibleFireTime = 3;
		minRange = 10;
		minRangeProbab = 0.1;
		midRange = 50;
		midRangeProbab = 0.38;
		maxRange = 200;
		maxRangeProbab = 0.04;
		soundHit1[] = {"weapons\bulletricochet1",0.031622775,1};
		soundHit2[] = {"weapons\bulletricochet2",0.031622775,1};
		soundHit3[] = {"weapons\bulletricochet3",0.031622775,1};
		soundHitMan1[] = {"weapons\bullethitman1",0.0125892535,1};
		soundHitMan2[] = {"weapons\bullethitman2",0.0125892535,1};
		soundHitArmor1[] = {"weapons\small_impact1",0.031622775,1};
		soundHitArmor2[] = {"weapons\Big_Impact2",0.031622775,1};
		soundHitBuilding1[] = {"weapons\bulletricochet4",0.031622775,1};
		soundHitBuilding2[] = {"weapons\bulletricochet5",0.031622775,1};
		hitGround[] = {"soundHit1",0.33,"soundHit2",0.33,"soundHit3",0.33};
		hitMan[] = {"soundHitMan1",0.5,"soundHitMan2",0.5};
		hitArmor[] = {"soundHitArmor1",0.7,"soundHitArmor2",0.3};
		hitBuilding[] = {"soundHitBuilding1",0.5,"soundHitBuilding2",0.5};
		cartridge = "FxCartridge";
		cost = 0.7;
	};
	class BulletBurst: BulletSingle {
		minRange = 0.5;
		minRangeProbab = 0.25;
		midRange = 70;
		midRangeProbab = 0.5;
		maxRange = 250;
		maxRangeProbab = 0.08;
		visibleFire = 25;
		audibleFire = 25;
		visibleFireTime = 5;
		cost = 2.1;
	};
	class BulletFullAuto: BulletBurst {
		cost = 2.5;
	};
	class BulletSilencedSingle: BulletSingle {
		hit = 8;
		indirectHit = 1;
		indirectHitRange = 0.1;
		visibleFire = 0.035;
		audibleFire = 0.035;
		visibleFireTime = 2;
		tracerColor[] = {0,0,0,0.005};
		tracerColorR[] = {0,0,0,0.005};
	};
	class BulletSilencedBurst: BulletBurst {
		hit = 8;
		indirectHit = 1;
		indirectHitRange = 0.1;
		visibleFire = 0.05;
		audibleFire = 0.05;
		visibleFireTime = 2;
		tracerColor[] = {0,0,0,0.005};
		tracerColorR[] = {0,0,0,0.005};
	};
	class BulletSniper: BulletSingle {
		hit = 10;
		indirectHit = 2;
		indirectHitRange = 0.1;
		minRange = 1;
		minRangeProbab = 0.1;
		midRange = 200;
		midRangeProbab = 0.8;
		maxRange = 900;
		maxRangeProbab = 0.05;
		cost = 2;
		tracerColor[] = {0,0,0,0.005};
		tracerColorR[] = {0,0,0,0.005};
	};
	class Bullet7_6: BulletSingle {
		airLock = 1;
		hit = 8;
		indirectHit = 2;
		indirectHitRange = 0.1;
		minRange = 1;
		minRangeProbab = 0.9;
		midRange = 100;
		midRangeProbab = 0.5;
		maxRange = 450;
		maxRangeProbab = 0.05;
		cost = 4;
	};
	class Bullet12_7: Bullet7_6 {
		hit = 13;
		indirectHit = 4;
		indirectHitRange = 0.2;
		minRange = 4;
		minRangeProbab = 0.9;
		midRange = 200;
		midRangeProbab = 0.5;
		maxRange = 500;
		maxRangeProbab = 0.05;
		cost = 6;
	};
	class ExplosiveBullet: BulletSingle {
		airLock = 1;
		explosive = 1;
		soundHit[] = {"Explosions\explosivebullet",1.0,1};
		soundFly[] = {"objects\bulletnoise",0.017782792,4};
		hitGround[] = {"soundHit",1};
		hitMan[] = {"soundHit",1};
		hitArmor[] = {"soundHit",1};
		hitBuilding[] = {"soundHit",1};
	};
	class Bullet30: ExplosiveBullet {
		hit = 100;
		indirectHit = 20;
		indirectHitRange = 2;
		minRange = 20;
		minRangeProbab = 0.2;
		midRange = 100;
		midRangeProbab = 0.5;
		maxRange = 1000;
		maxRangeProbab = 0.05;
		cost = 10;
	};
	class Bullet30W: Bullet30 {
		tracerColor[] = {0.8,0.5,0.1,0.25};
		tracerColorR[] = {0.8,0.5,0.1,0.25};
	};
	class Bullet30A10: Bullet30W {
		hit = 100;
		indirectHit = 50;
		indirectHitRange = 2;
	};
	class Bullet30E: Bullet30 {
		tracerColor[] = {0.2,0.8,0.1,0.25};
		tracerColorR[] = {0.2,0.8,0.1,0.25};
	};
	class Bullet4x23: ExplosiveBullet {
		hit = 40;
		indirectHit = 20;
		indirectHitRange = 2;
		minRange = 20;
		minRangeProbab = 0.8;
		midRange = 500;
		midRangeProbab = 0.95;
		maxRange = 3000;
		maxRangeProbab = 0.05;
		cost = 30;
		tracerColor[] = {0.2,0.8,0.1,0.25};
		tracerColorR[] = {0.2,0.8,0.1,0.25};
	};
	class Bullet4x20: ExplosiveBullet {
		access = 2;
		hit = 30;
		indirectHit = 15;
		indirectHitRange = 2;
		minRange = 20;
		minRangeProbab = 0.8;
		midRange = 500;
		midRangeProbab = 0.95;
		maxRange = 3000;
		maxRangeProbab = 0.05;
		cost = 30;
		tracerColor[] = {0.8,0.5,0.1,0.25};
		tracerColorR[] = {0.8,0.5,0.1,0.25};
	};
	class BulletSingleW: BulletSingle {
		tracerColor[] = {0.8,0.5,0.1,0.04};
		tracerColorR[] = {0,0,0,0.005};
	};
	class BulletBurstW: BulletBurst {
		tracerColor[] = {0.8,0.5,0.1,0.04};
		tracerColorR[] = {0,0,0,0.005};
	};
	class BulletFullAutoW: BulletFullAuto {
		tracerColor[] = {0.8,0.5,0.1,0.04};
		tracerColorR[] = {0,0,0,0.005};
	};
	class BulletSilencedSingleW: BulletSilencedSingle {
		tracerColor[] = {0,0,0,0.005};
		tracerColorR[] = {0,0,0,0.005};
	};
	class BulletSilencedBurstW: BulletSilencedBurst {
		tracerColor[] = {0,0,0,0.005};
		tracerColorR[] = {0,0,0,0.005};
	};
	class BulletSniperW: BulletSniper {
		tracerColor[] = {0,0,0,0.005};
		tracerColorR[] = {0,0,0,0.005};
	};
	class Bullet7_6W: Bullet7_6 {
		tracerColor[] = {0.8,0.5,0.1,0.04};
		tracerColorR[] = {0.8,0.5,0.1,0.04};
	};
	class Bullet12_7W: Bullet12_7 {
		tracerColor[] = {0.8,0.5,0.1,0.04};
		tracerColorR[] = {0.8,0.5,0.1,0.04};
	};
	class BulletSingleE: BulletSingle {
		tracerColor[] = {0.2,0.8,0.1,0.04};
		tracerColorR[] = {0,0,0,0.005};
	};
	class BulletBurstE: BulletBurst {
		tracerColor[] = {0.2,0.8,0.1,0.04};
		tracerColorR[] = {0,0,0,0.005};
	};
	class BulletFullAutoE: BulletFullAuto {
		tracerColor[] = {0.2,0.8,0.1,0.04};
		tracerColorR[] = {0,0,0,0.005};
	};
	class BulletSilencedSingleE: BulletSilencedSingle {
		tracerColor[] = {0,0,0,0.005};
		tracerColorR[] = {0,0,0,0.005};
	};
	class BulletSilencedBurstE: BulletSilencedBurst {
		tracerColor[] = {0,0,0,0.005};
		tracerColorR[] = {0,0,0,0.005};
	};
	class BulletSniperE: BulletSniper {
		tracerColor[] = {0,0,0,0.005};
		tracerColorR[] = {0,0,0,0.005};
	};
	class Bullet7_6E: Bullet7_6 {
		tracerColor[] = {0.2,0.8,0.1,0.04};
		tracerColorR[] = {0.2,0.8,0.1,0.04};
	};
	class Bullet12_7E: Bullet12_7 {
		tracerColor[] = {0.2,0.8,0.1,0.04};
		tracerColorR[] = {0.2,0.8,0.1,0.04};
	};
	class BulletSingleG: BulletSingle {
		tracerColor[] = {0.7,0.7,0.5,0.04};
		tracerColorR[] = {0,0,0,0.005};
	};
	class BulletBurstG: BulletBurst {
		tracerColor[] = {0.7,0.7,0.5,0.04};
		tracerColorR[] = {0,0,0,0.005};
	};
	class BulletFullAutoG: BulletFullAuto {
		tracerColor[] = {0.7,0.7,0.5,0.04};
		tracerColorR[] = {0,0,0,0.005};
	};
	class BulletSilencedSingleG: BulletSilencedSingle {
		tracerColor[] = {0,0,0,0.005};
		tracerColorR[] = {0,0,0,0.005};
	};
	class BulletSilencedBurstG: BulletSilencedBurst {
		tracerColor[] = {0,0,0,0.005};
		tracerColorR[] = {0,0,0,0.005};
	};
	class BulletSniperG: BulletSniper {
		tracerColor[] = {0,0,0,0.005};
		tracerColorR[] = {0,0,0,0.005};
	};
	class Bullet7_6G: Bullet7_6 {
		tracerColor[] = {0.7,0.7,0.5,0.04};
		tracerColorR[] = {0.7,0.7,0.5,0.04};
	};
	class Bullet12_7G: Bullet12_7 {
		tracerColor[] = {0.7,0.7,0.5,0.04};
		tracerColorR[] = {0.7,0.7,0.5,0.04};
	};
	class Shell: Default {
		model = "shell";
		simulation = "shotShell";
		simulationStep = 0.05;
		cost = 1000;
		soundHit[] = {"Explosions\explosion_large1",100.00001,1};
		soundFly[] = {"objects\bulletnoise",0.031622775,4};
		indirectHitRange = 8;
		minRange = 20;
		minRangeProbab = 0.75;
		midRange = 400;
		midRangeProbab = 0.95;
		maxRange = 4000;
		maxRangeProbab = 0.05;
		visibleFire = 16;
		audibleFire = 16;
		visibleFireTime = 10;
	};
	class Shell73: Shell {
		hit = 100;
		indirectHit = 90;
		cost = 500;
		soundHit[] = {"Explosions\expl1",100.00001,1};
	};
	class Shell105: Shell73 {
		hit = 150;
		indirectHit = 110;
		cost = 200;
		soundHit[] = {"Explosions\expl2",100.00001,1};
	};
	class Shell120: Shell105 {
		hit = 200;
		indirectHit = 150;
		cost = 300;
		soundHit[] = {"Explosions\expl4",100.00001,1};
	};
	class Shell125: Shell120 {
		hit = 180;
		indirectHit = 100;
		cost = 300;
	};
	class Heat: Shell {
		indirectHitRange = 1;
	};
	class Heat73: Heat {
		hit = 400;
		indirectHit = 100;
		cost = 500;
	};
	class Heat105: Heat73 {
		hit = 450;
		indirectHit = 150;
		cost = 600;
	};
	class Heat120: Heat105 {
		hit = 700;
		indirectHit = 300;
		cost = 1000;
	};
	class Heat125: Heat120 {
		hit = 600;
		indirectHit = 300;
		cost = 1000;
	};
	class AT3: Default {
		hit = 500;
		indirectHit = 150;
		indirectHitRange = 2.5;
		minRange = 30;
		minRangeProbab = 0.5;
		midRange = 200;
		midRangeProbab = 0.95;
		maxRange = 500;
		maxRangeProbab = 0.3;
		model = "AT1";
		simulation = "shotMissile";
		simulationStep = 0.01;
		cost = 10000;
		soundHit[] = {"Explosions\explosion_at3",100.00001,1};
		soundFly[] = {"weapons\rocketflying",0.01,2};
		soundEngine[] = {"objects\noise",0.0009999999,1};
		maxSpeed = 200;
		irLock = 1;
		manualControl = 1;
		maxControlRange = 250;
		initTime = 0.15;
		thrustTime = 2.5;
		thrust = 350;
		maneuvrability = 3.0;
		visibleFire = 32;
		audibleFire = 32;
		visibleFireTime = 20;
	};
	class LAW: AT3 {
		hit = 500;
		indirectHit = 150;
		indirectHitRange = 2.5;
		minRange = 20;
		minRangeProbab = 0.5;
		midRange = 75;
		midRangeProbab = 0.95;
		maxRange = 250;
		maxRangeProbab = 0.1;
		model = "LAW";
		simulation = "shotRocket";
		simulationStep = 0.05;
		cost = 5000;
		soundHit[] = {"Explosions\explosion_at3",31.622778,1};
		soundFly[] = {"objects\noise",9.999998e-005,4};
		maxSpeed = 350;
		irLock = 1;
		manualControl = 1;
		maxControlRange = 0;
		initTime = 0;
		thrustTime = 0.2;
		thrust = 2000;
		maneuvrability = 0;
	};
	class RPG: LAW {
		model = "RPG";
	};
	class CarlGustav: AT3 {
		hit = 800;
		indirectHit = 200;
		indirectHitRange = 2.5;
		minRange = 20;
		minRangeProbab = 0.5;
		midRange = 150;
		midRangeProbab = 0.95;
		maxRange = 600;
		maxRangeProbab = 0.1;
		model = "LAW";
		simulation = "shotMissile";
		cost = 5000;
		soundHit[] = {"Explosions\explosion_at3",31.622778,1};
		soundFly[] = {"weapons\rocketflying",0.01,2};
		maxSpeed = 200;
		irLock = 1;
		manualControl = 1;
		maxControlRange = 200;
		initTime = 0;
		thrustTime = 1.5;
		thrust = 300;
		maneuvrability = 1.0;
	};
	class AT4: CarlGustav {
		model = "RPG";
	};
	class AA: CarlGustav {
		hit = 400;
		indirectHit = 150;
		indirectHitRange = 2;
		minRange = 50;
		minRangeProbab = 0.5;
		midRange = 400;
		midRangeProbab = 0.95;
		maxRange = 1200;
		maxRangeProbab = 0.3;
		airLock = 1;
		cost = 20000;
		manualControl = 0;
		maxControlRange = 1000;
		maxSpeed = 350;
		thrustTime = 3.0;
		thrust = 1000;
		maneuvrability = 4.0;
	};
	class 9K32: AA {};
	class Hellfire: AT3 {
		hit = 900;
		indirectHit = 600;
		indirectHitRange = 2.5;
		minRange = 50;
		minRangeProbab = 0.5;
		midRange = 300;
		midRangeProbab = 0.95;
		maxRange = 1500;
		maxRangeProbab = 0.5;
		maxSpeed = 350;
		soundHit[] = {"Explosions\explosion_at3",100.00001,1};
		cost = 20000;
		model = "TOW";
		irLock = 1;
		laserLock = 1;
		manualControl = 0;
		maxControlRange = 100000;
		maneuvrability = 20.0;
		initTime = 0.15;
		thrustTime = 5.5;
		thrust = 1200;
	};
	class HellfireApach: Hellfire {
		model = "\Apac\hellfire";
		proxyShape = "\Apac\Hellfire_proxy";
	};
	class Zuni: Hellfire {
		hit = 700;
		indirectHit = 300;
		indirectHitRange = 3;
		minRange = 50;
		minRangeProbab = 0.2;
		midRange = 250;
		midRangeProbab = 0.2;
		maxRange = 1000;
		maxRangeProbab = 0.05;
		maxSpeed = 1000;
		simulation = "shotRocket";
		simulationStep = 0.05;
		cost = 2000;
		soundHit[] = {"Explosions\expl1",100.00001,1};
		model = "ZUNI";
		irLock = 0;
		laserLock = 0;
		maneuvrability = 0.0;
		maxControlRange = 0;
		initTime = 0.05;
		thrustTime = 3.5;
		thrust = 500;
	};
	class Rocket57: Zuni {
		soundHit[] = {"Explosions\expl2",100.00001,1};
		hit = 400;
		indirectHit = 250;
		indirectHitRange = 3;
	};
	class AT6: Hellfire {
		model = "TOW";
		hit = 750;
		indirectHit = 350;
		indirectHitRange = 2.5;
		minRange = 50;
		minRangeProbab = 0.3;
		midRange = 300;
		midRangeProbab = 0.8;
		maxRange = 2000;
		maxRangeProbab = 0.3;
		soundHit[] = {"Explosions\hellfire",100.00001,1};
		maxSpeed = 200;
		irLock = 1;
		laserLock = 0;
		maneuvrability = 7.0;
	};
	class Maverick: Hellfire {
		hit = 1900;
		indirectHit = 800;
		indirectHitRange = 2.5;
		model = "Maverik";
		minRange = 200;
		minRangeProbab = 0.3;
		midRange = 600;
		midRangeProbab = 0.8;
		maxRange = 2000;
		maxRangeProbab = 0.5;
		thrust = 700;
		laserLock = 0;
		proxyShape = "Maverik_proxy";
	};
	class Ch29T: Maverick {
		model = "\Su25\Ch_29T_shine";
		proxyShape = "\Su25\Ch_29T";
	};
	class LaserGuidedBomb: Default {
		hit = 5000;
		indirectHit = 3500;
		indirectHitRange = 15;
		minRange = 50;
		minRangeProbab = 0.5;
		midRange = 300;
		midRangeProbab = 0.95;
		maxRange = 2500;
		maxRangeProbab = 0.5;
		soundHit[] = {"\LaserGuided\expl2",100.00001,1};
		cost = 20000;
		model = "Snake";
		proxyShape = "Snake";
		irLock = 0;
		laserLock = 1;
		maxControlRange = 100000;
		maneuvrability = 16.0;
		sideAirFriction = 0.1;
		simulation = "shotMissile";
		maxSpeed = 100;
		initTime = 0;
		thrustTime = 0;
		thrust = 0;
	};
	class Grenade: Default {
		hit = 20;
		indirectHit = 18;
		indirectHitRange = 7;
		minRange = 15;
		minRangeProbab = 0.3;
		midRange = 80;
		midRangeProbab = 0.55;
		maxRange = 150;
		maxRangeProbab = 0.0;
		model = "granat";
		cost = 40;
		simulation = "shotShell";
		simulationStep = 0.05;
		soundHit[] = {"Explosions\expl3",10.0,1};
		soundFly[] = {"objects\noise",3.162277e-005,1};
		soundEngine[] = {"",9.999998e-005,4};
		visibleFire = 2;
		audibleFire = 0.25;
		visibleFireTime = 0;
	};
	class GrenadeHand: Grenade {
		model = "handgrenade.p3d";
		minRange = 40;
		minRangeProbab = 0.1;
		midRange = 45;
		midRangeProbab = 0.3;
		maxRange = 60;
		maxRangeProbab = 0.5;
		visibleFire = 2;
		audibleFire = 0.25;
		visibleFireTime = 1;
	};
	class StrokeFistHit: Default {
		hit = 2;
		indirectHit = 0.5;
		indirectHitRange = 0.2;
		minRange = 0;
		minRangeProbab = 0.3;
		midRange = 0.5;
		midRangeProbab = 0.8;
		maxRange = 1;
		maxRangeProbab = 0.0;
		model = "granat";
		simulation = "shotStroke";
		cost = 1;
		simulationStep = 0.05;
		soundHit[] = {"",3.162277e-005,1};
		soundFly[] = {"objects\noise",3.162277e-005,4};
		soundEngine[] = {"",9.999998e-005,4};
		visibleFire = 2;
		audibleFire = 0.25;
		visibleFireTime = 1;
	};
	class StrokeGunHit: StrokeFistHit {
		hit = 8;
		indirectHit = 1;
		indirectHitRange = 0.4;
	};
	class MortarShell: Grenade {
		hit = 50;
		indirectHit = 40;
		indirectHitRange = 10;
		minRange = 45;
		minRangeProbab = 0.5;
		midRange = 240;
		midRangeProbab = 0.55;
		maxRange = 450;
		maxRangeProbab = 0.0;
		model = "mortarShell";
		soundHit[] = {"Explosions\expl4",10.0,1};
		cost = 120;
	};
	class Flare: Grenade {
		hit = 5;
		indirectHit = 2;
		indirectHitRange = 0.2;
		cost = 100;
		simulation = "shotIlluminating";
		simulationStep = 0.05;
		explosive = 0;
		soundHit[] = {"",0,1};
		lightColor[] = {1,1,1,0};
	};
	class FlareGreen: Flare {
		lightColor[] = {0,1,0,0};
	};
	class FlareRed: Flare {
		lightColor[] = {1,0,0,0};
	};
	class FlareYellow: Flare {
		lightColor[] = {1,1,0,0};
	};
	class SmokeShell: GrenadeHand {
		hit = 5;
		indirectHit = 2;
		indirectHitRange = 0.2;
		cost = 100;
		simulation = "shotSmoke";
		explosive = 0;
		soundHit[] = {"",0,1};
		smokeColor[] = {1,1,1,0};
		class Smoke {
			interval = 0.01;
			cloudletDuration = 4.0;
			cloudletAnimPeriod = 1.0;
			cloudletSize = 0.25;
			cloudletAlpha = 1.0;
			cloudletGrowUp = 1.5;
			cloudletFadeIn = 0.0;
			cloudletFadeOut = 5.0;
			cloudletAccY = -0.3;
			cloudletMinYSpeed = 0;
			cloudletMaxYSpeed = 10;
			cloudletShape = "cl_basic";
			cloudletColor[] = {1,1,1,0};
			initT = 1000;
			deltaT = -500;
			class Table {
				class T1 {
					maxT = 0;
					color[] = {0.7,0.7,0.7,1};
				};
				class T2 {
					maxT = 1000;
					color[] = {0.4,0.4,0.4,1};
				};
			};
			density = 1.0;
			size = 1.5;
			initYSpeed = 1.0;
			timeToLive = 1e+020;
			in = 3.0;
			out = 0.0;
		};
	};
	class SmokeShellRed: SmokeShell {
		smokeColor[] = {1,0.25,0,0};
	};
	class SmokeShellGreen: SmokeShell {
		smokeColor[] = {0.2,0.8,0.2,0};
	};
	class TimeBomb: Default {
		hit = 700;
		indirectHit = 700;
		indirectHitRange = 7;
		minRange = 0;
		minRangeProbab = 0.95;
		midRange = 5;
		midRangeProbab = 0.9;
		maxRange = 10;
		maxRangeProbab = 0.0;
		model = "satchel.p3d";
		cost = 2000;
		simulation = "shotTimeBomb";
		simulationStep = 0.1;
		soundHit[] = {"Explosions\timebomb",100.00001,1};
		soundFly[] = {"",0,1};
		soundEngine[] = {"",0,1};
		visibleFire = 0;
		audibleFire = 0;
		visibleFireTime = 0;
	};
	class PipeBomb: TimeBomb {
		simulation = "shotPipeBomb";
	};
	class Mine: TimeBomb {
		hit = 750;
		indirectHit = 750;
		indirectHitRange = 5;
		simulation = "shotMine";
		model = "m19_at_proxy.p3d";
		defaultMagazine = "Mine";
	};
	class MineE: Mine {
		model = "tm_62m.p3d";
		defaultMagazine = "MineE";
	};
	class FuelExplosion: Default {
		hit = 100;
		indirectHit = 80;
		indirectHitRange = 8;
		minRange = 10;
		minRangeProbab = 0.9;
		midRange = 20;
		midRangeProbab = 0.99;
		maxRange = 30;
		maxRangeProbab = 0.8;
		model = "";
		simulation = "";
		cost = 1;
		soundHit[] = {"Explosions\fuel_explosion",100.00001,1};
		soundFly[] = {"",1,1};
		soundEngine[] = {"",1,4};
	};
};
class CfgRecoils {
	access = 1;
	empty[] = {};
	impulse[] = {0.05,0.02,0.2,0.1,0.03,-0.1,0.3,0,0};
	riffleSingle[] = {0.05,0.02,0.04,0.05,0,0};
	riffleSilenced[] = {0.01,0.004,0.01,0.05,0,0};
	LAWSingle[] = {0.02,0,0,0.05,0.08,0.03,0.1,0.03,0.015,0.2,0,0};
	sniperSingle[] = {0.02,0,0,0.05,0.01,0.02,0.1,0.008,0.018,0.2,0,0};
	riffleBurst3[] = {0.05,0.02,0.04,0.05,0,0};
	mgunBurst3[] = {0.03,0.02,"0.04*1.35",0.03,0.01,"0.01*0.5",0.03,0.03,"0.04*1.35",0.03,0.02,"0.02*0.5",0.01,0,0};
};
class CfgWeapons {
	access = 1;
	class Default {
		access = 3;
		scopeWeapon = 0;
		scopeMagazine = 0;
		valueWeapon = 2;
		valueMagazine = 2;
		picture = "";
		uiPicture = "ivojak";
		ammo = "";
		cursor = "w_weapon";
		cursorAim = "w_lock";
		weaponType = 65536;
		magazineType = 0;
		displayName = "";
		displayNameMagazine = "";
		shortNameMagazine = "";
		nameSound = "weapon";
		count = 0;
		multiplier = 1;
		burst = 1;
		magazineReloadTime = 0;
		reloadTime = 1.0;
		sound[] = {"",1,1};
		soundContinuous = 0;
		drySound[] = {"",1,1};
		reloadSound[] = {"",1,1};
		reloadMagazineSound[] = {"",1,1};
		initSpeed = 0;
		maxLeadSpeed = 50;
		flash = "";
		flashSize = 0;
		dispersion = 0.002;
		aiDispersionCoefX = 1.0;
		aiDispersionCoefY = 1.0;
		canLock = 2;
		enableAttack = 1;
		ffMagnitude = 0;
		ffFrequency = 1;
		ffCount = 1;
		recoil = "Empty";
		model = "";
		modelSpecial = "";
		modelMagazine = "\misc\mag_univ.p3d";
		muzzlePos = "usti hlavne";
		muzzleEnd = "konec hlavne";
		cartridgePos = "nabojnicestart";
		cartridgeVel = "nabojniceend";
		modelOptics = "";
		opticsFlare = 1;
		optics = 1;
		forceOptics = 0;
		opticsZoomMin = 0.35;
		opticsZoomMax = 0.35;
		distanceZoomMin = 400;
		distanceZoomMax = 400;
		primary = 10;
		showEmpty = 1;
		autoFire = 0;
		autoReload = 1;
		aiRateOfFire = 5.0;
		aiRateOfFireDistance = 500;
		backgroundReload = 0;
		reloadAction = "ManActReloadMagazine";
		muzzles[] = {"this"};
		magazines[] = {"this"};
		modes[] = {"this"};
		useAction = 0;
		useActionTitle = "";
		canDrop = 1;
	};
	class Shell73: Default {
		scopeWeapon = 0;
		scopeMagazine = 2;
		displayName = "$STR_DN_SHELL";
		displayNameMagazine = "$STR_MN_SHELL";
		shortNameMagazine = "$STR_SN_SHELL";
		nameSound = "shell";
		ammo = "Shell73";
		count = 15;
		initSpeed = 700;
		reloadTime = 16.0;
		sound[] = {"Weapons\gun73",10.0,1};
		reloadSound[] = {"Weapons\reload",0.0009999999,1};
		ffCount = 1;
	};
	class Heat73: Shell73 {
		ammo = "Heat73";
		displayName = "$STR_DN_HEAT";
		displayNameMagazine = "$STR_MN_HEAT";
		shortNameMagazine = "$STR_SN_HEAT";
		nameSound = "heat";
	};
	class Gun73: Default {
		scopeWeapon = 2;
		scopeMagazine = 0;
		displayName = "$STR_DN_GUN";
		sound[] = {"Weapons\gun73",10.0,1};
		reloadSound[] = {"Weapons\reload",0.0009999999,1};
		backgroundReload = 1;
		ffMagnitude = 1;
		ffFrequency = 5;
		magazines[] = {"Heat73","Shell73"};
	};
	class Shell105: Shell73 {
		ammo = "Shell105";
		count = 35;
		initSpeed = 900;
		reloadTime = 16.0;
		sound[] = {"Weapons\gun105",10.0,1};
		reloadSound[] = {"Weapons\missload",0.00031622773,1};
	};
	class Heat105: Shell105 {
		ammo = "Heat105";
		displayName = "$STR_DN_HEAT";
		displayNameMagazine = "$STR_MN_HEAT";
		shortNameMagazine = "$STR_SN_HEAT";
		nameSound = "heat";
		sound[] = {"Weapons\gun105",10.0,1};
		reloadSound[] = {"Weapons\missload",0.00031622773,1};
	};
	class Gun105: Gun73 {
		sound[] = {"Weapons\gun105",10.0,1};
		reloadSound[] = {"Weapons\missload",0.00031622773,1};
		magazines[] = {"Heat105","Shell105"};
	};
	class Shell120: Shell105 {
		ammo = "Shell120";
		count = 35;
		initSpeed = 1500;
		reloadTime = 8.0;
		sound[] = {"Weapons\gun120",10.0,1};
		reloadSound[] = {"Weapons\missload",0.00031622773,1};
	};
	class Heat120: Shell120 {
		ammo = "Heat120";
		displayName = "$STR_DN_HEAT";
		displayNameMagazine = "$STR_MN_HEAT";
		shortNameMagazine = "$STR_SN_HEAT";
		nameSound = "heat";
		sound[] = {"Weapons\gun120",10.0,1};
		reloadSound[] = {"Weapons\missload",0.00031622773,1};
	};
	class Gun120: Gun105 {
		sound[] = {"Weapons\gun120",10.0,1};
		reloadSound[] = {"Weapons\missload",0.00031622773,1};
		magazines[] = {"Heat120","Shell120"};
	};
	class Shell125: Shell120 {
		ammo = "Shell125";
		count = 35;
		initSpeed = 1200;
		reloadTime = 8.0;
		sound[] = {"Weapons\gun125",10.0,1};
		reloadSound[] = {"Weapons\missload",0.00031622773,1};
	};
	class Heat125: Shell125 {
		ammo = "Heat125";
		displayName = "$STR_DN_HEAT";
		displayNameMagazine = "$STR_MN_HEAT";
		shortNameMagazine = "$STR_SN_HEAT";
		nameSound = "heat";
		sound[] = {"Weapons\gun125",10.0,1};
		reloadSound[] = {"Weapons\missload",0.00031622773,1};
	};
	class Gun125: Gun120 {
		sound[] = {"Weapons\gun125",10.0,1};
		reloadSound[] = {"Weapons\missload",0.00031622773,1};
		magazines[] = {"Heat125","Shell125"};
	};
	class MGun: Default {
		ammo = "BulletSingle";
		displayName = "$STR_DN_MGUN";
		displayNameMagazine = "$STR_MN_MGUN";
		shortNameMagazine = "$STR_SN_MGUN";
		nameSound = "mgun";
		count = 100;
		reloadTime = 0.25;
		sound[] = {"Weapons\M60mgun",1.0,1};
		soundContinuous = 1;
		reloadSound[] = {"",1,1};
		initSpeed = 900;
		flash = "gunfire";
		flashSize = 0.5;
		optics = 0;
	};
	class Riffle: MGun {
		cursor = "w_weapon_T";
		cursorAim = "w_weapon_S";
		valueWeapon = 4;
		valueMagazine = 4;
		ammo = "BulletSingle";
		displayName = "$STR_DN_RIFLE";
		displayNameMagazine = "$STR_MN_MGUN";
		shortNameMagazine = "$STR_SN_MGUN";
		weaponType = 1;
		magazineType = 256;
		count = 30;
		reloadTime = 0.15;
		magazineReloadTime = 5;
		sound[] = {"42m16",1.0,1};
		reloadSound[] = {"",1,1};
		reloadMagazineSound[] = {"weapons\m16load",0.00031622773,1};
		opticsFlare = 0;
		autoReload = 0;
		flash = "gunfire";
		flashSize = 0.5;
		dispersion = 0.0001;
		aiDispersionCoefX = 2.0;
		aiDispersionCoefY = 2.0;
		maxLeadSpeed = 23;
		canLock = 0;
		ffMagnitude = 0.5;
		ffFrequency = 11;
		ffCount = 3;
	};
	class StrokeFist: Default {
		scopeWeapon = 1;
		scopeMagazine = 1;
		ammo = "StrokeFistHit";
		weaponType = 0;
		magazineType = 0;
		displayName = "$STR_DN_FIST";
		displayNameMagazine = "$STR_MN_FIST";
		shortNameMagazine = "$STR_SN_FIST";
		sound[] = {"Weapons\grenade_launch",0.0031622774,1};
		reloadSound[] = {"",0.00031622773,1};
		aiDispersionCoefX = 2.0;
		aiDispersionCoefY = 2.0;
		enableAttack = 0;
		primary = 1;
		showEmpty = 0;
		autoReload = 1;
		burst = 0;
		multiplier = 0;
		magazines[] = {"StrokeFist"};
		reloadTime = 0;
		initSpeed = 0;
		canLock = 0;
		ffMagnitude = 0.1;
		ffFrequency = 1;
		ffCount = 1;
		recoil = "Empty";
		dispersion = 0.015;
		maxLeadSpeed = 15;
		optics = 0;
		muzzlePos = "";
		muzzleEnd = "";
		count = 100;
		canDrop = 0;
	};
	class StrokeGun: StrokeFist {
		ammo = "StrokeGunHit";
		scopeWeapon = 0;
		scopeMagazine = 1;
		displayName = "$STR_DN_STRIKE";
		displayNameMagazine = "$STR_MN_STRIKE";
		shortNameMagazine = "$STR_SN_STRIKE";
		count = 100;
		modelOptics = "";
		magazines[] = {"StrokeGun"};
		primary = 1;
	};
	class M16: Riffle {
		scopeWeapon = 2;
		scopeMagazine = 2;
		valueWeapon = 0;
		valueMagazine = 1;
		model = "m16_proxy";
		modelOptics = "optika_m16";
		optics = 1;
		opticsZoomMin = 0.35;
		opticsZoomMax = 0.35;
		displayName = "$STR_DN_M16";
		displayNameMagazine = "$STR_MN_M16";
		shortNameMagazine = "$STR_SN_M16";
		drySound[] = {"weapons\M16dry",0.01,1};
		magazines[] = {"M16","Mortar"};
		modes[] = {"Single","Burst"};
		class Single {
			ammo = "BulletSingleW";
			multiplier = 1;
			burst = 1;
			displayName = "$STR_DN_M16";
			dispersion = 0.0002;
			sound[] = {"Weapons\M16Single",1.0,1};
			soundContinuous = 0;
			reloadTime = 0.07;
			ffCount = 1;
			recoil = "riffleSingle";
			autoFire = 0;
			aiRateOfFire = 5.0;
			aiRateOfFireDistance = 500;
			useAction = 0;
			useActionTitle = "";
		};
		class Burst {
			ammo = "BulletBurstW";
			multiplier = 1;
			burst = 3;
			displayName = "$STR_DN_M16_BURST";
			dispersion = 0.0004;
			sound[] = {"Weapons\M16Burst",1.0,1};
			soundContinuous = 0;
			reloadTime = 0.1;
			ffCount = 3;
			recoil = "riffleBurst3";
			autoFire = 0;
			aiRateOfFire = 5.0;
			aiRateOfFireDistance = 500;
			useAction = 0;
			useActionTitle = "";
		};
	};
	class M16S: M16 {
		muzzles[] = {"M16Muzzle","M16StrikeMuzzle"};
		picture = "M16";
		class M16Muzzle: M16 {
			magazines[] = {"M16"};
		};
		class M16StrikeMuzzle: StrokeGun {};
	};
	class M4: Riffle {
		scopeWeapon = 2;
		scopeMagazine = 2;
		model = "XM-177E2_proxy";
		modelOptics = "optika_m16";
		optics = 1;
		opticsZoomMin = 0.35;
		opticsZoomMax = 0.35;
		valueWeapon = 2;
		valueMagazine = 2;
		displayName = "$STR_DN_M4";
		displayNameMagazine = "$STR_MN_M4";
		shortNameMagazine = "$STR_SN_M4";
		drySound[] = {"weapons\M16Dry",0.0031622774,1};
		magazines[] = {"M4","Mortar"};
		modes[] = {"Single","FullAuto"};
		class Single {
			ammo = "BulletSingleW";
			multiplier = 1;
			burst = 1;
			displayName = "$STR_DN_M4";
			dispersion = 0.002;
			sound[] = {"Weapons\M16Single",1.0,1};
			soundContinuous = 0;
			reloadTime = 0.07;
			ffCount = 1;
			recoil = "riffleSingle";
			autoFire = 0;
			aiRateOfFire = 5.0;
			aiRateOfFireDistance = 500;
			useAction = 0;
			useActionTitle = "";
		};
		class FullAuto {
			ammo = "BulletFullAutoW";
			multiplier = 1;
			burst = 1;
			displayName = "$STR_DN_M4_AUTO";
			dispersion = 0.004;
			sound[] = {"Weapons\M16Single",1.0,1};
			soundContinuous = 0;
			reloadTime = 0.1;
			ffCount = 30;
			recoil = "riffleBurst3";
			autoFire = 1;
			aiRateOfFire = 5.0;
			aiRateOfFireDistance = 500;
			useAction = 0;
			useActionTitle = "";
		};
	};
	class AK47: Riffle {
		scopeWeapon = 2;
		scopeMagazine = 2;
		valueWeapon = 0;
		valueMagazine = 1;
		model = "AK_47_proxy";
		modelOptics = "optika_ak47";
		optics = 1;
		opticsZoomMin = 0.35;
		opticsZoomMax = 0.35;
		displayName = "$STR_DN_AK47";
		displayNameMagazine = "$STR_MN_AK47";
		shortNameMagazine = "$STR_SN_AK47";
		drySound[] = {"weapons\AK74Dry",0.01,1};
		modes[] = {"Single","Burst","FullAuto"};
		class Single {
			ammo = "BulletSingleG";
			multiplier = 1;
			burst = 1;
			displayName = "$STR_DN_AK47";
			dispersion = 0.0002;
			sound[] = {"Weapons\AK74Single",1.0,1};
			soundContinuous = 0;
			reloadTime = 0.1;
			ffCount = 1;
			recoil = "riffleSingle";
			autoFire = 0;
			aiRateOfFire = 5.0;
			aiRateOfFireDistance = 500;
			useAction = 0;
			useActionTitle = "";
		};
		class Burst {
			ammo = "BulletBurstG";
			multiplier = 1;
			burst = 3;
			displayName = "$STR_DN_AK47_BURST";
			dispersion = 0.0004;
			sound[] = {"Weapons\AK74Burst",1.0,1};
			soundContinuous = 0;
			reloadTime = 0.1;
			ffCount = 3;
			recoil = "riffleBurst3";
			autoFire = 0;
			aiRateOfFire = 5.0;
			aiRateOfFireDistance = 500;
			useAction = 0;
			useActionTitle = "";
		};
		class FullAuto {
			ammo = "BulletFullAutoG";
			multiplier = 1;
			burst = 1;
			displayName = "$STR_DN_AK47_AUTO";
			dispersion = 0.0008;
			sound[] = {"Weapons\AK74Single",1.0,1};
			soundContinuous = 0;
			reloadTime = 0.1;
			ffCount = 30;
			recoil = "riffleBurst3";
			autoFire = 1;
			aiRateOfFire = 5.0;
			aiRateOfFireDistance = 500;
			useAction = 0;
			useActionTitle = "";
		};
	};
	class AK47CZ: AK47 {
		scopeWeapon = 2;
		scopeMagazine = 0;
		model = "AK_47_v58_proxy";
		modelOptics = "optika_ak47";
		optics = 1;
		opticsZoomMin = 0.35;
		opticsZoomMax = 0.35;
		displayName = "$STR_DN_AK47_CZ";
		drySound[] = {"weapons\AK74Dry",0.01,1};
		modes[] = {"Single","Burst","FullAuto"};
		magazines[] = {"AK47"};
	};
	class AK74: Riffle {
		scopeWeapon = 2;
		scopeMagazine = 2;
		valueWeapon = 0;
		valueMagazine = 1;
		model = "AK_74_proxy";
		modelOptics = "optika_ak47";
		optics = 1;
		opticsZoomMin = 0.35;
		opticsZoomMax = 0.35;
		displayName = "$STR_DN_AK74";
		displayNameMagazine = "$STR_MN_AK74";
		shortNameMagazine = "$STR_SN_AK74";
		drySound[] = {"weapons\AK74Dry",1.0,1};
		modes[] = {"Single","Burst","FullAuto"};
		class Single {
			ammo = "BulletSingleE";
			multiplier = 1;
			burst = 1;
			displayName = "$STR_DN_AK74";
			dispersion = 0.0002;
			sound[] = {"Weapons\AK74Single",1.0,1};
			soundContinuous = 0;
			reloadTime = 0.1;
			ffCount = 1;
			recoil = "riffleSingle";
			autoFire = 0;
			aiRateOfFire = 5.0;
			aiRateOfFireDistance = 500;
			useAction = 0;
			useActionTitle = "";
		};
		class Burst {
			ammo = "BulletBurstE";
			multiplier = 1;
			burst = 3;
			displayName = "$STR_DN_AK74_BURST";
			dispersion = 0.0004;
			sound[] = {"Weapons\AK74Burst",1.0,1};
			soundContinuous = 0;
			reloadTime = 0.1;
			ffCount = 3;
			recoil = "riffleBurst3";
			autoFire = 0;
			aiRateOfFire = 5.0;
			aiRateOfFireDistance = 500;
			useAction = 0;
			useActionTitle = "";
		};
		class FullAuto {
			ammo = "BulletFullAutoE";
			multiplier = 1;
			burst = 1;
			displayName = "$STR_DN_AK74_AUTO";
			dispersion = 0.0008;
			sound[] = {"Weapons\AK74Single",1.0,1};
			soundContinuous = 0;
			reloadTime = 0.1;
			ffCount = 30;
			recoil = "riffleBurst3";
			autoFire = 1;
			aiRateOfFire = 5.0;
			aiRateOfFireDistance = 500;
			useAction = 0;
			useActionTitle = "";
		};
	};
	class AK74SU: AK74 {
		scopeWeapon = 2;
		scopeMagazine = 0;
		model = "AK_74_SU_proxy";
		modelOptics = "optika_ak47";
		optics = 1;
		opticsZoomMin = 0.35;
		opticsZoomMax = 0.35;
		valueWeapon = 1;
		valueMagazine = 1;
		displayName = "$STR_DN_AK74_SU";
		drySound[] = {"weapons\AK74Dry",0.01,1};
		modes[] = {"Single","Burst","FullAuto"};
		magazines[] = {"AK74"};
	};
	class HK: Riffle {
		scopeWeapon = 2;
		scopeMagazine = 2;
		model = "HKM5_SD6_proxy";
		modelOptics = "optika_HK";
		displayName = "$STR_DN_HK";
		displayNameMagazine = "$STR_MN_HK";
		shortNameMagazine = "$STR_SN_HK";
		drySound[] = {"weapons\m16dry",0.00031622773,1};
		optics = 1;
		opticsZoomMin = 0.3;
		opticsZoomMax = 0.3;
		distanceZoomMin = 150;
		distanceZoomMax = 150;
		valueWeapon = 1000;
		valueMagazine = 1000;
		initSpeed = 400;
		modes[] = {"Single","FullAuto"};
		class Single {
			ammo = "BulletSilencedSingleW";
			multiplier = 1;
			burst = 1;
			displayName = "$STR_DN_HK";
			dispersion = 0.002;
			sound[] = {"Weapons\hk_singleshot",0.00031622773,1};
			soundContinuous = 0;
			reloadTime = 0.07;
			recoil = "riffleSilenced";
			ffCount = 1;
			autoFire = 0;
			aiRateOfFire = 5.0;
			aiRateOfFireDistance = 500;
			useAction = 0;
			useActionTitle = "";
		};
		class FullAuto {
			ammo = "BulletSilencedBurstW";
			multiplier = 1;
			burst = 1;
			displayName = "$STR_DN_HK_AUTO";
			dispersion = 0.004;
			sound[] = {"Weapons\hk_fullauto",0.00031622773,1};
			soundContinuous = 1;
			reloadTime = 0.1;
			ffCount = 1;
			recoil = "riffleSilenced";
			autoFire = 1;
			aiRateOfFire = 5.0;
			aiRateOfFireDistance = 500;
			useAction = 0;
			useActionTitle = "";
		};
	};
	class SniperRiffle: Riffle {
		ammo = "BulletSingle";
		displayName = "$STR_DN_SNIPER_RIFFLE";
		dispersion = 3e-005;
		optics = 1;
		opticsZoomMin = 0.16;
		opticsZoomMax = 0.16;
		sound[] = {"Weapons\AKFire_Single",1.0,1};
		soundContinuous = 0;
		reloadTime = 0.3;
		recoil = "sniperSingle";
		opticsFlare = 1;
		valueWeapon = 1000;
		valueMagazine = 1000;
		aiRateOfFire = 5.0;
		aiRateOfFireDistance = 500;
		maxLeadSpeed = 50;
		uiPicture = "\misc\isniper_new.paa";
	};
	class M21: SniperRiffle {
		scopeWeapon = 2;
		scopeMagazine = 2;
		model = "M21_proxy";
		modelOptics = "optika_snpierw";
		sound[] = {"Weapons\m21",1.0,1};
		count = 20;
		ammo = "BulletSniperW";
		opticsZoomMin = 0.04;
		opticsZoomMax = 0.12;
		distanceZoomMin = 400;
		distanceZoomMax = 80;
		displayName = "$STR_DN_M21";
		displayNameMagazine = "$STR_MN_M21";
		shortNameMagazine = "$STR_SN_M21";
	};
	class SVDDragunov: SniperRiffle {
		scopeWeapon = 2;
		scopeMagazine = 2;
		model = "SVD_dragunov_proxy";
		modelOptics = "optika_snpiere";
		count = 10;
		ammo = "BulletSniperE";
		opticsZoomMin = 0.04;
		opticsZoomMax = 0.04;
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		displayName = "$STR_DN_SVD";
		displayNameMagazine = "$STR_MN_SVD";
		shortNameMagazine = "$STR_SN_SVD";
	};
	class Binocular: Default {
		scopeWeapon = 2;
		scopeMagazine = 1;
		model = "dalekohled_proxy";
		modelOptics = "optika_dalekohled";
		valueWeapon = 5;
		weaponType = 4096;
		magazineType = 0;
		ammo = "";
		displayName = "$STR_DN_BINOCULAR";
		reloadTime = 0.0;
		sound[] = {"",0,1};
		canLock = 0;
		optics = 1;
		forceOptics = 1;
		primary = 0;
		opticsZoomMin = 0.085;
		opticsZoomMax = 0.085;
		magazines[] = {};
	};
	class NVGoggles: Binocular {
		displayName = "$STR_DN_NV_GOGGLES";
		showEmpty = 0;
		valueWeapon = 5;
		opticsZoomMin = 1.0;
		opticsZoomMax = 1.0;
		modelOptics = "";
		model = "nvg_proxy";
	};
	class Phone: Binocular {
		scopeWeapon = 1;
		displayName = "$STR_DN_PHONE";
		showEmpty = 0;
		opticsZoomMin = 1.0;
		opticsZoomMax = 1.0;
		model = "sluchatko_proxy";
		modelOptics = "";
	};
	class MachineGun7_6: MGun {
		scopeWeapon = 2;
		scopeMagazine = 2;
		valueWeapon = 2;
		valueMagazine = 2;
		ammo = "Bullet7_6";
		count = 500;
		reloadTime = 0.1;
		reloadSound[] = {"",1,1};
		sound[] = {"Weapons\M60mgun",3.1622777,1};
		initSpeed = 1000;
		flash = "gunfire";
		flashSize = 0.9;
		dispersion = 0.0007;
		maxLeadSpeed = 300;
		aiDispersionCoefX = 5;
		ffMagnitude = 0.5;
		ffFrequency = 11;
		ffCount = 6;
		recoil = "mgunBurst3";
		aiRateOfFire = 0.5;
		aiRateOfFireDistance = 1000;
		autoFire = 1;
		optics = 1;
		uiPicture = "ismg";
	};
	class MachineGun7_6Manual: MachineGun7_6 {
		scopeWeapon = 0;
		scopeMagazine = 0;
		weaponType = "1	 + 	16";
		count = 100;
		magazineType = "2 * 		256";
		canLock = 0;
		reloadAction = "ManActReloadMagazine";
		autoReload = 0;
		reloadMagazineSound[] = {"weapons\m16load",0.00031622773,1};
		optics = 1;
		opticsFlare = 0;
		opticsZoomMin = 0.35;
		opticsZoomMax = 0.35;
	};
	class M60: MachineGun7_6Manual {
		scopeWeapon = 2;
		scopeMagazine = 2;
		ammo = "Bullet7_6W";
		model = "M60_MG_proxy";
		modelOptics = "optika_M60_MG";
		displayName = "$STR_DN_M60_MG";
		displayNameMagazine = "$STR_MN_M60_MG";
		shortNameMagazine = "$STR_SN_M60_MG";
	};
	class PK: MachineGun7_6Manual {
		scopeWeapon = 2;
		scopeMagazine = 2;
		ammo = "Bullet7_6E";
		model = "PK_MG_proxy";
		modelOptics = "optika_PK";
		sound[] = {"Weapons\AK74full",3.1622777,1};
		displayName = "$STR_DN_PK";
		displayNameMagazine = "$STR_MN_PK";
		shortNameMagazine = "$STR_SN_PK";
	};
	class MachineGun12_7: MachineGun7_6 {
		ammo = "Bullet12_7";
		count = 500;
		initSpeed = 1000;
		reloadTime = 0.1;
		sound[] = {"Weapons\m2-50-loop",3.1622777,1};
		flashSize = 1.1;
		maxLeadSpeed = 350;
	};
	class Browning: MachineGun12_7 {
		ammo = "Bullet12_7";
		sound[] = {"Weapons\m2-50-loop",31.622778,1};
	};
	class MachineGun30: MachineGun7_6 {
		displayName = "$STR_DN_MG30";
		displayNameMagazine = "$STR_MN_MG30";
		shortNameMagazine = "$STR_SN_MG30";
		ammo = "Bullet30";
		count = 500;
		reloadTime = 0.18;
		initSpeed = 1000;
		sound[] = {"Weapons\automatic_cannon",3.1622777,1};
		flashSize = 1.1;
		maxLeadSpeed = 450;
		optics = 1;
	};
	class MachineGun30W: MachineGun30 {
		ammo = "Bullet30W";
	};
	class MachineGun30E: MachineGun30 {
		ammo = "Bullet30E";
	};
	class MachineGun30A10: MachineGun30 {
		canLock = 0;
		sound[] = {"Weapons\vulcan",3.1622777,1};
		count = 2000;
		multiplier = 4;
	};
	class MachineGun30A10Burst: MachineGun30A10 {
		ammo = "Bullet30A10";
	};
	class ZsuCannon: MachineGun30 {
		ammo = "Bullet4x23";
		count = 2000;
		multiplier = 4;
		initSpeed = 900;
		flashSize = 1.2;
		reloadTime = 0.1;
		displayName = "$STR_DN_AZP23";
		displayNameMagazine = "$STR_MN_AZP23";
		shortNameMagazine = "$STR_SN_AZP23";
		dispersion = 0.0015;
		maxLeadSpeed = 900;
		aiRateOfFire = 0.3;
		aiRateOfFireDistance = 3000;
	};
	class GrenadeLauncher: Default {
		cursor = "t_select.paa";
		scopeMagazine = 2;
		valueWeapon = 3;
		valueMagazine = 2;
		weaponType = 0;
		magazineType = "2 * 		256";
		ammo = "Grenade";
		displayName = "$STR_DN_GRENADE";
		displayNameMagazine = "$STR_MN_GRENADE";
		shortNameMagazine = "$STR_SN_GRENADE";
		count = 1;
		reloadTime = 0;
		sound[] = {"Weapons\grenade_launch",0.00031622773,1};
		reloadSound[] = {"Weapons\M16load",0.00031622773,1};
		initSpeed = 60;
		canLock = 0;
		autoReload = 0;
		ffMagnitude = 0.1;
		ffFrequency = 1;
		ffCount = 1;
		recoil = "Empty";
		dispersion = 0.015;
		aiDispersionCoefY = 2.0;
		maxLeadSpeed = 15;
		optics = 0;
		muzzlePos = "usti granatometu";
		muzzleEnd = "konec granatometu";
		uiPicture = "igrenadier";
	};
	class RiffleGrenadeLauncher {
		scopeWeapon = 0;
		scopeMagazine = 0;
		weaponType = 1;
		valueWeapon = 0;
		valueMagazine = 0;
		displayName = "$STR_DN_RIFLE_GRENADE";
		model = "";
		picture = "";
		muzzles[] = {"RiffleMuzzle","GrenadesMuzzle"};
		class RiffleMuzzle: Riffle {
			modelOptics = "";
			magazines[] = {"Riffle"};
		};
		class GrenadesMuzzle: GrenadeLauncher {
			modelOptics = "";
			magazines[] = {"GrenadeLauncher","Flare","FlareGreen","FlareRed","FlareYellow"};
		};
		canDrop = 1;
		uiPicture = "igrenadier";
	};
	class M16GrenadeLauncher {
		scopeWeapon = 2;
		scopeMagazine = 0;
		weaponType = 1;
		valueWeapon = 2;
		valueMagazine = 2;
		displayName = "$STR_DN_M16_GRENADE";
		model = "m16_granatomet_proxy";
		picture = "";
		uiPicture = "igrenadier";
		muzzles[] = {"M16Muzzle","M203Muzzle"};
		class M16Muzzle: M16 {
			magazines[] = {"M16"};
		};
		class M203Muzzle: GrenadeLauncher {
			displayName = "$STR_DN_M203";
			sound[] = {"weapons\M16GrenadeLaunch",0.00031622773,1};
			magazines[] = {"GrenadeLauncher","Flare","FlareGreen","FlareRed","FlareYellow"};
		};
		canDrop = 1;
	};
	class AK47GrenadeLauncher {
		scopeWeapon = 2;
		scopeMagazine = 0;
		weaponType = 1;
		valueWeapon = 2;
		valueMagazine = 2;
		displayName = "$STR_DN_AK47_GRENADE";
		model = "ak_47_granatomet_proxy";
		picture = "";
		uiPicture = "igrenadier";
		muzzles[] = {"AK47Muzzle","GrenadesMuzzle"};
		class AK47Muzzle: AK47 {
			magazines[] = {"AK47"};
		};
		class GrenadesMuzzle: GrenadeLauncher {
			magazines[] = {"GrenadeLauncher","Flare","FlareGreen","FlareRed","FlareYellow"};
		};
		canDrop = 1;
	};
	class AK74GrenadeLauncher {
		scopeWeapon = 2;
		scopeMagazine = 0;
		weaponType = 1;
		valueWeapon = 2;
		valueMagazine = 2;
		displayName = "$STR_DN_AK74_GRENADE";
		model = "ak_74_granatomet_proxy";
		picture = "";
		uiPicture = "igrenadier";
		muzzles[] = {"AK74Muzzle","GrenadesMuzzle"};
		class AK74Muzzle: AK74 {
			magazines[] = {"AK74"};
		};
		class GrenadesMuzzle: GrenadeLauncher {
			magazines[] = {"GrenadeLauncher","Flare","FlareGreen","FlareRed","FlareYellow"};
		};
		canDrop = 1;
	};
	class Mortar: GrenadeLauncher {
		scopeWeapon = 0;
		scopeMagazine = 2;
		modelSpecial = "m16_mortar_proxy";
		valueMagazine = 5;
		magazineType = "2 * 		256";
		ammo = "MortarShell";
		displayName = "$STR_DN_MORTAR_W";
		displayNameMagazine = "$STR_MN_MORTAR_W";
		shortNameMagazine = "$STR_SN_MORTAR_W";
		count = 1;
		initSpeed = 70;
		reloadAction = "ManActReloadMortar";
		modes[] = {"this","this"};
	};
	class Flare: GrenadeLauncher {
		scopeWeapon = 0;
		scopeMagazine = 2;
		valueMagazine = 5;
		magazineType = 256;
		count = 1;
		ammo = "Flare";
		displayName = "$STR_DN_FLARE";
		displayNameMagazine = "$STR_MN_FLARE";
		shortNameMagazine = "$STR_SN_FLARE";
		initSpeed = 80;
	};
	class FlareGreen: Flare {
		ammo = "FlareGreen";
		displayName = "$STR_DN_FLARE_GREEN";
		displayNameMagazine = "$STR_MN_FLARE_GREEN";
		shortNameMagazine = "$STR_SN_FLARE_GREEN";
	};
	class FlareRed: Flare {
		ammo = "FlareRed";
		displayName = "$STR_DN_FLARE_RED";
		displayNameMagazine = "$STR_MN_FLARE_RED";
		shortNameMagazine = "$STR_SN_FLARE_RED";
	};
	class FlareYellow: Flare {
		ammo = "FlareYellow";
		displayName = "$STR_DN_FLARE_YELLOW";
		displayNameMagazine = "$STR_MN_FLARE_YELLOW";
		shortNameMagazine = "$STR_SN_FLARE_YELLOW";
	};
	class Throw: GrenadeLauncher {
		scopeWeapon = 1;
		scopeMagazine = 0;
		valueWeapon = 0;
		weaponType = 0;
		displayName = "$STR_DN_THROW";
		sound[] = {"",0.00031622773,1};
		reloadSound[] = {"",0.00031622773,1};
		aiDispersionCoefX = 2.0;
		aiDispersionCoefY = 2.0;
		enableAttack = 0;
		showEmpty = 0;
		autoReload = 1;
		magazines[] = {"HandGrenade","SmokeShell","SmokeShellRed","SmokeShellGreen"};
		canDrop = 0;
	};
	class HandGrenade: GrenadeLauncher {
		scopeWeapon = 0;
		scopeMagazine = 2;
		valueMagazine = 1;
		magazineType = 256;
		ammo = "GrenadeHand";
		displayName = "$STR_DN_HAND_GRENADE";
		displayNameMagazine = "$STR_MN_HAND_GRENADE";
		shortNameMagazine = "$STR_SN_HAND_GRENADE";
		initSpeed = 22;
		maxLeadSpeed = 7;
		reloadTime = 1.5;
		count = 1;
		sound[] = {"",0.00031622773,1};
	};
	class SmokeShell: HandGrenade {
		valueMagazine = 2;
		ammo = "SmokeShell";
		displayName = "$STR_DN_SMOKE";
		displayNameMagazine = "$STR_MN_SMOKE";
		shortNameMagazine = "$STR_SN_SMOKE";
	};
	class SmokeShellRed: SmokeShell {
		ammo = "SmokeShellRed";
		displayName = "$STR_DN_SMOKE_RED";
		displayNameMagazine = "$STR_MN_SMOKE_RED";
		shortNameMagazine = "$STR_SN_SMOKE_RED";
	};
	class SmokeShellGreen: SmokeShell {
		picture = "smokeshell";
		ammo = "SmokeShellGreen";
		displayName = "$STR_DN_SMOKE_GREEN";
		displayNameMagazine = "$STR_MN_SMOKE_GREEN";
		shortNameMagazine = "$STR_SN_SMOKE_GREEN";
	};
	class Put: Default {
		scopeWeapon = 1;
		scopeMagazine = 0;
		valueWeapon = 0;
		weaponType = 0;
		displayName = "$STR_DN_PUT";
		sound[] = {"",0.00031622773,1};
		reloadSound[] = {"",0.00031622773,1};
		canLock = 0;
		enableAttack = 0;
		optics = 0;
		primary = 0;
		showEmpty = 0;
		magazines[] = {"TimeBomb","PipeBomb","Mine","MineE"};
		canDrop = 0;
	};
	class TimeBomb: Default {
		scopeWeapon = 0;
		scopeMagazine = 0;
		magazineType = "2 * 		256";
		ammo = "TimeBomb";
		displayName = "$STR_DN_TIME_BOMB";
		displayNameMagazine = "$STR_MN_TIME_BOMB";
		shortNameMagazine = "$STR_SN_TIME_BOMB";
		enableAttack = 1;
		valueMagazine = 5;
		count = 1;
		initSpeed = 0;
		maxLeadSpeed = 0;
		useAction = 1;
		useActionTitle = "$STR_ACTION_PUTBOMB";
		sound[] = {"People\gravel_L",0.00031622773,1};
	};
	class Mine: TimeBomb {
		scopeMagazine = 2;
		enableAttack = 0;
		magazineType = "2 * 		256";
		ammo = "Mine";
		displayName = "$STR_DN_MINE";
		displayNameMagazine = "$STR_MN_MINE";
		shortNameMagazine = "$STR_SN_MINE";
	};
	class MineE: TimeBomb {
		scopeMagazine = 2;
		enableAttack = 0;
		picture = "mine";
		magazineType = "2 * 		256";
		ammo = "MineE";
		displayName = "$STR_DN_MINE";
		displayNameMagazine = "$STR_MN_MINE";
		shortNameMagazine = "$STR_SN_MINE";
	};
	class PipeBomb: Put {
		scopeWeapon = 0;
		scopeMagazine = 2;
		enableAttack = 1;
		valueMagazine = 5;
		magazineType = "2 * 		256";
		ammo = "PipeBomb";
		displayName = "$STR_DN_PIPE_BOMB";
		displayNameMagazine = "$STR_MN_PIPE_BOMB";
		shortNameMagazine = "$STR_SN_PIPE_BOMB";
		count = 1;
		initSpeed = 0;
		maxLeadSpeed = 0;
		showEmpty = 0;
		useAction = 1;
		useActionTitle = "$STR_ACTION_PUTBOMB";
		sound[] = {"People\gravel_L",0.00031622773,1};
		magazines[] = {"this"};
	};
	class LAWLauncher: Default {
		scopeWeapon = 2;
		scopeMagazine = 2;
		weaponType = 16;
		magazineType = "2 * 		256";
		valueWeapon = 10;
		valueMagazine = 5;
		model = "law_proxy";
		modelOptics = "optika_LAW";
		ammo = "LAW";
		displayName = "$STR_DN_LAW";
		displayNameMagazine = "$STR_MN_LAW";
		shortNameMagazine = "$STR_SN_LAW";
		count = 1;
		magazineReloadTime = 12;
		reloadTime = 0.5;
		sound[] = {"Weapons\at_launch",0.01,1};
		reloadMagazineSound[] = {"Weapons\at_load",0.00031622773,1};
		initSpeed = 30;
		canLock = 0;
		reloadAction = "ManActReloadAT";
		autoReload = 0;
		ffMagnitude = 0.1;
		ffFrequency = 1;
		ffCount = 1;
		recoil = "LAWSingle";
		aiRateOfFire = 10.0;
		aiRateOfFireDistance = 500;
		optics = 1;
		primary = 0;
		opticsZoomMin = 0.18;
		opticsZoomMax = 0.18;
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		uiPicture = "islaw";
	};
	class RPGLauncher: LAWLauncher {
		model = "RPG7_proxy";
		modelOptics = "optika_RPG";
		ammo = "RPG";
		displayName = "$STR_DN_RPG";
		displayNameMagazine = "$STR_MN_RPG";
		shortNameMagazine = "$STR_SN_RPG";
	};
	class CarlGustavLauncher: LAWLauncher {
		magazineType = "6 * 		256";
		model = "carlgustav84_proxy";
		modelOptics = "optika_CarlGustav";
		canLock = 1;
		valueWeapon = 20;
		valueMagazine = 10;
		ammo = "CarlGustav";
		displayName = "$STR_DN_CARL_GUSTAV";
		displayNameMagazine = "$STR_MN_CARL_GUSTAV";
		shortNameMagazine = "$STR_SN_CARL_GUSTAV";
		uiPicture = "isat";
	};
	class AT4Launcher: CarlGustavLauncher {
		model = "AT-4_SpigotB_proxy";
		modelOptics = "optika_AT4_Spigot_B";
		ammo = "AT4";
		displayName = "$STR_DN_AT4";
		displayNameMagazine = "$STR_MN_AT4";
		shortNameMagazine = "$STR_SN_AT4";
	};
	class AALauncher: CarlGustavLauncher {
		scopeWeapon = 2;
		scopeMagazine = 2;
		model = "Stinger_proxy";
		modelOptics = "optika_stinger";
		magazineType = "6 * 		256";
		canLock = 2;
		valueWeapon = 20;
		valueMagazine = 10;
		ammo = "AA";
		displayName = "$STR_DN_AA";
		displayNameMagazine = "$STR_MN_AA";
		shortNameMagazine = "$STR_SN_AA";
		initSpeed = 30;
		maxLeadSpeed = 600;
		primary = 0;
		uiPicture = "isaa";
	};
	class 9K32Launcher: AALauncher {
		model = "9K32_Strela_proxy";
		modelOptics = "optika_strela";
		ammo = "9K32";
		displayName = "$STR_DN_9K32";
		displayNameMagazine = "$STR_MN_9K32";
		shortNameMagazine = "$STR_SN_9K32";
	};
	class AT3Launcher: CarlGustavLauncher {
		scopeWeapon = 2;
		scopeMagazine = 2;
		weaponType = 65536;
		magazineType = 0;
		ammo = "AT3";
		displayName = "$STR_DN_AT3";
		displayNameMagazine = "$STR_MN_AT3";
		shortNameMagazine = "$STR_SN_AT3";
		count = 6;
		reloadTime = 30.0;
		sound[] = {"Weapons\missile",0.0031622774,1};
		reloadSound[] = {"Weapons\missload",0.00031622773,1};
		initSpeed = 30;
		primary = 10;
		canLock = 2;
		autoReload = 1;
	};
	class HellfireLauncher: AT3Launcher {
		scopeWeapon = 2;
		scopeMagazine = 2;
		ammo = "Hellfire";
		displayName = "$STR_DN_TOW";
		displayNameMagazine = "$STR_MN_TOW";
		shortNameMagazine = "$STR_SN_TOW";
		count = 8;
		reloadTime = 0.5;
		sound[] = {"Weapons\TOW",0.031622775,1};
		reloadSound[] = {"Weapons\missload",0.00031622773,1};
		initSpeed = 0;
		aiRateOfFire = 13.0;
		aiRateOfFireDistance = 2500;
	};
	class ZuniLauncher38: AT3Launcher {
		scopeWeapon = 2;
		scopeMagazine = 2;
		ammo = "Zuni";
		displayName = "$STR_DN_FFAR";
		displayNameMagazine = "$STR_MN_FFAR";
		shortNameMagazine = "$STR_SN_FFAR";
		count = 38;
		reloadTime = 0.1;
		aiRateOfFire = 0.4;
		aiRateOfFireDistance = 1000;
		sound[] = {"Weapons\rocket1",0.031622775,1};
		reloadSound[] = {"Weapons\missload",0.00031622773,1};
		initSpeed = 44;
		autoFire = 1;
	};
	class Rocket57x64: ZuniLauncher38 {
		ammo = "Rocket57";
		displayName = "$STR_DN_ROCKET_57";
		displayNameMagazine = "$STR_MN_ROCKET_57";
		shortNameMagazine = "$STR_SN_ROCKET_57";
		count = 64;
	};
	class Rocket57x192: Rocket57x64 {
		count = 192;
	};
	class HellfireLauncherCobra: HellfireLauncher {
		count = 8;
	};
	class HellfireLauncherHind: HellfireLauncher {
		ammo = "AT6";
		displayName = "$STR_DN_AT6";
		displayNameMagazine = "$STR_MN_AT6";
		shortNameMagazine = "$STR_SN_AT6";
		count = 8;
		initSpeed = 30;
	};
	class MaverickLauncher: HellfireLauncher {
		ammo = "Maverick";
		displayName = "$STR_DN_MAVERICK";
		displayNameMagazine = "$STR_MN_MAVERICK";
		shortNameMagazine = "$STR_SN_MAVERICK";
		count = 8;
		reloadTime = 0.5;
		sound[] = {"Weapons\Missile",0.0031622774,1};
		reloadSound[] = {"",0,1};
		initSpeed = 0;
	};
	class CarHorn: Default {
		scopeWeapon = 1;
		ammo = "";
		displayName = "$STR_DN_HORN";
		reloadTime = 0.0;
		drySound[] = {"Vehicles\carhorn",0.099999994,1};
		canLock = 0;
		optics = 0;
		enableAttack = 0;
		magazines[] = {};
	};
	class TruckHorn: CarHorn {
		drySound[] = {"Vehicles\carhorn",0.099999994,0.7};
	};
	class SportCarHorn: CarHorn {
		drySound[] = {"Vehicles\sportcarhorn",0.099999994,1};
	};
};
class CfgCloudlets {
	access = 1;
	class Explosion {
		access = 3;
		cloudletDuration = 0.2;
		cloudletAnimPeriod = 0.5;
		cloudletSize = 1.0;
		cloudletAlpha = 1.0;
		cloudletGrowUp = 0.05;
		cloudletFadeIn = 0.01;
		cloudletFadeOut = 0.2;
		cloudletAccY = -0.2;
		cloudletMinYSpeed = 0;
		cloudletMaxYSpeed = 6;
		cloudletShape = "cl_fired";
		cloudletColor[] = {1,1,1,0};
		interval = 0.001;
		size = 4.0;
		sourceSize = 3.0;
		timeToLive = 0;
		initT = 2500;
		deltaT = -4000;
		class Table {
			class T14 {
				maxT = 1400;
				color[] = {0.91,0.5,0.17,0};
			};
			class T15 {
				maxT = 1500;
				color[] = {1,0.6,0.2,0};
			};
			class T16 {
				maxT = 1600;
				color[] = {1,0.71,0.3,0};
			};
			class T17 {
				maxT = 1700;
				color[] = {0.98,0.83,0.41,0};
			};
			class T18 {
				maxT = 1800;
				color[] = {0.98,0.91,0.54,0};
			};
			class T19 {
				maxT = 1900;
				color[] = {0.98,0.99,0.6,0};
			};
			class T20 {
				maxT = 2000;
				color[] = {0.96,0.99,0.72,0};
			};
			class T21 {
				maxT = 2100;
				color[] = {1,0.98,0.91,0};
			};
			class T22 {
				maxT = 2200;
				color[] = {1,1,1,0};
			};
		};
	};
	class CraterSmoke1 {
		access = 3;
		interval = "0.05 / 	0.8";
		cloudletAnimPeriod = "1 * 	0.8";
		cloudletSize = 2.0;
		cloudletAlpha = 1.0;
		cloudletGrowUp = "1.0 * 	0.8";
		cloudletFadeIn = "0.1 * 	0.8";
		cloudletDuration = "3.0 * 	0.8";
		cloudletFadeOut = "1.5 * 	0.8";
		cloudletAccY = -0.1;
		cloudletMinYSpeed = "0.0 / 	0.8";
		cloudletMaxYSpeed = "5.0 / 	0.8";
		cloudletColor[] = {1,1,1,0};
		initT = 500;
		deltaT = "-50 * 	0.8";
		class Table {
			class T0 {
				maxT = 0;
				color[] = {1,1,1,0};
			};
			class T1 {
				maxT = 500;
				color[] = {0.5,0.5,0.5,0};
			};
		};
		cloudletShape = "cl_basic";
		density = "1.0 / 0.7";
		size = 1.0;
		timeToLive = "0.4 * 	0.8";
		in = "0.0 * 	0.8";
		out = "0.0 * 	0.8";
		initYSpeed = "5.0 / 	0.8";
	};
	class CraterSmoke2 {
		access = 3;
		interval = "0.1 / 	0.8";
		cloudletAnimPeriod = "1 * 	0.8";
		cloudletSize = 2.0;
		cloudletAlpha = 1.0;
		cloudletGrowUp = "1.0 * 	0.8";
		cloudletFadeIn = "0.1 * 	0.8";
		cloudletDuration = "2.5 * 	0.8";
		cloudletFadeOut = "1.5 * 	0.8";
		cloudletAccY = -0.1;
		cloudletMinYSpeed = "0.0 / 	0.8";
		cloudletMaxYSpeed = "2.0 / 	0.8";
		cloudletColor[] = {1,1,1,0};
		initT = 0;
		deltaT = "0 * 	0.8";
		class Table {
			class T0 {
				maxT = 0;
				color[] = {1,1,1,0};
			};
		};
		cloudletShape = "cl_basic";
		density = "1.0 / 0.7";
		size = 1.0;
		timeToLive = "1.0 * 	0.8";
		in = "0.0 * 	0.8";
		out = "2.0 * 	0.8";
		initYSpeed = "0 / 	0.8";
	};
	class CraterSmoke3 {
		access = 3;
		interval = "0.1 / 	0.8";
		cloudletAnimPeriod = "1 * 	0.8";
		cloudletSize = 1.0;
		cloudletAlpha = 0.3;
		cloudletGrowUp = "1.0 * 	0.8";
		cloudletFadeIn = "0.5 * 	0.8";
		cloudletDuration = "3 * 	0.8";
		cloudletFadeOut = "1 * 	0.8";
		cloudletAccY = "-0.1 * 	0.8";
		cloudletMinYSpeed = "0.0 / 	0.8";
		cloudletMaxYSpeed = "5.0 / 	0.8";
		cloudletColor[] = {1,1,1,0};
		initT = 500;
		deltaT = "-80 * 	0.8";
		class Table {
			class T0 {
				maxT = 0;
				color[] = {1,1,1,0};
			};
		};
		cloudletShape = "cl_basic";
		density = "0.5 / 0.7";
		size = 1.0;
		timeToLive = "2.0 * 	0.8";
		in = "0.2 * 	0.8";
		out = "0.0 * 	0.8";
		initYSpeed = "5.0 / 	0.8";
	};
	class CraterDustSmall {
		access = 3;
		interval = 0.01;
		cloudletSize = 1;
		cloudletAlpha = 0.6;
		cloudletDuration = 0.2;
		cloudletAnimPeriod = 1;
		cloudletGrowUp = 0.6;
		cloudletFadeIn = 0;
		cloudletFadeOut = 0.6;
		cloudletAccY = -3.5;
		cloudletMinYSpeed = -20;
		cloudletMaxYSpeed = 10;
		cloudletColor[] = {0.25,0.23,0.16,0};
		initT = 0;
		deltaT = 0;
		class Table {
			class T0 {
				maxT = 0;
				color[] = {1,1,1,0};
			};
		};
		cloudletShape = "cl_basic";
		size = 0.2;
		sourceSize = 0.02;
	};
	class CraterBlood: CraterDustSmall {
		access = 3;
		interval = 0.005;
		cloudletAlpha = 0.5;
		cloudletDuration = 0.1;
		cloudletAnimPeriod = 1;
		cloudletGrowUp = 0.3;
		cloudletFadeIn = 0;
		cloudletFadeOut = 0.3;
		cloudletAccY = -1;
		cloudletMinYSpeed = -10;
		cloudletMaxYSpeed = 10;
		cloudletShape = "cl_water";
		cloudletColor[] = {0.35,0.0,0.05,0};
		size = 0.15;
		sourceSize = 0.05;
	};
	class CraterWater: CraterDustSmall {
		access = 3;
		interval = 0.01;
		cloudletAlpha = 1;
		cloudletDuration = 0.3;
		cloudletAnimPeriod = 1;
		cloudletGrowUp = 0.3;
		cloudletFadeIn = 0;
		cloudletFadeOut = 0.2;
		cloudletAccY = -10;
		cloudletMinYSpeed = -100;
		cloudletMaxYSpeed = 100;
		cloudletShape = "cl_water";
		cloudletColor[] = {0.54,0.69,0.645,0};
		size = 0.02;
		sourceSize = 0.02;
	};
	class CraterDustBig: CraterDustSmall {
		access = 3;
		cloudletDuration = 2;
		cloudletGrowUp = 0.2;
		cloudletFadeIn = 0.2;
		cloudletFadeOut = 1.5;
		cloudletAccY = -8;
		cloudletMinYSpeed = -20;
		cloudletMaxYSpeed = 10;
	};
	class CloudletsMissile {
		access = 3;
		interval = 0.005;
		cloudletSize = 3;
		cloudletAlpha = 0.5;
		cloudletDuration = 0.45;
		cloudletAnimPeriod = 1;
		cloudletGrowUp = 0.05;
		cloudletFadeIn = 0.0;
		cloudletFadeOut = 0.5;
		cloudletAccY = 0;
		cloudletMinYSpeed = -10;
		cloudletMaxYSpeed = 10;
		cloudletColor[] = {1,1,1,0};
		initT = 0;
		deltaT = 0;
		class Table {
			class T0 {
				maxT = 0;
				color[] = {1,1,1,0};
			};
		};
		cloudletShape = "missileSmoke";
	};
	class CloudletsMissileManual: CloudletsMissile {
		cloudletSize = 0.5;
		cloudletAlpha = 0.4;
	};
	class CloudletsScud: CloudletsMissile {
		cloudletSize = 8;
		cloudletAlpha = 0.5;
		cloudletColor[] = {1,1,1,0};
		cloudletFadeIn = 0;
		cloudletDuration = 1.5;
		cloudletFadeOut = 0.5;
		cloudletGrowUp = 1;
		cloudletAccY = 0;
		cloudletMinYSpeed = -1000;
		cloudletMaxYSpeed = 1000;
		interval = 0.02;
		size = 8.0;
		sourceSize = 1.0;
	};
};
class WeaponFireGun {
	access = 3;
	cloudletDuration = 0.2;
	cloudletAnimPeriod = 1.0;
	cloudletSize = 1.0;
	cloudletAlpha = 1.0;
	cloudletGrowUp = 0.2;
	cloudletFadeIn = 0.01;
	cloudletFadeOut = 0.5;
	cloudletAccY = 0;
	cloudletMinYSpeed = -100;
	cloudletMaxYSpeed = 100;
	cloudletShape = "cl_fired";
	cloudletColor[] = {1,1,1,0};
	interval = 0.01;
	size = 3;
	sourceSize = 0.5;
	timeToLive = 0;
	initT = 4500;
	deltaT = -3000;
	class Table {
		class T0 {
			maxT = 0;
			color[] = {0.82,0.95,0.93,0};
		};
		class T1 {
			maxT = 200;
			color[] = {0.75,0.77,0.9,0};
		};
		class T2 {
			maxT = 400;
			color[] = {0.56,0.62,0.67,0};
		};
		class T3 {
			maxT = 600;
			color[] = {0.39,0.46,0.47,0};
		};
		class T4 {
			maxT = 800;
			color[] = {0.24,0.31,0.31,0};
		};
		class T5 {
			maxT = 1000;
			color[] = {0.23,0.31,0.29,0};
		};
		class T6 {
			maxT = 1500;
			color[] = {0.21,0.29,0.27,0};
		};
		class T7 {
			maxT = 2000;
			color[] = {0.19,0.23,0.21,0};
		};
		class T8 {
			maxT = 2300;
			color[] = {0.22,0.19,0.1,0};
		};
		class T9 {
			maxT = 2500;
			color[] = {0.35,0.2,0.02,0};
		};
		class T10 {
			maxT = 2600;
			color[] = {0.62,0.29,0.03,0};
		};
		class T11 {
			maxT = 2650;
			color[] = {0.59,0.35,0.05,0};
		};
		class T12 {
			maxT = 2700;
			color[] = {0.75,0.37,0.03,0};
		};
		class T13 {
			maxT = 2750;
			color[] = {0.88,0.34,0.03,0};
		};
		class T14 {
			maxT = 2800;
			color[] = {0.91,0.5,0.17,0};
		};
		class T15 {
			maxT = 2850;
			color[] = {1,0.6,0.2,0};
		};
		class T16 {
			maxT = 2900;
			color[] = {1,0.71,0.3,0};
		};
		class T17 {
			maxT = 2950;
			color[] = {0.98,0.83,0.41,0};
		};
		class T18 {
			maxT = 3000;
			color[] = {0.98,0.91,0.54,0};
		};
		class T19 {
			maxT = 3100;
			color[] = {0.98,0.99,0.6,0};
		};
		class T20 {
			maxT = 3300;
			color[] = {0.96,0.99,0.72,0};
		};
		class T21 {
			maxT = 3600;
			color[] = {1,0.98,0.91,0};
		};
		class T22 {
			maxT = 4200;
			color[] = {1,1,1,0};
		};
	};
};
class WeaponFireMGun: WeaponFireGun {
	cloudletDuration = 0;
	cloudletGrowUp = 0.06;
	cloudletFadeIn = 0;
	cloudletFadeOut = 0.12;
	interval = 0.005;
	size = 0.12;
	sourceSize = 0.01;
	initT = 3200;
	deltaT = -4000;
};
class WeaponCloudsGun {
	access = 3;
	cloudletDuration = 0.3;
	cloudletAnimPeriod = 1.0;
	cloudletSize = 1.0;
	cloudletAlpha = 1.0;
	cloudletGrowUp = 1;
	cloudletFadeIn = 0.01;
	cloudletFadeOut = 1;
	cloudletAccY = 0.4;
	cloudletMinYSpeed = 0.2;
	cloudletMaxYSpeed = 0.8;
	cloudletShape = "cl_basic";
	cloudletColor[] = {1,1,1,0};
	interval = 0.05;
	size = 3;
	sourceSize = 0.5;
	timeToLive = 0;
	initT = 0;
	deltaT = 0;
	class Table {
		class T0 {
			maxT = 0;
			color[] = {1,1,1,0};
		};
	};
};
class WeaponCloudsMGun: WeaponCloudsGun {
	access = 3;
	cloudletGrowUp = 0.05;
	cloudletFadeIn = 0;
	cloudletFadeOut = 0.1;
	cloudletDuration = 0.05;
	cloudletAlpha = 0.3;
	cloudletAccY = 0;
	cloudletMinYSpeed = -100;
	cloudletMaxYSpeed = 100;
	interval = 0.02;
	size = 0.3;
	sourceSize = 0.02;
};
class CfgCloth {
	class Flag {
		stepSize = 0.005;
		colPoints = 9;
		rowPoints = 9;
		stretchCoef = 1000;
		fricCoef = 1;
		windCoef = 10;
		gravCoef = 1;
	};
};
class CfgVehicles {
	access = 1;
	vehicleClass[] = {"Men","Car","Armored","Air","Support","Camera","Objects","Ammo","Sounds","Mines"};
	class All {
		access = 3;
		scope = 0;
		reversed = 1;
		autocenter = 1;
		animated = 1;
		mapSize = 10;
		vehicleClass = "";
		icon = "unknown_object";
		side = 4;
		displayName = "$STR_DN_UNKNOWN";
		nameSound = "target";
		weaponSlots = 0;
		camouflage = 2;
		audible = 1;
		accuracy = 0;
		spotableNightLightsOff = 0.05;
		spotableNightLightsOn = 4;
		insideSoundCoef = 0.5;
		outGunnerMayFire = 0;
		viewGunnerInExternal = 0;
		unloadInCombat = 0;
		visibleNightLightsOff = 0.1;
		visibleNightLightsOn = 0.2;
		sensitivity = 1;
		sensitivityEar = 0.0075;
		model = "bmp";
		picture = "";
		simulation = "";
		destrType = "DestructDefault";
		armor = 100;
		armorLights = 0.4;
		armorStructural = 1.0;
		cost = 500000;
		fuelCapacity = 0;
		extCameraPosition[] = {0,2,-20};
		steerAheadSimul = 0.3;
		steerAheadPlan = 0.4;
		minFireTime = 20;
		predictTurnSimul = 1.2;
		predictTurnPlan = 1.0;
		precision = 5;
		brakeDistance = 5;
		formationX = 10;
		formationZ = 20;
		formationTime = 10;
		irTarget = 1;
		irScanRangeMin = 0;
		irScanRangeMax = 0;
		irScanToEyeFactor = 1;
		irScanGround = 1;
		laserTarget = 0;
		laserScanner = 0;
		preferRoads = 0;
		unitInfoType = "UnitInfoTank";
		hideUnitInfo = 0;
		nightVision = 0;
		commanderCanSee = 31;
		gunnerCanSee = "4+8+16";
		driverCanSee = "2+8+16";
		maxSpeed = 80;
		secondaryExplosion = -1;
		hasDriver = 1;
		hasGunner = 0;
		hasCommander = 0;
		driverIsCommander = 0;
		hideWeaponsDriver = 1;
		hideWeaponsGunner = 1;
		hideWeaponsCommander = 1;
		hideWeaponsCargo = 0;
		getInRadius = 2.5;
		class ViewPilotBase {
			initAngleX = 5;
			minAngleX = -30;
			maxAngleX = 30;
			initAngleY = 0;
			minAngleY = -100;
			maxAngleY = 100;
			initFov = 0.7;
			minFov = 0.42;
			maxFov = 0.85;
		};
		class ViewCommanderBase {
			initAngleX = 5;
			minAngleX = -30;
			maxAngleX = 30;
			initAngleY = 0;
			minAngleY = -100;
			maxAngleY = 100;
			initFov = 0.7;
			minFov = 0.42;
			maxFov = 0.85;
		};
		class ViewGunnerBase {
			initAngleX = 5;
			minAngleX = -30;
			maxAngleX = 30;
			initAngleY = 0;
			minAngleY = -100;
			maxAngleY = 100;
			initFov = 0.7;
			minFov = 0.42;
			maxFov = 0.85;
		};
		class ViewCargoBase {
			initAngleX = 5;
			minAngleX = -30;
			maxAngleX = 30;
			initAngleY = 0;
			minAngleY = -360;
			maxAngleY = 360;
			initFov = 0.7;
			minFov = 0.42;
			maxFov = 0.85;
		};
		class ViewOpticsBase {
			initAngleX = 0;
			minAngleX = -30;
			maxAngleX = 30;
			initAngleY = 0;
			minAngleY = -100;
			maxAngleY = 100;
			initFov = 0.7;
			minFov = 0.42;
			maxFov = 0.85;
		};
		class ViewPilot: ViewPilotBase {};
		class ViewGunner: ViewGunnerBase {};
		class ViewCommander: ViewCommanderBase {};
		class ViewCargo: ViewCargoBase {};
		class ViewOptics: ViewOpticsBase {};
		transportSoldier = 0;
		transportAmmo = 0;
		transportMaxMagazines = 0;
		transportMaxWeapons = 0;
		transportFuel = 0;
		transportRepair = 0;
		transportVehiclesCount = 0;
		transportVehiclesMass = 0;
		class TransportWeapons {};
		class TransportMagazines {};
		attendant = 0;
		soundEngine[] = {"",1,1};
		soundEnviron[] = {"",1,1};
		class SoundEnvironExt {};
		soundCrash[] = {"Vehicles\crash",0.31622776,1};
		soundLandCrash[] = {"Explosions\intoground",0.31622776,1};
		soundWaterCrash[] = {"Explosions\intowater",0.31622776,1};
		soundGetIn[] = {"Vehicles\get_in",0.00031622773,1};
		soundGetOut[] = {"Vehicles\get_out",0.00031622773,1};
		soundServo[] = {"Vehicles\gun_elevate",0.01,0.5};
		soundDammage[] = {"",1,1};
		weapons[] = {};
		magazines[] = {};
		type = 1;
		threat[] = {0.7,0.5,0.3};
		typicalCargo[] = {};
		class Reflectors {};
		getInAction = "ManActGetInTank";
		getOutAction = "ManActGetOutTank";
		driverAction = "ManActCargo";
		gunnerAction = "ManActCargo";
		commanderAction = "ManActCargo";
		driverInAction = "ManActCargo";
		gunnerInAction = "ManActCargo";
		commanderInAction = "ManActCargo";
		cargoAction[] = {"ManActCargo"};
		cargoIsCoDriver[] = {0};
		driverOpticsModel = "";
		gunnerOpticsModel = "";
		commanderOpticsModel = "";
		driverOpticsColor[] = {0,0,0,1};
		gunnerOpticsColor[] = {0,0,0,1};
		commanderOpticsColor[] = {0,0,0,1};
		hideProxyInCombat = 0;
		forceHideGunner = 0;
		forceHideDriver = 0;
		forceHideCommander = 0;
		gunnerUsesPilotView = 0;
		commanderUsesPilotView = 0;
		castDriverShadow = 0;
		castGunnerShadow = 0;
		castCommanderShadow = 0;
		castCargoShadow = 0;
		ejectDeadDriver = 0;
		ejectDeadGunner = 0;
		ejectDeadCommander = 0;
		ejectDeadCargo = 0;
		crew = "Civilian";
		hiddenSelections[] = {};
	};
	class Logic: All {
		displayName = "$STR_DN_LOGIC";
		nameSound = "target";
		scope = 2;
		vehicleClass = "Objects";
		simulation = "invisible";
		side = 7;
		icon = "vlajka";
		model = "empty";
		picture = "iaston";
	};
	class AllVehicles: All {
		icon = "unknown_move";
	};
	class Land: AllVehicles {
		displayName = "$STR_DN_VEHICLE";
		nameSound = "target";
		accuracy = 0.0005;
		armor = 30;
		cost = 100000;
		fuelCapacity = 0;
		weapons[] = {"MachineGun12_7"};
		magazines[] = {"MachineGun12_7"};
		type = 1;
		threat[] = {0.8,0.8,0.3};
	};
	class LandVehicle: Land {
		displayName = "$STR_DN_VEHICLE";
		accuracy = 0.02;
		cost = 500000;
		class Reflectors {
			class Left {
				color[] = {0.9,0.8,0.8,1.0};
				ambient[] = {0.1,0.1,0.1,1.0};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 0.5;
				brightness = 0.25;
			};
			class Right {
				color[] = {0.9,0.8,0.8,1.0};
				ambient[] = {0.1,0.1,0.1,1.0};
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
				size = 0.5;
				brightness = 0.25;
			};
		};
	};
	class Car: LandVehicle {
		mapSize = 5;
		icon = "car";
		displayName = "$STR_DN_CAR";
		nameSound = "car";
		accuracy = 0.2;
		cost = 40000;
		fuelCapacity = 100;
		unloadInCombat = 1;
		canFloat = 0;
		armor = 20;
		armorStructural = 4.0;
		driverCanSee = "8+2";
		gunnerCanSee = "2+8";
		class HitEngine {
			armor = 1.2;
			material = 60;
			name = "engine";
			passThrough = 1;
		};
		dammageHalf[] = {"jeep4x4_glass.paa","jeep4x4_glassB.paa","jeep_kab_sklo1.paa","jeep_kab_sklo1B.paa","jeep_kab_sklo2.paa","jeep_kab_sklo2B.paa","scud_sklo.paa","scud_skloB.paa","scud_sklo2.paa","scud_sklo2B.paa","scud_sklo3.paa","scud_sklo3B.paa","scud_sklo4.paa","scud_sklo4B.paa"};
		dammageFull[] = {"jeep4x4_glass.paa","jeep4x4_glassC.paa","jeep_kab_sklo1.paa","jeep_kab_sklo1C.paa","jeep_kab_sklo2.paa","jeep_kab_sklo2C.paa","scud_sklo.paa","scud_skloC.paa","scud_sklo2.paa","scud_sklo2C.paa","scud_sklo3.paa","scud_sklo3C.paa","scud_sklo4.paa","scud_sklo4C.paa"};
		armorBody = 0.4;
		armorFuel = 1.4;
		armorLights = 0.4;
		armorWheels = 0.05;
		armorGlass = 0.5;
		vehicleClass = "Car";
		wheelCircumference = 2.513;
		turnCoef = 2.0;
		terrainCoef = 3.0;
		maxSpeed = 100;
		preferRoads = 1;
		unitInfoType = "UnitInfoCar";
		hideUnitInfo = 1;
		formationX = 20;
		formationZ = 20;
		precision = 10;
		brakeDistance = 10;
		steerAheadSimul = 0.5;
		steerAheadPlan = 0.35;
		predictTurnSimul = 1.2;
		predictTurnPlan = 1.2;
		sensitivity = 0.6;
		soundEngine[] = {"Vehicles\mediumcar",0.031622775,2.0};
		soundEnviron[] = {"Objects\noise",0.00056234124,0.25};
		soundCrash[] = {"Vehicles\crash",0.099999994,1};
		soundGear[] = {"Vehicles\truck_gear",0.00017782791,1};
		extCameraPosition[] = {0,1,-10};
		class ViewPilot: ViewPilotBase {
			initFov = 0.7;
			minFov = 0.4;
			maxFov = 1.0;
			initAngleX = 15;
			minAngleX = -15;
			maxAngleX = 25;
			initAngleY = 0;
			minAngleY = -100;
			maxAngleY = 100;
		};
		simulation = "car";
		weapons[] = {"CarHorn"};
		magazines[] = {};
		type = 0;
		threat[] = {0.5,0.5,0.5};
		typicalCargo[] = {"Soldier"};
		audible = 3;
		getInAction = "ManActGetInCar";
		getOutAction = "ManActGetOutCar";
		damperSize = 0.1;
		damperForce = 30;
		class IndicatorSpeed {
			selection = "ukaz_rychlo";
			axis = "osa_rychlo";
			angle = -240;
			min = 0;
			max = 16.67;
		};
		class IndicatorSpeed2 {
			selection = "ukaz_rychlo2";
			axis = "osa_rychlo2";
			angle = -240;
			min = 0;
			max = 16.67;
		};
		class IndicatorRPM {
			selection = "ukaz_rpm";
			axis = "osa_rpm";
			angle = -340;
			min = 0;
			max = 1;
		};
		scudLaunch = "";
		scudStart = "";
		transportMaxMagazines = 50;
		transportMaxWeapons = 10;
	};
	class Motorcycle: LandVehicle {
		simulation = "motorcycle";
		displayName = "$STR_DN_MOTORCYCLE";
		accuracy = 0.2;
		mapSize = 5;
		icon = "car";
		nameSound = "car";
		isBicycle = 0;
		unloadInCombat = 1;
		castDriverShadow = 1;
		castCargoShadow = 1;
		ejectDeadDriver = 1;
		ejectDeadCargo = 1;
		armor = 10;
		armorStructural = 4.0;
		cost = 500;
		fuelCapacity = 50;
		transportSoldier = 0;
		typicalCargo[] = {};
		driverCanSee = "8+2";
		gunnerCanSee = "2+8";
		class HitEngine {
			armor = 1.2;
			material = 60;
			name = "engine";
			passThrough = 1;
		};
		dammageHalf[] = {"jeep_kab_sklo1.paa","jeep_kab_sklo1B.paa"};
		dammageFull[] = {"jeep_kab_sklo1.paa","jeep_kab_sklo1C.paa"};
		armorBody = 0.4;
		armorFuel = 1.4;
		armorLights = 0.4;
		armorWheels = 0.05;
		armorGlass = 0.5;
		vehicleClass = "Car";
		wheelCircumference = 2.513;
		turnCoef = 1.0;
		terrainCoef = 3.0;
		maxSpeed = 120;
		preferRoads = 1;
		unitInfoType = "UnitInfoCar";
		hideUnitInfo = 1;
		formationX = 20;
		formationZ = 20;
		precision = 10;
		brakeDistance = 25;
		steerAheadSimul = 0.5;
		steerAheadPlan = 0.35;
		predictTurnSimul = 1.2;
		predictTurnPlan = 1.2;
		sensitivity = 0.6;
		soundEngine[] = {"Vehicles\mediumcar",0.031622775,2.0};
		soundEnviron[] = {"Objects\noise",0.00056234124,0.25};
		soundCrash[] = {"Vehicles\crash",0.099999994,1};
		soundGear[] = {"Vehicles\truck_gear",0.00017782791,1};
		extCameraPosition[] = {0,1,-10};
		class ViewPilot: ViewPilotBase {
			initFov = 0.7;
			minFov = 0.4;
			maxFov = 1.0;
			initAngleX = 15;
			minAngleX = -15;
			maxAngleX = 25;
			initAngleY = 0;
			minAngleY = -100;
			maxAngleY = 100;
		};
		class Reflectors {
			class Right {
				color[] = {0.9,0.8,0.8,1.0};
				ambient[] = {0.1,0.1,0.1,1.0};
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
				size = 0.5;
				brightness = 0.25;
			};
		};
		weapons[] = {"CarHorn"};
		magazines[] = {};
		type = 0;
		threat[] = {0.5,0.5,0.5};
		audible = 3;
		getInAction = "ManActGetInCar";
		getOutAction = "ManActGetOutCar";
		class IndicatorSpeed {
			selection = "ukaz_rychlo";
			axis = "osa_rychlo";
			angle = -240;
			min = 0;
			max = 16.67;
		};
		class IndicatorSpeed2 {
			selection = "ukaz_rychlo2";
			axis = "osa_rychlo2";
			angle = -240;
			min = 0;
			max = 16.67;
		};
		class IndicatorRPM {
			selection = "ukaz_rpm";
			axis = "osa_rpm";
			angle = -340;
			min = 0;
			max = 1;
		};
		transportMaxMagazines = 5;
		transportMaxWeapons = 0;
	};
	class Tank: LandVehicle {
		vehicleClass = "Armored";
		icon = "tank";
		outGunnerMayFire = 0;
		displayName = "$STR_DN_TANK";
		nameSound = "tank";
		accuracy = 0.12;
		getInRadius = 3.5;
		fuelCapacity = 700;
		irScanRangeMin = 500;
		irScanRangeMax = 4000;
		irScanToEyeFactor = 1;
		armor = 400;
		armorStructural = 2.0;
		class HitEngine {
			armor = 0.8;
			material = 60;
			name = "engine";
			passThrough = 1;
		};
		class HitHull {
			armor = 1;
			material = 50;
			name = "hull";
			passThrough = 1;
		};
		class HitTurret {
			armor = 0.8;
			material = 51;
			name = "turet";
			passThrough = 1;
		};
		class HitGun {
			armor = 0.6;
			material = 52;
			name = "gun";
			passThrough = 1;
		};
		class HitLTrack {
			armor = 0.6;
			material = 53;
			name = "pasL";
			passThrough = 1;
		};
		class HitRTrack {
			armor = 0.6;
			material = 54;
			name = "pasP";
			passThrough = 1;
		};
		armorHull = 1;
		armorTurret = 0.8;
		armorGun = 0.6;
		armorEngine = 0.8;
		armorLights = 0.4;
		armorTracks = 0.6;
		extCameraPosition[] = {0,1.5,-9};
		class ViewPilot: ViewPilotBase {
			initAngleX = 7;
			minAngleX = -15;
			maxAngleX = 25;
			initAngleY = 0;
			minAngleY = -90;
			maxAngleY = 90;
		};
		class ViewOptics: ViewOpticsBase {
			initFov = 0.3;
			minFov = 0.07;
			maxFov = 0.35;
		};
		cost = 1000000;
		steerAheadSimul = 0.4;
		steerAheadPlan = 0.6;
		predictTurnSimul = 1.2;
		predictTurnPlan = 1.8;
		soundEnviron[] = {"Vehicles\OldRolling_Treads1",0.31622776,0.7};
		soundEngine[] = {"Vehicles\OldIdle1",0.31622776,1};
		soundCrash[] = {"Vehicles\crash_small2",0.31622776,1};
		soundGear[] = {"Vehicles\Gear_Trans1",0.0031622774,1};
		soundDammage[] = {"Objects\alarm_loop1",0.01,1};
		hasGunner = 1;
		hasCommander = 1;
		nightVision = 1;
		forceHideGunner = 1;
		driverAction = "ManActCargo";
		gunnerAction = "ManActCargo";
		commanderAction = "ManActCargo";
		driverInAction = "ManActCargo";
		gunnerInAction = "ManActCargo";
		commanderInAction = "ManActCargo";
		simulation = "tank";
		formationX = 20;
		formationZ = 30;
		precision = 5;
		brakeDistance = 15;
		maxSpeed = 80;
		class TurretBase {
			gunAxis = "OsaHlavne";
			turretAxis = "OsaVeze";
			soundServo[] = {"Vehicles\gun_elevate",0.031622775,1.0};
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			minElev = -4;
			maxElev = 20;
			minTurn = -360;
			maxTurn = 360;
			body = "OtocVez";
			gun = "OtocHlaven";
		};
		class Turret: TurretBase {};
		class ComTurret {
			turretAxis = "OsaVelitele";
			gunAxis = "OsaHlavneVelitele";
			soundServo[] = {"Vehicles\gun_elevate",0.00031622773,1.2};
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			minElev = -4;
			maxElev = 20;
			minTurn = -360;
			maxTurn = 360;
			body = "OtocVelitele";
			gun = "OtocHlavenVelitele";
		};
		canFloat = 0;
		weapons[] = {"Gun120","MachineGun12_7"};
		magazines[] = {"Heat120","Shell120","MachineGun12_7"};
		type = 1;
		threat[] = {0.7,1,0.3};
		camouflage = 8;
		audible = 6;
		hideProxyInCombat = 1;
		driverOpticsModel = "optika_tank_driver";
		gunnerOpticsModel = "optika_tank_gunner";
		commanderOpticsModel = "optika_tank_driver";
		driverOpticsColor[] = {0,0,0,1};
		gunnerOpticsColor[] = {0.91,0.23,0.23,1};
		commanderOpticsColor[] = {0.91,0.23,0.23,1};
		class Wheels {
			rotR[] = {"kolL1","kolL2","kolL3","kolL4","kolL5","kolL6","kolL7","kolL8"};
			rotL[] = {"kolP1","kolP2","kolP3","kolP4","kolP5","kolP6","kolP7","kolP8"};
			upDownL[] = {"koloP1","podkoloP1","koloP2","podkoloP2","koloP3","podkoloP3","koloP4","podkoloP4","koloP5","podkoloP5","koloP6","podkoloP6","koloP7","podkoloP7","koloP8","podkoloP8"};
			upDownR[] = {"koloL1","podkoloL1","koloL2","podkoloL2","koloL3","podkoloL3","koloL4","podkoloL4","koloL5","podkoloL5","koloL6","podkoloL6","koloL7","podkoloL7","koloL8","podkoloL8"};
		};
		class GunFire: WeaponFireGun {};
		class GunClouds: WeaponCloudsGun {};
		class MGunFire: WeaponFireMGun {};
		class MGunClouds: WeaponCloudsMGun {};
		class HatchDriver {
			selection = "poklop_driver";
			axis = "osa_poklop_driver";
			angle = -100;
		};
		class HatchCommander {
			selection = "poklop_commander";
			axis = "osa_poklop_commander";
			angle = -100;
		};
		class HatchGunner {
			selection = "poklop_gunner";
			axis = "osa_poklop_gunner";
			angle = -100;
		};
		class IndicatorSpeed {
			selection = "ukaz_rychlo";
			axis = "osa_rychlo";
			angle = -240;
			min = 0;
			max = 16.67;
		};
		class IndicatorSpeed2 {
			selection = "ukaz_rychlo2";
			axis = "osa_rychlo2";
			angle = -240;
			min = 0;
			max = 16.67;
		};
		class IndicatorRPM {
			selection = "ukaz_rpm";
			axis = "osa_rpm";
			angle = 340;
			min = 0;
			max = 1;
		};
		class IndicatorRadar {
			selection = "ukaz_radar";
			axis = "osa_radar";
			angle = -360;
			min = 0;
			max = 1;
		};
		class IndicatorWatch {
			hour = "hodinova";
			minute = "minutova";
			axis = "osa_time";
			reversed = 0;
		};
		class IndicatorTurret {
			selection = "ukazsmer";
			axis = "osa_ukazsmer";
			angle = 360;
			min = 0;
			max = 6.2831855;
		};
		class CargoLight {
			color[] = {0,0,0,0};
			ambient[] = {0.6,0,0.15,1};
			brightness = 0.007;
		};
		transportMaxMagazines = 50;
		transportMaxWeapons = 10;
	};
	class APC: Tank {
		icon = "bmp";
		vehicleClass = "Armored";
		displayName = "$STR_DN_APC";
		nameSound = "apc";
		accuracy = 0.12;
		fuelCapacity = 700;
		armor = 200;
		cost = 1000000;
		hasGunner = 1;
		hasCommander = 1;
		soundEnviron[] = {"Vehicles\OldRolling_Treads1",0.31622776,0.7};
		soundEngine[] = {"Vehicles\OldIdle1",0.31622776,1};
		soundCrash[] = {"Vehicles\crash_small2",0.31622776,1};
		soundGear[] = {"Vehicles\Gear_Trans1",0.01,1};
		simulation = "tank";
		maxSpeed = 60;
		class Turret: TurretBase {
			minElev = -4.5;
			maxElev = 20;
		};
		canFloat = 0;
		weapons[] = {"AT3Launcher","MachineGun12_7"};
		magazines[] = {"AT3Launcher","MachineGun12_7"};
		type = 1;
		threat[] = {0.8,1,0.3};
	};
	class Man: Land {
		mapSize = 0.5;
		vehicleClass = "Men";
		icon = "soldier";
		autocenter = 0;
		isMan = 1;
		displayName = "$STR_DN_MAN";
		nameSound = "man";
		extCameraPosition[] = {0,0.3,-3.5};
		accuracy = 0.25;
		audible = 0.05;
		camouflage = 1;
		sensitivity = 1;
		sensitivityEar = 0.13;
		formationX = 5;
		formationZ = 5;
		precision = 1;
		brakeDistance = 1;
		steerAheadSimul = 0.2;
		steerAheadPlan = 0.2;
		maxSpeed = 24;
		irTarget = 0;
		canHideBodies = 0;
		canDeactivateMines = 0;
		unitInfoType = "UnitInfoSoldier";
		hideUnitInfo = 1;
		armor = 3;
		armorStructural = 2.0;
		armorHead = 0.7;
		armorBody = 0.8;
		armorHands = 0.5;
		armorLegs = 0.5;
		cost = 100000;
		simulation = "soldier";
		wounds[] = {"xicht_a.paa","xicht_a_zranen","xicht_b.paa","xicht_a_zranen","xicht_c.paa","xicht_a_zranen","xicht_d.paa","xicht_a_zranen","xicht_e.paa","xicht_e_zranen","xicht_f.paa","xicht_a_zranen","xicht_g.paa","xicht_a_zranen","xicht_h.paa","xicht_a_zranen","xicht_i.paa","xicht_a_zranen","xicht_j.paa","xicht_a_zranen","xicht_k.paa","xicht_a_zranen","xicht_l.paa","xicht_a_zranen","xicht_m.paa","xicht_a_zranen","xicht_n.paa","xicht_a_zranen","xicht_o.paa","xicht_o_zranen","xicht_p.paa","xicht_a_zranen","xicht_q.paa","xicht_a_zranen","xicht_r.paa","xicht_a_zranen","xicht_s.paa","xicht_a_zranen","xicht_t.paa","xicht_a_zranen","xicht_u.paa","xicht_a_zranen","xicht_v.paa","xicht_v_zranen","xicht_w.paa","xicht_w_zranen","xicht_x.paa","xicht_a_zranen","xicht_y.paa","xicht_a_zranen","xicht_z.paa","xicht_a_zranen","xicht_2a.paa","xicht_a_zranen","xicht_2b.paa","xicht_w_zranen","xicht_2c.paa","xicht_a_zranen","xicht_2d.paa","xicht_v_zranen","xicht_2e.paa","xicht_a_zranen","xicht_2f.paa","xicht_a_zranen","xicht_2g.paa","xicht_w_zranen","xicht_2h.paa","xicht_a_zranen","xicht_2i.paa","xicht_a_zranen","xicht_2j.paa","xicht_a_zranen","xicht_2k.paa","xicht_a_zranen","xicht_2l.paa","xicht_a_zranen","xicht_2m.paa","xicht_a_zranen","xicht_2n.paa","xicht_a_zranen","xicht_2o.paa","xicht_a_zranen","xicht_2p.paa","xicht_2p_zranen","xicht_2q.paa","xicht_a_zranen","xicht_2r.paa","xicht_e_zranen","xicht_2s.paa","xicht_a_zranen","xicht_2t.paa","xicht_a_zranen","xicht_2u.paa","xicht_a_zranen","xicht_2v.paa","xicht_a_zranen","xicht_2w.paa","xicht_w_zranen","xicht_2x.paa","xicht_a_zranen","xicht_2y.paa","xicht_a_zranen","xicht_2z.paa","xicht_a_zranen","\merged\00007mc_vojakw2.paa","\merged\00009mc_vojakw2.paa","\merged\00008mc_vojake2.paa","\merged\00010mc_vojake2.paa","00004mc_vojakw2.paa","00009mc_vojakw2.paa","00005mc_vojakw2.paa","00008mc_vojakw2.paa","00003mc_vojakw2.paa","00007mc_vojakw2.paa","00004mc_vojake2.paa","00007mc_vojake2.paa","00005mc_vojake2.paa","00008mc_vojake2.paa","00004mc_tankistaw2.paa","00007mc_tankistaw2.paa","00002mc_tankistaw2.paa","00006mc_tankistaw2.paa","00000mc_tankistae2.paa","00008mc_tankistae2.paa","00003mc_tankistae2.paa","00007mc_tankistae2.paa","00002mc_saboteur.paa","00007mc_saboteur.paa","00000mc_saboteur.paa","00006mc_saboteur.paa","00003mc_SPECNAS2.paa","00011mc_SPECNAS2.paa","00005mc_SPECNAS2.paa","00010mc_SPECNAS2.paa","00000mc_vojakg2.paa","00009mc_vojakg2.paa","00003mc_vojakg2.paa","00008mc_vojakg2.paa","00003mc_vojakg3.paa","00009mc_vojakg3.paa","00004mc_vojakg3.paa","00008mc_vojakg3.paa","00005mc_vojakg3.paa","00007mc_vojakg3.paa","00002mc_pilote2.paa","00007mc_pilote2.paa","00004mc_pilote2.paa","00006mc_pilote2.paa","00003mc_Pilotw2.paa","00007mc_Pilotw2.paa","00002mc_Pilotw2.paa","00006mc_Pilotw2.paa","00002mc_SNIPERe2.paa","00009mc_SNIPERe2.paa","00004mc_SNIPERe2.paa","00008mc_SNIPERe2.paa","w_helma_front","w_helma_front_D","w_helma_side2","w_helma_side2_D","w_helma_vnitrek","w_helma_vnitrek_D","w_ramena","w_ramena_D","w_hrud_p","w_hrud_p_D","w_zadaruce_z","w_zadaruce_z_D","w_vojak_ruka_bok_l","w_vojak_ruka_bok_l_D","w_vojak_ruka_bok_p","w_vojak_ruka_bok_p_D","w_vojak_nohy_bok_l","w_vojak_nohy_bok_l_D","w_vojak_nohy_bok_p","w_vojak_nohy_bok_p_D","w_nohy_p","w_nohy_p_D","w_nohy_z","w_nohy_z_D","e_helma_front","e_helma_front_D","e_hrud_p","e_hrud_p_D","e_zada_z","e_zada_z_d","e_ruka_bok_l","e_ruka_bok_l_D","e_ruka_bok_p","e_ruka_bok_p_D","e_nohy_bok_l","e_nohy_bok_l_D","e_nohy_bok_p","e_nohy_bok_p_D","e_nohy_p","e_nohy_p_D","e_nohy_z","e_nohy_z_D","e_pilot_helma_z","e_pilot_helma_z_d","e_pilot_nohy_p","e_pilot_nohy_p_d","e_pilot_nohy_z","e_pilot_nohy_z_d","e_pilot_ramena","e_pilot_ramena_d","e_pilot_nohybok_l","e_pilot_nohybok_l_d","e_pilot_nohybok_p","e_pilot_nohybok_p_d","e_pilot_rucebok_l","e_pilot_rucebok_l_d","e_pilot_rucebok_p","e_pilot_rucebok_p_d","e_pilot_zada_z","e_pilot_zada_z_d","e_tankhelma_side512","e_tankhelma_side512_d","zaloha_hrud","zaloha_hrud_d","e_tank_zada_z","e_tank_zada_z_d","e_tank_nohy_p","e_tank_nohy_p_D","e_tank_nohy_z","e_tank_nohy_z_D","e_tank_ruka_p","e_tank_ruka_p_d","e_tank_ruka_l","e_tank_ruka_l_d","e_tank_nohybok_l","e_tank_nohybok_l_d","e_tank_nohybok_r","e_tank_nohybok_r_d","e_tankhelma_back512","e_tankhelma_back512_d","g_zada_z","g_zada_z_D","g_hrud_p","g_hrud_p_d","g_nohy_p","g_nohy_p_D","g_nohy_z","g_nohy_z_D","g_noha_bok_l","g_noha_bok_l_d","g_noha_bok_p","g_noha_bok_p_d","g_ruka_bok_p","g_ruka_bok_p_d","g_ruka_bok_l","g_ruka_bok_l_d","g_ramena","g_ramena_D","g_cepice_side","g_cepice_side_d","g_cepice_up","g_cepice_up_d","g2_hrud_p","g2_hrud_p_d","g2_zada_z","g2_zada_z_d","g2_nohy_z","g2_nohy_z_d","g2_nohy_p","g2_nohy_p_d","g2_nohy_bok_p","g2_nohy_bok_p_d","g2_nohy_bok_l","g2_nohy_bok_l_d","g2_ramena","g2_ramena_D","g2_ruka_bok_p","g2_ruka_bok_p_d","g2_ruka_bok_l","g2_ruka_bok_l_d","w_saboteur_hrud_p","w_saboteur_hrud_p_D","w_saboteur_zada_z","w_saboteur_zada_z_D","w_saboteur_nohy_z","w_saboteur_nohy_z_D","w_saboteur_nohy_p","w_saboteur_nohy_p_D","w_saboteur_ruka_p","w_saboteur_ruka_p_d","w_saboteur_ruka_l","w_saboteur_ruka_l_d","w_saboteur_ramena_z","w_saboteur_ramena_z_D","w_saboteur_kukla_s","w_saboteur_kukla_s_d","w_saboteur_kukla_f","w_saboteur_kukla_f_d","w_sniper_rukabok_l","w_sniper_rukabok_l_d","w_sniper_rukabok_p","w_sniper_rukabok_p_d","w_sniper_zada_z","w_sniper_zada_z_d","w_sniper_hrud_p","w_sniper_hrud_p_d","w_sniper_nohy_z","w_sniper_nohy_z_d","w_sniper_nohy_p","w_sniper_nohy_p_d","w_sniper_ramena","w_sniper_ramena_d","w_sniper_sitka.paa","w_sniper_sitka_d.paa","w_tank_hrud_p","w_tank_hrud_p_D","w_tank_zada_z","w_tank_zada_z_D","w_tank_nohy_p","w_tank_nohy_p_D","w_tank_nohy_z","w_tank_nohy_z_D","w_tank_nohybok_l","w_tank_nohybok_l_d","w_tank_nohybok_p","w_tank_nohybok_p_d","w_tank_rucebok_p","w_tank_rucebok_p_d","w_tank_rucebok_l","w_tank_rucebok_l_d","w_tank_helma_side","w_tank_helma_side_d","w_tank_helma_front_p","w_tank_helma_front_p_d","w_tank_ramena","w_tank_ramena_d","w_pilot_hrud_p","w_pilot_hrud_p_D","w_pilot_zada_z","w_pilot_zada_z_D","w_pilot_nohy_p","w_pilot_nohy_p_D","w_pilot_nohy_z","w_pilot_nohy_z_D","w_pilot_rucebok_l","w_pilot_rucebok_l_d","w_pilot_rucebok_p","w_pilot_rucebok_p_D","w_pilot_nohybok_l","w_pilot_nohybok_l_d","w_pilot_nohybok_p","w_pilot_nohybok_p_d","w_pilot_ramena","w_pilot_ramena_d","w_pilot_helma","w_pilot_helma_d","e_spec_hrud_p","e_spec_hrud_p_d","e_spec_ruka_bok_p","e_spec_ruka_bok_p_d","e_spec_ruka_bok_l","e_spec_ruka_bok_l_d","e_spec_ramena","e_spec_ramena_d","e_spec_zada_z","e_spec_zada_p_z","e_spec_hrud_p","e_spec_hrud_p_z","e_spec_satek_back","e_spec_satek_back_d","e_spec_satek_side","e_spec_satek_side_d","jirka_hrud_p","jirka_hrud_p_D","jirka_zada_z","jirka_zada_p_D","jirka_nohy_p","jirka_nohy_p_D","jirka_nohy_z","jirka_nohy_z_D","jirka_rukabok_p","jirka_rukabok_p_d","jirka_nohybok_l","jirka_nohybok_l_d","ang_bluza3","ang_bluza3_d","ang_face_f10","ang_face_f10_d","ang_sako_b","ang_sako_b_d","ang_sako_f","ang_sako_f_d","karel_hrud_p","karel_hrud_p_d","karel_rukabok","karel_rukabok_d","karel_zada","karel_zada_d","petr_hrud_p","petr_hrud_p_d","petr_zada_z","petr_zada_z_d","petr_nohy_zad","petr_nohy_zad_d","petr_nohy_pr","petr_nohy_pr_d"};
		minGunElev = -60;
		maxGunElev = 60;
		minGunTurn = -5;
		maxGunTurn = 5;
		minGunTurnAI = -30;
		maxGunTurnAI = 30;
		fov = 0.85;
		minFov = 0.42;
		maxFov = 0.85;
		class ViewPilot: ViewPilotBase {
			initAngleX = 8;
			minAngleX = -40;
			maxAngleX = 45;
			initAngleY = 0;
			minAngleY = -125;
			maxAngleY = 125;
		};
		microMimics = "Micro";
		minHeadTurnAI = -70;
		maxHeadTurnAI = 70;
		weaponSlots = "1	 + 4 * 		256	 + 	4096	 + 	2	 + 4*	32";
		weapons[] = {"RiffleGrenadeLauncher"};
		magazines[] = {"Riffle","Riffle","Riffle","Riffle","GrenadeLauncher"};
		model = "vojakw";
		picture = "";
		hitSound1[] = {"voices\Hit11",0.05623413,1};
		hitSound2[] = {"voices\Hit12",0.05623413,1};
		hitSound3[] = {"voices\Hit13",0.05623413,1};
		hitSound4[] = {"voices\Hit14",0.05623413,1};
		hitSound5[] = {"voices\Hit15",0.05623413,1};
		hitSound6[] = {"voices\Hit16",0.05623413,1};
		hitSound7[] = {"voices\Hit17",0.05623413,1};
		hitSound8[] = {"voices\Hit18",0.05623413,1};
		hitSound9[] = {"voices\Hit19",0.05623413,1};
		hitSound10[] = {"voices\Hit20",0.05623413,1};
		hitSound11[] = {"voices\Hit21",0.05623413,1};
		hitSound12[] = {"voices\Hit22",0.05623413,1};
		hitSound13[] = {"voices\Hit23",0.05623413,1};
		hitSound14[] = {"voices\Hit24",0.05623413,1};
		hitSound15[] = {"voices\Hit25",0.05623413,1};
		hitSound16[] = {"voices\Hit26",0.05623413,1};
		hitSound17[] = {"voices\Hit27",0.05623413,1};
		hitSound18[] = {"voices\Hit28",0.05623413,1};
		hitSound19[] = {"voices\Hit29",0.05623413,1};
		hitSound20[] = {"voices\Hit30",0.05623413,1};
		hitSounds[] = {"hitSound1",0.05,"hitSound2",0.05,"hitSound3",0.05,"hitSound4",0.05,"hitSound5",0.05,"hitSound6",0.05,"hitSound7",0.05,"hitSound8",0.05,"hitSound9",0.05,"hitSound10",0.05,"hitSound11",0.05,"hitSound12",0.05,"hitSound13",0.05,"hitSound14",0.05,"hitSound15",0.05,"hitSound16",0.05,"hitSound17",0.05,"hitSound18",0.05,"hitSound19",0.05,"hitSound20",0.05};
		moves = "NoDefaultMoves";
		soundEnviron[] = {"People\dirt_L",0.00031622773,1};
		class SoundEnvironExt {
			normalExt[] = {
				{ "People\dirt_L",3.1622772e-006,1 },
				{ "People\dirt_R",3.1622772e-006,1 },
				{ "People\grass_L",1.778279e-006,1 },
				{ "People\grass_R",1.778279e-006,1 },
				{ "People\grass_L",1.778279e-006,1 },
				{ "People\grass_R",1.778279e-006,1 }};
			normal[] = {
				{ "People\dirt_L",3.1622772e-006,1 },
				{ "People\dirt_R",3.1622772e-006,1 }};
			road[] = {
				{ "People\concrete_L",1.7782791e-005,1 },
				{ "People\concrete_R",1.7782791e-005,1 },
				{ "People\concrete_L",1.7782791e-005,1 },
				{ "People\concrete_R",1.7782791e-005,1 },
				{ "People\gravel_L",1.7782791e-005,1 },
				{ "People\gravel_R",1.7782791e-005,1 },
				{ "People\concrete_L",1.7782791e-005,1 },
				{ "People\concrete_R",1.7782791e-005,1 }};
			rock[] = {
				{ "People\concrete_L",1.7782791e-005,1 },
				{ "People\concrete_R",1.7782791e-005,1 },
				{ "People\gravel_L",1.7782791e-005,1 },
				{ "People\gravel_R",1.7782791e-005,1 },
				{ "People\sand_L",3.1622772e-006,1 },
				{ "People\sand_R",3.1622772e-006,1 },
				{ "People\gravel_L",1.7782791e-005,1 },
				{ "People\gravel_R",1.7782791e-005,1 },
				{ "People\concrete_L",1.7782791e-005,1 },
				{ "People\concrete_R",1.7782791e-005,1 }};
			water[] = {
				{ "People\water_L",3.162277e-005,1 },
				{ "People\water_R",3.162277e-005,1 }};
			gravel[] = {
				{ "People\gravel_L",1.7782791e-005,1 },
				{ "People\gravel_R",1.7782791e-005,1 }};
			sand[] = {
				{ "People\sand_L",3.1622772e-006,1 },
				{ "People\sand_R",3.1622772e-006,1 },
				{ "People\sand_L",3.1622772e-006,1 },
				{ "People\sand_R",3.1622772e-006,1 },
				{ "People\gravel_L",1.7782791e-005,1 },
				{ "People\gravel_R",1.7782791e-005,1 }};
			drygrass[] = {
				{ "People\drygrass_L",3.1622772e-006,1 },
				{ "People\drygrass_R",3.1622772e-006,1 },
				{ "People\grass_L",1.778279e-006,1 },
				{ "People\grass_R",1.778279e-006,1 },
				{ "People\forest_L",3.1622772e-006,1 },
				{ "People\forest_R",3.1622772e-006,1 }};
			grass[] = {
				{ "People\grass_L",1.778279e-006,1 },
				{ "People\grass_R",1.778279e-006,1 },
				{ "People\drygrass_L",3.1622772e-006,1 },
				{ "People\drygrass_R",3.1622772e-006,1 }};
			forest[] = {
				{ "People\forest_L",3.1622772e-006,1 },
				{ "People\forest_R",3.1622772e-006,1 },
				{ "People\grass_L",1.778279e-006,1 },
				{ "People\grass_R",1.778279e-006,1 },
				{ "People\dirt_L",3.1622772e-006,1 },
				{ "People\dirt_R",3.1622772e-006,1 },
				{ "People\mud_L",3.1622772e-006,1 },
				{ "People\mud_R",3.1622772e-006,1 }};
			mud[] = {
				{ "People\mud_L",3.1622772e-006,1 },
				{ "People\mud_R",3.1622772e-006,1 },
				{ "People\mud_L",3.1622772e-006,1 },
				{ "People\mud_R",3.1622772e-006,1 },
				{ "People\water_L",3.162277e-005,1 },
				{ "People\water_R",3.162277e-005,1 }};
			wood[] = {
				{ "People\wood_L",3.1622772e-006,1 },
				{ "People\wood_R",3.1622772e-006,1 }};
			metal[] = {
				{ "People\metal_L",3.1622772e-006,1 },
				{ "People\metal_R",3.1622772e-006,1 }};
			snow[] = {
				{ "People\snow_L",3.162277e-005,1 },
				{ "People\snow_R",3.162277e-005,1 }};
			hallway[] = {
				{ "People\hall_L",3.162277e-005,1 },
				{ "People\hall_R",3.162277e-005,1 }};
			fallbody[] = {
				{ "People\fall_to_ground",0.0009999999,1 }};
			laydown[] = {
				{ "People\down",9.999998e-006,1 }};
			standup[] = {
				{ "People\up",3.1622772e-006,1 }};
			crawl[] = {
				{ "People\crawl",1.778279e-006,1 }};
		};
		soundEngine[] = {"People\breath",1.7782791e-005,1};
		additionalSound[] = {"Objects\noise",9.999997e-009,1};
		type = 0;
		threat[] = {1,0.8,0.2};
		class Reflectors {};
		class MGunClouds: WeaponCloudsMGun {};
		class GunClouds: WeaponCloudsGun {
			cloudletGrowUp = 0.2;
			cloudletFadeIn = 0;
			cloudletFadeOut = 0.4;
			cloudletDuration = 0.2;
			cloudletAlpha = 1;
			cloudletAccY = 2;
			cloudletMinYSpeed = -10;
			cloudletMaxYSpeed = 10;
			interval = 0.02;
			size = 0.3;
			sourceSize = 0.015;
		};
	};
	class Civilian: Man {
		vehicleClass = "Men";
		scope = 2;
		displayName = "$STR_DN_MAN";
		nameSound = "man";
		model = "MC civil";
		moves = "CfgMovesMC";
		accuracy = 0.4;
		type = 0;
		threat[] = {0.0,0.0,0.0};
		camouflage = 1.2;
		cost = 100000;
		side = 3;
		weapons[] = {"Throw","Put"};
		magazines[] = {};
	};
	class Civilian2: Civilian {
		displayName = "$STR_DN_MAN2";
		model = "MC civil2";
	};
	class Civilian3: Civilian {
		displayName = "$STR_DN_MAN3";
		model = "MC civil3";
	};
	class Soldier: Man {
		vehicleClass = "";
		displayName = "$STR_DN_SOLDIER";
		nameSound = "soldier";
		weaponSlots = "1	 + 	16	 + 10*		256	 + 2*	4096	 + 	2	 + 4*	32";
		accuracy = 0.6;
		type = 0;
		threat[] = {1,0.05,0.05};
	};
	class SoldierLAW: Soldier {
		vehicleClass = "";
		displayName = "$STR_DN_LAW_SOLDIER";
		accuracy = 1.4;
		weapons[] = {"Riffle","LAWLauncher"};
		magazines[] = {"Riffle","Riffle","Riffle","Riffle","LAWLauncher","LAWLauncher"};
		threat[] = {1,0.9,0.1};
	};
	class Air: AllVehicles {
		icon = "helicopter";
		displayName = "$STR_DN_HELICOPTER";
		nameSound = "target";
		accuracy = 0.005;
		formationX = 50;
		formationZ = 100;
		precision = 100;
		brakeDistance = 200;
		formationTime = 10;
		armor = 20;
		cost = 10000000;
		fuelCapacity = 1000;
		maxSpeed = 400;
		insideSoundCoef = 0.05;
		weapons[] = {"MachineGun12_7"};
		magazines[] = {"MachineGun12_7"};
		type = 2;
		irScanRangeMin = 2000;
		irScanRangeMax = 10000;
		irScanToEyeFactor = 2;
		nightVision = 1;
		audible = 10;
		unitInfoType = "UnitInfoAirplane";
		threat[] = {0.3,1,0.7};
		driverAction = "ManActCargo";
		gunnerAction = "ManActCargo";
		commanderAction = "ManActCargo";
		gunnerCanSee = 31;
		driverCanSee = 31;
		typicalCargo[] = {"Soldier"};
		class GunFire: WeaponFireGun {};
		class GunClouds: WeaponCloudsGun {};
		class MGunFire: WeaponFireMGun {};
		class MGunClouds: WeaponCloudsMGun {};
		transportMaxMagazines = 20;
		transportMaxWeapons = 3;
	};
	class Helicopter: Air {
		vehicleClass = "Air";
		displayName = "$STR_DN_HELICOPTER";
		nameSound = "chopper";
		accuracy = 0.08;
		soundEngine[] = {"Vehicles\helicopter",3.1622777,1};
		soundEnviron[] = {"Objects\noise",0.099999994,1.0};
		soundDammage[] = {"Objects\alarm_loop1",0.01,1};
		simulation = "helicopter";
		class ViewPilot: ViewPilotBase {
			initFov = 0.7;
			minFov = 0.4;
			maxFov = 1.0;
			initAngleX = 0;
			minAngleX = -15;
			maxAngleX = 25;
			initAngleY = 0;
			minAngleY = -100;
			maxAngleY = 100;
		};
		mainRotorSpeed = 1.0;
		backRotorSpeed = 1.5;
		maxMainRotorDive = 0;
		maxBackRotorDive = 0;
		minMainRotorDive = 0;
		minBackRotorDive = 0;
		neutralBackRotorDive = 0;
		neutralMainRotorDive = 0;
		armorStructural = 2.0;
		armorHull = 0.5;
		armorEngine = 0.6;
		armorAvionics = 1.4;
		armorVRotor = 0.5;
		armorHRotor = 0.7;
		armorMissiles = 1.6;
		armorGlass = 0.5;
		maxSpeed = 300;
		enableSweep = 1;
		unitInfoType = "UnitInfoHelicopter";
		minFireTime = 20;
		steerAheadSimul = 0.5;
		steerAheadPlan = 0.7;
		class TurretBase {
			gunAxis = "OsaHlavne";
			turretAxis = "OsaVeze";
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			soundServo[] = {};
			minElev = -20;
			maxElev = 20;
			minTurn = -45;
			maxTurn = 45;
			body = "OtocVez";
			gun = "OtocHlaven";
		};
		class Turret: TurretBase {};
		class ViewOptics: ViewOpticsBase {
			initAngleX = 0;
			minAngleX = -40;
			maxAngleX = 17;
			initAngleY = 0;
			minAngleY = -100;
			maxAngleY = 100;
			initFov = 0.5;
			minFov = 0.3;
			maxFov = 1.2;
		};
		hasGunner = 1;
		driverIsCommander = 1;
		gunnerOpticsModel = "optika_heli_gunner";
		weapons[] = {"MachineGun12_7","HellfireLauncher"};
		magazines[] = {"MachineGun12_7","HellfireLauncher"};
		dammageHalf[] = {"jeep_kab_sklo1.paa","jeep_kab_sklo1B.paa","uh60_kab_sklo2.paa","uh60_kab_sklo2B.paa","uh30_cargo_pilotdoors.paa","uh30_cargo_pilotdoorsB.paa","uh60_cargo_dvereokno.paa","uh60_cargo_dvereoknoB.paa","uh60_gunner_okna.paa","uh60_gunner_oknaB.paa","ah-1_kabina_predokno.paa","ah-1_kabina_predoknoB.paa","ah-1_kabina_zadokno.paa","ah-1_kabina_zadoknoB.paa","ah-1_kabina_topokno.paa","ah-1_kabina_topoknoB.paa"};
		dammageFull[] = {"jeep_kab_sklo1.paa","jeep_kab_sklo1C.paa","uh60_kab_sklo2.paa","uh60_kab_sklo2C.paa","uh30_cargo_pilotdoors.paa","uh30_cargo_pilotdoorsC.paa","uh60_cargo_dvereokno.paa","uh60_cargo_dvereoknoC.paa","uh60_gunner_okna.paa","uh60_gunner_oknaC.paa","ah-1_kabina_predokno.paa","ah-1_kabina_predoknoC.paa","ah-1_kabina_zadokno.paa","ah-1_kabina_zadoknoC.paa","ah-1_kabina_topokno.paa","ah-1_kabina_topoknoC.paa"};
		class Reflectors {
			class Reflector {
				color[] = {0.8,0.8,1.0,1.0};
				ambient[] = {0.07,0.07,0.07,1.0};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 0.5;
				brightness = 1.0;
			};
		};
		class IndicatorAltRadar {
			selection = "alt";
			axis = "osa_alt";
			angle = -360;
			min = 0;
			max = 304;
		};
		class IndicatorAltBaro {
			selection = "nm_alt";
			axis = "osa_nm_alt";
			angle = -180;
			min = 0;
			max = 61;
		};
		class IndicatorSpeed {
			selection = "mph";
			axis = "osa_mph";
			angle = -320;
			min = 0;
			max = 125;
		};
		class IndicatorVertSpeed {
			selection = "vert_speed";
			axis = "osa_vert_speed";
			angle = -300;
			min = -30;
			max = 30;
		};
		class IndicatorRPM {
			selection = "rpm";
			axis = "osa_rpm";
			angle = -320;
			min = 0;
			max = 12;
		};
		class IndicatorCompass {
			selection = "kompas";
			axis = "osa_kompas";
			angle = -360;
			min = -3.1415927;
			max = 3.1415927;
		};
		class IndicatorWatch {
			hour = "hodinova";
			minute = "minutova";
			axis = "osa_time";
			reversed = 1;
		};
		class IndicatorAltRadar2 {
			selection = "alt2";
			axis = "osa_alt2";
			angle = -360;
			min = 0;
			max = 304;
		};
		class IndicatorAltBaro2 {
			selection = "nm_alt2";
			axis = "osa_nm_alt2";
			angle = -180;
			min = 0;
			max = 61;
		};
		class IndicatorSpeed2 {
			selection = "mph2";
			axis = "osa_mph2";
			angle = -320;
			min = 0;
			max = 125;
		};
		class IndicatorVertSpeed2 {
			selection = "vert_speed2";
			axis = "osa_vert_speed2";
			angle = -300;
			min = -30;
			max = 30;
		};
		class IndicatorRPM2 {
			selection = "rpm2";
			axis = "osa_rpm2";
			angle = -320;
			min = 0;
			max = 12;
		};
		class IndicatorCompass2 {
			selection = "kompas2";
			axis = "osa_kompas2";
			angle = -360;
			min = -3.1415927;
			max = 3.1415927;
		};
		class IndicatorWatch2 {
			hour = "hodinova2";
			minute = "minutova2";
			axis = "osa_time2";
			reversed = 1;
		};
	};
	class Plane: Air {
		vehicleClass = "Air";
		icon = "a10";
		displayName = "$STR_DN_PLANE";
		nameSound = "plane";
		accuracy = 0.1;
		maxSpeed = 450;
		landingSpeed = 0;
		flapsFrictionCoef = 0.5;
		formationX = 200;
		formationZ = 300;
		precision = 200;
		brakeDistance = 500;
		steerAheadSimul = 1.0;
		steerAheadPlan = 2.0;
		wheelSteeringSensitivity = 1.0;
		unitInfoType = "UnitInfoAirplane";
		gearRetracting = 1;
		ejectSpeed[] = {0,40,0};
		minFireTime = 60;
		cost = 2000000;
		soundEngine[] = {"Vehicles\01F5",1.0,0.5};
		soundEnviron[] = {"Objects\noise",0.31622776,1.0};
		soundServo[] = {"Vehicles\gun_elevate",0.099999994,0.4};
		soundDammage[] = {"Objects\alarm_loop1",0.01,1};
		simulation = "airplane";
		minGunElev = 0;
		maxGunElev = 0;
		minGunTurn = 0;
		maxGunTurn = 0;
		weapons[] = {"MachineGun12_7","MaverickLauncher"};
		magazines[] = {"MachineGun12_7","MaverickLauncher"};
		type = 2;
		threat[] = {0.1,1,0.5};
		aileronSensitivity = 1;
		elevatorSensitivity = 1;
		noseDownCoef = 1;
		landingAoa = "10*3.1415/180";
		class ViewPilot: ViewPilotBase {
			initFov = 0.7;
			minFov = 0.4;
			maxFov = 0.85;
			initAngleX = 8;
			minAngleX = -15;
			maxAngleX = 25;
			initAngleY = 0;
			minAngleY = -100;
			maxAngleY = 100;
		};
		class ViewOptics: ViewOpticsBase {
			initAngleX = 0;
			minAngleX = 0;
			maxAngleX = 0;
			initAngleY = 0;
			minAngleY = 0;
			maxAngleY = 0;
			initFov = 0.5;
			minFov = 0.5;
			maxFov = 0.5;
		};
		extCameraPosition[] = {0,5,-30};
		class Reflectors {
			class Reflector {
				color[] = {0.9,0.8,0.8,1.0};
				ambient[] = {0.1,0.1,0.1,1.0};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 0.5;
				brightness = 1.0;
			};
		};
		class IndicatorAltRadar {
			selection = "alt";
			axis = "osa_alt";
			angle = -360;
			min = 0;
			max = 304;
		};
		class IndicatorAltRadar2 {
			selection = "alt2";
			axis = "osa_alt2";
			angle = -360;
			min = 0;
			max = 304;
		};
		class IndicatorAltBaro {
			selection = "nm_alt";
			axis = "osa_nm_alt";
			angle = 0;
			min = 0;
			max = 0;
		};
		class IndicatorSpeed {
			selection = "mph";
			axis = "osa_mph";
			angle = -350;
			min = 0;
			max = 300;
		};
		class IndicatorVertSpeed {
			selection = "vert_speed";
			axis = "osa_vert_speed";
			angle = -360;
			min = -45;
			max = 45;
		};
		class IndicatorVertSpeed2 {
			selection = "vert_speed2";
			axis = "osa_vert_speed2";
			angle = -360;
			min = -45;
			max = 45;
		};
		class IndicatorRPM {
			selection = "rpm";
			axis = "osa_rpm";
			angle = -320;
			min = 0;
			max = 1;
		};
		class IndicatorCompass {
			selection = "kompas";
			axis = "osa_kompas";
			angle = 360;
			min = -3.1415927;
			max = 3.1415927;
		};
		class IndicatorCompass2 {
			selection = "kompas2";
			axis = "osa_kompas2";
			angle = 360;
			min = -3.1415927;
			max = 3.1415927;
		};
		class IndicatorWatch {
			hour = "hodinova";
			minute = "minutova";
			axis = "osa_time";
			reversed = 1;
		};
		class IndicatorWatch2 {
			hour = "hodinova2";
			minute = "minutova2";
			axis = "osa_time2";
			reversed = 1;
		};
	};
	class Ship: AllVehicles {
		unitInfoType = "UnitInfoShip";
		icon = "ship";
		cost = 10000000;
		armor = 1000;
		displayName = "$STR_DN_SHIP";
		nameSound = "ship";
		accuracy = 0.005;
		maxSpeed = 30;
		simulation = "ship";
		audible = 6;
		formationX = 50;
		formationZ = 100;
		precision = 25;
		brakeDistance = 50;
		formationTime = 20;
		steerAheadSimul = 2.0;
		steerAheadPlan = 2.4;
		predictTurnSimul = 2.0;
		predictTurnPlan = 2.4;
		type = 1;
		threat[] = {0.2,0.2,0.1};
		getInRadius = 10;
		driverAction = "ManActShipDriver";
		gunnerAction = "ManActShipDriver";
		commanderAction = "ManActShipDriver";
		cargoAction[] = {"ManActShipCargo"};
		getInAction = "ManActGetOutCar";
		getOutAction = "ManActGetOutCar";
		class TurretBase {
			gunAxis = "osa hlavne";
			turretAxis = "osa veze";
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			soundServo[] = {"Vehicles\gun_elevate",0.0009999999,1.0};
			minElev = -5;
			maxElev = 40;
			minTurn = -135;
			maxTurn = 135;
			body = "OtocVez";
			gun = "OtocHlaven";
		};
		class Turret: TurretBase {};
		class ViewPilot: ViewPilotBase {
			initFov = 1.0;
			minFov = 0.42;
			maxFov = 1.2;
			initAngleX = 6;
			minAngleX = -8;
			maxAngleX = 10;
			initAngleY = 0;
			minAngleY = -100;
			maxAngleY = 100;
		};
		class ViewOptics: ViewOpticsBase {
			initFov = 0.7;
			minFov = 0.07;
			maxFov = 0.35;
		};
		class GunFire: WeaponFireGun {};
		class GunClouds: WeaponCloudsGun {};
		class MGunFire: WeaponFireMGun {};
		class MGunClouds: WeaponCloudsMGun {};
	};
	class SmallShip: Ship {
		cost = 50000;
		armor = 300;
		displayName = "$STR_DN_SMALL_SHIP";
		accuracy = 0.2;
		soundEngine[] = {"Vehicles\GuardShip",0.0017782792,1};
		fuelCapacity = 700;
		weapons[] = {"Browning"};
		magazines[] = {"Browning"};
		maxSpeed = 60;
		steerAheadSimul = 2;
		steerAheadPlan = 2;
		predictTurnSimul = 3;
		predictTurnPlan = 3;
		precision = 50;
		brakeDistance = 50;
		hasGunner = 1;
		hasCommander = 0;
		driverIsCommander = 1;
		class Reflectors {
			class Reflector {
				color[] = {0.9,0.8,0.8,1.0};
				ambient[] = {0.1,0.1,0.1,1.0};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 0.5;
				brightness = 0.25;
			};
		};
		transportMaxMagazines = 100;
		transportMaxWeapons = 20;
	};
	class BigShip: Ship {
		cost = 10000000;
		displayName = "$STR_DN_BIG_SHIP";
		accuracy = 0.2;
		armor = 1000;
		soundEngine[] = {"Vehicles\BigShip",0.0017782792,1};
		weapons[] = {"Gun120","MachineGun12_7"};
		magazines[] = {"Gun120","Gun120","Gun120","Gun120","MachineGun12_7","MachineGun12_7"};
		transportMaxMagazines = 500;
		transportMaxWeapons = 200;
	};
	class Jeep: Car {
		scope = 2;
		crew = "SoldierWB";
		picture = "ijeepMUTT";
		maxSpeed = 100;
		side = 1;
		displayName = "$STR_DN_JEEP";
		nameSound = "jeep";
		accuracy = 0.5;
		armor = 20;
		cost = 30000;
		fuelCapacity = 50;
		transportSoldier = 3;
		transportAmmo = 0;
		model = "jeep";
		armorWheels = 0.12;
		driverAction = "ManActJeepDriver";
		cargoAction[] = {"ManActJeepCoDriver","ManActJeepCoDriverBack"};
		cargoIsCoDriver[] = {1,0};
		soundEngine[] = {"Vehicles\jeepmove",0.17782794,1};
		typicalCargo[] = {"Soldier","SoldierLAW"};
		dammageHalf[] = {"jepp4x4_glass.paa","jepp4x4_glassB.paa","jepp_kab_sklo1.paa","jepp_kab_sklo1B.paa","jepp_kab_sklo2.paa","jepp_kab_sklo2B.paa","scud_sklo.paa","scud_skloB.paa","scud_sklo2.paa","scud_sklo2B.paa","scud_sklo3.paa","scud_sklo3B.paa","scud_sklo4.paa","scud_sklo4B.paa"};
		dammageFull[] = {"jepp4x4_glass.paa","jepp4x4_glassC.paa","jepp_kab_sklo1.paa","jepp_kab_sklo1C.paa","jepp_kab_sklo2.paa","jepp_kab_sklo2C.paa","scud_sklo.paa","scud_skloC.paa","scud_sklo2.paa","scud_sklo2C.paa","scud_sklo3.paa","scud_sklo3C.paa","scud_sklo4.paa","scud_sklo4C.paa"};
		class IndicatorSpeed {
			selection = "ukaz_rychlo";
			axis = "osa_rychlo";
			angle = -240;
			min = 0;
			max = 40;
		};
		class IndicatorRPM {
			selection = "ukaz_rpm";
			axis = "osa_rpm";
			angle = -240;
			min = 0;
			max = 1;
		};
	};
	class JeepMG: Jeep {
		displayName = "$STR_DN_JEEP_MG";
		model = "Jeep_mg.p3d";
		picture = "ijeepmg.paa";
		gunnerAction = "ManActJeepGunner";
		hasGunner = 1;
		castGunnerShadow = 1;
		ejectDeadGunner = 1;
		castDriverShadow = 1;
		driverIsCommander = 1;
		scope = 2;
		weapons[] = {"Browning"};
		magazines[] = {"Browning"};
		gunnerOpticsModel = "optika_empty";
		unitInfoType = "UnitInfoSoldier";
		transportSoldier = 1;
		class Turret {
			gunAxis = "OsaHlavne";
			turretAxis = "OsaVeze";
			soundServo[] = {};
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			minElev = -5;
			maxElev = 40;
			minTurn = -360;
			maxTurn = 360;
			body = "OtocVez";
			gun = "OtocHlaven";
		};
		class ViewGunner {
			initAngleX = 5;
			minAngleX = -30;
			maxAngleX = 30;
			initAngleY = 0;
			minAngleY = 0;
			maxAngleY = 0;
			initFov = 0.7;
			minFov = 0.42;
			maxFov = 0.85;
		};
		class MGunClouds: WeaponCloudsMGun {};
	};
	class SkodaHelper: Car {
		scope = 0;
		picture = "iskoda";
		maxSpeed = 125;
		side = 3;
		nameSound = "car";
		displayName = "$STR_DN_SKODA";
		accuracy = 0.5;
		armor = 20;
		cost = 2000;
		fuelCapacity = 50;
		transportSoldier = 3;
		transportAmmo = 0;
		terrainCoef = 10.0;
		soundEngine[] = {"Vehicles\car",0.017782792,1.8};
		weapons[] = {"SportCarHorn"};
		magazines[] = {};
		driverAction = "ManActSkodaDriver";
		cargoAction[] = {"ManActSkodaCoDriver","ManActSkodaCoDriverBack"};
		cargoIsCoDriver[] = {1,0};
		typicalCargo[] = {};
		class IndicatorSpeed {
			selection = "ukaz_rychlo";
			axis = "osa_rychlo";
			angle = 254;
			min = 0;
			max = "180 / 3.6";
		};
		class IndicatorRPM {
			selection = "ukaz_rpm";
			axis = "osa_rpm";
			angle = -255;
			min = 0;
			max = 1;
		};
	};
	class SkodaBase: SkodaHelper {
		accuracy = 1000;
	};
	class Rapid: SkodaBase {
		vehicleClass = "Car";
		scope = 2;
		picture = "iskoda";
		maxSpeed = 200;
		displayName = "$STR_DN_ASTON";
		nameSound = "car";
		accuracy = 0.5;
		armor = 10;
		cost = 90000;
		fuelCapacity = 50;
		transportSoldier = 1;
		model = "rapid";
		soundEngine[] = {"Vehicles\car",0.031622775,1.5};
		weapons[] = {"SportCarHorn"};
		magazines[] = {};
		typicalCargo[] = {};
		dammageHalf[] = {"jeep4x4_glass.paa","jeep4x4_glassB.paa","jeep_kab_sklo1.paa","jeep_kab_sklo1B.paa","jeep_kab_sklo2.paa","jeep_kab_sklo2B.paa","scud_sklo.paa","scud_skloB.paa","scud_sklo2.paa","scud_sklo2B.paa","scud_sklo3.paa","scud_sklo3B.paa","scud_sklo4.paa","scud_sklo4B.paa","rapid_skloP.paa","rapid_skloPB.paa"};
		dammageFull[] = {"jeep4x4_glass.paa","jeep4x4_glassC.paa","jeep_kab_sklo1.paa","jeep_kab_sklo1C.paa","jeep_kab_sklo2.paa","jeep_kab_sklo2C.paa","scud_sklo2.paa","scud_sklo2C.paa","scud_sklo3.paa","scud_sklo3C.paa","scud_sklo4.paa","scud_sklo4C.paa","rapid_skloP.paa","rapid_skloPC.paa"};
		class IndicatorSpeed {
			selection = "ukaz_rychlo";
			axis = "osa_rychlo";
			angle = -260;
			min = 0;
			max = "180 / 3.6";
		};
		class IndicatorRPM {
			selection = "ukaz_rpm";
			axis = "osa_rpm";
			angle = -240;
			min = 0;
			max = 1;
		};
	};
	class RapidY: Rapid {
		vehicleClass = "Car";
		scope = 2;
		model = "rapid_y";
	};
	class Skoda: SkodaBase {
		scope = 2;
		model = "skodovka";
		displayName = "$STR_DN_SKODA_YELLOW";
	};
	class SkodaBlue: SkodaBase {
		scope = 2;
		model = "skodovka_blue";
		displayName = "$STR_DN_SKODA_BLUE";
	};
	class SkodaRed: SkodaBase {
		scope = 2;
		model = "skodovka_red";
		displayName = "$STR_DN_SKODA_RED";
	};
	class SkodaGreen: SkodaBase {
		scope = 2;
		model = "skodovka_green";
		displayName = "$STR_DN_SKODA_GREEN";
	};
	class Tractor: Car {
		scope = 2;
		picture = "itruck5t";
		icon = "truck";
		side = 3;
		displayName = "$STR_DN_TRACTOR";
		nameSound = "tractor";
		accuracy = 0.3;
		fuelCapacity = 50;
		transportSoldier = 0;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		weapons[] = {};
		magazines[] = {};
		wheelCircumference = 8;
		turnCoef = 9.0;
		maxSpeed = 30;
		cost = 10000;
		armor = 30;
		model = "traktor";
		soundEngine[] = {"Vehicles\TractorRun",0.031622775,0.5};
		typicalCargo[] = {};
		driverAction = "ManActTractorDriver";
		getInAction = "ManActGetInTank";
		getOutAction = "ManActGetOutTank";
	};
	class Truck: Car {
		nameSound = "truck";
		formationX = 20;
		formationZ = 30;
		getInAction = "ManActGetInTank";
		getOutAction = "ManActGetOutTank";
		armorWheels = 0.3;
		damperSize = 0.2;
		fov = 1.0;
		minFov = 0.6;
		maxFov = 1.4;
		transportMaxMagazines = 200;
		transportMaxWeapons = 50;
	};
	class Truck5t: Truck {
		scope = 2;
		crew = "SoldierWB";
		picture = "itruck5t";
		icon = "truck";
		model = "truck5t";
		hiddenSelections[] = {"ammo"};
		side = 1;
		displayName = "$STR_DN_5T_TRUCK";
		accuracy = 0.3;
		fuelCapacity = 200;
		transportSoldier = 12;
		class TransportMagazines {
			class _xx_M16 {
				magazine = "M16";
				count = "30*1";
			};
			class _xx_M60 {
				magazine = "M60";
				count = "5*1";
			};
			class _xx_HandGrenade {
				magazine = "HandGrenade";
				count = "10*1";
			};
			class _xx_M21 {
				magazine = "M21";
				count = "10*1";
			};
			class _xx_LAWLauncher {
				magazine = "LAWLauncher";
				count = "3*1";
			};
			class _xx_GrenadeLauncher {
				magazine = "GrenadeLauncher";
				count = "3*1";
			};
		};
		driverAction = "ManActTruck5tDriver";
		cargoAction[] = {"ManActTruck5tCoDriver","ManActTruck5tCoDriver","ManActCargo"};
		cargoIsCoDriver[] = {1,1,0};
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		camouflage = 4;
		weapons[] = {"TruckHorn"};
		magazines[] = {};
		wheelCircumference = 4.513;
		turnCoef = 6.0;
		maxSpeed = 80;
		cost = 70000;
		armor = 20;
		initCargoAngleY = 185;
		soundEngine[] = {"Vehicles\dieseltruckloop2",0.099999994,1};
		typicalCargo[] = {"Soldier","Soldier","SoldierLAW","SoldierLAW"};
		class IndicatorSpeed {
			selection = "ukaz_rychlo";
			axis = "osa_rychlo";
			angle = -210;
			min = 0;
			max = "100 / 3.6";
		};
		class IndicatorRPM {
			selection = "ukaz_rpm";
			axis = "osa_rpm";
			angle = -220;
			min = 0;
			max = 1;
		};
	};
	class Truck5tOpen: Truck5t {
		scope = 2;
		model = "truck5t2";
		hiddenSelections[] = {};
		displayName = "$STR_DN_5T_TRUCK_OPEN";
		accuracy = 1000;
	};
	class Truck5tRich: Truck5t {
		scope = 1;
		displayName = "RichTruck";
		accuracy = 1000;
		cost = 1000000;
	};
	class Truck5tRepair: Truck5t {
		vehicleClass = "Support";
		picture = "itruck5trepair";
		icon = "Repair_move";
		scope = 2;
		displayName = "$STR_DN_REPAIT_TRUCK";
		accuracy = 0.9;
		transportSoldier = 2;
		transportRepair = 200000000;
		model = "truck5trepair";
		hiddenSelections[] = {};
		weapons[] = {};
		magazines[] = {};
		type = 0;
		threat[] = {0.0,0.0,0.0};
		typicalCargo[] = {};
		transportMaxMagazines = 50;
		transportMaxWeapons = 10;
	};
	class Truck5tReammo: Truck5t {
		vehicleClass = "Support";
		icon = "Ammo_move";
		scope = 2;
		displayName = "$STR_DN_REAMMO_TRUCK";
		accuracy = 0.9;
		transportSoldier = 2;
		class TransportMagazines {
			class _xx_M16 {
				magazine = "M16";
				count = "30*1";
			};
			class _xx_M60 {
				magazine = "M60";
				count = "5*1";
			};
			class _xx_HandGrenade {
				magazine = "HandGrenade";
				count = "10*1";
			};
			class _xx_M21 {
				magazine = "M21";
				count = "10*1";
			};
			class _xx_LAWLauncher {
				magazine = "LAWLauncher";
				count = "3*1";
			};
			class _xx_GrenadeLauncher {
				magazine = "GrenadeLauncher";
				count = "3*1";
			};
		};
		transportAmmo = 300000;
		model = "Truck5t";
		hiddenSelections[] = {};
		weapons[] = {};
		magazines[] = {};
		type = 0;
		threat[] = {0.0,0.0,0.0};
		typicalCargo[] = {};
	};
	class Truck5tRefuel: Truck5t {
		vehicleClass = "Support";
		picture = "iTruck5tfuel";
		icon = "Fuel_move";
		scope = 2;
		displayName = "$STR_DN_REFUEL_TRUCK";
		nameSound = "truck";
		accuracy = 0.8;
		transportFuel = 3000;
		transportSoldier = 2;
		transportAmmo = 0;
		model = "Truck5tfuel";
		hiddenSelections[] = {};
		weapons[] = {};
		magazines[] = {};
		type = 0;
		threat[] = {0.0,0.0,0.0};
		typicalCargo[] = {};
		transportMaxMagazines = 20;
		transportMaxWeapons = 5;
	};
	class SoldierWB: Soldier {
		model = "MC vojakW2";
		hiddenSelections[] = {"medic"};
		moves = "CfgMovesMC";
		vehicleClass = "Men";
		scope = 2;
		side = 1;
		accuracy = 0.7;
		displayName = "$STR_DN_SOLDIER";
		weapons[] = {"M16","Throw","Put"};
		magazines[] = {"M16","M16","M16","M16","HandGrenade","HandGrenade","HandGrenade","HandGrenade","HandGrenade","HandGrenade"};
		cost = 40000;
	};
	class SoldierWG: SoldierWB {
		vehicleClass = "Men";
		scope = 2;
		cost = 60000;
		displayName = "$STR_DN_GRENADIER";
		accuracy = 1000;
		weapons[] = {"M16GrenadeLauncher","Throw","Put"};
		magazines[] = {"M16","M16","M16","M16","GrenadeLauncher","GrenadeLauncher","GrenadeLauncher"};
	};
	class SoldierWMedic: SoldierWB {
		accuracy = 1000;
		picture = "\misc\medik.paa";
		vehicleClass = "Men";
		scope = 2;
		cost = 60000;
		displayName = "$STR_DN_MEDIC";
		weaponSlots = "1	 + 4 * 		256	 + 	4096	 + 	2	 + 4*	32";
		attendant = 1;
		weapons[] = {"M16","Throw","Put"};
		magazines[] = {"M16","M16","M16","M16"};
		nameSound = "medic";
		hiddenSelections[] = {};
	};
	class SoldierWNOG: SoldierWB {
		scope = 1;
	};
	class SoldierW: SoldierWG {
		scope = 1;
	};
	class SoldierWCrew: SoldierWB {
		model = "MC tankistaW2";
		nameSound = "crew";
		accuracy = 1000;
		displayName = "$STR_DN_CREW";
		weapons[] = {"M4","NVGoggles","Throw","Put"};
		magazines[] = {"M4","M4","M4","M4","HandGrenade","HandGrenade","HandGrenade","HandGrenade","HandGrenade","HandGrenade"};
	};
	class SoldierWPilot: SoldierWB {
		model = "MC pilotW2";
		nameSound = "pilot";
		displayName = "$STR_DN_PILOT";
		weapons[] = {"M4","NVGoggles","Throw","Put"};
		magazines[] = {"M4","M4","M4","M4","HandGrenade","HandGrenade","HandGrenade","HandGrenade","HandGrenade","HandGrenade"};
	};
	class SoldierWMG: SoldierWB {
		nameSound = "machineGunner";
		displayName = "$STR_DN_MGUNNER";
		cost = 60000;
		accuracy = 1.5;
		weapons[] = {"M60","Throw","Put"};
		magazines[] = {"M60","M60","M60","M60","M60"};
		threat[] = {1,0.1,0.8};
	};
	class SoldierWLAW: SoldierWB {
		vehicleClass = "Men";
		scope = 2;
		nameSound = "missileSoldier";
		nightVision = 1;
		displayName = "$STR_DN_LAW_SOLDIER";
		cost = 150000;
		side = 1;
		accuracy = 1.5;
		weapons[] = {"M16","LAWLauncher","Throw","Put"};
		magazines[] = {"M16","M16","M16","M16","LAWLauncher","LAWLauncher","LAWLauncher"};
		type = 0;
		threat[] = {1,0.9,0.1};
	};
	class SoldierWAT: SoldierWLAW {
		displayName = "$STR_DN_CG_SOLDIER";
		nameSound = "missileSoldier";
		accuracy = 1.5;
		weapons[] = {"M16","CarlGustavLauncher","Throw","Put"};
		magazines[] = {"M16","M16","M16","M16","CarlGustavLauncher"};
		threat[] = {1,0.9,0.1};
	};
	class SoldierWAA: SoldierWLAW {
		displayName = "$STR_DN_AA_SOLDIER";
		nameSound = "missileSoldier";
		accuracy = 1.5;
		weapons[] = {"M16","AALauncher","Throw","Put"};
		magazines[] = {"M16","M16","M16","M16","AALauncher"};
		threat[] = {1,0.5,0.9};
	};
	class SoldierWMortar: SoldierWG {
		displayName = "$STR_DN_MORTAR";
		accuracy = 1.5;
		weapons[] = {"M16","Throw","Put"};
		magazines[] = {"M16","M16","M16","M16","Mortar","Mortar","Mortar"};
		threat[] = {1,1,0.1};
	};
	class SoldierWSniper: SoldierWB {
		picture = "\misc\sniper.paa";
		displayName = "$STR_DN_SNIPER";
		nameSound = "sniper";
		accuracy = 3.5;
		nightVision = 1;
		camouflage = 0.6;
		sensitivity = 2;
		cost = 250000;
		weaponSlots = "1	 + 	16	 + 4 * 		256	 + 2 * 	4096	 + 	2	 + 4*	32";
		weapons[] = {"M21","Throw","Put"};
		magazines[] = {"M21","M21","M21","M21"};
		model = "mc sniperw2.p3d";
		threat[] = {1,0.1,0.1};
	};
	class SoldierWLAWSniper: SoldierWSniper {
		scope = 1;
		displayName = "$STR_DN_AT4_SNIPER";
		weapons[] = {"M21","LAWLauncher","Throw","Put"};
		weaponSlots = "1	 + 	16	 + 10*		256	 + 2*	4096	 + 	2	 + 4*	32";
		magazines[] = {"M21","M21","M21","M21","LAWLauncher","LAWLauncher"};
		threat[] = {1,0.9,0.1};
	};
	class SoldierWSaboteur: SoldierWB {
		scope = 1;
		picture = "\misc\meciky.paa";
		accuracy = 3.5;
		cost = 400000;
		nameSound = "blackOp";
		displayName = "$STR_DN_BLACKOP";
		weapons[] = {"HK","Throw","Put"};
		magazines[] = {"HK","HK","HK","HK","TimeBomb","TimeBomb","TimeBomb"};
		camouflage = 0.7;
		threat[] = {1,0.5,0.1};
		model = "mc saboteur.p3d";
		canHideBodies = 1;
		canDeactivateMines = 1;
		nightVision = 1;
	};
	class SoldierWSaboteurPipe: SoldierWSaboteur {
		scope = 2;
		displayName = "$STR_DN_BLACKOP";
		weapons[] = {"HK","NVGoggles","Throw","Put"};
		magazines[] = {"HK","HK","HK","HK","PipeBomb","PipeBomb","PipeBomb"};
	};
	class SoldierWSaboteurDay: SoldierWSaboteurPipe {
		scope = 2;
		model = "mc saboteurday.p3d";
		displayName = "$STR_DN_BLACKOPDAY";
		weapons[] = {"HK","Binocular","Throw","Put"};
		magazines[] = {"HK","HK","HK","HK","PipeBomb","PipeBomb","PipeBomb"};
	};
	class SoldierWMiner: SoldierWB {
		displayName = "$STR_DN_ENGINEER";
		canDeactivateMines = 1;
		picture = "\misc\sapper.paa";
		accuracy = 1000;
		weapons[] = {"M16","Binocular","Throw","Put"};
		magazines[] = {"M16","M16","M16","M16","Mine","Mine","Mine"};
		threat[] = {1,0.5,0.1};
	};
	class OfficerW: SoldierWB {
		picture = "\misc\frcky.paa";
		nameSound = "officer";
		scope = 2;
		model = "mc vojakwo2.p3d";
		displayName = "$STR_DN_OFFICER";
		accuracy = 2.0;
		cost = 500000;
		nightVision = 1;
		weapons[] = {"M16","Binocular","Throw","Put"};
		magazines[] = {"M16","M16","M16","M16","HandGrenade","HandGrenade","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
	};
	class OfficerWNight: SoldierWB {
		picture = "\misc\frcky.paa";
		nameSound = "officer";
		scope = 2;
		model = "mc vojakwo2.p3d";
		displayName = "$STR_DN_OFFICERNIGHT";
		accuracy = 2.0;
		cost = 500000;
		nightVision = 1;
		weapons[] = {"M16GrenadeLauncher","Binocular","NVGoggles","Throw","Put"};
		magazines[] = {"M16","M16","M16","M16","HandGrenade","HandGrenade","HandGrenade","Flare","Flare","Flare"};
	};
	class SoldierWCaptive: SoldierWB {
		cost = 50000;
		displayName = "$STR_DN_SOLDIERCAPTIVE";
		weapons[] = {};
		magazines[] = {};
	};
	class M1Abrams: Tank {
		scope = 2;
		crew = "SoldierWCrew";
		picture = "iabrams";
		side = 1;
		displayName = "$STR_DN_M1A1";
		nameSound = "Abrams";
		accuracy = 0.4;
		armor = 900;
		cost = 4000000;
		maxSpeed = 72;
		soundEngine[] = {"Vehicles\ModernIdle1",0.031622775,1};
		soundEnviron[] = {"Vehicles\ModernRolling_Treads1",0.01,1};
		model = "M1_abrams";
		weapons[] = {"Gun120","MachineGun12_7"};
		magazines[] = {"Heat120","Shell120","MachineGun12_7"};
		gunnerAction = "ManActM1A1Gunner";
		gunnerInAction = "ManActM1A1Gunner";
		driverAction = "ManActM1A1DriverOut";
		driverInAction = "ManActM1A1Driver";
		commanderAction = "ManActM1A1CommanderOut";
		commanderInAction = "ManActM1A1Commander";
		type = 1;
		threat[] = {1,1,0.3};
		class HatchDriver {
			selection = "poklop_driver";
			axis = "osa_poklop_driver";
			angle = -100;
		};
		class HatchCommander {
			selection = "poklop_commander";
			axis = "osa_poklop_commander";
			angle = 95;
		};
		class IndicatorSpeed {
			selection = "ukaz_rychlo";
			axis = "osa_rychlo";
			angle = -270;
			min = 0;
			max = "80 / 3.6";
		};
		class IndicatorRPM {
			selection = "ukaz_rpm";
			axis = "osa_rpm";
			angle = -270;
			min = 0;
			max = 1;
		};
	};
	class M1AbramsAuto: M1Abrams {
		scope = 1;
		displayName = "$STR_DN_M1A1_AUTO";
		hasGunner = 0;
		hasCommander = 0;
	};
	class M60: Tank {
		scope = 2;
		crew = "SoldierWCrew";
		picture = "im60";
		side = 1;
		displayName = "$STR_DN_M60";
		nameSound = "M60";
		accuracy = 0.7;
		armor = 300;
		cost = 800000;
		maxSpeed = 54;
		gunnerAction = "ManActM60Gunner";
		gunnerInAction = "ManActM60Gunner";
		driverAction = "ManActM60DriverOut";
		driverInAction = "ManActM60Driver";
		commanderAction = "ManActM60CommanderOut";
		commanderInAction = "ManActM60Commander";
		model = "M60";
		weapons[] = {"Gun105","MachineGun7_6"};
		magazines[] = {"Heat105","Shell105","MachineGun7_6"};
		type = 1;
		threat[] = {1,0.6,0.2};
		class HatchDriver {
			selection = "poklop_driver";
			axis = "osa_poklop_driver";
			angle = -100;
		};
		class HatchCommander {
			selection = "poklop_commander";
			axis = "osa_poklop_commander";
			angle = -95;
		};
		class IndicatorSpeed {
			selection = "ukaz_rychlo";
			axis = "osa_rychlo";
			angle = -270;
			min = 0;
			max = "60 / 3.6";
		};
		class IndicatorRPM {
			selection = "ukaz_rpm";
			axis = "osa_rpm";
			angle = -315;
			min = 0;
			max = 1;
		};
	};
	class M113: APC {
		scope = 2;
		crew = "SoldierWCrew";
		picture = "im113";
		side = 1;
		displayName = "$STR_DN_M113";
		nameSound = "m113";
		accuracy = 0.3;
		armor = 150;
		cost = 100000;
		maxSpeed = 60;
		hasCommander = 0;
		outGunnerMayFire = 1;
		forceHideGunner = 1;
		viewGunnerInExternal = 1;
		transportSoldier = 8;
		irScanRangeMin = 0;
		irScanRangeMax = 0;
		class TransportMagazines {
			class _xx_M16 {
				magazine = "M16";
				count = "30*1";
			};
			class _xx_M60 {
				magazine = "M60";
				count = "5*1";
			};
			class _xx_HandGrenade {
				magazine = "HandGrenade";
				count = "10*1";
			};
			class _xx_M21 {
				magazine = "M21";
				count = "10*1";
			};
			class _xx_LAWLauncher {
				magazine = "LAWLauncher";
				count = "3*1";
			};
			class _xx_GrenadeLauncher {
				magazine = "GrenadeLauncher";
				count = "3*1";
			};
		};
		transportAmmo = 0;
		gunnerAction = "ManActM113Gunner";
		gunnerInAction = "ManActM113Gunner";
		driverAction = "ManActM113DriverOut";
		driverInAction = "ManActM113Driver";
		soundEnviron[] = {"Vehicles\OldRolling_Treads1",0.099999994,0.7};
		soundEngine[] = {"Vehicles\m113b",0.099999994,1};
		soundCrash[] = {"Vehicles\crash_small2",0.099999994,1};
		soundGear[] = {"Vehicles\Gear_Trans1",0.01,1};
		model = "m113";
		canFloat = 1;
		class Turret: TurretBase {
			minElev = -12;
			maxElev = 20;
			minTurn = -360;
			maxTurn = 360;
		};
		gunnerOpticsModel = "optika_empty";
		initCargoAngleY = 90;
		weapons[] = {"Browning"};
		magazines[] = {"Browning"};
		type = 1;
		threat[] = {0.9,0.2,0.1};
		typicalCargo[] = {"Soldier","Soldier","SoldierLAW","SoldierLAW"};
		class HatchDriver {
			selection = "poklop_driver";
			axis = "osa_poklop_driver";
			angle = 175;
		};
		class IndicatorSpeed {
			selection = "ukaz_rychlo";
			axis = "osa_rychlo";
			angle = -290;
			min = 0;
			max = "64/3.6";
		};
		class IndicatorRPM {
			selection = "ukaz_rpm";
			axis = "osa_rpm";
			angle = -235;
			min = 0;
			max = 1;
		};
		transportMaxMagazines = 100;
		transportMaxWeapons = 20;
	};
	class M113Ambul: M113 {
		accuracy = 1000;
		vehicleClass = "Support";
		icon = "Ambulance_move";
		picture = "im113_ambu";
		nameSound = "ambulance";
		scope = 2;
		displayName = "$STR_DN_M113_AMB";
		class TransportMagazines {
			class _xx_M16 {
				magazine = "M16";
				count = "30*0";
			};
			class _xx_M60 {
				magazine = "M60";
				count = "5*0";
			};
			class _xx_HandGrenade {
				magazine = "HandGrenade";
				count = "10*0";
			};
			class _xx_M21 {
				magazine = "M21";
				count = "10*0";
			};
			class _xx_LAWLauncher {
				magazine = "LAWLauncher";
				count = "3*0";
			};
			class _xx_GrenadeLauncher {
				magazine = "GrenadeLauncher";
				count = "3*0";
			};
		};
		attendant = 1;
		model = "M113_ambulance";
		weapons[] = {};
		magazines[] = {};
		hasGunner = 0;
		transportSoldier = 3;
		type = 1;
		threat[] = {0.0,0.0,0.0};
		typicalCargo[] = {};
		cargoAction[] = {"ManActM113Medic","ManActM113Medic","ManActM113Injured"};
		cargoIsCoDriver[] = {0,0,0};
		transportMaxMagazines = 0;
		transportMaxWeapons = 0;
	};
	class Cobra: Helicopter {
		picture = "icobra";
		crew = "SoldierWPilot";
		scope = 2;
		side = 1;
		displayName = "$STR_DN_AH1";
		nameSound = "cobra";
		accuracy = 0.3;
		driverAction = "ManActAH1Pilot";
		gunnerAction = "ManActAH1Gunner";
		maxSpeed = 270;
		armor = 50;
		cost = 10000000;
		model = "ah1_cobra";
		rotorBig = "vrtule_velka";
		rotorBigBlend = "vrtule_velka_bl_";
		rotorSmall = "vrtule_mala";
		rotorSmallBlend = "vrtule_mala_bl";
		weapons[] = {"MachineGun30W","HellfireLauncherCobra","ZuniLauncher38"};
		magazines[] = {"MachineGun30W","HellfireLauncherCobra","ZuniLauncher38"};
		type = 2;
		threat[] = {0.3,1,0.8};
		class IndicatorAltRadar {
			selection = "alt";
			axis = "osa_alt";
			angle = -360;
			min = 0;
			max = 304;
		};
		class IndicatorAltBaro {
			selection = "nm_alt";
			axis = "osa_nm_alt";
			angle = -180;
			min = 0;
			max = 61;
		};
		class IndicatorSpeed {
			selection = "mph";
			axis = "osa_mph";
			angle = -320;
			min = 0;
			max = 125;
		};
		class IndicatorVertSpeed {
			selection = "vert_speed";
			axis = "osa_vert_speed";
			angle = -300;
			min = -30;
			max = 30;
		};
		class IndicatorRPM {
			selection = "rpm";
			axis = "osa_rpm";
			angle = -320;
			min = 0;
			max = 12;
		};
		laserScanner = 1;
		class ReloadAnimations {
			class MachineGun30W {
				weapon = "MachineGun30W";
				angle0 = 0;
				angle1 = "-2 * 3.141592654";
				multiplier = 500;
				type = "rotation";
				animPeriod = 1;
				selection = "gatling";
				begin = "usti hlavne";
				end = "konec hlavne";
			};
		};
	};
	class Ch47D: Helicopter {
		access = 0;
		mainRotorSpeed = 1.0;
		backRotorSpeed = -1.0;
		minMainRotorDive = -9;
		maxMainRotorDive = 15;
		neutralMainRotorDive = -5;
		minBackRotorDive = -15;
		maxBackRotorDive = 9;
		neutralBackRotorDive = -5;
		transportMaxMagazines = 200;
		transportMaxWeapons = 50;
	};
	class ParachuteBase: Helicopter {
		scope = 0;
		destrType = "DestructNo";
		simulation = "parachute";
		weaponSlots = "1	 + 	16	 + 10*		256	 + 2*	4096	 + 	2	 + 4*	32";
		autocenter = 0;
		vehicleClass = "Air";
		displayName = "$STR_DN_PARACHUTE";
		nameSound = "man";
		model = "para";
		picture = "ivojak";
		icon = "padak.paa";
		accuracy = 0.1;
		fuelCapacity = 0;
		unitInfoType = "UnitInfoSoldier";
		hideUnitInfo = 1;
		irTarget = 0;
		hasGunner = 0;
		soundEnviron[] = {"Objects\noise",0.01,0.25};
		soundGetOut[] = {"",0.00031622773,1};
		soundCrash[] = {"",0.00031622773,1};
		soundLandCrash[] = {"",0.00031622773,1};
		soundWaterCrash[] = {"Explosions\intowater",0.031622775,1};
		driverCanSee = "2+8";
		driverAction = "ManActPara";
		armor = 10;
		class ViewOptics: ViewOpticsBase {
			initAngleX = 0;
			minAngleX = -40;
			maxAngleX = 17;
			initAngleY = 0;
			minAngleY = -100;
			maxAngleY = 100;
			initFov = 0.5;
			minFov = 0.3;
			maxFov = 1.2;
		};
		type = 0;
		threat[] = {0.0,0.0,0.0};
		cost = 100000;
		weapons[] = {};
		magazines[] = {};
	};
	class ParachuteEast: ParachuteBase {
		scope = 2;
		accuracy = 0.5;
		side = 0;
		crew = "SoldierESaboteurPipe";
	};
	class ParachuteWest: ParachuteBase {
		scope = 2;
		accuracy = 0.5;
		side = 1;
		crew = "SoldierWSaboteurPipe";
	};
	class ParachuteC: ParachuteBase {
		scope = 2;
		accuracy = 0.5;
		side = 3;
		crew = "Civilian";
	};
	class ParachuteG: ParachuteBase {
		scope = 2;
		accuracy = 0.5;
		side = 2;
		crew = "SoldierGB";
	};
	class Parachute: ParachuteWest {
		scope = 1;
	};
	class UH60: Helicopter {
		scope = 2;
		crew = "SoldierWPilot";
		picture = "iuh60";
		maxSpeed = 270;
		side = 1;
		displayName = "$STR_DN_UH60";
		nameSound = "blackhawk";
		accuracy = 0.3;
		armor = 60;
		cost = 10000000;
		mainRotorSpeed = -1;
		model = "uh-60";
		rotorBig = "vrtule_uh_v";
		rotorBigBlend = "vrtule_uh_v_bl";
		rotorSmall = "vrtule_uh_m";
		rotorSmallBlend = "vrtule_uh_m_bl";
		soundEngine[] = {"Vehicles\uh1",3.1622777,1.5};
		weapons[] = {"ZuniLauncher38"};
		magazines[] = {"ZuniLauncher38"};
		driverAction = "ManActUH60Pilot";
		gunnerAction = "ManActUH60Pilot";
		gunnerUsesPilotView = 1;
		transportSoldier = 12;
		transportAmmo = 0;
		initCargoAngleY = 10;
		minCargoAngleY = -60;
		maxCargoAngleY = 120;
		type = 2;
		threat[] = {0.3,1,0.4};
		typicalCargo[] = {"Soldier","Soldier","SoldierLAW","SoldierLAW"};
		class Reflectors {
			class Left {
				color[] = {0.8,0.8,1.0,1.0};
				ambient[] = {0.07,0.07,0.07,1.0};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 0.5;
				brightness = 1.0;
			};
			class Right {
				color[] = {0.8,0.8,1.0,1.0};
				ambient[] = {0.07,0.07,0.07,1.0};
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
				size = 0.5;
				brightness = 1.0;
			};
		};
		class IndicatorAltRadar {
			selection = "alt";
			axis = "osa_alt";
			angle = -360;
			min = 0;
			max = 304;
		};
		class IndicatorAltBaro {
			selection = "nm_alt";
			axis = "osa_nm_alt";
			angle = -180;
			min = 0;
			max = 61;
		};
		class IndicatorSpeed {
			selection = "mph";
			axis = "osa_mph";
			angle = -350;
			min = 0;
			max = 175;
		};
		class IndicatorVertSpeed {
			selection = "vert_speed";
			axis = "osa_vert_speed";
			angle = -300;
			min = -30;
			max = 30;
		};
		class IndicatorRPM {
			selection = "rpm";
			axis = "osa_rpm";
			angle = -320;
			min = 0;
			max = 12;
		};
		class IndicatorAltRadar2 {
			selection = "alt2";
			axis = "osa_alt2";
			angle = -360;
			min = 0;
			max = 304;
		};
		class IndicatorAltBaro2 {
			selection = "nm_alt2";
			axis = "osa_nm_alt2";
			angle = -180;
			min = 0;
			max = 61;
		};
		class IndicatorSpeed2 {
			selection = "mph2";
			axis = "osa_mph2";
			angle = -350;
			min = 0;
			max = 175;
		};
		class IndicatorVertSpeed2 {
			selection = "vert_speed2";
			axis = "osa_vert_speed2";
			angle = -300;
			min = -30;
			max = 30;
		};
		class IndicatorRPM2 {
			selection = "rpm2";
			axis = "osa_rpm2";
			angle = -320;
			min = 0;
			max = 12;
		};
		transportMaxMagazines = 150;
		transportMaxWeapons = 30;
	};
	class UH60MG: UH60 {
		displayName = "$STR_DN_UH60_MG";
		nameSound = "blackhawk";
		accuracy = 1000;
		model = "uh-60mg";
		transportSoldier = 12;
		enableSweep = 0;
		gunnerAction = "ManActUH60Gunner";
		gunnerOpticsModel = "optika_empty";
		weapons[] = {"Browning"};
		magazines[] = {"Browning"};
		class Turret: TurretBase {
			minElev = -42;
			maxElev = 5;
			minTurn = 30;
			maxTurn = 150;
			soundServo[] = {"",0.01,1.0};
		};
		class ViewGunner: ViewGunnerBase {
			initAngleY = 90;
			minAngleY = 30;
			maxAngleY = 150;
			initAngleX = 0;
			minAngleX = -42;
			maxAngleX = 5;
		};
	};
	class Su25: Plane {
		access = 0;
		armor = 50;
	};
	class A10: Plane {
		scope = 2;
		crew = "SoldierWPilot";
		picture = "ia10";
		side = 1;
		displayName = "$STR_DN_A10";
		nameSound = "thunderbolt";
		accuracy = 0.3;
		driverAction = "ManActA10Pilot";
		maxSpeed = 600;
		laserScanner = 1;
		armor = 50;
		cost = 20000000;
		model = "a10";
		weapons[] = {"MaverickLauncher","MachineGun30A10Burst"};
		magazines[] = {"MaverickLauncher","MachineGun30A10Burst"};
		fov = 0.5;
		type = 2;
		threat[] = {0.1,1,0.7};
		class Reflectors {
			class Reflector {
				color[] = {0.9,0.8,0.8,1.0};
				ambient[] = {0.1,0.1,0.1,1.0};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 0.5;
				brightness = 0.25;
			};
		};
	};
	class Cessna: A10 {
		scope = 2;
		crew = "Civilian";
		side = 3;
		displayName = "$STR_DN_PLANE";
		nameSound = "plane";
		accuracy = 0.3;
		maxSpeed = 300;
		gearRetracting = 0;
		ejectSpeed[] = {0,0,0};
		armor = 15;
		cost = 200000;
		model = "cessna182";
		picture = "icessna";
		weapons[] = {};
		magazines[] = {};
		fov = 0.5;
		landingAoa = "7*3.1415/180";
		driverAction = "ManActCessnaPilot";
		cargoAction[] = {"ManActCessnaCoPilot","ManActCessnaCargo"};
		soundEngine[] = {"Vehicles\plane",0.31622776,1};
		soundEnviron[] = {"Objects\noise",0.0009999999,1.0};
		soundServo[] = {"Vehicles\gun_elevate",0.01,0.4};
		transportSoldier = 3;
		extCameraPosition[] = {0,2,-30};
		type = 2;
		threat[] = {0.1,1,0.7};
		audible = 6;
		aileronSensitivity = 0.33;
		elevatorSensitivity = 0.1;
		noseDownCoef = 0.025;
		class Reflectors {
			class Left {
				color[] = {0.9,0.8,0.8,1.0};
				ambient[] = {0.1,0.1,0.1,1.0};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 0.5;
				brightness = 0.25;
			};
			class Right {
				color[] = {0.9,0.8,0.8,1.0};
				ambient[] = {0.1,0.1,0.1,1.0};
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
				size = 0.5;
				brightness = 0.25;
			};
		};
		class IndicatorAltRadar {
			selection = "alt";
			axis = "osa_alt";
			angle = -355;
			min = 0;
			max = 150;
		};
		class IndicatorAltRadar2 {
			selection = "alt2";
			axis = "osa_alt2";
			angle = -355;
			min = 0;
			max = 150;
		};
		class IndicatorSpeed {
			selection = "mph";
			axis = "osa_mph";
			angle = -300;
			min = 0;
			max = 90;
		};
		class IndicatorVertSpeed {
			selection = "vert_speed";
			axis = "osa_vert_speed";
			angle = -300;
			min = -30;
			max = 30;
		};
		class IndicatorVertSpeed2 {
			selection = "vert_speed2";
			axis = "osa_vert_speed2";
			angle = -300;
			min = -30;
			max = 30;
		};
		class IndicatorRPM {
			selection = "rpm";
			axis = "osa_rpm";
			angle = -240;
			min = 0;
			max = 1;
		};
		class IndicatorCompass {
			selection = "kompas";
			axis = "osa_kompas";
			angle = 360;
			min = -3.1415927;
			max = 3.1415927;
		};
		class IndicatorWatch {
			hour = "hodinova";
			minute = "minutova";
			axis = "osa_time";
			reversed = 0;
		};
		class IndicatorWatch2 {
			hour = "hodinova2";
			minute = "minutova2";
			axis = "osa_time2";
			reversed = 0;
		};
	};
	class BoatW: SmallShip {
		vehicleClass = "Armored";
		displayName = "$STR_DN_MARK_II";
		accuracy = 0.5;
		scope = 2;
		crew = "SoldierWB";
		model = "pbr";
		picture = "ipbr";
		side = 1;
		driverIsCommander = 1;
		driverAction = "ManActPBRDriver";
		gunnerAction = "ManActPBRGunner";
		cargoAction[] = {"ManActCargo"};
		gunnerOpticsModel = "optika_empty";
		maxSpeed = 60;
		transportSoldier = 6;
		class TransportMagazines {
			class _xx_M16 {
				magazine = "M16";
				count = "30*1";
			};
			class _xx_M60 {
				magazine = "M60";
				count = "5*1";
			};
			class _xx_HandGrenade {
				magazine = "HandGrenade";
				count = "10*1";
			};
			class _xx_M21 {
				magazine = "M21";
				count = "10*1";
			};
			class _xx_LAWLauncher {
				magazine = "LAWLauncher";
				count = "3*1";
			};
			class _xx_GrenadeLauncher {
				magazine = "GrenadeLauncher";
				count = "3*1";
			};
		};
		cost = 100000;
		armor = 100;
	};
	class BoatWAuto: BoatW {
		scope = 1;
		displayName = "$STR_DN_MARK_II_AUTO";
		hasGunner = 0;
		hasCommander = 0;
	};
	class M2StaticMG: M113 {
		hideProxyInCombat = 0;
		picture = "m2";
		crew = "SoldierWB";
		hasDriver = 0;
		hasGunner = 1;
		hasCommander = 0;
		castGunnerShadow = 1;
		ejectDeadGunner = 1;
		unitInfoType = "UnitInfoSoldier";
		hideUnitInfo = 1;
		irScanRangeMin = 0;
		irScanRangeMax = 0;
		irTarget = 0;
		maxSpeed = 1;
		fuelCapacity = 0;
		transportSolider = 0;
		gunnerAction = "ManActM2Gunner";
		gunnerInAction = "ManActM2Gunner";
		gunnerCanSee = "2+8";
		commanderCanSee = "2+8";
		extCameraPosition[] = {0,0.8,-5};
		class TransportMagazines {};
		cost = 10000;
		getInAction = "ManActGetInCar";
		getOutAction = "ManActGetOutCar";
		class Turret: TurretBase {
			soundServo[] = {};
			minElev = -20;
			maxElev = 20;
			minTurn = -360;
			maxTurn = 360;
		};
		armor = 30;
		armorStructural = 10.0;
		type = 0;
		model = "m2_mg";
		icon = "kulomet.paa";
		displayName = "$STR_DN_M2_MG";
		nameSound = "mgun";
		transportSoldier = 0;
		transportAmmo = 0;
		accuracy = 0.3;
		typicalCargo[] = {};
		transportMaxMagazines = 0;
		transportMaxWeapons = 0;
	};
	class UAZ: Car {
		picture = "iuaz";
		scope = 2;
		crew = "SoldierEB";
		side = 0;
		displayName = "$STR_DN_UAZ";
		nameSound = "UAZ";
		accuracy = 0.5;
		transportSoldier = 3;
		transportAmmo = 0;
		maxSpeed = 90;
		driverAction = "ManActUAZDriver";
		cargoAction[] = {"ManActUazCoDriver","ManActCargo"};
		cargoIsCoDriver[] = {1,0};
		cost = 25000;
		armor = 20;
		model = "uaz";
		armorWheels = 0.12;
		soundEngine[] = {"Vehicles\uazloop",0.031622775,1.25};
		class ViewPilot: ViewPilotBase {
			initAngleX = 10;
		};
		type = 0;
		threat[] = {0.5,0.5,0.1};
		dammageHalf[] = {"jeep4x4_glass.paa","jeep4x4_glassB.paa","jeep_kab_sklo1.paa","jeep_kab_sklo1B.paa","jeep_kab_sklo2.paa","jeep_kab_sklo2B.paa","scud_sklo.paa","scud_skloB.paa","scud_sklo2.paa","scud_sklo2B.paa","scud_sklo3.paa","scud_sklo3B.paa","scud_sklo4.paa","scud_sklo4B.paa"};
		dammageFull[] = {"jeep4x4_glass.paa","jeep4x4_glassC.paa","jeep_kab_sklo1.paa","jeep_kab_sklo1C.paa","jeep_kab_sklo2.paa","jeep_kab_sklo2C.paa","scud_sklo.paa","scud_skloC.paa","scud_sklo2.paa","scud_sklo2C.paa","scud_sklo3.paa","scud_sklo3C.paa","scud_sklo4.paa","scud_sklo4C.paa"};
		class IndicatorSpeed {
			selection = "ukaz_rychlo";
			axis = "osa_rychlo";
			angle = -240;
			min = 0;
			max = 50;
		};
		class IndicatorRPM {
			selection = "ukaz_rpm";
			axis = "osa_rpm";
			angle = -170;
			min = 0;
			max = 1;
		};
	};
	class Ural: Truck {
		scope = 2;
		crew = "SoldierEB";
		picture = "iural";
		icon = "truck";
		side = 0;
		displayName = "$STR_DN_URAL";
		accuracy = 0.3;
		maxSpeed = 80;
		wheelCircumference = 4.513;
		turnCoef = 6.0;
		driverAction = "ManActUralDriver";
		cargoAction[] = {"ManActUralCoDriver","ManActUralCoDriver","ManActCargo"};
		cargoIsCoDriver[] = {1,1,0};
		transportSoldier = 12;
		class TransportMagazines {
			class _xx_AK74 {
				magazine = "AK74";
				count = "30*1";
			};
			class _xx_PK {
				magazine = "PK";
				count = "5*1";
			};
			class _xx_HandGrenade {
				magazine = "HandGrenade";
				count = "10*1";
			};
			class _xx_SVDDragunov {
				magazine = "SVDDragunov";
				count = "10*1";
			};
			class _xx_RPGLauncher {
				magazine = "RPGLauncher";
				count = "3*1";
			};
			class _xx_GrenadeLauncher {
				magazine = "GrenadeLauncher";
				count = "3*1";
			};
		};
		transportAmmo = 0;
		transportRepair = 0;
		weapons[] = {"TruckHorn"};
		magazines[] = {};
		cost = 50000;
		armor = 20;
		model = "ural";
		hiddenSelections[] = {"ammo"};
		initCargoAngleY = 185;
		soundEngine[] = {"Vehicles\Largecar",0.099999994,1};
		type = 0;
		threat[] = {0.0,0.0,0.0};
		typicalCargo[] = {"Soldier","Soldier","SoldierLAW","SoldierLAW"};
		class IndicatorSpeed {
			selection = "ukaz_rychlo";
			axis = "osa_rychlo";
			angle = -280;
			min = 0;
			max = 40;
		};
		class IndicatorRPM {
			selection = "ukaz_rpm";
			axis = "osa_rpm";
			angle = -280;
			min = 0;
			max = 1;
		};
	};
	class UralRepair: Ural {
		picture = "iuralrepair";
		vehicleClass = "Support";
		icon = "Repair_move";
		scope = 2;
		displayName = "$STR_DN_URAL_REPAIR";
		accuracy = 0.9;
		model = "uralrepair";
		hiddenSelections[] = {};
		transportSoldier = 2;
		transportRepair = 200000000;
		weapons[] = {};
		magazines[] = {};
		type = 0;
		threat[] = {0.0,0.0,0.0};
		typicalCargo[] = {};
	};
	class UralReammo: Ural {
		vehicleClass = "Support";
		icon = "Ammo_move";
		scope = 2;
		displayName = "$STR_DN_URAL_AMMO";
		accuracy = 0.9;
		transportSoldier = 2;
		class TransportMagazines {
			class _xx_AK74 {
				magazine = "AK74";
				count = "30*1";
			};
			class _xx_PK {
				magazine = "PK";
				count = "5*1";
			};
			class _xx_HandGrenade {
				magazine = "HandGrenade";
				count = "10*1";
			};
			class _xx_SVDDragunov {
				magazine = "SVDDragunov";
				count = "10*1";
			};
			class _xx_RPGLauncher {
				magazine = "RPGLauncher";
				count = "3*1";
			};
			class _xx_GrenadeLauncher {
				magazine = "GrenadeLauncher";
				count = "3*1";
			};
		};
		transportAmmo = 300000;
		model = "ural";
		hiddenSelections[] = {};
		weapons[] = {};
		magazines[] = {};
		type = 0;
		threat[] = {0.0,0.0,0.0};
	};
	class UralRefuel: Ural {
		picture = "iuralfuel";
		vehicleClass = "Support";
		icon = "Fuel_move";
		scope = 2;
		displayName = "$STR_DN_URAL_FUEL";
		accuracy = 0.8;
		model = "uralfuel";
		hiddenSelections[] = {};
		weapons[] = {};
		magazines[] = {};
		transportFuel = 3000;
		transportSoldier = 2;
		transportAmmo = 0;
		type = 0;
		threat[] = {0.0,0.0,0.0};
	};
	class Scud: Ural {
		vehicleClass = "Car";
		picture = "iscud";
		nameSound = "scudLauncher";
		scope = 2;
		displayName = "$STR_DN_SCUD";
		accuracy = 0.9;
		armor = 40;
		maxSpeed = 55;
		driverAction = "ManActSCUDDriver";
		cargoAction[] = {"ManActSCUDCoDriver"};
		cargoIsCoDriver[] = {1};
		transportSoldier = 3;
		transportAmmo = 0;
		turnCoef = 8.0;
		model = "scud";
		hiddenSelections[] = {};
		weapons[] = {};
		magazines[] = {};
		type = 0;
		threat[] = {0.0,0.0,0.0};
		scudLaunch = "scudlunch.rtm";
		scudStart = "scudstart.rtm";
		scudSoundElevate[] = {"vehicles\gun_elevate",0.01,1};
		scudSound[] = {"weapons\rocketflying",316.22778,0.2};
		scudModel = "scud_strela_proxy";
		scudModelFire = "scud_strela_ohen";
	};
	class SoldierEB: Soldier {
		displayName = "$STR_DN_SOLDIER";
		vehicleClass = "Men";
		scope = 2;
		model = "MC vojakE2";
		hiddenSelections[] = {"medic"};
		moves = "CfgMovesMC";
		side = 0;
		cost = 40000;
		accuracy = 0.7;
		weapons[] = {"AK74","Throw","Put"};
		magazines[] = {"AK74","AK74","AK74","AK74","HandGrenade","HandGrenade","HandGrenade","HandGrenade","HandGrenade","HandGrenade"};
	};
	class SoldierWFakeE: SoldierEB {
		moves = "CfgMovesMC";
		vehicleClass = "Men";
		scope = 1;
		side = 1;
		accuracy = 2.0;
		displayName = "$STR_DN_SOLDIERFAKE";
		weapons[] = {"AK74","Throw","Put"};
		magazines[] = {"AK74","AK74","AK74","AK74","HandGrenade","HandGrenade","HandGrenade","HandGrenade","HandGrenade","HandGrenade"};
		cost = 40000;
	};
	class SoldierEG: SoldierEB {
		cost = 50000;
		accuracy = 1000;
		displayName = "$STR_DN_GRENADIER";
		weapons[] = {"AK74GrenadeLauncher","Throw","Put"};
		magazines[] = {"AK74","AK74","AK74","AK74","GrenadeLauncher","GrenadeLauncher","GrenadeLauncher"};
	};
	class SoldierEMedic: SoldierEB {
		accuracy = 1000;
		picture = "\misc\medik.paa";
		vehicleClass = "Men";
		scope = 2;
		cost = 60000;
		displayName = "$STR_DN_MEDIC";
		weaponSlots = "1	 + 4 * 		256	 + 	4096	 + 	2	 + 4*	32";
		attendant = 1;
		weapons[] = {"AK74","Throw","Put"};
		magazines[] = {"AK74","AK74","AK74","AK74"};
		nameSound = "medic";
		hiddenSelections[] = {};
	};
	class SoldierENOG: SoldierEB {
		scope = 1;
	};
	class SoldierE: SoldierEG {
		scope = 1;
	};
	class SoldierECrew: SoldierEB {
		model = "MC tankistaE2.p3d";
		nameSound = "crew";
		accuracy = 1000;
		displayName = "$STR_DN_CREW";
		weapons[] = {"AK74SU","NVGoggles","Throw","Put"};
	};
	class SoldierEPilot: SoldierEB {
		accuracy = 1000;
		model = "mc pilote2.p3d";
		displayName = "$STR_DN_PILOT";
		nameSound = "pilot";
		weapons[] = {"AK74SU","NVGoggles","Throw","Put"};
	};
	class SoldierEMG: SoldierEB {
		vehicleClass = "Men";
		scope = 2;
		displayName = "$STR_DN_MGUNNER";
		cost = 60000;
		side = 0;
		accuracy = 1.5;
		nameSound = "machineGunner";
		weapons[] = {"PK","Throw","Put"};
		magazines[] = {"PK","PK","PK","PK","PK"};
		threat[] = {1,0.1,0.8};
	};
	class SoldierELAW: SoldierEB {
		displayName = "$STR_DN_RPG_SOLDIER";
		nameSound = "missileSoldier";
		cost = 80000;
		accuracy = 1.5;
		weapons[] = {"AK74","RPGLauncher","Throw","Put"};
		magazines[] = {"AK74","AK74","AK74","AK74","RPGLauncher","RPGLauncher","RPGLauncher"};
		nightVision = 1;
		threat[] = {1,0.9,0.1};
	};
	class SoldierEAT: SoldierELAW {
		displayName = "$STR_DN_AT4_SOLDIER";
		nameSound = "missileSoldier";
		accuracy = 1.5;
		weapons[] = {"AK74","AT4Launcher","Throw","Put"};
		magazines[] = {"AK74","AK74","AK74","AK74","AT4Launcher"};
		threat[] = {1,0.9,0.1};
	};
	class SoldierEAA: SoldierELAW {
		displayName = "$STR_DN_AA_SOLDIER";
		nameSound = "missileSoldier";
		accuracy = 1.5;
		weapons[] = {"AK74","9K32Launcher","Throw","Put"};
		magazines[] = {"AK74","AK74","AK74","AK74","9K32Launcher"};
		threat[] = {1,0.5,0.9};
	};
	class SoldierEMiner: SoldierEB {
		displayName = "$STR_DN_ENGINEER";
		accuracy = 1000;
		weapons[] = {"AK74","Throw","Put"};
		canDeactivateMines = 1;
		picture = "\misc\sapper.paa";
		magazines[] = {"AK74","AK74","AK74","AK74","MineE","MineE","MineE"};
		threat[] = {1,0.5,0.1};
	};
	class OfficerE: SoldierEB {
		nameSound = "officer";
		displayName = "$STR_DN_OFFICER";
		scope = 2;
		model = "mc vojakeo2.p3d";
		picture = "\misc\frcky.paa";
		side = 0;
		accuracy = 2.0;
		cost = 600000;
		nightVision = 1;
		weapons[] = {"AK74","Binocular","Throw","Put"};
		magazines[] = {"AK74","AK74","AK74","AK74","HandGrenade","HandGrenade","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
	};
	class OfficerENight: SoldierEB {
		nameSound = "officer";
		displayName = "$STR_DN_OFFICERNIGHT";
		scope = 2;
		model = "mc vojakeo2.p3d";
		picture = "\misc\medik.paa";
		side = 0;
		accuracy = 2.0;
		cost = 600000;
		nightVision = 1;
		weapons[] = {"AK74GrenadeLauncher","Binocular","NVGoggles","Throw","Put"};
		magazines[] = {"AK74","AK74","AK74","AK74","HandGrenade","HandGrenade","HandGrenade","Flare","Flare","Flare"};
	};
	class GeneralE: SoldierEB {
		nameSound = "officer";
		displayName = "$STR_DN_GENERAL";
		scope = 1;
		model = "mc vojake2_guba.p3d";
		side = 0;
		accuracy = 2.0;
		cost = 100000;
		nightVision = 1;
		weapons[] = {};
		magazines[] = {};
	};
	class Angelina: SoldierEB {
		displayName = "$STR_DN_ANGELINA";
		scope = 1;
		model = "angelina.p3d";
		side = 0;
		accuracy = 2.0;
		cost = 100000;
		weapons[] = {};
		magazines[] = {};
	};
	class SoldierESniper: SoldierEB {
		nameSound = "sniper";
		displayName = "$STR_DN_SNIPER";
		accuracy = 3.5;
		nightVision = 1;
		cost = 250000;
		weaponSlots = "1	 + 	16	 + 4 * 		256	 + 2 * 	4096	 + 	2	 + 4*	32";
		weapons[] = {"SVDDragunov","Throw","Put"};
		magazines[] = {"SVDDragunov","SVDDragunov","SVDDragunov","SVDDragunov"};
		model = "mc snipere2.p3d";
		picture = "\misc\sniper.paa";
		sensitivity = 2;
		camouflage = 0.6;
		threat[] = {1,0.1,0.1};
	};
	class SoldierESaboteur: SoldierEB {
		scope = 1;
		picture = "\misc\meciky.paa";
		accuracy = 3.5;
		cost = 400000;
		displayName = "$STR_DN_SPECNAS";
		weapons[] = {"AK74SU","Throw","Put"};
		magazines[] = {"AK74","AK74","AK74","AK74","TimeBomb","TimeBomb","TimeBomb"};
		camouflage = 0.7;
		threat[] = {1,0.5,0.1};
		model = "mc specnas2.p3d";
		nameSound = "specNas";
		canHideBodies = 1;
		canDeactivateMines = 1;
	};
	class SoldierESaboteurPipe: SoldierESaboteur {
		scope = 2;
		displayName = "$STR_DN_SPECNAS";
		weapons[] = {"AK74SU","NVGoggles","Throw","Put"};
		magazines[] = {"AK74","AK74","AK74","AK74","PipeBomb","PipeBomb","PipeBomb"};
	};
	class SoldierEFakeW: SoldierWB {
		model = "MC vojakW2";
		moves = "CfgMovesMC";
		vehicleClass = "Men";
		scope = 1;
		side = 0;
		accuracy = 2.0;
		displayName = "$STR_DN_ESOLDIERFAKE";
		weapons[] = {"M16","Throw","Put"};
		magazines[] = {"M16","M16","M16","M16","HandGrenade","HandGrenade","HandGrenade","HandGrenade","HandGrenade","HandGrenade"};
		cost = 40000;
	};
	class LaserTarget: All {
		reversed = 0;
		hasDriver = 0;
		icon = "Unknown_object";
		displayName = "$STR_DN_LASER_TARGET";
		nameSound = "target";
		accuracy = 0.005;
		model = "laserTgt.p3d";
		picture = "ivojak";
		weapons[] = {"M16"};
		magazines[] = {"M16"};
		type = 1;
		threat[] = {0.5,0.5,0.1};
		maxSpeed = 0;
		simulation = "laserTarget";
		laserTarget = 1;
		irTarget = 0;
		destrType = "DestructNo";
		side = 3;
		cost = 100000000;
		armor = 500;
	};
	class BMP: APC {
		scope = 2;
		crew = "SoldierECrew";
		picture = "ibmp";
		side = 0;
		displayName = "$STR_DN_BMP";
		nameSound = "BMP";
		accuracy = 0.3;
		maxSpeed = 70;
		hiddenSelections[] = {"pruh"};
		transportSoldier = 8;
		class TransportMagazines {
			class _xx_AK74 {
				magazine = "AK74";
				count = "30*1";
			};
			class _xx_PK {
				magazine = "PK";
				count = "5*1";
			};
			class _xx_HandGrenade {
				magazine = "HandGrenade";
				count = "10*1";
			};
			class _xx_SVDDragunov {
				magazine = "SVDDragunov";
				count = "10*1";
			};
			class _xx_RPGLauncher {
				magazine = "RPGLauncher";
				count = "3*1";
			};
			class _xx_GrenadeLauncher {
				magazine = "GrenadeLauncher";
				count = "3*1";
			};
		};
		transportAmmo = 0;
		armor = 200;
		cost = 150000;
		forceHideGunner = 0;
		model = "bmp";
		canFloat = 1;
		minGunElev = -5;
		maxGunElev = 15;
		weapons[] = {"Gun73","MachineGun7_6","AT3Launcher"};
		magazines[] = {"Heat73","Shell73","MachineGun7_6","AT3Launcher"};
		typicalCargo[] = {"Soldier","Soldier","SoldierLAW"};
		type = 1;
		threat[] = {0.9,0.7,0.3};
		soundEnviron[] = {"Vehicles\OldRolling_Treads1",0.17782794,1};
		soundEngine[] = {"Vehicles\T55Sound",0.17782794,1};
		driverAction = "ManActBMPDriverOut";
		gunnerAction = "ManActBMPGunnerOut";
		commanderAction = "ManActBMPCommanderOut";
		driverInAction = "ManActBMPDriver";
		gunnerInAction = "ManActBMPGunner";
		commanderInAction = "ManActBMPCommander";
		class HatchDriver {
			selection = "poklop_driver";
			axis = "osa_poklop_driver";
			angle = -100;
		};
		class HatchCommander {
			selection = "poklop_commander";
			axis = "osa_poklop_commander";
			angle = -90;
		};
		class HatchGunner {
			selection = "poklop_gunner";
			axis = "osa_poklop_gunner";
			angle = 90;
		};
		class IndicatorSpeed {
			selection = "ukaz_rychlo";
			axis = "osa_rychlo";
			angle = -320;
			min = 0;
			max = "40 / 3.6";
		};
		class IndicatorRPM {
			selection = "ukaz_rpm";
			axis = "osa_rpm";
			angle = -230;
			min = 0;
			max = 1;
		};
	};
	class BMPAmbul: BMP {
		accuracy = 1000;
		vehicleClass = "Support";
		icon = "Ambulance_move";
		nameSound = "ambulance";
		picture = "ibmp_abu";
		scope = 2;
		displayName = "$STR_DN_BMP_AMB";
		attendant = 1;
		hasGunner = 0;
		transportSoldier = 2;
		class TransportMagazines {
			class _xx_AK74 {
				magazine = "AK74";
				count = "30*0";
			};
			class _xx_PK {
				magazine = "PK";
				count = "5*0";
			};
			class _xx_HandGrenade {
				magazine = "HandGrenade";
				count = "10*0";
			};
			class _xx_SVDDragunov {
				magazine = "SVDDragunov";
				count = "10*0";
			};
			class _xx_RPGLauncher {
				magazine = "RPGLauncher";
				count = "3*0";
			};
			class _xx_GrenadeLauncher {
				magazine = "GrenadeLauncher";
				count = "3*0";
			};
		};
		model = "bmp_Ambu";
		weapons[] = {};
		magazines[] = {};
		minGunTurn = -6;
		type = 0;
		threat[] = {0.0,0.0,0.0};
		typicalCargo[] = {};
		cargoAction[] = {"ManActM113Medic","ManActM113Injured"};
		cargoIsCoDriver[] = {0,0};
	};
	class RussianTank: Tank {
		accuracy = 0.35;
		side = 0;
		crew = "SoldierECrew";
		commanderOpticsModel = "optika_tanke_auxiliary";
		forceHideGunner = 0;
	};
	class T72: RussianTank {
		scope = 2;
		picture = "it72";
		side = 0;
		displayName = "$STR_DN_T72";
		nameSound = "t72";
		accuracy = 0.5;
		hiddenSelections[] = {"pruh"};
		armor = 400;
		cost = 1000000;
		maxSpeed = 60;
		driverAction = "ManActT72DriverOut";
		gunnerAction = "ManActT72GunnerOut";
		commanderAction = "ManActT72CommanderOut";
		driverInAction = "ManActT72Driver";
		gunnerInAction = "ManActT72Gunner";
		commanderInAction = "ManActT72Commander";
		model = "t72";
		weapons[] = {"Gun120","MachineGun7_6"};
		magazines[] = {"Heat120","Shell120","MachineGun7_6"};
		type = 1;
		threat[] = {0.9,0.8,0.2};
		class IndicatorSpeed {
			selection = "ukaz_rychlo";
			axis = "osa_rychlo";
			angle = -270;
			min = 0;
			max = "100 / 3.6";
		};
		class IndicatorSpeed2 {
			selection = "ukaz_rychlo2";
			axis = "osa_rychlo2";
			angle = -270;
			min = 0;
			max = "100 / 3.6";
		};
		class IndicatorRPM {
			selection = "ukaz_rpm";
			axis = "osa_rpm";
			angle = -290;
			min = 0;
			max = 1;
		};
	};
	class T80: RussianTank {
		scope = 2;
		picture = "it80";
		side = 0;
		displayName = "$STR_DN_T80";
		nameSound = "t80";
		accuracy = 0.5;
		driverAction = "ManActT80DriverOut";
		gunnerAction = "ManActT80GunnerOut";
		commanderAction = "ManActT80CommanderOut";
		hiddenSelections[] = {"pruh"};
		driverInAction = "ManActT80Driver";
		gunnerInAction = "ManActT80Gunner";
		commanderInAction = "ManActT80Commander";
		armor = 700;
		cost = 1500000;
		maxSpeed = 70;
		soundEngine[] = {"Vehicles\ModernIdle1",0.031622775,1};
		soundEnviron[] = {"Vehicles\ModernRolling_Treads1",0.031622775,1};
		model = "t80";
		weapons[] = {"Gun120","MachineGun12_7"};
		magazines[] = {"Heat120","Shell120","MachineGun12_7"};
		type = 1;
		threat[] = {0.9,0.9,0.3};
		class IndicatorSpeed {
			selection = "ukaz_rychlo";
			axis = "osa_rychlo";
			angle = -270;
			min = 0;
			max = "100 / 3.6";
		};
		class IndicatorSpeed2 {
			selection = "ukaz_rychlo2";
			axis = "osa_rychlo2";
			angle = -270;
			min = 0;
			max = "100 / 3.6";
		};
		class IndicatorRPM {
			selection = "ukaz_rpm";
			axis = "osa_rpm";
			angle = -290;
			min = 0;
			max = 1;
		};
	};
	class T80Auto: T80 {
		scope = 1;
		hasGunner = 0;
		hasCommander = 0;
		displayName = "$STR_DN_T80_AUTO";
		accuracy = 1000;
	};
	class ZSU: Tank {
		scope = 2;
		crew = "SoldierECrew";
		picture = "izsu";
		icon = "antiAC.paa";
		side = 0;
		displayName = "$STR_DN_ZSU";
		nameSound = "shilka";
		accuracy = 0.3;
		commanderCanSee = 31;
		gunnerCanSee = "1+16 +4+8";
		driverAction = "ManActZSUDriver";
		gunnerAction = "ManActZSUGunnerOut";
		commanderAction = "ManActZSUCommanderOut";
		driverInAction = "ManActZSUDriver";
		gunnerInAction = "ManActZSUGunner";
		commanderInAction = "ManActZSUCommander";
		forceHideGunner = 0;
		forceHideDriver = 1;
		class HatchDriver {
			selection = "poklop_driver";
			axis = "osa_poklop_driver";
			angle = 100;
		};
		class HatchCommander {
			selection = "poklop_commander";
			axis = "osa_poklop_commander";
			angle = 100;
		};
		armor = 250;
		cost = 1000000;
		model = "zsu";
		simulation = "tank";
		maxSpeed = 44;
		irScanRangeMin = 4000;
		irScanRangeMax = 10000;
		irScanToEyeFactor = 5;
		irScanGround = 0;
		soundCrash[] = {"Vehicles\crash1",0.099999994,1};
		weapons[] = {"ZsuCannon"};
		magazines[] = {"ZsuCannon"};
		class Turret: TurretBase {
			minElev = -7;
			maxElev = 70;
		};
		class IndicatorSpeed {
			selection = "ukaz_mph";
			axis = "osa_mph";
			angle = 250;
			min = 0;
			max = "100 / 3.6";
		};
		class IndicatorRPM {
			selection = "ukaz_rpm";
			axis = "osa_rpm";
			angle = 315;
			min = 0;
			max = 1;
		};
		type = 1;
		threat[] = {0.5,0.5,1};
		gunnerOpticsModel = "optika_zsu_gunner";
		commanderOpticsModel = "optika_tanke_auxiliary";
	};
	class M2StaticMGE: M2StaticMG {
		side = 0;
		displayName = "$STR_DN_M2_MGE";
		crew = "SoldierEB";
	};
	class Mi24: Helicopter {
		scope = 2;
		crew = "SoldierEPilot";
		picture = "imi24";
		maxSpeed = 294;
		side = 0;
		displayName = "$STR_DN_MI24";
		nameSound = "hind";
		accuracy = 0.5;
		cost = 4000000;
		armor = 100;
		model = "mi24_HIND";
		rotorBig = "hip_vrt_v";
		rotorBigBlend = "hip_vrtblur_v";
		rotorSmall = "vrthind_m";
		rotorSmallBlend = "vrthind_m_bl";
		soundEngine[] = {"vehicles\mi_helicopter",3.1622777,1};
		weapons[] = {"MachineGun30E","HellfireLauncherHind","Rocket57x64"};
		magazines[] = {"MachineGun30E","HellfireLauncherHind","Rocket57x64"};
		transportSoldier = 8;
		transportAmmo = 0;
		type = 2;
		threat[] = {0.6,1,0.8};
		typicalCargo[] = {"Soldier","SoldierLAW"};
		driverAction = "ManActMi24Pilot";
		gunnerAction = "ManActMi24Gunner";
		class Reflectors {
			class Left {
				color[] = {0.8,0.8,1.0,1.0};
				ambient[] = {0.07,0.07,0.07,1.0};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 0.5;
				brightness = 1.0;
			};
			class Right {
				color[] = {0.8,0.8,1.0,1.0};
				ambient[] = {0.07,0.07,0.07,1.0};
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
				size = 0.5;
				brightness = 1.0;
			};
		};
		class IndicatorAltRadar {
			selection = "alt";
			axis = "osa_alt";
			angle = -360;
			min = 0;
			max = 304;
		};
		class IndicatorAltBaro {
			selection = "nm_alt";
			axis = "osa_nm_alt";
			angle = -180;
			min = 0;
			max = 61;
		};
		class IndicatorSpeed {
			selection = "mph";
			axis = "osa_mph";
			angle = -350;
			min = 0;
			max = 175;
		};
		class IndicatorVertSpeed {
			selection = "vert_speed";
			axis = "osa_vert_speed";
			angle = -300;
			min = -35;
			max = 35;
		};
		class IndicatorRPM {
			selection = "rpm";
			axis = "osa_rpm";
			angle = -320;
			min = 0;
			max = 12;
		};
		class IndicatorWatch {
			hour = "hodinova";
			minute = "minutova";
			axis = "osa_time";
			reversed = 0;
		};
		class ReloadAnimations {
			class MachineGun30E {
				weapon = "MachineGun30E";
				angle0 = 0;
				angle1 = "-2 * 3.141592654";
				multiplier = 500;
				type = "rotation";
				animPeriod = 0.5;
				selection = "gatling";
				begin = "usti hlavne";
				end = "konec hlavne";
			};
		};
	};
	class Mi17: Helicopter {
		scope = 2;
		crew = "SoldierEPilot";
		picture = "imi17";
		maxSpeed = 240;
		side = 0;
		displayName = "$STR_DN_MI17";
		nameSound = "mi17";
		accuracy = 0.5;
		cost = 3000000;
		armor = 50;
		model = "mi17_HIP";
		rotorBig = "hip_vrt_v";
		rotorBigBlend = "hip_vrtblur_v";
		rotorSmall = "vrthind_m";
		rotorSmallBlend = "vrthind_m_bl";
		soundEngine[] = {"vehicles\Slow4blade_Loop1",3.1622777,1};
		weapons[] = {"Rocket57x192"};
		magazines[] = {"Rocket57x192"};
		driverAction = "ManActMi17Pilot";
		gunnerAction = "ManActMi17Pilot";
		gunnerUsesPilotView = 1;
		transportSoldier = 12;
		transportAmmo = 0;
		type = 2;
		threat[] = {0.6,1,0.4};
		typicalCargo[] = {"Soldier","Soldier","SoldierLAW","SoldierLAW"};
		class IndicatorAltRadar {
			selection = "alt";
			axis = "osa_alt";
			angle = -360;
			min = 0;
			max = 304;
		};
		class IndicatorAltBaro {
			selection = "nm_alt";
			axis = "osa_nm_alt";
			angle = -180;
			min = 0;
			max = 61;
		};
		class IndicatorSpeed {
			selection = "mph";
			axis = "osa_mph";
			angle = -350;
			min = 0;
			max = 125;
		};
		class IndicatorVertSpeed {
			selection = "vert_speed";
			axis = "osa_vert_speed";
			angle = -300;
			min = -30;
			max = 30;
		};
		class IndicatorRPM {
			selection = "rpm";
			axis = "osa_rpm";
			angle = -320;
			min = 0;
			max = 12;
		};
		class IndicatorAltRadar2: IndicatorAltRadar {
			selection = "alt2";
			axis = "osa_alt2";
		};
		class IndicatorAltBaro2: IndicatorAltBaro {
			selection = "nm_alt2";
			axis = "osa_nm_alt2";
		};
		class IndicatorSpeed2: IndicatorSpeed {
			selection = "mph2";
			axis = "osa_mph2";
		};
		class IndicatorVertSpeed2: IndicatorVertSpeed {
			selection = "vert_speed2";
			axis = "osa_vert_speed2";
		};
		class IndicatorRPM2: IndicatorRPM {
			selection = "rpm2";
			axis = "osa_rpm2";
		};
		class Reflectors {
			class Left {
				color[] = {0.8,0.8,1.0,1.0};
				ambient[] = {0.07,0.07,0.07,1.0};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 0.5;
				brightness = 1.0;
			};
			class Right {
				color[] = {0.8,0.8,1.0,1.0};
				ambient[] = {0.07,0.07,0.07,1.0};
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
				size = 0.5;
				brightness = 1.0;
			};
		};
	};
	class CarrierW: BigShip {
		vehicleClass = "Armored";
		scope = 2;
		crew = "SoldierWB";
		side = 1;
		displayName = "$STR_DN_LST";
		model = "newport";
		picture = "im113";
		accuracy = 0.5;
		maxSpeed = 50;
		transportSoldier = 50;
		class TransportMagazines {};
		transportAmmo = 10000000;
		transportVehiclesCount = 15;
		cost = 200000000;
		armor = 10000;
		weapons[] = {};
		magazines[] = {};
	};
	class BoatE: SmallShip {
		vehicleClass = "Armored";
		displayName = "$STR_DN_BOAT";
		accuracy = 0.5;
		scope = 2;
		crew = "SoldierEB";
		model = "hrl";
		picture = "ihrl";
		side = 0;
		maxSpeed = 60;
		driverAction = "ManActHRLDriver";
		gunnerAction = "ManActHRLGunner";
		cargoAction[] = {"ManActCargo"};
		gunnerOpticsModel = "optika_empty";
		transportSoldier = 10;
		class TransportMagazines {
			class _xx_AK74 {
				magazine = "AK74";
				count = "30*1";
			};
			class _xx_PK {
				magazine = "PK";
				count = "5*1";
			};
			class _xx_HandGrenade {
				magazine = "HandGrenade";
				count = "10*1";
			};
			class _xx_SVDDragunov {
				magazine = "SVDDragunov";
				count = "10*1";
			};
			class _xx_RPGLauncher {
				magazine = "RPGLauncher";
				count = "3*1";
			};
			class _xx_GrenadeLauncher {
				magazine = "GrenadeLauncher";
				count = "3*1";
			};
		};
		cost = 100000;
		armor = 100;
		class Turret: TurretBase {
			soundServo[] = {"",0.01,1.0};
			minElev = -5;
			maxElev = 20;
			minTurn = 90;
			maxTurn = 270;
		};
		class ViewOptics: ViewOpticsBase {
			initFov = 0.3;
			minFov = 0.17;
			maxFov = 0.35;
			initAngleY = 180;
			minAngleY = 90;
			maxAngleY = 270;
		};
		class ViewGunner: ViewGunnerBase {
			initAngleY = 180;
			minAngleY = 180;
			maxAngleY = 180;
			initAngleX = 0;
			minAngleX = -15;
			maxAngleX = 25;
		};
	};
	class TruckV3SG: Truck {
		scope = 2;
		crew = "SoldierGB";
		picture = "iv3s";
		icon = "truck";
		side = 2;
		displayName = "$STR_DN_PV3S";
		accuracy = 0.3;
		maxSpeed = 75;
		transportSoldier = 11;
		class TransportMagazines {
			class _xx_AK47 {
				magazine = "AK47";
				count = "30*1";
			};
			class _xx_HandGrenade {
				magazine = "HandGrenade";
				count = "10*1";
			};
			class _xx_PK {
				magazine = "PK";
				count = "5*1";
			};
			class _xx_LAWLauncher {
				magazine = "LAWLauncher";
				count = "3*1";
			};
			class _xx_GrenadeLauncher {
				magazine = "GrenadeLauncher";
				count = "3*1";
			};
		};
		transportAmmo = 0;
		transportRepair = 0;
		turnCoef = 6.0;
		cost = 20000;
		armor = 30;
		model = "v3s";
		hiddenSelections[] = {"ammo"};
		initCargoAngleY = 185;
		soundEngine[] = {"vehicles\dieseltruckloop1",0.05623413,1};
		weapons[] = {};
		magazines[] = {};
		driverAction = "ManActV3SDriver";
		cargoAction[] = {"ManActV3SCoDriver","ManActCargo"};
		cargoIsCoDriver[] = {1,0};
		typicalCargo[] = {"Soldier","Soldier","SoldierLAW","SoldierLAW"};
		threat[] = {1,1,0.3};
		class IndicatorSpeed {
			selection = "ukaz_rychlo";
			axis = "osa_rychlo";
			angle = -275;
			min = 0;
			max = "80 / 3.6";
		};
		class IndicatorRPM {
			selection = "ukaz_rpm";
			axis = "osa_rpm";
			angle = -275;
			min = 0;
			max = 1;
		};
	};
	class GJeep: Car {
		scope = 2;
		crew = "SoldierGB";
		picture = "ijeep";
		maxSpeed = 100;
		side = 2;
		displayName = "$STR_DN_JEEP";
		nameSound = "jeep";
		accuracy = 0.5;
		armor = 20;
		cost = 30000;
		fuelCapacity = 50;
		transportSoldier = 3;
		transportAmmo = 0;
		model = "gjeep";
		armorWheels = 0.12;
		driverAction = "ManActJeepDriver";
		cargoAction[] = {"ManActJeepCoDriver","ManActJeepCoDriverBack"};
		cargoIsCoDriver[] = {1,0};
		soundEngine[] = {"Vehicles\jeeploop",0.099999994,1};
		typicalCargo[] = {"Soldier","SoldierLAW"};
		class IndicatorSpeed {
			selection = "ukaz_rychlo";
			axis = "osa_rychlo";
			angle = -240;
			min = 0;
			max = 40;
		};
		class IndicatorRPM {
			selection = "ukaz_rpm";
			axis = "osa_rpm";
			angle = -240;
			min = 0;
			max = 1;
		};
	};
	class TruckV3SCivil: TruckV3SG {
		side = 3;
		crew = "Civilian";
		displayName = "$STR_DN_PV3S_CIVIL";
		model = "v3scivil";
	};
	class PaperCar: Car {
		scope = 1;
		picture = "itruck5t";
		icon = "truck";
		displayName = "$STR_DN_PAPER_CAR";
		model = "papAuto";
		class Reflectors {};
	};
	class TruckV3SGRefuel: TruckV3SG {
		picture = "iv3sfuel";
		vehicleClass = "Support";
		icon = "Fuel_move";
		displayName = "$STR_DN_PV3S_FUEL";
		model = "v3sfuel";
		transportSoldier = 1;
		hiddenSelections[] = {};
		typicalCargo[] = {};
	};
	class TruckV3SGRepair: TruckV3SG {
		picture = "iv3srepair";
		vehicleClass = "Support";
		icon = "Repair_move";
		displayName = "$STR_DN_PV3S_REPAIR";
		model = "v3srepair";
		transportSoldier = 1;
		hiddenSelections[] = {};
		typicalCargo[] = {};
	};
	class TruckV3SGReammo: TruckV3SG {
		vehicleClass = "Support";
		icon = "Ammo_move";
		displayName = "$STR_DN_PV3S_AMMO";
		transportSoldier = 1;
		hiddenSelections[] = {};
		typicalCargo[] = {};
	};
	class UAZG: Car {
		scope = 2;
		crew = "SoldierGB";
		side = 2;
		displayName = "$STR_DN_UAZG";
		nameSound = "UAZ";
		accuracy = 0.5;
		transportSoldier = 3;
		transportAmmo = 0;
		cost = 25000;
		armor = 20;
		model = "guaz";
		picture = "iuaz";
		weapons[] = {};
		magazines[] = {};
		typicalCargo[] = {"Soldier","SoldierLAW"};
		threat[] = {0.7,0.7,0.2};
		soundEngine[] = {"Vehicles\uazloop",0.031622775,1.25};
		driverAction = "ManActUAZDriver";
		cargoAction[] = {"ManActUazCoDriver","ManActCargo"};
		cargoIsCoDriver[] = {1,0};
		class ViewPilot: ViewPilotBase {
			initAngleX = 10;
		};
	};
	class SGUAZG: UAZG {
		vehicleClass = "Support";
		displayName = "$STR_DN_UAZG";
		model = "sguaz";
		transportSoldier = 2;
		attendant = 1;
		cargoAction[] = {"ManActM113Injured","ManActCargo"};
		cargoIsCoDriver[] = {0,0};
	};
	class SoldierGB: Soldier {
		vehicleClass = "Men";
		scope = 2;
		model = "MC vojakG2";
		hiddenSelections[] = {"medic"};
		moves = "CfgMovesMC";
		displayName = "$STR_DN_SOLDIER";
		side = 2;
		cost = 10000;
		accuracy = 0.7;
		weapons[] = {"AK47CZ","Throw","Put"};
		magazines[] = {"AK47","AK47","AK47","AK47","HandGrenade","HandGrenade","HandGrenade","HandGrenade","HandGrenade","HandGrenade"};
	};
	class SoldierGMedic: SoldierGB {
		accuracy = 1000;
		picture = "\misc\medik.paa";
		cost = 60000;
		displayName = "$STR_DN_MEDIC";
		weaponSlots = "1	 + 4 * 		256	 + 	4096	 + 	2	 + 4*	32";
		attendant = 1;
		weapons[] = {"AK47CZ","Throw","Put"};
		magazines[] = {"AK47","AK47","AK47","AK47"};
		nameSound = "medic";
		hiddenSelections[] = {};
	};
	class SoldierGCrew: SoldierGB {
		nameSound = "crew";
		accuracy = 1000;
		model = "MC crewg.p3d";
		weapons[] = {"AK47CZ","NVGoggles","Throw","Put"};
		displayName = "$STR_DN_CREW";
	};
	class SoldierGPilot: SoldierGB {
		nameSound = "pilot";
		accuracy = 1000;
		model = "MC vojakG3";
		weapons[] = {"AK47CZ","NVGoggles","Throw","Put"};
		displayName = "$STR_DN_PILOT";
	};
	class SoldierGG: SoldierGB {
		displayName = "$STR_DN_GRENADIER";
		cost = 15000;
		accuracy = 1000;
		weapons[] = {"AK47GrenadeLauncher","Throw","Put"};
		magazines[] = {"AK47","AK47","AK47","AK47","GrenadeLauncher","GrenadeLauncher","GrenadeLauncher"};
	};
	class SoldierGNOG: SoldierGB {
		scope = 1;
	};
	class SoldierG: SoldierGG {
		scope = 1;
	};
	class SoldierGMG: SoldierGB {
		nameSound = "machineGunner";
		displayName = "$STR_DN_MGUNNER";
		cost = 15000;
		model = "MC vojakG3";
		accuracy = 1.5;
		weapons[] = {"PK","Throw","Put"};
		magazines[] = {"PK","PK","PK","PK","PK"};
		threat[] = {1,0.1,0.8};
	};
	class SoldierGLAW: SoldierGB {
		nameSound = "missileSoldier";
		displayName = "$STR_DN_LAW_SOLDIER";
		model = "MC vojakG2";
		cost = 30000;
		accuracy = 1.5;
		weapons[] = {"AK47CZ","RPGLauncher","Throw","Put"};
		magazines[] = {"AK47","AK47","AK47","AK47","RPGLauncher","RPGLauncher","RPGLauncher"};
		nightVision = 1;
		threat[] = {1,0.9,0.1};
	};
	class SoldierGAT: SoldierGLAW {
		nameSound = "missileSoldier";
		displayName = "$STR_DN_AT4_SOLDIER";
		model = "MC vojakG2";
		cost = 30000;
		accuracy = 1.5;
		weapons[] = {"AK47CZ","AT4Launcher","Throw","Put"};
		magazines[] = {"AK47","AK47","AK47","AK47","AT4Launcher"};
		nightVision = 1;
		threat[] = {1,0.9,0.1};
	};
	class SoldierGAA: SoldierGLAW {
		displayName = "$STR_DN_AA_SOLDIER";
		nameSound = "missileSoldier";
		accuracy = 1.5;
		weapons[] = {"AK47CZ","9K32Launcher","Throw","Put"};
		magazines[] = {"AK47","AK47","AK47","AK47","9K32Launcher"};
		threat[] = {1,0.5,0.9};
	};
	class OfficerG: SoldierGB {
		nameSound = "officer";
		scope = 2;
		model = "mc vojakgo2.p3d";
		picture = "\misc\frcky.paa";
		displayName = "$STR_DN_OFFICER";
		accuracy = 2.0;
		cost = 500000;
		nightVision = 1;
		weapons[] = {"AK47","Binocular","Throw","Put"};
		magazines[] = {"AK47","AK47","AK47","AK47","HandGrenade","HandGrenade","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
	};
	class OfficerGNight: SoldierGB {
		nameSound = "officer";
		scope = 2;
		model = "mc vojakgo2.p3d";
		picture = "\misc\frcky.paa";
		displayName = "$STR_DN_OFFICERNIGHT";
		accuracy = 2.0;
		cost = 500000;
		nightVision = 1;
		weapons[] = {"AK47GrenadeLauncher","Binocular","NVGoggles","Throw","Put"};
		magazines[] = {"AK47","AK47","AK47","AK47","HandGrenade","HandGrenade","HandGrenade","Flare","Flare","Flare"};
	};
	class SoldierGFakeE: SoldierEB {
		model = "MC vojakE2";
		moves = "CfgMovesMC";
		vehicleClass = "Men";
		scope = 1;
		side = 2;
		accuracy = 2.0;
		displayName = "$STR_DN_SOLDIERFAKE";
		weapons[] = {"AK74","Throw","Put"};
		magazines[] = {"AK74","AK74","AK74","AK74","HandGrenade","HandGrenade","HandGrenade","HandGrenade","HandGrenade","HandGrenade"};
		cost = 40000;
	};
	class SoldierGFakeC: Civilian {
		scope = 1;
		side = 2;
		accuracy = 2.0;
		displayName = "$STR_DN_CIVILFAKE";
		weaponSlots = "1	 + 	16	 + 2 * 	4096	 + 6 * 		256	 + 	2	 + 4*	32";
		weapons[] = {"AK74","Throw","Put"};
		magazines[] = {"AK74","AK74","AK74","AK74","HandGrenade","HandGrenade"};
		cost = 40000;
	};
	class SoldierGFakeC2: Civilian2 {
		scope = 1;
		side = 2;
		accuracy = 2.0;
		displayName = "$STR_DN_CIVILFAKE";
		weaponSlots = "1	 + 	16	 + 2 * 	4096	 + 6 * 		256	 + 	2	 + 4*	32";
		weapons[] = {"AK74","Throw","Put"};
		magazines[] = {"AK74","AK74","AK74","AK74","HandGrenade","HandGrenade"};
		cost = 40000;
	};
	class T55G: Tank {
		picture = "it55";
		crew = "SoldierGCrew";
		scope = 2;
		side = 2;
		displayName = "$STR_DN_T55";
		nameSound = "t55";
		accuracy = 0.7;
		maxSpeed = 50;
		armor = 300;
		cost = 150000;
		driverAction = "ManActT55DriverOut";
		gunnerAction = "ManActT55GunnerOut";
		commanderAction = "ManActT55CommanderOut";
		driverInAction = "ManActT55Driver";
		gunnerInAction = "ManActT55Gunner";
		commanderInAction = "ManActT55Commander";
		model = "t55";
		weapons[] = {"Gun105","MachineGun7_6"};
		magazines[] = {"Heat105","Shell105","MachineGun7_6"};
		type = 1;
		threat[] = {1,1,0.2};
		soundEnviron[] = {"Vehicles\OldRolling_Treads1",0.031622775,0.7};
		soundEngine[] = {"Vehicles\T55Sound",0.031622775,1};
		commanderOpticsModel = "optika_tanke_auxiliary";
		class Reflectors {
			class Reflector {
				color[] = {0.9,0.8,0.8,1.0};
				ambient[] = {0.1,0.1,0.1,1.0};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 0.5;
				brightness = 0.25;
			};
		};
		class IndicatorSpeed {
			selection = "ukaz_rychlo";
			axis = "osa_rychlo";
			angle = -270;
			min = 0;
			max = "100 / 3.6";
		};
		class IndicatorSpeed2 {
			selection = "ukaz_rychlo2";
			axis = "osa_rychlo2";
			angle = -270;
			min = 0;
			max = "100 / 3.6";
		};
		class IndicatorRPM {
			selection = "ukaz_rpm";
			axis = "osa_rpm";
			angle = -290;
			min = 0;
			max = 1;
		};
	};
	class Static: All {
		reversed = 0;
		hasDriver = 0;
		icon = "Unknown_object";
		displayName = "$STR_DN_UNKNOWN";
		nameSound = "target";
		accuracy = 0.005;
		simulation = "house";
		cost = 0;
		picture = "ivojak";
		weapons[] = {};
		magazines[] = {};
		type = 1;
		threat[] = {0.0,0.0,0.0};
		maxSpeed = 0;
		coefInside = 2;
		coefInsideHeur = 4.3;
	};
	class Fortress: Static {
		displayName = "$STR_DN_BUNKER";
		nameSound = "Bunker";
		armor = 1000;
		cost = 1000000;
		accuracy = 0.2;
	};
	class Building: Static {
		displayName = "$STR_DN_BUILDING";
		nameSound = "building";
		armor = 150;
		accuracy = 0.1;
	};
	class NonStrategic: Building {
		side = 3;
		ladders[] = {};
	};
	class Strategic: Building {
		side = 3;
		armor = 250;
		ladders[] = {};
	};
	class Thing: All {
		reversed = 0;
		animated = 0;
		icon = "Unknown_object";
		vehicleClass = "Objects";
		displayName = "$STR_DN_UNKNOWN";
		nameSound = "target";
		accuracy = 0.005;
		simulation = "thing";
		side = 3;
		submerged = 0;
		submergeSpeed = 0;
		timeToLive = 1e+010;
		disappearAtContact = 0;
		hasDriver = 0;
		picture = "ivojak";
		weapons[] = {};
		magazines[] = {};
		type = 1;
		threat[] = {0.0,0.0,0.0};
		maxSpeed = 0;
	};
	class ThingEffect: Thing {
		scope = 1;
		simulation = "thingeffect";
		irTarget = 0;
		submerged = -0.5;
		submergeSpeed = 0.25;
		timeToLive = 20;
	};
	class FxExploGround1: ThingEffect {
		model = "sutr2";
		displayName = "$STR_DN_FX_EXPLO_GROUND_1";
	};
	class FxExploGround2: ThingEffect {
		model = "sutr3";
		displayName = "$STR_DN_FX_EXPLO_GROUND_2";
	};
	class FxExploArmor1: ThingEffect {
		model = "kusplechu";
		displayName = "Internal: FxExploArmor1";
	};
	class FxExploArmor2: ThingEffect {
		model = "kusplechu2";
		displayName = "Internal: FxExploArmor2";
	};
	class FxExploArmor3: ThingEffect {
		model = "ohorelavec";
		displayName = "Internal: FxExploArmor3";
	};
	class FxExploArmor4: ThingEffect {
		model = "strepina";
		displayName = "Internal: FxExploArmor4";
	};
	class FxCartridge: ThingEffect {
		model = "nabojnice";
		displayName = "$STR_DN_FX_CARTRIDGE";
		submerged = 0;
		submergeSpeed = 0;
		timeToLive = 5;
		disappearAtContact = 1;
	};
	class ReammoBox: Strategic {
		animated = 0;
		scope = 1;
		vehicleClass = "Ammo";
		icon = "Ammo_move";
		model = "hromada_beden";
		displayName = "$STR_DN_AMMO_CRATES";
		accuracy = 0.2;
		typicalCargo[] = {};
		destrType = "DestructEngine";
		class TransportMagazines {
			class _xx_M16 {
				magazine = "M16";
				count = 100;
			};
			class _xx_AK47 {
				magazine = "AK47";
				count = 100;
			};
			class _xx_AK74 {
				magazine = "AK74";
				count = 100;
			};
			class _xx_M60 {
				magazine = "M60";
				count = 50;
			};
			class _xx_HandGrenade {
				magazine = "HandGrenade";
				count = 30;
			};
			class _xx_M21 {
				magazine = "M21";
				count = 50;
			};
			class _xx_LAWLauncher {
				magazine = "LAWLauncher";
				count = 4;
			};
			class _xx_RPGLauncher {
				magazine = "RPGLauncher";
				count = 4;
			};
			class _xx_GrenadeLauncher {
				magazine = "GrenadeLauncher";
				count = 20;
			};
		};
		transportMaxWeapons = 500;
		transportMaxMagazines = 2000;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		cost = 0;
		armor = 200;
		mapSize = 2.6;
	};
	class ReammoBoxWest: ReammoBox {
		scope = 2;
		accuracy = 1000;
		displayName = "$STR_DN_AMMO_CRATES_WEST";
		class TransportMagazines {
			class _xx_M16 {
				magazine = "M16";
				count = "30*1";
			};
			class _xx_M60 {
				magazine = "M60";
				count = "5*1";
			};
			class _xx_HandGrenade {
				magazine = "HandGrenade";
				count = "10*1";
			};
			class _xx_M21 {
				magazine = "M21";
				count = "10*1";
			};
			class _xx_LAWLauncher {
				magazine = "LAWLauncher";
				count = "3*1";
			};
			class _xx_GrenadeLauncher {
				magazine = "GrenadeLauncher";
				count = "3*1";
			};
		};
	};
	class ReammoBoxEast: ReammoBox {
		scope = 2;
		accuracy = 1000;
		displayName = "$STR_DN_AMMO_CRATES_EAST";
		class TransportMagazines {
			class _xx_AK74 {
				magazine = "AK74";
				count = "30*1";
			};
			class _xx_PK {
				magazine = "PK";
				count = "5*1";
			};
			class _xx_HandGrenade {
				magazine = "HandGrenade";
				count = "10*1";
			};
			class _xx_SVDDragunov {
				magazine = "SVDDragunov";
				count = "10*1";
			};
			class _xx_RPGLauncher {
				magazine = "RPGLauncher";
				count = "3*1";
			};
			class _xx_GrenadeLauncher {
				magazine = "GrenadeLauncher";
				count = "3*1";
			};
		};
	};
	class ReammoBoxGuer: ReammoBox {
		scope = 2;
		accuracy = 1000;
		displayName = "$STR_DN_AMMO_CRATES_RES";
		class TransportMagazines {
			class _xx_AK47 {
				magazine = "AK47";
				count = "30*1";
			};
			class _xx_HandGrenade {
				magazine = "HandGrenade";
				count = "10*1";
			};
			class _xx_PK {
				magazine = "PK";
				count = "5*1";
			};
			class _xx_LAWLauncher {
				magazine = "LAWLauncher";
				count = "3*1";
			};
			class _xx_GrenadeLauncher {
				magazine = "GrenadeLauncher";
				count = "3*1";
			};
		};
	};
	class WeaponHolder: ReammoBox {
		scope = 1;
		model = "\misc\dummyweapon.p3d";
		accuracy = 0.2;
		class TransportMagazines {};
		forceSupply = 1;
		showWeaponCargo = 1;
		transportMaxMagazines = 1e+009;
		transportMaxWeapons = 1e+009;
		displayName = "";
	};
	class SecondaryWeaponHolder: WeaponHolder {
		model = "\misc\dummyweapon2.p3d";
	};
	class HeavyReammoBox: Strategic {
		animated = 0;
		scope = 1;
		vehicleClass = "Ammo";
		icon = "Ammo_move";
		model = "bedna_ammo";
		displayName = "$STR_DN_AMMO_CRATES_WEST2";
		accuracy = 1000;
		typicalCargo[] = {};
		destrType = "DestructEngine";
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		cost = 0;
		armor = 200;
		mapSize = 2.6;
		transportMaxWeapons = 500;
		transportMaxMagazines = 2000;
	};
	class HeavyReammoBoxWest: HeavyReammoBox {
		scope = 2;
		accuracy = 1000;
		displayName = "$STR_DN_AMMO_CRATES_WEST2";
		class TransportMagazines {
			class M16 {
				magazine = "M16";
				count = 20;
			};
			class HandGrenade {
				magazine = "HandGrenade";
				count = 10;
			};
			class GrenadeLauncher {
				magazine = "GrenadeLauncher";
				count = 10;
			};
			class LAWLauncher {
				magazine = "LAWLauncher";
				count = 8;
			};
			class AALauncher {
				magazine = "AALauncher";
				count = 3;
			};
			class Mortar {
				magazine = "Mortar";
				count = 6;
			};
			class PipeBomb {
				magazine = "PipeBomb";
				count = 6;
			};
			class Mine {
				magazine = "Mine";
				count = 6;
			};
			class CarlGustavLauncher {
				magazine = "CarlGustavLauncher";
				count = 3;
			};
		};
	};
	class HeavyReammoBoxEast: HeavyReammoBox {
		scope = 2;
		accuracy = 1000;
		displayName = "$STR_DN_AMMO_CRATES_EAST2";
		class TransportMagazines {
			class AK74 {
				magazine = "AK74";
				count = 20;
			};
			class HandGrenade {
				magazine = "HandGrenade";
				count = 10;
			};
			class GrenadeLauncher {
				magazine = "GrenadeLauncher";
				count = 10;
			};
			class RPGLauncher {
				magazine = "RPGLauncher";
				count = 8;
			};
			class 9K32Launcher {
				magazine = "9K32Launcher";
				count = 3;
			};
			class PipeBomb {
				magazine = "PipeBomb";
				count = 6;
			};
			class Mine {
				magazine = "Mine";
				count = 6;
			};
			class AT4Launcher {
				magazine = "AT4Launcher";
				count = 3;
			};
		};
	};
	class HeavyReammoBoxRes: HeavyReammoBox {
		scope = 2;
		accuracy = 1000;
		displayName = "$STR_DN_AMMO_CRATES_RES2";
		class TransportMagazines {
			class AK47 {
				magazine = "AK47";
				count = 20;
			};
			class HandGrenade {
				magazine = "HandGrenade";
				count = 10;
			};
			class GrenadeLauncher {
				magazine = "GrenadeLauncher";
				count = 10;
			};
			class RPGLauncher {
				magazine = "RPGLauncher";
				count = 8;
			};
			class 9K32Launcher {
				magazine = "9K32Launcher";
				count = 3;
			};
			class PipeBomb {
				magazine = "PipeBomb";
				count = 6;
			};
			class Mine {
				magazine = "Mine";
				count = 6;
			};
			class AT4Launcher {
				magazine = "AT4Launcher";
				count = 3;
			};
		};
	};
	class MachineGunBox: Strategic {
		animated = 0;
		scope = 1;
		vehicleClass = "Ammo";
		icon = "Ammo_move";
		model = "hromada_beden";
		displayName = "$STR_DN_MACHINE_GUN";
		accuracy = 0.2;
		typicalCargo[] = {};
		destrType = "DestructEngine";
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		class TransportWeapons {
			class MachineGun {
				weapon = "M60";
				count = 1;
			};
		};
		class TransportMagazines {
			class MachineGun {
				magazine = "M60";
				count = 3;
			};
		};
		transportMaxWeapons = 1;
		transportMaxMagazines = 3;
		cost = 0;
		armor = 20;
		mapSize = 2.6;
	};
	class FlagCarrier: Strategic {
		scope = 2;
		vehicleClass = "Objects";
		icon = "vlajka";
		displayName = "$STR_DN_FLAG";
		simulation = "flagcarrier";
		model = "vlajkstozar.p3d";
		mapSize = 5;
	};
	class Danger: FlagCarrier {
		model = "Danger!.p3d";
		displayName = "$STR_DN_DANGER";
		mapSize = 0.7;
		accuracy = 0.2;
		destrType = "DestructBuilding";
	};
	class Fire: NonStrategic {
		scope = 2;
		simulation = "fire";
		sound = "Fire";
		vehicleClass = "Objects";
		icon = "Unknown_object";
		model = "ohniste";
		displayName = "$STR_DN_FIRE";
		accuracy = 0.2;
		typicalCargo[] = {};
		mapSize = 1.2;
		cost = 0;
		armor = 20;
		class Smoke {
			interval = 0.01;
			cloudletDuration = 0.9;
			cloudletAnimPeriod = 1.0;
			cloudletSize = 0.1;
			cloudletAlpha = 0.8;
			cloudletGrowUp = 0.4;
			cloudletFadeIn = 0.0;
			cloudletFadeOut = 5.0;
			cloudletAccY = -0.1;
			cloudletMinYSpeed = 0.3;
			cloudletMaxYSpeed = 1.5;
			cloudletShape = "cl_basic";
			cloudletColor[] = {1,1,1,0};
			initT = 1000;
			deltaT = -500;
			class Table {
				class T1 {
					maxT = 0;
					color[] = {0.8,0.8,0.8,1};
				};
				class T2 {
					maxT = 900;
					color[] = {0.3,0.3,0.3,1};
				};
				class T3 {
					maxT = 1000;
					color[] = {1,0.5,0,0.5};
				};
			};
			density = 0.5;
			size = 0.1;
			initYSpeed = 1.7;
			timeToLive = 1e+020;
			in = 0.0;
			out = 0.0;
		};
		class Light {
			color[] = {1.0,0.5,0.0,1.0};
			ambient[] = {0.3,0.15,0.0,1.0};
			brightness = 0.08;
			shape = "koulesvetlo";
			size = 0.3;
			position = "ohniste";
		};
	};
	class Target: Strategic {
		scope = 2;
		destrType = "DestructTree";
		side = 3;
		icon = "Unknown_object";
		model = "terc";
		accuracy = 0.2;
		cost = 0;
		armor = 10;
	};
	class TargetE: Target {
		scope = 2;
		vehicleClass = "Objects";
		displayName = "$STR_DN_TARGET_EAST";
		accuracy = 1000;
		mapSize = 0.8;
	};
	class Camp: Strategic {
		scope = 2;
		vehicleClass = "Objects";
		icon = "Unknown_object";
		model = "stan";
		displayName = "$STR_DN_TENT";
		accuracy = 0.2;
		typicalCargo[] = {};
		destrType = "DestructTent";
		irTarget = 0;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		cost = 0;
		armor = 20;
		mapSize = 6.4;
	};
	class Cube: Camp {
		scope = 1;
		model = "krychlicka";
		displayName = "$STR_DN_DEBUG_CUBE";
	};
	class Fortress1: Strategic {
		scope = 2;
		vehicleClass = "Objects";
		icon = "Unknown_object";
		model = "fortress1";
		displayName = "$STR_DN_FORTRESS_1";
		accuracy = 0.2;
		typicalCargo[] = {};
		destrType = "DestructBuilding";
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		mapSize = 11;
		cost = 0;
		armor = 800;
	};
	class Fortress2: Fortress1 {
		model = "fortress2";
		displayName = "$STR_DN_FORTRESS_2";
	};
	class CampEmpty: Camp {
		scope = 2;
		model = "stan_inside";
		displayName = "$STR_DN_TENT_OPEN";
		accuracy = 1000;
	};
	class CampEast: Camp {
		scope = 2;
		model = "stan_east";
		displayName = "$STR_DN_TENT_EAST";
		accuracy = 1000;
	};
	class CampEastC: Camp {
		scope = 2;
		model = "stan_eastC";
		displayName = "$STR_DN_TENT_EAST_C";
		accuracy = 1000;
	};
	class Grave: Camp {
		scope = 2;
		model = "hrobecek.p3d";
		displayName = "$STR_DN_GRAVE";
		accuracy = 1000;
	};
	class GraveCross1: Camp {
		scope = 2;
		model = "hrobecek_krizek1.p3d";
		displayName = "$STR_DN_GRAVE_CROSS_1";
		accuracy = 1000;
	};
	class GraveCross2: Camp {
		scope = 2;
		model = "hrobecek_krizek2.p3d";
		displayName = "$STR_DN_GRAVE_CROSS_2";
		accuracy = 1000;
	};
	class GraveCrossHelmet: Camp {
		scope = 2;
		model = "hrobecek_krizekhelma.p3d";
		displayName = "$STR_DN_GRAVE_CROSS_HELMET";
		accuracy = 1000;
	};
	class ACamp: Camp {
		scope = 2;
		model = "astan";
		displayName = "$STR_DN_TENT_A";
		accuracy = 1000;
		mapSize = 2.6;
	};
	class MASH: Camp {
		scope = 2;
		model = "mash";
		displayName = "$STR_DN_MASH";
		accuracy = 0.3;
		attendant = 1;
		mapSize = 6.4;
	};
	class Fence: NonStrategic {
		scope = 2;
		vehicleClass = "Objects";
		icon = "Unknown_object";
		model = "pytle_BSL";
		displayName = "$STR_DN_FENCE";
		accuracy = 0.2;
		typicalCargo[] = {};
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		cost = 0;
		armor = 200;
		mapSize = 3.3;
	};
	class FenceWood: Fence {
		model = "pytle";
		displayName = "$STR_DN_FENCE_WOOD";
		mapSize = 2.4;
		accuracy = 1000;
	};
	class Wire: Fence {
		scope = 2;
		model = "Barbedwire.p3d";
		displayName = "$STR_DN_WIRE";
		accuracy = 0.3;
		mapSize = 5.5;
	};
	class WireFence: Fence {
		scope = 2;
		model = "plot_provizorni.p3d";
		displayName = "$STR_DN_FENCE_WIRE";
		accuracy = 0.3;
		mapSize = 5.5;
	};
	class BarrelHelper: Thing {
		scope = 0;
		simulation = "thing";
		mapSize = 0.7;
		displayName = "$STR_DN_BARREL";
		accuracy = 0.2;
		transportFuel = 100;
		destrType = "DestructEngine";
	};
	class BarrelBase: BarrelHelper {
		accuracy = 1000;
		armor = 100;
		cost = 0;
	};
	class Barrels: BarrelBase {
		scope = 2;
		model = "Barels.p3d";
		displayName = "$STR_DN_BARRELS";
		transportFuel = 400;
	};
	class Barrel1: BarrelBase {
		scope = 2;
		model = "Barel1.p3d";
		displayName = "$STR_DN_BARREL_RED";
	};
	class Barrel2: BarrelBase {
		scope = 2;
		model = "Barel2.p3d";
		displayName = "$STR_DN_BARREL_BROWN";
	};
	class Barrel3: BarrelBase {
		scope = 2;
		model = "Barel4.p3d";
		displayName = "$STR_DN_BARREL_WHITE";
	};
	class Barrel4: BarrelBase {
		scope = 2;
		model = "Barel3.p3d";
		displayName = "$STR_DN_BARREL_WHITE";
	};
	class Table: Thing {
		scope = 2;
		simulation = "thing";
		model = "stulsuplik_proxy.p3d";
		displayName = "$STR_DN_TABLE";
		transportFuel = 0;
		mapSize = 0.7;
		accuracy = 0.2;
		destrType = "DestructBuilding";
		cost = 0;
	};
	class Tablemap: Table {
		scope = 2;
		simulation = "thing";
		model = "stulsuplikmapa.p3d";
		displayName = "$STR_DN_TABLEMAP";
		transportFuel = 0;
		mapSize = 0.7;
		accuracy = 0.2;
		destrType = "DestructBuilding";
	};
	class Chair: Table {
		model = "Zidle.p3d";
		displayName = "$STR_DN_CHAIR";
		mapSize = 0.7;
		accuracy = 0.2;
		destrType = "DestructBuilding";
	};
	class Phone: Table {
		model = "hangar_telefon.p3d";
		displayName = "$STR_DN_PHONEHANG";
		mapSize = 0.7;
		accuracy = 0.2;
		destrType = "DestructBuilding";
	};
	class PhoneBase: Table {
		scope = 1;
		model = "hangar_telefon_bez.p3d";
		displayName = "$STR_DN_PHONEBASE";
		mapSize = 0.7;
		accuracy = 0.2;
		destrType = "DestructBuilding";
	};
	class Camera1: Table {
		model = "betacam.p3d";
		displayName = "$STR_DN_CAMERA";
		mapSize = 0.7;
		accuracy = 0.2;
		destrType = "DestructBuilding";
	};
	class Computer: Table {
		model = "PC.p3d";
		displayName = "$STR_DN_COMPUTER";
		mapSize = 0.7;
		accuracy = 0.2;
		destrType = "DestructBuilding";
	};
	class ChairHangar: Table {
		model = "Hangar_zidle.p3d";
		displayName = "$STR_DN_CHAIR_HANGAR";
		mapSize = 0.7;
		accuracy = 0.2;
		destrType = "DestructBuilding";
	};
	class ChairX: Table {
		model = "zidle_x.p3d";
		displayName = "$STR_DN_CHAIR_X";
		mapSize = 0.7;
		accuracy = 0.2;
		destrType = "DestructBuilding";
	};
	class VideoTable: Table {
		model = "televizesvideem.p3d";
		displayName = "$STR_DN_VIDEO";
		mapSize = 0.7;
		accuracy = 0.2;
		destrType = "DestructBuilding";
	};
	class TablePub: Table {
		model = "stul_hospodax.p3d";
		displayName = "$STR_DN_TABLE_PUB";
		mapSize = 0.7;
		accuracy = 0.2;
		destrType = "DestructBuilding";
	};
	class Radio: Table {
		model = "radio.p3d";
		displayName = "$STR_DN_RADIO";
		mapSize = 0.7;
		accuracy = 0.2;
		destrType = "DestructBuilding";
	};
	class ChairSmall: Table {
		model = "Zidlicka.p3d";
		displayName = "$STR_DN_CHAIR_SMALL";
		mapSize = 0.7;
		accuracy = 0.2;
		destrType = "DestructBuilding";
	};
	class TestObject4: BarrelBase {
		scope = 1;
		model = "koule_10000.p3d";
		displayName = "$STR_DN_SPHERE_10000";
		coefInside = 1;
		coefInsideHeur = 1;
	};
	class Crawling: Camp {
		scope = 2;
		irTarget = 0;
		mapSize = 0.7;
		model = "podlejzacka.p3d";
		displayName = "$STR_DN_CRAWLING";
		accuracy = 0.3;
		transportFuel = 0;
		destrType = "DestructBuilding";
		coefInside = 0.5;
		coefInsideHeur = 0.8;
	};
	class ExcerciseTrack: Crawling {
		displayName = "$STR_DN_TRAINING_2";
		model = "prolejzacka.p3d";
	};
	class ExcerciseTrack2: Crawling {
		displayName = "$STR_DN_TRAINING_3";
		model = "prebehlavka.p3d";
	};
	class ExcerciseTrack3: Crawling {
		displayName = "$STR_DN_TRAINING_4";
		model = "obihacka.p3d";
	};
	class PaletaHelper: BarrelHelper {
		mapSize = 0.7;
		displayName = "$STR_DN_PALLET";
		accuracy = 0.2;
		transportFuel = 0;
		irTarget = 0;
	};
	class PaletaBase: PaletaHelper {
		accuracy = 1000;
		cost = 0;
	};
	class Paleta1: PaletaBase {
		scope = 2;
		model = "PaletaA.p3d";
		displayName = "$STR_DN_PALLET_A";
	};
	class Paleta2: PaletaBase {
		scope = 2;
		model = "PaletyC.p3d";
		displayName = "$STR_DN_PALLETS_C";
	};
	class JeepWreck1: Camp {
		scope = 2;
		mapSize = 0.7;
		model = "JeepT.p3d";
		displayName = "$STR_DN_JEEP_WRECK_1";
		accuracy = 0.3;
		transportFuel = 0;
		destrType = "DestructEngine";
	};
	class JeepWreck2: Camp {
		scope = 2;
		mapSize = 0.7;
		model = "JeepT_horeznacky.p3d";
		displayName = "$STR_DN_JEEP_WRECK_2";
		accuracy = 0.3;
		transportFuel = 0;
		destrType = "DestructEngine";
	};
	class JeepWreck3: Camp {
		scope = 2;
		mapSize = 0.7;
		model = "JeepT_Tanker.p3d";
		displayName = "$STR_DN_JEEP_WRECK_3";
		accuracy = 0.3;
		transportFuel = 0;
		destrType = "DestructEngine";
	};
	class M113Wreck: Camp {
		scope = 2;
		mapSize = 0.7;
		model = "M113T.p3d";
		displayName = "$STR_DN_M113_WRECK";
		accuracy = 0.3;
		transportFuel = 0;
		destrType = "DestructEngine";
	};
	class UralWreck: Camp {
		scope = 2;
		mapSize = 0.7;
		model = "UralT.p3d";
		displayName = "$STR_DN_URAL_WRECK";
		accuracy = 0.3;
		transportFuel = 0;
		destrType = "DestructEngine";
	};
	class Body: Camp {
		scope = 2;
		mapSize = 0.7;
		model = "Mrtvola_Army1.p3d";
		displayName = "$STR_DN_BODY";
		accuracy = 0.3;
		transportFuel = 0;
		destrType = "DestructEngine";
	};
	class Shed: Strategic {
		scope = 2;
		vehicleClass = "Objects";
		icon = "Unknown_object";
		model = "pristresek";
		displayName = "$STR_DN_SHED";
		accuracy = 0.2;
		typicalCargo[] = {};
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		mapSize = 9.8;
		cost = 0;
		armor = 200;
	};
	class Office: Shed {
		scope = 1;
		side = 3;
		vehicleClass = "Objects";
		icon = "Unknown_object";
		model = "office";
		displayName = "$STR_DN_OFFICE";
		simulation = "house";
		mapSize = 7.2;
	};
	class Barracks: Shed {
		scope = 1;
		side = 3;
		vehicleClass = "Objects";
		icon = "Unknown_object";
		model = "budova4_in";
		displayName = "$STR_DN_BARRACKS";
		simulation = "house";
		mapSize = 15.4;
	};
	class Hangar: Shed {
		scope = 1;
		side = 3;
		vehicleClass = "Objects";
		icon = "Unknown_object";
		model = "hangar_in";
		displayName = "$STR_DN_HANGAR";
		simulation = "house";
		mapSize = 27;
	};
	class Hangar_Hall: Shed {
		scope = 1;
		side = 3;
		vehicleClass = "Objects";
		icon = "Unknown_object";
		model = "HANGAR";
		displayName = "$STR_DN_HANGAR_HALL";
		simulation = "house";
		mapSize = 25;
	};
	class Hangar_Office: Shed {
		scope = 1;
		side = 3;
		vehicleClass = "Objects";
		icon = "Unknown_object";
		model = "HANGAR_kancl";
		displayName = "$STR_DN_HANGAR_OFFICE";
		simulation = "house";
		mapSize = 6;
	};
	class ShedSmall: Shed {
		model = "pristresek_mensi";
		displayName = "$STR_DN_SHED_SMALL";
		mapSize = 4.3;
		accuracy = 1000;
	};
	class Fountain: NonStrategic {
		animated = 0;
		scope = 2;
		model = "kasna";
		displayName = "$STR_DN_FOUNTAIN";
		simulation = "fountain";
		sound = "Fountain";
		animPeriod = 1.33;
		cost = 0;
	};
	class House: NonStrategic {
		animated = 0;
		scope = 1;
		model = "";
		displayName = "$STR_DN_HOUSE";
		nameSound = "house";
		accuracy = 0.2;
		cost = 0;
		ladders[] = {};
	};
	class Houseryb_domek: House {
		scope = 1;
		model = "ryb_domek";
	};
	class Housemajak: House {
		scope = 1;
		model = "majak";
	};
	class Houseplechbud: House {
		scope = 1;
		model = "plechbud";
	};
	class Housedeutshe_mini: House {
		scope = 1;
		model = "deutshe_mini";
	};
	class Housebouda2_vnitrek: House {
		scope = 1;
		model = "bouda2_vnitrek";
	};
	class Housedeutshe: House {
		scope = 1;
		model = "deutshe";
	};
	class Housedum_mesto: House {
		scope = 1;
		model = "dum_mesto";
	};
	class Housedum_mesto2: House {
		scope = 1;
		model = "dum_mesto2";
	};
	class Housedum_rasovna: House {
		scope = 1;
		model = "dum_rasovna";
	};
	class Housebouda2: House {
		scope = 1;
		model = "bouda2";
	};
	class Housebouda3: House {
		scope = 1;
		model = "bouda3";
	};
	class Housedumruina_mini: House {
		scope = 1;
		model = "dumruina_mini";
	};
	class Housedum_mesto3: House {
		scope = 1;
		model = "dum_mesto3";
	};
	class Housestodola_open: House {
		scope = 1;
		model = "stodola_open";
	};
	class Housestatek_kulna: House {
		scope = 1;
		model = "statek_kulna";
	};
	class Housedum_mesto2l: House {
		scope = 1;
		model = "dum_mesto2l";
	};
	class Housecihlovej_dum_mini: House {
		scope = 1;
		model = "cihlovej_dum_mini";
	};
	class Housebudova5: House {
		scope = 1;
		model = "budova5";
	};
	class Housedumruina: House {
		scope = 1;
		model = "dumruina";
	};
	class Housedum01: House {
		scope = 1;
		model = "dum01";
	};
	class Housecihlovej_dum: House {
		scope = 1;
		model = "cihlovej_dum";
	};
	class Housecihlovej_dum_in: House {
		scope = 1;
		model = "cihlovej_dum_in";
	};
	class Housebudova1: House {
		scope = 1;
		model = "budova1";
	};
	class Housebudova3: House {
		scope = 1;
		model = "budova3";
	};
	class Housebudova4: House {
		scope = 1;
		model = "budova4";
	};
	class Housebudova2: House {
		scope = 1;
		model = "budova2";
	};
	class Housegaraz: House {
		scope = 1;
		model = "garaz";
	};
	class Housegaraz_bez_tanku: House {
		scope = 1;
		model = "garaz_bez_tanku";
	};
	class Housegaraz_s_tankem: House {
		scope = 1;
		model = "garaz_s_tankem";
	};
	class Houserepair_center: House {
		scope = 1;
		model = "repair_center";
	};
	class Housedum02: House {
		scope = 1;
		model = "dum02";
	};
	class Houseafdum_mesto2: House {
		scope = 1;
		model = "afdum_mesto2";
	};
	class Househospoda_mesto: House {
		scope = 1;
		model = "hospoda_mesto";
	};
	class Housestanice: House {
		scope = 1;
		model = "stanice";
	};
	class Housedum_m2: House {
		scope = 1;
		model = "dum_m2";
	};
	class Housebouda1: House {
		scope = 1;
		model = "bouda1";
	};
	class Housestodola: House {
		scope = 1;
		model = "stodola";
	};
	class Housestatek_hl_bud: House {
		scope = 1;
		model = "statek_hl_bud";
	};
	class Househospital: House {
		scope = 1;
		model = "hospital";
	};
	class Housemesto_dum: House {
		scope = 1;
		model = "mesto_dum";
	};
	class Housedum_rasovna_in: House {
		scope = 1;
		model = "dum_rasovna_in";
	};
	class Househelfenburk: House {
		scope = 1;
		model = "helfenburk";
	};
	class Housedum_olezlina: House {
		scope = 1;
		model = "dum_olezlina";
	};
	class Houseafdum_mesto3: House {
		scope = 1;
		model = "afdum_mesto3";
	};
	class Houseafhospoda_mesto: House {
		scope = 1;
		model = "afhospoda_mesto";
	};
	class Housedulni_bs: House {
		scope = 1;
		model = "dulni_bs";
	};
	class Housekostel_trosky: House {
		scope = 1;
		model = "kostel_trosky";
	};
	class Houseafdum_mesto2l: House {
		scope = 1;
		model = "afdum_mesto2l";
	};
	class Housedum_mesto_in: House {
		scope = 1;
		model = "dum_mesto_in";
	};
	class Houseafbarabizna: House {
		scope = 1;
		model = "afbarabizna";
	};
	class Househruzdum: House {
		scope = 1;
		model = "hruzdum";
		ladders[] = {
			{ "start","end" }};
	};
	class Houseammostore2: House {
		scope = 1;
		model = "ammostore2";
		ladders[] = {
			{ "start","end" },
			{ "start1","end1" }};
	};
	class ViewTower: House {
		scope = 1;
		model = "hlaska";
		ladders[] = {
			{ "start","end" }};
	};
	class ViewTower2: House {
		scope = 1;
		model = "vez";
		ladders[] = {
			{ "start","end" }};
	};
	class Forest: NonStrategic {
		scope = 1;
		model = "";
		displayName = "$STR_DN_FOREST";
		nameSound = "forest";
		simulation = "forest";
		accuracy = 0.2;
		cost = 5000;
		coefInside = 1;
		coefInsideHeur = 0.25;
	};
	class ForestSkewed: Forest {
		animated = 0;
	};
	class Forest001: Forest {
		model = "les ctverec pruchozi";
	};
	class Forest001T1: ForestSkewed {
		model = "les ctverec pruchozi_T1";
	};
	class Forest001T2: ForestSkewed {
		model = "les ctverec pruchozi_T2";
	};
	class Forest002: Forest {
		model = "les trojuhelnik pruchozi";
	};
	class Forest003: Forest {
		model = "les_su_ctver_pruhozi";
	};
	class Forest003T1: ForestSkewed {
		model = "les_su_ctver_pruhozi_T1";
	};
	class Forest003T2: ForestSkewed {
		model = "les_su_ctver_pruhozi_T2";
	};
	class Forest004: Forest {
		model = "les_su_trojuhelnik";
	};
	class HeliH: NonStrategic {
		scope = 2;
		model = "Heli_H";
		displayName = "$STR_DN_HELI_H";
		vehicleClass = "Objects";
		icon = "Unknown_object";
		nameSound = "helipad";
		accuracy = 0.2;
		typicalCargo[] = {};
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		mapSize = 9.8;
		cost = 0;
		armor = 200;
	};
	class HeliHEmpty: HeliH {
		model = "empty";
		displayName = "$STR_DN_HELI_H_EMPTY";
		nameSound = "";
	};
	class FpLogo: Fence {
		scope = 1;
		model = "logofpfull.p3d";
		displayName = "$STR_DN_OF_LOGO";
		nameSound = "";
	};
	class TargetTraining: NonStrategic {
		nameSound = "target";
		model = "terc";
		side = 3;
		armor = 15;
		cost = 0;
		scope = 2;
		displayName = "$STR_DN_TARGET";
		accuracy = 0.25;
	};
	class TargetGrenade: TargetTraining {
		vehicleClass = "Objects";
		nameSound = "target";
		model = "drevtank";
		side = 3;
		armor = 60;
		cost = 0;
		scope = 2;
		displayName = "$STR_DN_ARMORED_TARGET";
		accuracy = 1000;
	};
	class Church: NonStrategic {
		scope = 1;
		displayName = "$STR_DN_CHURCH";
		accuracy = 0.25;
		simulation = "church";
	};
	class Church001: Church {
		scope = 2;
		model = "kostel";
		ladders[] = {
			{ "start","end" }};
	};
	class Church002: Church {
		scope = 2;
		model = "kostel2";
	};
	class Church003: Church {
		scope = 2;
		model = "kostel3";
	};
	class Chapel: NonStrategic {
		scope = 2;
		displayName = "$STR_DN_CHAPEL";
		accuracy = 0.25;
	};
	class Chapel001: Chapel {
		model = "kostelik";
	};
	class FuelStation: Strategic {
		icon = "Fuel_object";
		scope = 2;
		cost = 0;
		armor = 50;
		model = "fuelstation";
		displayName = "$STR_DN_FUEL_STATION";
		nameSound = "fuelstation";
		accuracy = 0.5;
		transportFuel = 50000;
		destrType = "DestructEngine";
	};
	class FuelStationNew: FuelStation {
		armor = 100;
		model = "fuelstation_new";
		displayName = "$STR_DN_FUEL_STATION_2";
		accuracy = 1000;
	};
	class FuelStationNew2: FuelStation {
		armor = 100;
		model = "fuelstation_army";
		displayName = "$STR_DN_FUEL_STATION_3";
		accuracy = 1000;
	};
	class Sound {
		scope = 0;
		side = -1;
		vehicleClass = "Sounds";
		icon = "vlajka";
		mapSize = 10;
	};
	class Owl: Sound {
		scope = 2;
		sound = "OwlSfx";
		displayName = "$STR_DN_OWL";
	};
	class Stream: Sound {
		scope = 2;
		sound = "StreamSfx";
		displayName = "$STR_DN_STREAM";
	};
	class Frog: Sound {
		scope = 2;
		sound = "FrogSfx";
		displayName = "$STR_DN_FROG";
	};
	class Frogs: Sound {
		scope = 2;
		sound = "FrogsSfx";
		displayName = "$STR_DN_FROGS";
	};
	class Alarm: Sound {
		scope = 2;
		sound = "AlarmSfx";
		displayName = "$STR_DN_ALARM";
	};
	class BirdSinging: Sound {
		scope = 2;
		sound = "BirdSingingSfx";
		displayName = "$STR_DN_BIRDSING";
	};
	class Crickets1: Sound {
		scope = 2;
		sound = "Cricket1Sfx";
		displayName = "$STR_DN_CRICKET1";
	};
	class Crickets2: Sound {
		scope = 2;
		sound = "Cricket2Sfx";
		displayName = "$STR_DN_CRICKET2";
	};
	class Crickets3: Sound {
		scope = 2;
		sound = "Cricket3Sfx";
		displayName = "$STR_DN_CRICKET3";
	};
	class Crickets4: Sound {
		scope = 2;
		sound = "CricketSfx";
		displayName = "$STR_DN_CRICKET4";
	};
	class Chicken: Sound {
		scope = 2;
		sound = "ChickenSfx";
		displayName = "$STR_DN_CHICKEN";
	};
	class Cock: Sound {
		scope = 2;
		sound = "CockSfx";
		displayName = "$STR_DN_COCK";
	};
	class Cow: Sound {
		scope = 2;
		sound = "CowSfx";
		displayName = "$STR_DN_COW";
	};
	class Crow: Sound {
		scope = 2;
		sound = "CrowSfx";
		displayName = "$STR_DN_CROW";
	};
	class Wolf: Sound {
		scope = 2;
		sound = "WolfSfx";
		displayName = "$STR_DN_WOLF";
	};
	class Dog: Sound {
		scope = 2;
		sound = "DogSfx";
		displayName = "$STR_DN_DOG";
	};
	class BadDog: Sound {
		scope = 2;
		sound = "BadDogSfx";
		displayName = "$STR_DN_BAD_DOG";
	};
	class SorrowDog: Sound {
		scope = 2;
		sound = "SorrowDogSfx";
		displayName = "$STR_DN_SORROW_DOG";
	};
	class LittleDog: Sound {
		scope = 2;
		sound = "LittleDogSfx";
		displayName = "$STR_DN_LITTLE_DOG";
	};
	class Music: Sound {
		scope = 2;
		sound = "FunMusicSfx";
		displayName = "$STR_DN_MUSIC";
	};
	class MineGeneric {
		scope = 0;
		side = -1;
		vehicleClass = "Mines";
		icon = "unknown_object";
		mapSize = 10;
	};
	class MineMine: MineGeneric {
		scope = 2;
		displayName = "$STR_DN_MINE";
		ammo = "Mine";
	};
};
class CfgCrew {
	drivers[] = {"driver","m113driver","m113driverout","m60driver","m60driverout","m1a1driver","m1a1driverout","bmpdriver","bmpdriverout","t72driver","t72driverout","t80driver","t80driverout","zsudriver","zsudriverout","tankdriver","pilot","uh60pilot","mi17pilot","mi24pilot","ah1pilot","a10pilot","traktorista","navy","jeepdriver","5tdriver","uazdriver","parasutista"};
	gunners[] = {"gunner","tankgunner","m113gunner","m113gunnerout","m60gunner","m60gunnerout","m1a1gunner","m1a1gunnerout","bmpgunner","bmpgunnerout","zsugunner","zsugunnerout","t72gunner","t72gunnerout","t80gunner","t80gunnerout","uh60copilot","mi17copilot","mi24gunner","uh60gunner","ah1gunner","ah1gunnerstat"};
	commanders[] = {"commander","tankcommander","tankcommandersit","m1a1commander","m1a1commanderout","m60commander","m60commanderout","bmpcommander","bmpcommanderout","zsucommander","zsucommanderout","t72commander","t72commanderout","t80commander","t80commanderout"};
	cargo[] = {"jeepcodriver","jeepcodriverback","5tcodriver","uazcodriver","m113medic","nemocnej","nemocnejstat","cargo","codriver","vojakw"};
};
class CfgNonAIVehicles {
	access = 1;
	class EmptyDetector {
		displayName = "$STR_DN_EMPTY";
		simulation = "detector";
		model = "empty.p3d";
		scope = 2;
	};
	class Track {
		model = "";
		simulation = "track";
	};
	class Mark {
		model = "";
		simulation = "mark";
	};
	class SmokeSource {
		model = "";
		simulation = "SmokeSource";
	};
	class ObjectDestructed {
		model = "";
		simulation = "ObjectDestructed";
	};
	class Explosion {
		model = "";
		simulation = "Explosion";
	};
	class Crater {
		model = "";
		simulation = "Crater";
	};
	class CraterOnVehicle {
		model = "";
		simulation = "CraterOnVehicle";
	};
	class Slop {
		model = "";
		simulation = "Slop";
	};
	class Smoke {
		model = "";
		simulation = "Smoke";
	};
	class DynamicSound {
		model = "";
		simulation = "DynamicSound";
	};
	class StreetLamp {
		model = "";
		destrType = "DestructTree";
		simulation = "StreetLamp";
		colorDiffuse[] = {0.9,0.8,0.6};
		colorAmbient[] = {0.1,0.1,0.1};
		brightness = 1;
		armorBulb = 1;
	};
	class StreetLampWood: StreetLamp {
		scope = 1;
		model = "lampadrevo";
	};
	class StreetLampMetal: StreetLamp {
		scope = 1;
		model = "lampazel";
	};
	class SoundOnVehicle {
		model = "";
		simulation = "SoundOnVehicle";
	};
	class ThunderBolt {
		model = "";
		simulation = "ThunderBolt";
	};
	class EditCursor {
		model = "";
		simulation = "EditCursor";
	};
	class ObjView {
		scope = 2;
		model = "";
		simulation = "ObjView";
	};
	class Temp {
		scope = 2;
		model = "";
		simulation = "Temp";
	};
	class SeaGull {
		scope = 2;
		model = "racekT";
		simulation = "SeaGull";
		reversed = 0;
	};
	class Camera {
		scope = 2;
		model = "camera";
		simulation = "Camera";
	};
	class ProxyWeapon {
		autocenter = 0;
		scope = 2;
		reversed = 0;
		model = "m16_proxy";
		simulation = "ProxyWeapon";
	};
	class ProxySecWeapon {
		autocenter = 0;
		scope = 2;
		model = "law_proxy";
		simulation = "ProxySecWeapon";
	};
	class ProxyAK_47_Proxy: ProxyWeapon {};
	class ProxyAK_47_v58_Proxy: ProxyWeapon {};
	class ProxyAK_47_granatomet_Proxy: ProxyWeapon {};
	class ProxyRPG7_Proxy: ProxySecWeapon {};
	class ProxyLAW_Proxy: ProxySecWeapon {};
	class ProxyStinger_Proxy: ProxySecWeapon {};
	class ProxyAT1_Proxy: ProxyWeapon {
		model = "AT1_Proxy";
		simulation = "alwaysshow";
	};
	class ProxyMaverik_Proxy: ProxyWeapon {
		model = "Maverik_Proxy";
		simulation = "maverickweapon";
	};
	class ProxyScud_Strela_Proxy: ProxyWeapon {
		model = "Scud_Strela_Proxy";
		simulation = "scud";
	};
	class ProxyCrew {
		autocenter = 0;
		scope = 1;
		model = "kursor";
		simulation = "proxycrew";
		crewPosition = "CPDriver";
	};
	class ProxyCommander: ProxyCrew {
		crewPosition = "CPCommander";
	};
	class ProxyDriver: ProxyCrew {
		crewPosition = "CPDriver";
	};
	class ProxyGunner: ProxyCrew {
		crewPosition = "CPGunner";
	};
	class ProxyCargo: ProxyCrew {
		crewPosition = "CPCargo";
	};
	class ProxyM60Commander: ProxyCommander {};
	class ProxyM60Driver: ProxyDriver {};
	class ProxyM60Gunner: ProxyGunner {};
	class ProxyM60CommanderOut: ProxyCommander {};
	class ProxyM60DriverOut: ProxyDriver {};
	class ProxyM60GunnerOut: ProxyGunner {};
	class ProxyM1A1Commander: ProxyCommander {};
	class ProxyM1A1Driver: ProxyDriver {};
	class ProxyM1A1Gunner: ProxyGunner {};
	class ProxyM1A1CommanderOut: ProxyCommander {};
	class ProxyM1A1DriverOut: ProxyDriver {};
	class ProxyM1A1GunnerOut: ProxyGunner {};
	class ProxyM113Commander: ProxyCommander {};
	class ProxyM113Driver: ProxyDriver {};
	class ProxyM113Gunner: ProxyGunner {};
	class ProxyM113CommanderOut: ProxyCommander {};
	class ProxyM113DriverOut: ProxyDriver {};
	class ProxyM113GunnerOut: ProxyGunner {};
	class ProxyBMPCommander: ProxyCommander {};
	class ProxyBMPDriver: ProxyDriver {};
	class ProxyBMPGunner: ProxyGunner {};
	class ProxyBMPCommanderOut: ProxyCommander {};
	class ProxyBMPDriverOut: ProxyDriver {};
	class ProxyBMPGunnerOut: ProxyGunner {};
	class ProxyT72Commander: ProxyCommander {};
	class ProxyT72Driver: ProxyDriver {};
	class ProxyT72Gunner: ProxyGunner {};
	class ProxyT72CommanderOut: ProxyCommander {};
	class ProxyT72DriverOut: ProxyDriver {};
	class ProxyT72GunnerOut: ProxyGunner {};
	class ProxyT80Commander: ProxyCommander {};
	class ProxyT80Driver: ProxyDriver {};
	class ProxyT80Gunner: ProxyGunner {};
	class ProxyT80CommanderOut: ProxyCommander {};
	class ProxyT80DriverOut: ProxyDriver {};
	class ProxyT80GunnerOut: ProxyGunner {};
	class ProxyZSUCommander: ProxyCommander {};
	class ProxyZSUDriver: ProxyDriver {};
	class ProxyZSUGunner: ProxyGunner {};
	class ProxyZSUCommanderOut: ProxyCommander {};
	class ProxyZSUDriverOut: ProxyDriver {};
	class ProxyZSUGunnerOut: ProxyGunner {};
	class ProxyT55Commander: ProxyCommander {};
	class ProxyT55Driver: ProxyDriver {};
	class ProxyT55Gunner: ProxyGunner {};
	class ProxyT55CommanderOut: ProxyCommander {};
	class ProxyT55DriverOut: ProxyDriver {};
	class ProxyT55GunnerOut: ProxyGunner {};
	class ProxyMedic: ProxyCargo {};
	class ProxyNemocnej: ProxyCargo {};
	class ProxyUH60Pilot: ProxyDriver {};
	class ProxyUH60CoPilot: ProxyGunner {};
	class ProxyUH60Gunner: ProxyGunner {};
	class ProxyMi17Pilot: ProxyDriver {};
	class ProxyMi17CoPilot: ProxyGunner {};
	class ProxyMi24Pilot: ProxyDriver {};
	class ProxyMi24Gunner: ProxyGunner {};
	class ProxyAH1Pilot: ProxyDriver {};
	class ProxyAH1Gunner: ProxyGunner {};
	class ProxyAH1GunnerStat: ProxyGunner {};
	class ProxyA10Pilot: ProxyDriver {};
	class ProxyCesnaPilot: ProxyDriver {};
	class ProxyCesnaCoPilot: ProxyCargo {};
	class ProxyCesnaCargo: ProxyCargo {};
	class ProxyTraktorDriver: ProxyDriver {};
	class ProxyJeepDriver: ProxyDriver {};
	class ProxyJeepGunner: ProxyGunner {};
	class ProxyJeepCoDriver: ProxyCargo {};
	class ProxyJeepCoDriverBack: ProxyCargo {};
	class Proxy5tDriver: ProxyDriver {};
	class Proxy5tCoDriver: ProxyCargo {};
	class ProxyUazDriver: ProxyDriver {};
	class ProxyUazCoDriver: ProxyCargo {};
	class ProxyUralDriver: ProxyDriver {};
	class ProxyUralCoDriver: ProxyCargo {};
	class ProxySkodaDriver: ProxyDriver {};
	class ProxySkodaCoDriver: ProxyCargo {};
	class ProxySkodaCoDriverBack: ProxyCargo {};
	class ProxyV3SDriver: ProxyDriver {};
	class ProxyV3SCoDriver: ProxyCargo {};
	class ProxyPBRDriver: ProxyDriver {};
	class ProxyPBRGunner: ProxyGunner {};
	class ProxyHRLDriver: ProxyDriver {};
	class ProxyHRLGunner: ProxyGunner {};
	class ProxySCUDDriver: ProxyDriver {};
	class ProxySCUDCoDriver: ProxyCargo {};
	class ProxyParasutista: ProxyDriver {};
	class ProxyM2Gunner: ProxyGunner {};
	class ProxyPKGunner: ProxyGunner {};
	class ProxyFlag {
		autocenter = 0;
		scope = 2;
		reversed = 0;
		model = "";
		simulation = "flag";
	};
	class ProxyFlag_Auto: ProxyFlag {
		model = "flag_auto";
	};
	class ProxyFlag_Alone: ProxyFlag {
		model = "flag_alone";
	};
	class ProxyFlag_Alone_Big: ProxyFlag {
		model = "flag_alone_big";
	};
	class ProxyFlag_Vojak: ProxyFlag {
		model = "flag_vojak";
	};
	class ProxyFlag_Stozar: ProxyFlag {
		model = "flag_stozar";
	};
	class ProxyFlag_Plane: ProxyFlag {
		model = "flag_plane";
	};
	class ProxyFlag_Plane_Big: ProxyFlag {
		model = "flag_plane_big";
	};
	class ProxyAmmoInTruck {
		autocenter = 0;
		scope = 2;
		reversed = 0;
		model = "";
		simulation = "alwaysshow";
	};
	class ProxyAmmo_Bedna_In: ProxyAmmoInTruck {
		model = "ammo_bedna_in";
	};
	class ProxyAmmo_Bedna2: ProxyAmmoInTruck {
		model = "ammo_bedna2";
	};
};
class CfgSurfaces {
	class Default {
		access = 2;
		files = "default";
		rough = 0.075;
		dust = 0.1;
		soundEnviron = "normalExt";
	};
	class Roadway {
		access = 2;
		files = "silnice*";
		rough = 0.005;
		dust = 0.01;
		soundEnviron = "road";
	};
	class Asfalt: Roadway {
		access = 2;
		files = "asfalt*";
		rough = 0.01;
		dust = 0.05;
		soundEnviron = "road";
	};
	class Cesta: Roadway {
		access = 2;
		files = "cesta*";
		rough = 0.08;
		dust = 0.15;
		soundEnviron = "gravel";
	};
	class Grass: Default {
		access = 2;
		files = "tn??????";
		rough = 0.11;
		dust = 0.1;
		soundEnviron = "normalExt";
	};
	class GrassAbel: Default {
		access = 2;
		files = "tt??????";
		rough = 0.11;
		dust = 0.25;
		soundEnviron = "grass";
	};
	class SandAbel: Default {
		access = 2;
		files = "pi??????";
		rough = 0.15;
		dust = 0.6;
		soundEnviron = "sand";
	};
	class RockAbel: Default {
		access = 2;
		files = "sh??????";
		rough = 0.2;
		dust = 0.2;
		soundEnviron = "rock";
	};
	class BetonAbel: Default {
		access = 2;
		files = "bt??????";
		rough = 0.05;
		dust = 0.03;
		soundEnviron = "rock";
	};
	class GrassHigh: Default {
		access = 2;
		files = "tv??????";
		rough = 0.12;
		dust = 0.05;
		soundEnviron = "grass";
	};
	class Forest {
		access = 2;
		files = "pl??????";
		rough = 0.12;
		dust = 0.05;
		soundEnviron = "forest";
	};
	class Sand: Default {
		access = 2;
		files = "ps??????";
		rough = 0.12;
		dust = 0.5;
		soundEnviron = "sand";
	};
	class Field: Default {
		access = 2;
		files = "pol";
		rough = 0.15;
		dust = 0.3;
		soundEnviron = "dirt";
	};
	class Village: Default {
		access = 2;
		files = "bah";
		rough = 0.08;
		dust = 0.2;
		soundEnviron = "normalExt";
	};
	class Runway: Roadway {
		access = 2;
		files = "rw*";
		rough = 0.001;
		dust = 0.006;
		soundEnviron = "road";
	};
	class Rock {
		access = 2;
		files = "s???????";
		rough = 0.15;
		dust = 0.1;
		soundEnviron = "rock";
	};
	class Water {
		access = 2;
		files = "more_anim*";
		rough = 0.0;
		dust = 0.0;
		soundEnviron = "water";
	};
	class Wood {
		access = 2;
		files = "podlaha_prkna*";
		rough = 0.15;
		dust = 0.1;
		soundEnviron = "wood";
	};
	class Metal {
		access = 2;
		files = "plechprolis*";
		rough = 0.15;
		dust = 0.1;
		soundEnviron = "metal";
	};
	class Beton {
		access = 2;
		files = "kameny.pac";
		rough = 0.15;
		dust = 0.1;
		soundEnviron = "rock";
	};
	class Carpet {
		access = 2;
		files = "dum_mesto_koberec*";
		rough = 0.15;
		dust = 0.1;
		soundEnviron = "wood";
	};
	class SandBuilding: Default {
		access = 2;
		files = "pisek01*";
		rough = 0.12;
		dust = 0.5;
		soundEnviron = "sand";
	};
	class MudBuilding: Default {
		access = 2;
		files = "hlinasterk*";
		rough = 0.12;
		dust = 0.5;
		soundEnviron = "rock";
	};
};
class CfgFonts {
	class Korean {
		TahomaB24 = "hfont16";
		TahomaB36 = "hfont16";
		TahomaB48 = "hfont16";
		CourierNewB64 = "hfont16";
		Garamond64 = "hfont16";
		SteelfishB64 = "hfont32";
		SteelfishB128 = "hfont32_16";
		AudreysHandB48 = "hfont16";
		AudreysHandI48 = "hfont16";
	};
};
class CfgWrapperUI {
	access = 1;
	class Colors {
		color1[] = {0.0,0.0,0.0,1.0};
		color2[] = {0.2,0.2,0.2,1.0};
		color3[] = {0.5,0.5,0.5,1.0};
		color4[] = {0.6,0.6,0.6,1.0};
		color5[] = {0.8,0.8,0.8,1.0};
	};
	class Background {
		alpha = 0.75;
		texture = "background.pac";
	};
	class TitleBar {
		alpha = 0.3;
		texture = "windowname.pac";
	};
	class GroupBox {
		alpha = 0.2;
	};
	class GroupBox2 {
		alpha = 0.5;
		texture = "windowdisplay.pac";
	};
	class Button {
		color1[] = {0.0,0.0,0.0,0.3};
		color2[] = {0.2,0.2,0.2,0.3};
		color3[] = {0.5,0.5,0.5,0.3};
		color4[] = {0.6,0.6,0.6,0.3};
		color5[] = {0.8,0.8,0.8,0.3};
	};
	class Cursors {
		class Arrow {
			texture = "kurzor_arrow";
			width = 16;
			height = 16;
			hotspotX = 0;
			hotspotY = 0;
			color[] = {0.8,0.8,0.8,1};
		};
		class Track {
			texture = "kurzor_track";
			width = 24;
			height = 24;
			hotspotX = 0.5;
			hotspotY = 0.5;
			color[] = {0.7,0.1,0.0,1};
		};
		class Move {
			texture = "kurzor_move";
			width = 24;
			height = 24;
			hotspotX = 0.5;
			hotspotY = 0.5;
			color[] = {0.0,0.6,0.0,1};
		};
		class Scroll {
			texture = "kurzor_scroll";
			width = 24;
			height = 24;
			hotspotX = 0.5;
			hotspotY = 0.5;
			color[] = {0.8,0.6,0.0,1};
		};
	};
};
class CfgInGameUI {
	access = 1;
	imageCornerElement = "cornern.paa";
	colorBackground[] = {0,0,0,0.8};
	colorBackgroundCommand[] = {0,0,0,0.3};
	colorBackgroundHelp[] = {0,0,0,0.2};
	colorText[] = {0.8,0.8,0.8,1};
	class SideColors {
		colorFriendly[] = {0.0,0.6,0.0,1};
		colorEnemy[] = {0.7,0.1,0.0,1};
		colorNeutral[] = {0.8,0.8,0.8,1};
		colorCivilian[] = {0.8,0.8,0.8,1};
		colorUnknown[] = {0.8,0.6,0.0,1};
	};
	class IslandMap {
		colorFriendly[] = {0,0.5,0,1};
		colorEnemy[] = {0.5,0,0,1};
		colorNeutral[] = {0.5,0.5,0.5,1};
		colorCivilian[] = {0,0,1,1};
		colorUnknown[] = {0.5,0.5,0,1};
		iconPlayer = "you.paa";
		iconCheckpoint = "target.paa";
		iconCamera = "camera.paa";
		iconSelect = "mkrouzek.paa";
		iconSensor = "vlajka.paa";
		colorMe[] = {0.7,0.1,0.0,1};
		colorPlayable[] = {0.7,0,0.7,1};
		colorSelect[] = {0.0,0.6,0.0,0.5};
		colorCamera[] = {0.1,0.1,0.9,1};
		colorSensor[] = {0.1,0.1,0.9,1};
		colorDragging[] = {0.8,0.8,0.8,1};
		colorInactive[] = {1,1,1,0.6};
		colorCountlines[] = {0,0,0,0.33};
		colorCountlinesWater[] = {0,0,1,1};
		colorExposureEnemy[] = {1.0,0.2,0.2,0.5};
		colorExposureUnknown[] = {0.8,0.8,0.2,0.5};
		colorRoads[] = {0.35,0.2,0.1,0.8};
		colorGrid[] = {0.25,0.25,0.1,0.75};
		colorGridMap[] = {0.25,0.25,0.1,0.75};
		colorCheckpoints[] = {0.2,0.2,0.2,1.0};
		colorMissions[] = {0.5,0.5,0.0,0.5};
		colorActiveMission[] = {0.0,0.0,0.0,1.0};
		colorPath[] = {0.0,0.0,1,0.9};
		colorInfoMove[] = {1.0,1.0,1.0,1.0};
		colorGroups[] = {0.0,0.5,0.5,0.5};
		colorActiveGroup[] = {0.0,1.0,1.0,1.0};
		colorSync[] = {0.0,0.0,1.0,1.0};
		colorDetectorSync = "{0,1,0,1}";
		colorLabelBackground[] = {0.0,0.0,0.0,1.0};
	};
	class MPTable {
		color[] = {1,1,1,1};
		colorBg[] = {0,0,0,0.75};
		colorSelected[] = {1,1,1,0.2};
		colorWest[] = {0,1,0,1};
		colorEast[] = {1,0,0,1};
		colorCiv[] = {0.8,0.8,0.8,1};
		colorRes[] = {0.47,0.47,0.94,1};
	};
	class TankDirection {
		left = 0.04;
		top = 0.007;
		width = 0.15;
		height = 0.195;
		color[] = {0.8,0.8,0.8,1};
		colorHalfDammage[] = {0.8,0.6,0.0,1};
		colorFullDammage[] = {0.7,0.1,0.0,1};
		imageTower = "vez_schema.paa";
		imageTurret = "T_schema_vez.paa";
		imageGun = "T_schema_kanon.paa";
		imageObsTurret = "T_schema_velite2.paa";
		imageEngine = "T_schema_motor.paa";
		imageHull = "T_schema_trup.paa";
		imageLTrack = "T_schema_Lpas";
		imageRTrack = "T_schema_Ppas";
	};
	class Capture {
		colorBackground[] = {0,0,0,0.93};
		colorText[] = {0.8,0.6,0.0,1};
		colorLine[] = {0.8,0.8,0.8,1};
	};
	class Picture {
		color[] = {0.8,0.8,0.8,1};
		colorProblems[] = {0.7,0.1,0.0,1};
		imageBusy = "busy.paa";
		imageWaiting = "orders.paa";
		imageCommand = "execute.paa";
	};
	class Bar {
		imageBar = "white.pac";
		colorBackground[] = {0.2,0.5,0.2,0.5};
		colorGreen[] = {0.0,0.6,0.0,0.6};
		colorYellow[] = {0.8,0.6,0.0,0.6};
		colorRed[] = {0.7,0.1,0.0,0.8};
		colorBlinkOn[] = {1,0.2,0.2,0.8};
		colorBlinkOff[] = {0.7,0.1,0.0,0.8};
		height = 0.01;
	};
	class Messages {
		color1[] = {0.8,0.6,0.0,1};
		color2[] = {0.0,0.6,0.0,1};
		color3[] = {0.8,0.8,0.8,1};
	};
	class TacticalDisplay: SideColors {
		left = 0.24;
		top = 0.053;
		width = 0.52;
		height = 0.1;
		colorCamera[] = {0.1,0.1,0.1,0.4};
		class Cursor {
			width = 0.015;
			height = 0.02;
			color[] = {0.8,0.8,0.8,1};
		};
	};
	class ProgressFont {
		font = "SteelfishB64";
	};
	class Compass {
		left = 0.24;
		top = 0.02;
		width = 0.52;
		height = 0.02;
		color[] = {0.8,0.8,0.8,1};
		dirColor[] = {0.8,0.8,0.8,1};
		turretDirColor[] = {0.8,0.6,0.0,1};
	};
	class Menu {
		left = 0.78;
		top = 0.02;
		width = 0.2;
		height = 0.28;
		colorChecked[] = {0.8,0.6,0.0,1};
		colorEnabled[] = {0.8,0.8,0.8,1};
		colorDisabled[] = {0.4,0.4,0.4,1};
		hideTime = 60;
	};
	class GameInfo {
		left = 0.78;
		top = 0.9;
		width = 0.2;
		height = 0.08;
	};
	class GroupDir {
		image = "grouporient.paa";
		left = 0.05;
		top = 0.62;
		width = 0.075;
		height = 0.1;
		dimmStartTime = 10;
		dimmEndTime = 15;
	};
	class PlayerInfo {
		colorTime[] = {0.8,0.8,0.8,1};
		left = 0.02;
		top = 0.02;
		width = 0.2;
		height = 0.28;
		class UnitPicture {
			width = 0.15;
			height = 0.16;
		};
		class Sign {
			height = 0.03;
			widthSector = 0.04;
			widthGroup = 0.02;
			widthUnit = 0.02;
		};
		class Side {
			height = 0.072;
			width = 0.06;
		};
		class HealthBar {
			width = 0.12;
		};
		class ArmorBar {
			width = 0.12;
		};
		class FuelBar {
			width = 0.12;
		};
		class ExperienceBar {
			width = 0.12;
			color[] = {0.8,0.8,0.8,1};
		};
		dimmStartTime = 5;
		dimmEndTime = 10;
	};
	class Hint {
		dimmStartTime = 30;
		dimmEndTime = 35;
		sound[] = {"ui\hint",3.1622777,1};
	};
	class Chat {
		sound[] = {"ui\hint",0.31622776,1};
	};
	class GroupInfo {
		left = 0.02;
		top = 0.9;
		width = 0.96;
		height = 0.08;
		colorIDNone[] = {0,0,0,1};
		colorIDNormal[] = {0.8,0.8,0.8,1};
		colorIDSelected[] = {0.0,0.6,0.0,1};
		colorIDPlayer[] = {0.8,0.6,0.0,1};
		class Semaphore {
			imageSemaphore = "white.pac";
			width = 0.0075;
			height = 0.01;
			colorHoldFire[] = {0.7,0.1,0.0,1};
		};
		imageDefaultWeapons = "ivojak";
		imageNoWeapons = "\misc\ibezezbrane.paa";
		dimm = 0.3;
	};
	class ConnectionLost {
		left = 0.0;
		top = 0.45;
		width = 1.0;
		height = 0.1;
		font = "tahomaB36";
		size = 0.03;
		color[] = {1.0,0.5,0.25,1.0};
	};
	class Cursor {
		aim = "W_weapon";
		weapon = "W_lock";
		outArrow = "UI_sipka.paa";
		select_target = "target_active.paa";
		lock_target = "target_locked.paa";
		me = "circle";
		meColor[] = {0.8,0.8,0.8,0.8};
		dimmMe = 0.0;
		dimmMeStartTime = 5;
		dimmMeEndTime = 10;
		dimmCmdStartTime = 5;
		dimmCmdEndTime = 10;
		select = "circle";
		selectColor[] = {0.0,0.6,0.0,0.8};
		leader = "circle";
		leaderColor[] = {0.0,0.6,0.0,0.8};
		mission = "M_mission";
		missionColor[] = {0.8,0.6,0.0,0.8};
		tactical = "T_tactical";
		move = "T_basic";
		selected = "T_select";
		attack = "T_attack";
		getIn = "T_getin";
		watch = "kurzor_scroll";
		color[] = {0.8,0.8,0.8,1};
		colorBackground[] = {0,0,0,0.6};
		colorLocked[] = {0.7,0.1,0.0,1};
		dimm = 0.15;
		class Sign {
			height = 0.015;
			widthSector = 0.02;
			widthGroup = 0.01;
			widthUnit = 0.01;
		};
		activeWidth = 0.6;
		activeHeight = 0.8;
		activeMinimum = 0.05;
		activeMaximum = 0.1;
		enemyActiveColor[] = {0.7,0.1,0.0,0.7};
	};
};
class CfgDetectors {
	objects[] = {"EmptyDetector"};
};
class CfgGlasses {
	class None {
		name = "$STR_CFG_GLASSES_NONE";
		texture = "";
	};
	class Spectacles {
		name = "$STR_CFG_GLASSES_SPECTACLES";
		texture = "civilista_bryle";
	};
	class Sunglasses {
		name = "$STR_CFG_GLASSES_SUNGLASSES";
		texture = "civilista_zrcadlovky";
	};
};
class CfgFaces {
	class Default {
		name = "$STR_CFG_FACES_DEFAULT";
		texture = "xicht_2f.paa";
		east = 0;
		west = 0;
	};
	class Face1 {
		name = "Peter P.";
		texture = "xicht_a.paa";
		east = 0;
		west = 0;
	};
	class Face2 {
		name = "Victor B.";
		texture = "xicht_b.paa";
		east = 0;
		west = 1;
	};
	class Face3 {
		name = "Bohous";
		texture = "xicht_c.paa";
		east = 0;
		west = 0;
	};
	class Face4 {
		name = "Mirek";
		texture = "xicht_d.paa";
		east = 0;
		west = 1;
	};
	class Face5 {
		name = "Peter S.";
		texture = "xicht_e.paa";
		east = 0;
		west = 0;
	};
	class Face6 {
		name = "Charles";
		texture = "xicht_f.paa";
		east = 0;
		west = 0;
	};
	class Face7 {
		name = "Peter V.";
		texture = "xicht_g.paa";
		east = 0;
		west = 0;
	};
	class Face8 {
		name = "Richard B.";
		texture = "xicht_h.paa";
		east = 0;
		west = 1;
	};
	class Face9 {
		name = "Charles M.";
		texture = "xicht_i.paa";
		east = 0;
		west = 1;
	};
	class Face10 {
		name = "Ian O'Hara";
		texture = "xicht_j.paa";
		east = 0;
		west = 1;
	};
	class Face11 {
		name = "Vojta N.";
		texture = "xicht_k.paa";
		east = 0;
		west = 1;
	};
	class Face12 {
		name = "Adam B.";
		texture = "xicht_l.paa";
		east = 0;
		west = 1;
	};
	class Face13 {
		name = "Peter B.";
		texture = "xicht_m.paa";
		east = 0;
		west = 0;
	};
	class Face14 {
		name = "Francesco F.";
		texture = "xicht_n.paa";
		east = 0;
		west = 0;
	};
	class Face15 {
		name = "Bill O.";
		texture = "xicht_o.paa";
		east = 0;
		west = 0;
	};
	class Face16 {
		name = "Colin F.";
		texture = "xicht_p.paa";
		east = 0;
		west = 0;
	};
	class Face17 {
		name = "Darren I.";
		texture = "xicht_q.paa";
		east = 0;
		west = 0;
	};
	class Face18 {
		name = "Eric J.";
		texture = "xicht_r.paa";
		east = 0;
		west = 0;
	};
	class Face19 {
		name = "Phill D.";
		texture = "xicht_s.paa";
		east = 0;
		west = 1;
	};
	class Face20 {
		name = "Graham U.";
		texture = "xicht_t.paa";
		east = 0;
		west = 1;
	};
	class Face21 {
		name = "Henry G.";
		texture = "xicht_u.paa";
		east = 0;
		west = 0;
	};
	class Face22 {
		name = "Ivan B.";
		texture = "xicht_v.paa";
		east = 0;
		west = 0;
	};
	class Face23 {
		name = "Ghulam K.";
		texture = "xicht_w.paa";
		east = 0;
		west = 0;
	};
	class Face24 {
		name = "Kevin B.";
		texture = "xicht_x.paa";
		east = 0;
		west = 0;
	};
	class Face25 {
		name = "Robert ";
		texture = "xicht_y.paa";
		east = 0;
		west = 1;
	};
	class Face26 {
		name = "Martin";
		texture = "xicht_z.paa";
		east = 0;
		west = 1;
	};
	class Face27 {
		name = "John A.";
		texture = "xicht_2a.paa";
		east = 0;
		west = 0;
	};
	class Face28 {
		name = "Bill G.";
		texture = "xicht_2b.paa";
		east = 0;
		west = 1;
	};
	class Face29 {
		name = "Peter O.";
		texture = "xicht_2c.paa";
		east = 0;
		west = 1;
	};
	class Face30 {
		name = "Henry H.";
		texture = "xicht_2d.paa";
		east = 0;
		west = 1;
	};
	class Face31 {
		name = "William G.";
		texture = "xicht_2e.paa";
		east = 0;
		west = 1;
	};
	class Face32 {
		name = "Arnold T.";
		texture = "xicht_2f.paa";
		east = 0;
		west = 1;
	};
	class Face33 {
		name = "Michael H.";
		texture = "xicht_2g.paa";
		east = 0;
		west = 0;
	};
	class Face34 {
		name = "John Fox";
		texture = "xicht_2h.paa";
		east = 0;
		west = 1;
	};
	class Face35 {
		name = "George McArthur";
		texture = "xicht_2i.paa";
		east = 0;
		west = 1;
	};
	class Face36 {
		name = "Peter Sun";
		texture = "xicht_2j.paa";
		east = 0;
		west = 1;
	};
	class Face37 {
		name = "Robert S.";
		texture = "xicht_2k.paa";
		east = 0;
		west = 1;
	};
	class Face38 {
		name = "John Way";
		texture = "xicht_2l.paa";
		east = 0;
		west = 1;
	};
	class Face39 {
		name = "Jack C.";
		texture = "xicht_2m.paa";
		east = 0;
		west = 1;
	};
	class Face40 {
		name = "J. C.";
		texture = "xicht_2n.paa";
		east = 0;
		west = 0;
	};
	class Face41 {
		name = "Mel D.";
		texture = "xicht_2o.paa";
		east = 0;
		west = 1;
	};
	class Face42 {
		name = "John Paul";
		texture = "xicht_2p.paa";
		east = 0;
		west = 1;
	};
	class Face43 {
		name = "Jirka M.";
		texture = "xicht_2q.paa";
		east = 0;
		west = 1;
	};
	class Face44 {
		name = "Honza K.";
		texture = "xicht_2r.paa";
		east = 1;
		west = 1;
	};
	class Face45 {
		name = "John A.";
		texture = "xicht_2s.paa";
		east = 1;
		west = 1;
	};
	class Face46 {
		name = "Ondrey N.";
		texture = "xicht_2t.paa";
		east = 1;
		west = 1;
	};
	class Face47 {
		name = "Ondrey S.";
		texture = "xicht_2u.paa";
		east = 1;
		west = 1;
	};
	class Face48 {
		name = "Gabriel K.";
		texture = "xicht_2v.paa";
		east = 1;
		west = 1;
	};
	class Face49 {
		name = "Oliver S.";
		texture = "xicht_2w.paa";
		east = 0;
		west = 1;
	};
	class Face50 {
		name = "Radan D.";
		texture = "xicht_2x.paa";
		east = 1;
		west = 1;
	};
	class Face51 {
		name = "George J.";
		texture = "xicht_2y.paa";
		east = 1;
		west = 1;
	};
	class Face52 {
		name = "Ota B.";
		texture = "xicht_2z.paa";
		east = 1;
		west = 1;
	};
	class Custom {
		name = "$STR_CFG_FACES_CUSTOM";
		texture = "white.pac";
		front = "white.pac";
		side = "white.pac";
		back = "white.pac";
		east = 0;
		west = 0;
	};
};
class CfgFaceWounds {
	access = 1;
	wounds[] = {"\o\char\faceR01.paa","\o\char\faceR01_d.pac","\o\misc\eva.pac","\o\misc\eva_d.pac","\o\misc\kamila.pac","\o\misc\kamila_d.pac","\o\misc\lada.pac","\o\misc\lada_d.pac","\o\misc\lucie.pac","\o\misc\lucie_d.pac","\o\misc\marketa.pac","\o\misc\marketa_d.pac","\o\misc\nada.pac","\o\misc\nada_d.pac","xicht_a.paa","xicht_a_zranen","xicht_b.paa","xicht_a_zranen","xicht_c.paa","xicht_a_zranen","xicht_d.paa","xicht_a_zranen","xicht_e.paa","xicht_e_zranen","xicht_f.paa","xicht_a_zranen","xicht_g.paa","xicht_a_zranen","xicht_h.paa","xicht_a_zranen","xicht_i.paa","xicht_a_zranen","xicht_j.paa","xicht_a_zranen","xicht_k.paa","xicht_a_zranen","xicht_l.paa","xicht_a_zranen","xicht_m.paa","xicht_a_zranen","xicht_n.paa","xicht_a_zranen","xicht_o.paa","xicht_o_zranen","xicht_p.paa","xicht_a_zranen","xicht_q.paa","xicht_a_zranen","xicht_r.paa","xicht_a_zranen","xicht_s.paa","xicht_a_zranen","xicht_t.paa","xicht_a_zranen","xicht_u.paa","xicht_a_zranen","xicht_v.paa","xicht_v_zranen","xicht_w.paa","xicht_w_zranen","xicht_x.paa","xicht_a_zranen","xicht_y.paa","xicht_a_zranen","xicht_z.paa","xicht_a_zranen","xicht_2a.paa","xicht_a_zranen","xicht_2b.paa","xicht_w_zranen","xicht_2c.paa","xicht_a_zranen","xicht_2d.paa","xicht_v_zranen","xicht_2e.paa","xicht_a_zranen","xicht_2f.paa","xicht_a_zranen","xicht_2g.paa","xicht_w_zranen","xicht_2h.paa","xicht_a_zranen","xicht_2i.paa","xicht_a_zranen","xicht_2j.paa","xicht_a_zranen","xicht_2k.paa","xicht_a_zranen","xicht_2l.paa","xicht_a_zranen","xicht_2m.paa","xicht_a_zranen","xicht_2n.paa","xicht_a_zranen","xicht_2o.paa","xicht_a_zranen","xicht_2p.paa","xicht_2p_zranen","xicht_2q.paa","xicht_a_zranen","xicht_2r.paa","xicht_e_zranen","xicht_2s.paa","xicht_a_zranen","xicht_2t.paa","xicht_a_zranen","xicht_2u.paa","xicht_a_zranen","xicht_2v.paa","xicht_a_zranen","xicht_2w.paa","xicht_w_zranen","xicht_2x.paa","xicht_a_zranen","xicht_2y.paa","xicht_a_zranen","xicht_2z.paa","xicht_a_zranen"};
};
class CfgMimics {
	access = 1;
	class HeadPreview {
		microMimics = "Micro";
	};
	class Micro {
		lBrow[] = {0.002,0.002,0.001,0.6,3.0};
		mBrow[] = {0.002,0.002,0.001,0.6,2.5};
		rBrow[] = {0.002,0.002,0.001,0.6,3.0};
		lMouth[] = {0.001,0.002,0.001,0.6,2.0};
		mMouth[] = {0.0,0.0,0.0,0.6,3.0};
		rMouth[] = {0.001,0.002,0.001,0.6,2.0};
	};
	class NoMicro {
		lBrow[] = {0.0,0.0,0.0,0.6,3.0};
		mBrow[] = {0.0,0.0,0.0,0.6,2.5};
		rBrow[] = {0.0,0.0,0.0,0.6,3.0};
		lMouth[] = {0.0,0.0,0.0,0.6,2.0};
		mMouth[] = {0.0,0.0,0.0,0.6,3.0};
		rMouth[] = {0.0,0.0,0.0,0.6,2.0};
	};
	class States {
		class Default {
			lBrow[] = {0,0};
			mBrow[] = {0,0};
			rBrow[] = {0,0};
			lMouth[] = {0,0};
			mMouth[] = {0,0};
			rMouth[] = {0,0};
		};
		class Normal {
			lBrow[] = {0,0};
			mBrow[] = {0,0};
			rBrow[] = {0,0};
			lMouth[] = {0,0};
			mMouth[] = {0,0};
			rMouth[] = {0,0};
		};
		class Smile {
			lBrow[] = {0,0.25};
			mBrow[] = {0,0.25};
			rBrow[] = {0,0.25};
			lMouth[] = {-0.5,0.6};
			mMouth[] = {0,0.0};
			rMouth[] = {0.5,0.6};
		};
		class Hurt {
			lBrow[] = {0,-0.35};
			mBrow[] = {0,-0.5};
			rBrow[] = {0,-0.6};
			lMouth[] = {0.5,-0.3};
			mMouth[] = {0,0.3};
			rMouth[] = {-0.5,-0.6};
		};
		class Ironic {
			lBrow[] = {0,-0.35};
			mBrow[] = {0,-0.35};
			rBrow[] = {0,-0.35};
			lMouth[] = {0.1,0.3};
			mMouth[] = {0,0.9};
			rMouth[] = {-0.1,0.3};
		};
		class Sad {
			lBrow[] = {0,0.2};
			mBrow[] = {0,0.2};
			rBrow[] = {0,0.2};
			lMouth[] = {0.1,-0.5};
			mMouth[] = {0,-0.5};
			rMouth[] = {-0.1,-0.5};
		};
		class Cynic {
			lBrow[] = {0,-0.35};
			mBrow[] = {0,0.0};
			rBrow[] = {0,0.05};
			lMouth[] = {0.2,-0.9};
			mMouth[] = {0,-0.2};
			rMouth[] = {0.0,0};
		};
		class Surprised {
			lBrow[] = {0,0.5};
			mBrow[] = {0,0.5};
			rBrow[] = {0,0.5};
			lMouth[] = {0.0,-0.3};
			mMouth[] = {0,0.3};
			rMouth[] = {0.0,-0.2};
		};
		class Agresive {
			lBrow[] = {0,-0.25};
			mBrow[] = {0,-0.4};
			rBrow[] = {0,-0.3};
			lMouth[] = {0.4,0.5};
			mMouth[] = {0,0.5};
			rMouth[] = {-0.4,-0.5};
		};
		class Angry {
			lBrow[] = {0.4,-0.5};
			mBrow[] = {0.1,-0.4};
			rBrow[] = {-0.4,-0.5};
			lMouth[] = {0.4,-0.9};
			mMouth[] = {0,-0.2};
			rMouth[] = {-0.4,-0.8};
		};
	};
	combat[] = {"Sad",0.1,"Surprised",0.1,"Cynic",0.3,"Angry",0.1,"Normal"};
	aware[] = {"Angry",0.2,"Normal"};
	safe[] = {"Smile",0.1,"Surprised",0.1,"Normal"};
	neutral[] = {"Surprised",0.1,"Sad",0.1,"Normal"};
	danger[] = {"Surprised",0.4,"Sad"};
	dead[] = {"Hurt"};
	hurt[] = {"Hurt"};
};
class CfgVoice {
	access = 1;
	voices[] = {"Adam","Dan","George","Greg","John","Jonah","Marc","Patrick","Paul","Peter","Rich","Rob","Ted","Tom"};
	voicePlayer = "Adam";
	micOuts[] = {"micOut1","micOut2","micOut3"};
	preview = "isayagain";
	class Words {
		micOut[] = {"Mic_Out1"};
		micOut1[] = {"static\over01"};
		micOut2[] = {"static\over02"};
		micOut3[] = {"static\over03"};
		loop[] = {"static\loop"};
		beepBeep[] = {"beep"};
		pause[] = {"empty01sec"};
		xmit[] = {"beep"};
		switchTo[] = {"switchto"};
		mgun[] = {"weapons\mgun"};
		heat[] = {"weapons\sabot"};
		shell[] = {"weapons\heat"};
		weapon[] = {"weapons\weapon"};
		all[] = {"numbers\all"};
		allGroup[] = {"numbers\all"};
		zero[] = {"numbers\zero"};
		one[] = {"numbers\one"};
		two[] = {"numbers\two"};
		three[] = {"numbers\three"};
		four[] = {"numbers\four"};
		five[] = {"numbers\five"};
		six[] = {"numbers\six"};
		seven[] = {"numbers\seven"};
		eight[] = {"numbers\eight"};
		nine[] = {"numbers\nine"};
		ten[] = {"numbers\ten"};
		eleven[] = {"numbers\eleven"};
		twelve[] = {"numbers\twelve"};
		zerolong[] = {"numbers\zero"};
		alpha[] = {"alphabet\alpha"};
		bravo[] = {"alphabet\bravo"};
		charlie[] = {"alphabet\charlie"};
		delta[] = {"alphabet\delta"};
		echo[] = {"alphabet\echo"};
		foxtrot[] = {"alphabet\foxtrot"};
		golf[] = {"alphabet\golf"};
		hotel[] = {"alphabet\hotel"};
		india[] = {"alphabet\india"};
		juliet[] = {"alphabet\juliet"};
		kilo[] = {"alphabet\kilo"};
		lima[] = {"alphabet\lima"};
		mike[] = {"alphabet\mike"};
		november[] = {"alphabet\november"};
		oscar[] = {"alphabet\oscar"};
		papa[] = {"alphabet\papa"};
		quebec[] = {"alphabet\quebec"};
		romeo[] = {"alphabet\romeo"};
		sierra[] = {"alphabet\sierra"};
		tango[] = {"alphabet\tango"};
		uniform[] = {"alphabet\uniform"};
		victor[] = {"alphabet\victor"};
		whiskey[] = {"alphabet\whiskey"};
		xray[] = {"alphabet\xray"};
		yankee[] = {"alphabet\yankee"};
		zulu[] = {"alphabet\zulu"};
		whiteTeam[] = {"team\teamwhite"};
		redTeam[] = {"team\teamred"};
		greenTeam[] = {"team\teamgreen"};
		blueTeam[] = {"team\teamblue"};
		yellowTeam[] = {"team\teamyellow"};
		at10[] = {"clockfacing\10oclock"};
		at11[] = {"clockfacing\11oclock"};
		at12[] = {"clockfacing\12oclock"};
		at1[] = {"clockfacing\1oclock"};
		at2[] = {"clockfacing\2oclock"};
		at3[] = {"clockfacing\3oclock"};
		at4[] = {"clockfacing\4oclock"};
		at5[] = {"clockfacing\5oclock"};
		at6[] = {"clockfacing\6oclock"};
		at7[] = {"clockfacing\7oclock"};
		at8[] = {"clockfacing\8oclock"};
		at9[] = {"clockfacing\9oclock"};
		dist50[] = {"distance\50"};
		dist100[] = {"distance\100"};
		dist200[] = {"distance\200"};
		dist500[] = {"distance\500"};
		dist1000[] = {"distance\1000"};
		dist2000[] = {"distance\2000"};
		far[] = {"distance\far"};
		north[] = {"north"};
		northEast[] = {"northeast"};
		east[] = {"east"};
		southEast[] = {"southeast"};
		south[] = {"south"};
		southWest[] = {"southwest"};
		west[] = {"west"};
		northWest[] = {"northwest"};
		ambulance[] = {"vehicles\ambulance"};
		apc[] = {"vehicles\apc"};
		boat[] = {"vehicles\boat"};
		car[] = {"vehicles\car"};
		crew[] = {"vehicles\crew"};
		chopper[] = {"vehicles\chopper"};
		man[] = {"vehicles\man"};
		machineGunner[] = {"vehicles\machinegunner"};
		medic[] = {"vehicles\medic2"};
		missileSoldier[] = {"vehicles\atsoldier"};
		officer[] = {"vehicles\officer"};
		pilot[] = {"pilot"};
		plane[] = {"vehicles\plane"};
		ship[] = {"vehicles\ship"};
		soldier[] = {"vehicles\soldier"};
		sniper[] = {"vehicles\sniper"};
		tank[] = {"vehicles\tank"};
		truck[] = {"vehicles\truck"};
		tractor[] = {"vehicles\tractor"};
		vehicle[] = {"vehicles\vehicle"};
		specNas[] = {"vehicles\spetznatz"};
		blackOp[] = {"vehicles\blackop"};
		abrams[] = {"vehicles\abrams"};
		blackhawk[] = {"vehicles\blackhawk"};
		cobra[] = {"vehicles\cobra"};
		jeep[] = {"vehicles\jeep"};
		m113[] = {"vehicles\m113"};
		m60[] = {"vehicles\m60"};
		thunderbolt[] = {"vehicles\thunderbolt"};
		BMP[] = {"vehicles\bmp"};
		mi17[] = {"vehicles\mi17"};
		hind[] = {"vehicles\hind"};
		scudLauncher[] = {"vehicles\scudlauncher"};
		T55[] = {"vehicles\T55"};
		T72[] = {"vehicles\T72"};
		T80[] = {"vehicles\T80"};
		shilka[] = {"vehicles\shilka"};
		UAZ[] = {"vehicles\UAZ"};
		object[] = {"object"};
		bunker[] = {"objects\bunker"};
		building[] = {"objects\building"};
		bush[] = {"objects\bush"};
		chapel[] = {"objects\chapel"};
		church[] = {"objects\church"};
		cross[] = {"objects\cross"};
		depot[] = {"objects\depot"};
		forest[] = {"objects\forest"};
		fuelStation[] = {"objects\fuelstation"};
		helipad[] = {"objects\helipad"};
		hospital[] = {"objects\hospital"};
		house[] = {"objects\house"};
		repairDepot[] = {"objects\repairdepot"};
		rock[] = {"objects\rock"};
		tree[] = {"objects\tree"};
		enemy[] = {"people\enemy"};
		friendly[] = {"people\friendly"};
		civilian[] = {"people\civilian"};
		resistance[] = {"people\resistance"};
		unknown[] = {"people\unknown"};
		IsDown[] = {"isdown"};
		Damned[] = {"damn"};
		OhNo[] = {"ohno"};
		Injured[] = {"injured"};
		StatusRed[] = {"statusred"};
		outOfFuel[] = {"outoffuel"};
		outOfAmmo[] = {"outofammo"};
		fuellow[] = {"fuellow"};
		ammoLow[] = {"ammolow"};
		position[] = {"position"};
		thisIs[] = {"thisis"};
		takingCommand[] = {"takingcommand"};
		ISayAgain[] = {"isayagain"};
		out[] = {"out"};
		over[] = {"over"};
		ready[] = {"ready"};
		waiting[] = {"waiting"};
		negative[] = {"negative"};
		readyToFire[] = {"readytofire"};
		cannotFire[] = {"cannotfire"};
		canNotGetThere[] = {"cantgetthere"};
		needMedic[] = {"medic"};
		needAmmo[] = {"needammo"};
		needFuel[] = {"needFuel"};
		needRepairs[] = {"needRepairs"};
		supporting[] = {"supporting"};
		requestSupport[] = {"requestsupport"};
		form[] = {"form"};
		column[] = {"column"};
		StageredColumn[] = {"staggeredcolumn"};
		Wedge[] = {"wedge"};
		EchelonLeft[] = {"echelonleft"};
		EchelonRight[] = {"echelonright"};
		Vee[] = {"vee"};
		Line[] = {"line"};
		formColumn[] = {"formcolumn"};
		formStageredColumn[] = {"formstaggeredcolumn"};
		formWedge[] = {"formwedge"};
		formEchelonLeft[] = {"formechelonleft"};
		formEchelonRight[] = {"formechelonright"};
		formVee[] = {"formvee"};
		formLine[] = {"formline"};
		Careless[] = {"careless"};
		AtEase[] = {"atease"};
		StayAlert[] = {"stayalert"};
		Danger[] = {"danger"};
		FireAtWill[] = {"fireatwill"};
		WeaponsFree[] = {"weaponsfree"};
		GoGoGo[] = {"gogogo"};
		HoldFire[] = {"holdfire"};
		CeaseFire[] = {"ceasefire"};
		DontFire[] = {"dontfire"};
		engage[] = {"engage"};
		engageAtWill[] = {"engageatwill"};
		disengage[] = {"disengage"};
		goProne[] = {"goprone"};
		hitTheDirt[] = {"hitthedirt"};
		getDown[] = {"getdown"};
		standUp[] = {"standup"};
		keepLow[] = {"keeplow"};
		Advance[] = {"advance"};
		StayBack[] = {"stayback"};
		FlankLeft[] = {"flankleft"};
		FlankRight[] = {"flankright"};
		FireAt[] = {"fireat"};
		Are[] = {"are"};
		Is[] = {"is"};
		WaitForMe[] = {"waitforme"};
		Watch[] = {"watch"};
		scanHorizon[] = {"scanhorizon"};
		NoTarget[] = {"notarget"};
		KeepFormation[] = {"keepformation"};
		TakeWeaponFrom[] = {"takeweaponfrom"};
		TakeMagazineFrom[] = {"takemagazinefrom"};
		ReportStatus[] = {"reportstatus"};
		MoveTo[] = {"moveto"};
		GoTo[] = {"goto"};
		HealAt[] = {"healat"};
		repairAt[] = {"repairat"};
		refuelAt[] = {"refuelat"};
		rearmAt[] = {"rearmat"};
		returnToFormation[] = {"returntoformation"};
		fallBackIntoFormation[] = {"fallbackintoformation"};
		follow[] = {"follow"};
		attack[] = {"attack"};
		mount[] = {"getin"};
		getin[] = {"getin"};
		boardIn[] = {"boardin"};
		board[] = {"board"};
		disembark[] = {"disembark"};
		stop[] = {"halt"};
		halt[] = {"halt"};
		hide[] = {"takecover"};
		takeCover[] = {"takecover"};
		engaging[] = {"engaging"};
		attacking[] = {"attacking"};
		iAmOnHim[] = {"iamonhim"};
		roger[] = {"roger"};
		movingOn[] = {"movingon"};
		onTheWay[] = {"ontheway"};
		target[] = {"target"};
		forward[] = {"forward"};
		backward[] = {"reverse"};
		reverse[] = {"reverse"};
		fast[] = {"fast"};
		slow[] = {"slow"};
		left[] = {"left"};
		right[] = {"right"};
		fire[] = {"fire"};
		gunner[] = {"gunner"};
		commander[] = {"tankcommander"};
		driver[] = {"driver"};
		iVeGotHim[] = {"ivegothim"};
		isHistory[] = {"ishistory"};
		contact[] = {"contact"};
		underFire[] = {"underfire"};
		clear[] = {"clear"};
		whereAreYou[] = {"whereareyou"};
		repeat[] = {"repeat"};
		stealth[] = {"stealth"};
	};
	class Rob {
		variants[] = {0.95,1.0,1.05};
		directories[] = {"Rob\","Rob\"};
		name = "Rob";
	};
	class Adam {
		variants[] = {0.95,1.0,1.05};
		directories[] = {"Adam\","Rob\"};
		name = "Adam";
	};
	class Dan {
		variants[] = {0.95,1.0,1.05};
		directories[] = {"Dan\","Rob\"};
		name = "Dan";
	};
	class Greg {
		variants[] = {0.95,1.0,1.05};
		directories[] = {"Greg\","Rob\"};
		name = "Greg";
	};
	class George {
		variants[] = {0.95,1.0,1.05};
		directories[] = {"George\","Rob\"};
		name = "George";
	};
	class John {
		variants[] = {0.95,1.0,1.05};
		directories[] = {"John\","Rob\"};
		name = "John";
	};
	class Jonah {
		variants[] = {0.95,1.0,1.05};
		directories[] = {"Jonah\","Rob\"};
		name = "Jonah";
	};
	class Marc {
		variants[] = {0.95,1.0,1.05};
		directories[] = {"Marc\","Rob\"};
		name = "Marc";
	};
	class Patrick {
		variants[] = {0.95,1.0,1.05};
		directories[] = {"Patrick\","Rob\"};
		name = "Patrick";
	};
	class Paul {
		variants[] = {0.95,1.0,1.05};
		directories[] = {"Paul\","Rob\"};
		name = "Paul";
	};
	class Peter {
		variants[] = {0.95,1.0,1.05};
		directories[] = {"Peter\","Rob\"};
		name = "Peter";
	};
	class Rich {
		variants[] = {0.95,1.0,1.05};
		directories[] = {"Rich\","Rob\"};
		name = "Rich";
	};
	class Ted {
		variants[] = {0.95,1.0,1.05};
		directories[] = {"Ted\","Rob\"};
		name = "Ted";
	};
	class Tom {
		variants[] = {0.95,1.0,1.05};
		directories[] = {"Tom\","Rob\"};
		name = "Tom";
	};
};
class CfgHQIdentities {
	access = 1;
	class Base {
		name = "$STR_CFG_PAPABEAR";
		speaker = "Dan";
		pitch = 0.95;
	};
	class HQ {
		name = "$STR_CFG_PAPABEAR";
		speaker = "Greg";
		pitch = 1.05;
	};
	class PAPA_BEAR {
		name = "$STR_CFG_PAPABEAR";
		speaker = "Greg";
		pitch = 1.05;
	};
	class AirBase {
		name = "$STR_CFG_FIREFLYBASE";
		speaker = "Greg";
		pitch = 1.05;
	};
};
class CfgSFX {
	access = 1;
	seagull[] = {"animals\gulls1",0.031622775,1,1,0.2,1,5};
	class Preview {
		effect[] = {"sound\weapons\m16burst.wss",1.0,1.0};
		speech[] = {"voice\adam\isayagain.wss",1.0,1.0};
		music[] = {"music\13.ogg",1.0,1.0};
	};
	class Church {
		smallBell[] = {"Objects\bell1",0.099999994,1};
		largeBell[] = {"Objects\bell2",0.31622776,1};
	};
	class CA_AK {
		sounds[] = {"sound1","sound2"};
		name = "$STR_CFG_SFX_CA_AK";
		sound1[] = {"weapons\AK74single",0.099999994,1,0.5,0,2,5};
		sound2[] = {"weapons\AK74burst",0.099999994,1,0.4,0,1,10};
		empty[] = {"","","","",1,5,20};
	};
	class CA_M16 {
		sounds[] = {"sound1","sound2"};
		name = "$STR_CFG_SFX_CA_M16";
		sound1[] = {"weapons\M16single",0.099999994,1,0.5,0,2,5};
		sound2[] = {"weapons\M16burst",0.099999994,1,0.4,0,1,10};
		empty[] = {"","","","",1,5,20};
	};
	class CA_Expl1 {
		sounds[] = {"sound1"};
		name = "$STR_CFG_SFX_CA_EXPL1";
		sound1[] = {"weapons\explosion_large1",0.099999994,1,0.5,0,2,5};
		empty[] = {"","","","",1,5,30};
	};
	class hedgesparrow {
		sounds[] = {"sing1","sing2","sing3","sing4","sing5"};
		name = "$STR_CFG_SFX_HEDGESPARROW";
		sing1[] = {"animals\hedspar1",0.0031622774,1,0.1,0,0,0};
		sing2[] = {"animals\hedspar2",0.0031622774,1,0.2,0,0,0};
		sing3[] = {"animals\hedspar3",0.0031622774,1,0.1,0,0,0};
		sing4[] = {"animals\hedspar4",0.0031622774,1,0.2,0,0,0};
		sing5[] = {"animals\hedspar5",0.0031622774,1,0.3,0,0,0};
		empty[] = {"","","","",1,5,80};
	};
	class skylark {
		sounds[] = {"sing1","sing2","sing3","sing4","sing5","sing6","sing7"};
		name = "$STR_CFG_SFX_SKYLARK";
		sing1[] = {"animals\skylark7",0.01,1,0.1,0.2,0.4,1};
		sing2[] = {"animals\skylark6",0.01,1,0.2,0.2,0.3,1};
		sing3[] = {"animals\skylark5",0.01,1,0.1,0.1,0.2,1.2};
		sing4[] = {"animals\skylark4",0.01,1,0.2,0.1,0.2,1.2};
		sing5[] = {"animals\skylark3",0.01,1,0.1,0.3,0.4,0.75};
		sing6[] = {"animals\skylark2",0.01,1,0.1,0.2,0.4,0.8};
		sing7[] = {"animals\skylark1",0.01,1,0.1,0.1,0.5,0.8};
		empty[] = {"","","","",1,5,40};
	};
	class forestlark {
		sounds[] = {"sing1","sing2","sing3","sing4","sing5","sing6"};
		name = "$STR_CFG_SFX_FORESTLARK";
		sing1[] = {"animals\f_lark1",0.0031622774,1,0.1,0.0,0.1,0.2};
		sing2[] = {"animals\f_lark2",0.0031622774,1,0.1,0.0,0.1,0.2};
		sing3[] = {"animals\f_lark3",0.0031622774,1,0.1,0.0,0.1,0.2};
		sing4[] = {"animals\f_lark4",0.0031622774,1,0.1,0.0,0.1,0.2};
		sing5[] = {"animals\f_lark5",0.0031622774,1,0.2,0.0,0.1,0.2};
		sing6[] = {"animals\f_lark6",0.0031622774,1,0.2,0.0,0.1,0.2};
		sing7[] = {"animals\f_lark7",0.0031622774,1,0.2,0.0,0.1,0.2};
		empty[] = {"","","","",1,5,40};
	};
	class nightingale {
		sounds[] = {"sing1","sing2","sing3","sing4","sing5","sing6","sing7"};
		name = "$STR_CFG_SFX_NIGHTINGALE";
		sing1[] = {"animals\n_gale1",0.0031622774,1,0.2,0.1,0.2,0.3};
		sing2[] = {"animals\n_gale2",0.0031622774,1,0.1,0.1,0.2,0.3};
		sing3[] = {"animals\n_gale3",0.0031622774,1,0.2,0.1,0.2,0.3};
		sing4[] = {"animals\n_gale4",0.0031622774,1,0.1,0.1,0.2,0.3};
		sing5[] = {"animals\n_gale5",0.0031622774,1,0.1,0.1,0.2,0.3};
		sing6[] = {"animals\n_gale6",0.0031622774,1,0.2,0.1,0.2,0.3};
		sing7[] = {"animals\n_gale7",0.0031622774,1,0.1,0.1,0.2,0.3};
		empty[] = {"","","","",1,5,40};
	};
	class jay {
		sounds[] = {"sing1","sing2","sing3","sing4"};
		name = "$STR_CFG_SFX_JAY";
		sing1[] = {"animals\jay1",0.01,1,0.2,0.2,0.4,1};
		sing2[] = {"animals\jay2",0.01,1,0.2,0.2,0.3,1};
		sing3[] = {"animals\jay3",0.01,1,0.2,0.1,0.2,1.2};
		sing4[] = {"animals\jay4",0.01,1,0.2,0.1,0.2,1.2};
		empty[] = {"","","","",8,20,40};
	};
	class owl {
		sounds[] = {"sing1","sing2"};
		name = "$STR_CFG_SFX_OWL";
		sing1[] = {"animals\owl2_1",0.0031622774,1,0.2,0.0,0.5,1};
		sing2[] = {"animals\owl2_2",0.0031622774,1,0.2,0.0,0.5,1};
		empty[] = {"","","","",1,5,40};
	};
	class crow2 {
		sounds[] = {"sing1","sing2","sing3","sing4","sing5","sing6"};
		name = "$STR_CFG_SFX_CROW2";
		sing1[] = {"animals\crow2_1",0.01,1,0.1,0.2,0.4,1};
		sing2[] = {"animals\crow2_2",0.01,1,0.1,0.2,0.3,1};
		sing3[] = {"animals\crow2_3",0.01,1,0.1,0.1,0.2,1.2};
		sing4[] = {"animals\crow2_4",0.01,1,0.1,0.1,0.2,1.2};
		sing5[] = {"animals\crow2_5",0.01,1,0.1,0.1,0.2,1.2};
		sing6[] = {"animals\crow2_6",0.01,1,0.1,0.1,0.2,1.2};
		empty[] = {"","","","",1,5,50};
	};
	class frog2 {
		sounds[] = {"sing1","sing2","sing3"};
		name = "$STR_CFG_SFX_FROG2";
		sing1[] = {"animals\frog2_1",0.01,1,0.3,0.0,0.1,0.2};
		sing2[] = {"animals\frog2_2",0.01,1,0.3,0.0,0.1,0.2};
		sing3[] = {"animals\frog2_3",0.01,1,0.3,0.0,0.1,0.2};
		empty[] = {"","","","",1,5,40};
	};
	class SeagullSfx {
		sounds[] = {"seagull1","Seagull2","Seagull3","Seagull4","Seagull5"};
		name = "$STR_CFG_SFX_SEAGULL";
		seagull1[] = {"animals\gulls1",0.031622775,1,0.15,0.1,0.5,5};
		seagull2[] = {"animals\gulls2",0.031622775,1,0.2,0.1,0.5,5};
		seagull3[] = {"animals\gulls3",0.031622775,1,0.15,0.1,0.5,5};
		seagull4[] = {"animals\gulls4",0.031622775,1,0.24,0.1,0.5,5};
		seagull5[] = {"animals\gulls5",0.031622775,1,0.2,0.1,0.5,5};
		empty[] = {"","","","",0.2,2,20};
	};
	class StreamSfx {
		sounds[] = {"Stream01"};
		name = "$STR_DN_STREAM";
		Stream01[] = {"objects\stream",9.999998e-006,1,1,1,1,1};
		empty[] = {"","","","",0.0,0.0,0.0};
	};
	class AlarmSfx {
		sounds[] = {"Alarm"};
		name = "$STR_DN_ALARM";
		Alarm[] = {"objects\sirena",1.0,1,1,0.0,0.0,0.0};
		empty[] = {"","","","",0.0,0.0,0.0};
	};
	class Cricket1Sfx {
		sounds[] = {"Cricket01"};
		name = "$STR_DN_CRICKET1";
		Cricket01[] = {"animals\cricket01",0.0009999999,1,0.96,0.0,0.0,0.0};
		empty[] = {"","","","",0.0,2,60};
	};
	class Cricket2Sfx {
		sounds[] = {"Cricket01"};
		name = "$STR_DN_CRICKET2";
		Cricket01[] = {"animals\cricket02",0.0031622774,1,0.97,0.0,0.0,0.0};
		empty[] = {"","","","",0.0,3,60};
	};
	class Cricket3Sfx {
		sounds[] = {"Cricket01"};
		name = "$STR_DN_CRICKET3";
		Cricket01[] = {"animals\crickets06",0.0009999999,1,0.98,0.0,0.0,0.0};
		empty[] = {"","","","",0.0,6,60};
	};
	class CricketSfx {
		sounds[] = {"Cricket04"};
		name = "$STR_DN_CRICKET4";
		Cricket04[] = {"animals\crickets04",0.0009999999,1,1,0.0,0.0,0.0};
		empty[] = {"","","","",0.0,2,8};
	};
	class FrogSfx {
		sounds[] = {"Frog01","Frog02"};
		name = "$STR_DN_FROG";
		Frog01[] = {"animals\frog1_1",0.000977237,1,0.8,0.0,0.0,0.0};
		Frog02[] = {"animals\frog1_2",0.0009999999,1,0.1,0.0,0.0,0.0};
		empty[] = {"","","","",0.1,0.5,12};
	};
	class FrogsSfx {
		sounds[] = {"Frog01"};
		name = "$STR_DN_FROGS";
		Frog01[] = {"animals\frogs",0.0009999999,1,1,0.0,0.0,0.0};
		empty[] = {"","","","",0,0,0};
	};
	class OwlSfx {
		sounds[] = {"Owl1","Owl2"};
		name = "$STR_DN_OWL";
		Owl1[] = {"animals\owl1_1",0.0009999999,1,0.6,0.1,0.5,5};
		Owl2[] = {"animals\owl1_2",0.0009999999,1,0.2,0.1,0.5,5};
		empty[] = {"","","","",0.5,2,12};
	};
	class CowSfx {
		sounds[] = {"moo1","moo2"};
		name = "$STR_DN_COW";
		moo1[] = {"animals\cow_moo01",0.0009999999,1,0.4,0.1,0.5,5};
		moo2[] = {"animals\cow_moo02",0.0009999999,1,0.4,0.1,0.5,5};
		empty[] = {"","","","",0.1,0.5,2};
	};
	class WolfSfx {
		sounds[] = {"wolf1","wolf2","wolf3"};
		name = "$STR_DN_WOLF";
		wolf1[] = {"animals\wolf1",0.0009999999,1,0.3,0.1,0.5,5};
		wolf2[] = {"animals\wolf2",0.0009999999,1,0.3,0.1,0.5,5};
		wolf3[] = {"animals\wolf3",0.0009999999,1,0.3,0.1,0.5,5};
		empty[] = {"","","","",0.5,4,50};
	};
	class CrowSfx {
		sounds[] = {"crow1","crow2","crow3"};
		name = "$STR_DN_CROW";
		crow1[] = {"animals\crow1_1",0.0009999999,1,0.2,0.1,0.5,5};
		crow2[] = {"animals\crow1_2",0.0009999999,1,0.2,0.1,0.5,5};
		crow3[] = {"animals\crow1_3",0.0009999999,1,0.2,0.1,0.5,5};
		empty[] = {"","","","",2,10,30};
	};
	class DogSfx {
		sounds[] = {"dog1","dog2","dog3"};
		name = "$STR_DN_DOG";
		dog1[] = {"animals\dog_bark03",0.01,1,0.3,0.1,0.5,5};
		dog2[] = {"animals\dog_bark04",0.01,1,0.3,0.1,0.5,5};
		dog3[] = {"animals\dog_bark05",0.005623413,1,0.3,0.1,0.5,5};
		empty[] = {"","","","",3,15,90};
	};
	class SorrowDogSfx {
		sounds[] = {"sorrowdog1","sorrowdog2","sorrowdog3","sorrowdog4"};
		name = "$STR_DN_SORROW_DOG";
		sorrowdog1[] = {"animals\dog_bark04",0.01,1,0.2,0.1,0.5,5};
		sorrowdog2[] = {"animals\dog_bark05",0.01,1,0.2,0.1,0.5,5};
		sorrowdog3[] = {"animals\dog_yelp02",0.005623413,1,0.2,0.1,0.5,5};
		sorrowdog4[] = {"animals\dog_yelp03",0.0031622774,1,0.2,0.1,0.5,5};
		empty[] = {"","","","",0.2,3,8};
	};
	class BadDogSfx {
		sounds[] = {"baddog1","baddog2","baddog3"};
		name = "$STR_DN_BAD_DOG";
		baddog1[] = {"animals\dog_bark04",0.014125374,1,0.3,0.1,0.5,5};
		baddog2[] = {"animals\dog_bark05",0.014125374,1,0.3,0.1,0.5,5};
		baddog3[] = {"animals\dog_maul01",0.017782792,1,0.3,0.1,0.5,5};
		empty[] = {"","","","",0.1,2,5};
	};
	class LittleDogSfx {
		sounds[] = {"littledog1"};
		name = "$STR_DN_LITTLE_DOG";
		littledog1[] = {"animals\dog_bark04",0.0017782792,1,0.8,0.1,0.5,5};
		empty[] = {"","","","",0.2,5,3,8};
	};
	class BirdSingingSfx {
		sounds[] = {"sing1","sing1a","sing2","sing2a","sing3","sing4","sing5","sing6","sing7","sing8","sing9"};
		name = "$STR_DN_BIRDSING";
		sing1[] = {"animals\birdsing01",0.0031622774,1,0.1,0.2,0.4,1};
		sing1a[] = {"animals\birdsing01",0.0017782792,1,0.08,0.2,0.3,1};
		sing2[] = {"animals\birdsing02",0.0009999999,1,0.1,0.1,0.2,1.2};
		sing2a[] = {"animals\birdsing02",0.005623413,1,0.08,0.1,0.2,1.2};
		sing3[] = {"animals\birdsing03",0.0031622774,1,0.08,0.3,0.4,0.75};
		sing4[] = {"animals\birdsing04",0.0031622774,1,0.08,0.2,0.4,0.8};
		sing5[] = {"animals\birdsing05",0.0031622774,1,0.08,0.1,0.5,0.8};
		sing6[] = {"animals\birdsing06",0.0031622774,1,0.08,0.1,0.3,0.8};
		sing7[] = {"animals\birdsing07",0.0031622774,1,0.08,0.1,0.6,0.8};
		sing8[] = {"animals\birdsing08",0.0017782792,1,0.08,0.1,0.6,0.8};
		sing9[] = {"animals\birdsing09",0.0017782792,1,0.08,0.1,0.6,0.8};
		empty[] = {"","","","",1,5,80};
	};
	class CockSfx {
		sounds[] = {"cock"};
		name = "$STR_DN_COCK";
		cock[] = {"animals\cock",0.01,1,0.5,0.1,0.5,5};
		empty[] = {"","","","","",1,30,90};
	};
	class ChickenSfx {
		sounds[] = {"chicken1","chicken2"};
		name = "$STR_DN_CHICKEN";
		chicken1[] = {"animals\chicken01",0.0031622774,1,0.3,0.1,0.5,5};
		chicken2[] = {"animals\chicken02",0.0031622774,1,0.3,0.1,0.5,5};
		empty[] = {"","","","","",1,20,60};
	};
	class FunMusicSfx {
		sounds[] = {"music1"};
		name = "'Music'";
		music1[] = {"Objects\Fun_music",0.0031622774,1,1,0,0,0};
		empty[] = {"","","","","",0,0,0};
	};
};
class CfgEnvSounds {
	access = 1;
	class Default {
		name = "$STR_CFG_ENVSOUNDS_DEFAULT";
		sound[] = {"$DEFAULT$",0,1};
		soundNight[] = {"$DEFAULT$",0,1};
	};
	class Rain {
		name = "$STR_DN_RAIN";
		sound[] = {"Environmental\Rain_hard",0.0017782792,1};
		soundNight[] = {"Environmental\Rain_hard",0.0017782792,1};
	};
	class Sea {
		name = "$STR_DN_SEA";
		sound[] = {"environmental\wave_break",0.00031622773,1};
		soundNight[] = {"environmental\wave_break",0.00031622773,1};
	};
	class Meadows {
		name = "$STR_DN_MEADOWS";
		sound[] = {"animals\crickets07",5.6234123e-005,1};
		soundNight[] = {"animals\crickets03",5.6234123e-005,1};
	};
	class Trees {
		name = "$STR_DN_TREES";
		sound[] = {"environmental\treesbirds",0.00017782791,1};
		soundNight[] = {"animals\crickets03",0.00017782791,1};
	};
	class Hills {
		name = "$STR_DN_HILLS";
		sound[] = {"environmental\wind_heavy",0.00017782791,1};
		soundNight[] = {"environmental\wind_whistle",0.00017782791,1};
	};
	class Combat {
		name = "$STR_CFG_ENVSOUNDS_COMBAT";
		sound[] = {"environmental\battle1",0.01,1};
		soundNight[] = {"environmental\battle2",0.01,1};
	};
};
class CfgDestroy {
	access = 1;
	class EngineHit {
		sound[] = {"Explosions\fuel_explosion",10.0,1};
	};
	class BuildingHit {
		sound[] = {"Explosions\BuildingHit",10.0,1};
	};
	class TreeHit {
		sound[] = {"Explosions\Treehit1",0.031622775,1};
	};
};
class CfgHeads {
	access = 1;
	class Air {
		friction = 10;
		movement = 160;
		maxAmp = 0.05;
		maxSpeed = 3;
		radius = 0.2;
	};
	class Land {
		friction = 20;
		movement = 260;
		maxAmp = 0.1;
		maxSpeed = 4;
		radius = 0.3;
	};
};
class CfgEffects {
	access = 1;
	class ThunderboltNorm {
		model = "blesk1.p3d";
		soundNear[] = {"Environmental\thundershort",316.22778,1};
		soundFar[] = {"Environmental\thunderlong",316.22778,1};
	};
	class ThunderboltHeavy {
		model = "blesk2.p3d";
		soundNear[] = {"Environmental\thunderhard",316.22778,1};
		soundFar[] = {"Environmental\thunder",316.22778,1};
	};
	class Rain {
		texture = "desta.01.paa";
	};
};
class CfgWindows {
	access = 1;
	textureWindow = "oknozhas.pac";
	textureWindowShine = "oknosvit.pac";
	textureWindowBroken = "strepyzhas.pac";
	textuerWindowMan = "chlapvokne.pac";
	soundWindowBroken[] = {"43glass",1,1};
	soundDoor[] = {"door",0.7,1};
};
class CfgMusic {
	access = 1;
	class 7thDecide {
		name = "$STR_CFG_MUSIC_7TH_DECIDE";
		sound[] = {"\Music\Seventh_decide.ogg",1.0,1.0};
	};
	class 7thIAmGonaFly {
		name = "$STR_CFG_MUSIC_7TH_IAMGONAFLY";
		sound[] = {"\Music\Seventh_iamgonnafly.ogg",1.0,1.0};
	};
	class 7thLifeless {
		name = "$STR_CFG_MUSIC_7TH_LIFELESS";
		sound[] = {"\Music\Seventh_lifeless.ogg",1.0,1.0};
	};
	class 7thOverdose {
		name = "$STR_CFG_MUSIC_7TH_OVERDOSE";
		sound[] = {"\Music\Seventh_overdose.ogg",1.0,1.0};
	};
	class Track1 {
		name = "$STR_CFG_MUSIC_TRACK1";
		sound[] = {"\Music\01.ogg",1.0,1.0};
	};
	class Track2 {
		name = "$STR_CFG_MUSIC_TRACK2";
		sound[] = {"\Music\02.ogg",1.0,1.0};
	};
	class Track3 {
		name = "$STR_CFG_MUSIC_TRACK3";
		sound[] = {"\Music\03.ogg",1.0,1.0};
	};
	class Track4 {
		name = "$STR_CFG_MUSIC_TRACK4";
		sound[] = {"\Music\04.ogg",1.0,1.0};
	};
	class Track5 {
		name = "$STR_CFG_MUSIC_TRACK5";
		sound[] = {"\Music\05.ogg",1.0,1.0};
	};
	class Track6 {
		name = "$STR_CFG_MUSIC_TRACK6";
		sound[] = {"\Music\06.ogg",1.0,1.0};
	};
	class Track7 {
		name = "$STR_CFG_MUSIC_TRACK7";
		sound[] = {"\Music\07.ogg",1.0,1.0};
	};
	class Track8 {
		name = "$STR_CFG_MUSIC_TRACK8";
		sound[] = {"\Music\08.ogg",1.0,1.0};
	};
	class Track9 {
		name = "$STR_CFG_MUSIC_TRACK9";
		sound[] = {"\Music\09.ogg",1.0,1.0};
	};
	class Track10 {
		name = "$STR_CFG_MUSIC_TRACK10";
		sound[] = {"\Music\10.ogg",1.0,1.0};
	};
	class Track11 {
		name = "$STR_CFG_MUSIC_TRACK11";
		sound[] = {"\Music\11.ogg",1.0,1.0};
	};
	class Track12 {
		name = "$STR_CFG_MUSIC_TRACK12";
		sound[] = {"\Music\12.ogg",1.0,1.0};
	};
	class Track13 {
		name = "$STR_CFG_MUSIC_TRACK13";
		sound[] = {"\Music\13.ogg",1.0,1.0};
	};
	class Track14 {
		name = "$STR_CFG_MUSIC_TRACK14";
		sound[] = {"\Music\14.ogg",1.0,1.0};
	};
	class Track15 {
		name = "$STR_CFG_MUSIC_TRACK15";
		sound[] = {"\Music\15.ogg",1.0,1.0};
	};
	class Track16 {
		name = "$STR_CFG_MUSIC_TRACK16";
		sound[] = {"\Music\16.ogg",1.0,1.0};
	};
	class Frost {
		name = "$STR_CFG_MUSIC_FROST";
		sound[] = {"\Music\frost.ogg",1.0,1.0};
	};
};
class CfgSounds {
	access = 1;
	class Rus1 {
		name = "$STR_CFG_SOUNDS_RUS1";
		sound[] = {"voices\rus_amerikanskije",0.099999994,1.0};
		titles[] = {};
	};
	class Rus2 {
		name = "$STR_CFG_SOUNDS_RUS2";
		sound[] = {"voices\rus_begite",0.099999994,1.0};
		titles[] = {};
	};
	class Rus3 {
		name = "$STR_CFG_SOUNDS_RUS3";
		sound[] = {"voices\rus_cjerta",0.099999994,1.0};
		titles[] = {};
	};
	class Rus4 {
		name = "$STR_CFG_SOUNDS_RUS4";
		sound[] = {"voices\rus_cjort",0.099999994,1.0};
		titles[] = {};
	};
	class Rus5 {
		name = "$STR_CFG_SOUNDS_RUS5";
		sound[] = {"voices\rus_cjort",0.099999994,1.0};
		titles[] = {};
	};
	class Rus6 {
		name = "$STR_CFG_SOUNDS_RUS6";
		sound[] = {"voices\rus_hejty",0.099999994,1.0};
		titles[] = {};
	};
	class Rus7 {
		name = "$STR_CFG_SOUNDS_RUS7";
		sound[] = {"voices\rus_jazdajus",0.099999994,1.0};
		titles[] = {};
	};
	class Rus8 {
		name = "$STR_CFG_SOUNDS_RUS8";
		sound[] = {"voices\rus_mamocka",0.099999994,1.0};
		titles[] = {};
	};
	class Rus9 {
		name = "$STR_CFG_SOUNDS_RUS9";
		sound[] = {"voices\rus_nestrelajte",0.099999994,1.0};
		titles[] = {};
	};
	class Rus10 {
		name = "$STR_CFG_SOUNDS_RUS10";
		sound[] = {"voices\rus_ogon",0.099999994,1.0};
		titles[] = {};
	};
	class Rus11 {
		name = "$STR_CFG_SOUNDS_RUS11";
		sound[] = {"voices\rus_ostonovitogon",0.099999994,1.0};
		titles[] = {};
	};
	class Rus12 {
		name = "$STR_CFG_SOUNDS_RUS12";
		sound[] = {"voices\rus_otchodi",0.099999994,1.0};
		titles[] = {};
	};
	class Rus13 {
		name = "$STR_CFG_SOUNDS_RUS13";
		sound[] = {"voices\rus_pamagite",0.099999994,1.0};
		titles[] = {};
	};
	class Rus14 {
		name = "$STR_CFG_SOUNDS_RUS14";
		sound[] = {"voices\rus_stoj",0.099999994,1.0};
		titles[] = {};
	};
	class Rus15 {
		name = "$STR_CFG_SOUNDS_RUS15";
		sound[] = {"voices\rus_trevoga",0.099999994,1.0};
		titles[] = {};
	};
	class Rus16 {
		name = "$STR_CFG_SOUNDS_RUS16";
		sound[] = {"voices\rus_vodka1",0.099999994,1.0};
		titles[] = {};
	};
	class Rus17 {
		name = "$STR_CFG_SOUNDS_RUS17";
		sound[] = {"voices\rus_vodka2",0.099999994,1.0};
		titles[] = {};
	};
	class Rus18 {
		name = "$STR_CFG_SOUNDS_RUS18";
		sound[] = {"voices\rus_vperjod",0.099999994,1.0};
		titles[] = {};
	};
	class Rus19 {
		name = "$STR_CFG_SOUNDS_RUS19";
		sound[] = {"voices\rus_zdescisto",0.099999994,1.0};
		titles[] = {};
	};
	class Rus20 {
		name = "$STR_CFG_SOUNDS_RUS20";
		sound[] = {"voices\rus_zdochni",0.099999994,1.0};
		titles[] = {};
	};
	class Eng1 {
		name = "$STR_CFG_SOUNDS_ENG1";
		sound[] = {"voices\eng_bastards1",0.099999994,1.0};
		titles[] = {};
	};
	class Eng2 {
		name = "$STR_CFG_SOUNDS_ENG2";
		sound[] = {"voices\eng_bastards2",0.099999994,1.0};
		titles[] = {};
	};
	class Eng3 {
		name = "$STR_CFG_SOUNDS_ENG3";
		sound[] = {"voices\eng_bastards3",0.099999994,1.0};
		titles[] = {};
	};
	class Eng4 {
		name = "$STR_CFG_SOUNDS_ENG4";
		sound[] = {"voices\eng_commie1",0.099999994,1.0};
		titles[] = {};
	};
	class Eng5 {
		name = "$STR_CFG_SOUNDS_ENG5";
		sound[] = {"voices\eng_commie2",0.099999994,1.0};
		titles[] = {};
	};
	class Eng6 {
		name = "$STR_CFG_SOUNDS_ENG6";
		sound[] = {"voices\eng_coverme1",0.099999994,1.0};
		titles[] = {};
	};
	class Eng7 {
		name = "$STR_CFG_SOUNDS_ENG7";
		sound[] = {"voices\eng_coverme2",0.099999994,1.0};
		titles[] = {};
	};
	class Eng8 {
		name = "$STR_CFG_SOUNDS_ENG8";
		sound[] = {"voices\eng_die1",0.099999994,1.0};
		titles[] = {};
	};
	class Eng9 {
		name = "$STR_CFG_SOUNDS_ENG9";
		sound[] = {"voices\eng_die2",0.099999994,1.0};
		titles[] = {};
	};
	class Eng10 {
		name = "$STR_CFG_SOUNDS_ENG10";
		sound[] = {"voices\eng_die3",0.099999994,1.0};
		titles[] = {};
	};
	class Eng11 {
		name = "$STR_CFG_SOUNDS_ENG11";
		sound[] = {"voices\eng_dontshoot",0.099999994,1.0};
		titles[] = {};
	};
	class Eng12 {
		name = "$STR_CFG_SOUNDS_ENG12";
		sound[] = {"voices\eng_enemyspotted",0.099999994,1.0};
		titles[] = {};
	};
	class Eng13 {
		name = "$STR_CFG_SOUNDS_ENG13";
		sound[] = {"voices\eng_everyoneout1",0.099999994,1.0};
		titles[] = {};
	};
	class Eng14 {
		name = "$STR_CFG_SOUNDS_ENG14";
		sound[] = {"voices\eng_everyoneout2",0.099999994,1.0};
		titles[] = {};
	};
	class Eng15 {
		name = "$STR_CFG_SOUNDS_ENG15";
		sound[] = {"voices\eng_forward",0.099999994,1.0};
		titles[] = {};
	};
	class Eng16 {
		name = "$STR_CFG_SOUNDS_ENG16";
		sound[] = {"voices\eng_gettoutahere1",0.099999994,1.0};
		titles[] = {};
	};
	class Eng17 {
		name = "$STR_CFG_SOUNDS_ENG17";
		sound[] = {"voices\eng_gettoutahere2",0.099999994,1.0};
		titles[] = {};
	};
	class Eng18 {
		name = "$STR_CFG_SOUNDS_ENG18";
		sound[] = {"voices\eng_gettoyourpositions1",0.099999994,1.0};
		titles[] = {};
	};
	class Eng19 {
		name = "$STR_CFG_SOUNDS_ENG19";
		sound[] = {"voices\eng_gettoyourpositions2",0.099999994,1.0};
		titles[] = {};
	};
	class Eng20 {
		name = "$STR_CFG_SOUNDS_ENG20";
		sound[] = {"voices\eng_gogogo1",0.099999994,1.0};
		titles[] = {};
	};
	class Eng21 {
		name = "$STR_CFG_SOUNDS_ENG21";
		sound[] = {"voices\eng_gogogo2",0.099999994,1.0};
		titles[] = {};
	};
	class Eng22 {
		name = "$STR_CFG_SOUNDS_ENG22";
		sound[] = {"voices\eng_help1",0.099999994,1.0};
		titles[] = {};
	};
	class Eng23 {
		name = "$STR_CFG_SOUNDS_ENG23";
		sound[] = {"voices\eng_help2",0.099999994,1.0};
		titles[] = {};
	};
	class Eng24 {
		name = "$STR_CFG_SOUNDS_ENG24";
		sound[] = {"voices\eng_hey1",0.099999994,1.0};
		titles[] = {};
	};
	class Eng25 {
		name = "$STR_CFG_SOUNDS_ENG25";
		sound[] = {"voices\eng_hey2",0.099999994,1.0};
		titles[] = {};
	};
	class Eng26 {
		name = "$STR_CFG_SOUNDS_ENG26";
		sound[] = {"voices\eng_hey3",0.099999994,1.0};
		titles[] = {};
	};
	class Eng27 {
		name = "$STR_CFG_SOUNDS_ENG27";
		sound[] = {"voices\eng_letemhaveit1",0.099999994,1.0};
		titles[] = {};
	};
	class Eng28 {
		name = "$STR_CFG_SOUNDS_ENG28";
		sound[] = {"voices\eng_letemhaveit2",0.099999994,1.0};
		titles[] = {};
	};
	class Eng29 {
		name = "$STR_CFG_SOUNDS_ENG29";
		sound[] = {"voices\eng_lookout1",0.099999994,1.0};
		titles[] = {};
	};
	class Eng30 {
		name = "$STR_CFG_SOUNDS_ENG30";
		sound[] = {"voices\eng_lookout2",0.099999994,1.0};
		titles[] = {};
	};
	class Eng31 {
		name = "$STR_CFG_SOUNDS_ENG31";
		sound[] = {"voices\eng_lookout3",0.099999994,1.0};
		titles[] = {};
	};
	class Eng32 {
		name = "$STR_CFG_SOUNDS_ENG32";
		sound[] = {"voices\eng_medic1",0.099999994,1.0};
		titles[] = {};
	};
	class Eng33 {
		name = "$STR_CFG_SOUNDS_ENG33";
		sound[] = {"voices\eng_medic2",0.099999994,1.0};
		titles[] = {};
	};
	class Eng34 {
		name = "$STR_CFG_SOUNDS_ENG34";
		sound[] = {"voices\eng_medic3",0.099999994,1.0};
		titles[] = {};
	};
	class Eng35 {
		name = "$STR_CFG_SOUNDS_ENG35";
		sound[] = {"voices\eng_sectorclear1",0.099999994,1.0};
		titles[] = {};
	};
	class Eng36 {
		name = "$STR_CFG_SOUNDS_ENG36";
		sound[] = {"voices\eng_sectorclear2",0.099999994,1.0};
		titles[] = {};
	};
	class Eng37 {
		name = "$STR_CFG_SOUNDS_ENG37";
		sound[] = {"voices\eng_staysharp",0.099999994,1.0};
		titles[] = {};
	};
	class Eng38 {
		name = "$STR_CFG_SOUNDS_ENG38";
		sound[] = {"voices\eng_surrender",0.099999994,1.0};
		titles[] = {};
	};
	class Eng39 {
		name = "$STR_CFG_SOUNDS_ENG39";
		sound[] = {"voices\eng_underattack",0.099999994,1.0};
		titles[] = {};
	};
	class Eng40 {
		name = "$STR_CFG_SOUNDS_ENG40";
		sound[] = {"voices\eng_whosthere1",0.099999994,1.0};
		titles[] = {};
	};
	class Eng41 {
		name = "$STR_CFG_SOUNDS_ENG41";
		sound[] = {"voices\eng_whosthere2",0.099999994,1.0};
		titles[] = {};
	};
	class Alarm {
		name = "$STR_CFG_SOUNDS_ALARM";
		sound[] = {"objects\air_raid",1.0,1.0};
		titles[] = {};
	};
	class Explosion1 {
		name = "$STR_CFG_SOUNDS_EXPLOSION1";
		sound[] = {"Explosions\Explosion_Small2",1.0,1.0};
		titles[] = {};
	};
	class Explosion2 {
		name = "$STR_CFG_SOUNDS_EXPLOSION2";
		sound[] = {"Explosions\Building_Demolition",1.0,1.0};
		titles[] = {};
	};
	class Fountain {
		name = "$STR_CFG_SOUNDS_FOUNTAIN";
		sound[] = {"Objects\stream",9.999998e-005,1.0};
		titles[] = {};
	};
	class Fire {
		name = "$STR_CFG_SOUNDS_FIRE";
		sound[] = {"Objects\fire",0.0002511886,1.0};
		titles[] = {};
	};
};
class CfgTitles {
	access = 1;
	titles[] = {"Sphere","BISLogo","TVSet"};
	class Sphere {
		name = "$STR_CFG_TITLES_SPHERE";
		model = "koule.p3d";
		duration = 5;
		camera[] = {0,0,-10};
	};
	class BISLogo {
		name = "$STR_CFG_TITLES_BISLOGO";
		model = "bohemiaolor2.p3d";
		duration = 3;
		camera[] = {0,0,-200};
	};
	class TVSet {
		name = "$STR_CFG_TITLES_TVSET";
		duration = 1000;
		model = "TVhi.p3d";
		camera[] = {0,0,-0.7};
	};
};
class CfgIntro {
	firstCampaign = "";
};
class CfgCredits {
	cutscene = "xxcredits.eden";
};
class CfgCutScenes {
	access = 1;
	class Refuel {
		sound[] = {"weapons\missload",0.5,0.2};
		titleType = 1;
		title = "$STR_CFG_CUTSCENES_REFUEL";
	};
	class Rearm {
		sound[] = {"weapons\missload",0.3,1};
		titleType = 1;
		title = "$STR_CFG_CUTSCENES_REARM";
	};
	class Repair {
		sound[] = {"weapons\missload",0.1,1};
		titleType = 1;
		title = "$STR_CFG_CUTSCENES_REPAIR";
	};
	class Heal {
		sound[] = {"weapons\missload",0.1,1};
		titleType = 1;
		title = "$STR_CFG_CUTSCENES_HEALING";
	};
	class TakeWeapon {
		sound[] = {"weapons\missload",0.1,1};
		titleType = 1;
		title = "$STR_CFG_CUTSCENES_TAKEWEAPON";
	};
	class TakeMagazine {
		sound[] = {"weapons\missload",0.1,1};
		titleType = 1;
		title = "$STR_CFG_CUTSCENES_TAKEMAGAZINE";
	};
	class DropWeapon {
		sound[] = {"weapons\missload",0.1,1};
		titleType = 1;
		title = "$STR_CFG_CUTSCENES_DROPWEAPON";
	};
	class DropMagazine {
		sound[] = {"weapons\missload",0.1,1};
		titleType = 1;
		title = "$STR_CFG_CUTSCENES_DROPMAGAZINE";
	};
};
class CfgCameraEffects {
	access = 1;
	class Interpolated {
		type = 0;
		scale = 0.1;
		duration = 5;
		spline = 1;
		show = 2;
	};
	class Exact: Interpolated {
		scale = -1;
	};
	class Chain {
		type = 3;
		show = 2;
	};
	class Array {
		class Terminate {
			name = "$STR_CFG_CAMEFFECTS_TERMINATE";
			type = 4;
			show = 0;
		};
		class Internal {
			name = "$STR_CFG_CAMEFFECTS_INTERNAL";
			type = 5;
			show = 2;
		};
		class ZoomIn: Interpolated {
			name = "$STR_CFG_CAMEFFECTS_ZOOMIN";
			file = "\anim\cam_zoom_in_front";
			scale = 0.1;
			duration = 5;
		};
		class ZoomInSlow: Interpolated {
			name = "$STR_CFG_CAMEFFECTS_ZOOMINSLOW";
			file = "\anim\cam_zoom_in_front";
			scale = 0.1;
			duration = 15;
		};
		class Around: Interpolated {
			name = "$STR_CFG_CAMEFFECTS_AROUND";
			file = "\anim\cam_360";
			duration = 10;
			scale = 0.3;
		};
		class AroundSlow: Interpolated {
			name = "$STR_CFG_CAMEFFECTS_AROUNDSLOW";
			file = "\anim\cam_360";
			duration = 20;
			scale = 0.3;
		};
		class ZoomAndAround: Chain {
			name = "$STR_CFG_CAMEFFECTS_ZOOMAROUND";
			chain[] = {"ZoomIn","Around"};
		};
		class AroundAndZoomINSlow: Chain {
			name = "$STR_CFG_CAMEFFECTS_AROUNDZOOMSLOW";
			chain[] = {"AroundSlow","ZoomInSlow"};
		};
		class ZoomInS: Interpolated {
			name = "$STR_CFG_CAMEFFECTS_ZOOMINS";
			file = "cam_s_zoom_in";
			duration = 5;
			scale = 1;
			show = 0;
		};
		class Fixed: Interpolated {
			name = "$STR_CFG_CAMEFFECTS_FIXED";
			type = 1;
			duration = 10;
		};
		class FixedWithZoom: Fixed {
			name = "$STR_CFG_CAMEFFECTS_FIXEDZOOM";
			type = 2;
			duration = 10;
		};
		class External: Fixed {
			name = "$STR_CFG_CAMEFFECTS_EXTERNAL";
			type = 0;
			duration = 5;
			file = "";
		};
	};
};
class CfgMarkers {
	class Flag {
		name = "$STR_CFG_MARKERS_FLAG";
		icon = "marker_objective.paa";
		color[] = {0.7,0.1,0.0,0.8};
		size = 32;
	};
	class Flag1 {
		name = "$STR_CFG_MARKERS_FLAG1";
		icon = "marker_waypoint.paa";
		color[] = {0.7,0.1,0.0,0.8};
		size = 32;
	};
	class Dot {
		name = "$STR_CFG_MARKERS_DOT";
		icon = "marker_dot.paa";
		color[] = {0.7,0.1,0.0,0.8};
		size = 32;
	};
	class Destroy {
		name = "$STR_CFG_MARKERS_DESTROY";
		icon = "marker_destroy.paa";
		color[] = {0.7,0.1,0.0,0.8};
		size = 32;
	};
	class Start {
		name = "$STR_CFG_MARKERS_START";
		icon = "marker_start.paa";
		color[] = {0.0,0.6,0.0,0.8};
		size = 32;
	};
	class End {
		name = "$STR_CFG_MARKERS_END";
		icon = "marker_goal.paa";
		color[] = {0,0,0,0.8};
		size = 32;
	};
	class Warning {
		name = "$STR_CFG_MARKERS_WARNING";
		icon = "marker_exclamation.paa";
		color[] = {0,0,0,0.8};
		size = 32;
	};
	class Join {
		name = "$STR_CFG_MARKERS_JOIN";
		icon = "marker_join.paa";
		color[] = {0,0,0,0.8};
		size = 32;
	};
	class Pickup {
		name = "$STR_CFG_MARKERS_PICKUP";
		icon = "marker_pickup.paa";
		color[] = {0,0,0,0.8};
		size = 32;
	};
	class Unknown {
		name = "$STR_CFG_MARKERS_UNKNOWN";
		icon = "marker_question.paa";
		color[] = {0,0,0,0.8};
		size = 32;
	};
	class Marker {
		name = "$STR_CFG_MARKERS_MARKER";
		icon = "marker_x.paa";
		color[] = {0,0,0,0.8};
		size = 32;
	};
	class Arrow {
		name = "$STR_CFG_MARKERS_ARROW";
		icon = "marker_sipka.paa";
		color[] = {0.7,0.1,0.0,0.8};
		size = 32;
	};
	class Empty {
		name = "$STR_CFG_MARKERS_EMPTY";
		icon = "marker_empty.paa";
		color[] = {0.0,0.0,0.2,1.0};
		size = 0;
	};
};
class CfgMarkerColors {
	class Default {
		name = "$STR_CFG_MARKERCOL_DEFAULT";
		color[] = {0,0,0,0.8};
	};
	class ColorBlack {
		name = "$STR_CFG_MARKERCOL_BLACK";
		color[] = {0,0,0,0.8};
	};
	class ColorRed {
		name = "$STR_CFG_MARKERCOL_RED";
		color[] = {0.7,0.1,0.0,0.8};
	};
	class ColorRedAlpha {
		name = "$STR_CFG_MARKERCOL_REDALPHA";
		color[] = {0.7,0.1,0.0,0.65};
	};
	class ColorGreen {
		name = "$STR_CFG_MARKERCOL_GREEN";
		color[] = {0.0,0.6,0.0,0.8};
	};
	class ColorGreenAlpha {
		name = "$STR_CFG_MARKERCOL_GREENALPHA";
		color[] = {0.0,0.6,0.0,0.65};
	};
	class ColorBlue {
		name = "$STR_CFG_MARKERCOL_BLUE";
		color[] = {0.1,0.1,0.9,0.8};
	};
	class ColorYellow {
		name = "$STR_CFG_MARKERCOL_YELLOW";
		color[] = {0.8,0.6,0.0,0.8};
	};
	class ColorWhite {
		name = "$STR_CFG_MARKERCOL_WHITE";
		color[] = {0.8,0.8,0.8,1};
	};
};
class CfgMarkerBrushes {
	class Solid {
		name = "$STR_CFG_MARKERBR_SOLID";
		texture = "";
	};
	class Horizontal {
		name = "$STR_CFG_MARKERBR_HORIZONTAL";
		texture = "90_horizontal.paa";
	};
	class Vertical {
		name = "$STR_CFG_MARKERBR_VERTICAL";
		texture = "90_vertical.paa";
	};
	class Grid {
		name = "$STR_CFG_MARKERBR_GRID";
		texture = "90_mrizka.paa";
	};
	class FDiagonal {
		name = "$STR_CFG_MARKERBR_FDIAGONAL";
		texture = "45_lp.paa";
	};
	class BDiagonal {
		name = "$STR_CFG_MARKERBR_BDIAGONAL";
		texture = "45_pl.paa";
	};
	class DiagGrid {
		name = "$STR_CFG_MARKERBR_DIAGGRID";
		texture = "45_mrizka.paa";
	};
	class Cross {
		name = "$STR_CFG_MARKERBR_CROSS";
		texture = "krizek.paa";
	};
};
class CfgWorlds {
	access = 1;
	eastSign = "east_01.paa";
	westSign = "west_01.paa";
	eastFlag = "rus_vlajka.pac";
	westFlag = "usa_vlajka.pac";
	guerrilaSign = "guer_01.paa";
	guerrilaFlag = "guer_01.paa";
	class GroupNameList {
		letters[] = {"Alpha","Bravo","Charlie","Delta","Echo","Foxtrot","Golf","Hotel","Kilo"};
	};
	class GroupNames {
		class Alpha {
			name = "$STR_CFG_GRPNAMES_ALPHA";
			image = "a.paa";
		};
		class Bravo {
			name = "$STR_CFG_GRPNAMES_BRAVO";
			image = "b.paa";
		};
		class Charlie {
			name = "$STR_CFG_GRPNAMES_CHARLIE";
			image = "c.paa";
		};
		class Delta {
			name = "$STR_CFG_GRPNAMES_DELTA";
			image = "d.paa";
		};
		class Echo {
			name = "$STR_CFG_GRPNAMES_ECHO";
			image = "e.paa";
		};
		class Foxtrot {
			name = "$STR_CFG_GRPNAMES_FOXTROT";
			image = "f.paa";
		};
		class Golf {
			name = "$STR_CFG_GRPNAMES_GOLF";
			image = "g.paa";
		};
		class Hotel {
			name = "$STR_CFG_GRPNAMES_HOTEL";
			image = "h.paa";
		};
		class November {
			name = "$STR_CFG_GRPNAMES_NOVEMBER";
			image = "a.paa";
		};
		class Kilo {
			name = "$STR_CFG_GRPNAMES_KILO";
			image = "a.paa";
		};
		class Yankee {
			name = "$STR_CFG_GRPNAMES_YANKEE";
			image = "a.paa";
		};
		class Zulu {
			name = "$STR_CFG_GRPNAMES_ZULU";
			image = "a.paa";
		};
		class Two {
			name = "$STR_CFG_GRPNAMES_TWO";
			image = "a.paa";
		};
		class Three {
			name = "$STR_CFG_GRPNAMES_THREE";
			image = "a.paa";
		};
		class Buffalo {
			name = "$STR_CFG_GRPNAMES_BUFFALO";
			image = "a.paa";
		};
		class Guardian {
			name = "$STR_CFG_GRPNAMES_GUARDIAN";
			image = "a.paa";
		};
		class Convoy {
			name = "$STR_CFG_GRPNAMES_CONVOY";
			image = "a.paa";
		};
		class Fox {
			name = "$STR_CFG_GRPNAMES_FOX";
			image = "a.paa";
		};
	};
	class GroupColorList {
		colors[] = {"GroupColor1","GroupColor2","GroupColor3","GroupColor4","GroupColor5","GroupColor6","GroupColor7"};
	};
	class GroupColors {
		class GroupColor1 {
			name = "$STR_CFG_GRPCOL_BLACK";
			image = "black.paa";
		};
		class GroupColor2 {
			name = "$STR_CFG_GRPCOL_RED";
			image = "red.paa";
		};
		class GroupColor3 {
			name = "$STR_CFG_GRPCOL_GREEN";
			image = "green.paa";
		};
		class GroupColor4 {
			name = "$STR_CFG_GRPCOL_BLUE";
			image = "blue.paa";
		};
		class GroupColor5 {
			name = "$STR_CFG_GRPCOL_YELLOW";
			image = "yellow.paa";
		};
		class GroupColor6 {
			name = "$STR_CFG_GRPCOL_ORANGE";
			image = "orange.paa";
		};
		class GroupColor7 {
			name = "$STR_CFG_GRPCOL_PINK";
			image = "pink.paa";
		};
		class GroupColor0 {
			name = "";
			image = "";
		};
		class Six {
			name = "$STR_CFG_GRPNAMES_SIX";
			image = "a.paa";
		};
	};
	class East {
		access = 0;
		class Soldiers {
			class TimofeiProdunov {
				name = "Timofei Produnov";
				face = "Face52";
				glasses = "Sunglasses";
				speaker = "Peter";
				pitch = 1;
				description = "";
			};
			class MaksimBychovskay {
				name = "Maksim Bychovskay";
				face = "Face48";
				glasses = "None";
				speaker = "Greg";
				pitch = 1.070935;
				description = "";
			};
			class GennadiPakhomov {
				name = "Gennadi Pakhomov";
				face = "Face50";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.020398;
				description = "";
			};
			class SergeiChernovol {
				name = "Sergei Chernovol";
				face = "Face47";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class VladimirSpaseniev {
				name = "Vladimir Spaseniev";
				face = "Face44";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1.035809;
				description = "";
			};
			class DimitriDrygin {
				name = "Dimitri Drygin";
				face = "Face52";
				glasses = "Sunglasses";
				speaker = "Adam";
				pitch = 0.968085;
				description = "";
			};
			class DenisTabanov {
				name = "Denis Tabanov";
				face = "Face48";
				glasses = "None";
				speaker = "Greg";
				pitch = 1;
				description = "";
			};
			class LeonidRostovtzeff {
				name = "Leonid Rostovtzeff";
				face = "Face52";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.992816;
				description = "";
			};
			class IvanIltchenko {
				name = "Ivan Iltchenko";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.075873;
				description = "";
				face = "Face52";
			};
			class ValeriyPintusevich {
				name = "Valeriy Pintusevich";
				face = "Face52";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class IliaBiriukov {
				name = "Ilia Biriukov";
				face = "Face48";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.906775;
				description = "";
			};
			class IvanZinoviev {
				name = "Ivan Zinoviev";
				face = "Face51";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1.069849;
				description = "";
			};
			class LevMandelstam {
				name = "Lev Mandelstam";
				face = "Face51";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class StanislavPopov {
				name = "Stanislav Popov";
				face = "Face47";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.961334;
				description = "";
			};
			class MichailRzaev {
				name = "Michail Rzaev";
				face = "Face51";
				glasses = "None";
				speaker = "Patrick";
				pitch = 0.927991;
				description = "";
			};
			class IvanDavydov {
				name = "Ivan Davydov";
				face = "Face48";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1;
				description = "";
			};
			class IvanGaznayev {
				name = "Ivan Gaznayev";
				face = "Face52";
				glasses = "Spectacles";
				speaker = "Dan";
				pitch = 0.995935;
				description = "";
			};
			class IvanPlushenko {
				name = "Ivan Plushenko";
				face = "Face44";
				glasses = "None";
				speaker = "Jonah";
				pitch = 0.934857;
				description = "";
			};
			class AlekseiPatsayev {
				name = "Aleksei Patsayev";
				face = "Face50";
				glasses = "Spectacles";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class AndreiDubnikov {
				name = "Andrei Dubnikov";
				face = "Face51";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.039191;
				description = "";
			};
			class VladimirMendeleev {
				name = "Vladimir Mendeleev";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.034619;
				description = "";
				face = "Face51";
			};
			class SergeiYefrimov {
				name = "Sergei Yefrimov";
				face = "Face45";
				glasses = "None";
				speaker = "Tom";
				pitch = 1;
				description = "";
			};
			class MichailPamyatnikh {
				name = "Michail Pamyatnikh";
				face = "Face47";
				glasses = "None";
				speaker = "Ted";
				pitch = 1.051733;
				description = "";
			};
			class IvanSheptekit {
				name = "Ivan Sheptekit";
				face = "Face47";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.050909;
				description = "";
			};
			class SergeiBobrikov {
				name = "Sergei Bobrikov";
				face = "Face48";
				glasses = "None";
				speaker = "John";
				pitch = 1;
				description = "";
			};
			class ViktorRostropovich {
				name = "Viktor Rostropovich";
				face = "Face47";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.9216;
				description = "";
			};
			class GennadiBure {
				name = "Gennadi Bure";
				face = "Face44";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.927014;
				description = "";
			};
			class MaksimTemirkanov {
				name = "Maksim Temirkanov";
				face = "Face50";
				glasses = "None";
				speaker = "Greg";
				pitch = 1;
				description = "";
			};
			class IvanRybkin {
				name = "Ivan Rybkin";
				face = "Face44";
				glasses = "None";
				speaker = "Dan";
				pitch = 1.070251;
				description = "";
			};
			class TimofeiUvarov {
				name = "Timofei Uvarov";
				face = "Face47";
				glasses = "None";
				speaker = "Jonah";
				pitch = 0.945367;
				description = "";
			};
			class BorisKokorev {
				name = "Boris Kokorev";
				face = "Face48";
				glasses = "None";
				speaker = "Greg";
				pitch = 1;
				description = "";
			};
			class AnatoliBeregovoi {
				name = "Anatoli Beregovoi";
				face = "Face51";
				glasses = "None";
				speaker = "John";
				pitch = 1.001306;
				description = "";
			};
			class VasiliyZhirinovsky {
				name = "Vasiliy Zhirinovsky";
				face = "Face46";
				glasses = "None";
				speaker = "Jonah";
				pitch = 0.900208;
				description = "";
			};
			class NicolaiGordievsky {
				name = "Nicolai Gordievsky";
				face = "Face47";
				glasses = "None";
				speaker = "Ted";
				pitch = 1;
				description = "";
			};
			class SergeiPobedonostev {
				name = "Sergei Pobedonostev";
				face = "Face52";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.963452;
				description = "";
			};
			class PavelBrilev {
				name = "Pavel Brilev";
				glasses = "None";
				speaker = "Patrick";
				pitch = 1.052496;
				description = "";
				face = "Face46";
			};
			class YevgeniyNevolin {
				name = "Yevgeniy Nevolin";
				face = "Face48";
				glasses = "Spectacles";
				speaker = "Patrick";
				pitch = 1;
				description = "";
			};
			class SergeiBobylev {
				name = "Sergei Bobylev";
				glasses = "None";
				speaker = "Greg";
				pitch = 1.057965;
				description = "";
				face = "Face50";
			};
			class LeonidYuran {
				name = "Leonid Yuran";
				face = "Face52";
				glasses = "Sunglasses";
				speaker = "Peter";
				pitch = 1.041327;
				description = "";
			};
			class FyodorKalawinsky {
				name = "Fyodor Kalawinsky";
				face = "Face50";
				glasses = "None";
				speaker = "Ted";
				pitch = 1;
				description = "";
			};
			class VasiliyGoncharenko {
				name = "Vasiliy Goncharenko";
				face = "Face51";
				glasses = "None";
				speaker = "Greg";
				pitch = 1.036945;
				description = "";
			};
			class SergeiSamarin {
				name = "Sergei Samarin";
				glasses = "None";
				speaker = "Greg";
				pitch = 1.093756;
				description = "";
				face = "Face52";
			};
			class VasiliyPrivalov {
				name = "Vasiliy Privalov";
				face = "Face45";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class SergeiNakhimov {
				name = "Sergei Nakhimov";
				face = "Face45";
				glasses = "Spectacles";
				speaker = "Jonah";
				pitch = 0.924249;
				description = "";
			};
			class PavelChazov {
				name = "Pavel Chazov";
				face = "Face45";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.914447;
				description = "";
			};
			class ViktorZinovieff {
				name = "Viktor Zinovieff";
				face = "Face47";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class NicolaiTyurin {
				name = "Nicolai Tyurin";
				face = "Face47";
				glasses = "Sunglasses";
				speaker = "Adam";
				pitch = 1.021643;
				description = "";
			};
			class SergeiPorzezinski {
				name = "Sergei Porzezinski";
				glasses = "None";
				speaker = "Dan";
				pitch = 0.906311;
				description = "";
				face = "Face44";
			};
			class BorisMaigourov {
				name = "Boris Maigourov";
				glasses = "Spectacles";
				speaker = "Tom";
				pitch = 1;
				description = "";
				face = "Face52";
			};
			class IvanVaelbe {
				name = ", an, Vaelbe?";
				face = "Face46";
				glasses = "None";
				speaker = "Peter";
				pitch = 0.994629;
				description = "";
			};
			class ProkopiSmettanin {
				name = "Prokopi Smettanin";
				face = "Face44";
				glasses = "None";
				speaker = "Tom";
				pitch = 1.040533;
				description = "";
			};
			class AleksandrGratchev {
				name = "Aleksandr Gratchev";
				face = "Face47";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class TimofeiPotemkin {
				name = "Timofei Potemkin";
				face = "Face44";
				glasses = "None";
				speaker = "Peter";
				pitch = 0.973584;
				description = "";
			};
			class AlekseiKondrationok {
				name = "Aleksei Kondrationok";
				face = "Face52";
				glasses = "None";
				speaker = "Dan";
				pitch = 0.993524;
				description = "";
			};
			class VasiliyKupetsky {
				name = "Vasiliy Kupetsky";
				glasses = "None";
				speaker = "Ted";
				pitch = 1;
				description = "";
				face = "Face50";
			};
			class SergeiDolgopolov {
				name = "Sergei Dolgopolov";
				face = "Face51";
				glasses = "Spectacles";
				speaker = "Dan";
				pitch = 0.907574;
				description = "";
			};
			class GeorgiMaisky {
				name = "Georgi Maisky";
				face = "Face47";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.951184;
				description = "";
			};
			class AnatoliPankratov {
				name = "Anatoli Pankratov";
				face = "Face44";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class ViktorShiryayev {
				name = "Viktor Shiryayev";
				face = "Face44";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.099695;
				description = "";
			};
			class YefremLvov {
				name = "Yefrem Lvov";
				face = "Face51";
				glasses = "Spectacles";
				speaker = "Peter";
				pitch = 1.019958;
				description = "";
			};
			class SergeiBykovsky {
				name = "Sergei Bykovsky";
				face = "Face50";
				glasses = "Sunglasses";
				speaker = "Ted";
				pitch = 1;
				description = "";
			};
			class SergeiKarelin {
				name = "Sergei Karelin";
				face = "Face51";
				glasses = "None";
				speaker = "Ted";
				pitch = 1.015704;
				description = "";
			};
			class IvanMalikov {
				name = "Ivan Malikov";
				face = "Face44";
				glasses = "Spectacles";
				speaker = "John";
				pitch = 1.059412;
				description = "";
			};
			class SergeiGagarin {
				name = "Sergei Gagarin";
				face = "Face44";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class StepanSvatkowski {
				name = "Stepan Svatkowski";
				face = "Face45";
				glasses = "Spectacles";
				speaker = "Rob";
				pitch = 0.900574;
				description = "";
			};
			class ProkopiRyndenko {
				name = "Prokopi Ryndenko";
				face = "Face45";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.934863;
				description = "";
			};
			class ProkopiDemochev {
				name = "Prokopi Demochev";
				face = "Face50";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class AleksandrKrylov {
				name = "Aleksandr Krylov";
				face = "Face46";
				glasses = "None";
				speaker = "Tom";
				pitch = 1.027411;
				description = "";
			};
			class MichailVoikevich {
				name = "Michail Voikevich";
				face = "Face44";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.906537;
				description = "";
			};
			class AlekseiKhohklov {
				name = "Aleksei Khohklov";
				face = "Face48";
				glasses = "None";
				speaker = "Dan";
				pitch = 1;
				description = "";
			};
			class ViktorKshessinsk {
				name = "Viktor Kshessinsk";
				face = "Face52";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.00517;
				description = "";
			};
			class PavelDemine {
				name = "Pavel Demine";
				face = "Face45";
				glasses = "None";
				speaker = "Greg";
				pitch = 1.018561;
				description = "";
			};
			class LevJakov {
				name = "Lev Jakov";
				face = "Face47";
				glasses = "Spectacles";
				speaker = "Patrick";
				pitch = 1;
				description = "";
			};
			class TimofeiCzartorysk {
				name = "Timofei Czartorysk";
				glasses = "None";
				speaker = "Dan";
				pitch = 0.93255;
				description = "";
				face = "Face50";
			};
			class YuriyKrivelyov {
				name = "Yuriy Krivelyov";
				face = "Face48";
				glasses = "None";
				speaker = "Peter";
				pitch = 1.029517;
				description = "";
			};
			class YuriyVorotaev {
				name = "Yuriy Vorotaev";
				face = "Face47";
				glasses = "None";
				speaker = "Peter";
				pitch = 1;
				description = "";
			};
			class SergeiNenov {
				name = "Sergei Nenov";
				face = "Face45";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.941449;
				description = "";
			};
			class VasiliyChichagov {
				name = "Vasiliy Chichagov";
				face = "Face44";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.023968;
				description = "";
			};
			class IvanBzowski {
				name = "Ivan Bzowski";
				face = "Face46";
				glasses = "None";
				speaker = "Peter";
				pitch = 1;
				description = "";
			};
			class VladimirVorotaev {
				name = "Vladimir Vorotaev";
				glasses = "None";
				speaker = "Dan";
				pitch = 1.063776;
				description = "";
				face = "Face50";
			};
			class PavelMazipov {
				name = "Pavel Mazipov";
				face = "Face48";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.999377;
				description = "";
			};
			class VasiliyJeloudov {
				name = "Vasiliy Jeloudov";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1;
				description = "";
				face = "Face50";
			};
			class PavelShekodanov {
				name = "Pavel Shekodanov";
				face = "Face52";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.025867;
				description = "";
			};
			class GeorgiKomorov {
				name = "Georgi Komorov";
				face = "Face50";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.048804;
				description = "";
			};
			class DenisBratus {
				name = "Denis Bratus";
				glasses = "Spectacles";
				speaker = "Dan";
				pitch = 1;
				description = "";
				face = "Face48";
			};
			class GeorgiOmelchenko {
				name = "Georgi Omelchenko";
				face = "Face45";
				glasses = "None";
				speaker = "John";
				pitch = 0.945007;
				description = "";
			};
			class NikitaShvanov {
				name = "Nikita Shvanov";
				face = "Face48";
				glasses = "Sunglasses";
				speaker = "Tom";
				pitch = 0.952313;
				description = "";
			};
			class DimitriKorshanenko {
				name = "Dimitri Korshanenko";
				face = "Face48";
				glasses = "None";
				speaker = "Patrick";
				pitch = 1;
				description = "";
			};
			class MichailShirokai {
				name = "Michail Shirokai";
				face = "Face50";
				glasses = "None";
				speaker = "Jonah";
				pitch = 0.946075;
				description = "";
			};
			class StanislavSergeyev {
				name = "Stanislav Sergeyev";
				face = "Face50";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.958826;
				description = "";
			};
			class AlekseiRashchupkin {
				name = "Aleksei Rashchupkin";
				face = "Face47";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class IvanSlatkin {
				name = "Ivan Slatkin";
				face = "Face52";
				glasses = "Spectacles";
				speaker = "Rob";
				pitch = 1.006897;
				description = "";
			};
			class AleksandrSautin {
				name = "Aleksandr Sautin";
				face = "Face48";
				glasses = "None";
				speaker = "Tom";
				pitch = 0.984186;
				description = "";
			};
			class FyodorIsyanov {
				name = "Fyodor Isyanov";
				face = "Face46";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class MichailChernisov {
				name = "Michail Chernisov";
				face = "Face47";
				glasses = "None";
				speaker = "Ted";
				pitch = 1.054791;
				description = "";
			};
			class PavelSmetanine {
				name = "Pavel Smetanine";
				glasses = "Spectacles";
				speaker = "Rob";
				pitch = 0.967358;
				description = "";
				face = "Face48";
			};
			class IvanTranderkov {
				name = "Ivan Tranderkov";
				face = "Face44";
				glasses = "None";
				speaker = "John";
				pitch = 1;
				description = "";
			};
			class SergeiTrefiolov {
				name = "Sergei Trefiolov";
				glasses = "None";
				speaker = "Tom";
				pitch = 1.090784;
				description = "";
				face = "Face51";
			};
			class VasiliyKondratenko {
				name = "Vasiliy Kondratenko";
				face = "Face45";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.000391;
				description = "";
			};
			class MichailSolovyev {
				name = "Michail Solovyev";
				face = "Face51";
				glasses = "None";
				speaker = "Greg";
				pitch = 1;
				description = "";
			};
			class SergeiSlatkin {
				name = "Sergei Slatkin";
				glasses = "None";
				speaker = "Peter";
				pitch = 0.951202;
				description = "";
				face = "Face45";
			};
			class MichailAntyuhin {
				name = "Michail Antyuhin";
				face = "Face52";
				glasses = "None";
				speaker = "Ted";
				pitch = 1.002033;
				description = "";
			};
			class SergeiBeri {
				name = "Sergei Beri";
				face = "Face47";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class SergeiDesny {
				name = "Sergei Desny";
				face = "Face45";
				glasses = "None";
				speaker = "John";
				pitch = 1.071014;
				description = "";
			};
			class ProkopiAnissin {
				name = "Prokopi Anissin";
				face = "Face51";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.045459;
				description = "";
			};
			class IvanNosov {
				name = "Ivan Nosov";
				face = "Face51";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class DimitriYeltsin {
				name = "Dimitri Yeltsin";
				face = "Face48";
				glasses = "None";
				speaker = "Peter";
				pitch = 0.954315;
				description = "";
			};
			class PavelZinovieff {
				name = "Pavel Zinovieff";
				face = "Face46";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.064526;
				description = "";
			};
			class YuriyZelenskay {
				name = "Yuriy Zelenskay";
				glasses = "None";
				speaker = "Tom";
				pitch = 1;
				description = "";
				face = "Face46";
			};
			class MichailZenchikov {
				name = "Michail Zenchikov";
				face = "Face47";
				glasses = "None";
				speaker = "Greg";
				pitch = 1.040302;
				description = "";
			};
			class AntonTchepikov {
				name = "Anton Tchepikov";
				face = "Face47";
				glasses = "None";
				speaker = "Tom";
				pitch = 0.944849;
				description = "";
			};
			class DenisIvelitsch {
				name = "Denis Ivelitsch";
				face = "Face50";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class AnatoliKokorev {
				name = "Anatoli Kokorev";
				glasses = "None";
				speaker = "Greg";
				pitch = 1.05918;
				description = "";
				face = "Face52";
			};
			class LevKasparkov {
				name = "Lev Kasparkov";
				face = "Face51";
				glasses = "None";
				speaker = "Ted";
				pitch = 0.971503;
				description = "";
			};
			class VladimirKhohklov {
				name = "Vladimir Khohklov";
				face = "Face51";
				glasses = "None";
				speaker = "Dan";
				pitch = 1;
				description = "";
			};
			class StepanKudreyavtsev {
				name = "Stepan Kudreyavtsev";
				face = "Face44";
				glasses = "None";
				speaker = "Patrick";
				pitch = 1.027051;
				description = "";
			};
			class IvanFibingerov {
				name = "Ivan Fibingerov";
				glasses = "None";
				speaker = "John";
				pitch = 1.064337;
				description = "";
				face = "Face48";
			};
			class VasiliySemiriag {
				name = "Vasiliy Semiriag";
				face = "Face51";
				glasses = "None";
				speaker = "Ted";
				pitch = 1;
				description = "";
			};
			class PavelRakov {
				name = "Pavel Rakov";
				face = "Face47";
				glasses = "None";
				speaker = "Peter";
				pitch = 0.936139;
				description = "";
			};
			class AleksandrKulikovskay {
				name = "Aleksandr Kulikovskay";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.034558;
				description = "";
				face = "Face45";
			};
			class IliaChahine {
				name = "Ilia Chahine";
				face = "Face45";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class SergeiPankratev {
				name = "Sergei Pankratev";
				glasses = "None";
				speaker = "Tom";
				pitch = 1.061188;
				description = "";
				face = "Face51";
			};
			class VladimirKrishtoforich {
				name = "Vladimir Krishtoforich";
				face = "Face52";
				glasses = "None";
				speaker = "Greg";
				pitch = 1.031103;
				description = "";
			};
			class IvanVlascenko {
				name = "Ivan Vlascenko";
				face = "Face44";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class IvanKarpol {
				name = "Ivan Karpol";
				face = "Face46";
				glasses = "None";
				speaker = "Dan";
				pitch = 1.088892;
				description = "";
			};
			class AnatoliPletrev {
				name = "Anatoli Pletrev";
				face = "Face52";
				glasses = "Spectacles";
				speaker = "Ted";
				pitch = 1.093121;
				description = "";
			};
			class PavelVenclov {
				name = "Pavel Venclov";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1;
				description = "";
				face = "Face52";
			};
			class PavelKolyvanov {
				name = "Pavel Kolyvanov";
				face = "Face48";
				glasses = "None";
				speaker = "Peter";
				pitch = 1.061725;
				description = "";
			};
			class AleksandrMarkov {
				name = "Aleksandr Markov";
				face = "Face50";
				glasses = "None";
				speaker = "Greg";
				pitch = 1.073999;
				description = "";
			};
			class FyodorKnivelyov {
				name = "Fyodor Knivelyov";
				face = "Face48";
				glasses = "None";
				speaker = "Ted";
				pitch = 1;
				description = "";
			};
			class DimitriGorbenko {
				name = "Dimitri Gorbenko";
				face = "Face44";
				glasses = "None";
				speaker = "Peter";
				pitch = 0.948993;
				description = "";
			};
			class IvanMolodin {
				name = "Ivan Molodin";
				face = "Face46";
				glasses = "None";
				speaker = "Ted";
				pitch = 0.90036;
				description = "";
			};
			class PavelMasterkov {
				name = "Pavel Masterkov";
				face = "Face48";
				glasses = "None";
				speaker = "Tom";
				pitch = 1;
				description = "";
			};
			class PavelDyakov {
				name = "Pavel Dyakov";
				face = "Face50";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.006085;
				description = "";
			};
			class MichailMahayev {
				name = "Michail Mahayev";
				face = "Face44";
				glasses = "None";
				speaker = "Tom";
				pitch = 0.91142;
				description = "";
			};
			class BorisFibingerov {
				name = "Boris Fibingerov";
				face = "Face45";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class PavelYumashev {
				name = "Pavel Yumashev";
				face = "Face50";
				glasses = "None";
				speaker = "Patrick";
				pitch = 1.07785;
				description = "";
			};
			class TimofeiKochuokov {
				name = "Timofei Kochuokov";
				face = "Face50";
				glasses = "None";
				speaker = "Jonah";
				pitch = 0.904828;
				description = "";
			};
			class AlekseiRokhlin {
				name = "Aleksei Rokhlin";
				face = "Face45";
				glasses = "Spectacles";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class NikitaChernavin {
				name = "Nikita Chernavin";
				face = "Face45";
				glasses = "None";
				speaker = "Tom";
				pitch = 1.063123;
				description = "";
			};
			class IvanGabrelovic {
				name = "Ivan Gabrelovic";
				face = "Face47";
				glasses = "None";
				speaker = "Peter";
				pitch = 1.064288;
				description = "";
			};
			class GeorgiDemeter {
				name = "Georgi Demeter";
				face = "Face50";
				glasses = "Sunglasses";
				speaker = "Dan";
				pitch = 1;
				description = "";
			};
			class StepanStrizhakov {
				name = "Stepan Strizhakov";
				face = "Face51";
				glasses = "None";
				speaker = "Greg";
				pitch = 1.039728;
				description = "";
			};
			class IvanKoptev {
				name = "Ivan Koptev";
				face = "Face51";
				glasses = "None";
				speaker = "Dan";
				pitch = 1.002216;
				description = "";
			};
			class VasiliyBerezovsky {
				name = "Vasiliy Berezovsky";
				face = "Face44";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class NicolaiPorzezinski {
				name = "Nicolai Porzezinski";
				face = "Face51";
				glasses = "None";
				speaker = "Peter";
				pitch = 1.032013;
				description = "";
			};
			class IvanChernyovskay {
				name = "Ivan Chernyovskay";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.029462;
				description = "";
				face = "Face50";
			};
			class FyodorProkourorov {
				name = "Fyodor Prokourorov";
				face = "Face47";
				glasses = "Sunglasses";
				speaker = "Patrick";
				pitch = 1;
				description = "";
			};
			class AndreiTamirov {
				name = "Andrei Tamirov";
				face = "Face45";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.942322;
				description = "";
			};
			class ValeriyKirov {
				name = "Valeriy Kirov";
				face = "Face46";
				glasses = "None";
				speaker = "John";
				pitch = 1.050964;
				description = "";
			};
			class YevgeniyChahine {
				name = "Yevgeniy Chahine";
				face = "Face44";
				glasses = "None";
				speaker = "Greg";
				pitch = 1;
				description = "";
			};
			class SergeiGrusov {
				name = "Sergei Grusov";
				face = "Face45";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1.090265;
				description = "";
			};
			class DimitriAntipov {
				name = "Dimitri Antipov";
				face = "Face50";
				glasses = "None";
				speaker = "Greg";
				pitch = 0.949963;
				description = "";
			};
			class AntonChernovol {
				name = "Anton Chernovol";
				face = "Face46";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class AlekseiKondrashov {
				name = "Aleksei Kondrashov";
				face = "Face47";
				glasses = "None";
				speaker = "Dan";
				pitch = 0.988702;
				description = "";
			};
			class BorisAlyabyev {
				name = "Boris Alyabyev";
				face = "Face44";
				glasses = "None";
				speaker = "Dan";
				pitch = 1.061633;
				description = "";
			};
			class TimofeiNovosi {
				name = "Timofei Novosi";
				face = "Face47";
				glasses = "None";
				speaker = "Peter";
				pitch = 1;
				description = "";
			};
			class MichailVyshinsky {
				name = "Michail Vyshinsky";
				face = "Face51";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.947369;
				description = "";
			};
			class IvanKarenin {
				name = "Ivan Karenin";
				face = "Face52";
				glasses = "Sunglasses";
				speaker = "Rob";
				pitch = 1.020947;
				description = "";
			};
			class ProkopiZbruyev {
				name = "Prokopi Zbruyev";
				face = "Face51";
				glasses = "None";
				speaker = "Ted";
				pitch = 1;
				description = "";
			};
			class VasiliyKliugin {
				name = "Vasiliy Kliugin";
				face = "Face47";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.010651;
				description = "";
			};
			class SergeiKondrashov {
				name = "Sergei Kondrashov";
				face = "Face45";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.933441;
				description = "";
			};
			class DimitriValeev {
				name = "Dimitri Valeev";
				face = "Face48";
				glasses = "None";
				speaker = "John";
				pitch = 1;
				description = "";
			};
			class GeorgiDolgikh {
				name = "Georgi Dolgikh";
				face = "Face45";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.007758;
				description = "";
			};
			class SergeiStanchinsky {
				name = "Sergei Stanchinsky";
				face = "Face51";
				glasses = "None";
				speaker = "Peter";
				pitch = 1.065277;
				description = "";
			};
			class ValeriyNelyubov {
				name = "Valeriy Nelyubov";
				face = "Face44";
				glasses = "None";
				speaker = "Patrick";
				pitch = 1;
				description = "";
			};
			class IvanDolukhanov {
				name = "Ivan Dolukhanov";
				face = "Face46";
				glasses = "None";
				speaker = "Jonah";
				pitch = 0.904718;
				description = "";
			};
			class YevgeniySpiakov {
				name = "Yevgeniy Spiakov";
				face = "Face50";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.090088;
				description = "";
			};
			class VladimirLigachev {
				name = "Vladimir Ligachev";
				face = "Face44";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class PavelMandelstam {
				name = "Pavel Mandelstam";
				face = "Face48";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.038226;
				description = "";
			};
			class StepanLutrov {
				name = "Stepan Lutrov";
				face = "Face45";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.007452;
				description = "";
			};
			class StanislavPlekhanov {
				name = "Stanislav Plekhanov";
				face = "Face51";
				glasses = "None";
				speaker = "Greg";
				pitch = 1;
				description = "";
			};
			class VasiliyPoushkin {
				name = "Vasiliy Poushkin";
				face = "Face46";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.941772;
				description = "";
			};
			class AntonKatko {
				name = "Anton Katko";
				face = "Face46";
				glasses = "None";
				speaker = "John";
				pitch = 0.911743;
				description = "";
			};
			class MichailSemiriag {
				name = "Michail Semiriag";
				face = "Face50";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class IvanBazhukov {
				name = "Ivan Bazhukov";
				face = "Face47";
				glasses = "None";
				speaker = "John";
				pitch = 0.975708;
				description = "";
			};
			class ProkopiSanhusky {
				name = "Prokopi Sanhusky";
				face = "Face47";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.002441;
				description = "";
			};
			class StepanTchesnov {
				name = "Stepan Tchesnov";
				face = "Face52";
				glasses = "None";
				speaker = "John";
				pitch = 1;
				description = "";
			};
			class MichailRost {
				name = "Michail Rost";
				face = "Face46";
				glasses = "Spectacles";
				speaker = "Adam";
				pitch = 0.98847;
				description = "";
			};
			class AndreiRozhdestvensky {
				name = "Andrei Rozhdestvensky";
				face = "Face47";
				glasses = "None";
				speaker = "John";
				pitch = 0.902423;
				description = "";
			};
			class PavelSharivker {
				name = "Pavel Sharivker";
				face = "Face51";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class IvanBershadensky {
				name = "Ivan Bershadensky";
				face = "Face50";
				glasses = "None";
				speaker = "Greg";
				pitch = 0.935889;
				description = "";
			};
			class IvanDolgikh {
				name = "Ivan Dolgikh";
				face = "Face47";
				glasses = "None";
				speaker = "Jonah";
				pitch = 0.950403;
				description = "";
			};
			class GennadiBounine {
				name = "Gennadi Bounine";
				face = "Face50";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class LeonidKurennoy {
				name = "Leonid Kurennoy";
				face = "Face44";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.973175;
				description = "";
			};
			class VasiliyGlebov {
				name = "Vasiliy Glebov";
				face = "Face48";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.034369;
				description = "";
			};
			class MichailGurov {
				name = "Michail Gurov";
				face = "Face44";
				glasses = "None";
				speaker = "Dan";
				pitch = 1;
				description = "";
			};
			class IliaUdovin {
				name = "Ilia Udovin";
				face = "Face50";
				glasses = "None";
				speaker = "John";
				pitch = 1.048871;
				description = "";
			};
			class GeorgiGromyko {
				name = "Georgi Gromyko";
				face = "Face50";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.932275;
				description = "";
			};
			class SergeiRebikov {
				name = "Sergei Rebikov";
				glasses = "None";
				speaker = "Peter";
				pitch = 1;
				description = "";
				face = "Face52";
			};
			class VasiliyZubov {
				name = "Vasiliy Zubov";
				face = "Face45";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.050439;
				description = "";
			};
			class FyodorPrjevalski {
				name = "Fyodor Prjevalski";
				face = "Face44";
				glasses = "None";
				speaker = "Greg";
				pitch = 0.986139;
				description = "";
			};
			class IvanTarasov {
				name = "Ivan Tarasov";
				face = "Face47";
				glasses = "None";
				speaker = "John";
				pitch = 1;
				description = "";
			};
			class PavelShiryayev {
				name = "Pavel Shiryayev";
				face = "Face47";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.925726;
				description = "";
			};
			class IvanShalimov {
				name = "Ivan Shalimov";
				face = "Face51";
				glasses = "Spectacles";
				speaker = "Rob";
				pitch = 0.919147;
				description = "";
			};
			class AndreiKomyagin {
				name = "Andrei Komyagin";
				face = "Face48";
				glasses = "Spectacles";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class IvanMorgunov {
				name = "Ivan Morgunov";
				face = "Face50";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.942944;
				description = "";
			};
			class MaksimVostrikov {
				name = "Maksim Vostrikov";
				face = "Face51";
				glasses = "None";
				speaker = "Patrick";
				pitch = 1.033069;
				description = "";
			};
			class ValeriyIvelitsch {
				name = "Valeriy Ivelitsch";
				face = "Face47";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class DimitriYefrimov {
				name = "Dimitri Yefrimov";
				face = "Face52";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.014154;
				description = "";
			};
			class IvanLebedyenko {
				name = "Ivan Lebedyenko";
				face = "Face48";
				glasses = "None";
				speaker = "Greg";
				pitch = 0.931146;
				description = "";
			};
			class IvanTchesnov {
				name = "Ivan Tchesnov";
				glasses = "None";
				speaker = "John";
				pitch = 1;
				description = "";
				face = "Face52";
			};
			class AntonBalanchine {
				name = "Anton Balanchine";
				face = "Face52";
				glasses = "Spectacles";
				speaker = "Tom";
				pitch = 0.93576;
				description = "";
			};
			class IvanGuleghin {
				name = "Ivan Guleghin";
				face = "Face50";
				glasses = "None";
				speaker = "Greg";
				pitch = 1.079297;
				description = "";
			};
			class Yevgeniylitvak {
				name = "Yevgeniy litvak";
				face = "Face45";
				glasses = "Sunglasses";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class NicolaiKayakov {
				name = "Nicolai Kayakov";
				face = "Face47";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.904962;
				description = "";
			};
			class ValeriyVezirov {
				name = "Valeriy Vezirov";
				face = "Face45";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.058368;
				description = "";
			};
			class SergeiGuseinov {
				name = "Sergei Guseinov";
				face = "Face45";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1;
				description = "";
			};
			class SergeiAlliluyev {
				name = "Sergei Alliluyev";
				face = "Face48";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.052216;
				description = "";
			};
			class ViktorBakhvalov {
				name = "Viktor Bakhvalov";
				face = "Face44";
				glasses = "None";
				speaker = "Jonah";
				pitch = 0.995825;
				description = "";
			};
			class MaksimBaronov {
				name = "Maksim Baronov";
				face = "Face52";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class AlekseiChistiakov {
				name = "Aleksei Chistiakov";
				face = "Face48";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.09007;
				description = "";
			};
			class ValeriySevnik {
				name = "Valeriy Sevnik";
				face = "Face45";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.901227;
				description = "";
			};
			class DimitriNosov {
				name = "Dimitri Nosov";
				face = "Face45";
				glasses = "Sunglasses";
				speaker = "Patrick";
				pitch = 1;
				description = "";
			};
			class MichailSudakov {
				name = "Michail Sudakov";
				face = "Face44";
				glasses = "None";
				speaker = "Ted";
				pitch = 0.968109;
				description = "";
			};
			class MichailSinaisky {
				name = "Michail Sinaisky";
				face = "Face52";
				glasses = "None";
				speaker = "Peter";
				pitch = 1.030487;
				description = "";
			};
			class GeorgiGolubev {
				name = "Georgi Golubev";
				face = "Face46";
				glasses = "None";
				speaker = "John";
				pitch = 1;
				description = "";
			};
			class PavelFaustin {
				name = "Pavel Faustin";
				face = "Face44";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.978497;
				description = "";
			};
			class TimofeiShalimov {
				name = "Timofei Shalimov";
				face = "Face51";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.951917;
				description = "";
			};
			class ProkopiGusev {
				name = "Prokopi Gusev";
				face = "Face44";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class DimitriKalawinsky {
				name = "Dimitri Kalawinsky";
				face = "Face47";
				glasses = "None";
				speaker = "Jonah";
				pitch = 0.905493;
				description = "";
			};
			class NicolaiLebziak {
				name = "Nicolai Lebziak";
				face = "Face45";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.085669;
				description = "";
			};
			class DimitriGusyev {
				name = "Dimitri Gusyev";
				face = "Face46";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class IvanKhudorozkin {
				name = "Ivan Khudorozkin";
				face = "Face44";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.084613;
				description = "";
			};
			class DimitriYuran {
				name = "Dimitri Yuran";
				face = "Face44";
				glasses = "None";
				speaker = "Peter";
				pitch = 0.979309;
				description = "";
			};
			class SergeiMorozov {
				name = "Sergei Morozov";
				face = "Face44";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class VasiliyChernyovskay {
				name = "Vasiliy Chernyovskay";
				face = "Face44";
				glasses = "Spectacles";
				speaker = "Peter";
				pitch = 0.948126;
				description = "";
			};
			class IvanKudreyavtsev {
				name = "Ivan Kudreyavtsev";
				face = "Face44";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.079279;
				description = "";
			};
			class DimitriSemago {
				name = "Dimitri Semago";
				face = "Face44";
				glasses = "None";
				speaker = "Peter";
				pitch = 1;
				description = "";
			};
			class PavelTumanov {
				name = "Pavel Tumanov";
				face = "Face52";
				glasses = "None";
				speaker = "Jonah";
				pitch = 0.982697;
				description = "";
			};
			class IvanLobov {
				name = "Ivan Lobov";
				face = "Face48";
				glasses = "Sunglasses";
				speaker = "Jonah";
				pitch = 0.946112;
				description = "";
			};
			class DimitriShayduko {
				name = "Dimitri Shayduko";
				face = "Face44";
				glasses = "None";
				speaker = "Dan";
				pitch = 1;
				description = "";
			};
			class LevSipyengin {
				name = "Lev Sipyengin";
				face = "Face51";
				glasses = "None";
				speaker = "Dan";
				pitch = 0.952588;
				description = "";
			};
			class MichailVaelbe {
				name = ", chail, Vaelbe?";
				face = "Face51";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.007739;
				description = "";
			};
			class ValeriyKarpol {
				name = "Valeriy Karpol";
				face = "Face47";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class AndreiSytsov {
				name = "Andrei Sytsov";
				face = "Face48";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.920087;
				description = "";
			};
			class MaksimAgletdinov {
				name = "Maksim Agletdinov";
				face = "Face46";
				glasses = "None";
				speaker = "Peter";
				pitch = 0.913196;
				description = "";
			};
			class VladimirLupandin {
				name = "Vladimir Lupandin";
				face = "Face45";
				glasses = "None";
				speaker = "Peter";
				pitch = 1;
				description = "";
			};
			class SergeiGaznayev {
				name = "Sergei Gaznayev";
				face = "Face51";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.917419;
				description = "";
			};
			class LeonidLegotine {
				name = "Leonid Legotine";
				glasses = "None";
				speaker = "Jonah";
				pitch = 0.996588;
				description = "";
				face = "Face45";
			};
			class DimitriKupetsky {
				name = "Dimitri Kupetsky";
				face = "Face52";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class SergeiBrechkovsky {
				name = "Sergei Brechkovsky";
				face = "Face45";
				glasses = "None";
				speaker = "Peter";
				pitch = 1.097406;
				description = "";
			};
			class MichailKatzev {
				name = "Michail Katzev";
				face = "Face52";
				glasses = "None";
				speaker = "Jonah";
				pitch = 0.977234;
				description = "";
			};
			class FyodorBerzin {
				name = "Fyodor Berzin";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1;
				description = "";
				face = "Face51";
			};
			class AleksandrDekanozov {
				name = "Aleksandr Dekanozov";
				face = "Face50";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.099432;
				description = "";
			};
			class NikitaRakov {
				name = "Nikita Rakov";
				face = "Face48";
				glasses = "None";
				speaker = "Peter";
				pitch = 1.079413;
				description = "";
			};
			class PavelTukhbatulin {
				name = "Pavel Tukhbatulin";
				face = "Face44";
				glasses = "Sunglasses";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class PavelZbruyev {
				name = "Pavel Zbruyev";
				face = "Face51";
				glasses = "Sunglasses";
				speaker = "Rob";
				pitch = 0.997504;
				description = "";
			};
			class YefremVezirov {
				name = "Yefrem Vezirov";
				face = "Face46";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.065594;
				description = "";
			};
			class PavelZasekin {
				name = "Pavel Zasekin";
				face = "Face51";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class NikitaYevteushenko {
				name = "Nikita Yevteushenko";
				face = "Face50";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.024451;
				description = "";
			};
			class AntonMindlin {
				name = "Anton Mindlin";
				glasses = "None";
				speaker = "John";
				pitch = 0.955029;
				description = "";
				face = "Face46";
			};
			class ProkopiKondrashchenko {
				name = "Prokopi Kondrashchenko";
				face = "Face46";
				glasses = "None";
				speaker = "Tom";
				pitch = 1;
				description = "";
			};
			class GeorgiTokarev {
				name = "Georgi Tokarev";
				face = "Face51";
				glasses = "None";
				speaker = "Greg";
				pitch = 1.042413;
				description = "";
			};
			class MichailYevteushenko {
				name = "Michail Yevteushenko";
				face = "Face44";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.008118;
				description = "";
			};
			class VasiliySazhin {
				name = "Vasiliy Sazhin";
				face = "Face52";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class SergeiZbruev {
				name = "Sergei Zbruev";
				face = "Face46";
				glasses = "None";
				speaker = "Ted";
				pitch = 1.070569;
				description = "";
			};
			class VasiliyAntsyforov {
				name = "Vasiliy Antsyforov";
				face = "Face46";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1.032703;
				description = "";
			};
			class MichailShubukin {
				name = "Michail Shubukin";
				face = "Face44";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class ViktorYeltsin {
				name = "Viktor Yeltsin";
				face = "Face51";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.9802;
				description = "";
			};
			class StepanNaumov {
				name = "Stepan Naumov";
				face = "Face44";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.937402;
				description = "";
			};
			class Prokopilitvak {
				name = "Prokopi litvak";
				face = "Face45";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class VasiliyBushmanov {
				name = "Vasiliy Bushmanov";
				face = "Face47";
				glasses = "Spectacles";
				speaker = "Rob";
				pitch = 1.068628;
				description = "";
			};
			class GeorgiKrylov {
				name = "Georgi Krylov";
				face = "Face52";
				glasses = "None";
				speaker = "Ted";
				pitch = 0.92536;
				description = "";
			};
			class SergeiBelenki {
				name = "Sergei Belenki";
				face = "Face48";
				glasses = "None";
				speaker = "Tom";
				pitch = 1;
				description = "";
			};
			class PavelBaronov {
				name = "Pavel Baronov";
				glasses = "None";
				speaker = "Peter";
				pitch = 1.081213;
				description = "";
				face = "Face52";
			};
			class VasiliyNizovtsev {
				name = "Vasiliy Nizovtsev";
				face = "Face46";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1.052209;
				description = "";
			};
			class IliaRosikhin {
				name = "Ilia Rosikhin";
				glasses = "None";
				speaker = "John";
				pitch = 1;
				description = "";
				face = "Face44";
			};
			class DimitriPlatov {
				name = "Dimitri Platov";
				face = "Face44";
				glasses = "None";
				speaker = "Patrick";
				pitch = 1.097485;
				description = "";
			};
			class SergeiTyukhay {
				name = "Sergei Tyukhay";
				face = "Face46";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.019684;
				description = "";
			};
			class MichailMalchugin {
				name = "Michail Malchugin";
				face = "Face47";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class MichailWinogradski {
				name = "Michail Winogradski";
				face = "Face46";
				glasses = "None";
				speaker = "John";
				pitch = 1.099982;
				description = "";
			};
			class SergeiFibingerov {
				name = "Sergei Fibingerov";
				face = "Face52";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.95993;
				description = "";
			};
			class ViktorTrandenkov {
				name = "Viktor Trandenkov";
				face = "Face52";
				glasses = "None";
				speaker = "Greg";
				pitch = 1;
				description = "";
			};
			class Dimitrilitvak {
				name = "Dimitri litvak";
				face = "Face47";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.016296;
				description = "";
			};
			class GennadiMiasnikov {
				name = "Gennadi Miasnikov";
				face = "Face44";
				glasses = "None";
				speaker = "Patrick";
				pitch = 0.981073;
				description = "";
			};
			class MaksimKulik {
				name = "Maksim Kulik";
				face = "Face46";
				glasses = "None";
				speaker = "John";
				pitch = 1;
				description = "";
			};
			class DenisGromyko {
				name = "Denis Gromyko";
				face = "Face44";
				glasses = "None";
				speaker = "Dan";
				pitch = 1.08587;
				description = "";
			};
			class NikitaKatko {
				name = "Nikita Katko";
				glasses = "None";
				speaker = "Tom";
				pitch = 1.08313;
				description = "";
				face = "Face48";
			};
			class IvanChekhol {
				name = "Ivan Chekhol";
				face = "Face46";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class MaksimBiriukov {
				name = "Maksim Biriukov";
				face = "Face52";
				glasses = "None";
				speaker = "Tom";
				pitch = 1.077142;
				description = "";
			};
			class StanislavLavrin {
				name = "Stanislav Lavrin";
				face = "Face52";
				glasses = "None";
				speaker = "Patrick";
				pitch = 1.089496;
				description = "";
			};
			class PavelKolotch {
				name = "Pavel Kolotch";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
				face = "Face51";
			};
			class AleksandrPeskow {
				name = "Aleksandr Peskow";
				face = "Face45";
				glasses = "Sunglasses";
				speaker = "Rob";
				pitch = 1.072772;
				description = "";
			};
			class ValeriyTchepikov {
				name = "Valeriy Tchepikov";
				face = "Face48";
				glasses = "None";
				speaker = "Dan";
				pitch = 0.978912;
				description = "";
			};
			class SergeiVoropaev {
				name = "Sergei Voropaev";
				face = "Face51";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class SergeiAndropov {
				name = "Sergei Andropov";
				face = "Face50";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.951233;
				description = "";
			};
			class IvanChubais {
				name = "Ivan Chubais";
				face = "Face47";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.054309;
				description = "";
			};
			class TimofeiRosikhin {
				name = "Timofei Rosikhin";
				face = "Face47";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class AndreiYumashev {
				name = "Andrei Yumashev";
				face = "Face48";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.959882;
				description = "";
			};
			class SergeiBurlachenko {
				name = "Sergei Burlachenko";
				face = "Face50";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.95683;
				description = "";
			};
			class DenisKautsky {
				name = "Denis Kautsky";
				face = "Face46";
				glasses = "None";
				speaker = "Tom";
				pitch = 1;
				description = "";
			};
			class LevVezirov {
				name = "Lev Vezirov";
				face = "Face51";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.039838;
				description = "";
			};
			class TimofeiOvsiannikov {
				name = "Timofei Ovsiannikov";
				face = "Face51";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.911029;
				description = "";
			};
			class MaksimNizovtsev {
				name = "Maksim Nizovtsev";
				face = "Face46";
				glasses = "None";
				speaker = "Patrick";
				pitch = 1;
				description = "";
			};
			class BorisSimutenkov {
				name = "Boris Simutenkov";
				face = "Face44";
				glasses = "None";
				speaker = "Tom";
				pitch = 0.98266;
				description = "";
			};
			class PavelGalipov {
				name = "Pavel Galipov";
				face = "Face47";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.972333;
				description = "";
			};
			class PavelSafin {
				name = "Pavel Safin";
				face = "Face52";
				glasses = "None";
				speaker = "Dan";
				pitch = 1;
				description = "";
			};
			class FyodorGromyko {
				name = "Fyodor Gromyko";
				face = "Face48";
				glasses = "Sunglasses";
				speaker = "Adam";
				pitch = 0.930756;
				description = "";
			};
			class StepanYakolev {
				name = "Stepan Yakolev";
				face = "Face50";
				glasses = "None";
				speaker = "Greg";
				pitch = 1.000147;
				description = "";
			};
			class FyodorGataullin {
				name = "Fyodor Gataullin";
				face = "Face48";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class AleksandrBeketov {
				name = "Aleksandr Beketov";
				face = "Face50";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.991016;
				description = "";
			};
			class VasiliyKissin {
				name = "Vasiliy Kissin";
				face = "Face48";
				glasses = "None";
				speaker = "Peter";
				pitch = 1.00578;
				description = "";
			};
			class VasiliyRukovskay {
				name = "Vasiliy Rukovskay";
				face = "Face52";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1;
				description = "";
			};
			class VasiliyNedzelski {
				name = "Vasiliy Nedzelski";
				face = "Face44";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.995746;
				description = "";
			};
			class IvanSipyengin {
				name = "Ivan Sipyengin";
				face = "Face46";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.951404;
				description = "";
			};
			class IliaStarovoitov {
				name = "Ilia Starovoitov";
				face = "Face50";
				glasses = "Spectacles";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class PavelNelyubov {
				name = "Pavel Nelyubov";
				face = "Face46";
				glasses = "None";
				speaker = "Patrick";
				pitch = 1.063458;
				description = "";
			};
			class TimofeiZadorozhnyi {
				name = "Timofei Zadorozhnyi";
				glasses = "None";
				speaker = "Greg";
				pitch = 0.976453;
				description = "";
				face = "Face46";
			};
			class SergeiSimutenkov {
				name = "Sergei Simutenkov";
				face = "Face51";
				glasses = "None";
				speaker = "Dan";
				pitch = 1;
				description = "";
			};
			class MichailZadorozhnyi {
				name = "Michail Zadorozhnyi";
				face = "Face44";
				glasses = "None";
				speaker = "Dan";
				pitch = 0.974591;
				description = "";
			};
			class DimitriTsibliyev {
				name = "Dimitri Tsibliyev";
				face = "Face50";
				glasses = "None";
				speaker = "John";
				pitch = 0.973639;
				description = "";
			};
			class DimitriMorozov {
				name = "Dimitri Morozov";
				face = "Face50";
				glasses = "None";
				speaker = "Peter";
				pitch = 1;
				description = "";
			};
			class SergeiPamyatnikh {
				name = "Sergei Pamyatnikh";
				glasses = "None";
				speaker = "Dan";
				pitch = 0.91651;
				description = "";
				face = "Face51";
			};
			class NikitaSanhusky {
				name = "Nikita Sanhusky";
				face = "Face48";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.000147;
				description = "";
			};
			class MichailOfonasev {
				name = "Michail Ofonasev";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
				face = "Face52";
			};
			class DimitriZhivanevskay {
				name = "Dimitri Zhivanevskay";
				face = "Face47";
				glasses = "None";
				speaker = "Dan";
				pitch = 1.092041;
				description = "";
			};
			class VasiliyChugainov {
				name = "Vasiliy Chugainov";
				face = "Face52";
				glasses = "None";
				speaker = "John";
				pitch = 1.020996;
				description = "";
			};
			class VasiliyOrtoff {
				name = "Vasiliy Ortoff";
				face = "Face51";
				glasses = "Spectacles";
				speaker = "Ted";
				pitch = 1;
				description = "";
			};
			class PavelKochetkov {
				name = "Pavel Kochetkov";
				face = "Face46";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1.041345;
				description = "";
			};
			class PavelBartnev {
				name = "Pavel Bartnev";
				glasses = "None";
				speaker = "Dan";
				pitch = 0.990491;
				description = "";
				face = "Face45";
			};
			class AntonYiyakov {
				name = "Anton Yiyakov";
				face = "Face48";
				glasses = "None";
				speaker = "Ted";
				pitch = 1;
				description = "";
			};
			class StepanYanovsky {
				name = "Stepan Yanovsky";
				face = "Face45";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.983142;
				description = "";
			};
			class VasiliyZegouniov {
				name = "Vasiliy Zegouniov";
				face = "Face47";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.011133;
				description = "";
			};
			class DenisMoldovan {
				name = "Denis Moldovan";
				face = "Face51";
				glasses = "None";
				speaker = "Dan";
				pitch = 1;
				description = "";
			};
			class LeonidSemago {
				name = "Leonid Semago";
				face = "Face44";
				glasses = "None";
				speaker = "Greg";
				pitch = 1.096259;
				description = "";
			};
			class NikitaPankratov {
				name = "Nikita Pankratov";
				face = "Face44";
				glasses = "None";
				speaker = "Ted";
				pitch = 0.994348;
				description = "";
			};
			class IvanBakhvalov {
				name = "Ivan Bakhvalov";
				face = "Face46";
				glasses = "None";
				speaker = "Greg";
				pitch = 1;
				description = "";
			};
			class IvanMatulik {
				name = "Ivan Matulik";
				face = "Face48";
				glasses = "None";
				speaker = "Ted";
				pitch = 0.978735;
				description = "";
			};
			class IvanGlazunov {
				name = "Ivan Glazunov";
				glasses = "None";
				speaker = "Peter";
				pitch = 1.069775;
				description = "";
				face = "Face44";
			};
			class DimitriGurevich {
				name = "Dimitri Gurevich";
				glasses = "None";
				speaker = "Greg";
				pitch = 1;
				description = "";
				face = "Face44";
			};
			class StepanGuleghin {
				name = "Stepan Guleghin";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.097382;
				description = "";
				face = "Face45";
			};
			class VasiliyChernovol {
				name = "Vasiliy Chernovol";
				face = "Face45";
				glasses = "None";
				speaker = "Patrick";
				pitch = 0.983405;
				description = "";
			};
			class IvanErikeev {
				name = "Ivan Erikeev";
				face = "Face45";
				glasses = "None";
				speaker = "Tom";
				pitch = 1;
				description = "";
			};
			class GeorgiLebedyenko {
				name = "Georgi Lebedyenko";
				face = "Face50";
				glasses = "None";
				speaker = "Patrick";
				pitch = 1.015979;
				description = "";
			};
			class YuriyGromyko {
				name = "Yuriy Gromyko";
				face = "Face48";
				glasses = "None";
				speaker = "Greg";
				pitch = 0.952679;
				description = "";
			};
			class VladimirGromab {
				name = "Vladimir Gromab";
				face = "Face45";
				glasses = "None";
				speaker = "Dan";
				pitch = 1;
				description = "";
			};
			class MichailBlodnieks {
				name = "Michail Blodnieks";
				face = "Face48";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.044232;
				description = "";
			};
			class VasiliyChernitsky {
				name = "Vasiliy Chernitsky";
				face = "Face51";
				glasses = "None";
				speaker = "Peter";
				pitch = 0.95976;
				description = "";
			};
			class AndreiYemelyanev {
				name = "Andrei Yemelyanev";
				face = "Face47";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class SergeiGolovanov {
				name = "Sergei Golovanov";
				face = "Face45";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1.089893;
				description = "";
			};
			class BorisLebedev {
				name = "Boris Lebedev";
				face = "Face44";
				glasses = "None";
				speaker = "Peter";
				pitch = 1.062512;
				description = "";
			};
			class VasiliyRagulin {
				name = "Vasiliy Ragulin";
				face = "Face47";
				glasses = "None";
				speaker = "Ted";
				pitch = 1;
				description = "";
			};
			class VasiliyKuzmenko {
				name = "Vasiliy Kuzmenko";
				face = "Face47";
				glasses = "None";
				speaker = "Tom";
				pitch = 0.980737;
				description = "";
			};
			class AleksandrZadorozhnyi {
				name = "Aleksandr Zadorozhnyi";
				face = "Face50";
				glasses = "None";
				speaker = "Ted";
				pitch = 0.968109;
				description = "";
			};
			class VasiliyGrinkov {
				name = "Vasiliy Grinkov";
				face = "Face46";
				glasses = "None";
				speaker = "John";
				pitch = 1;
				description = "";
			};
			class MichailChebykim {
				name = "Michail Chebykim";
				face = "Face48";
				glasses = "None";
				speaker = "Patrick";
				pitch = 0.943048;
				description = "";
			};
			class VasiliyShcherbin {
				name = "Vasiliy Shcherbin";
				face = "Face50";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.931488;
				description = "";
			};
			class IvanOvsiannikov {
				name = "Ivan Ovsiannikov";
				face = "Face48";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class FyodorAlenichev {
				name = "Fyodor Alenichev";
				face = "Face45";
				glasses = "None";
				speaker = "Peter";
				pitch = 0.948621;
				description = "";
			};
			class VasiliyGrachev {
				name = "Vasiliy Grachev";
				face = "Face47";
				glasses = "None";
				speaker = "Dan";
				pitch = 0.925909;
				description = "";
			};
			class FyodorGolovanov {
				name = "Fyodor Golovanov";
				face = "Face52";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class PavelNasenko {
				name = "Pavel Nasenko";
				face = "Face50";
				glasses = "None";
				speaker = "Jonah";
				pitch = 0.91748;
				description = "";
			};
			class IvanRomanovros {
				name = "Ivan Romanovros";
				face = "Face44";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.064508;
				description = "";
			};
			class MichailBolkonsky {
				name = "Michail Bolkonsky";
				face = "Face52";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class DimitriYevdokimov {
				name = "Dimitri Yevdokimov";
				face = "Face47";
				glasses = "None";
				speaker = "John";
				pitch = 1.09472;
				description = "";
			};
			class StepanPervoi {
				name = "Stepan Pervoi";
				face = "Face44";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.052197;
				description = "";
			};
			class AlekseiGoguniv {
				name = "Aleksei Goguniv";
				face = "Face44";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class PavelPatsayev {
				name = "Pavel Patsayev";
				face = "Face48";
				glasses = "None";
				speaker = "Peter";
				pitch = 1.010266;
				description = "";
			};
			class SergeiStaradumov {
				name = "Sergei Staradumov";
				face = "Face48";
				glasses = "None";
				speaker = "Patrick";
				pitch = 0.933405;
				description = "";
			};
			class SergeiLeschov {
				name = "Sergei Leschov";
				face = "Face52";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class StanislavSotnikov {
				name = "Stanislav Sotnikov";
				face = "Face48";
				glasses = "None";
				speaker = "Peter";
				pitch = 1.072437;
				description = "";
			};
			class StepanKomorov {
				name = "Stepan Komorov";
				face = "Face47";
				glasses = "None";
				speaker = "Patrick";
				pitch = 0.972015;
				description = "";
			};
			class ValeriySmirnov {
				name = "Valeriy Smirnov";
				face = "Face44";
				glasses = "None";
				speaker = "Patrick";
				pitch = 1;
				description = "";
			};
			class IvanArsov {
				name = "Ivan Arsov";
				face = "Face45";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.020764;
				description = "";
			};
			class VladimirIsyanov {
				name = "Vladimir Isyanov";
				face = "Face45";
				glasses = "None";
				speaker = "Dan";
				pitch = 1.001398;
				description = "";
			};
			class SergeiDzhamgerchinov {
				name = "Sergei Dzhamgerchinov";
				face = "Face44";
				glasses = "Spectacles";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class DimitriKatko {
				name = "Dimitri Katko";
				face = "Face45";
				glasses = "None";
				speaker = "Patrick";
				pitch = 1.032861;
				description = "";
			};
			class ViktorDavydov {
				name = "Viktor Davydov";
				face = "Face51";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.031622;
				description = "";
			};
			class IliaDolgorouki {
				name = "Ilia Dolgorouki";
				face = "Face47";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class BorisZasekin {
				name = "Boris Zasekin";
				face = "Face52";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.082697;
				description = "";
			};
			class GennadiBashmet {
				name = "Gennadi Bashmet";
				face = "Face47";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.961426;
				description = "";
			};
			class SergeiDemichev {
				name = "Sergei Demichev";
				face = "Face46";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class VasiliyGrishkuv {
				name = "Vasiliy Grishkuv";
				face = "Face50";
				glasses = "None";
				speaker = "Peter";
				pitch = 0.969019;
				description = "";
			};
			class FyodorNevskaj {
				name = "Fyodor Nevskaj";
				face = "Face45";
				glasses = "Sunglasses";
				speaker = "Patrick";
				pitch = 1.050269;
				description = "";
			};
			class BorisChaikovskay {
				name = "Boris Chaikovskay";
				face = "Face52";
				glasses = "None";
				speaker = "John";
				pitch = 1;
				description = "";
			};
			class IvanKarklins {
				name = "Ivan Karklins";
				face = "Face45";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.936981;
				description = "";
			};
			class AnatoliBarabanschikov {
				name = "Anatoli Barabanschikov";
				face = "Face45";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.921826;
				description = "";
			};
			class YuriyAndropov {
				name = "Yuriy Andropov";
				face = "Face44";
				glasses = "None";
				speaker = "John";
				pitch = 1;
				description = "";
			};
			class AleksandrSadykov {
				name = "Aleksandr Sadykov";
				face = "Face47";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.050153;
				description = "";
			};
			class AnatoliVoropaev {
				name = "Anatoli Voropaev";
				face = "Face48";
				glasses = "None";
				speaker = "John";
				pitch = 1.017255;
				description = "";
			};
			class YevgeniyKrylov {
				name = "Yevgeniy Krylov";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
				face = "Face44";
			};
			class MichailParshin {
				name = "Michail Parshin";
				face = "Face48";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1.010126;
				description = "";
			};
			class IliaBarshai {
				name = "Ilia Barshai";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.938324;
				description = "";
				face = "Face50";
			};
			class DimitriMishin {
				name = "Dimitri Mishin";
				face = "Face52";
				glasses = "None";
				speaker = "John";
				pitch = 1;
				description = "";
			};
			class MaksimZimyatov {
				name = "Maksim Zimyatov";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.993536;
				description = "";
				face = "Face44";
			};
			class PavelSemago {
				name = "Pavel Semago";
				face = "Face48";
				glasses = "None";
				speaker = "Patrick";
				pitch = 1.075391;
				description = "";
			};
			class SergeiMiasnikov {
				name = "Sergei Miasnikov";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
				face = "Face50";
			};
			class VladimirVitkowskii {
				name = "Vladimir Vitkowskii";
				face = "Face44";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.021985;
				description = "";
			};
			class SergeiTretyak {
				name = "Sergei Tretyak";
				face = "Face52";
				glasses = "Spectacles";
				speaker = "John";
				pitch = 1.013214;
				description = "";
			};
			class StepanPasunin {
				name = "Stepan Pasunin";
				face = "Face47";
				glasses = "None";
				speaker = "Dan";
				pitch = 1;
				description = "";
			};
			class MichailBanketik {
				name = "Michail Banketik";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.973181;
				description = "";
				face = "Face47";
			};
			class IvanZbruyev {
				name = "Ivan Zbruyev";
				face = "Face44";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.996374;
				description = "";
			};
			class IvanChesnokov {
				name = "Ivan Chesnokov";
				face = "Face51";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class ViktorOnton {
				name = "Viktor Onton";
				face = "Face48";
				glasses = "None";
				speaker = "Tom";
				pitch = 1.05481;
				description = "";
			};
			class MichailKozyrev {
				name = "Michail Kozyrev";
				face = "Face48";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1.024384;
				description = "";
			};
			class MaksimLoginov {
				name = "Maksim Loginov";
				face = "Face46";
				glasses = "Sunglasses";
				speaker = "Ted";
				pitch = 1;
				description = "";
			};
			class VasiliyItsov {
				name = "Vasiliy Itsov";
				face = "Face46";
				glasses = "None";
				speaker = "Patrick";
				pitch = 1.013391;
				description = "";
			};
			class PavelShakirov {
				name = "Pavel Shakirov";
				face = "Face52";
				glasses = "None";
				speaker = "Ted";
				pitch = 1.075946;
				description = "";
			};
			class SergeiBochkarer {
				name = "Sergei Bochkarer";
				face = "Face48";
				glasses = "None";
				speaker = "Greg";
				pitch = 1;
				description = "";
			};
			class GeorgiChernavin {
				name = "Georgi Chernavin";
				face = "Face45";
				glasses = "None";
				speaker = "Tom";
				pitch = 0.927905;
				description = "";
			};
			class ProkopiWakin {
				name = "Prokopi Wakin";
				face = "Face50";
				glasses = "Sunglasses";
				speaker = "Adam";
				pitch = 1.029364;
				description = "";
			};
			class StepanPorkhomovskiy {
				name = "Stepan Porkhomovskiy";
				face = "Face52";
				glasses = "Spectacles";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class AntonDolukhanov {
				name = "Anton Dolukhanov";
				face = "Face47";
				glasses = "None";
				speaker = "Jonah";
				pitch = 0.938037;
				description = "";
			};
			class IliaZhdanov {
				name = "Ilia Zhdanov";
				face = "Face47";
				glasses = "None";
				speaker = "Tom";
				pitch = 0.990582;
				description = "";
			};
			class ViktorRybin {
				name = "Viktor Rybin";
				face = "Face46";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class BorisTurov {
				name = "Boris Turov";
				face = "Face52";
				glasses = "None";
				speaker = "Patrick";
				pitch = 0.961224;
				description = "";
			};
			class NikitaPopov {
				name = "Nikita Popov";
				face = "Face47";
				glasses = "None";
				speaker = "Dan";
				pitch = 1.060376;
				description = "";
			};
			class PavelRomasko {
				name = "Pavel Romasko";
				face = "Face48";
				glasses = "None";
				speaker = "Dan";
				pitch = 1;
				description = "";
			};
			class VasiliyRomasko {
				name = "Vasiliy Romasko";
				face = "Face44";
				glasses = "None";
				speaker = "Peter";
				pitch = 0.952045;
				description = "";
			};
			class AlekseiDemirchan {
				name = "Aleksei Demirchan";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.096497;
				description = "";
				face = "Face47";
			};
			class IvanGataullin {
				name = "Ivan Gataullin";
				face = "Face52";
				glasses = "None";
				speaker = "Peter";
				pitch = 1;
				description = "";
			};
			class PavelYusupov {
				name = "Pavel Yusupov";
				face = "Face45";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.00423;
				description = "";
			};
			class SergeiEltsov {
				name = "Sergei Eltsov";
				face = "Face47";
				glasses = "Sunglasses";
				speaker = "Rob";
				pitch = 1.004388;
				description = "";
			};
			class DimitriPlotinikov {
				name = "Dimitri Plotinikov";
				face = "Face50";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class FyodorLeschev {
				name = "Fyodor Leschev";
				face = "Face51";
				glasses = "None";
				speaker = "Jonah";
				pitch = 0.970996;
				description = "";
			};
			class SergeiLyakhov {
				name = "Sergei Lyakhov";
				face = "Face44";
				glasses = "None";
				speaker = "Dan";
				pitch = 0.901202;
				description = "";
			};
			class NikitaBezborodov {
				name = "Nikita Bezborodov";
				face = "Face52";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class VasiliyMostovoi {
				name = "Vasiliy Mostovoi";
				face = "Face51";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.077893;
				description = "";
			};
			class IvanDuchovny {
				name = "Ivan Duchovny";
				face = "Face51";
				glasses = "Sunglasses";
				speaker = "Dan";
				pitch = 1.055872;
				description = "";
			};
			class YuriyProkin {
				name = "Yuriy Prokin";
				face = "Face47";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1;
				description = "";
			};
			class MichailPurishkevitch {
				name = "Michail Purishkevitch";
				face = "Face47";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.959857;
				description = "";
			};
			class StanislavSkobelov {
				name = "Stanislav Skobelov";
				face = "Face46";
				glasses = "None";
				speaker = "Jonah";
				pitch = 0.93623;
				description = "";
			};
			class ValeriyIgnatov {
				name = "Valeriy Ignatov";
				face = "Face44";
				glasses = "None";
				speaker = "Tom";
				pitch = 1;
				description = "";
			};
			class ViktorMarusev {
				name = "Viktor Marusev";
				face = "Face48";
				glasses = "None";
				speaker = "Jonah";
				pitch = 0.928516;
				description = "";
			};
			class VasiliyChernisov {
				name = "Vasiliy Chernisov";
				face = "Face48";
				glasses = "Spectacles";
				speaker = "Dan";
				pitch = 0.904315;
				description = "";
			};
			class VasiliyGapon {
				name = "Vasiliy Gapon";
				face = "Face52";
				glasses = "None";
				speaker = "Greg";
				pitch = 1;
				description = "";
			};
			class GennadiGavrilenko {
				name = "Gennadi Gavrilenko";
				face = "Face46";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.937762;
				description = "";
			};
			class VasiliyLyapunov {
				name = "Vasiliy Lyapunov";
				face = "Face46";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.038306;
				description = "";
			};
			class LevPrivalov {
				name = "Lev Privalov";
				glasses = "None";
				speaker = "Greg";
				pitch = 1;
				description = "";
				face = "Face47";
			};
			class NicolaiSonkin {
				name = "Nicolai Sonkin";
				face = "Face48";
				glasses = "None";
				speaker = "Dan";
				pitch = 1.063873;
				description = "";
			};
			class BorisSharivker {
				name = "Boris Sharivker";
				face = "Face45";
				glasses = "Spectacles";
				speaker = "Rob";
				pitch = 1.003455;
				description = "";
			};
			class PavelKuzenkov {
				name = "Pavel Kuzenkov";
				glasses = "None";
				speaker = "Dan";
				pitch = 1;
				description = "";
				face = "Face52";
			};
			class NikitaRossovskay {
				name = "Nikita Rossovskay";
				face = "Face52";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.937512;
				description = "";
			};
			class TimofeiZhuvov {
				name = "Timofei Zhuvov";
				face = "Face45";
				glasses = "None";
				speaker = "John";
				pitch = 1.013031;
				description = "";
			};
			class MaksimTokarev {
				name = "Maksim Tokarev";
				glasses = "Spectacles";
				speaker = "Dan";
				pitch = 1;
				description = "";
				face = "Face50";
			};
			class VasiliyMarchenko {
				name = "Vasiliy Marchenko";
				face = "Face44";
				glasses = "None";
				speaker = "Peter";
				pitch = 0.904065;
				description = "";
			};
			class ViktorButyrskay {
				name = "Viktor Butyrskay";
				face = "Face50";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.098846;
				description = "";
			};
			class YefremMendeleev {
				name = "Yefrem Mendeleev";
				face = "Face52";
				glasses = "None";
				speaker = "Peter";
				pitch = 1;
				description = "";
			};
			class IvanBanketik {
				name = "Ivan Banketik";
				face = "Face48";
				glasses = "None";
				speaker = "Dan";
				pitch = 0.963214;
				description = "";
			};
			class SergeiPudovkin {
				name = "Sergei Pudovkin";
				face = "Face52";
				glasses = "Sunglasses";
				speaker = "John";
				pitch = 1.044;
				description = "";
			};
			class AlekseiKarelin {
				name = "Aleksei Karelin";
				face = "Face52";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class SergeiKovlun {
				name = "Sergei Kovlun";
				glasses = "None";
				speaker = "Ted";
				pitch = 0.919733;
				description = "";
				face = "Face46";
			};
			class PavelOleksandr {
				name = "Pavel Oleksandr";
				face = "Face51";
				glasses = "None";
				speaker = "John";
				pitch = 0.937457;
				description = "";
			};
			class IvanShkadov {
				name = "Ivan Shkadov";
				face = "Face52";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class PavelRokhlin {
				name = "Pavel Rokhlin";
				face = "Face47";
				glasses = "None";
				speaker = "Tom";
				pitch = 0.955273;
				description = "";
			};
			class AleksandrOleksandr {
				name = "Aleksandr Oleksandr";
				face = "Face46";
				glasses = "None";
				speaker = "Patrick";
				pitch = 0.933179;
				description = "";
			};
			class StanislavOstrogorsky {
				name = "Stanislav Ostrogorsky";
				face = "Face46";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class PavelLazutkin {
				name = "Pavel Lazutkin";
				face = "Face52";
				glasses = "None";
				speaker = "Tom";
				pitch = 1.011322;
				description = "";
			};
			class TimofeiKondrashchenko {
				name = "Timofei Kondrashchenko";
				face = "Face46";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.038623;
				description = "";
			};
			class NicolaiSautin {
				name = "Nicolai Sautin";
				face = "Face44";
				glasses = "Sunglasses";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class AntonSanhusky {
				name = "Anton Sanhusky";
				face = "Face45";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1.044299;
				description = "";
			};
			class AntonMarkov {
				name = "Anton Markov";
				face = "Face50";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.001715;
				description = "";
			};
			class LevGolubkhov {
				name = "Lev Golubkhov";
				face = "Face52";
				glasses = "None";
				speaker = "Greg";
				pitch = 1;
				description = "";
			};
			class SergeiBeregovoi {
				name = "Sergei Beregovoi";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.94458;
				description = "";
				face = "Face50";
			};
			class SergeiMoskalets {
				name = "Sergei Moskalets";
				face = "Face52";
				glasses = "None";
				speaker = "Tom";
				pitch = 0.915228;
				description = "";
			};
			class SergeiMurin {
				name = "Sergei Murin";
				face = "Face48";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1;
				description = "";
			};
			class IvanChernavin {
				name = "Ivan Chernavin";
				face = "Face52";
				glasses = "None";
				speaker = "John";
				pitch = 0.957965;
				description = "";
			};
			class AleksandrKonoroz {
				name = "Aleksandr Konoroz";
				face = "Face46";
				glasses = "Sunglasses";
				speaker = "Jonah";
				pitch = 0.995837;
				description = "";
			};
			class AntonVolosheninov {
				name = "Anton Volosheninov";
				face = "Face46";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1;
				description = "";
			};
			class SergeiSuperanskai {
				name = "Sergei Superanskai";
				face = "Face47";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.094342;
				description = "";
			};
			class VasiliyBocharkov {
				name = "Vasiliy Bocharkov";
				face = "Face51";
				glasses = "None";
				speaker = "Greg";
				pitch = 0.981824;
				description = "";
			};
			class SergeiDuchovny {
				name = "Sergei Duchovny";
				face = "Face51";
				glasses = "None";
				speaker = "John";
				pitch = 1;
				description = "";
			};
			class DimitriDemeter {
				name = "Dimitri Demeter";
				face = "Face46";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.017426;
				description = "";
			};
			class MichailIpatiev {
				name = "Michail Ipatiev";
				glasses = "Sunglasses";
				speaker = "Rob";
				pitch = 0.930249;
				description = "";
				face = "Face47";
			};
			class IliaRumiantsev {
				name = "Ilia Rumiantsev";
				face = "Face47";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class IvanAisenyev {
				name = "Ivan Aisenyev";
				face = "Face50";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.084027;
				description = "";
			};
			class GennadiDemochev {
				name = "Gennadi Demochev";
				face = "Face50";
				glasses = "None";
				speaker = "Tom";
				pitch = 1.042609;
				description = "";
			};
			class BorisIvanski {
				name = "Boris Ivanski";
				face = "Face50";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1;
				description = "";
			};
			class ViktorKoptev {
				name = "Viktor Koptev";
				face = "Face50";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.055438;
				description = "";
			};
			class BorisSuperanskai {
				name = "Boris Superanskai";
				face = "Face46";
				glasses = "None";
				speaker = "John";
				pitch = 1.08631;
				description = "";
			};
			class PavelTsilevich {
				name = "Pavel Tsilevich";
				face = "Face48";
				glasses = "None";
				speaker = "Patrick";
				pitch = 1;
				description = "";
			};
			class BorisLavrov {
				name = "Boris Lavrov";
				face = "Face48";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.069464;
				description = "";
			};
			class VasiliyDolukhanov {
				name = "Vasiliy Dolukhanov";
				face = "Face52";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.947034;
				description = "";
			};
			class IvanChaikovskay {
				name = "Ivan Chaikovskay";
				face = "Face44";
				glasses = "None";
				speaker = "Greg";
				pitch = 1;
				description = "";
			};
			class DimitriKulikovskay {
				name = "Dimitri Kulikovskay";
				face = "Face46";
				glasses = "None";
				speaker = "John";
				pitch = 0.989618;
				description = "";
			};
			class DenisOstrogorsky {
				name = "Denis Ostrogorsky";
				face = "Face51";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.915064;
				description = "";
			};
			class IvanShulgin {
				name = "Ivan Shulgin";
				glasses = "None";
				speaker = "Ted";
				pitch = 1;
				description = "";
				face = "Face51";
			};
			class TimofeiAlenichev {
				name = "Timofei Alenichev";
				face = "Face50";
				glasses = "None";
				speaker = "Jonah";
				pitch = 0.915399;
				description = "";
			};
			class PavelBukolov {
				name = "Pavel Bukolov";
				face = "Face50";
				glasses = "None";
				speaker = "Jonah";
				pitch = 0.939435;
				description = "";
			};
			class IvanLazutkin {
				name = "Ivan Lazutkin";
				face = "Face45";
				glasses = "None";
				speaker = "John";
				pitch = 1;
				description = "";
			};
			class MaksimKhotliykov {
				name = "Maksim Khotliykov";
				face = "Face50";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.956555;
				description = "";
			};
			class MichailMekhdiev {
				name = "Michail Mekhdiev";
				face = "Face46";
				glasses = "None";
				speaker = "Greg";
				pitch = 0.933667;
				description = "";
			};
			class IvanTitovich {
				name = "Ivan Titovich";
				face = "Face48";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class VladimirPencherjevsky {
				name = "Vladimir Pencherjevsky";
				face = "Face52";
				glasses = "Spectacles";
				speaker = "Greg";
				pitch = 1.042657;
				description = "";
			};
			class IvanGorchakov {
				name = "Ivan Gorchakov";
				face = "Face51";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.093561;
				description = "";
			};
			class DimitriNakhimov {
				name = "Dimitri Nakhimov";
				face = "Face51";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class MichailYagudin {
				name = "Michail Yagudin";
				glasses = "None";
				speaker = "Dan";
				pitch = 0.953143;
				description = "";
				face = "Face51";
			};
			class PavelSokov {
				name = "Pavel Sokov";
				face = "Face48";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.94809;
				description = "";
			};
			class StanislavShayduko {
				name = "Stanislav Shayduko";
				face = "Face47";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class VasiliyIvelitsch {
				name = "Vasiliy Ivelitsch";
				face = "Face50";
				glasses = "None";
				speaker = "Ted";
				pitch = 0.966077;
				description = "";
			};
			class GennadiVostrikov {
				name = "Gennadi Vostrikov";
				face = "Face45";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.927142;
				description = "";
			};
		};
	};
	class West {
		class Soldiers {
			class MikeHirasaki {
				name = "Mike Hirasaki";
				face = "Face39";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class BobbyBruning {
				name = "Bobby Bruning";
				face = "Face38";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.983057;
				description = "";
			};
			class JamesPound {
				name = "James Pound";
				face = "Face31";
				glasses = "None";
				speaker = "John";
				pitch = 0.912097;
				description = "";
			};
			class JimSelf {
				name = "Jim Self";
				face = "Face26";
				glasses = "None";
				speaker = "Dan";
				pitch = 1;
				description = "";
			};
			class GregByrd {
				name = "Greg Byrd";
				face = "Face31";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.014648;
				description = "";
			};
			class GeorgeDabak {
				name = "George Dabak";
				face = "Face25";
				glasses = "None";
				speaker = "Peter";
				pitch = 1.034992;
				description = "";
			};
			class HarrySissman {
				name = "Harry Sissman";
				face = "Face49";
				glasses = "None";
				speaker = "Peter";
				pitch = 1;
				description = "";
			};
			class ChrisMarie {
				name = "Chris Marie";
				face = "Face51";
				glasses = "None";
				speaker = "Peter";
				pitch = 0.943158;
				description = "";
			};
			class JackChern {
				name = "Jack Chern";
				face = "Face45";
				glasses = "None";
				speaker = "John";
				pitch = 1.081006;
				description = "";
			};
			class GeorgeConnell {
				name = "George Connell";
				face = "Face38";
				glasses = "None";
				speaker = "Ted";
				pitch = 1;
				description = "";
			};
			class RyanCarreira {
				name = "Ryan Carreira";
				face = "Face36";
				glasses = "None";
				speaker = "John";
				pitch = 0.977344;
				description = "";
			};
			class AdamShillingsburg {
				name = "Adam Shillingsburg";
				face = "Face39";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.942108;
				description = "";
			};
			class BillDana {
				name = "Bill Dana";
				face = "Face26";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class PatrickHutchinson {
				name = "Patrick Hutchinson";
				face = "Face20";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.984503;
				description = "";
			};
			class JackHarding {
				name = "Jack Harding";
				face = "Face49";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.941168;
				description = "";
			};
			class LarryNielsen {
				name = "Larry Nielsen";
				face = "Face26";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class DonMcMahan {
				name = "Don McMahan";
				face = "Face34";
				glasses = "Spectacles";
				speaker = "Tom";
				pitch = 1.0034;
				description = "";
			};
			class RobChurch {
				name = "Rob Church";
				face = "Face12";
				glasses = "None";
				speaker = "Peter";
				pitch = 0.933728;
				description = "";
			};
			class MikeFine {
				name = "Mike Fine";
				face = "Face37";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class GeorgeMilstead {
				name = "George Milstead";
				face = "Face26";
				glasses = "Spectacles";
				speaker = "Tom";
				pitch = 1.063916;
				description = "";
			};
			class ChuckWendt {
				name = "Chuck Wendt";
				face = "Face20";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.03894;
				description = "";
			};
			class MarkByrd {
				name = "Mark Byrd";
				face = "Face28";
				glasses = "None";
				speaker = "Dan";
				pitch = 1;
				description = "";
			};
			class RobManning {
				name = "Rob Manning";
				face = "Face46";
				glasses = "None";
				speaker = "Jonah";
				pitch = 0.979541;
				description = "";
			};
			class ThomasLove {
				name = "Thomas Love";
				face = "Face20";
				glasses = "None";
				speaker = "Peter";
				pitch = 1.0258;
				description = "";
			};
			class PaulHolder {
				name = "Paul Holder";
				face = "Face43";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class PeterGoff {
				name = "Peter Goff";
				face = "Face31";
				glasses = "None";
				speaker = "Peter";
				pitch = 1.025116;
				description = "";
			};
			class BruceVan {
				name = "Bruce Van";
				face = "Face42";
				glasses = "Spectacles";
				speaker = "Greg";
				pitch = 1.090338;
				description = "";
			};
			class JoeKramer {
				name = "Joe Kramer";
				face = "Face4";
				glasses = "Sunglasses";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class JohnKargatis {
				name = "John Kargatis";
				face = "Face10";
				glasses = "None";
				speaker = "Dan";
				pitch = 1.04057;
				description = "";
			};
			class BillGifford {
				name = "Bill Gifford";
				face = "Face37";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.928259;
				description = "";
			};
			class KenGainer {
				name = "Ken Gainer";
				face = "Face34";
				glasses = "None";
				speaker = "Greg";
				pitch = 1;
				description = "";
			};
			class ChrisLoughridge {
				name = "Chris Loughridge";
				face = "Face48";
				glasses = "Spectacles";
				speaker = "Rob";
				pitch = 1.04425;
				description = "";
			};
			class ScottAkin {
				name = "Scott Akin";
				face = "Face2";
				glasses = "None";
				speaker = "Peter";
				pitch = 1.051678;
				description = "";
			};
			class DaveAthanas {
				name = "Dave Athanas";
				face = "Face34";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class DanArbore {
				name = "Dan Arbore";
				face = "Face42";
				glasses = "None";
				speaker = "Peter";
				pitch = 0.969897;
				description = "";
			};
			class BobbyBuhler {
				name = "Bobby Buhler";
				face = "Face30";
				glasses = "None";
				speaker = "John";
				pitch = 0.975214;
				description = "";
			};
			class JohnMcKinley {
				name = "John McKinley";
				face = "Face25";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class JamesByers {
				name = "James Byers";
				face = "Face36";
				glasses = "None";
				speaker = "Ted";
				pitch = 1.067877;
				description = "";
			};
			class ThomasBuhler {
				name = "Thomas Buhler";
				face = "Face11";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.083771;
				description = "";
			};
			class VictorBirdwell {
				name = "Victor Birdwell";
				face = "Face43";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1;
				description = "";
			};
			class SteveMcGoldrick {
				name = "Steve McGoldrick";
				face = "Face31";
				glasses = "None";
				speaker = "Greg";
				pitch = 0.98678;
				description = "";
			};
			class AndyWells {
				name = "Andy Wells";
				face = "Face8";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.995837;
				description = "";
			};
			class PaulSullivan {
				name = "Paul Sullivan";
				face = "Face30";
				glasses = "None";
				speaker = "Tom";
				pitch = 1;
				description = "";
			};
			class LarryVick {
				name = "Larry Vick";
				face = "Face9";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.06023;
				description = "";
			};
			class PaulMullins {
				name = "Paul Mullins";
				face = "Face39";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.992468;
				description = "";
			};
			class AdanHirsh {
				name = "Adan Hirsh";
				face = "Face35";
				glasses = "None";
				speaker = "John";
				pitch = 1;
				description = "";
			};
			class AdrianGray {
				name = "Adrian Gray";
				face = "Face34";
				glasses = "None";
				speaker = "Tom";
				pitch = 0.95191;
				description = "";
			};
			class JimKimmel {
				name = "Jim Kimmel";
				face = "Face34";
				glasses = "None";
				speaker = "Peter";
				pitch = 0.914502;
				description = "";
			};
			class DaveGainer {
				name = "Dave Gainer";
				face = "Face36";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1;
				description = "";
			};
			class FrankKasbekar {
				name = "Frank Kasbekar";
				face = "Face49";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.065497;
				description = "";
			};
			class PatrickHolt {
				name = "Patrick Holt";
				face = "Face4";
				glasses = "None";
				speaker = "Patrick";
				pitch = 0.962878;
				description = "";
			};
			class JackMcGuire {
				name = "Jack McGuire";
				face = "Face51";
				glasses = "Sunglasses";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class ThomasDryver {
				name = "Thomas Dryver";
				face = "Face41";
				glasses = "None";
				speaker = "Patrick";
				pitch = 0.998315;
				description = "";
			};
			class JohnHellums {
				name = "John Hellums";
				face = "Face52";
				glasses = "None";
				speaker = "Ted";
				pitch = 0.954016;
				description = "";
			};
			class GeorgeArntzen {
				name = "George Arntzen";
				face = "Face26";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class JimHocker {
				name = "Jim Hocker";
				face = "Face32";
				glasses = "None";
				speaker = "John";
				pitch = 0.943872;
				description = "";
			};
			class ThomasSwindell {
				name = "Thomas Swindell";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.000482;
				description = "";
				face = "Face2";
			};
			class ChuckTatum {
				name = "Chuck Tatum";
				face = "Face25";
				glasses = "Spectacles";
				speaker = "Greg";
				pitch = 1;
				description = "";
			};
			class RyanMoore {
				name = "Ryan Moore";
				face = "Face31";
				glasses = "None";
				speaker = "Dan";
				pitch = 0.912738;
				description = "";
			};
			class PatrickBrubaker {
				name = "Patrick Brubaker";
				face = "Face35";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.069507;
				description = "";
			};
			class ThomasGeorge {
				name = "Thomas George";
				face = "Face38";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class RichardCarmichael {
				name = "Richard Carmichael";
				face = "Face47";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.019489;
				description = "";
			};
			class GaryHaines {
				name = "Gary Haines";
				face = "Face25";
				glasses = "None";
				speaker = "Tom";
				pitch = 0.931262;
				description = "";
			};
			class SamNolan {
				name = "Sam Nolan";
				face = "Face4";
				glasses = "Sunglasses";
				speaker = "Dan";
				pitch = 1;
				description = "";
			};
			class StevenWagner {
				name = "Steven Wagner";
				face = "Face11";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.05473;
				description = "";
			};
			class DavidManning {
				name = "David Manning";
				face = "Face12";
				glasses = "None";
				speaker = "Dan";
				pitch = 1.095728;
				description = "";
			};
			class BillShidle {
				name = "Bill Shidle";
				face = "Face8";
				glasses = "None";
				speaker = "Greg";
				pitch = 1;
				description = "";
			};
			class RobertSteele {
				name = "Robert Steele";
				face = "Face31";
				glasses = "None";
				speaker = "Greg";
				pitch = 0.928119;
				description = "";
			};
			class PeterBlomkalns {
				name = "Peter Blomkalns";
				face = "Face42";
				glasses = "None";
				speaker = "John";
				pitch = 1.097302;
				description = "";
			};
			class KeithFerrer {
				name = "Keith Ferrer";
				face = "Face51";
				glasses = "None";
				speaker = "Patrick";
				pitch = 1;
				description = "";
			};
			class TomGamse {
				name = "Tom Gamse";
				face = "Face48";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.007581;
				description = "";
			};
			class JohnLitvak {
				name = "John Litvak";
				face = "Face28";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.076849;
				description = "";
			};
			class BarryLatchford {
				name = "Barry Latchford";
				face = "Face19";
				glasses = "Sunglasses";
				speaker = "Dan";
				pitch = 1;
				description = "";
			};
			class DerekBerry {
				name = "Derek Berry";
				face = "Face29";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.012793;
				description = "";
			};
			class ClayRogers {
				name = "Clay Rogers";
				face = "Face46";
				glasses = "None";
				speaker = "Patrick";
				pitch = 0.960321;
				description = "";
			};
			class ScotChristensen {
				name = "Scot Christensen";
				face = "Face30";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class GarySolon {
				name = "Gary Solon";
				face = "Face36";
				glasses = "None";
				speaker = "Peter";
				pitch = 0.915009;
				description = "";
			};
			class PatrickDenison {
				name = "Patrick Denison";
				face = "Face49";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.049347;
				description = "";
			};
			class AllenCrestani {
				name = "Allen Crestani";
				face = "Face45";
				glasses = "Spectacles";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class JohnDanenhauer {
				name = "John Danenhauer";
				face = "Face12";
				glasses = "None";
				speaker = "Jonah";
				pitch = 0.957867;
				description = "";
			};
			class AndyGaleazzi {
				name = "Andy Galeazzi";
				face = "Face48";
				glasses = "None";
				speaker = "Peter";
				pitch = 1.055243;
				description = "";
			};
			class DuaneBailliet {
				name = "Duane Bailliet";
				face = "Face30";
				glasses = "None";
				speaker = "Peter";
				pitch = 1;
				description = "";
			};
			class BobbyHuffman {
				name = "Bobby Huffman";
				face = "Face49";
				glasses = "None";
				speaker = "Patrick";
				pitch = 1.098077;
				description = "";
			};
			class BrettSwint {
				name = "Brett Swint";
				face = "Face41";
				glasses = "None";
				speaker = "John";
				pitch = 0.989105;
				description = "";
			};
			class DaveHendricks {
				name = "Dave Hendricks";
				face = "Face50";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class RickFawcett {
				name = "Rick Fawcett";
				face = "Face49";
				glasses = "Sunglasses";
				speaker = "Patrick";
				pitch = 0.969458;
				description = "";
			};
			class JasonDaugherty {
				name = "Jason Daugherty";
				face = "Face34";
				glasses = "Spectacles";
				speaker = "Rob";
				pitch = 0.935053;
				description = "";
			};
			class BradleyHerman {
				name = "Bradley Herman";
				face = "Face43";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class JackBoucher {
				name = "Jack Boucher";
				face = "Face39";
				glasses = "None";
				speaker = "Patrick";
				pitch = 1.026917;
				description = "";
			};
			class DavidYeamans {
				name = "David Yeamans";
				face = "Face41";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.928845;
				description = "";
			};
			class BrendanElias {
				name = "Brendan Elias";
				face = "Face11";
				glasses = "None";
				speaker = "Patrick";
				pitch = 1;
				description = "";
			};
			class PatrickCyprus {
				name = "Patrick Cyprus";
				face = "Face20";
				glasses = "None";
				speaker = "Dan";
				pitch = 0.937103;
				description = "";
			};
			class VictorDowd {
				name = "Victor Dowd";
				face = "Face4";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.007275;
				description = "";
			};
			class ThomasDooley {
				name = "Thomas Dooley";
				face = "Face52";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class ArtHansen {
				name = "Art Hansen";
				face = "Face29";
				glasses = "None";
				speaker = "Dan";
				pitch = 1.078259;
				description = "";
			};
			class JayMcElfresh {
				name = "Jay McElfresh";
				face = "Face25";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.964594;
				description = "";
			};
			class BryanRay {
				name = "Bryan Ray";
				face = "Face29";
				glasses = "None";
				speaker = "John";
				pitch = 1;
				description = "";
			};
			class KevinPrice {
				name = "Kevin Price";
				face = "Face51";
				glasses = "Sunglasses";
				speaker = "Dan";
				pitch = 0.963654;
				description = "";
			};
			class AdrianRittenbach {
				name = "Adrian Rittenbach";
				face = "Face12";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.063861;
				description = "";
			};
			class BillGranlund {
				name = "Bill Granlund";
				face = "Face25";
				glasses = "None";
				speaker = "Tom";
				pitch = 1;
				description = "";
			};
			class BillWatters {
				name = "Bill Watters";
				face = "Face4";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.971545;
				description = "";
			};
			class RossDakoulas {
				name = "Ross Dakoulas";
				face = "Face44";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1.036108;
				description = "";
			};
			class MikeTowns {
				name = "Mike Towns";
				face = "Face39";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class JeffFuentes {
				name = "Jeff Fuentes";
				face = "Face43";
				glasses = "None";
				speaker = "John";
				pitch = 0.974097;
				description = "";
			};
			class CraigRuhlin {
				name = "Craig Ruhlin";
				face = "Face38";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.926959;
				description = "";
			};
			class BrettCousins {
				name = "Brett Cousins";
				face = "Face46";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1;
				description = "";
			};
			class BrettFergusson {
				name = "Brett Fergusson";
				face = "Face44";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.012463;
				description = "";
			};
			class RicardoMoyer {
				name = "Ricardo Moyer";
				face = "Face42";
				glasses = "None";
				speaker = "Peter";
				pitch = 0.967511;
				description = "";
			};
			class PeterLong {
				name = "Peter Long";
				face = "Face35";
				glasses = "Spectacles";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class ScotBook {
				name = "Scot Book";
				face = "Face50";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.938336;
				description = "";
			};
			class JohnMoreno {
				name = "John Moreno";
				face = "Face31";
				glasses = "None";
				speaker = "Peter";
				pitch = 0.950739;
				description = "";
			};
			class NatElliston {
				name = "Nat Elliston";
				face = "Face2";
				glasses = "None";
				speaker = "Peter";
				pitch = 1;
				description = "";
			};
			class DennyHerrera {
				name = "Denny Herrera";
				face = "Face4";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.952069;
				description = "";
			};
			class PhillipBoucher {
				name = "Phillip Boucher";
				face = "Face28";
				glasses = "Spectacles";
				speaker = "Dan";
				pitch = 0.961639;
				description = "";
			};
			class GeneLoughridge {
				name = "Gene Loughridge";
				face = "Face52";
				glasses = "None";
				speaker = "Ted";
				pitch = 1;
				description = "";
			};
			class DanHood {
				name = "Dan Hood";
				face = "Face49";
				glasses = "None";
				speaker = "Tom";
				pitch = 0.940991;
				description = "";
			};
			class DanCopeland {
				name = "Dan Copeland";
				face = "Face2";
				glasses = "None";
				speaker = "Dan";
				pitch = 0.910846;
				description = "";
			};
			class JohnFreymann {
				name = "John Freymann";
				face = "Face36";
				glasses = "None";
				speaker = "Tom";
				pitch = 1;
				description = "";
			};
			class RubenLanier {
				name = "Ruben Lanier";
				face = "Face49";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.993921;
				description = "";
			};
			class AdamLopez {
				name = "Adam Lopez";
				face = "Face30";
				glasses = "None";
				speaker = "Dan";
				pitch = 1.013232;
				description = "";
			};
			class DougTaslimi {
				name = "Doug Taslimi";
				face = "Face51";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class BrendanBrockmoller {
				name = "Brendan Brockmoller";
				face = "Face4";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.015521;
				description = "";
			};
			class ToddTanner {
				name = "Todd Tanner";
				face = "Face51";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.90127;
				description = "";
			};
			class StevenBoucher {
				name = "Steven Boucher";
				face = "Face52";
				glasses = "None";
				speaker = "Tom";
				pitch = 1;
				description = "";
			};
			class RyanHeidel {
				name = "Ryan Heidel";
				face = "Face32";
				glasses = "None";
				speaker = "Peter";
				pitch = 1.085132;
				description = "";
			};
			class ToddPickett {
				name = "Todd Pickett";
				face = "Face46";
				glasses = "None";
				speaker = "Tom";
				pitch = 0.928949;
				description = "";
			};
			class JackHammer {
				name = "Jack Hammer";
				face = "Face9";
				glasses = "None";
				speaker = "Dan";
				pitch = 1;
				description = "";
			};
			class JimEtezadi {
				name = "Jim Etezadi";
				face = "Face41";
				glasses = "None";
				speaker = "Patrick";
				pitch = 0.988116;
				description = "";
			};
			class ChuckSpruell {
				name = "Chuck Spruell";
				face = "Face34";
				glasses = "None";
				speaker = "John";
				pitch = 0.961774;
				description = "";
			};
			class BenjaminShami {
				name = "Benjamin Shami";
				face = "Face10";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class AdrianYeamans {
				name = "Adrian Yeamans";
				face = "Face20";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.950262;
				description = "";
			};
			class JeremyMoore {
				name = "Jeremy Moore";
				face = "Face34";
				glasses = "None";
				speaker = "Dan";
				pitch = 1.028986;
				description = "";
			};
			class JeremySteinhour {
				name = "Jeremy Steinhour";
				face = "Face45";
				glasses = "None";
				speaker = "Greg";
				pitch = 1;
				description = "";
			};
			class AdrianMallinson {
				name = "Adrian Mallinson";
				face = "Face42";
				glasses = "Sunglasses";
				speaker = "Tom";
				pitch = 1.068347;
				description = "";
			};
			class DennisReed {
				name = "Dennis Reed";
				face = "Face51";
				glasses = "None";
				speaker = "Greg";
				pitch = 1.06048;
				description = "";
			};
			class SeanJuette {
				name = "Sean Juette";
				face = "Face42";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class BobbyAdler {
				name = "Bobby Adler";
				face = "Face35";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.908899;
				description = "";
			};
			class BillCampbell {
				name = "Bill Campbell";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.933221;
				description = "";
				face = "Face12";
			};
			class BrettVaranasi {
				name = "Brett Varanasi";
				face = "Face30";
				glasses = "Spectacles";
				speaker = "Patrick";
				pitch = 1;
				description = "";
			};
			class FredDeaton {
				name = "Fred Deaton";
				face = "Face28";
				glasses = "None";
				speaker = "Peter";
				pitch = 1.016138;
				description = "";
			};
			class JeffBirdwell {
				name = "Jeff Birdwell";
				face = "Face30";
				glasses = "None";
				speaker = "Dan";
				pitch = 1.019757;
				description = "";
			};
			class AnthonyKamberova {
				name = "Anthony Kamberova";
				face = "Face52";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1;
				description = "";
			};
			class VictorNoonan {
				name = "Victor Noonan";
				face = "Face39";
				glasses = "None";
				speaker = "John";
				pitch = 1.062036;
				description = "";
			};
			class MarcLanier {
				name = "Marc Lanier";
				face = "Face28";
				glasses = "None";
				speaker = "Ted";
				pitch = 1.088147;
				description = "";
			};
			class BrianBeeghly {
				name = "Brian Beeghly";
				face = "Face37";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class EugeneLloyd {
				name = "Eugene Lloyd";
				face = "Face42";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.945709;
				description = "";
			};
			class JohnMcGuire {
				name = "John McGuire";
				face = "Face32";
				glasses = "None";
				speaker = "Peter";
				pitch = 0.92771;
				description = "";
			};
			class VictorKoutras {
				name = "Victor Koutras";
				face = "Face48";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class TomJaranson {
				name = "Tom Jaranson";
				face = "Face4";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.925818;
				description = "";
			};
			class WalterDeMoss {
				name = "Walter DeMoss";
				face = "Face10";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.016425;
				description = "";
			};
			class MikeMonk {
				name = "Mike Monk";
				face = "Face36";
				glasses = "Sunglasses";
				speaker = "Dan";
				pitch = 1;
				description = "";
			};
			class RickMurphey {
				name = "Rick Murphey";
				face = "Face49";
				glasses = "None";
				speaker = "Peter";
				pitch = 1.091797;
				description = "";
			};
			class PeterLassiter {
				name = "Peter Lassiter";
				face = "Face20";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.011334;
				description = "";
			};
			class MikeKimmel {
				name = "Mike Kimmel";
				face = "Face20";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class RodKimmel {
				name = "Rod Kimmel";
				face = "Face38";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.948035;
				description = "";
			};
			class JonathanCallahan {
				name = "Jonathan Callahan";
				face = "Face28";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.983582;
				description = "";
			};
			class JasonCrouse {
				name = "Jason Crouse";
				face = "Face2";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class BillLangston {
				name = "Bill Langston";
				face = "Face37";
				glasses = "None";
				speaker = "Ted";
				pitch = 1.063055;
				description = "";
			};
			class BobbyPounds {
				name = "Bobby Pounds";
				face = "Face12";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.065509;
				description = "";
			};
			class BillBlair {
				name = "Bill Blair";
				face = "Face4";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class BobbyCarreira {
				name = "Bobby Carreira";
				face = "Face31";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.083575;
				description = "";
			};
			class JeffFaye {
				name = "Jeff Faye";
				face = "Face4";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.001959;
				description = "";
			};
			class WalterFredericks {
				name = "Walter Fredericks";
				face = "Face46";
				glasses = "Spectacles";
				speaker = "Greg";
				pitch = 1;
				description = "";
			};
			class DanWilburn {
				name = "Dan Wilburn";
				face = "Face37";
				glasses = "None";
				speaker = "Jonah";
				pitch = 0.900482;
				description = "";
			};
			class GeorgeBreyer {
				name = "George Breyer";
				face = "Face42";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.912634;
				description = "";
			};
			class AdamDryver {
				name = "Adam Dryver";
				face = "Face51";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class JackBoyles {
				name = "Jack Boyles";
				face = "Face38";
				glasses = "None";
				speaker = "Dan";
				pitch = 1.078052;
				description = "";
			};
			class MikeDuckworth {
				name = "Mike Duckworth";
				face = "Face26";
				glasses = "None";
				speaker = "John";
				pitch = 0.990485;
				description = "";
			};
			class FrankSunshine {
				name = "Frank Sunshine";
				face = "Face31";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class JackSachs {
				name = "Jack Sachs";
				face = "Face25";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.926013;
				description = "";
			};
			class JonathanThurman {
				name = "Jonathan Thurman";
				face = "Face8";
				glasses = "None";
				speaker = "Patrick";
				pitch = 1.048999;
				description = "";
			};
			class BarryMarshall {
				name = "Barry Marshall";
				face = "Face41";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class BobbyHaushalter {
				name = "Bobby Haushalter";
				face = "Face19";
				glasses = "None";
				speaker = "Peter";
				pitch = 1.011261;
				description = "";
			};
			class RichardGerbode {
				name = "Richard Gerbode";
				face = "Face35";
				glasses = "Spectacles";
				speaker = "Peter";
				pitch = 0.940454;
				description = "";
			};
			class AdrianRuhlin {
				name = "Adrian Ruhlin";
				face = "Face51";
				glasses = "Sunglasses";
				speaker = "Ted";
				pitch = 1;
				description = "";
			};
			class MarkBlume {
				name = "Mark Blume";
				face = "Face25";
				glasses = "None";
				speaker = "Patrick";
				pitch = 0.928345;
				description = "";
			};
			class CraigStone {
				name = "Craig Stone";
				face = "Face28";
				glasses = "None";
				speaker = "Greg";
				pitch = 0.978876;
				description = "";
			};
			class RyanGrinstein {
				name = "Ryan Grinstein";
				face = "Face28";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class RaymondHendricks {
				name = "Raymond Hendricks";
				face = "Face20";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.931122;
				description = "";
			};
			class MichaelSwales {
				name = "Michael Swales";
				face = "Face30";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1.025244;
				description = "";
			};
			class JackEplett {
				name = "Jack Eplett";
				face = "Face31";
				glasses = "None";
				speaker = "Greg";
				pitch = 1;
				description = "";
			};
			class StuartGreenwood {
				name = "Stuart Greenwood";
				face = "Face12";
				glasses = "None";
				speaker = "Patrick";
				pitch = 1.018732;
				description = "";
			};
			class AdrianKendrick {
				name = "Adrian Kendrick";
				face = "Face30";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.901135;
				description = "";
			};
			class JohnSunshine {
				name = "John Sunshine";
				face = "Face29";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class BillCartwright {
				name = "Bill Cartwright";
				face = "Face26";
				glasses = "None";
				speaker = "Peter";
				pitch = 1.010779;
				description = "";
			};
			class BarryCrain {
				name = "Barry Crain";
				face = "Face39";
				glasses = "Spectacles";
				speaker = "Greg";
				pitch = 1.016699;
				description = "";
			};
			class PeterTyree {
				name = "Peter Tyree";
				face = "Face46";
				glasses = "None";
				speaker = "Dan";
				pitch = 1;
				description = "";
			};
			class JackBowman {
				name = "Jack Bowman";
				face = "Face8";
				glasses = "None";
				speaker = "Greg";
				pitch = 1.076239;
				description = "";
			};
			class JeffElijah {
				name = "Jeff Elijah";
				face = "Face36";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1.066022;
				description = "";
			};
			class AlanWendt {
				name = "Alan Wendt";
				face = "Face32";
				glasses = "None";
				speaker = "Dan";
				pitch = 1;
				description = "";
			};
			class MatthewKielt {
				name = "Matthew Kielt";
				face = "Face41";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.946979;
				description = "";
			};
			class PatrickGaleazzi {
				name = "Patrick Galeazzi";
				face = "Face48";
				glasses = "None";
				speaker = "Greg";
				pitch = 1.004871;
				description = "";
			};
			class RichardMackey {
				name = "Richard Mackey";
				glasses = "None";
				speaker = "Patrick";
				pitch = 1;
				description = "";
				face = "Face47";
			};
			class AlexKargatis {
				name = "Alex Kargatis";
				face = "Face34";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.969543;
				description = "";
			};
			class RandyAtkinson {
				name = "Randy Atkinson";
				face = "Face9";
				glasses = "Spectacles";
				speaker = "Greg";
				pitch = 0.907953;
				description = "";
			};
			class RossSouthworth {
				name = "Ross Southworth";
				face = "Face42";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class TomPorter {
				name = "Tom Porter";
				face = "Face47";
				glasses = "None";
				speaker = "Dan";
				pitch = 0.996289;
				description = "";
			};
			class BobbyBall {
				name = "Bobby Ball";
				face = "Face44";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.066693;
				description = "";
			};
			class PatrickMcKinley {
				name = "Patrick McKinley";
				glasses = "None";
				speaker = "Peter";
				pitch = 1;
				description = "";
				face = "Face12";
			};
			class DanCabrera {
				name = "Dan Cabrera";
				face = "Face32";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.908972;
				description = "";
			};
			class HarryHartz {
				name = "Harry Hartz";
				face = "Face9";
				glasses = "None";
				speaker = "Patrick";
				pitch = 1.027582;
				description = "";
			};
			class TedBass {
				name = "Ted Bass";
				face = "Face11";
				glasses = "None";
				speaker = "Peter";
				pitch = 1;
				description = "";
			};
			class RaymondMonk {
				name = "Raymond Monk";
				face = "Face28";
				glasses = "None";
				speaker = "Ted";
				pitch = 0.986377;
				description = "";
			};
			class PeterBates {
				name = "Peter Bates";
				face = "Face38";
				glasses = "None";
				speaker = "John";
				pitch = 0.927112;
				description = "";
			};
			class DanPoklepovic {
				name = "Dan Poklepovic";
				face = "Face2";
				glasses = "None";
				speaker = "Dan";
				pitch = 1;
				description = "";
			};
			class DennisZeldin {
				name = "Dennis Zeldin";
				face = "Face12";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.084436;
				description = "";
			};
			class GeorgeCowsar {
				name = "George Cowsar";
				face = "Face39";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.914056;
				description = "";
			};
			class ArtMull {
				name = "Art Mull";
				face = "Face43";
				glasses = "None";
				speaker = "John";
				pitch = 1;
				description = "";
			};
			class WadeTate {
				name = "Wade Tate";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.044244;
				description = "";
				face = "Face43";
			};
			class RyanMcKinley {
				name = "Ryan McKinley";
				face = "Face28";
				glasses = "Sunglasses";
				speaker = "Rob";
				pitch = 1.08432;
				description = "";
			};
			class CoreySammartino {
				name = "Corey Sammartino";
				face = "Face51";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class EricSeay {
				name = "Eric Seay";
				face = "Face9";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.93009;
				description = "";
			};
			class AndyGreenslade {
				name = "Andy Greenslade";
				face = "Face28";
				glasses = "None";
				speaker = "Ted";
				pitch = 0.952093;
				description = "";
			};
			class DarrenKapetanovic {
				name = "Darren Kapetanovic";
				face = "Face29";
				glasses = "None";
				speaker = "Peter";
				pitch = 1;
				description = "";
			};
			class AaronScheer {
				name = "Aaron Scheer";
				face = "Face49";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1.074652;
				description = "";
			};
			class EvanKlein {
				name = "Evan Klein";
				face = "Face39";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.967926;
				description = "";
			};
			class BrianFargason {
				name = "Brian Fargason";
				face = "Face45";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class RicardoWardle {
				name = "Ricardo Wardle";
				face = "Face11";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1.097827;
				description = "";
			};
			class DennisMunn {
				name = "Dennis Munn";
				face = "Face8";
				glasses = "None";
				speaker = "Dan";
				pitch = 1.017639;
				description = "";
			};
			class DennyCorbett {
				name = "Denny Corbett";
				face = "Face4";
				glasses = "None";
				speaker = "Tom";
				pitch = 1;
				description = "";
			};
			class RodTerk {
				name = "Rod Terk";
				face = "Face4";
				glasses = "None";
				speaker = "Tom";
				pitch = 1.05741;
				description = "";
			};
			class DarrenEmerson {
				name = "Darren Emerson";
				face = "Face42";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.089667;
				description = "";
			};
			class HarryCarr {
				name = "Harry Carr";
				face = "Face25";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class ClayOverley {
				name = "Clay Overley";
				face = "Face32";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.937494;
				description = "";
			};
			class PatrickAveritt {
				name = "Patrick Averitt";
				face = "Face12";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.992963;
				description = "";
			};
			class JeffTrevino {
				name = "Jeff Trevino";
				face = "Face29";
				glasses = "Sunglasses";
				speaker = "John";
				pitch = 1;
				description = "";
			};
			class HarryElders {
				name = "Harry Elders";
				face = "Face41";
				glasses = "Sunglasses";
				speaker = "Greg";
				pitch = 1.087274;
				description = "";
			};
			class LoganMcCrary {
				name = "Logan McCrary";
				face = "Face30";
				glasses = "None";
				speaker = "Greg";
				pitch = 0.953516;
				description = "";
			};
			class AdamKopnicky {
				name = "Adam Kopnicky";
				face = "Face48";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class MatthewBriggs {
				name = "Matthew Briggs";
				face = "Face44";
				glasses = "None";
				speaker = "Peter";
				pitch = 1.03728;
				description = "";
			};
			class GregEstades {
				name = "Greg Estades";
				face = "Face39";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.075189;
				description = "";
			};
			class JoelPounds {
				name = "Joel Pounds";
				face = "Face36";
				glasses = "None";
				speaker = "Peter";
				pitch = 1;
				description = "";
			};
			class DavidStobb {
				name = "David Stobb";
				face = "Face35";
				glasses = "None";
				speaker = "Peter";
				pitch = 1.06441;
				description = "";
			};
			class ChuckMueller {
				name = "Chuck Mueller";
				face = "Face44";
				glasses = "None";
				speaker = "Jonah";
				pitch = 0.953967;
				description = "";
			};
			class HarryFederle {
				name = "Harry Federle";
				face = "Face9";
				glasses = "None";
				speaker = "Patrick";
				pitch = 1;
				description = "";
			};
			class AlanSolomon {
				name = "Alan Solomon";
				face = "Face39";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.008234;
				description = "";
			};
			class ToddBarnes {
				name = "Todd Barnes";
				face = "Face48";
				glasses = "Spectacles";
				speaker = "Jonah";
				pitch = 1.093121;
				description = "";
			};
			class FredKunitz {
				name = "Fred Kunitz";
				face = "Face49";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class JohnHaines {
				name = "John Haines";
				face = "Face39";
				glasses = "Spectacles";
				speaker = "Adam";
				pitch = 0.968176;
				description = "";
			};
			class ScottKirkpatrick {
				name = "Scott Kirkpatrick";
				face = "Face31";
				glasses = "None";
				speaker = "John";
				pitch = 1.045538;
				description = "";
			};
			class DavidJacobs {
				name = "David Jacobs";
				face = "Face50";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class BillAskew {
				name = "Bill Askew";
				face = "Face4";
				glasses = "None";
				speaker = "Greg";
				pitch = 0.964478;
				description = "";
			};
			class TimMcDonald {
				name = "Tim McDonald";
				face = "Face2";
				glasses = "Spectacles";
				speaker = "Rob";
				pitch = 1.038751;
				description = "";
			};
			class PhillipDeigaard {
				name = "Phillip Deigaard";
				face = "Face34";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class BarryGayman {
				name = "Barry Gayman";
				face = "Face49";
				glasses = "None";
				speaker = "Dan";
				pitch = 1.019855;
				description = "";
			};
			class TimHawley {
				name = "Tim Hawley";
				face = "Face29";
				glasses = "None";
				speaker = "John";
				pitch = 1.098547;
				description = "";
			};
			class BradleyLock {
				name = "Bradley Lock";
				face = "Face37";
				glasses = "None";
				speaker = "Peter";
				pitch = 1;
				description = "";
			};
			class DougFrantom {
				name = "Doug Frantom";
				face = "Face44";
				glasses = "None";
				speaker = "Patrick";
				pitch = 0.990485;
				description = "";
			};
			class EvanFargason {
				name = "Evan Fargason";
				face = "Face4";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.063019;
				description = "";
			};
			class BryanGillingham {
				name = "Bryan Gillingham";
				face = "Face26";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class ToddHenry {
				name = "Todd Henry";
				face = "Face29";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.934052;
				description = "";
			};
			class HarryDeMoss {
				name = "Harry DeMoss";
				face = "Face42";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.983234;
				description = "";
			};
			class RobEstades {
				name = "Rob Estades";
				face = "Face29";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class RussellCatlett {
				name = "Russell Catlett";
				face = "Face31";
				glasses = "Spectacles";
				speaker = "Peter";
				pitch = 0.983954;
				description = "";
			};
			class BruceTate {
				name = "Bruce Tate";
				face = "Face2";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.049854;
				description = "";
			};
			class JeffBerger {
				name = "Jeff Berger";
				face = "Face42";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class RobertHuston {
				name = "Robert Huston";
				face = "Face4";
				glasses = "None";
				speaker = "Tom";
				pitch = 0.989795;
				description = "";
			};
			class TroyMurry {
				name = "Troy Murry";
				face = "Face26";
				glasses = "Spectacles";
				speaker = "Patrick";
				pitch = 1.011169;
				description = "";
			};
			class TomGillespie {
				name = "Tom Gillespie";
				face = "Face38";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1;
				description = "";
			};
			class DuaneBergman {
				name = "Duane Bergman";
				face = "Face4";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.04953;
				description = "";
			};
			class DavidTyler {
				name = "David Tyler";
				face = "Face37";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.069885;
				description = "";
			};
			class ShaunSutton {
				name = "Shaun Sutton";
				face = "Face38";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class JosephDelaney {
				name = "Joseph Delaney";
				face = "Face10";
				glasses = "None";
				speaker = "Dan";
				pitch = 1.03775;
				description = "";
			};
			class DavidCraven {
				name = "David Craven";
				face = "Face12";
				glasses = "None";
				speaker = "Patrick";
				pitch = 1.030804;
				description = "";
			};
			class DennisDorsey {
				name = "Dennis Dorsey";
				face = "Face39";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1;
				description = "";
			};
			class HunterChance {
				name = "Hunter Chance";
				face = "Face52";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.084546;
				description = "";
			};
			class EugeneSonneborn {
				name = "Eugene Sonneborn";
				face = "Face38";
				glasses = "None";
				speaker = "Tom";
				pitch = 0.978363;
				description = "";
			};
			class BarrySachitano {
				name = "Barry Sachitano";
				face = "Face31";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class BillKipp {
				name = "Bill Kipp";
				face = "Face36";
				glasses = "None";
				speaker = "Patrick";
				pitch = 1.081793;
				description = "";
			};
			class ScottBerry {
				name = "Scott Berry";
				face = "Face42";
				glasses = "None";
				speaker = "Peter";
				pitch = 1.00592;
				description = "";
			};
			class MikeSchaefer {
				name = "Mike Schaefer";
				face = "Face25";
				glasses = "None";
				speaker = "Patrick";
				pitch = 1;
				description = "";
			};
			class JeremyLudtke {
				name = "Jeremy Ludtke";
				face = "Face49";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.90116;
				description = "";
			};
			class IvanPoklepovic {
				name = "Ivan Poklepovic";
				face = "Face36";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1.035962;
				description = "";
			};
			class AlejandroListon {
				name = "Alejandro Liston";
				face = "Face46";
				glasses = "None";
				speaker = "Dan";
				pitch = 1;
				description = "";
			};
			class DuaneFreymann {
				name = "Duane Freymann";
				face = "Face9";
				glasses = "None";
				speaker = "Greg";
				pitch = 0.909821;
				description = "";
			};
			class ToddReitmeier {
				name = "Todd Reitmeier";
				face = "Face25";
				glasses = "None";
				speaker = "Ted";
				pitch = 0.923419;
				description = "";
			};
			class EricDavis {
				name = "Eric Davis";
				face = "Face11";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class SeanPippenger {
				name = "Sean Pippenger";
				face = "Face31";
				glasses = "None";
				speaker = "Ted";
				pitch = 0.919916;
				description = "";
			};
			class DaveTruchard {
				name = "Dave Truchard";
				face = "Face41";
				glasses = "None";
				speaker = "Peter";
				pitch = 1.084979;
				description = "";
			};
			class AlanHalladay {
				name = "Alan Halladay";
				face = "Face51";
				glasses = "None";
				speaker = "Peter";
				pitch = 1;
				description = "";
			};
			class HarryVanderzanden {
				name = "Harry Vanderzanden";
				face = "Face31";
				glasses = "None";
				speaker = "Tom";
				pitch = 0.911475;
				description = "";
			};
			class BillBuck {
				name = "Bill Buck";
				face = "Face48";
				glasses = "Sunglasses";
				speaker = "Rob";
				pitch = 0.989062;
				description = "";
			};
			class FredAskew {
				name = "Fred Askew";
				face = "Face35";
				glasses = "None";
				speaker = "Dan";
				pitch = 1;
				description = "";
			};
			class DougKicinski {
				name = "Doug Kicinski";
				face = "Face31";
				glasses = "None";
				speaker = "John";
				pitch = 0.919073;
				description = "";
			};
			class JamesLacy {
				name = "James Lacy";
				face = "Face4";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1.000208;
				description = "";
			};
			class BrettRowatt {
				name = "Brett Rowatt";
				face = "Face45";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class BenMaxwell {
				name = "Ben Maxwell";
				face = "Face42";
				glasses = "None";
				speaker = "Tom";
				pitch = 1.081116;
				description = "";
			};
			class NathanReeves {
				name = "Nathan Reeves";
				face = "Face11";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.072461;
				description = "";
			};
			class AlejandroGlaze {
				name = "Alejandro Glaze";
				face = "Face9";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class SteveStewart {
				name = "Steve Stewart";
				face = "Face10";
				glasses = "Spectacles";
				speaker = "Rob";
				pitch = 0.983478;
				description = "";
			};
			class JeffWhitaker {
				name = "Jeff Whitaker";
				face = "Face49";
				glasses = "None";
				speaker = "Jonah";
				pitch = 0.955328;
				description = "";
			};
			class DaveStaebel {
				name = "Dave Staebel";
				face = "Face8";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1;
				description = "";
			};
			class PerryBrumley {
				name = "Perry Brumley";
				face = "Face19";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.02428;
				description = "";
			};
			class DuaneArbore {
				name = "Duane Arbore";
				face = "Face43";
				glasses = "None";
				speaker = "Dan";
				pitch = 0.985205;
				description = "";
			};
			class JeremyHolloman {
				name = "Jeremy Holloman";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
				face = "Face49";
			};
			class IvanDanenhauer {
				name = "Ivan Danenhauer";
				face = "Face28";
				glasses = "None";
				speaker = "Patrick";
				pitch = 0.925781;
				description = "";
			};
			class EvanRawles {
				name = "Evan Rawles";
				face = "Face29";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.910883;
				description = "";
			};
			class PatrickNorris {
				name = "Patrick Norris";
				face = "Face11";
				glasses = "None";
				speaker = "John";
				pitch = 1;
				description = "";
			};
			class PeterLee {
				name = "Peter Lee";
				face = "Face52";
				glasses = "None";
				speaker = "Tom";
				pitch = 0.912384;
				description = "";
			};
			class MarcMunn {
				name = "Marc Munn";
				face = "Face32";
				glasses = "Spectacles";
				speaker = "Adam";
				pitch = 1.067822;
				description = "";
			};
			class ScottGreenslade {
				name = "Scott Greenslade";
				face = "Face43";
				glasses = "Sunglasses";
				speaker = "Jonah";
				pitch = 1;
				description = "";
			};
			class TimCarter {
				name = "Tim Carter";
				face = "Face25";
				glasses = "None";
				speaker = "Jonah";
				pitch = 0.9065;
				description = "";
			};
			class BrendanCarmichael {
				name = "Brendan Carmichael";
				face = "Face32";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.970752;
				description = "";
			};
			class DennisMcClure {
				name = "Dennis McClure";
				face = "Face4";
				glasses = "None";
				speaker = "Greg";
				pitch = 1;
				description = "";
			};
			class DavePickett {
				name = "Dave Pickett";
				face = "Face37";
				glasses = "None";
				speaker = "Tom";
				pitch = 1.005719;
				description = "";
			};
			class GeorgeKelly {
				name = "George Kelly";
				face = "Face44";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1.021991;
				description = "";
			};
			class DennisHawkins {
				name = "Dennis Hawkins";
				face = "Face26";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1;
				description = "";
			};
			class AaronHolstein {
				name = "Aaron Holstein";
				face = "Face12";
				glasses = "None";
				speaker = "Peter";
				pitch = 1.02503;
				description = "";
			};
			class DennyVarman {
				name = "Denny Varman";
				face = "Face35";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.980194;
				description = "";
			};
			class JoeStuckey {
				name = "Joe Stuckey";
				face = "Face26";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class TobyRodriguez {
				name = "Toby Rodriguez";
				face = "Face10";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.900494;
				description = "";
			};
			class ChadFuller {
				name = "Chad Fuller";
				face = "Face20";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1.011224;
				description = "";
			};
			class TimSolon {
				name = "Tim Solon";
				face = "Face38";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1;
				description = "";
			};
			class JackPhilippe {
				name = "Jack Philippe";
				face = "Face51";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.011902;
				description = "";
			};
			class ClayCusey {
				name = "Clay Cusey";
				face = "Face25";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.924805;
				description = "";
			};
			class SamPlatzek {
				name = "Sam Platzek";
				face = "Face49";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class DanBardsley {
				name = "Dan Bardsley";
				face = "Face42";
				glasses = "None";
				speaker = "Tom";
				pitch = 0.984955;
				description = "";
			};
			class JosephPenisson {
				name = "Joseph Penisson";
				face = "Face48";
				glasses = "Sunglasses";
				speaker = "Jonah";
				pitch = 1.072076;
				description = "";
			};
			class MatthewWagner {
				name = "Matthew Wagner";
				face = "Face28";
				glasses = "None";
				speaker = "John";
				pitch = 1;
				description = "";
			};
			class BillMinard {
				name = "Bill Minard";
				face = "Face52";
				glasses = "None";
				speaker = "Jonah";
				pitch = 0.98175;
				description = "";
			};
			class AndyGuyton {
				name = "Andy Guyton";
				face = "Face29";
				glasses = "Sunglasses";
				speaker = "Ted";
				pitch = 0.974463;
				description = "";
			};
			class JayHenry {
				name = "Jay Henry";
				face = "Face10";
				glasses = "None";
				speaker = "Peter";
				pitch = 1;
				description = "";
			};
			class HarryBrown {
				name = "Harry Brown";
				face = "Face49";
				glasses = "None";
				speaker = "Tom";
				pitch = 0.960584;
				description = "";
			};
			class LarryMunn {
				name = "Larry Munn";
				face = "Face42";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.902649;
				description = "";
			};
			class FredKamberova {
				name = "Fred Kamberova";
				face = "Face32";
				glasses = "None";
				speaker = "John";
				pitch = 1;
				description = "";
			};
			class HarryBaggerly {
				name = "Harry Baggerly";
				face = "Face9";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.939423;
				description = "";
			};
			class WayneTolle {
				name = "Wayne Tolle";
				face = "Face42";
				glasses = "None";
				speaker = "Tom";
				pitch = 0.956897;
				description = "";
			};
			class JackSachitano {
				name = "Jack Sachitano";
				face = "Face38";
				glasses = "Spectacles";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class RossArenson {
				name = "Ross Arenson";
				face = "Face39";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.950714;
				description = "";
			};
			class CraigDeHart {
				name = "Craig DeHart";
				face = "Face20";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.976257;
				description = "";
			};
			class BenChabot {
				name = "Ben Chabot";
				face = "Face4";
				glasses = "None";
				speaker = "Tom";
				pitch = 1;
				description = "";
			};
			class DanWise {
				name = "Dan Wise";
				face = "Face34";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.012689;
				description = "";
			};
			class TedHindman {
				name = "Ted Hindman";
				face = "Face32";
				glasses = "None";
				speaker = "Tom";
				pitch = 1.006195;
				description = "";
			};
			class PatrickMontgomery {
				name = "Patrick Montgomery";
				face = "Face29";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class BrianKirkland {
				name = "Brian Kirkland";
				face = "Face4";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.940912;
				description = "";
			};
			class ClayHalladay {
				name = "Clay Halladay";
				face = "Face19";
				glasses = "None";
				speaker = "Ted";
				pitch = 0.998846;
				description = "";
			};
			class AlejandroStratmann {
				name = "Alejandro Stratmann";
				face = "Face49";
				glasses = "None";
				speaker = "Peter";
				pitch = 1;
				description = "";
			};
			class EricCrain {
				name = "Eric Crain";
				face = "Face25";
				glasses = "None";
				speaker = "Greg";
				pitch = 0.974127;
				description = "";
			};
			class JeremyBarnes {
				name = "Jeremy Barnes";
				face = "Face9";
				glasses = "None";
				speaker = "Jonah";
				pitch = 0.99422;
				description = "";
			};
			class HenryCoram {
				name = "Henry Coram";
				face = "Face32";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class StephenCort {
				name = "Stephen Cort";
				face = "Face8";
				glasses = "Sunglasses";
				speaker = "Jonah";
				pitch = 1.062091;
				description = "";
			};
			class DavidPolk {
				name = "David Polk";
				face = "Face26";
				glasses = "None";
				speaker = "Peter";
				pitch = 1.083716;
				description = "";
			};
			class DennisPond {
				name = "Dennis Pond";
				face = "Face46";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class RichardReynolds {
				name = "Richard Reynolds";
				face = "Face8";
				glasses = "None";
				speaker = "Patrick";
				pitch = 1.042053;
				description = "";
			};
			class JosephGreenslade {
				name = "Joseph Greenslade";
				face = "Face44";
				glasses = "None";
				speaker = "Greg";
				pitch = 1.004364;
				description = "";
			};
			class ShaunTaylor {
				name = "Shaun Taylor";
				face = "Face45";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class JeffGjertsen {
				name = "Jeff Gjertsen";
				face = "Face45";
				glasses = "None";
				speaker = "Dan";
				pitch = 1.085254;
				description = "";
			};
			class MikeWright {
				name = "Mike Wright";
				face = "Face48";
				glasses = "None";
				speaker = "John";
				pitch = 1.063458;
				description = "";
			};
			class ClayLatchford {
				name = "Clay Latchford";
				face = "Face39";
				glasses = "None";
				speaker = "Peter";
				pitch = 1;
				description = "";
			};
			class AdrianKatz {
				name = "Adrian Katz";
				face = "Face28";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1.046045;
				description = "";
			};
			class MarkMinkoff {
				name = "Mark Minkoff";
				face = "Face37";
				glasses = "None";
				speaker = "Greg";
				pitch = 0.976202;
				description = "";
			};
			class NathanLangston {
				name = "Nathan Langston";
				face = "Face32";
				glasses = "None";
				speaker = "Peter";
				pitch = 1;
				description = "";
			};
			class JayElms {
				name = "Jay Elms";
				face = "Face28";
				glasses = "None";
				speaker = "Patrick";
				pitch = 0.949152;
				description = "";
			};
			class RichardRoper {
				name = "Richard Roper";
				face = "Face19";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.934949;
				description = "";
			};
			class DougEtezadi {
				name = "Doug Etezadi";
				face = "Face10";
				glasses = "None";
				speaker = "Peter";
				pitch = 1;
				description = "";
			};
			class BrettSchafer {
				name = "Brett Schafer";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.956738;
				description = "";
				face = "Face42";
			};
			class AllenBird {
				name = "Allen Bird";
				face = "Face20";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.06192;
				description = "";
			};
			class GordonMcGarr {
				name = "Gordon McGarr";
				face = "Face38";
				glasses = "None";
				speaker = "Peter";
				pitch = 1;
				description = "";
			};
			class JackConway {
				name = "Jack Conway";
				face = "Face43";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.915588;
				description = "";
			};
			class PeterPorter {
				name = "Peter Porter";
				face = "Face31";
				glasses = "None";
				speaker = "Dan";
				pitch = 1.046136;
				description = "";
			};
			class JimOvercash {
				name = "Jim Overcash";
				face = "Face25";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class JeffArenson {
				name = "Jeff Arenson";
				glasses = "None";
				speaker = "Ted";
				pitch = 0.977515;
				description = "";
				face = "Face50";
			};
			class AlejandroDaly {
				name = "Alejandro Daly";
				face = "Face47";
				glasses = "None";
				speaker = "Dan";
				pitch = 1.021277;
				description = "";
			};
			class TomThurman {
				name = "Tom Thurman";
				face = "Face49";
				glasses = "None";
				speaker = "Ted";
				pitch = 1;
				description = "";
			};
			class BarryPounds {
				name = "Barry Pounds";
				face = "Face35";
				glasses = "None";
				speaker = "Tom";
				pitch = 1.084735;
				description = "";
			};
			class AlexElias {
				name = "Alex Elias";
				face = "Face51";
				glasses = "None";
				speaker = "Ted";
				pitch = 0.944977;
				description = "";
			};
			class RodCurrie {
				name = "Rod Currie";
				face = "Face28";
				glasses = "None";
				speaker = "Tom";
				pitch = 1;
				description = "";
			};
			class TobyFoulston {
				name = "Toby Foulston";
				face = "Face32";
				glasses = "None";
				speaker = "Tom";
				pitch = 1.055365;
				description = "";
			};
			class HarrySouthworth {
				name = "Harry Southworth";
				face = "Face10";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.080927;
				description = "";
			};
			class GeorgeCrouse {
				name = "George Crouse";
				face = "Face11";
				glasses = "None";
				speaker = "Peter";
				pitch = 1;
				description = "";
			};
			class JoelByon {
				name = "Joel Byon";
				face = "Face2";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.058838;
				description = "";
			};
			class JamieSwaim {
				name = "Jamie Swaim";
				face = "Face39";
				glasses = "None";
				speaker = "Jonah";
				pitch = 0.939606;
				description = "";
			};
			class AdamSonneborn {
				name = "Adam Sonneborn";
				face = "Face19";
				glasses = "Spectacles";
				speaker = "Tom";
				pitch = 1;
				description = "";
			};
			class RicardoLeBlanc {
				name = "Ricardo LeBlanc";
				glasses = "None";
				speaker = "Greg";
				pitch = 1.045837;
				description = "";
				face = "Face31";
			};
			class JeffreyAlexander {
				name = "Jeffrey Alexander";
				face = "Face32";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.995343;
				description = "";
			};
			class ChrisGlaze {
				name = "Chris Glaze";
				face = "Face30";
				glasses = "None";
				speaker = "Peter";
				pitch = 1;
				description = "";
			};
			class MikeHenson {
				name = "Mike Henson";
				face = "Face51";
				glasses = "Spectacles";
				speaker = "Rob";
				pitch = 0.997424;
				description = "";
			};
			class WalterHaggard {
				name = "Walter Haggard";
				face = "Face28";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.037433;
				description = "";
			};
			class TimOlson {
				name = "Tim Olson";
				face = "Face48";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class WayneManthos {
				name = "Wayne Manthos";
				face = "Face34";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.042261;
				description = "";
			};
			class MattChapman {
				name = "Matt Chapman";
				face = "Face43";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.915289;
				description = "";
			};
			class FrankBates {
				name = "Frank Bates";
				face = "Face42";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class AndrewWhite {
				name = "Andrew White";
				face = "Face20";
				glasses = "None";
				speaker = "Patrick";
				pitch = 1.096118;
				description = "";
			};
			class BobbyWebber {
				name = "Bobby Webber";
				face = "Face38";
				glasses = "None";
				speaker = "Patrick";
				pitch = 0.984747;
				description = "";
			};
			class DerekKlamczynski {
				name = "Derek Klamczynski";
				face = "Face29";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class AlejandroWalton {
				name = "Alejandro Walton";
				face = "Face47";
				glasses = "None";
				speaker = "Peter";
				pitch = 0.944598;
				description = "";
			};
			class WaynePercer {
				name = "Wayne Percer";
				face = "Face50";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.958166;
				description = "";
			};
			class ClayBass {
				name = "Clay Bass";
				face = "Face2";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class StevenLatchford {
				name = "Steven Latchford";
				face = "Face37";
				glasses = "None";
				speaker = "Greg";
				pitch = 0.947089;
				description = "";
			};
			class GregDyson {
				name = "Greg Dyson";
				face = "Face10";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.082404;
				description = "";
			};
			class AnthonyWinger {
				name = "Anthony Winger";
				face = "Face4";
				glasses = "None";
				speaker = "John";
				pitch = 1;
				description = "";
			};
			class DarrenApplegate {
				name = "Darren Applegate";
				glasses = "None";
				speaker = "Greg";
				pitch = 0.935944;
				description = "";
				face = "Face45";
			};
			class CarlosLaValle {
				name = "Carlos LaValle";
				face = "Face50";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1.041779;
				description = "";
			};
			class RaymondGriffin {
				name = "Raymond Griffin";
				face = "Face39";
				glasses = "None";
				speaker = "Ted";
				pitch = 1;
				description = "";
			};
			class DavidSyzdek {
				name = "David Syzdek";
				face = "Face44";
				glasses = "None";
				speaker = "Ted";
				pitch = 0.909222;
				description = "";
			};
			class JosephFederle {
				name = "Joseph Federle";
				face = "Face34";
				glasses = "Spectacles";
				speaker = "Greg";
				pitch = 0.910876;
				description = "";
			};
			class RaymondKoutras {
				name = "Raymond Koutras";
				face = "Face25";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class ShaunRittenbach {
				name = "Shaun Rittenbach";
				face = "Face47";
				glasses = "Spectacles";
				speaker = "Adam";
				pitch = 1.031201;
				description = "";
			};
			class PeterHarper {
				name = "Peter Harper";
				face = "Face46";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.972107;
				description = "";
			};
			class PeterElias {
				name = "Peter Elias";
				face = "Face26";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class CoreyTruchard {
				name = "Corey Truchard";
				face = "Face11";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.974628;
				description = "";
			};
			class GordonHeidel {
				name = "Gordon Heidel";
				glasses = "None";
				speaker = "John";
				pitch = 0.933105;
				description = "";
				face = "Face48";
			};
			class JustinClasen {
				name = "Justin Clasen";
				face = "Face48";
				glasses = "None";
				speaker = "John";
				pitch = 1;
				description = "";
			};
			class JimGarverick {
				name = "Jim Garverick";
				face = "Face20";
				glasses = "None";
				speaker = "Patrick";
				pitch = 0.92525;
				description = "";
			};
			class BarryBrubaker {
				name = "Barry Brubaker";
				face = "Face42";
				glasses = "None";
				speaker = "Greg";
				pitch = 0.900281;
				description = "";
			};
			class JohnHouston {
				name = "John Houston";
				glasses = "Spectacles";
				speaker = "Greg";
				pitch = 1;
				description = "";
				face = "Face30";
			};
			class TimCheville {
				name = "Tim Cheville";
				face = "Face36";
				glasses = "None";
				speaker = "Greg";
				pitch = 1.042236;
				description = "";
			};
			class RaymondPercer {
				name = "Raymond Percer";
				face = "Face31";
				glasses = "None";
				speaker = "Ted";
				pitch = 0.99986;
				description = "";
			};
			class DanBickford {
				name = "Dan Bickford";
				face = "Face35";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class HarryNugent {
				name = "Harry Nugent";
				face = "Face38";
				glasses = "None";
				speaker = "Dan";
				pitch = 0.91142;
				description = "";
			};
			class KevinDowling {
				name = "Kevin Dowling";
				face = "Face44";
				glasses = "None";
				speaker = "John";
				pitch = 1.061359;
				description = "";
			};
			class HarryKoutras {
				name = "Harry Koutras";
				face = "Face32";
				glasses = "None";
				speaker = "Ted";
				pitch = 1;
				description = "";
			};
			class JustinHuston {
				name = "Justin Huston";
				face = "Face38";
				glasses = "None";
				speaker = "Ted";
				pitch = 0.999963;
				description = "";
			};
			class DanHenson {
				name = "Dan Henson";
				face = "Face49";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.911383;
				description = "";
			};
			class PatrickCarmichael {
				name = "Patrick Carmichael";
				face = "Face9";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class KevinHurley {
				name = "Kevin Hurley";
				face = "Face42";
				glasses = "Spectacles";
				speaker = "Greg";
				pitch = 0.956091;
				description = "";
			};
			class HenrySteele {
				name = "Henry Steele";
				face = "Face32";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.057575;
				description = "";
			};
			class JohnHaygood {
				name = "John Haygood";
				face = "Face30";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class KeithShifley {
				name = "Keith Shifley";
				face = "Face29";
				glasses = "None";
				speaker = "Ted";
				pitch = 0.916693;
				description = "";
			};
			class NathanWyatt {
				name = "Nathan Wyatt";
				face = "Face51";
				glasses = "None";
				speaker = "Tom";
				pitch = 0.953265;
				description = "";
			};
			class GeneCox {
				name = "Gene Cox";
				face = "Face37";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class DonNockton {
				name = "Don Nockton";
				face = "Face52";
				glasses = "None";
				speaker = "Peter";
				pitch = 0.942468;
				description = "";
			};
			class DavidRyan {
				name = "David Ryan";
				face = "Face11";
				glasses = "Sunglasses";
				speaker = "Adam";
				pitch = 0.971112;
				description = "";
			};
			class BillStewart {
				name = "Bill Stewart";
				face = "Face2";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class JeremyWilliams {
				name = "Jeremy Williams";
				face = "Face35";
				glasses = "None";
				speaker = "Greg";
				pitch = 0.93609;
				description = "";
			};
			class PerryBeusse {
				name = "Perry Beusse";
				face = "Face19";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.992389;
				description = "";
			};
			class TroyLawera {
				name = "Troy Lawera";
				face = "Face51";
				glasses = "None";
				speaker = "Greg";
				pitch = 1;
				description = "";
			};
			class BillCaffey {
				name = "Bill Caffey";
				face = "Face49";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.026843;
				description = "";
			};
			class JackSteinke {
				name = "Jack Steinke";
				face = "Face31";
				glasses = "None";
				speaker = "Jonah";
				pitch = 0.944458;
				description = "";
			};
			class JohnLove {
				name = "John Love";
				face = "Face45";
				glasses = "None";
				speaker = "Dan";
				pitch = 1;
				description = "";
			};
			class DerekCowsar {
				name = "Derek Cowsar";
				face = "Face31";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.934027;
				description = "";
			};
			class RobertWilburn {
				name = "Robert Wilburn";
				face = "Face39";
				glasses = "None";
				speaker = "Ted";
				pitch = 1.065662;
				description = "";
			};
			class DerekPatton {
				name = "Derek Patton";
				face = "Face25";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class JeffMinnotte {
				name = "Jeff Minnotte";
				face = "Face47";
				glasses = "None";
				speaker = "Tom";
				pitch = 0.988544;
				description = "";
			};
			class NatLangston {
				name = "Nat Langston";
				face = "Face35";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.088251;
				description = "";
			};
			class JoeBrockman {
				name = "Joe Brockman";
				face = "Face10";
				glasses = "Spectacles";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class MatthewMcCarthy {
				name = "Matthew McCarthy";
				face = "Face34";
				glasses = "Sunglasses";
				speaker = "Peter";
				pitch = 1.05625;
				description = "";
			};
			class TomSutton {
				name = "Tom Sutton";
				face = "Face34";
				glasses = "None";
				speaker = "Tom";
				pitch = 0.986609;
				description = "";
			};
			class RubenDerr {
				name = "Ruben Derr";
				face = "Face32";
				glasses = "Spectacles";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class GordonMillard {
				name = "Gordon Millard";
				face = "Face26";
				glasses = "None";
				speaker = "Dan";
				pitch = 0.980902;
				description = "";
			};
			class BradleyKastensmidt {
				name = "Bradley Kastensmidt";
				face = "Face2";
				glasses = "Spectacles";
				speaker = "Patrick";
				pitch = 0.983698;
				description = "";
			};
			class TomHerrera {
				name = "Tom Herrera";
				glasses = "None";
				speaker = "Dan";
				pitch = 1;
				description = "";
				face = "Face19";
			};
			class WayneBanks {
				name = "Wayne Banks";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.983978;
				description = "";
				face = "Face31";
			};
			class LoganLarsen {
				name = "Logan Larsen";
				face = "Face30";
				glasses = "None";
				speaker = "Jonah";
				pitch = 0.999304;
				description = "";
			};
			class JohnFrey {
				name = "John Frey";
				face = "Face31";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1;
				description = "";
			};
			class RobertLeslie {
				name = "Robert Leslie";
				face = "Face2";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.099939;
				description = "";
			};
			class CraigMcFarland {
				name = "Craig McFarland";
				face = "Face35";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.056567;
				description = "";
			};
			class RogerCaffrey {
				name = "Roger Caffrey";
				face = "Face30";
				glasses = "None";
				speaker = "John";
				pitch = 1;
				description = "";
			};
			class TroyBarnwell {
				name = "Troy Barnwell";
				face = "Face48";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.018976;
				description = "";
			};
			class RubenFossati {
				name = "Ruben Fossati";
				face = "Face8";
				glasses = "None";
				speaker = "Patrick";
				pitch = 0.971484;
				description = "";
			};
			class JackHouse {
				name = "Jack House";
				face = "Face45";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class GeorgeCummings {
				name = "George Cummings";
				face = "Face42";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.019598;
				description = "";
			};
			class HunterYeamans {
				name = "Hunter Yeamans";
				face = "Face32";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.015857;
				description = "";
			};
			class WayneKastensmidt {
				name = "Wayne Kastensmidt";
				face = "Face38";
				glasses = "None";
				speaker = "Patrick";
				pitch = 1;
				description = "";
			};
			class JosephCatlett {
				name = "Joseph Catlett";
				face = "Face25";
				glasses = "None";
				speaker = "Dan";
				pitch = 1.073151;
				description = "";
			};
			class JohnConway {
				name = "John Conway";
				face = "Face10";
				glasses = "None";
				speaker = "Rob";
				pitch = 0.967718;
				description = "";
			};
			class MikeFisher {
				name = "Mike Fisher";
				face = "Face36";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class MarcBrady {
				name = "Marc Brady";
				face = "Face45";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.003894;
				description = "";
			};
			class EdwardYen {
				name = "Edward Yen";
				face = "Face42";
				glasses = "Spectacles";
				speaker = "Rob";
				pitch = 0.910712;
				description = "";
			};
			class RobDanenhauer {
				name = "Rob Danenhauer";
				face = "Face41";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class BobbyHudgings {
				name = "Bobby Hudgings";
				face = "Face36";
				glasses = "None";
				speaker = "Tom";
				pitch = 0.921008;
				description = "";
			};
			class DonSouthworth {
				name = "Don Southworth";
				face = "Face47";
				glasses = "None";
				speaker = "Adam";
				pitch = 0.967657;
				description = "";
			};
			class BradSachs {
				name = "Brad Sachs";
				face = "Face50";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1;
				description = "";
			};
			class JohnGeorge {
				name = "John George";
				face = "Face38";
				glasses = "None";
				speaker = "John";
				pitch = 0.954687;
				description = "";
			};
			class EricFaye {
				name = "Eric Faye";
				face = "Face37";
				glasses = "Spectacles";
				speaker = "Patrick";
				pitch = 1.086755;
				description = "";
			};
			class VictorTyler {
				name = "Victor Tyler";
				face = "Face32";
				glasses = "None";
				speaker = "Jonah";
				pitch = 1;
				description = "";
			};
			class AlejandroKielt {
				name = "Alejandro Kielt";
				face = "Face38";
				glasses = "None";
				speaker = "Greg";
				pitch = 1.03642;
				description = "";
			};
			class MikeChurch {
				name = "Mike Church";
				face = "Face26";
				glasses = "None";
				speaker = "Patrick";
				pitch = 1.033063;
				description = "";
			};
			class MikeMcDonald {
				name = "Mike McDonald";
				face = "Face10";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class BillAlexander {
				name = "Bill Alexander";
				face = "Face12";
				glasses = "None";
				speaker = "Ted";
				pitch = 1.061041;
				description = "";
			};
			class GregDunham {
				name = "Greg Dunham";
				face = "Face9";
				glasses = "None";
				speaker = "Peter";
				pitch = 0.997827;
				description = "";
			};
			class DanLamb {
				name = "Dan Lamb";
				face = "Face28";
				glasses = "None";
				speaker = "Peter";
				pitch = 1;
				description = "";
			};
			class KevinCates {
				name = "Kevin Cates";
				face = "Face20";
				glasses = "None";
				speaker = "Ted";
				pitch = 1.019116;
				description = "";
			};
			class ClayDanenhauer {
				name = "Clay Danenhauer";
				face = "Face39";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.049011;
				description = "";
			};
			class LarryDees {
				name = "Larry Dees";
				face = "Face11";
				glasses = "None";
				speaker = "Peter";
				pitch = 1;
				description = "";
			};
			class PatrickGeorge {
				name = "Patrick George";
				face = "Face32";
				glasses = "None";
				speaker = "Ted";
				pitch = 0.943677;
				description = "";
			};
			class DanielWooten {
				name = "Daniel Wooten";
				face = "Face32";
				glasses = "None";
				speaker = "Peter";
				pitch = 0.952716;
				description = "";
			};
			class TomWard {
				name = "Tom Ward";
				face = "Face35";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class AdamHouston {
				name = "Adam Houston";
				face = "Face2";
				glasses = "None";
				speaker = "Ted";
				pitch = 1.074463;
				description = "";
			};
			class PatrickMaxwell {
				name = "Patrick Maxwell";
				face = "Face41";
				glasses = "None";
				speaker = "Ted";
				pitch = 1.080048;
				description = "";
			};
			class ArthurSymonds {
				name = "Arthur Symonds";
				face = "Face50";
				glasses = "None";
				speaker = "Patrick";
				pitch = 1;
				description = "";
			};
			class TomMallinson {
				name = "Tom Mallinson";
				face = "Face51";
				glasses = "None";
				speaker = "Peter";
				pitch = 0.970062;
				description = "";
			};
			class MatthewDodson {
				name = "Matthew Dodson";
				face = "Face35";
				glasses = "None";
				speaker = "Patrick";
				pitch = 0.936139;
				description = "";
			};
			class GeorgeBoyles {
				name = "George Boyles";
				face = "Face35";
				glasses = "None";
				speaker = "Peter";
				pitch = 1;
				description = "";
			};
			class PeterSims {
				name = "Peter Sims";
				face = "Face35";
				glasses = "None";
				speaker = "Greg";
				pitch = 1.095245;
				description = "";
			};
			class JohnMcMath {
				name = "John McMath";
				face = "Face28";
				glasses = "None";
				speaker = "Ted";
				pitch = 1.097955;
				description = "";
			};
			class SamBricout {
				name = "Sam Bricout";
				face = "Face39";
				glasses = "None";
				speaker = "Rob";
				pitch = 1;
				description = "";
			};
			class DarrenSouthworth {
				name = "Darren Southworth";
				face = "Face46";
				glasses = "None";
				speaker = "Greg";
				pitch = 1.096905;
				description = "";
			};
			class TomHale {
				name = "Tom Hale";
				face = "Face26";
				glasses = "None";
				speaker = "Adam";
				pitch = 1.028418;
				description = "";
			};
			class GeorgeCusey {
				name = "George Cusey";
				face = "Face26";
				glasses = "None";
				speaker = "Adam";
				pitch = 1;
				description = "";
			};
			class NathanReddy {
				name = "Nathan Reddy";
				face = "Face28";
				glasses = "None";
				speaker = "Tom";
				pitch = 1.015942;
				description = "";
			};
			class DavidHill {
				name = "David Hill";
				face = "Face26";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.059387;
				description = "";
			};
			class TomShaw {
				name = "Tom Shaw";
				face = "Face36";
				glasses = "None";
				speaker = "Peter";
				pitch = 1;
				description = "";
			};
			class BradBrockman {
				name = "Brad Brockman";
				face = "Face30";
				glasses = "Sunglasses";
				speaker = "Dan";
				pitch = 0.98288;
				description = "";
			};
			class KeithMunn {
				name = "Keith Munn";
				face = "Face9";
				glasses = "None";
				speaker = "Dan";
				pitch = 1.073816;
				description = "";
			};
			class BenjaminWeinheimer {
				name = "Benjamin Weinheimer";
				face = "Face52";
				glasses = "None";
				speaker = "Tom";
				pitch = 1;
				description = "";
			};
			class ChadOConnell {
				name = "Chad O'Connell";
				face = "Face50";
				glasses = "None";
				speaker = "Rob";
				pitch = 1.032794;
				description = "";
			};
			class AllenHale {
				name = "Allen Hale";
				face = "Face19";
				glasses = "None";
				speaker = "Jonah";
				pitch = 0.910223;
				description = "";
			};
		};
	};
	class Guerrila {
		class Soldiers {
			class AntoninMrkacek {
				name = "Antonin Mrkacek";
				face = "Face6";
				speaker = "Marc";
				pitch = 0.906018;
				glasses = "None";
			};
			class FrantisekAisman {
				name = "Frantisek Aisman";
				face = "Face34";
				speaker = "Peter";
				pitch = 1.024652;
				glasses = "None";
			};
			class JaroslavMidliar {
				name = "Jaroslav Midliar";
				face = "Face45";
				speaker = "Patrick";
				pitch = 1.063013;
				glasses = "None";
			};
			class MilosBratranek {
				name = "Milos Bratranek";
				face = "Face18";
				speaker = "Adam";
				pitch = 0.987585;
				glasses = "None";
			};
			class FrantisekJazik {
				name = "Frantisek Jazik";
				face = "Face9";
				speaker = "Rich";
				pitch = 0.931415;
				glasses = "None";
			};
			class MiroslavAdolf {
				name = "Miroslav Adolf";
				face = "Face37";
				speaker = "Adam";
				pitch = 0.926459;
				glasses = "None";
			};
			class BohumilStejkoza {
				name = "Bohumil Stejkoza";
				face = "Face41";
				speaker = "Peter";
				pitch = 1.07016;
				glasses = "Spectacles";
			};
			class LambertRykr {
				name = "Lambert Rykr";
				face = "Face44";
				speaker = "Rich";
				pitch = 1.097369;
				glasses = "None";
			};
			class JaroslavStehule {
				name = "Jaroslav Stehule";
				face = "Face36";
				speaker = "George";
				pitch = 0.905646;
				glasses = "None";
			};
			class JaroslavBoubravsky {
				name = "Jaroslav Boubravsky";
				face = "Face52";
				speaker = "Paul";
				pitch = 0.959839;
				glasses = "None";
			};
			class DrahomirTafat {
				name = "Drahomir Tafat";
				face = "Face51";
				speaker = "Rob";
				pitch = 1.07926;
				glasses = "Spectacles";
			};
			class JiriNedbalek {
				name = "Jiri Nedbalek";
				face = "Face18";
				speaker = "Tom";
				pitch = 1.098737;
				glasses = "None";
			};
			class MichalPokorny {
				name = "Michal Pokorny";
				face = "Face44";
				speaker = "Adam";
				pitch = 1.022314;
				glasses = "None";
			};
			class AntoninAndert {
				name = "Antonin Andert";
				face = "Face44";
				speaker = "Paul";
				pitch = 1.03941;
				glasses = "None";
			};
			class PavelHoudek {
				name = "Pavel Houdek";
				face = "Face47";
				speaker = "Paul";
				pitch = 1.020227;
				glasses = "Spectacles";
			};
			class BohumilNadhera {
				name = "Bohumil Nadhera";
				face = "Face42";
				speaker = "Patrick";
				pitch = 0.909338;
				glasses = "None";
			};
			class VladimirKlimes {
				name = "Vladimir Klimes";
				face = "Face13";
				speaker = "Greg";
				pitch = 0.95954;
				glasses = "None";
			};
			class FrantisekMuff {
				name = "Frantisek Muff";
				face = "Default";
				speaker = "Rob";
				pitch = 1.003693;
				glasses = "Spectacles";
			};
			class JanStoss {
				name = "Jan Stoss";
				face = "Face16";
				speaker = "Marc";
				pitch = 1.03396;
				glasses = "None";
			};
			class JanKozman {
				name = "Jan Kozman";
				face = "Face29";
				speaker = "Dan";
				pitch = 0.903625;
				glasses = "Sunglasses";
			};
			class VladimirAlba {
				name = "Vladimir Alba";
				face = "Face3";
				speaker = "Patrick";
				pitch = 0.941858;
				glasses = "None";
			};
			class MiroslavSteimar {
				name = "Miroslav Steimar";
				face = "Default";
				speaker = "Rich";
				pitch = 1.048151;
				glasses = "None";
			};
			class PetrViduna {
				name = "Petr Viduna";
				face = "Face48";
				speaker = "Jonah";
				pitch = 1.030035;
				glasses = "None";
			};
			class TomasCizner {
				name = "Tomas Cizner";
				face = "Face1";
				speaker = "Paul";
				pitch = 0.925403;
				glasses = "None";
			};
			class JaromirMurtinger {
				name = "Jaromir Murtinger";
				face = "Face35";
				speaker = "Ted";
				pitch = 0.936664;
				glasses = "Sunglasses";
			};
			class VladimirNedelijak {
				name = "Vladimir Nedelijak";
				face = "Face44";
				speaker = "George";
				pitch = 0.996198;
				glasses = "None";
			};
			class LadislavFeiler {
				name = "Ladislav Feiler";
				face = "Face45";
				speaker = "Patrick";
				pitch = 1.040173;
				glasses = "None";
			};
			class JiriGeringer {
				name = "Jiri Geringer";
				face = "Face31";
				speaker = "Tom";
				pitch = 1.055481;
				glasses = "None";
			};
			class EdvardAbrham {
				name = "Edvard Abrham";
				face = "Face38";
				speaker = "Paul";
				pitch = 1.067529;
				glasses = "None";
			};
			class KarelCiper {
				name = "Karel Ciper";
				face = "Face28";
				speaker = "Patrick";
				pitch = 0.918469;
				glasses = "None";
			};
			class FrantisekNykl {
				name = "Frantisek Nykl";
				face = "Face11";
				speaker = "Rich";
				pitch = 1.058148;
				glasses = "None";
			};
			class IvanMurtin {
				name = "Ivan Murtin";
				face = "Face36";
				speaker = "Rob";
				pitch = 1.045612;
				glasses = "None";
			};
			class DanielFoltynek {
				name = "Daniel Foltynek";
				face = "Face35";
				speaker = "John";
				pitch = 0.999255;
				glasses = "None";
			};
			class OldrichNavalkovsky {
				name = "Oldrich Navalkovsky";
				face = "Face3";
				speaker = "Tom";
				pitch = 0.945477;
				glasses = "None";
			};
			class JaroslavSic {
				name = "Jaroslav Sic";
				face = "Face11";
				speaker = "Paul";
				pitch = 0.971393;
				glasses = "None";
			};
			class JiriCinybulk {
				name = "Jiri Cinybulk";
				face = "Face41";
				speaker = "Peter";
				pitch = 0.902484;
				glasses = "None";
			};
			class PetrMykytyn {
				name = "Petr Mykytyn";
				face = "Default";
				speaker = "Rich";
				pitch = 0.939783;
				glasses = "None";
			};
			class JaroslavSibrina {
				name = "Jaroslav Sibrina";
				face = "Face52";
				speaker = "Paul";
				pitch = 1.038269;
				glasses = "None";
			};
			class MartinBartos {
				name = "Martin Bartos";
				face = "Face13";
				speaker = "Greg";
				pitch = 0.959003;
				glasses = "None";
			};
			class KarelAdamovic {
				name = "Karel Adamovic";
				face = "Face34";
				speaker = "Rob";
				pitch = 0.98656;
				glasses = "None";
			};
			class JaroslavKozohorsky {
				name = "Jaroslav Kozohorsky";
				face = "Face24";
				speaker = "Adam";
				pitch = 0.918677;
				glasses = "None";
			};
			class FrantisekCicha {
				name = "Frantisek Cicha";
				face = "Face44";
				speaker = "Dan";
				pitch = 0.984589;
				glasses = "None";
			};
			class MiroslavBrepta {
				name = "Miroslav Brepta";
				face = "Face26";
				speaker = "Greg";
				pitch = 1.063586;
				glasses = "None";
			};
			class VaclavSchybal {
				name = "Vaclav Schybal";
				face = "Face13";
				speaker = "Jonah";
				pitch = 1.083667;
				glasses = "None";
			};
			class ArpadSilvestr {
				name = "Arpad Silvestr";
				face = "Face33";
				speaker = "Tom";
				pitch = 1.061884;
				glasses = "Spectacles";
			};
			class JosefSima {
				name = "Josef Sima";
				face = "Face24";
				speaker = "George";
				pitch = 0.980872;
				glasses = "None";
			};
			class MiroslavNebesar {
				name = "Miroslav Nebesar";
				face = "Face30";
				speaker = "Rob";
				pitch = 0.927789;
				glasses = "None";
			};
			class MilanFehr {
				name = "Milan Fehr";
				face = "Face9";
				speaker = "Rob";
				pitch = 1.004639;
				glasses = "None";
			};
			class AntoninStanislavcik {
				name = "Antonin Stanislavcik";
				face = "Face12";
				speaker = "Patrick";
				pitch = 0.927527;
				glasses = "None";
			};
			class JonasDavid {
				name = "Jonas David";
				face = "Face29";
				speaker = "Patrick";
				pitch = 1.070697;
				glasses = "None";
			};
			class AlesBrejla {
				name = "Ales Brejla";
				face = "Face45";
				speaker = "Paul";
				pitch = 0.918866;
				glasses = "None";
			};
			class KarelSlavik {
				name = "Karel Slavik";
				face = "Face47";
				speaker = "Jonah";
				pitch = 0.962109;
				glasses = "None";
			};
			class AloisMyslivecek {
				name = "Alois Myslivecek";
				face = "Face1";
				speaker = "Adam";
				pitch = 1.041937;
				glasses = "None";
			};
			class JaroslavNadenik {
				name = "Jaroslav Nadenik";
				face = "Face52";
				speaker = "Rich";
				pitch = 0.918005;
				glasses = "None";
			};
			class MarekNos {
				name = "Marek Nos";
				face = "Face52";
				speaker = "Paul";
				pitch = 1.013464;
				glasses = "None";
			};
			class BohumilNakladal {
				name = "Bohumil Nakladal";
				face = "Face38";
				speaker = "Jonah";
				pitch = 0.935028;
				glasses = "None";
			};
			class DominikJung {
				name = "Dominik Jung";
				face = "Face29";
				speaker = "Ted";
				pitch = 1.067499;
				glasses = "None";
			};
			class MilanCibik {
				name = "Milan Cibik";
				face = "Face9";
				speaker = "John";
				pitch = 0.952429;
				glasses = "None";
			};
			class ChotimirDobner {
				name = "Chotimir Dobner";
				face = "Face11";
				speaker = "Patrick";
				pitch = 0.967126;
				glasses = "None";
			};
			class MilosVanko {
				name = "Milos Vanko";
				face = "Face3";
				speaker = "Jonah";
				pitch = 1.048102;
				glasses = "None";
			};
			class VratislavDajnar {
				name = "Vratislav Dajnar";
				face = "Face31";
				speaker = "George";
				pitch = 0.99035;
				glasses = "None";
			};
			class AntoninConk {
				name = "Antonin Conk";
				face = "Face20";
				speaker = "George";
				pitch = 0.988184;
				glasses = "None";
			};
			class ArnostNedela {
				name = "Arnost Nedela";
				face = "Face28";
				speaker = "Patrick";
				pitch = 1.09917;
				glasses = "None";
			};
			class JanBrhel {
				name = "Jan Brhel";
				face = "Face49";
				speaker = "John";
				pitch = 0.972345;
				glasses = "None";
			};
			class BohuslavNaprstek {
				name = "Bohuslav Naprstek";
				face = "Face24";
				speaker = "Ted";
				pitch = 0.986212;
				glasses = "None";
			};
			class PremekSimaichl {
				name = "Premek Simaichl";
				face = "Default";
				speaker = "Peter";
				pitch = 1.061243;
				glasses = "None";
			};
			class ArnostAlince {
				name = "Arnost Alince";
				face = "Face15";
				speaker = "Rob";
				pitch = 1.044312;
				glasses = "None";
			};
			class AntoninBrhlik {
				name = "Antonin Brhlik";
				face = "Face9";
				speaker = "George";
				pitch = 0.980243;
				glasses = "None";
			};
			class BohumirJurek {
				name = "Bohumir Jurek";
				face = "Face13";
				speaker = "John";
				pitch = 1.028571;
				glasses = "None";
			};
			class JosefDmejchal {
				name = "Josef Dmejchal";
				face = "Default";
				speaker = "Rich";
				pitch = 0.920386;
				glasses = "None";
			};
			class PetrJavurek {
				name = "Petr Javurek";
				face = "Face20";
				speaker = "John";
				pitch = 1.002344;
				glasses = "None";
			};
			class MartinKloucek {
				name = "Martin Kloucek";
				face = "Face36";
				speaker = "Paul";
				pitch = 0.924207;
				glasses = "None";
			};
			class BranislavIvanko {
				name = "Branislav Ivanko";
				face = "Face49";
				speaker = "John";
				pitch = 1.032025;
				glasses = "None";
			};
			class MilanSibr {
				name = "Milan Sibr";
				face = "Face40";
				speaker = "Rob";
				pitch = 1.044122;
				glasses = "None";
			};
			class MArtinBenes {
				name = "MArtin Benes";
				face = "Face8";
				speaker = "Patrick";
				pitch = 1.099554;
				glasses = "None";
			};
			class FrantisekTalian {
				name = "Frantisek Talian";
				face = "Face38";
				speaker = "Ted";
				pitch = 0.944031;
				glasses = "None";
			};
			class TomasSihelsky {
				name = "Tomas Sihelsky";
				face = "Face41";
				speaker = "Peter";
				pitch = 0.905975;
				glasses = "None";
			};
			class JindrichStankev {
				name = "Jindrich Stankev";
				face = "Face23";
				speaker = "John";
				pitch = 0.979163;
				glasses = "None";
			};
			class JanSidor {
				name = "Jan Sidor";
				face = "Default";
				speaker = "Rob";
				pitch = 0.978906;
				glasses = "None";
			};
			class PavelViktoryn {
				name = "Pavel Viktoryn";
				face = "Face7";
				speaker = "Paul";
				pitch = 1.074322;
				glasses = "None";
			};
			class AlexandrBrezovsky {
				name = "Alexandr Brezovsky";
				face = "Face5";
				speaker = "Tom";
				pitch = 1.000366;
				glasses = "None";
			};
			class JaroslavaCiglerova {
				name = "Jaroslava Ciglerova";
				face = "Face32";
				speaker = "Tom";
				pitch = 1.040338;
				glasses = "None";
			};
			class BohumilKubista {
				name = "Bohumil Kubista";
				face = "Face6";
				speaker = "Greg";
				pitch = 0.903717;
				glasses = "None";
			};
			class VaclavCivoch {
				name = "Vaclav Civoch";
				face = "Face36";
				speaker = "Rich";
				pitch = 0.987372;
				glasses = "None";
			};
			class MikulasGlimb {
				name = "Mikulas Glimb";
				face = "Face1";
				speaker = "Rob";
				pitch = 1.075421;
				glasses = "None";
			};
			class KarelStouda {
				name = "Karel Stouda";
				face = "Face31";
				speaker = "Paul";
				pitch = 1.016028;
				glasses = "None";
			};
			class ReneAchard {
				name = "Rene Achard";
				face = "Face8";
				speaker = "Rob";
				pitch = 1.093036;
				glasses = "None";
			};
			class IvanNagl {
				name = "Ivan Nagl";
				face = "Face19";
				speaker = "John";
				pitch = 1.084058;
				glasses = "Spectacles";
			};
			class AntoninKoukol {
				name = "Antonin Koukol";
				face = "Face9";
				speaker = "Tom";
				pitch = 1.045691;
				glasses = "None";
			};
			class TomasPek {
				name = "Tomas Pek";
				face = "Face49";
				speaker = "Rob";
				pitch = 0.92785;
				glasses = "None";
			};
			class JanPinta {
				name = "Jan Pinta";
				face = "Face11";
				speaker = "Tom";
				pitch = 0.977545;
				glasses = "None";
			};
			class JiriDezort {
				name = "Jiri Dezort";
				face = "Face1";
				speaker = "Paul";
				pitch = 0.930823;
				glasses = "None";
			};
			class IgorKuklis {
				name = "Igor Kuklis";
				face = "Face43";
				speaker = "Jonah";
				pitch = 0.934204;
				glasses = "None";
			};
			class SlavomirTabacik {
				name = "Slavomir Tabacik";
				face = "Face47";
				speaker = "Peter";
				pitch = 1.003137;
				glasses = "None";
			};
			class JosefStarinsky {
				name = "Josef Starinsky";
				face = "Face41";
				speaker = "Rich";
				pitch = 0.905505;
				glasses = "None";
			};
			class FilipBrazdil {
				name = "Filip Brazdil";
				face = "Face26";
				speaker = "Patrick";
				pitch = 1.079102;
				glasses = "None";
			};
			class PavelFilipko {
				name = "Pavel Filipko";
				face = "Face13";
				speaker = "Paul";
				pitch = 1.01817;
				glasses = "None";
			};
			class OndrejHorak {
				name = "Ondrej Horak";
				face = "Face52";
				speaker = "Patrick";
				pitch = 0.927161;
				glasses = "None";
			};
			class EmilVlcan {
				name = "Emil Vlcan";
				face = "Default";
				speaker = "Marc";
				pitch = 0.941528;
				glasses = "None";
			};
			class AntoninMrzena {
				name = "Antonin Mrzena";
				face = "Face31";
				speaker = "Tom";
				pitch = 0.922852;
				glasses = "None";
			};
			class RomanCikhardt {
				name = "Roman Cikhardt";
				face = "Face18";
				speaker = "Greg";
				pitch = 1.093976;
				glasses = "None";
			};
			class MichalKralovic {
				name = "Michal Kralovic";
				face = "Face35";
				speaker = "Rob";
				pitch = 0.955432;
				glasses = "None";
			};
			class VladimirSidorjak {
				name = "Vladimir Sidorjak";
				face = "Face52";
				speaker = "George";
				pitch = 0.924225;
				glasses = "None";
			};
			class LadislavKostron {
				name = "Ladislav Kostron";
				face = "Face21";
				speaker = "George";
				pitch = 1.069916;
				glasses = "None";
			};
			class VaclavAlfery {
				name = "Vaclav Alfery";
				face = "Face14";
				speaker = "John";
				pitch = 0.90639;
				glasses = "None";
			};
			class PetrFohl {
				name = "Petr Fohl";
				face = "Face52";
				speaker = "Jonah";
				pitch = 0.997711;
				glasses = "None";
			};
			class KarelViewegh {
				name = "Karel Viewegh";
				face = "Face1";
				speaker = "Greg";
				pitch = 0.946063;
				glasses = "None";
			};
			class JanMurin {
				name = "Jan Murin";
				face = "Face51";
				speaker = "Ted";
				pitch = 0.955884;
				glasses = "None";
			};
			class JanFahoun {
				name = "Jan Fahoun";
				face = "Face29";
				speaker = "George";
				pitch = 0.909991;
				glasses = "None";
			};
			class TomasTopol {
				name = "Tomas Topol";
				face = "Face50";
				speaker = "Adam";
				pitch = 0.918353;
				glasses = "None";
			};
			class FrantisekKram {
				name = "Frantisek Kram";
				face = "Face21";
				speaker = "Patrick";
				pitch = 0.911499;
				glasses = "None";
			};
			class MilanFolkman {
				name = "Milan Folkman";
				face = "Face1";
				speaker = "Paul";
				pitch = 0.912939;
				glasses = "None";
			};
			class JanDobry {
				name = "Jan Dobry";
				face = "Face13";
				speaker = "Ted";
				pitch = 0.916119;
				glasses = "None";
			};
			class JanBreck {
				name = "Jan Breck";
				face = "Face49";
				speaker = "Adam";
				pitch = 0.912921;
				glasses = "None";
			};
			class KarelBrat {
				name = "Karel Brat";
				face = "Face48";
				speaker = "Adam";
				pitch = 1.079987;
				glasses = "None";
			};
			class VaclavAlbertyn {
				name = "Vaclav Albertyn";
				face = "Face22";
				speaker = "Dan";
				pitch = 1.009302;
				glasses = "None";
			};
			class PravomilCipra {
				name = "Pravomil Cipra";
				face = "Face12";
				speaker = "Tom";
				pitch = 0.92019;
				glasses = "None";
			};
			class JaroslavBrebera {
				name = "Jaroslav Brebera";
				face = "Face37";
				speaker = "John";
				pitch = 1.059265;
				glasses = "None";
			};
			class AlexandrStelsovsky {
				name = "Alexandr Stelsovsky";
				face = "Face14";
				speaker = "Jonah";
				pitch = 1.055597;
				glasses = "None";
			};
			class DanielBrauckman {
				name = "Daniel Brauckman";
				face = "Face29";
				speaker = "Greg";
				pitch = 0.995697;
				glasses = "None";
			};
			class BohuslavKrpata {
				name = "Bohuslav Krpata";
				face = "Face16";
				speaker = "Adam";
				pitch = 1.023694;
				glasses = "None";
			};
			class AloisBoublik {
				name = "Alois Boublik";
				face = "Face5";
				speaker = "George";
				pitch = 0.962537;
				glasses = "None";
			};
			class JiriJakerson {
				name = "Jiri Jakerson";
				face = "Face3";
				speaker = "John";
				pitch = 0.941986;
				glasses = "None";
			};
			class BohumirGlos {
				name = "Bohumir Glos";
				face = "Face52";
				speaker = "Adam";
				pitch = 1.070447;
				glasses = "None";
			};
			class RadekCiprys {
				name = "Radek Ciprys";
				face = "Face4";
				speaker = "Greg";
				pitch = 0.947925;
				glasses = "None";
			};
			class JiriGil {
				name = "Jiri Gil";
				face = "Face26";
				speaker = "Patrick";
				pitch = 1.094238;
				glasses = "None";
			};
			class JanAndlt {
				name = "Jan Andlt";
				face = "Face13";
				speaker = "Rob";
				pitch = 0.947485;
				glasses = "None";
			};
			class JanNedoma {
				name = "Jan Nedoma";
				face = "FaceR01";
				speaker = "Jonah";
				pitch = 1.075092;
				glasses = "None";
			};
			class JanMysicka {
				name = "Jan Mysicka";
				face = "Face21";
				speaker = "Jonah";
				pitch = 1.054303;
				glasses = "None";
			};
			class FrantisekVeverka {
				name = "Frantisek Veverka";
				face = "FaceR01";
				speaker = "Rob";
				pitch = 1.036774;
				glasses = "None";
			};
			class ZdenekGlingar {
				name = "Zdenek Glingar";
				face = "FaceR01";
				speaker = "Patrick";
				pitch = 1.008313;
				glasses = "None";
			};
			class AloisBratanek {
				name = "Alois Bratanek";
				face = "Face49";
				speaker = "Patrick";
				pitch = 0.922107;
				glasses = "None";
			};
			class JaroslavAlbrecht {
				name = "Jaroslav Albrecht";
				face = "Face9";
				speaker = "Tom";
				pitch = 1.06394;
				glasses = "None";
			};
			class PetrSidak {
				name = "Petr Sidak";
				face = "Face26";
				speaker = "Tom";
				pitch = 0.967419;
				glasses = "None";
			};
			class AntoninFejk {
				name = "Antonin Fejk";
				face = "Face45";
				speaker = "George";
				pitch = 1.070123;
				glasses = "None";
			};
			class JosefBozka {
				name = "Josef Bozka";
				face = "Face27";
				speaker = "Rob";
				pitch = 1.044025;
				glasses = "None";
			};
			class PavelFejfanek {
				name = "Pavel Fejfanek";
				face = "Face34";
				speaker = "Greg";
				pitch = 0.952789;
				glasses = "None";
			};
			class EmilBistak {
				name = "Emil Bistak";
				face = "Face15";
				speaker = "Paul";
				pitch = 0.961633;
				glasses = "Spectacles";
			};
			class Aloisdittrich {
				name = "Alois dittrich";
				face = "Face15";
				speaker = "Ted";
				pitch = 1.052283;
				glasses = "None";
			};
			class JindrichJahnl {
				name = "Jindrich Jahnl";
				face = "Face39";
				speaker = "George";
				pitch = 0.903882;
				glasses = "None";
			};
			class JanAndelt {
				name = "Jan Andelt";
				face = "Face29";
				speaker = "John";
				pitch = 1.08056;
				glasses = "None";
			};
			class EmanuelKouril {
				name = "Emanuel Kouril";
				face = "Face52";
				speaker = "Adam";
				pitch = 0.974536;
				glasses = "Spectacles";
			};
			class JaroslavFeda {
				name = "Jaroslav Feda";
				face = "Face46";
				speaker = "Greg";
				pitch = 0.954028;
				glasses = "None";
			};
			class StafanJajko {
				name = "Stafan Jajko";
				face = "Face36";
				speaker = "Greg";
				pitch = 0.921997;
				glasses = "None";
			};
			class PetrSidikman {
				name = "Petr Sidikman";
				face = "Face52";
				speaker = "Dan";
				pitch = 1.056207;
				glasses = "None";
			};
			class KristianMikulejsky {
				name = "Kristian Mikulejsky";
				face = "Face22";
				speaker = "Jonah";
				pitch = 0.914471;
				glasses = "None";
			};
			class FrantisekBressler {
				name = "Frantisek Bressler";
				face = "Face10";
				speaker = "Patrick";
				pitch = 0.925061;
				glasses = "None";
			};
			class PetrDlouhy {
				name = "Petr Dlouhy";
				face = "FaceR01";
				speaker = "Rich";
				pitch = 0.996198;
				glasses = "None";
			};
			class EvzenSidorin {
				name = "Evzen Sidorin";
				face = "Face46";
				speaker = "Ted";
				pitch = 1.097968;
				glasses = "None";
			};
			class KarelNaumcik {
				name = "Karel Naumcik";
				face = "Face6";
				speaker = "Dan";
				pitch = 1.018079;
				glasses = "Spectacles";
			};
			class AntoninSiegl {
				name = "Antonin Siegl";
				face = "Face17";
				speaker = "Rich";
				pitch = 1.091876;
				glasses = "None";
			};
			class VojtechSteklac {
				name = "Vojtech Steklac";
				face = "Face49";
				speaker = "Rob";
				pitch = 0.952692;
				glasses = "None";
			};
			class MarcelJunek {
				name = "Marcel Junek";
				face = "Face41";
				speaker = "Dan";
				pitch = 0.915167;
				glasses = "None";
			};
			class GustavStarkbaum {
				name = "Gustav Starkbaum";
				face = "Face12";
				speaker = "Peter";
				pitch = 0.917523;
				glasses = "None";
			};
			class AntoninKramerius {
				name = "Antonin Kramerius";
				face = "FaceR01";
				speaker = "Greg";
				pitch = 0.972791;
				glasses = "None";
			};
			class EduardNovak {
				name = "Eduard Novak";
				face = "Face32";
				speaker = "Adam";
				pitch = 0.983838;
				glasses = "None";
			};
			class FrantisekTaborJosefTaitl {
				name = "Frantisek TaborJosef Taitl";
				face = "Face30";
				speaker = "John";
				pitch = 0.964185;
				glasses = "None";
			};
			class AloisOberman {
				name = "Alois Oberman";
				face = "FaceR01";
				speaker = "Dan";
				pitch = 1.095483;
				glasses = "None";
			};
			class KarelGlogar {
				name = "Karel Glogar";
				face = "Face16";
				speaker = "Patrick";
				pitch = 1.083209;
				glasses = "None";
			};
			class JosefSchytil {
				name = "Josef Schytil";
				face = "Face13";
				speaker = "Marc";
				pitch = 0.990472;
				glasses = "None";
			};
			class BohumilMuzicek {
				name = "Bohumil Muzicek";
				face = "Face31";
				speaker = "Patrick";
				pitch = 0.90929;
				glasses = "None";
			};
			class TomasBraun {
				name = "Tomas Braun";
				face = "Face22";
				speaker = "John";
				pitch = 0.95025;
				glasses = "None";
			};
			class JiriJazvinsky {
				name = "Jiri Jazvinsky";
				face = "Face18";
				speaker = "Adam";
				pitch = 0.922162;
				glasses = "None";
			};
			class MiroslavBraha {
				name = "Miroslav Braha";
				face = "Face51";
				speaker = "Jonah";
				pitch = 1.004852;
				glasses = "Sunglasses";
			};
			class MilanFiser {
				name = "Milan Fiser";
				face = "Face50";
				speaker = "Rich";
				pitch = 0.956573;
				glasses = "None";
			};
			class JosefFolejtar {
				name = "Josef Folejtar";
				face = "Face11";
				speaker = "Greg";
				pitch = 1.081329;
				glasses = "Sunglasses";
			};
			class RobertTaibl {
				name = "Robert Taibl";
				face = "Face48";
				speaker = "Greg";
				pitch = 1.086566;
				glasses = "None";
			};
			class EduardMikulcik {
				name = "Eduard Mikulcik";
				face = "Face52";
				speaker = "Paul";
				pitch = 1.052942;
				glasses = "None";
			};
			class AntoninNamestek {
				name = "Antonin Namestek";
				face = "Face34";
				speaker = "Jonah";
				pitch = 0.93067;
				glasses = "None";
			};
			class AntoninJisa {
				name = "Antonin Jisa";
				face = "Face47";
				speaker = "Tom";
				pitch = 1.006042;
				glasses = "None";
			};
			class JanMuk {
				name = "Jan Muk";
				face = "Face21";
				speaker = "Adam";
				pitch = 1.055939;
				glasses = "None";
			};
			class FrantisekMikule {
				name = "Frantisek Mikule";
				face = "FaceR01";
				speaker = "Marc";
				pitch = 1.048383;
				glasses = "None";
			};
			class MichalKolousek {
				name = "Michal Kolousek";
				face = "Face14";
				speaker = "Greg";
				pitch = 0.982416;
				glasses = "None";
			};
			class MichalBretl {
				name = "Michal Bretl";
				face = "Face42";
				speaker = "Paul";
				pitch = 0.985437;
				glasses = "None";
			};
			class FrantisekSteidl {
				name = "Frantisek Steidl";
				face = "Face44";
				speaker = "Marc";
				pitch = 1.021722;
				glasses = "None";
			};
			class FrantisekSigl {
				name = "Frantisek Sigl";
				face = "Face16";
				speaker = "Patrick";
				pitch = 1.035034;
				glasses = "None";
			};
			class FrantisekTaimar {
				name = "Frantisek Taimar";
				face = "Face15";
				speaker = "Dan";
				pitch = 0.973676;
				glasses = "Sunglasses";
			};
			class JaroslavDevin {
				name = "Jaroslav Devin";
				face = "Face52";
				speaker = "Marc";
				pitch = 1.051709;
				glasses = "None";
			};
			class JanCisovsky {
				name = "Jan Cisovsky";
				face = "Face38";
				speaker = "George";
				pitch = 1.068262;
				glasses = "None";
			};
			class JindrichCihelna {
				name = "Jindrich Cihelna";
				face = "Face3";
				speaker = "Peter";
				pitch = 0.965082;
				glasses = "None";
			};
			class MiloslavStejbal {
				name = "Miloslav Stejbal";
				face = "Face31";
				speaker = "Adam";
				pitch = 0.909387;
				glasses = "Sunglasses";
			};
			class MichalNamisnak {
				name = "Michal Namisnak";
				face = "Face22";
				speaker = "Paul";
				pitch = 0.983124;
				glasses = "None";
			};
			class JiriAdamcik {
				name = "Jiri Adamcik";
				face = "Face19";
				speaker = "Jonah";
				pitch = 1.08454;
				glasses = "None";
			};
			class RomanVasnovic {
				name = "Roman Vasnovic";
				face = "Face9";
				speaker = "Marc";
				pitch = 1.013892;
				glasses = "None";
			};
			class VladimirCmunt {
				name = "Vladimir Cmunt";
				face = "Face8";
				speaker = "Tom";
				pitch = 1.028455;
				glasses = "None";
			};
			class AntoninMikulin {
				name = "Antonin Mikulin";
				face = "Face27";
				speaker = "Adam";
				pitch = 1.005615;
				glasses = "None";
			};
			class MilanTahotny {
				name = "Milan Tahotny";
				face = "Face7";
				speaker = "Marc";
				pitch = 1.040381;
				glasses = "None";
			};
			class JiriAdamovsky {
				name = "Jiri Adamovsky";
				face = "Face25";
				speaker = "Paul";
				pitch = 1.024829;
				glasses = "None";
			};
			class DrahomiraCifrova {
				name = "Drahomira Cifrova";
				face = "Face29";
				speaker = "Marc";
				pitch = 1.089301;
				glasses = "None";
			};
			class AdolfBrejcha {
				name = "Adolf Brejcha";
				face = "Face43";
				speaker = "Marc";
				pitch = 0.904529;
				glasses = "None";
			};
			class ZdenekNass {
				name = "Zdenek Nass";
				face = "Face26";
				speaker = "Adam";
				pitch = 0.961896;
				glasses = "None";
			};
			class AntoninMikulecky {
				name = "Antonin Mikulecky";
				face = "Face14";
				speaker = "Rob";
				pitch = 1.040149;
				glasses = "None";
			};
			class MichalStudnicny {
				name = "Michal Studnicny";
				face = "Face30";
				speaker = "Ted";
				pitch = 0.956848;
				glasses = "None";
			};
			class PavelBratinka {
				name = "Pavel Bratinka";
				face = "Face44";
				speaker = "Patrick";
				pitch = 0.971954;
				glasses = "None";
			};
			class MiroslavKukla {
				name = "Miroslav Kukla";
				face = "Face21";
				speaker = "Greg";
				pitch = 1.050702;
				glasses = "None";
			};
			class TomasPalm {
				name = "Tomas Palm";
				face = "Face8";
				speaker = "Jonah";
				pitch = 0.913983;
				glasses = "None";
			};
			class AdolfAdam {
				name = "Adolf Adam";
				face = "Face20";
				speaker = "Paul";
				pitch = 1.033655;
				glasses = "None";
			};
			class PetrNebesky {
				name = "Petr Nebesky";
				face = "Face20";
				speaker = "George";
				pitch = 1.033508;
				glasses = "None";
			};
			class MichalAlexandrovic {
				name = "Michal Alexandrovic";
				face = "Face41";
				speaker = "Marc";
				pitch = 1.063422;
				glasses = "None";
			};
			class AlesBraun {
				name = "Ales Braun";
				face = "Face4";
				speaker = "Rob";
				pitch = 1.005585;
				glasses = "None";
			};
			class SvatoplukNaus {
				name = "Svatopluk Naus";
				face = "Face27";
				speaker = "Jonah";
				pitch = 1.081995;
				glasses = "None";
			};
			class FilipKaspar {
				name = "Filip Kaspar";
				face = "Face13";
				speaker = "Marc";
				pitch = 0.996863;
				glasses = "None";
			};
			class JiriStickel {
				name = "Jiri Stickel";
				face = "Face52";
				speaker = "Patrick";
				pitch = 1.097473;
				glasses = "None";
			};
			class MilanKostal {
				name = "Milan Kostal";
				face = "Face33";
				speaker = "Paul";
				pitch = 1.073578;
				glasses = "None";
			};
			class JiriJecmen {
				name = "Jiri Jecmen";
				face = "Face27";
				speaker = "Ted";
				pitch = 0.951038;
				glasses = "None";
			};
			class KarelCitterbart {
				name = "Karel Citterbart";
				face = "Face38";
				speaker = "Rich";
				pitch = 0.945367;
				glasses = "None";
			};
			class MichalStark {
				name = "Michal Stark";
				face = "Face24";
				speaker = "Dan";
				pitch = 1.006781;
				glasses = "Spectacles";
			};
			class IvoMyslivec {
				name = "Ivo Myslivec";
				face = "Face12";
				speaker = "Patrick";
				pitch = 0.925177;
				glasses = "None";
			};
			class JiriCichon {
				name = "Jiri Cichon";
				face = "Face22";
				speaker = "Greg";
				pitch = 0.989642;
				glasses = "None";
			};
			class JiriFenol {
				name = "Jiri Fenol";
				face = "Face30";
				speaker = "Patrick";
				pitch = 1.05846;
				glasses = "None";
			};
			class MiroslavAjsman {
				name = "Miroslav Ajsman";
				face = "Face7";
				speaker = "Greg";
				pitch = 0.900342;
				glasses = "None";
			};
			class MiroslavVildman {
				name = "Miroslav Vildman";
				face = "Face26";
				speaker = "Rob";
				pitch = 0.923999;
				glasses = "Spectacles";
			};
			class KarelObeda {
				name = "Karel Obeda";
				face = "Face25";
				speaker = "John";
				pitch = 0.972107;
				glasses = "None";
			};
			class MarekRada {
				name = "Marek Rada";
				face = "Face26";
				speaker = "Dan";
				pitch = 1.017969;
				glasses = "Spectacles";
			};
			class JaroslavFencl {
				name = "Jaroslav Fencl";
				face = "Face21";
				speaker = "Greg";
				pitch = 0.904956;
				glasses = "None";
			};
			class HorymirKotan {
				name = "Horymir Kotan";
				face = "Face46";
				speaker = "Patrick";
				pitch = 0.915802;
				glasses = "None";
			};
			class PavelVlasaty {
				name = "Pavel Vlasaty";
				face = "Face29";
				speaker = "Dan";
				pitch = 0.948859;
				glasses = "None";
			};
			class BohdanNecesanek {
				name = "Bohdan Necesanek";
				face = "FaceR01";
				speaker = "Patrick";
				pitch = 0.935742;
				glasses = "None";
			};
			class ArnostFilla {
				name = "Arnost Filla";
				face = "Face22";
				speaker = "Patrick";
				pitch = 0.927496;
				glasses = "Sunglasses";
			};
			class LadislavBrejda {
				name = "Ladislav Brejda";
				face = "Face33";
				speaker = "Jonah";
				pitch = 1.035681;
				glasses = "None";
			};
			class JiriSemecky {
				name = "Jiri Semecky";
				face = "Face31";
				speaker = "Ted";
				pitch = 1.024768;
				glasses = "None";
			};
			class AntoninTacmer {
				name = "Antonin Tacmer";
				face = "Face14";
				speaker = "Patrick";
				pitch = 0.927942;
				glasses = "None";
			};
			class FrantisekStekly {
				name = "Frantisek Stekly";
				face = "Face42";
				speaker = "Greg";
				pitch = 1.02395;
				glasses = "None";
			};
			class OtakarKulhanek {
				name = "Otakar Kulhanek";
				face = "Face39";
				speaker = "Rich";
				pitch = 1.050714;
				glasses = "None";
			};
			class OndrejHanus {
				name = "Ondrej Hanus";
				face = "Face16";
				speaker = "Ted";
				pitch = 0.983551;
				glasses = "None";
			};
			class EduardKraml {
				name = "Eduard Kraml";
				face = "Face45";
				speaker = "Marc";
				pitch = 0.939996;
				glasses = "None";
			};
			class BorisNakladov {
				name = "Boris Nakladov";
				face = "Face52";
				speaker = "Adam";
				pitch = 0.907599;
				glasses = "None";
			};
			class BohumilJakes {
				name = "Bohumil Jakes";
				face = "Face44";
				speaker = "Marc";
				pitch = 0.986859;
				glasses = "None";
			};
			class HubertMikulik {
				name = "Hubert Mikulik";
				face = "Face2";
				speaker = "George";
				pitch = 0.982306;
				glasses = "Sunglasses";
			};
			class MartinCocula {
				name = "Martin Cocula";
				face = "Face22";
				speaker = "Paul";
				pitch = 1.042096;
				glasses = "Spectacles";
			};
			class JanStengl {
				name = "Jan Stengl";
				face = "Face18";
				speaker = "Greg";
				pitch = 0.969794;
				glasses = "None";
			};
			class AntoninVich {
				name = "Antonin Vich";
				face = "Face23";
				speaker = "Rich";
				pitch = 1.02063;
				glasses = "None";
			};
			class AlojzNeduchal {
				name = "Alojz Neduchal";
				face = "Face11";
				speaker = "Rob";
				pitch = 1.030017;
				glasses = "None";
			};
			class IvanFederov {
				name = "Ivan Federov";
				face = "Face8";
				speaker = "Marc";
				pitch = 1.017383;
				glasses = "None";
			};
			class StanislavCmiral {
				name = "Stanislav Cmiral";
				face = "Face44";
				speaker = "Peter";
				pitch = 0.938391;
				glasses = "None";
			};
			class MartinDanda {
				name = "Martin Danda";
				face = "Face13";
				speaker = "John";
				pitch = 0.995453;
				glasses = "None";
			};
			class VaclavCilek {
				name = "Vaclav Cilek";
				face = "Face7";
				speaker = "Rich";
				pitch = 1.086859;
				glasses = "None";
			};
			class MilanFilipek {
				name = "Milan Filipek";
				face = "Face9";
				speaker = "Paul";
				pitch = 1.036267;
				glasses = "None";
			};
			class RadekKraus {
				name = "Radek Kraus";
				face = "Face4";
				speaker = "Rob";
				pitch = 0.900177;
				glasses = "None";
			};
			class VladislavJanousek {
				name = "Vladislav Janousek";
				face = "Face45";
				speaker = "Marc";
				pitch = 1.083685;
				glasses = "None";
			};
			class AlesKulhavy {
				name = "Ales Kulhavy";
				face = "Face25";
				speaker = "Paul";
				pitch = 0.981836;
				glasses = "None";
			};
			class JanNadrasky {
				name = "Jan Nadrasky";
				face = "Face4";
				speaker = "Dan";
				pitch = 0.917719;
				glasses = "None";
			};
			class PetrSteinbauser {
				name = "Petr Steinbauser";
				face = "Face41";
				speaker = "Paul";
				pitch = 0.912933;
				glasses = "None";
			};
			class MiloslavDlubal {
				name = "Miloslav Dlubal";
				face = "Face41";
				speaker = "Greg";
				pitch = 1.019556;
				glasses = "None";
			};
			class JosefTadic {
				name = "Josef Tadic";
				face = "Face30";
				speaker = "Paul";
				pitch = 1.019116;
				glasses = "None";
			};
			class JosefFeher {
				name = "Josef Feher";
				face = "Face9";
				speaker = "Paul";
				pitch = 1.089325;
				glasses = "None";
			};
			class AlexandrKotocka {
				name = "Alexandr Kotocka";
				face = "Face50";
				speaker = "Greg";
				pitch = 1.024133;
				glasses = "None";
			};
			class JiriStome {
				name = "Jiri Stome";
				face = "Face47";
				speaker = "Paul";
				pitch = 0.975317;
				glasses = "None";
			};
			class MiroslavFoltyn {
				name = "Miroslav Foltyn";
				face = "Face19";
				speaker = "Peter";
				pitch = 0.902771;
				glasses = "None";
			};
			class PeterFoltynsky {
				name = "Peter Foltynsky";
				face = "Face41";
				speaker = "Paul";
				pitch = 0.931653;
				glasses = "None";
			};
			class PetrPribyl {
				name = "Petr Pribyl";
				face = "Face33";
				speaker = "Marc";
				pitch = 0.945612;
				glasses = "None";
			};
			class JiriAndras {
				name = "Jiri Andras";
				face = "Face27";
				speaker = "Adam";
				pitch = 0.903778;
				glasses = "None";
			};
			class PavelJurda {
				name = "Pavel Jurda";
				face = "Face52";
				speaker = "Ted";
				pitch = 0.935931;
				glasses = "None";
			};
			class EmilJacka {
				name = "Emil Jacka";
				face = "Face36";
				speaker = "Patrick";
				pitch = 1.068036;
				glasses = "None";
			};
			class JanJaros {
				name = "Jan Jaros";
				face = "Face36";
				speaker = "Rich";
				pitch = 0.993799;
				glasses = "None";
			};
			class JanSihelnik {
				name = "Jan Sihelnik";
				face = "Face47";
				speaker = "Peter";
				pitch = 1.086304;
				glasses = "None";
			};
			class DavidFaustus {
				name = "David Faustus";
				face = "Face50";
				speaker = "Adam";
				pitch = 0.983038;
				glasses = "None";
			};
			class VaclavForetnik {
				name = "Vaclav Foretnik";
				face = "Face16";
				speaker = "Jonah";
				pitch = 0.955341;
				glasses = "None";
			};
			class MirekPavlik {
				name = "Mirek Pavlik";
				face = "Face15";
				speaker = "Rich";
				pitch = 1.026959;
				glasses = "None";
			};
			class IvoBraunstein {
				name = "Ivo Braunstein";
				face = "Face18";
				speaker = "Patrick";
				pitch = 0.945435;
				glasses = "None";
			};
			class MilanCoch {
				name = "Milan Coch";
				face = "Face41";
				speaker = "Tom";
				pitch = 1.097595;
				glasses = "None";
			};
			class IvanSidej {
				name = "Ivan Sidej";
				face = "Face34";
				speaker = "Dan";
				pitch = 0.930542;
				glasses = "None";
			};
			class AntoninBouchal {
				name = "Antonin Bouchal";
				face = "Face10";
				speaker = "Rich";
				pitch = 0.949506;
				glasses = "None";
			};
			class PavlaCignerova {
				name = "Pavla Cignerova";
				face = "Face47";
				speaker = "Marc";
				pitch = 0.977612;
				glasses = "None";
			};
			class FilipSubrt {
				name = "Filip Subrt";
				face = "Face41";
				speaker = "Marc";
				pitch = 1.008154;
				glasses = "None";
			};
			class FrantisekJagl {
				name = "Frantisek Jagl";
				face = "Face32";
				speaker = "Peter";
				pitch = 0.920233;
				glasses = "None";
			};
			class MatejBozovsky {
				name = "Matej Bozovsky";
				face = "Face48";
				speaker = "Ted";
				pitch = 1.003192;
				glasses = "None";
			};
			class AntoninMikulec {
				name = "Antonin Mikulec";
				face = "Face30";
				speaker = "Patrick";
				pitch = 1.049896;
				glasses = "None";
			};
			class KarelKubik {
				name = "Karel Kubik";
				face = "Face10";
				speaker = "Rob";
				pitch = 1.086658;
				glasses = "None";
			};
			class KarelKodl {
				name = "Karel Kodl";
				face = "Face19";
				speaker = "Ted";
				pitch = 0.917157;
				glasses = "None";
			};
			class OldrichObicky {
				name = "Oldrich Obicky";
				face = "Face25";
				speaker = "Rob";
				pitch = 1.016498;
				glasses = "None";
			};
			class JiriBrdlik {
				name = "Jiri Brdlik";
				face = "Face48";
				speaker = "Peter";
				pitch = 1.042041;
				glasses = "None";
			};
			class FrantisekBoula {
				name = "Frantisek Boula";
				face = "Face18";
				speaker = "Patrick";
				pitch = 0.905475;
				glasses = "None";
			};
			class JakubVacek {
				name = "Jakub Vacek";
				face = "Face33";
				speaker = "Peter";
				pitch = 1.085559;
				glasses = "None";
			};
			class OndrejStejner {
				name = "Ondrej Stejner";
				face = "Face31";
				speaker = "Ted";
				pitch = 0.99021;
				glasses = "None";
			};
			class FrantisekFenikl {
				name = "Frantisek Fenikl";
				face = "Face38";
				speaker = "George";
				pitch = 0.980133;
				glasses = "None";
			};
			class BohuslavAdamus {
				name = "Bohuslav Adamus";
				face = "Face20";
				speaker = "Jonah";
				pitch = 0.917688;
				glasses = "None";
			};
			class VaclavJumr {
				name = "Vaclav Jumr";
				face = "Face26";
				speaker = "Paul";
				pitch = 1.072272;
				glasses = "None";
			};
			class MiroslavTalavana {
				name = "Miroslav Talavana";
				face = "Face22";
				speaker = "Peter";
				pitch = 1.004498;
				glasses = "Spectacles";
			};
			class PavelStejdl {
				name = "Pavel Stejdl";
				face = "Face42";
				speaker = "Jonah";
				pitch = 1.021936;
				glasses = "None";
			};
			class AntoninCirek {
				name = "Antonin Cirek";
				face = "Face34";
				speaker = "Greg";
				pitch = 0.952911;
				glasses = "Spectacles";
			};
			class JakubCervinka {
				name = "Jakub Cervinka";
				face = "Face22";
				speaker = "Tom";
				pitch = 0.970312;
				glasses = "None";
			};
			class LubosCipro {
				name = "Lubos Cipro";
				face = "Face31";
				speaker = "Patrick";
				pitch = 1.098047;
				glasses = "Spectacles";
			};
			class FrantisekKosata {
				name = "Frantisek Kosata";
				face = "Face48";
				speaker = "John";
				pitch = 1.014673;
				glasses = "None";
			};
			class JosefStock {
				name = "Josef Stock";
				face = "Face11";
				speaker = "Paul";
				pitch = 0.935754;
				glasses = "Sunglasses";
			};
			class KarelJizba {
				name = "Karel Jizba";
				face = "Face7";
				speaker = "Jonah";
				pitch = 1.034784;
				glasses = "None";
			};
			class JiriJakimeczsko {
				name = "Jiri Jakimeczsko";
				face = "Face35";
				speaker = "Tom";
				pitch = 1.096466;
				glasses = "None";
			};
			class IvanStarovic {
				name = "Ivan Starovic";
				face = "Face12";
				speaker = "Ted";
				pitch = 0.990289;
				glasses = "None";
			};
			class ZbynekKozmik {
				name = "Zbynek Kozmik";
				face = "Face10";
				speaker = "Rob";
				pitch = 0.985089;
				glasses = "Sunglasses";
			};
			class AlesCihelka {
				name = "Ales Cihelka";
				face = "Face24";
				speaker = "Rob";
				pitch = 0.950885;
				glasses = "None";
			};
			class LudvikJuricko {
				name = "Ludvik Juricko";
				face = "Face43";
				speaker = "George";
				pitch = 1.09574;
				glasses = "None";
			};
			class StanislavTaiber {
				name = "Stanislav Taiber";
				face = "Face16";
				speaker = "Paul";
				pitch = 0.977295;
				glasses = "None";
			};
			class BohumilBridr {
				name = "Bohumil Bridr";
				face = "Face44";
				speaker = "John";
				pitch = 1.022699;
				glasses = "None";
			};
			class MichalTabacek {
				name = "Michal Tabacek";
				face = "Face41";
				speaker = "Dan";
				pitch = 0.922986;
				glasses = "None";
			};
			class AntoninBrdek {
				name = "Antonin Brdek";
				face = "Face14";
				speaker = "George";
				pitch = 0.999805;
				glasses = "None";
			};
			class PetrMunkaci {
				name = "Petr Munkaci";
				face = "FaceR01";
				speaker = "Peter";
				pitch = 1.077234;
				glasses = "None";
			};
			class OndrejPerman {
				name = "Ondrej Perman";
				face = "Face41";
				speaker = "Marc";
				pitch = 0.93703;
				glasses = "None";
			};
			class FrantisekAbik {
				name = "Frantisek Abik";
				face = "Face28";
				speaker = "Rob";
				pitch = 0.996326;
				glasses = "None";
			};
			class EduardMysak {
				name = "Eduard Mysak";
				face = "Face28";
				speaker = "Tom";
				pitch = 1.039356;
				glasses = "None";
			};
			class KamilMustafa {
				name = "Kamil Mustafa";
				face = "Face8";
				speaker = "John";
				pitch = 1.051257;
				glasses = "None";
			};
			class JiriDanek {
				name = "Jiri Danek";
				face = "Face19";
				speaker = "Adam";
				pitch = 0.922546;
				glasses = "None";
			};
			class BohumilStanko {
				name = "Bohumil Stanko";
				face = "Default";
				speaker = "Peter";
				pitch = 1.095685;
				glasses = "None";
			};
			class JanJirista {
				name = "Jan Jirista";
				face = "Face45";
				speaker = "Peter";
				pitch = 1.068091;
				glasses = "None";
			};
			class JiriTabulka {
				name = "Jiri Tabulka";
				face = "Face48";
				speaker = "Rich";
				pitch = 1.071765;
				glasses = "None";
			};
			class VaclavKotelnicky {
				name = "Vaclav Kotelnicky";
				face = "Face42";
				speaker = "Tom";
				pitch = 0.990057;
				glasses = "None";
			};
			class AloisMynarik {
				name = "Alois Mynarik";
				face = "Face26";
				speaker = "John";
				pitch = 0.978705;
				glasses = "None";
			};
			class JanOhlidal {
				name = "Jan Ohlidal";
				face = "Face16";
				speaker = "Jonah";
				pitch = 0.958661;
				glasses = "None";
			};
			class JanJurecka {
				name = "Jan Jurecka";
				face = "Face9";
				speaker = "John";
				pitch = 0.909131;
				glasses = "Sunglasses";
			};
			class AloisNedorost {
				name = "Alois Nedorost";
				face = "Face3";
				speaker = "Patrick";
				pitch = 1.017773;
				glasses = "None";
			};
			class JiriKrubr {
				name = "Jiri Krubr";
				face = "Face7";
				speaker = "Rob";
				pitch = 1.018036;
				glasses = "None";
			};
			class JanStehnij {
				name = "Jan Stehnij";
				face = "Face1";
				speaker = "Ted";
				pitch = 1.093298;
				glasses = "None";
			};
			class JanBouchner {
				name = "Jan Bouchner";
				face = "Face40";
				speaker = "Paul";
				pitch = 0.9539;
				glasses = "None";
			};
			class ReneKoukal {
				name = "Rene Koukal";
				face = "Face10";
				speaker = "Adam";
				pitch = 0.972485;
				glasses = "None";
			};
			class KarelAdam {
				name = "Karel Adam";
				face = "Face38";
				speaker = "Peter";
				pitch = 0.990723;
				glasses = "None";
			};
			class JaromirBrejcha {
				name = "Jaromir Brejcha";
				face = "Face48";
				speaker = "Greg";
				pitch = 1.010608;
				glasses = "None";
			};
			class PavelMikulencak {
				name = "Pavel Mikulencak";
				face = "Face45";
				speaker = "Peter";
				pitch = 0.929334;
				glasses = "None";
			};
			class JiriBreta {
				name = "Jiri Breta";
				face = "Face28";
				speaker = "Tom";
				pitch = 1.098029;
				glasses = "None";
			};
			class BrunoSiba {
				name = "Bruno Siba";
				face = "Face15";
				speaker = "Peter";
				pitch = 1.094409;
				glasses = "None";
			};
			class JosefTacha {
				name = "Josef Tacha";
				face = "Face10";
				speaker = "Dan";
				pitch = 0.940887;
				glasses = "None";
			};
			class JirriOrtner {
				name = "Jirri Ortner";
				face = "Face31";
				speaker = "Paul";
				pitch = 1.0383;
				glasses = "None";
			};
			class MilanSilverio {
				name = "Milan Silverio";
				face = "Face31";
				speaker = "Ted";
				pitch = 0.923016;
				glasses = "None";
			};
			class FilipKunce {
				name = "Filip Kunce";
				face = "Face1";
				speaker = "Adam";
				pitch = 1.031464;
				glasses = "None";
			};
			class JakubHavlin {
				name = "Jakub Havlin";
				face = "FaceR01";
				speaker = "Jonah";
				pitch = 1.09245;
				glasses = "None";
			};
			class JiriStehlik {
				name = "Jiri Stehlik";
				face = "Face39";
				speaker = "Patrick";
				pitch = 1.010992;
				glasses = "None";
			};
			class VilemVesely {
				name = "Vilem Vesely";
				face = "Face17";
				speaker = "Rob";
				pitch = 1.084979;
				glasses = "None";
			};
			class JosefBoucek {
				name = "Josef Boucek";
				face = "Face39";
				speaker = "Tom";
				pitch = 1.094653;
				glasses = "None";
			};
			class FrantisekCiza {
				name = "Frantisek Ciza";
				face = "Face35";
				speaker = "George";
				pitch = 0.955737;
				glasses = "Spectacles";
			};
			class JiriCintl {
				name = "Jiri Cintl";
				face = "Face5";
				speaker = "Patrick";
				pitch = 1.05694;
				glasses = "None";
			};
			class MiroslavTejc {
				name = "Miroslav Tejc";
				face = "Face10";
				speaker = "Greg";
				pitch = 1.08833;
				glasses = "None";
			};
			class AloisVicherek {
				name = "Alois Vicherek";
				face = "Face10";
				speaker = "Ted";
				pitch = 0.996692;
				glasses = "Spectacles";
			};
			class MartinBitomsky {
				name = "Martin Bitomsky";
				face = "Face15";
				speaker = "John";
				pitch = 0.955975;
				glasses = "None";
			};
			class MilanJuhanak {
				name = "Milan Juhanak";
				face = "Face9";
				speaker = "Patrick";
				pitch = 0.958478;
				glasses = "None";
			};
			class FrantisekOberfalcer {
				name = "Frantisek Oberfalcer";
				face = "Face47";
				speaker = "Paul";
				pitch = 1.083905;
				glasses = "Sunglasses";
			};
			class AntoninNedved {
				name = "Antonin Nedved";
				face = "Face30";
				speaker = "Patrick";
				pitch = 0.956213;
				glasses = "None";
			};
			class FrantisekSido {
				name = "Frantisek Sido";
				face = "Face38";
				speaker = "Peter";
				pitch = 0.907343;
				glasses = "None";
			};
			class FrantisekBlahak {
				name = "Frantisek Blahak";
				face = "Face32";
				speaker = "Tom";
				pitch = 0.926251;
				glasses = "None";
			};
			class JiriBradac {
				name = "Jiri Bradac";
				face = "Face39";
				speaker = "Peter";
				pitch = 1.029956;
				glasses = "None";
			};
			class LubomirCipl {
				name = "Lubomir Cipl";
				face = "Face27";
				speaker = "Paul";
				pitch = 1.081317;
				glasses = "None";
			};
			class EvzenKotera {
				name = "Evzen Kotera";
				face = "Face44";
				speaker = "George";
				pitch = 1.031262;
				glasses = "None";
			};
			class RomanGlass {
				name = "Roman Glass";
				face = "Face12";
				speaker = "John";
				pitch = 1.097339;
				glasses = "Sunglasses";
			};
			class JakubNagaj {
				name = "Jakub Nagaj";
				face = "Face4";
				speaker = "George";
				pitch = 1.013623;
				glasses = "None";
			};
			class JiriKula {
				name = "Jiri Kula";
				face = "Face9";
				speaker = "Dan";
				pitch = 1.098682;
				glasses = "None";
			};
			class PremyslAndel {
				name = "Premysl Andel";
				face = "Face15";
				speaker = "Dan";
				pitch = 0.964386;
				glasses = "None";
			};
			class JiriNastoupil {
				name = "Jiri Nastoupil";
				face = "Face26";
				speaker = "Tom";
				pitch = 0.970721;
				glasses = "None";
			};
			class LudvikVetecha {
				name = "Ludvik Vetecha";
				face = "Face19";
				speaker = "Rich";
				pitch = 0.977295;
				glasses = "None";
			};
			class FrantisekFahek {
				name = "Frantisek Fahek";
				face = "Face26";
				speaker = "Adam";
				pitch = 1.07478;
				glasses = "None";
			};
			class AdolfFelbinger {
				name = "Adolf Felbinger";
				face = "Face22";
				speaker = "George";
				pitch = 1.056409;
				glasses = "None";
			};
			class JaroslavMutinsky {
				name = "Jaroslav Mutinsky";
				face = "Face30";
				speaker = "Adam";
				pitch = 0.951624;
				glasses = "None";
			};
			class JanVanzura {
				name = "Jan Vanzura";
				face = "Face32";
				speaker = "Jonah";
				pitch = 0.988324;
				glasses = "None";
			};
			class JiriKounovsky {
				name = "Jiri Kounovsky";
				face = "Face8";
				speaker = "Tom";
				pitch = 0.982361;
				glasses = "None";
			};
			class PavelNaroda {
				name = "Pavel Naroda";
				face = "Face13";
				speaker = "Greg";
				pitch = 1.044379;
				glasses = "None";
			};
			class JosefDaransky {
				name = "Josef Daransky";
				face = "Face50";
				speaker = "George";
				pitch = 1.025885;
				glasses = "Sunglasses";
			};
			class JosefBrentner {
				name = "Josef Brentner";
				face = "Face39";
				speaker = "George";
				pitch = 1.037909;
				glasses = "None";
			};
			class AdolfCisarovsky {
				name = "Adolf Cisarovsky";
				face = "Face11";
				speaker = "Peter";
				pitch = 1.048694;
				glasses = "None";
			};
			class JaroslavNapravnik {
				name = "Jaroslav Napravnik";
				face = "Face42";
				speaker = "Paul";
				pitch = 0.954297;
				glasses = "None";
			};
			class KarelBjalek {
				name = "Karel Bjalek";
				face = "Face51";
				speaker = "Marc";
				pitch = 1.016272;
				glasses = "None";
			};
			class JosefKukura {
				name = "Josef Kukura";
				face = "Face22";
				speaker = "Patrick";
				pitch = 1.000696;
				glasses = "None";
			};
			class JanDobejval {
				name = "Jan Dobejval";
				face = "Face46";
				speaker = "Patrick";
				pitch = 1.075549;
				glasses = "None";
			};
			class AlexandrSiger {
				name = "Alexandr Siger";
				face = "Face12";
				speaker = "George";
				pitch = 0.920532;
				glasses = "None";
			};
			class JaroslavMusialek {
				name = "Jaroslav Musialek";
				face = "Face49";
				speaker = "Rich";
				pitch = 0.951801;
				glasses = "None";
			};
			class BohuslavFilipinsky {
				name = "Bohuslav Filipinsky";
				face = "Face24";
				speaker = "Peter";
				pitch = 1.055359;
				glasses = "None";
			};
			class BohuslavBrandl {
				name = "Bohuslav Brandl";
				face = "Face4";
				speaker = "Peter";
				pitch = 1.052478;
				glasses = "Spectacles";
			};
			class ZdenekJahn {
				name = "Zdenek Jahn";
				face = "Face36";
				speaker = "Adam";
				pitch = 1.039496;
				glasses = "None";
			};
			class AdolfFormanek {
				name = "Adolf Formanek";
				face = "Face4";
				speaker = "Patrick";
				pitch = 1.049689;
				glasses = "None";
			};
			class EmilMrvik {
				name = "Emil Mrvik";
				face = "Face10";
				speaker = "Marc";
				pitch = 0.930395;
				glasses = "None";
			};
			class KarelNatali {
				name = "Karel Natali";
				face = "Face11";
				speaker = "Jonah";
				pitch = 1.037952;
				glasses = "None";
			};
			class BohumilCikanek {
				name = "Bohumil Cikanek";
				face = "Face15";
				speaker = "George";
				pitch = 0.973102;
				glasses = "None";
			};
			class JiriKozlovcev {
				name = "Jiri Kozlovcev";
				face = "Face9";
				speaker = "Marc";
				pitch = 1.018842;
				glasses = "None";
			};
			class FrantisekJarousek {
				name = "Frantisek Jarousek";
				face = "Face5";
				speaker = "Marc";
				pitch = 1.078748;
				glasses = "None";
			};
			class AlesStejskal {
				name = "Ales Stejskal";
				face = "Face39";
				speaker = "Tom";
				pitch = 1.060767;
				glasses = "None";
			};
			class MichalStarove {
				name = "Michal Starove";
				face = "Face14";
				speaker = "Ted";
				pitch = 1.068243;
				glasses = "None";
			};
			class KornelStopek {
				name = "Kornel Stopek";
				face = "Face20";
				speaker = "Rob";
				pitch = 1.059357;
				glasses = "None";
			};
			class JanStiebek {
				name = "Jan Stiebek";
				face = "Face14";
				speaker = "Rob";
				pitch = 1.002741;
				glasses = "None";
			};
			class MilanJurceka {
				name = "Milan Jurceka";
				face = "Face13";
				speaker = "John";
				pitch = 0.976166;
				glasses = "None";
			};
			class JanFenyko {
				name = "Jan Fenyko";
				face = "Face18";
				speaker = "Dan";
				pitch = 1.037775;
				glasses = "Spectacles";
			};
			class DanielJouda {
				name = "Daniel Jouda";
				face = "Face18";
				speaker = "Dan";
				pitch = 0.92995;
				glasses = "None";
			};
			class LukasCernoch {
				name = "Lukas Cernoch";
				face = "Face7";
				speaker = "Rob";
				pitch = 0.992981;
				glasses = "None";
			};
			class AntoninCizner {
				name = "Antonin Cizner";
				face = "Face38";
				speaker = "Rob";
				pitch = 1.072491;
				glasses = "None";
			};
			class JosefMrstik {
				name = "Josef Mrstik";
				face = "Face20";
				speaker = "Dan";
				pitch = 0.983337;
				glasses = "None";
			};
			class TomasBoura {
				name = "Tomas Boura";
				face = "Face21";
				speaker = "Ted";
				pitch = 0.977765;
				glasses = "None";
			};
			class JaroslavKostejn {
				name = "Jaroslav Kostejn";
				face = "Face3";
				speaker = "Peter";
				pitch = 1.067639;
				glasses = "None";
			};
			class JanTachezy {
				name = "Jan Tachezy";
				face = "Face18";
				speaker = "Tom";
				pitch = 1.085303;
				glasses = "None";
			};
			class KarelFiala {
				name = "Karel Fiala";
				face = "Face49";
				speaker = "Patrick";
				pitch = 1.049072;
				glasses = "None";
			};
			class AntoninJob {
				name = "Antonin Job";
				face = "Face41";
				speaker = "Ted";
				pitch = 1.085431;
				glasses = "None";
			};
			class KarelAnderka {
				name = "Karel Anderka";
				face = "Face32";
				speaker = "Rich";
				pitch = 0.952551;
				glasses = "Spectacles";
			};
			class JosefFilous {
				name = "Josef Filous";
				face = "Face39";
				speaker = "Ted";
				pitch = 1.074426;
				glasses = "None";
			};
			class AntoninDaskalov {
				name = "Antonin Daskalov";
				face = "Face48";
				speaker = "Jonah";
				pitch = 0.916968;
				glasses = "None";
			};
			class PavelKoudelka {
				name = "Pavel Koudelka";
				face = "Face25";
				speaker = "Paul";
				pitch = 1.076294;
				glasses = "None";
			};
			class OndrejHoryna {
				name = "Ondrej Horyna";
				face = "Face42";
				speaker = "Paul";
				pitch = 0.963153;
				glasses = "None";
			};
			class AntoninNavara {
				name = "Antonin Navara";
				face = "Face48";
				speaker = "Rich";
				pitch = 1.01236;
				glasses = "None";
			};
			class KarelMur {
				name = "Karel Mur";
				face = "Face6";
				speaker = "Patrick";
				pitch = 1.071674;
				glasses = "None";
			};
			class AlesKozelka {
				name = "Ales Kozelka";
				face = "Face47";
				speaker = "Rob";
				pitch = 0.935474;
				glasses = "None";
			};
			class JiriCihlar {
				name = "Jiri Cihlar";
				face = "Face41";
				speaker = "Paul";
				pitch = 1.005524;
				glasses = "None";
			};
			class FrantisekDicka {
				name = "Frantisek Dicka";
				face = "Face10";
				speaker = "Rob";
				pitch = 0.984296;
				glasses = "None";
			};
			class MartinCiklamini {
				name = "Martin Ciklamini";
				face = "Face45";
				speaker = "Adam";
				pitch = 0.923785;
				glasses = "None";
			};
			class ArnostCetkovsky {
				name = "Arnost Cetkovsky";
				face = "Face9";
				speaker = "Paul";
				pitch = 0.998645;
				glasses = "None";
			};
			class JanAndera {
				name = "Jan Andera";
				face = "Face29";
				speaker = "George";
				pitch = 1.035761;
				glasses = "None";
			};
			class PavelStejny {
				name = "Pavel Stejny";
				face = "Face32";
				speaker = "John";
				pitch = 1.015082;
				glasses = "None";
			};
			class EmanuelStanke {
				name = "Emanuel Stanke";
				face = "Face10";
				speaker = "Greg";
				pitch = 0.991992;
				glasses = "None";
			};
			class JaroslavDezinsky {
				name = "Jaroslav Dezinsky";
				face = "Face16";
				speaker = "Marc";
				pitch = 1.071082;
				glasses = "None";
			};
			class JiriJosr {
				name = "Jiri Josr";
				face = "Face4";
				speaker = "George";
				pitch = 0.968335;
				glasses = "None";
			};
			class FrantisekBouc {
				name = "Frantisek Bouc";
				face = "Face16";
				speaker = "Patrick";
				pitch = 0.962;
				glasses = "None";
			};
			class MiroslavSiedem {
				name = "Miroslav Siedem";
				face = "Face41";
				speaker = "Dan";
				pitch = 0.956488;
				glasses = "None";
			};
			class AntoninJiskra {
				name = "Antonin Jiskra";
				face = "Face16";
				speaker = "Paul";
				pitch = 0.915997;
				glasses = "None";
			};
			class DavidCirkovsky {
				name = "David Cirkovsky";
				face = "Face36";
				speaker = "Patrick";
				pitch = 0.968024;
				glasses = "None";
			};
			class JaromirBrbensky {
				name = "Jaromir Brbensky";
				face = "Face52";
				speaker = "Peter";
				pitch = 1.040179;
				glasses = "None";
			};
			class BohuslavMrva {
				name = "Bohuslav Mrva";
				face = "Face6";
				speaker = "Patrick";
				pitch = 1.068561;
				glasses = "None";
			};
			class MichaelBrazina {
				name = "Michael Brazina";
				face = "Face21";
				speaker = "Rich";
				pitch = 0.970856;
				glasses = "None";
			};
			class JiriFazekas {
				name = "Jiri Fazekas";
				face = "Face31";
				speaker = "Adam";
				pitch = 1.013605;
				glasses = "None";
			};
			class FrantisekMudrych {
				name = "Frantisek Mudrych";
				face = "Face26";
				speaker = "John";
				pitch = 1.054797;
				glasses = "None";
			};
			class TomasTrnka {
				name = "Tomas Trnka";
				face = "Default";
				speaker = "John";
				pitch = 1.006665;
				glasses = "None";
			};
			class MiroslavKosumbersky {
				name = "Miroslav Kosumbersky";
				face = "Face14";
				speaker = "Paul";
				pitch = 0.929565;
				glasses = "None";
			};
			class JiriMukarovsky {
				name = "Jiri Mukarovsky";
				face = "Face16";
				speaker = "John";
				pitch = 1.045843;
				glasses = "None";
			};
			class CenekBouma {
				name = "Cenek Bouma";
				face = "Face18";
				speaker = "Paul";
				pitch = 0.955579;
				glasses = "None";
			};
			class HynekSiedek {
				name = "Hynek Siedek";
				face = "Face6";
				speaker = "Rich";
				pitch = 1.024744;
				glasses = "None";
			};
			class RomanBrenza {
				name = "Roman Brenza";
				face = "FaceR01";
				speaker = "Rich";
				pitch = 1.07583;
				glasses = "None";
			};
			class AloisMuzika {
				name = "Alois Muzika";
				face = "Face21";
				speaker = "John";
				pitch = 1.09718;
				glasses = "Spectacles";
			};
			class KarelBrandejsky {
				name = "Karel Brandejsky";
				face = "Face42";
				speaker = "Greg";
				pitch = 0.927869;
				glasses = "None";
			};
			class DanielStibor {
				name = "Daniel Stibor";
				face = "Face22";
				speaker = "Ted";
				pitch = 1.083093;
				glasses = "None";
			};
			class VitezslavStarek {
				name = "Vitezslav Starek";
				face = "Face31";
				speaker = "Paul";
				pitch = 1.06579;
				glasses = "None";
			};
			class FrantisekSilovsky {
				name = "Frantisek Silovsky";
				face = "Face19";
				speaker = "Paul";
				pitch = 0.918829;
				glasses = "None";
			};
			class LadislavTaks {
				name = "Ladislav Taks";
				face = "Default";
				speaker = "Tom";
				pitch = 1.041943;
				glasses = "None";
			};
			class JiriBrejnik {
				name = "Jiri Brejnik";
				face = "Face23";
				speaker = "Greg";
				pitch = 0.967767;
				glasses = "None";
			};
			class JosefJahodar {
				name = "Josef Jahodar";
				face = "Face48";
				speaker = "Jonah";
				pitch = 1.064307;
				glasses = "None";
			};
			class AntoninBitnar {
				name = "Antonin Bitnar";
				face = "Default";
				speaker = "John";
				pitch = 1.005609;
				glasses = "None";
			};
			class JanFilz {
				name = "Jan Filz";
				face = "Face37";
				speaker = "Marc";
				pitch = 1.07666;
				glasses = "None";
			};
			class JanTalich {
				name = "Jan Talich";
				face = "FaceR01";
				speaker = "Rob";
				pitch = 0.971289;
				glasses = "None";
			};
			class RudolfCinolter {
				name = "Rudolf Cinolter";
				face = "Face22";
				speaker = "Greg";
				pitch = 1.039166;
				glasses = "None";
			};
			class FrantisekTaftl {
				name = "Frantisek Taftl";
				face = "Face17";
				speaker = "Patrick";
				pitch = 1.090302;
				glasses = "None";
			};
			class VaclavCippr {
				name = "Vaclav Cippr";
				face = "Default";
				speaker = "Jonah";
				pitch = 1.025079;
				glasses = "None";
			};
			class VladislavForman {
				name = "Vladislav Forman";
				face = "Face48";
				speaker = "George";
				pitch = 0.90993;
				glasses = "None";
			};
			class MilanNad {
				name = "Milan Nad";
				face = "Face28";
				speaker = "Marc";
				pitch = 1.045941;
				glasses = "None";
			};
			class VaclavFejka {
				name = "Vaclav Fejka";
				face = "Face3";
				speaker = "Tom";
				pitch = 1.092615;
				glasses = "None";
			};
			class JaroslavTahovsky {
				name = "Jaroslav Tahovsky";
				face = "Face51";
				speaker = "Jonah";
				pitch = 1.040289;
				glasses = "None";
			};
			class AntoninBrany {
				name = "Antonin Brany";
				face = "Face10";
				speaker = "Rich";
				pitch = 0.90177;
				glasses = "None";
			};
			class JanCikler {
				name = "Jan Cikler";
				face = "Face9";
				speaker = "Dan";
				pitch = 1.092786;
				glasses = "None";
			};
			class JanSilvar {
				name = "Jan Silvar";
				face = "Face51";
				speaker = "Tom";
				pitch = 0.952301;
				glasses = "Spectacles";
			};
			class LubomirSibek {
				name = "Lubomir Sibek";
				face = "Face29";
				speaker = "Tom";
				pitch = 0.942627;
				glasses = "None";
			};
			class EmilMyjavec {
				name = "Emil Myjavec";
				face = "Face23";
				speaker = "Dan";
				pitch = 0.987433;
				glasses = "None";
			};
			class MarekStonis {
				name = "Marek Stonis";
				face = "Face2";
				speaker = "Paul";
				pitch = 1.074542;
				glasses = "None";
			};
			class JanBrandys {
				name = "Jan Brandys";
				face = "Face22";
				speaker = "Peter";
				pitch = 1.089801;
				glasses = "None";
			};
			class Miroslavdistl {
				name = "Miroslav distl";
				face = "Face48";
				speaker = "Jonah";
				pitch = 0.931616;
				glasses = "None";
			};
			class VitClar {
				name = "Vit Clar";
				face = "Face32";
				speaker = "Rob";
				pitch = 1.056335;
				glasses = "None";
			};
			class LudvikBlaha {
				name = "Ludvik Blaha";
				face = "Face31";
				speaker = "Dan";
				pitch = 0.946356;
				glasses = "None";
			};
			class BorisStanka {
				name = "Boris Stanka";
				face = "Default";
				speaker = "John";
				pitch = 0.935248;
				glasses = "None";
			};
			class JaromirNasaurcky {
				name = "Jaromir Nasaurcky";
				face = "Face27";
				speaker = "John";
				pitch = 1.07182;
				glasses = "Sunglasses";
			};
			class JaroslavJobbik {
				name = "Jaroslav Jobbik";
				face = "Face7";
				speaker = "Adam";
				pitch = 1.091089;
				glasses = "None";
			};
			class AgerJosef {
				name = "Ager Josef";
				face = "Face36";
				speaker = "George";
				pitch = 1.097668;
				glasses = "None";
			};
			class JosefJagrig {
				name = "Josef Jagrig";
				face = "Face42";
				speaker = "Patrick";
				pitch = 0.929144;
				glasses = "None";
			};
			class KarelMuknsnabl {
				name = "Karel Muknsnabl";
				face = "Face26";
				speaker = "Paul";
				pitch = 1.077032;
				glasses = "None";
			};
			class LadislavVanner {
				name = "Ladislav Vanner";
				face = "Default";
				speaker = "John";
				pitch = 1.062244;
				glasses = "None";
			};
			class JiriJitersky {
				name = "Jiri Jitersky";
				face = "Face20";
				speaker = "Marc";
				pitch = 1.064343;
				glasses = "None";
			};
			class IvanAndjelic {
				name = "Ivan Andjelic";
				face = "Face3";
				speaker = "Patrick";
				pitch = 1.035522;
				glasses = "None";
			};
			class FrantisekNedomlel {
				name = "Frantisek Nedomlel";
				face = "Face24";
				speaker = "Adam";
				pitch = 1.052808;
				glasses = "None";
			};
			class JanSichler {
				name = "Jan Sichler";
				face = "Face32";
				speaker = "Peter";
				pitch = 1.043262;
				glasses = "None";
			};
			class JanCon {
				name = "Jan Con";
				face = "Face30";
				speaker = "Patrick";
				pitch = 1.052087;
				glasses = "None";
			};
			class JindrichStarka {
				name = "Jindrich Starka";
				face = "Face33";
				speaker = "Tom";
				pitch = 1.043274;
				glasses = "None";
			};
			class OldrichMunzil {
				name = "Oldrich Munzil";
				face = "Face13";
				speaker = "Dan";
				pitch = 1.03064;
				glasses = "Sunglasses";
			};
			class EduardMuricky {
				name = "Eduard Muricky";
				face = "Face50";
				speaker = "George";
				pitch = 0.9427;
				glasses = "None";
			};
			class FrantisekDevora {
				name = "Frantisek Devora";
				face = "Face3";
				speaker = "Rich";
				pitch = 1.086975;
				glasses = "None";
			};
			class IvanBrant {
				name = "Ivan Brant";
				face = "Face32";
				speaker = "Patrick";
				pitch = 0.990558;
				glasses = "None";
			};
			class RomanFedermann {
				name = "Roman Federmann";
				face = "Face33";
				speaker = "Paul";
				pitch = 0.917261;
				glasses = "None";
			};
			class MilanMusil {
				name = "Milan Musil";
				face = "Face16";
				speaker = "Tom";
				pitch = 0.984064;
				glasses = "None";
			};
			class BretislavNedbalek {
				name = "Bretislav Nedbalek";
				face = "Face38";
				speaker = "Jonah";
				pitch = 0.990326;
				glasses = "None";
			};
			class RudolfJaca {
				name = "Rudolf Jaca";
				face = "Face25";
				speaker = "Paul";
				pitch = 1.024878;
				glasses = "None";
			};
			class BorivojBoukal {
				name = "Borivoj Boukal";
				face = "Face40";
				speaker = "John";
				pitch = 1.020007;
				glasses = "None";
			};
			class PetrStenberk {
				name = "Petr Stenberk";
				face = "Face22";
				speaker = "Patrick";
				pitch = 0.985028;
				glasses = "None";
			};
			class MiloslavNadrchal {
				name = "Miloslav Nadrchal";
				face = "Face3";
				speaker = "Jonah";
				pitch = 0.96366;
				glasses = "None";
			};
			class JanGranat {
				name = "Jan Granat";
				face = "Face23";
				speaker = "John";
				pitch = 0.985901;
				glasses = "None";
			};
			class BedrichStibora {
				name = "Bedrich Stibora";
				face = "Face31";
				speaker = "Patrick";
				pitch = 0.953314;
				glasses = "None";
			};
			class JosefNecesal {
				name = "Josef Necesal";
				face = "Face37";
				speaker = "Peter";
				pitch = 1.082104;
				glasses = "None";
			};
			class MartinDoborvolny {
				name = "Martin Doborvolny";
				face = "Face51";
				speaker = "Jonah";
				pitch = 1.092273;
				glasses = "None";
			};
			class AntoninKrampera {
				name = "Antonin Krampera";
				face = "Face11";
				speaker = "Jonah";
				pitch = 1.057324;
				glasses = "None";
			};
			class JiriCisar {
				name = "Jiri Cisar";
				face = "Face49";
				speaker = "Paul";
				pitch = 1.019367;
				glasses = "Spectacles";
			};
			class MiroslavKousalik {
				name = "Miroslav Kousalik";
				face = "Face49";
				speaker = "Marc";
				pitch = 1.010535;
				glasses = "None";
			};
			class LadislavJosza {
				name = "Ladislav Josza";
				face = "Face21";
				speaker = "Patrick";
				pitch = 1.026739;
				glasses = "None";
			};
			class AntoninKrubner {
				name = "Antonin Krubner";
				face = "Face11";
				speaker = "Jonah";
				pitch = 0.964423;
				glasses = "None";
			};
			class JiriNalezenec {
				name = "Jiri Nalezenec";
				face = "Face18";
				speaker = "George";
				pitch = 0.948926;
				glasses = "None";
			};
			class JiriVetron {
				name = "Jiri Vetron";
				face = "Face23";
				speaker = "Ted";
				pitch = 1.077698;
				glasses = "None";
			};
			class MiloslavVlcek {
				name = "Miloslav Vlcek";
				face = "Face11";
				speaker = "Rob";
				pitch = 0.9633;
				glasses = "None";
			};
			class OldrichNavratil {
				name = "Oldrich Navratil";
				face = "Face3";
				speaker = "John";
				pitch = 0.999323;
				glasses = "Spectacles";
			};
			class TomasAbels {
				name = "Tomas Abels";
				face = "Face28";
				speaker = "Tom";
				pitch = 0.938263;
				glasses = "None";
			};
			class EvzenDobroruka {
				name = "Evzen Dobroruka";
				face = "Face9";
				speaker = "John";
				pitch = 1.013715;
				glasses = "None";
			};
			class EduardAndrejsek {
				name = "Eduard Andrejsek";
				face = "Face35";
				speaker = "Paul";
				pitch = 0.963745;
				glasses = "Spectacles";
			};
			class RichardNaske {
				name = "Richard Naske";
				face = "Face45";
				speaker = "Tom";
				pitch = 0.950726;
				glasses = "None";
			};
			class EmilJakl {
				name = "Emil Jakl";
				face = "Face38";
				speaker = "Rich";
				pitch = 0.966522;
				glasses = "None";
			};
			class IvoStomilovic {
				name = "Ivo Stomilovic";
				face = "Face31";
				speaker = "Peter";
				pitch = 1.063916;
				glasses = "None";
			};
			class AlesStehno {
				name = "Ales Stehno";
				face = "Face21";
				speaker = "Adam";
				pitch = 0.952704;
				glasses = "None";
			};
			class JanSteklik {
				name = "Jan Steklik";
				face = "Face34";
				speaker = "Rob";
				pitch = 1.043738;
				glasses = "None";
			};
			class AdolfCir {
				name = "Adolf Cir";
				face = "Face51";
				speaker = "Rob";
				pitch = 0.984106;
				glasses = "None";
			};
			class JosefJourda {
				name = "Josef Jourda";
				face = "Face34";
				speaker = "John";
				pitch = 1.040326;
				glasses = "None";
			};
			class AloisKrouzek {
				name = "Alois Krouzek";
				face = "Face52";
				speaker = "Tom";
				pitch = 0.908624;
				glasses = "None";
			};
			class AntoninBlacky {
				name = "Antonin Blacky";
				face = "Face44";
				speaker = "Tom";
				pitch = 0.926715;
				glasses = "None";
			};
			class JanStor {
				name = "Jan Stor";
				face = "Face38";
				speaker = "Peter";
				pitch = 1.013055;
				glasses = "None";
			};
			class EduardMuzak {
				name = "Eduard Muzak";
				face = "Face7";
				speaker = "Greg";
				pitch = 0.995801;
				glasses = "None";
			};
			class JanMusel {
				name = "Jan Musel";
				face = "Face44";
				speaker = "Ted";
				pitch = 1.076422;
				glasses = "None";
			};
			class JanMikulcak {
				name = "Jan Mikulcak";
				face = "Face39";
				speaker = "Tom";
				pitch = 0.905334;
				glasses = "None";
			};
		};
	};
	class Civilian {
		class Soldiers {
			class MarekSpanel {
				name = "Marek Spanel";
				face = "Face1";
				speaker = "John";
				pitch = 1.08316;
				glasses = "None";
			};
			class OndrejNovak {
				name = "Ondrej Novak";
				face = "Face35";
				speaker = "Peter";
				pitch = 0.987384;
				glasses = "None";
			};
			class JiriMartinek {
				name = "Jiri Martinek";
				face = "Face47";
				speaker = "Ted";
				pitch = 1.071466;
				glasses = "None";
			};
			class OndrejSpanel {
				name = "Ondrej Spanel";
				face = "Face1";
				speaker = "Rob";
				pitch = 0.93537;
				glasses = "None";
			};
			class ViktorBocan {
				name = "Viktor Bocan";
				face = "Face17";
				speaker = "Rich";
				pitch = 1.092462;
				glasses = "None";
			};
			class RobertStipek {
				name = "Robert Stipek";
				face = "Face2";
				speaker = "Adam";
				pitch = 0.972522;
				glasses = "None";
			};
			class VojtechNovak {
				name = "Vojtech Novak";
				face = "Face20";
				speaker = "Ted";
				pitch = 0.954614;
				glasses = "None";
			};
			class AdamBilek {
				name = "Adam Bilek";
				face = "Face17";
				speaker = "Ted";
				pitch = 1.069311;
				glasses = "None";
			};
			class RadanDoubrava {
				name = "Radan Doubrava";
				face = "Face22";
				speaker = "Patrick";
				pitch = 1.023651;
				glasses = "None";
			};
			class JanKraml {
				name = "Jan Kraml";
				face = "Face52";
				speaker = "George";
				pitch = 0.949597;
				glasses = "None";
			};
			class KarelMatejka {
				name = "Karel Matejka";
				face = "Face51";
				speaker = "Peter";
				pitch = 0.98396;
				glasses = "Sunglasses";
			};
			class PetrVisek {
				name = "Petr Visek";
				face = "Face30";
				speaker = "Greg";
				pitch = 1.070935;
				glasses = "None";
			};
			class PetrPechar {
				name = "Petr Pechar";
				face = "Face34";
				speaker = "Paul";
				pitch = 1.020398;
				glasses = "None";
			};
			class JanHovora {
				name = "Jan Hovora";
				face = "Face25";
				speaker = "Rob";
				pitch = 1.051868;
				glasses = "None";
			};
			class AlesHradek {
				name = "Ales Hradek";
				face = "Face2";
				speaker = "Jonah";
				pitch = 1.035809;
				glasses = "None";
			};
			class JanHora {
				name = "Jan Hora";
				face = "Face52";
				speaker = "Adam";
				pitch = 0.968085;
				glasses = "Sunglasses";
			};
			class MartinBenes {
				name = "Martin Benes";
				face = "Face27";
				speaker = "Greg";
				pitch = 1.092194;
				glasses = "None";
			};
			class PetrBeranek {
				name = "Petr Beranek";
				face = "Face50";
				speaker = "Rob";
				pitch = 0.992816;
				glasses = "None";
			};
			class MartinDrbohlav {
				name = "Martin Drbohlav";
				face = "Face52";
				speaker = "Rich";
				pitch = 1.075873;
				glasses = "None";
			};
			class JindrichDuda {
				name = "Jindrich Duda";
				face = "Face50";
				speaker = "Adam";
				pitch = 0.940991;
				glasses = "None";
			};
			class JanHusak {
				name = "Jan Husak";
				face = "Face32";
				speaker = "George";
				pitch = 0.906775;
				glasses = "None";
			};
			class PavelHajecek {
				name = "Pavel Hajecek";
				face = "Face44";
				speaker = "Jonah";
				pitch = 1.069849;
				glasses = "None";
			};
			class JanHruby {
				name = "Jan Hruby";
				face = "Face40";
				speaker = "Paul";
				pitch = 0.965167;
				glasses = "None";
			};
			class ZbynekJanos {
				name = "Zbynek Janos";
				face = "Face24";
				speaker = "Paul";
				pitch = 0.961334;
				glasses = "None";
			};
			class MilanFink {
				name = "Milan Fink";
				face = "Face45";
				speaker = "Patrick";
				pitch = 0.927991;
				glasses = "None";
			};
			class ZdenekCipro {
				name = "Zdenek Cipro";
				face = "Face28";
				speaker = "Jonah";
				pitch = 0.993384;
				glasses = "None";
			};
			class TomasCetl {
				name = "Tomas Cetl";
				face = "Face49";
				speaker = "Dan";
				pitch = 0.995935;
				glasses = "Spectacles";
			};
			class RobertFerenc {
				name = "Robert Ferenc";
				face = "Face3";
				speaker = "Jonah";
				pitch = 0.934857;
				glasses = "None";
			};
			class MiloslavHerda {
				name = "Miloslav Herda";
				face = "Face37";
				speaker = "Rich";
				pitch = 1.042908;
				glasses = "Spectacles";
			};
			class JaromirHorak {
				name = "Jaromir Horak";
				face = "Face42";
				speaker = "George";
				pitch = 1.039191;
				glasses = "None";
			};
			class MichalJanicek {
				name = "Michal Janicek";
				face = "Face45";
				speaker = "Adam";
				pitch = 1.034619;
				glasses = "None";
			};
			class JanHromcik {
				name = "Jan Hromcik";
				face = "Face12";
				speaker = "Tom";
				pitch = 1.012018;
				glasses = "None";
			};
			class MatejBernard {
				name = "Matej Bernard";
				face = "Face25";
				speaker = "Ted";
				pitch = 1.051733;
				glasses = "None";
			};
			class VaclavKunasek {
				name = "Vaclav Kunasek";
				face = "Face22";
				speaker = "George";
				pitch = 1.050909;
				glasses = "None";
			};
			class BartolomejKvasnicka {
				name = "Bartolomej Kvasnicka";
				face = "Face30";
				speaker = "John";
				pitch = 0.932123;
				glasses = "None";
			};
			class JaroslavSmetana {
				name = "Jaroslav Smetana";
				face = "Face20";
				speaker = "Rich";
				pitch = 0.9216;
				glasses = "None";
			};
			class JiriSmrcka {
				name = "Jiri Smrcka";
				face = "Face7";
				speaker = "Paul";
				pitch = 0.927014;
				glasses = "None";
			};
			class MatejNovak {
				name = "Matej Novak";
				face = "Face34";
				speaker = "Greg";
				pitch = 1.042596;
				glasses = "None";
			};
			class FilipPaces {
				name = "Filip Paces";
				face = "Face4";
				speaker = "Dan";
				pitch = 1.070251;
				glasses = "None";
			};
			class MarekVondrak {
				name = "Marek Vondrak";
				face = "Face23";
				speaker = "Jonah";
				pitch = 0.945367;
				glasses = "None";
			};
			class RobertBrozovsky {
				name = "Robert Brozovsky";
				face = "Face29";
				speaker = "Greg";
				pitch = 1.024304;
				glasses = "None";
			};
			class DanielSnajdr {
				name = "Daniel Snajdr";
				face = "Face43";
				speaker = "John";
				pitch = 1.001306;
				glasses = "None";
			};
			class FrantisekFuka {
				name = "Frantisek Fuka";
				face = "Face14";
				speaker = "Jonah";
				pitch = 0.900208;
				glasses = "None";
			};
			class KarelVrana {
				name = "Karel Vrana";
				face = "Face23";
				speaker = "Ted";
				pitch = 1.090515;
				glasses = "None";
			};
			class DaliborStraka {
				name = "Dalibor Straka";
				face = "Face48";
				speaker = "Rob";
				pitch = 0.963452;
				glasses = "None";
			};
			class LeosStejskal {
				name = "Leos Stejskal";
				face = "Face14";
				speaker = "Patrick";
				pitch = 1.052496;
				glasses = "None";
			};
			class MartinZilvar {
				name = "Martin Zilvar";
				face = "Face29";
				speaker = "Patrick";
				pitch = 1.026361;
				glasses = "Spectacles";
			};
			class PavelZuska {
				name = "Pavel Zuska";
				face = "Face35";
				speaker = "Greg";
				pitch = 1.057965;
				glasses = "None";
			};
			class CenekJirsak {
				name = "Cenek Jirsak";
				face = "Face49";
				speaker = "Peter";
				pitch = 1.041327;
				glasses = "Sunglasses";
			};
			class AntoninBejval {
				name = "Antonin Bejval";
				face = "Face35";
				speaker = "Ted";
				pitch = 0.950067;
				glasses = "None";
			};
			class EdaKemlink {
				name = "Eda Kemlink";
				face = "Face41";
				speaker = "Greg";
				pitch = 1.036945;
				glasses = "None";
			};
			class StojanJakotyc {
				name = "Stojan Jakotyc";
				face = "Face49";
				speaker = "Greg";
				pitch = 1.093756;
				glasses = "None";
			};
			class LubosPacal {
				name = "Lubos Pacal";
				face = "Face13";
				speaker = "George";
				pitch = 0.907007;
				glasses = "None";
			};
			class MarekSvatos {
				name = "Marek Svatos";
				face = "Face11";
				speaker = "Jonah";
				pitch = 0.924249;
				glasses = "Spectacles";
			};
			class OndrejKafka {
				name = "Ondrej Kafka";
				face = "Face9";
				speaker = "Adam";
				pitch = 0.914447;
				glasses = "None";
			};
			class TomasNahodil {
				name = "Tomas Nahodil";
				face = "Face21";
				speaker = "Adam";
				pitch = 0.975262;
				glasses = "None";
			};
			class ZdenekSverak {
				name = "Zdenek Sverak";
				face = "Face22";
				speaker = "Adam";
				pitch = 1.021643;
				glasses = "Sunglasses";
			};
			class LadislavSmoljak {
				name = "Ladislav Smoljak";
				face = "Face3";
				speaker = "Dan";
				pitch = 0.906311;
				glasses = "None";
			};
			class PavelVonruska {
				name = "Pavel Vonruska";
				face = "Face50";
				speaker = "Tom";
				pitch = 1.023859;
				glasses = "Spectacles";
			};
			class JaroslavWeigl {
				name = "Jaroslav Weigl";
				face = "Face14";
				speaker = "Peter";
				pitch = 0.994629;
				glasses = "None";
			};
			class RenePtacek {
				name = "Rene Ptacek";
				face = "Face6";
				speaker = "Tom";
				pitch = 1.040533;
				glasses = "None";
			};
			class JiriKolben {
				name = "Jiri Kolben";
				face = "Face23";
				speaker = "Rich";
				pitch = 0.979279;
				glasses = "None";
			};
			class PavelDanek {
				name = "Pavel Danek";
				face = "Face4";
				speaker = "Peter";
				pitch = 0.973584;
				glasses = "None";
			};
			class TomasBata {
				name = "Tomas Bata";
				face = "Face50";
				speaker = "Dan";
				pitch = 0.993524;
				glasses = "None";
			};
			class RudaPivrnec {
				name = "Ruda Pivrnec";
				face = "Face37";
				speaker = "Ted";
				pitch = 1.094806;
				glasses = "None";
			};
			class KarelSvoboda {
				name = "Karel Svoboda";
				face = "Face45";
				speaker = "Dan";
				pitch = 0.907574;
				glasses = "Spectacles";
			};
			class KonradHenlein {
				name = "Konrad Henlein";
				face = "Face26";
				speaker = "George";
				pitch = 0.951184;
				glasses = "None";
			};
			class KarelSmolen {
				name = "Karel Smolen";
				face = "Face6";
				speaker = "Marc";
				pitch = 1.07699;
				glasses = "None";
			};
			class MartinBedri {
				name = "Martin Bedri";
				face = "Face5";
				speaker = "Paul";
				pitch = 1.099695;
				glasses = "None";
			};
			class PavelKolarik {
				name = "Pavel Kolarik";
				face = "Face43";
				speaker = "Peter";
				pitch = 1.019958;
				glasses = "Spectacles";
			};
			class ProkopBuben {
				name = "Prokop Buben";
				face = "Face38";
				speaker = "Ted";
				pitch = 0.911078;
				glasses = "Sunglasses";
			};
			class JaraCimrman {
				name = "Jara Cimrman";
				face = "Face40";
				speaker = "Ted";
				pitch = 1.015704;
				glasses = "None";
			};
			class LudvikSvoboda {
				name = "Ludvik Svoboda";
				face = "Face4";
				speaker = "John";
				pitch = 1.059412;
				glasses = "Spectacles";
			};
			class KlementGottwald {
				name = "Klement Gottwald";
				face = "Face2";
				speaker = "Rob";
				pitch = 1.057269;
				glasses = "None";
			};
			class KarelGott {
				name = "Karel Gott";
				face = "Face11";
				speaker = "Rich";
				pitch = 0.900574;
				glasses = "Spectacles";
			};
			class MirekDusin {
				name = "Mirek Dusin";
				face = "Face11";
				speaker = "Marc";
				pitch = 0.934863;
				glasses = "None";
			};
			class JarkaMetelka {
				name = "Jarka Metelka";
				face = "Face34";
				speaker = "Adam";
				pitch = 0.944977;
				glasses = "None";
			};
			class JindraHojer {
				name = "Jindra Hojer";
				face = "Face14";
				speaker = "Tom";
				pitch = 1.027411;
				glasses = "None";
			};
			class OtaBota {
				name = "Ota Bota";
				face = "Face5";
				speaker = "George";
				pitch = 0.906537;
				glasses = "None";
			};
			class DavidCervenacek {
				name = "David Cervenacek";
				face = "Face29";
				speaker = "Dan";
				pitch = 0.947754;
				glasses = "None";
			};
			class MichalDavid {
				name = "Michal David";
				face = "Face50";
				speaker = "Marc";
				pitch = 1.00517;
				glasses = "None";
			};
			class FrantisekSmoranc {
				name = "Frantisek Smoranc";
				face = "Face9";
				speaker = "Greg";
				pitch = 1.018561;
				glasses = "None";
			};
			class FrantisekDobrota {
				name = "Frantisek Dobrota";
				face = "Face24";
				speaker = "Patrick";
				pitch = 0.964624;
				glasses = "Spectacles";
			};
			class LudvikVaculik {
				name = "Ludvik Vaculik";
				face = "Face39";
				speaker = "Dan";
				pitch = 0.93255;
				glasses = "None";
			};
			class GustavHusak {
				name = "Gustav Husak";
				face = "Face27";
				speaker = "Peter";
				pitch = 1.029517;
				glasses = "None";
			};
			class JuroJanosik {
				name = "Juro Janosik";
				face = "Face22";
				speaker = "Peter";
				pitch = 1.000128;
				glasses = "None";
			};
			class JuliusFucik {
				name = "Julius Fucik";
				face = "Face8";
				speaker = "George";
				pitch = 0.941449;
				glasses = "None";
			};
			class MilousJakes {
				name = "Milous Jakes";
				face = "Face3";
				speaker = "Marc";
				pitch = 1.023968;
				glasses = "None";
			};
		};
	};
	class DefaultWorld {
		access = 3;
		plateFormat = "$$$  ## - ##";
		plateLetters = "ABCDEFHIKLMOPRSTVXYZ";
		centerPosition[] = {6400,6400,0};
		latitude = -40;
		longitude = 15;
		class Music: CfgMusic {};
		class EnvSounds: CfgEnvSounds {};
		cutscenes[] = {"intro"};
		forestOldTriangle = "data3D\les trojuhelnik.p3d";
		forestOldSquare = "data3D\les ctverec.p3d";
		forestInner = "data3D\les ctverec dark.p3d";
		forestOuter = "data3D\les ctverec pruchozi.p3d";
		forestOuterT1 = "data3D\les ctverec pruchozi_T1.p3d";
		forestOuterT2 = "data3D\les ctverec pruchozi_T2.p3d";
		forestTriangle = "data3D\les trojuhelnik pruchozi.p3d";
		forestBorder = "data3D\les ctverec mlazi.p3d";
		class ReplaceObjects {
			class ForestBorder {
				replace = "data3D\les ctverec mlazi.p3d";
				with[] = {};
			};
			class ForestTriangle {
				replace = "data3D\les trojuhelnik.p3d";
				with[] = {"data3D\les trojuhelnik pruchozi.p3d"};
			};
			class ForestSquare {
				replace = "data3D\les ctverec.p3d";
				with[] = {"data3D\les ctverec pruchozi_T1.p3d","data3D\les ctverec pruchozi_T2.p3d"};
				center = 1;
			};
		};
		landGrid = 50;
		class Grid {
			offsetX = 0;
			offsetY = 0;
			class Zoom1 {
				zoomMax = 0.2;
				format = "XY";
				formatX = "Aa";
				formatY = "00";
				stepX = 128;
				stepY = 128;
			};
			class Zoom2 {
				zoomMax = 1e+030;
				format = "XY";
				formatX = "A";
				formatY = "0";
				stepX = 1280;
				stepY = 1280;
			};
		};
		class Subdivision {
			class Fractal {
				rougness = 10;
				maxRoad = 0.2;
				maxTrack = 1.0;
				maxSlopeFactor = 0.05;
			};
			class WhiteNoise {
				rougness = 5;
				maxRoad = 0.1;
				maxTrack = 0.5;
				maxSlopeFactor = 0.025;
			};
			minY = -0.0;
			minSlope = 0.02;
		};
	};
	class Eden: DefaultWorld {
		access = 3;
		plateFormat = "ER$  ## - ##";
		plateLetters = "ABCDEFHIKLMOPRSTVXYZ";
		worldName = "eden.wrp";
		description = "Everon";
		icon = "_eden.paa";
		startTime = "8:30";
		startDate = "30/4/84";
		startWeather = 0.3;
		startFog = 0.0;
		forecastWeather = 0.3;
		forecastFog = 0.0;
		seagullPos[] = {10738,8509};
		ilsPosition[] = {4772,10923};
		ilsDirection[] = {0,0.08,-1};
		ilsTaxiIn[] = {"4772+69","10923+400","4772+69","10923+95","4772+61","10923+87","4772+8","10923+87",4772,"10923+95",4772,"10923+150"};
		ilsTaxiOff[] = {4772,10923,4772,"10923+878","4772+8","10923+886","4772+61","10923+886","4772+69","10923+878","4772+69","10923+400"};
		class Sounds {
			sounds[] = {};
		};
		class Animation {
			vehicles[] = {};
		};
		class Names {
			class SaintPhillippe {
				name = "Saint Phillippe";
				position[] = {4674,10730,50};
			};
			class Regina {
				name = "Regina";
				position[] = {7197,2347,50};
			};
			class Meaux {
				name = "Meaux";
				position[] = {4524,9549,100};
			};
			class Tyrone {
				name = "Tyrone";
				position[] = {4946,9056,50};
			};
			class Montignac {
				name = "Montignac";
				position[] = {4935,6994,50};
			};
			class Gravette {
				name = "Gravette";
				position[] = {4112,7772,50};
			};
			class EnreDeux {
				name = "Entre Deux";
				position[] = {5735,7059,100};
			};
			class Provins {
				name = "Provins";
				position[] = {5501,6050,50};
			};
			class Chotain {
				name = "Chotain";
				position[] = {7057,5987,50};
			};
			class Laruns {
				name = "Laruns";
				position[] = {7556,5558,50};
			};
			class Figari {
				name = "Figari";
				position[] = {5283,5375,50};
			};
			class LeMoule {
				name = "Le Moule";
				position[] = {2590,5384,50};
			};
			class Morton {
				name = "Morton";
				position[] = {5134,3955,100};
			};
			class Lamentin {
				name = "Lamentin";
				position[] = {1333,5962,100};
			};
			class Levie {
				name = "Levie";
				position[] = {7554,4737,10};
			};
			class Durras {
				name = "Durras";
				position[] = {8835,2710,50};
			};
			class Vernon {
				name = "Vernon";
				position[] = {9142,2159,50};
			};
			class SaintPierre {
				name = "Saint Pierre";
				position[] = {9662,1605,50};
			};
		};
		cutscenes[] = {"intro","intro1"};
	};
	class Abel: DefaultWorld {
		access = 3;
		plateFormat = "ML$ - #####";
		plateLetters = "ABCDEGHIKLMNOPRSTVXZ";
		worldName = "abel.wrp";
		description = "Malden";
		icon = "_abel.paa";
		startTime = "8:30";
		startDate = "30/4/84";
		startWeather = 0.3;
		startFog = 0.0;
		forecastWeather = 0.3;
		forecastFog = 0.0;
		seagullPos[] = {8074,4048,100};
		ilsPosition[] = {7922,9590,0};
		ilsDirection[] = {0,0.08,-1};
		ilsTaxiIn[] = {"7922+69","9590+400","7922+69","9590+45-18","7922+61","9590+37-18","7922+8","9590+37-18",7922,"9590+45-18",7922,"9590+100-18"};
		ilsTaxiOff[] = {7922,9590,7922,"9590+878-18","7922+8","9590+886-18","7922+61","9590+886-18","7922+69","9590+878-18","7922+69","9590+400"};
		forestOldTriangle = "data3D\les_su_trojuhelnik.p3d";
		forestOldSquare = "data3D\les_su_ctver.p3d";
		forestInner = "data3D\les_su_ctver.p3d";
		forestOuter = "data3D\les_su_ctver_pruhozi.p3d";
		forestOuterT1 = "data3D\les_su_ctver_pruhozi_T1.p3d";
		forestOuterT2 = "data3D\les_su_ctver_pruhozi_T2.p3d";
		forestTriangle = "data3D\les_su_trojuhelnik.p3d";
		forestBorder = "data3D\les_su_ctver_mlaz.p3d";
		class ReplaceObjects {
			class ForestBorder {
				replace = "data3D\les_su_ctver_mlaz.p3d";
				with[] = {};
			};
			class ForestSquare {
				replace = "data3D\les_su_ctver.p3d";
				with[] = {"data3D\les_su_ctver_pruhozi_T1.p3d","data3D\les_su_ctver_pruhozi_T2.p3d"};
				center = 1;
			};
		};
		class EnvSounds: CfgEnvSounds {
			class Rain {
				sound[] = {"Environmental\Rain_hard",0.0009999999,1};
				soundNight[] = {"Environmental\Rain_hard",0.0009999999,1};
			};
			class Sea {
				sound[] = {"Environmental\wave_break",9.999998e-005,1};
				soundNight[] = {"Environmental\wave_break",9.999998e-005,1};
			};
			class Meadows {
				sound[] = {"animals\crickets03",1.7782791e-005,1};
				soundNight[] = {"animals\crickets03",1.7782791e-005,1};
			};
			class Trees {
				sound[] = {"animals\crickets03",9.999998e-005,1};
				soundNight[] = {"animals\crickets03",9.999998e-005,1};
			};
			class Hills {
				sound[] = {"Environmental\wind_heavy",3.162277e-005,1};
				soundNight[] = {"Environmental\wind_whistle",3.162277e-005,1};
			};
		};
		class Sounds {
			sounds[] = {};
		};
		class Animation {
			vehicles[] = {};
		};
		class Names {
			class SaintLouis {
				name = "Saint Louis";
				position[] = {7144,8963,130};
			};
			class Larche {
				name = "Larche";
				position[] = {6034,8599,200};
			};
			class LaTrinite {
				name = "La Trinite";
				position[] = {7268,7944,200};
			};
			class Goisee {
				name = "Goisse";
				position[] = {3593,8528,150};
			};
			class LaPessagne {
				name = "La Pessagne";
				position[] = {3111,6326,100};
			};
			class Vigny {
				name = "Vigny";
				position[] = {3075,6831,100};
			};
			class Houdan {
				name = "Houdan";
				position[] = {7117,6069,100};
			};
			class SainteMarie {
				name = "Sainte Marie";
				position[] = {5563,4217,100};
			};
			class Chapoi {
				name = "Chapoi";
				position[] = {5841,3527,200};
			};
			class LePort {
				name = "Le Port";
				position[] = {8193,3129,100};
			};
			class Cancon {
				name = "Cancon";
				position[] = {5388,2786,100};
			};
			class LaRiviere {
				name = "La Riviere";
				position[] = {3744,3257,200};
			};
			class Arudy {
				name = "Arudy";
				position[] = {5518,6981,100};
			};
			class Dourdan {
				name = "Dourdan";
				position[] = {7029,7125,100};
			};
		};
		cutscenes[] = {"intro","intro1"};
	};
	class Demo: Abel {
		access = 3;
		worldName = "\demo\demo.wrp";
		description = "Malden - Demo";
		cutscenes[] = {"intro"};
	};
	class Cain: DefaultWorld {
		access = 3;
		plateFormat = "## - KO$ - #";
		plateLetters = "ABCEHKMOPT";
		worldName = "cain.wrp";
		description = "Kolgujev";
		icon = "_cain.paa";
		startTime = "8:30";
		startDate = "30/4/84";
		startWeather = 0.3;
		startFog = 0.0;
		forecastWeather = 0.3;
		forecastFog = 0.0;
		seagullPos[] = {8074,4048,100};
		ilsPosition[] = {0,0,0};
		ilsDirection[] = {0,0.08,-1};
		ilsTaxiIn[] = {};
		ilsTaxiOff[] = {};
		class Sounds {
			sounds[] = {};
		};
		class Animation {
			vehicles[] = {};
		};
		class Names {};
		cutscenes[] = {"intro","intro1"};
	};
	class Intro: DefaultWorld {
		access = 3;
		description = "Desert Island";
		icon = "_training.paa";
		worldName = "intro.wrp";
		plateFormat = "ML$ - #####";
		plateLetters = "ABCDEGHIKLMNOPRSTVXZ";
		startTime = "4:30";
		startDate = "10/4/82";
		startWeather = 0.4;
		startFog = 0.0;
		forecastWeather = 0.4;
		forecastFog = 0.0;
		seagullPos[] = {8897,4349,100};
		ilsPosition[] = {0,0,0};
		ilsDirection[] = {0,0.08,1};
		ilsTaxiIn[] = {};
		ilsTaxiOff[] = {};
		centerPosition[] = {9735,3964,0};
		class Sounds {
			sounds[] = {};
		};
		class Animation {
			vehicles[] = {};
		};
		class Names {};
		cutscenes[] = {"intro"};
	};
	initWorld = "Intro";
	demoWorld = "Demo";
};
class CfgWorldList {
	access = 1;
	class Eden {};
	class Abel {};
	class Cain {};
	class Demo {};
	class Intro {};
};
class CfgGroups {
	class West {
		name = "$STR_WEST";
		class Armored {
			name = "$STR_CFG_GRP_ARMORED";
			class M1Platoon {
				name = "$STR_CFG_GRP_M1PLATOON";
				class Unit0 {
					side = 1;
					vehicle = "M1Abrams";
					rank = "CAPTAIN";
					position[] = {0,5,0};
				};
				class Unit1 {
					side = 1;
					vehicle = "M1Abrams";
					rank = "Lieutnant";
					position[] = {-20,0,0};
				};
				class Unit2 {
					side = 1;
					vehicle = "M1Abrams";
					rank = "Lieutnant";
					position[] = {20,0,0};
				};
				class Unit3 {
					side = 1;
					vehicle = "M1Abrams";
					rank = "Corporal";
					position[] = {40,0,0};
				};
			};
			class M60Platoon {
				name = "$STR_CFG_GRP_M60PLATOON";
				class Unit0 {
					side = 1;
					vehicle = "M60";
					rank = "CAPTAIN";
					position[] = {0,5,0};
				};
				class Unit1 {
					side = 1;
					vehicle = "M60";
					rank = "Lieutnant";
					position[] = {-20,0,0};
				};
				class Unit2 {
					side = 1;
					vehicle = "M60";
					rank = "Lieutnant";
					position[] = {20,0,0};
				};
				class Unit3 {
					side = 1;
					vehicle = "M60";
					rank = "Corporal";
					position[] = {40,0,0};
				};
			};
		};
		class Infantry {
			name = "$STR_CFG_GRP_INFANTRY";
			class BasicInfantry {
				name = "$STR_CFG_GRP_INFANTRY_BASIC";
				class Unit0 {
					side = 1;
					vehicle = "OfficerW";
					rank = "Sergeant";
					position[] = {0,5,0};
				};
				class Unit1 {
					side = 1;
					vehicle = "SoldierWMG";
					rank = "CORPORAL";
					position[] = {3,0,0};
				};
				class Unit2 {
					side = 1;
					vehicle = "SoldierWG";
					rank = "CORPORAL";
					position[] = {5,0,0};
				};
				class Unit3 {
					side = 1;
					vehicle = "SoldierWG";
					rank = "CORPORAL";
					position[] = {7,0,0};
				};
				class Unit4 {
					side = 1;
					vehicle = "SoldierWLAW";
					rank = "CORPORAL";
					position[] = {9,0,0};
				};
				class Unit5 {
					side = 1;
					vehicle = "SoldierWMG";
					rank = "Private";
					position[] = {11,0,0};
				};
				class Unit6 {
					side = 1;
					vehicle = "SoldierWB";
					rank = "Private";
					position[] = {13,0,0};
				};
				class Unit7 {
					side = 1;
					vehicle = "SoldierWB";
					rank = "Private";
					position[] = {15,0,0};
				};
				class Unit8 {
					side = 1;
					vehicle = "SoldierWB";
					rank = "Private";
					position[] = {17,0,0};
				};
			};
			class MechanizedInfantry {
				name = "$STR_CFG_GRP_INFANTRY_MECHANIZED";
				class Unit0 {
					side = 1;
					vehicle = "OfficerW";
					rank = "Sergeant";
					position[] = {0,5,0};
				};
				class Unit1 {
					side = 1;
					vehicle = "M113";
					rank = "CORPORAL";
					position[] = {-5,0,0};
				};
				class Unit2 {
					side = 1;
					vehicle = "SoldierWG";
					rank = "CORPORAL";
					position[] = {5,0,0};
				};
				class Unit3 {
					side = 1;
					vehicle = "SoldierWG";
					rank = "CORPORAL";
					position[] = {7,0,0};
				};
				class Unit4 {
					side = 1;
					vehicle = "SoldierWLAW";
					rank = "CORPORAL";
					position[] = {9,0,0};
				};
				class Unit5 {
					side = 1;
					vehicle = "SoldierWMG";
					rank = "Private";
					position[] = {11,0,0};
				};
				class Unit6 {
					side = 1;
					vehicle = "SoldierWB";
					rank = "Private";
					position[] = {13,0,0};
				};
				class Unit7 {
					side = 1;
					vehicle = "SoldierWB";
					rank = "Private";
					position[] = {15,0,0};
				};
			};
		};
	};
	class East {
		name = "$STR_EAST";
		class Armored {
			name = "$STR_CFG_GRP_ARMORED";
			class T80Platoon {
				name = "$STR_CFG_GRP_T80PLATOON";
				class Unit0 {
					side = 0;
					vehicle = "T80";
					rank = "CAPTAIN";
					position[] = {0,5,0};
				};
				class Unit1 {
					side = 0;
					vehicle = "T80";
					rank = "Lieutnant";
					position[] = {-20,0,0};
				};
				class Unit2 {
					side = 0;
					vehicle = "T80";
					rank = "Lieutnant";
					position[] = {20,0,0};
				};
				class Unit3 {
					side = 0;
					vehicle = "T80";
					rank = "Corporal";
					position[] = {40,0,0};
				};
			};
			class T72Platoon {
				name = "$STR_CFG_GRP_T72PLATOON";
				class Unit0 {
					side = 0;
					vehicle = "T72";
					rank = "CAPTAIN";
					position[] = {0,5,0};
				};
				class Unit1 {
					side = 0;
					vehicle = "T72";
					rank = "Lieutnant";
					position[] = {-20,0,0};
				};
				class Unit2 {
					side = 0;
					vehicle = "T72";
					rank = "Lieutnant";
					position[] = {20,0,0};
				};
				class Unit3 {
					side = 0;
					vehicle = "T72";
					rank = "Corporal";
					position[] = {40,0,0};
				};
			};
		};
		class Infantry {
			name = "$STR_CFG_GRP_INFANTRY";
			class BasicInfantry {
				name = "$STR_CFG_GRP_INFANTRY_BASIC";
				class Unit0 {
					side = 0;
					vehicle = "OfficerE";
					rank = "Sergeant";
					position[] = {0,5,0};
				};
				class Unit1 {
					side = 0;
					vehicle = "SoldierEMG";
					rank = "CORPORAL";
					position[] = {3,0,0};
				};
				class Unit2 {
					side = 0;
					vehicle = "SoldierEG";
					rank = "CORPORAL";
					position[] = {5,0,0};
				};
				class Unit3 {
					side = 0;
					vehicle = "SoldierEB";
					rank = "CORPORAL";
					position[] = {7,0,0};
				};
				class Unit4 {
					side = 0;
					vehicle = "SoldierELAW";
					rank = "CORPORAL";
					position[] = {9,0,0};
				};
				class Unit5 {
					side = 0;
					vehicle = "SoldierEMG";
					rank = "Private";
					position[] = {11,0,0};
				};
				class Unit6 {
					side = 0;
					vehicle = "SoldierEB";
					rank = "Private";
					position[] = {13,0,0};
				};
				class Unit7 {
					side = 0;
					vehicle = "SoldierEB";
					rank = "Private";
					position[] = {15,0,0};
				};
				class Unit8 {
					side = 0;
					vehicle = "SoldierEB";
					rank = "Private";
					position[] = {17,0,0};
				};
			};
			class MechanizedInfantry {
				name = "$STR_CFG_GRP_INFANTRY_MECHANIZED";
				class Unit0 {
					side = 0;
					vehicle = "OfficerE";
					rank = "Sergeant";
					position[] = {0,5,0};
				};
				class Unit1 {
					side = 0;
					vehicle = "BMP";
					rank = "CORPORAL";
					position[] = {-5,0,0};
				};
				class Unit2 {
					side = 0;
					vehicle = "SoldierEG";
					rank = "CORPORAL";
					position[] = {5,0,0};
				};
				class Unit3 {
					side = 0;
					vehicle = "SoldierEB";
					rank = "CORPORAL";
					position[] = {7,0,0};
				};
				class Unit4 {
					side = 0;
					vehicle = "SoldierELAW";
					rank = "CORPORAL";
					position[] = {9,0,0};
				};
				class Unit5 {
					side = 0;
					vehicle = "SoldierEMG";
					rank = "Private";
					position[] = {11,0,0};
				};
				class Unit6 {
					side = 0;
					vehicle = "SoldierEB";
					rank = "Private";
					position[] = {13,0,0};
				};
				class Unit7 {
					side = 0;
					vehicle = "SoldierEB";
					rank = "Private";
					position[] = {15,0,0};
				};
			};
		};
	};
};
class CfgAddons {
	access = 2;
	class PreloadBanks {
		class WeaponBIStudio {
			list[] = {"LaserGuided\","ABox\","6G30\","Kozl\","G36A\","MM-1\","Steyr\","Bizon\","XMS\","M41a\"};
		};
		class MiscBIStudio {
			list[] = {"Flags\","VoiceRH\"};
		};
	};
	class PreloadAddons {
		class WeaponBIStudio {
			list[] = {"LaserGuided","6G30","Kozlice","G36A","MM1","Steyr","Bizon","XMS","M41a"};
		};
		class MiscBIStudio {
			list[] = {"Flags1","VoiceRH"};
		};
		class ResistanceBIStudio {
			list[] = {"Noe"};
		};
	};
};
//};
