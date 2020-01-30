/*
The "TZK_Objects" AddOn defines objects used in @TZK CTI missions, Made by excellent CTI-Commander, CTI-Player and CTI-Modifier naming "IF". Version 1.01.


Some objects are just redefined, set no change on parameters but rename their class name. There are few reasons for this:
First, it's hard to unify all player's OFP 1.96 games. Hence files in AddOns or res\AddOns may be different, and, in addition, if the dedicated server used the function "chechfiles[]" on these files, a long files' list might be displayed in MULTIPLAYER games. Redefining ammos, magazines, weapons and vehicles in these AddOns and giving them different class names can unify these objects' parameters, and server only need to check this AddOn's PBO file. However, this AddOn didn't copy models and textures packaged in official AddOns, so it's necessary to keep those AddOns' model and texture files original.
As for config.bin's unifying, it's a piece of cake. Just put a credible original config.bin in CTImod\bin and ask the dedicated server to check config.bin and config.cpp in CTImod\bin, Res\bin and \bin, then everything would be OK.
Second, CTI missions are still evolving. It's possible to adjust any objects' parameters. Redefinition them in one PBO file is a preparation for future CTI updates. For example, markers defined in "cti_markers" are a little larger than actual requirement, and more color are needed to show a more colorful map-marking. So copying all codes from cti_markers to this fire, redefining markers' size and defining new colors can make it easier for debugging and unifying AddOns. 
Third, in some IncomingMissile warning system, AA ammos' class name are shown. Rename them can make it clearer for pilot to know which kind of AA is coming.

Some redefinations are set "scope = private" for inherit.


Critical objects used in @TZK CTI missions have the postfix "_xj101", which means personal naming and version of CTI missions and AddOns. Some objects are modified basing AddOns CR09, Tank_1.2N, RKTHunter, PackMortar, cti_markers, gdtcti and some other AddOns packed in @xrOFP. Great thankful to their authors.
These objects' parameters are adjusted to fit CTI battle, basing on author's CTI experience. Version number is necessary, make sure different classes have different class name, so that parameters won't conflict or cover each other.

You might contact with "IF" by sending Email to 2105711431@QQ.com if you want to join our CTI games or to ask for a signature in AddOn and CTI missions' briefing as AddOn's or CTI missions' author.
*/

#define TEast 0
#define TWest 1
#define TGuerrila 2
#define TCivilian 3
#define TSideUnknown 4
#define TEnemy 5
#define TFriendly 6
#define TLogic 7

#define true 1
#define false 0


#define private 0
#define protected 1
#define public 2

#define CanSeeRadar 1
#define CanSeeEye 2
#define CanSeeOptics 4
#define CanSeeEar 8
#define CanSeeCompass 16 
#define CanSeeRadarC CanSeeRadar+CanSeeCompass
#define CanSeeAll 31
#define CanSee_VehicleWithRadar CanSeeEye+CanSeeEar+CanSeeOptics+CanSeeCompass+CanSeeRadar
#define CanSee_VehicleNoRadar CanSeeEye+CanSeeEar+CanSeeOptics+CanSeeCompass


/*
	TZK_Objects_101 is CfgPatches class name
	_xj101 is postfix of class name
	TZK_Objects_1.01 is file name of AddOn and vehicleClass name shown in OFP Mission Editor
*/
class CfgPatches
{
	class TZK_Objects_101
	{
		name = "TZK_Objects_1.01";
		author = "IF";
		units[] = {};
		weapons[] = {};
		requiredAddons[] = 
		{
			6G30, AH64, BIS_Resistance, BIS_WeaponPack, Bizon, BMP2, Bradley, BRDM,
			G36a, HMMWV, LaserGuided, MM1, Steyr, Su25, Vulcan, XMS,
			CWKZodiac, EUDEF_MP5SD6soldier, JahSG551, KEGak107, KSVK, kyl_kasap, mVSS, RFSVUa, RKTMod, VNgroza1sscope,
			PackMortar,
			DrKk_MH6, GDTCTI_Tomahawk,
			C8X_RUSS_TZK, C8X_Magazines_TZK, ICP_weaponpack_TZK, JAM_Magazines_TZK, JAM_Sounds_TZK, LSR_uswp_TZK, Mi2NO
		};
		requiredVersion = 1.96;
	};
};

class CfgModels
{
	class Default
	{
		sections[] = {};
		sectionsInherit="";
	};
	class Air: default {};
	class Helicopter: Air
	{
		sectionsInherit="Vehicle";
		sections[]=
		{
			"velka vrtule staticka",
			"velka vrtule blur",
			"mala vrtule staticka",
			"mala vrtule blur"
		};
	};

	class DrKk_MH6: Helicopter {};

};

class CfgAmmo
{
	#include "TZK_Objects_1.01\ammo_inherit.hpp"
	//Tank1.2N
	class M1Sabot_xj101: Shell120
	{
		hit=575; indirectHit=10; indirectHitRange=5;
		minRange=1; minRangeProbab=0.95;
		midRange=1000; midRangeProbab=0.95;
		maxRange=2500; maxRangeProbab=0.95;
		soundHit[]={"Explosions\expl4",100.000008,1};
	};
	class M1Heat_xj101: Heat120
	{
		airLock=0;
		hit=350; indirectHit=150; indirectHitRange=8;
		minRange=5; minRangeProbab=0.95;
		midRange=1000; midRangeProbab=0.95;
		maxRange=2500; maxRangeProbab=0.95;
		soundHit[]={"Explosions\expl4",100.000008,1};
	};
	class T80Sabot_xj101: Shell120
	{
		hit=575; indirectHit=10; indirectHitRange=5;
		minRange=1; minRangeProbab=0.95;
		midRange=1000; midRangeProbab=0.95;
		maxRange=2500; maxRangeProbab=0.95;
		soundHit[]={"Explosions\expl4",100.000008,1};
	};
	class T80Heat_xj101: Heat120
	{
		airLock=0;
		hit=350; indirectHit=150; indirectHitRange=8;
		minRange=5; minRangeProbab=0.95;
		midRange=1000; midRangeProbab=0.95;
		maxRange=2500; maxRangeProbab=0.95;
		soundHit[]={"Explosions\expl4",100.000008,1};
	};
	class CoaxW_xj101: Bullet7_6
	{
		hit=10;
		tracerColor[]={1,0.25000,0.12500,0.5};
		minRange=1; minRangeProbab=1;
		midRange=800; midRangeProbab=0.5;
		maxRange=1600; maxRangeProbab=0.1;
	};
	class 50calW_xj101: Bullet12_7
	{
		airLock=1;
		hit=35;
		tracerColor[]={1,0.25000,0.12500,1};
		minRange=1; minRangeProbab=1;
		midRange=1000; midRangeProbab=0.5;
		maxRange=2000; maxRangeProbab=0.1;
	};
	class CoaxE_xj101: Bullet7_6
	{
		hit=10;
		tracerColor[]={0.12500,0.25000,1,0.5};
		minRange=1; minRangeProbab=1;
		midRange=800; midRangeProbab=0.5;
		maxRange=1600; maxRangeProbab=0.1;
	};
	class 50calE_xj101: Bullet12_7
	{
		airLock=1;
		hit=35;
		tracerColor[]={0.12500,0.25000,1,1};
		minRange=1; minRangeProbab=1;
		midRange=1000; midRangeProbab=0.5;
		maxRange=2000; maxRangeProbab=0.1;
	};
	//Res\AddOns, O.pbo and xrofp
	class EUDEF_MP5SD6_MAGx_xj101: BulletSingle
 	{
		hit=12;indirectHit=0.1;indirectHitRange=0.1;
	};
	class JahSDSingleW_xj101: BulletSilencedSingleW
	{
		hit=8; indirectHit=1; indirectHitRange=0.100000;
		minRange=1; minRangeProbab=0.100000;
		midRange=200; midRangeProbab=0.800000;
		maxRange=900; maxRangeProbab=0.050000;
		visibleFire=0.7500;
		audibleFire=0.7500;
		visibleFireTime=2
		tracerColor[]={0,0,0,0.005000};
		tracerColorR[]={0,0,0,0.005000};
	};
	class JahSDBurstW_xj101: BulletSilencedBurstW
	{
		hit=8; indirectHit=1; indirectHitRange=0.100000;
		minRange=1; minRangeProbab=0.100000;
		midRange=200; midRangeProbab=0.800000;
		maxRange=900; maxRangeProbab=0.050000;
		visibleFire=1.0000;
		audibleFire=1.0000;
		visibleFireTime=3
		tracerColor[]={0,0,0,0.005000};
		tracerColorR[]={0,0,0,0.005000};
	};
	class KEGAK107Bullet_xj101 : BulletSingleE
	{
		hit=9;
		indirectHit=1;
		indirectHitRange=0.100000;		
	};
	class KSVK_xj101: BulletSingle
	{
		hit=90; indirectHit=6; indirectHitRange=0.100000;
   		explosive=0;
   		cost=40;
   		maxSpeed=870;
   		minRange=1; minRangeProbab=0.300000;
   		midRange=750; midRangeProbab=0.600000;
   		maxRange=2000; maxRangeProbab=0.90000;
		visibleFire=300; audibleFire=2000; visibleFireTime=2;
	};				  
	class Kasap_Ammo_xj101: GrenadeHand
	{
		hit=350;
		indirectHit=150;
		indirectHitRange=6;
		model="\kyl_kasap\kasapanos.p3d";
		soundHit1[]={"\kyl_kasap\Boom2.ogg",db40,1};
		soundHit2[]={"\kyl_kasap\Boom3.ogg",db40,1};
		soundHit3[]={"\kyl_kasap\Boom4.ogg",db40,1};
		soundHit4[]={"\kyl_kasap\Boom5.ogg",db40,1};
		hitGround[]={soundHit1,0.25,soundHit2,0.25,soundHit3,0.25,soundHit4,0.25};
		hitMan[]={soundHit1,0.25,soundHit2,0.25,soundHit3,0.25,soundHit4,0.25};
		hitArmor[]={soundHit1,0.25,soundHit2,0.25,soundHit3,0.25,soundHit4,0.25};
		hitBuilding[]={soundHit1,0.25,soundHit2,0.25,soundHit3,0.25,soundHit4,0.25};
	};
	class SP6_xj101: BulletSilencedSingle
	{
		hit=11;
		model="shell";
		simulation="shotBullet";
		simulationStep=0.050000;
		soundFly[]={"objects\bulletnoise",0.251189,0.700000};
		explosive=0;
		minRange=1; minRangeProbab=0.100000;
		midRange=200; midRangeProbab=0.800000;
		maxRange=900; maxRangeProbab=0.050000;
		visibleFire=0.035000;
		audibleFire=0.035000;
		visibleFireTime=0;
		tracerColor[]={0,0,0,0.000000};
		tracerColorR[]={0,0,0,0.000000};
		soundHit1[]={"weapons\bulletricochet1",0.031623,1};
		soundHit2[]={"weapons\bulletricochet2",0.031623,1};
		soundHit3[]={"weapons\bulletricochet3",0.031623,1};
		soundHitMan1[]={"weapons\bullethitman1",0.012589,1};
		soundHitMan2[]={"weapons\bullethitman2",0.012589,1};
		soundHitArmor1[]={"weapons\small_impact1",0.031623,1};
		soundHitArmor2[]={"weapons\Big_Impact2",0.031623,1};
		soundHitBuilding1[]={"weapons\bulletricochet4",0.031623,1};
		soundHitBuilding2[]={"weapons\bulletricochet5",0.031623,1};
		hitGround[]={"soundHit1",0.330000,"soundHit2",0.330000,"soundHit3",0.330000};
		hitMan[]={"soundHitMan1",0.500000,"soundHitMan2",0.500000};
		hitArmor[]={"soundHitArmor1",0.700000,"soundHitArmor2",0.300000};
		hitBuilding[]={"soundHitBuilding1",0.500000,"soundHitBuilding2",0.500000};
		cartridge="FxCartridge";
		cost=0.700000;
//		initSpeed=520;	
	};
	class Groza1SDammo_xj101: BulletSingleG
	{
		indirectHitRange=0.10000;
		visibleFire=0.0300;
		audibleFire=0.0300;
		visibleFireTime=2;
	};
	class Bizon_Bullet_xj101: BulletSilencedSingle
	{
		hit = 7;
		indirectHit = 1;
		indirectHitRange = 0.1;
	};
	class Bullet4x23_xj101: Bullet4x23
	{
		hit=40
		indirectHit=20
		indirectHitRange=2
		minRange=20
		minRangeProbab=0.800000;
		midRange=500
		midRangeProbab=0.950000;
		maxRange=3000
		maxRangeProbab=0.050000;
		cost=30
		tracerColor[]={0.200000,0.800000,0.100000,0.250000};
		tracerColorR[]={0.200000,0.800000,0.100000,0.250000};
	};
	class Bullet4x20_xj101: Bullet4x20
	{
		access=2
		hit=90
		indirectHit=45
		indirectHitRange=2
		minRange=20
		minRangeProbab=0.800000;
		midRange=500
		midRangeProbab=0.950000;
		maxRange=3000
		maxRangeProbab=0.050000;
		cost=30
		tracerColor[]={0.800000,0.500000,0.100000,0.250000};
		tracerColorR[]={0.800000,0.500000,0.100000,0.250000};
	};
	class Cannon25HE_xj101: ExplosiveBullet 
	{
		hit=30
		indirectHit=15
		indirectHitRange=3
		minRange=20
		minRangeProbab=0.800000;
		midRange=500
		midRangeProbab=0.950000;
		maxRange=3000
		maxRangeProbab=0.050000;
		cost=200;
		soundHit[] = {"\m2a2\double_expl.wss",31.6228,1};
	};	
	class Cannon30HE_BMP2_xj101: ExplosiveBullet
	{
		hit=20
		indirectHit=15
		indirectHitRange=3
		minRange=20
		minRangeProbab=0.800000;
		midRange=500
		midRangeProbab=0.950000;
		maxRange=3000
		maxRangeProbab=0.050000;
		soundHit[] = {"\bmp2\bmp2_expl.wss",31.6228,1};
		cost=40;
	};
	class Cannon30AP_BMP2_xj101: BulletSingle
	{
		hit=70
		indirectHit=5
		indirectHitRange=1
		minRange=20
		minRangeProbab=0.800000;
		midRange=500
		midRangeProbab=0.950000;
		maxRange=3000
		maxRangeProbab=0.050000;
		soundHit[] = {"weapons\Big_Impact2",0.0316228,1};
		cost=80;
	};
	class Cannon30HE_Kamov_xj101: ExplosiveBullet
	{
		hit=20
		indirectHit=10
		indirectHitRange=3
		minRange=20
		minRangeProbab=0.800000;
		midRange=500
		midRangeProbab=0.950000;
		maxRange=3000
		maxRangeProbab=0.050000;
		soundHit[]={"\o\vehl\v80_expl.wss",31.622778,1};
		cost=40
	};
	class Cannon30AP_Kamov_xj101: BulletSingle
	{
		hit=90
		indirectHit=5
		indirectHitRange=1
		minRange=20
		minRangeProbab=0.800000;
		midRange=500
		midRangeProbab=0.950000;
		maxRange=3000
		maxRangeProbab=0.050000;
		soundHit[]={"weapons\Big_Impact2",0.031623,1};
		cost=80
	};
	class HellfireApach_xj101: Hellfire 
	{
		model = "\Apac\hellfire";
	};
	class G36a_Bullet_xj101: BulletSingle
	{
		hit = 11;
		indirectHit = 1;
		indirectHitRange = 0.1;
	};
	class LaserGuidedBomb_xj101: Default
	{
		hit = 5000; indirectHit = 3500; indirectHitRange = 15;
		minRange = 50; minRangeProbab = 0.5;
		midRange = 300; midRangeProbab = 0.95;
		maxRange = 1500; maxRangeProbab = 0.5;
		soundHit[] = {"\LaserGuided\expl2",100,1};
		cost = 20000;
		model = Snake;
		proxyShape = Snake;
		irLock = 0;
		laserLock = 1;
		maxControlRange = 100000;
		maneuvrability = 16;
		sideAirFriction = 0.1;
		simulation = shotMissile;
		maxSpeed = 100;
		initTime = 0;
		thrustTime = 0;
		thrust = 0;
	};
	class Steyr_Bullet_xj101: BulletSingle
	{
		hit = 10;
		indirectHit = 1;
		indirectHitRange = 0.1;
	};

	//RKT, CR09
	class Stinger_xj101: AA
	{
		hit=80; indirectHit=40; indirectHitRange=5;
		minRange=20;minRangeProbab=0.9;
		midRange=1000;midRangeProbab=0.9;
		maxRange=3000;maxRangeProbab=0.9;
		airLock = 1; irlock = 0;
		cost=1000;
		maxControlRange = 3000
		initTime = 0
		maxSpeed = 800
		thrustTime = 3.0
		thrust = 1000
		maneuvrability = 5.0
		soundFly[]={objects\noise,db-20,1};
		soundEngine[]={objects\noise,db-10,1};
		visibleFire=32; audibleFire=32; visibleFireTime=4
	};
	class Strela_xj101: Stinger_xj101 {};
	class RedTop_xj101 : AA
	{
		model=\rkthunter\wep\hunt_redtop_Mesh;
		proxyshape=\rkthunter\wep\hunt_redtop_Mesh;
		hit=170;indirectHit=100;indirectHitRange=10;
		minRange=50; minRangeProbab=0.7;
		midRange=2000; midRangeProbab=0.95;
		maxRange=3000; maxRangeProbab=0.6;
		maneuvrability=50;
		airLock = 1; irlock = 0;
		initTime=0.4;
		thrustTime=500;
		maxControlRange=4000;
		thrust=600;
//		thrust=700;
//		sideAirFriction=2;
		maxSpeed=900;
	};
	class RKTHunter_Bomb_xj101 : LaserGuidedBomb_xj101
	{
		hit=1500; indirectHit=450; indirectHitRange=15;
		minRange=500; minRangeProbab=0.9;
		midRange=800; midRangeProbab=0.95;
		maxRange=1500; maxRangeProbab=0.9;
		model=\rkthunter\wep\hunt_bomb_mesh;
		proxyshape=\rkthunter\wep\hunt_bomb_mesh;
		sideAirFriction = 0.25;
		irLock = true;
		laserLock =false;
		maneuvrability=50.0;
		cost =2000;
	};
 
	class Cannon_Heli_xj101: Bullet4x20_xj101
	{
		hit=30; indirectHit=15; indirectHitRange=2;
		minRange=20; minRangeProbab=0.800000;
		midRange=500;midRangeProbab=0.950000;
		maxRange=3000; maxRangeProbab=0.050000;
		cost=10;
		tracerColor[]={0.7,0.7,0.5,0.25};tracerColorR[]={0.7,0.7,0.5,0.25};
	};	
	class Cannon_20HE_xj101: Cannon30HE_Kamov_xj101
	{
		//Being defined in CR09
		hit=20; indirectHit=10; indirectHitRange=3
		cost = 10;
		airLock = true;
		minRange=20; minRangeProbab=0.800000;
		midRange=500;midRangeProbab=0.950000;
		maxRange=3000; maxRangeProbab=0.050000;
	};
	class Cannon_20AP_xj101: Cannon30AP_Kamov_xj101
	{
		hit=60; indirectHit=6; indirectHitRange=0.5;
		cost = 200;
		airLock = false;
		minRange=20; minRangeProbab=0.800000;
		midRange=500;midRangeProbab=0.950000;
		maxRange=3000; maxRangeProbab=0.050000;

		soundFly[]={objects\bulletnoise,db10,0.7};
		soundHit1[]={weapons\bulletricochet1,db-20,1};
		soundHit2[]={weapons\bulletricochet2,db-20,1};
		soundHit3[]={weapons\bulletricochet3,db-20,1};
		soundHitMan1[]={weapons\bullethitman1,db-28,1};
		soundHitMan2[]={weapons\bullethitman2,db-28,1};
		soundHitArmor1[]={weapons\small_impact1,db10,1};
		soundHitArmor2[]={weapons\Big_Impact2,db10,1};
		soundHitBuilding1[]={weapons\bulletricochet4,db-10,1};
		soundHitBuilding2[]={weapons\bulletricochet5,db-10,1};
	};
	class Cannon_30APHE_xj101: Cannon_20HE_xj101
	{
		hit=200; indirectHit=20; indirectHitRange=2;
	};
	class Bullet30PlaneLGB_xj101 : Bullet30A10
	{
		irLock = 0;
		laserLock = 1;
	};		

	class GuidedAT_APC_xj101: AT3
	{
		hit=780; indirectHit=300; indirectHitRange=2;
		minRange=50;minRangeProbab=0.9;
		midRange=1000;midRangeProbab=0.9;
		maxRange=1500;maxRangeProbab=0.6;
		cost = 1000
		manualControl = false
		maxControlRange = 1000
		maxSpeed = 300
		thrustTime = 3.0
		thrust = 300
		maneuvrability = 3.0
		soundFly[]={objects\noise,db0,db-30,1};
		soundEngine[]={objects\noise,db-20,1};

		visibleFire=32; audibleFire=32; visibleFireTime=4
	};
	class GuidedAT_Heli_xj101: GuidedAT_APC_xj101
	{
		hit=1275; indirectHit=600; indirectHitRange=2;
		minRange=100;minRangeProbab=0.9;
		maneuvrability=5.0;
	};

// Nuclear Missile
	class tomahawk_xj101: Maverick
	{
		//copy from gdtcti
		model="\gdtcti\gdtcti_tomahawk";
		proxyShape="\gdtcti\gdtcti_tomahawk";
		hit=5000;
		indirectHit=5000;
		indirectHitRange=35;
		maxSpeed=50
		initTime=0.2;
		thrustTime=10;
		thrust=350
		maneuvrability=30.0;		
		laserLock = 1;
		soundHit[]={"\TZK_Objects_1.01\Sound\nuke.ogg",db+250,1};
	};
	class Scud_Cluster_xj101 : Grenade
	{
		hit=5000; indirectHit=5000; indirectHitRange=35;
		soundHit[]={"",1,1};
	};


	class MortarShell_xj101: MortarShell
	{
		minRange=45; minRangeProbab=0.600000;
		midRange=240; midRangeProbab=0.750000;
		maxRange=450; maxRangeProbab=0.000000;
		cost = 1;
	};
	class Ammo_12mm7_xj101: Bullet12_7
	{
		hit=20; indirectHit=2; indirectHitRange=0.2;
		minRange=1;minRangeProbab=0.9;
		midRange=250;midRangeProbab=0.9;
		maxRange=500;maxRangeProbab=0.1;
		visibleFire=32; audibleFire=32; visibleFireTime=2
		cost = 10;
	};
	class mortar4Ammo: MortarShell {};
	class Mortar4Ammo_xj101: mortar4Ammo
	{
		cost = 1;
	};

// LSR, JAM, c8x, ICP
	class LSR_Bullet: BulletSingle {};
	class LSR_m24Bullet: LSR_Bullet {};
	class M24Bullet_xj101 : LSR_m24Bullet
	{
   		minRange=1;
		minRangeProbab=0.100000;
   		midRange=400;
   		midRangeProbab=0.300000;
   		maxRange=900;
   		maxRangeProbab=0.90000;
	};
	class ICP_SVD : BulletSniper {};
	class SVDSBullet_xj101 : ICP_SVD
	{
		minRange=1;
		minRangeProbab=0.10;
		midRange=400;
		midRangeProbab=0.30;
		maxRange=900;
		maxRangeProbab=0.90;
	};
	class ICP_BulletMG: Bullet7_6W {};
	class PKM_AMMO_xj101 : ICP_BulletMG
	{
		minRange=1;
		minRangeProbab=0.900000;
		midRange=200;
		midRangeProbab=0.500000;
		maxRange=500;
		maxRangeProbab=0.050000;
	};
	
};
class CfgRecoils
{
	KSVK_xj101[]={0.022000,0,0,0.060000,0.014000,0.020000,0.050000,0.006000,0.060000,0.340000,0,0};
};
class CfgWeapons
{
	#include "TZK_Objects_1.01\weapons_inherit.hpp"

	class M1Gun_xj101: Gun120
	{
		displayName="M256 120mm Smoothbore";
		sound[]={"\TZK_Objects_1.01\Sound\maingun.ogg",0.3,1};
		reloadSound[]={"\TZK_Objects_1.01\Sound\gunreload.ogg",0.5,0.8};
		magazines[]={"M1Sabot_xj101","M1Heat_xj101"};
		aiRateOfFire=0;
		aiRateOfFireDistance=0;
		opticsZoomMin=0.333333;
		opticsZoomMax=0.1;
	};
	class M1Sabot_xj101: Shell120
	{
		displayName="M256 120mm APFSDS";
		displayNameMagazine="M829 APFSDS";
		shortNameMagazine="M829 120mm Sabot";
		ammo="M1Sabot_xj101";
		count=35;
		nameSound="heat";
		initSpeed=1500;
		reloadTime=8;
		sound[]={"\TZK_Objects_1.01\Sound\maingun.ogg",10.000000,1};
		aiRateOfFire=0;
		aiRateOfFireDistance=0;
	};
	class M1Heat_xj101: Heat120
	{
		count=35;
		initSpeed=1500;
		ammo="M1Heat_xj101";
		displayName="M256 120mm HEAT";
		displayNameMagazine="M830 HEAT";
		shortNameMagazine="M830 120mm HEAT";
		nameSound="shell";
		reloadTime=8;
		sound[]={"\TZK_Objects_1.01\Sound\maingun.ogg",10.000000,1};
		aiRateOfFire=0;
		aiRateOfFireDistance=0;
	};
	class T80Gun_xj101: Gun120
	{
		displayName="2A46 120mm Smoothbore";
		sound[]={"\TZK_Objects_1.01\Sound\125mm.ogg",10.000000,1};
		reloadSound[]={"\TZK_Objects_1.01\Sound\gun2reload.ogg",0.25,1};
		magazines[]={"T80Sabot_xj101","T80Heat_xj101"};
		aiRateOfFire=0;
		aiRateOfFireDistance=0;
		opticsZoomMin=0.27777;
		opticsZoomMax=0.08333;
	};
	class T80Sabot_xj101: Shell120
	{
		displayName="2A46 120mm APFSDS";
		displayNameMagazine="BM-42M APFSDS";
		shortNameMagazine="BM-42M APFSDS";
		ammo="T80Sabot_xj101";
		count=35;
		nameSound="heat";
		initSpeed=1500;
		reloadTime=8;
		sound[]={"\TZK_Objects_1.01\Sound\125mm.ogg",10.000000,1};
		aiRateOfFire=0;
		aiRateOfFireDistance=0;
	};
	class T80Heat_xj101: Heat120
	{
		count=35;
		initSpeed=1500;
		ammo="T80Heat_xj101";
		displayName="2A46 120mm HEAT";
		displayNameMagazine="BK-27 HEAT";
		shortNameMagazine="BK-27 HEAT";
		nameSound="shell";
		reloadTime=8;
		sound[]={"\TZK_Objects_1.01\Sound\125mm.ogg",10.000000,1};
		aiRateOfFire=0;
		aiRateOfFireDistance=0;
	};
	class 50calW_xj101: MachineGun12_7
	{
		ammo="50calW_xj101";
		displayName="M2 12.7mm MG";
		displayNameMagazine="M2 AA MG";
		shortNameMagazine="M2 AA MG";
		count=50;
		reloadTime=0.11;
		reloadSound[]={"",1,1};
		sound[]={"\TZK_Objects_1.01\Sound\mg.ogg",4,1};
		reloadMagazineSound[]={"\TZK_Objects_1.01\Sound\mgreload.ogg",0.3,1};
		soundContinuous=0;
		initSpeed=1300;
		flash="gunfire";
		flashSize=1.500000;
		dispersion=0.00125;
		maxLeadSpeed=50;
		aiRateOfFire=0;
		aiRateOfFireDistance=0;
		autoFire=1;
		optics=1;
		autoReload=1;
		magazineReloadTime=1;
	};
	class 50calE_xj101: MachineGun12_7
	{
		ammo="50calE_xj101";
		displayName="NSVT 12.7mm MG";
		displayNameMagazine="NSVT AA MG";
		shortNameMagazine="NSVT AA MG";
		count=50;
		reloadTime=0.11;
		reloadSound[]={"",1,1};
		sound[]={"\TZK_Objects_1.01\Sound\nsvt.ogg",4,1};
		reloadMagazineSound[]={"\TZK_Objects_1.01\Sound\nsvtreload.ogg",0.3,1};
		soundContinuous=0;
		initSpeed=1300;
		flctipc="gunfire";
		flctipcSize=1.500000;
		dispersion=0.00125;
		maxLeadSpeed=50;
		aiRateOfFire=0;
		aiRateOfFireDistance=0;
		autoFire=1;
		optics=1;
		autoReload=1;
		magazineReloadTime=1
	};
	class CoaxW_xj101: MachineGun7_6
	{
		ammo="CoaxW_xj101";
		displayName="M240 Coax";
		displayNameMagazine="M240 Coax";
		shortNameMagazine="M240 Coax";
		count=1000;
		reloadTime=0.175;
		sound[]={"\TZK_Objects_1.01\Sound\gun.ogg",2,1};
		soundContinuous=0;
		initSpeed=900;
		flash="gunfire";
		flashSize=0.900000;
		dispersion=0.00065;
		maxLeadSpeed=50;
		aiRateOfFire=0;
		aiRateOfFireDistance=0;
		autoFire=1;
		optics=1;
	};
	class CoaxE_xj101: MachineGun7_6
	{
		ammo="CoaxE_xj101";
		displayName="PKT 7.62mm Coax";
		displayNameMagazine="PKT Coax";
		shortNameMagazine="PKT Coax";
		count=1000;
		reloadTime=0.175;
		sound[]={"\TZK_Objects_1.01\Sound\emg.ogg",2,1};
		soundContinuous=0;
		initSpeed=900;
		flctipc="gunfire";
		flctipcSize=0.900000;
		dispersion=0.00065;
		maxLeadSpeed=50;
		aiRateOfFire=0;
		aiRateOfFireDistance=0;
		autoFire=1;
		optics=1;
	};

	class EUDEF_MP5SD6_xj101: Riffle
	{
		scopeWeapon = public;
		scopeMagazine = private;
		weaponType = 1; 
		displayName = MP5SD6;
		model ="\EUDEF_MP5SD6\mp5.p3d";
		modelOptics="\EUDEF_MP5SD6\optik.p3d";
		picture="\EUDEF_MP5SD6\display.paa";
		drySound[]={"weapons\M16dry",db-40,1};
		reloadMagazineSound[]={"\EUDEF_MP5SD6\Reload.wav",db-40,1};
		magazines[] = {EUDEF_MP5SD6_MAG_xj101};
		optics=true;
		opticsZoomMin=0.35;
		opticsZoomMax=0.35;
		modes[]={"Single","Three","FullAuto"};
		class Single
		{
			ammo= EUDEF_MP5SD6_MAGx_xj101;
			multiplier=1;
			burst=1;
			displayName="Semi MP5SD6";
			dispersion=0.003;
			sound[]={"\EUDEF_MP5SD6\Singleshot.wav",db0,1};
			soundContinuous=0;
			reloadTime=0.0857142;
			ffCount=1;
			recoil="sniperSingle";
			autoFire=0;
			aiRateOfFire=0.01;
			aiRateOfFireDistance=500;
			useAction=0;
			useActionTitle="";
		};
		class Three
		{
			ammo= EUDEF_MP5SD6_MAGx_xj101;
			multiplier=1;
			burst=3;
			displayName="Burst MP5SD6";
			dispersion=0.005;
			sound[]={"\EUDEF_MP5SD6\Burstshot.wav",db0,1};
			soundContinuous=0;
			reloadTime=0.0857142;
			ffCount=1;
			recoil="MgunBurst3";
			autoFire=0;
			aiRateOfFire=0.01;
			aiRateOfFireDistance=500;
			useAction=0;
			useActionTitle="";
		};
		class FullAuto
		{
			ammo=EUDEF_MP5SD6_MAGx_xj101;
			multiplier=1;
			burst=1;
			displayName="Auto MP5SD6";
			dispersion=0.005;
			sound[]={"\EUDEF_MP5SD6\Autoshot.wav",db0,1};
			soundContinuous=0;
			reloadTime=0.0857142;
			ffCount=1;
			recoil="sniperSingle";
			autoFire=1;
			aiRateOfFire=0.01;
			aiRateOfFireDistance=500;
			useAction=0;
			useActionTitle="";
		};

	};
	class EUDEF_MP5SD6_MAG_xj101: EUDEF_MP5SD6_xj101        
	{		
		scopeWeapon = private;
  		scopeMagazine = public;
		displayName= MP5SD6;
		displayNameMagazine = MP5SD6 Mag;
		shortNameMagazine = EUDEF_MP5SD6_MAG;		
		picture="\dtaExt\equip\m\m_hk.paa";
	};	
	class JahSG551_xj101: Riffle
	{
		scopeWeapon = public;
		scopeMagazine = public;
		model="\JahSG551\sg551_proxy.p3d";
		picture="\JahSG551\w_sg551.pac";
		modelOptics="\JahSG551\optika_sg551.p3d";
		displayName="SG551";
		drySound[]={"weapons\M16Dry",0.003162,1};
		magazines[]={"JahSG551mag_xj101"};
		opticsZoomMin=0.04;
		opticsZoomMax=0.12;
		distanceZoomMin=400;
		distanceZoomMax=80;
		flash="gunfire";
		flashSize=5;
		initSpeed=938;
		opticsFlare= true;
		modes[]= {"Single","Burst","Full"};
		class Single
		{
			ammo="JahSDSingleW_xj101";
			multiplier=1;
			burst=1;
			displayName="SG551";
			dispersion=0.0002000;
			sound[]={"\JahSG551\sg551fire.wav",1.000000,1};
			soundContinuous=0;
			ffCount=1;
			reloadTime=0.100000;
			recoil="riffleSilenced";
			autofire=0;
			aiRateOfFire=5.0000;
			aiRateOfFireDistance = 200;
			UseAction=0;
			useActionTitle="";
		};
		class Burst
		{
			ammo="JahSDBurstW_xj101";
			multiplier=1;
			burst=3;
			displayName="SG551 Burst";
			dispersion=0.0002000;
			sound[]={"\JahSG551\sg551fireb.wav",1.000000,1};
			soundContinuous=0;
			reloadTime=0.100000;
			ffCount=3;
			recoil=riffleSilenced;
			autoFire=0;
			aiRateOfFire=5.0000;
			aiRateOfFireDistance=200;
			useAction= 0;
			useActionTitle="";
		};
		class Full
		{
			ammo="JahSDBurstW_xj101";
			multiplier= 1;
			burst= 1;
			displayName= "SG551 Full Auto";
			dispersion=0.0008000;
			sound[]={"\JahSG551\sg551fire.wav",1.000000,1};
			soundContinuous=0;
			reloadTime=0.100000;
			ffCount=3;
			recoil="riffleSilenced";
			autoFire=1;
			aiRateOfFire=5.00000;
			aiRateOfFireDistance=200;
			useAction = 0;
			useActionTitle="";
		};
	};
	class JahSG551mag_xj101: JahSG551_xj101
	{
		scopeWeapon=public;
		scopeMagazine=2;
		displayNameMagazine="SG551 Mag";
		shortNameMagazine="SG551";
		picture="\JahSG551\m_sg551.pac";
	};
	class KEGAK107Base_xj101: Riffle
	{
		scopeWeapon=2;
		scopeMagazine=2;
		model="\KEGak107\KEGak107";
		modelOptics="\KEGak107\KEGak107_sight";
		optics=1;
		opticsZoomMin=0.280000;
		opticsZoomMax=0.280000;
		displayName="AK107";
		displayNameMagazine="AK107 Mag.";
		shortNameMagazine="AK107";
		drySound[]={"weapons\AK74Dry",1.000000,1};
		modes[]={"Single","Burst","FullAuto"};
		magazines[]={"KEGAK107Mag_xj101"};
		
		class Single
		{
			ammo="KEGAK107Bullet_xj101";
			multiplier=1;
			burst=1;
			displayName="AK107";
			dispersion=0.000110;
			sound[]={"\KEGak107\single.wav",1.000000,1.00};
			soundContinuous=0;
			reloadTime=0.100000;
			ffCount=1;
			recoil="riffleSingle";
			autoFire=0;
			aiRateOfFire=5.000000;
			aiRateOfFireDistance=500;
			useAction=0;
			useActionTitle="";
		};
		class Burst
		{
			ammo="KEGAK107Bullet_xj101";
			multiplier=1;
			burst=3;
			displayName="AK107 Burst";
			dispersion=0.000875;
			sound[]={"\KEGak107\burst.wav",1.000000,1.00};
			soundContinuous=0;
			reloadTime=0.0700;
			ffCount=3;
			recoil="KEGriffleBalanced";
			autoFire=0;
			aiRateOfFire=5.000000;
			aiRateOfFireDistance=500;
			useAction=0;
			useActionTitle="";
		};
		class FullAuto
		{
			ammo="KEGAK107Bullet_xj101";
			multiplier=1;
			burst=1;
			displayName="AK107 Full Auto";
			dispersion=0.001800;
			sound[]={"\KEGak107\single.wav",1.000000,1.00};
			
			soundContinuous=0;
			reloadTime=0.0667;
			ffCount=30;
			recoil="KEGriffleBalanced";
			autoFire=1;
			aiRateOfFire=5.000000;
			aiRateOfFireDistance=500;
			useAction=0;
			useActionTitle="";
		};
	};	
	class KEGAK107_xj101: KEGAK107Base_xj101
	{		
		picture="\KEGak107\gear1.paa";		
		scopeWeapon=2;
		scopeMagazine=0;
	};
	class KEGAK107Mag_xj101: KEGAK107Base_xj101
	{
		picture="\KEGak107\gear2.paa";	
		scopeWeapon=0;
		scopeMagazine=2;	
	};		
	class KSVK_xj101: SniperRiffle 
	{
		scopeWeapon=2;
		scopeMagazine=0;
		weaponType=1;
		model="\KSVK\KSVK.p3d";
		
		displayName="KSVK 12.7";
		picture="\KSVK\images\KSVK.paa";
		sound[]={\KSVK\sound\ksvksingle.wav,1,1};
        drySound[]={"weapons\AK74Dry",1.000000,1};                
		
		optics = true;
		modelOptics="\KSVK\scope\KSVKscope.p3d";
		///flashSize=2.500000;
		
		opticsZoomMin=0.02; 
		opticsZoomMax=0.1;
		distanceZoomMin=400;
		distanceZoomMax=400;
		
		ammo=KSVK_xj101;
		count=5;
		initSpeed=870;
		multiplier=1;
		division=1;
		burst=1;
		dispersion=0.0007;
		maxLeadSpeed=870;
			
		soundContinuous=0;
		reloadTime=1.7;
		magazineReloadTime=2.5;	
		magazines[]={KSVKmag_xj101};
		recoil=KSVK_xj101;
		autoFire=0;
		autoReload=0;
		
		aiRateOfFire=2.0;
		aiRateOfFireDistance=1700;
		aiDispersionCoefX=0.000009;
		aiDispersionCoefY=0.000007;
		threat[]={1,0.5,0.1};
		enableAttack=1;
		
		useAction=0;
		useActionTitle="";
	};	
	class KSVKmag_xj101: KSVK_xj101
	{
		displayNameMagazine = KSVKmag;
		shortNameMagazine = KSVKmag;
		picture="\KSVK\images\KSVKMag.paa";
		scopeWeapon=0;
     	scopeMagazine=2;
	};
	class KasaThrow_xj101: Throw
	{
		magazines[] = {SmokeShell,SmokeShellRed,SmokeShellGreen,Kasap_xj101,Handgrenade};
	};
	class Kasap_xj101: GrenadeLauncher
	{
		scopeWeapon = private;
		scopeMagazine = public;
		ammo=Kasap_Ammo_xj101;
		displayName="Kasapanos 5kg";
		displayNameMagazine="Kasapanos 5kg";
		shortNameMagazine=kasap;
		initSpeed = 17;
		maxLeadSpeed = 6;
		reloadTime = 3;
		count = 1;
		sound[]={"\kyl_kasap\Throw.ogg",db-60,1};
		picture="\kyl_kasap\kyl_kasapanos.jpg";
	};
	class mVSS_xj101: SVDDragunov
	{ 
		scopeWeapon=2; 
		scopeMagazine=2; 
		model="\mVSS\mVSS"; 
		picture="\mVSS\vss.jpg"; 
		modelOptics="\mVSS\optika";
		optics = true;
		opticsZoomMin=0.080000;
		opticsZoomMax=0.080000;
		distanceZoomMin=400;
		distanceZoomMax=400;
		flashSize=0;
		count=20;
		displayName="VSS";
		displayNameMagazine="VSS mag";
		shortNameMagazine="VSS mag";
		initSpeed=938;
		drySound[]={"weapons\AK74Dry",0.003162,1}; 
		magazines[]={"mVSSmag_xj101"}; 
		modes[]={"Single","Fullauto"}; 
		class Single 
		{ 
			ammo="sp6_xj101"; 
			multiplier=1; 
			burst=1; 
			displayName="VSS"; 
			dispersion=0.0020000000; 
			sound[]={"\mVSS\vss.wav",0.000316,1}; 
			soundContinuous=0; 
			reloadTime=0.100000; 
			ffCount=1; 
			recoil="riffleSilenced";
			autoFire=0; 
			aiRateOfFire=5.000000; 
			aiRateOfFireDistance=50; 
			useAction=0; 
			useActionTitle=""; 
		};
		class FullAuto 
		{ 
			ammo="sp6_xj101"; 
			multiplier=1; 
			burst=1; 
			dispersion=0.004000001;
			displayName="VSS Auto"; 
			sound[]={"\mVSS\vss.wav",0.000316,1}; 
			soundContinuous=0; 
			reloadTime=0.100000; 
			ffCount=30; 
			recoil="riffleBurst3";
			autoFire=1; 
			aiRateOfFire=5.000000; 
			aiRateOfFireDistance=100; 
			useAction=0; 
			useActionTitle=""; 
		};  
	}; 
	class mVSSmag_xj101: mVSS_xj101
	{
		scopeWeapon=0;
		scopeMagazine=2;
		displayNameMagazine="VSS mag";
		shortNameMagazine="VSS mag";
		picture="\mVSS\vssmag.jpg";
	};
	class RFSVUa_xj101:SVDDragunov
	{
		modelOptics="\RFSVUa\optika.p3d";
		picture="\RFSVUa\SVU.jpg";
   		model="\RFSVUa\RFSVUa.p3d";
		drySound[]={"weapons\AK74Dry",1.000000,1};
		reloadMagazineSound[]={"\RFSVUa\reload.wav",2.000000,1};
		displayName="SVU-A";
		displayNameMagazine="SVUa Mag";
		shortNameMagazine="SVUa";
		modes[]={"Single","FullAuto"};
		magazines[]={"RFSVUAmag_xj101"};

		class Single
		{
			ammo="BulletSniperE";
			multiplier=1;
			burst=1;
			displayName="SVU-A";
			dispersion=0.000110;
			sound[]={\RFSVUa\single.wav,1,1};
			soundContinuous=0;
			reloadTime=0.130000;
			ffCount=1;
			recoil="riffleSingle";
			autoFire=0;
			aiRateOfFire=5.000000;
			aiRateOfFireDistance=500;
			useAction=0;
			useActionTitle="";
		};		
		class FullAuto
		{
			ammo="BulletSniperE";
			multiplier=1;
			burst=1;
			displayName="SVU-A Full Auto";
			dispersion=0.000800;
			sound[]={\RFSVUa\single.wav,1,1};	
			soundContinuous=0;
			reloadTime=0.100000;
			ffCount=30;
			recoil="riffleBurst3";
			autoFire=1;
			aiRateOfFire=5.000000;
			aiRateOfFireDistance=500;
			useAction=0;
			useActionTitle="";
		};
	};
	class RFSVUAmag_xj101: RFSVUa_xj101
	{
		picture="\RFSVUa\svumag.jpg";	
		scopeWeapon=0;
		scopeMagazine=2;
		count=20;
	};
	class VNgroza1sscope_xj101: Riffle
	{
		scopeWeapon=2;
		scopeMagazine=2;
		model="\VNGroza\grozasscope.p3d";
		modelOptics="\VNGroza\Scope\scope.p3d";
		optics=1;
		opticsZoomMin=0.250000;
		drySound[]={"\Sound\weapons\M16dry.wss",0.010000,1};
		picture="\VNGroza\Kuvat\w_grozasscope.paa";
		opticsZoomMax=0.250000;
		displayName="Groza-1 SD + scope";
		displayNameMagazine="Groza-1 SD Mag.";
		shortNameMagazine="Groza1SDmag";
		modes[]={"Single","Burst","FullAuto"};
		magazines[]={"VNgroza1sMag_xj101"};
		class Single
		{
			ammo="Groza1SDammo_xj101";
			multiplier=1;
			burst=1;
			displayName="Groza-1 SD";
			dispersion=0.002800;
			sound[]={"\VNGroza\Sounds\grozas.wav",0.050000,1};
			soundContinuous=0;
			reloadTime=0.100000;
			ffCount=1;
			recoil="riffleSingle";
			autoFire=0;
			aiRateOfFire=5.000000;
			aiRateOfFireDistance=500;
			useAction=0;
			useActionTitle="";
		};
		class Burst
		{
			ammo="Groza1SDammo_xj101";
			multiplier=1;
			burst=3;
			displayName="Groza-1 SD Burst";
			dispersion=0.00340;
			sound[]={"\VNGroza\Sounds\grozasb.wav",0.050000,1};
			soundContinuous=0;
			reloadTime=0.100000;
			ffCount=3;
			recoil="riffleBurst3";
			autoFire=0;
			aiRateOfFire=5.000000;
			aiRateOfFireDistance=500;
			useAction=0;
			useActionTitle="";
		};
		class FullAuto
		{
			ammo="Groza1SDammo_xj101";
			multiplier=1;
			burst=1;
			displayName="Groza-1 SD Auto";
			dispersion=0.0051000;
			sound[]={"\VNGroza\Sounds\grozas.wav",0.050000,1};
			soundContinuous=0;
			reloadTime=0.100000;
			ffCount=30;
			recoil="riffleBurst3";
			autoFire=1;
			aiRateOfFire=5.000000;
			aiRateOfFireDistance=500;
			useAction=0;
			useActionTitle="";
		};
	};
	class VNgroza1sMag_xj101: VNgroza1sscope_xj101
	{
		picture="\VNGroza\Kuvat\m_groza.paa";
		model="\VNGroza\grozas.p3d";
		modelOptics="\data3d\optika_m16.p3d";
		opticsZoomMin=0.350000;
		opticsZoomMax=0.350000;
		displayName="Groza-1 SD";
	};
	class 6G30Base_xj101: GrenadeLauncher
	{
		scopeWeapon = 1;
		scopeMagazine = 1;
		weaponType = "1 + 	16";
		magazineType = "4 * 			256";
		displayName = $STR_DN_6G30;
		displayNameMagazine = $STR_MN_6G30;
		shortNameMagazine = $STR_SN_6G30;
		count = 6;
		reloadTime = 0.5;
		magazineReloadTime = 12;
		model = "\6g30\6g30";
		modelOptics = "\6g30\optika_6g30";
		picture = "\6g30\6g30.paa";
		revolving = buben;
		revolvingAxis = osa_buben;
	};
	class 6G30Magazine_xj101: 6G30Base_xj101
	{
		scopeMagazine = 2;
		picture = "\6g30\m_6g30.paa";
	};
	class 6G30_xj101: 6G30Base_xj101
	{
		scopeWeapon = 2;
		magazines[] = {6G30Magazine_xj101};
	};	
	class BizonBase_xj101: Riffle 
	{
		scopeWeapon = 1;
		scopeMagazine = 1;
		model = "\Bizon\Bizon";
		modelOptics = "\Bizon\optika_Bizon";
		picture = "\bizon\w_bizon.paa";
		count = 64;
		optics = 1;
		opticsZoomMin = 0.35;
		opticsZoomMax = 0.35;
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		displayName = $STR_DN_ADD_BIZON;
		displayNameMagazine = $STR_DN_ADD_BIZON_MAG;
		shortNameMagazine = $STR_DN_ADD_BIZON;
		drySound[] = {"weapons\M16dry",0.00316228,1};
		modes[] = {Single,Fullauto};
		class Single
		{
			ammo = Bizon_Bullet_xj101;
			multiplier = 1;
			burst = 1;
			displayName = $STR_DN_ADD_BIZON;
			dispersion = 0.01;
			sound[] = {"\Bizon\bizon",0.000316228,1};
			soundContinuous = 0;
			reloadTime = 0.1;
			ffCount = 1;
			recoil = riffleSilenced;
			autoFire = 0;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 500;
			useAction = 0;
			useActionTitle = "";
		};
		class FullAuto
		{
			ammo = Bizon_Bullet_xj101;
			multiplier = 1;
			burst = 1;
			displayName = $STR_DN_ADD_BIZON_AUTO;
			dispersion = 0.015;
			sound[] = {"\Bizon\bizon",0.000316228,1};
			soundContinuous = 0;
			reloadTime = 0.07;
			ffCount = 1;
			recoil = riffleSilenced;
			autoFire = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 500;
			useAction = 0;
			useActionTitle = "";
		};
	};
	class BizonMag_xj101: BizonBase_xj101 
	{
		scopeMagazine = 2;
		picture = "\Bizon\m_bizon.paa";
	};
	class Bizon_xj101: BizonBase_xj101
	{
		scopeWeapon = 2;
		magazines[] = {BizonMag_xj101};
	};
	class HellfireLauncherApach_xj101: HellfireLauncher
	{
		ammo = HellfireApach_xj101;
		displayName = $STR_DN_AH64Ammo;
		displayNameMagazine = $STR_MN_AH64Ammo;
		shortNameMagazine = $STR_SN_AH64Ammo;
		count = 8;
	};
	class HellfireLauncherKamov_xj101: HellfireLauncherHind
	{
		ammo="AT6";
		displayName="$STR_DN_AT6";
		displayNameMagazine="$STR_MN_AT6";
		shortNameMagazine="$STR_SN_AT6";
		count=12
		initSpeed=30
	};
	class Rocket57x40Kamov_xj101: Rocket57x64
	{
		ammo="Rocket57";
		displayName="$STR_DN_ROCKET_57";
		displayNameMagazine="$STR_MN_ROCKET_57";
		shortNameMagazine="$STR_SN_ROCKET_57";
		count=40
	};
	class HellfireLauncherBMP2_xj101: AT3Launcher
	{
		count = 8;
		reloadTime = 30;
		displayName = $STR_DN_ADD_BMP2_AT;
		displayNameMagazine = $STR_DN_ADD_BMP2_AT;
		shortNameMagazine = $STR_DN_ADD_BMP2_AT;
	};	
	class Cannon30HE_BMP2_xj101: Default
	{
		scopeWeapon = 0;
		scopeMagazine = 2;
		primary = 0;
		autoFire = 1;
		shotFromTurret = 1;
		displayName = $STR_DN_ADD_BMP2_HE;
		displayNameMagazine = $STR_DN_ADD_BMP2_HE;
		shortNameMagazine = $STR_DN_ADD_BMP2_HE;
		nameSound = shell;
		ammo = Cannon30HE_BMP2_xj101;
		count = 250;
		multiplier = 2;
		reloadTime = 0.18;
		initSpeed = 1000;
		sound[] = {"\bmp2\bmp2_cannon",3.16228,1};
		flashSize = 1.1;
		maxLeadSpeed = 450;
		optics = 1;
		ffCount = 1;
	};
	class Cannon30AP_BMP2_xj101: Cannon30HE_BMP2_xj101
	{
		shotFromTurret = 1;
		ammo = Cannon30AP_BMP2_xj101;
		displayName = $STR_DN_ADD_BMP2_AP;
		displayNameMagazine = $STR_DN_ADD_BMP2_AP;
		shortNameMagazine = $STR_DN_ADD_BMP2_AP;
		nameSound = heat;
	};
	class Cannon30_BMP2_xj101: Default
	{
		scopeWeapon = 2;
		scopeMagazine = 0;
		shotFromTurret = 1;
		displayName = $STR_DN_GUN;
		sound[] = {"\bmp2\bmp2_cannon",3.16228,1};
		reloadSound[] = {"Weapons\reload",0.000316228,1};
		backgroundReload = 1;
		ffMagnitude = 1;
		ffFrequency = 5;
		magazines[] = {Cannon30HE_BMP2_xj101,Cannon30AP_BMP2_xj101};
	};
	class Cannon30HE_Kamov_xj101: Default
	{
		scopeWeapon=0
		scopeMagazine=2
		primary=0
		autoFire=1
		shotFromTurret=1
		displayName="$STR_DN_OUT_V80_HE";
		displayNameMagazine="$STR_DN_OUT_V80_HE";
		shortNameMagazine="$STR_DN_OUT_V80_HE";
		nameSound="shell";
		ammo="Cannon30HE_Kamov_xj101";
		count=250
		multiplier=2
		reloadTime=0.180000;
		initSpeed=1000
		sound[]={"\o\vehl\v80_cannon",3.162278,1};
		flashSize=1.100000;
		maxLeadSpeed=450
		optics=1
		ffCount=1
	};
	class Cannon30AP_Kamov_xj101: Cannon30HE_Kamov_xj101
	{
		shotFromTurret=1
		ammo="Cannon30AP_Kamov_xj101";
		displayName="$STR_DN_OUT_V80_AP";
		displayNameMagazine="$STR_DN_OUT_V80_AP";
		shortNameMagazine="$STR_DN_OUT_V80_AP";
		nameSound="heat";
	};
	class Cannon30_Kamov_xj101: Default
	{
		scopeWeapon=2
		scopeMagazine=0
		shotFromTurret=1
		displayName="$STR_DN_GUN";
		sound[]={"\o\vehl\v80_cannon",3.162278,1};
		reloadSound[]={"Weapons\reload",0.000316,1};
		backgroundReload=1
		ffMagnitude=1
		ffFrequency=5
		magazines[]={"Cannon30AP_Kamov_xj101","Cannon30HE_Kamov_xj101"};
	};
	class G36aBase_xj101: Riffle
	{
		scopeWeapon = 2;
		scopeMagazine = 2;
		model = "\G36A\G36";
		modelOptics = "\G36A\G36_optics";
		picture = "\G36A\w_g36.paa";
		optics = 1;
		opticsZoomMin = 0.28;
		opticsZoomMax = 0.28;
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		displayName = $STR_DN_ADD_G36;
		displayNameMagazine = $STR_DN_ADD_G36_AMMO;
		shortNameMagazine = $STR_DN_ADD_G36_AMMO;
		drySound[] = {"weapons\M16dry",0.00316228,1};
		magazines[] = {G36a_xj101};
		modes[] = {Single,Burst,Fullauto};
		class Single
		{
			ammo = G36a_Bullet_xj101;
			multiplier = 1;
			burst = 1;
			displayName = $STR_DN_ADD_G36;
			dispersion = 0.0002;
			sound[] = {"\G36A\g36a.wss",1,1};
			soundContinuous = 0;
			reloadTime = 0.1;
			ffCount = 1;
			recoil = riffleSingle;
			autoFire = 0;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 500;
			useAction = 0;
			useActionTitle = "";
		};
		class Burst 
		{
			ammo = G36a_Bullet_xj101;
			multiplier = 1;
			burst = 3;
			displayName = $STR_DN_ADD_G36_BURST;
			dispersion = 0.001;
			sound[] = {"\G36A\g36a_burst",1,1};
			soundContinuous = 0;
			reloadTime = 0.1;
			ffCount = 3;
			recoil = riffleBurst3;
			autoFire = 0;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 500;
			useAction = 0;
			useActionTitle = "";
		};
		class FullAuto 
		{
			ammo = G36a_Bullet_xj101;
			multiplier = 1;
			burst = 1;
			displayName = "G36 Auto";
			dispersion = 0.0003;
			sound[] = {"\G36A\g36a_full",1,1};
			soundContinuous = 0;
			reloadTime = 0.07;
			ffCount = 1;
			recoil = riffleBurst3;
			autoFire = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 500;
			useAction = 0;
			useActionTitle = "";
		};
	};
	class G36aMag_xj101: G36aBase_xj101
	{
		scopeMagazine = 2;
		picture = "\G36a\m_G36.paa";
	};
	class G36a_xj101: G36aBase_xj101
	{
		scopeWeapon = 2;
		magazines[] = {G36aMag_xj101};
	};
	class LaserGuidedBombLauncher_xj101: HellfireLauncher
	{
		picture = Hellfire;
		ammo = LaserGuidedBomb_xj101;
		displayName = $STR_DN_LASER_BOMB;
		displayNameMagazine = $STR_DN_LASER_BOMB;
		shortNameMagazine = $STR_DN_LASER_BOMB;
		count = 8;
		reloadTime = 0.5;
		sound[] = {"",0.0316228,1};
		reloadSound[] = {"",0.000316228,1};
		initSpeed = 0;
		aiRateOfFire = 13;
		aiRateOfFireDistance = 2500;
	};
	class HellfireLauncherM2A2_xj101: AT3Launcher
	{
		count = 2;
		reloadTime = 0.5;
		displayName = $STR_DN_TOW;
		displayNameMagazine = $STR_DN_TOW;
		shortNameMagazine = $STR_DN_TOW;
		cost = 20000;
	};
	class Cannon25HE_xj101: Default 
	{
		scopeWeapon = 2;
		scopeMagazine = 2;
		shotFromTurret = 1;
		autoFire = 1;
		magazineReloadTime = 1.5;
		displayName = $STR_DN_ADD_M2A2_25;
		displayNameMagazine = $STR_DN_ADD_M2A2_25;
		shortNameMagazine = $STR_DN_ADD_M2A2_25;
		ammo = Cannon25HE_xj101;
		count = 300;
		reloadTime = 0.14;
		initSpeed = 1000;
		sound[] = {"\m2a2\cannon.wss",3.16228,1};
		flashSize = 1.1;
		maxLeadSpeed = 450;
		optics = 1;
		ffCount = 1;
		multiplier = 2;
	};
	class Mm1Base_xj101: GrenadeLauncher
	{
		scopeWeapon = 1;
		scopeMagazine = 1;
		weaponType = "1 + 	16";
		magazineType = "8 * 			256";
		displayName = $STR_DN_MM1;
		displayNameMagazine = $STR_DN_MM1_MAG;
		shortNameMagazine = $STR_DN_MM1;
		count = 12;
		reloadTime = 0.5;
		magazineReloadTime = 12;
		model = "\MM-1\MM-1";
		modelOptics = "\MM-1\optika_MM-1";
		picture = "\MM-1\mm-1.paa";
		revolving = buben;
		revolvingAxis = osa_buben;
	};
	class MM1Magazine_xj101: Mm1Base_xj101
	{
		scopeMagazine = 2;
		picture = "\MM-1\m_mm1.paa";
	};
	class MM1_xj101: Mm1Base_xj101
	{
		scopeWeapon = 2;
		magazines[] = {MM1Magazine_xj101};
	};	
	class SteyrBase_xj101: Riffle
	{
		scopeWeapon = 1;
		scopeMagazine = 1;
		model = "\steyr\steyr";
		modelOptics = "\steyr\optika_steyr";
		picture = "\Steyr\w_steyr.paa";
		optics = 1;
		opticsZoomMin = 0.28;
		opticsZoomMax = 0.28;
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		displayName = $STR_DN_ADD_STEYR;
		displayNameMagazine = $STR_DN_ADD_STEYR_AMMO;
		shortNameMagazine = $STR_DN_ADD_STEYR_AMMO_SHORT;
		drySound[] = {"weapons\M16dry",0.00316228,1};
		modes[] = {Single,Fullauto};
		class Single
		{
			ammo = Steyr_Bullet_xj101;
			multiplier = 1;
			burst = 1;
			displayName = $STR_DN_ADD_STEYR;
			dispersion = 0.0002;
			sound[] = {"\Steyr\Steyr",1,1};
			soundContinuous = 0;
			reloadTime = 0.1;
			ffCount = 1;
			recoil = riffleSingle;
			autoFire = 0;
			aiRateOfFire = 2.5;
			aiRateOfFireDistance = 500;
			useAction = 0;
			useActionTitle = "";
		};
		class FullAuto 
		{
			ammo = Steyr_Bullet_xj101;
			multiplier = 1;
			burst = 1;
			displayName = $STR_DN_ADD_STEYR_AUTO;
			dispersion = 0.0003;
			sound[] = {"\Steyr\Steyr",1,1};
			soundContinuous = 0;
			reloadTime = 0.07;
			ffCount = 1;
			recoil = riffleBurst3;
			recoilFixed = riffleSingleFixed;
			autoFire = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 500;
			useAction = 0;
			useActionTitle = "";
		};
	};
	class SteyrMag_xj101: SteyrBase_xj101
	{
		scopeMagazine = 2;
		picture = "\Steyr\m_steyr.paa";
	};
	class Steyr_xj101: SteyrBase_xj101 
	{
		scopeWeapon = 2;
		magazines[] = {SteyrMag_xj101};
	};
	class Ch29TLauncher_xj101: MaverickLauncher
	{
		ammo=Ch29T;
		displayName=$STR_DN_CH29T;
		displayNameMagazine=$STR_MN_CH29T;
		shortNameMagazine=$STR_SN_CH29T;
		count=6;
	}; 
	class VulcanCannon_xj101: MachineGun30
	{
		ammo = Bullet4x20_xj101;
		count = 2000;
		multiplier = 4;
		initSpeed = 900;
		flashSize = 1.2;
		reloadTime = 0.15;
		displayName = $STR_DN_VULCAN20;
		displayNameMagazine = $STR_DN_VULCAN20;
		shortNameMagazine = $STR_DN_VULCAN20;
		dispersion = 0.0015;
		maxLeadSpeed = 900;
		aiRateOfFire = 0.3;
		aiRateOfFireDistance = 3000;
	}; 

// Vehicle's AA Launcher	
	class Stinger_xj101: AT3Launcher
	{
		count = 2;
		ammo = Stinger_xj101;
		displayName="Stinger";
		displayNameMagazine="Stinger";
		shortNameMagazine="Stinger";
		reloadTime=1.0;
		magazineReloadTime=5;
		aiRateOfFire=3.0;
		aiRateOfFireDistance=2000;
		maxLeadSpeed=67.5
		sound[]={Weapons\missile,db10,1};
	};
	class StingerT_xj101: Stinger_xj101
	{
		count = 1;
	};
	class Strela_xj101: Stinger_xj101
	{
		ammo = Strela_xj101;
		displayName="Strela";
		displayNameMagazine="Strela";
		shortNameMagazine="Strela";
	};
	class StrelaT_xj101: Strela_xj101
	{
		count = 1;
	};
	class RedTop_xj101: HellfireLauncher
	{
		ammo=RedTop_xj101;
		displayName="RedTop AAM";
		displayNameMagazine="RedTop";
		shortNameMagazine="RedTop";
		count=4;
		initspeed=30;
		reloadTime=2;
		magazineReloadTime=15;
		aiRateOfFire=6;
		aiRateOfFireDistance=2000;
		maxLeadSpeed=2500;
	};
	class RKTHunter_BombRail_xj101: HellfireLauncher
	{
		ammo=RKTHunter_Bomb_xj101;
		displayName="500lb Bomb";
		displayNameMagazine="Bomb";
		shortNameMagazine="Bomb";
		sound[]={"",1,1};
		count=14;
		initspeed=10;
		reloadTime =2;
		aiRateOfFire=10.0;
		aiRateOfFireDistance=0.01;
		maxLeadSpeed=1500;
	};

// LGB Launcher
	class LGBLauncher_xj101: LaserGuidedBombLauncher_xj101
	{
		magazines[] = {Mag_LGB_2_xj101, Mag_LGB_4_xj101, Mag_LGB_8_xj101};
	}; 
	class Mag_LGB_2_xj101: LaserGuidedBombLauncher_xj101
	{
		displayName = "LGB";
		displayNameMagazine = "LGB";
		shortNameMagazine = "LGB";
		ammo = LaserGuidedBomb_xj101;
		count = 2;
		reloadTime = 0.1;
	}; 
	class Mag_LGB_4_xj101: Mag_LGB_2_xj101
	{
		count = 4;
	};
	class Mag_LGB_8_xj101: Mag_LGB_2_xj101
	{
		count = 8;
	};

// Cannon Launcher
	class Cannon_Heli_xj101: VulcanCannon_xj101
	{
		count = 2000;
		magazines[] = {Mag_Heli_2000_xj101};
		magazineReloadTime=1;
		aiDispersionCoefX=10.0;
		aiDispersionCoefY=5.0;
	};
	class Mag_Heli_2000_xj101: VulcanCannon_xj101
	{
		displayName = "Cannon"
		displayNameMagazine = "Cannon"
		shortNameMagazine = "Cannon"
		count = 2000;
		ammo = Cannon_Heli_xj101;
		reloadTime=0.1;
		aiRateOfFire=0.1;
		aiRateOfFireDistance=1000;
		multiplier=1;
		sound[]={"Weapons\automatic_cannon",db10,1};
	};
	class Cannon_20HE_xj101: Cannon30_Kamov_xj101
	{
		magazines[] ={Mag_20HE_800_01_xj101, Mag_20HE_800_03_xj101};
		magazineReloadTime=1.0;
		aiDispersionCoefX=10.0;
		aiDispersionCoefY=10.0;
	};
	class Cannon_20AP_xj101: Cannon30_Kamov_xj101
	{
		magazines[] ={Mag_20AP_200_01_xj101, Mag_20AP_200_03_xj101};
		magazineReloadTime=1.0;
		aiDispersionCoefX=10.0;
		aiDispersionCoefY=10.0;
	}; 
	class Mag_20HE_800_01_xj101: Cannon30HE_Kamov_xj101
	{
		count = 800;
		reloadTime=0.1;
		displayName = "20mm Cannon HE"; displayNameMagazine = "20mm HE"; shortNameMagazine = "20mm HE";
		ammo = Cannon_20HE_xj101;
		aiRateOfFire = 0.1;
		aiRateOfFireDistance = 500;
		multiplier = 1;
	};
	class Mag_20HE_800_03_xj101: Mag_20HE_800_01_xj101
	{
		reloadTime=0.3;
	};
	class Mag_20AP_200_01_xj101: Cannon30AP_Kamov_xj101
	{
		count = 200;
		reloadTime=0.1;
		displayName = "20mm Cannon AP"; displayNameMagazine = "20mm AP"; shortNameMagazine = "20mm AP";
		ammo = Cannon_20AP_xj101;
		aiRateOfFire = 0.1;
		aiRateOfFireDistance = 500;
		multiplier = 1;
	};
	class Mag_20AP_200_03_xj101: Mag_20AP_200_01_xj101
	{
		reloadTime=0.3;
	};
	class Cannon_30APHE_xj101: Cannon_20HE_xj101
	{
		magazines[] ={Mag_30APHE_1200_01_xj101};	
	};
	class Mag_30APHE_1200_01_xj101: Mag_20AP_200_01_xj101
	{
		reloadTime=0.1;
		count = 1200;
		displayName = "30mm AP/HE"; displayNameMagazine = "30mm AP/HE"; shortNameMagazine = "30mm AP/HE";
		ammo = Cannon_30APHE_xj101;
		sound[]={"Weapons\automatic_cannon",db-30,1};
	};
	class MachineGun30PlaneLGB_xj101 : MachineGun30A10Burst
	{
		canlock=2;
		ammo = "Bullet30PlaneLGB_xj101";
	};

// Vehicle's AT Launcher
	class GuidedAT_APC_xj101: AT3Launcher
	{
		count = 2;
		ammo = GuidedAT_APC_xj101;
		displayName="AT";
		displayNameMagazine="AT";
		shortNameMagazine="AT";
		reloadTime=1.0; magazineReloadTime=10;
		aiRateOfFire=4;
		aiRateOfFireDistance=1000;
		sound[]={Weapons\at_launch,db10,1};
	};
	class ATLauncherTank_xj101: AT3Launcher
	{
		magazines[] = {GuidedAT_APC_xj101};
		aiDispersionCoefX=8;
		aiDispersionCoefY=8;
	};
	class GuidedAT_Heli_8_xj101: GuidedAT_APC_xj101
	{
		count = 8;	
		ammo = GuidedAT_Heli_xj101
		reloadTime = 0.5;
		sound[]={Weapons\TOW,db-30,1};
		reloadSound[]={Weapons\missload,db-70,1};
		aiRateOfFire=15.0;
		aiRateOfFireDistance=2000;
	};
	class GuidedAT_Heli_12_xj101: GuidedAT_APC_xj101
	{
		count = 12;	
		ammo = GuidedAT_Heli_xj101
		reloadTime = 0.5;
		sound[]={Weapons\TOW,db-30,1};
		reloadSound[]={Weapons\missload,db-70,1};
		aiRateOfFire=15.0;
		aiRateOfFireDistance=2000;
	};
	class ATLauncherAir_xj101: HellfireLauncher
	{
		magazines[] = {GuidedAT_Heli_8_xj101,GuidedAT_Heli_12_xj101};
		magazineReloadTime=10;
		aiRateOfFire=10.0;
		aiRateOfFireDistance=2000;
		multiplier = 1;
		aiDispersionCoefX=8;
		aiDispersionCoefY=8;
	};

// Tomahawk & Raguda launcher
	class Tomahawk_xj101: MaverickLauncher
	{
		ammo="tomahawk_xj101";
		displayName="BGM-109 Tomahawk";
		displayNameMagazine="BGM-109 Tomahawk";
		shortNameMagazine="BGM-109 Tomahawk";
		count=2
	};
	class Raduga_xj101: Tomahawk_xj101
	{
		displayName="Raduga Kh-65";
		displayNameMagazine="Raduga Kh-65";
		shortNameMagazine="Raduga Kh-65";
	};

	class ZuniLauncherOH_xj101: ZuniLauncher38
	{
		opticsZoomMin = 0.08;
		opticsZoomMax = 0.84;
		count = 14;
		reloadTime = 0.15;
	};	
	class Rocket57x14_xj101: Rocket57x64
	{
		count=14
	};

// 4*Mag's AT/AA Magazine & Launcher
	class CarlGustavIn4_xj101: CarlGustavLauncher
	{
		magazineType = "4 * 256";
		picture = "\dtaExt\equip\m\m_carlgustavlauncher.paa";
		displayName="Carl Gustav* Launcher";
		displayNameMagazine="Carl Gustav*";
		shortNameMagazine="Carl Gustav*";
	};
	class AT4In4_xj101: AT4Launcher
	{
		magazineType = "4 * 256";
		picture = "\dtaExt\equip\m\m_at4launcher.paa";
		displayName="AT4* Launcher";
		displayNameMagazine="AT4*";
		shortNameMagazine="AT4*";
	};
	class AAIn4_xj101: AALauncher
	{
		magazineType = "4 * 256";
		picture = "\dtaExt\equip\m\m_aalauncher.paa";
		displayName="AA* Launcher";
		displayNameMagazine="AA*";
		shortNameMagazine="AA*";
	};
	class 9k32In4_xj101: 9K32Launcher
	{
		magazineType = "4 * 256";
		picture = "\dtaExt\equip\m\m_9k32launcher.paa";
		displayName="9k32 Strela* Launcher";
		displayNameMagazine="9k32 Strela*";
		shortNameMagazine="9k32*";
	};	
	class AT_AALauncherW_xj101: CarlGustavLauncher
	{
		displayName="AT&AA Launcher W";
		magazines[] = {CarlGustavIn4_xj101,AAIn4_xj101,CarlGustavLauncher,AALauncher};
		picture = "\dtaExt\equip\w\w_carlgustavlauncher.paa";
		canlock = 2;
	};
	class AT_AALauncherE_xj101: AT4Launcher
	{
		displayName="AT&AA Launcher E";
		magazines[] = {AT4In4_xj101,9k32In4_xj101,AT4Launcher,9K32Launcher};	
		picture = "\dtaExt\equip\w\w_at4launcher.paa";
		canlock = 2;
	};

// Modified soldier's Mortar, AI will use them more frequency
	class Mortar_xj101: Mortar
	{
		ammo="MortarShell_xj101";
		reloadAction="ManActReloadMagazine";
		picture = "\dtaExt\equip\m\m_mortar.paa";

	};	
	class M16_xj101: M16
	{
		picture = "\dtaExt\equip\w\w_m16.paa";
		magazines[]={"M16","Mortar_xj101"};
	};
	class M4_xj101: M4
	{
		picture = "\dtaExt\equip\w\w_m4.paa";
		magazines[]={"M4","Mortar_xj101"};
	};
	class XMS_xj101: M4_xj101 
	{
		model = "\XMS\XMS";
		modelOptics = "\XMS\optika_XMS";
		picture = "\XMS\w_XMS.paa";
		optics = 1;
		opticsZoomMin = 0.28;
		opticsZoomMax = 0.28;
		displayName = $STR_DN_ADD_XMS;
		displayNameMagazine = $STR_DN_ADD_XMS_AMMO;
		shortNameMagazine = $STR_DN_ADD_XMS;
	};

// StaticMG Magazine
	class StaticMG_12mm7_xj101: Browning
	{
		magazines[] = {Mag_12mm7_100_xj101, Mag_12mm7_1000_xj101};
		magazineReloadTime = 5
		reloadMagazineSound[]={"weapons\m16load",db-70,1};
		aiDispersionCoefX=10.0;
		aiDispersionCoefY=5.0;
		// optics = true;
		// modelOptics="optika_M60_MG";
	};
	class Mag_12mm7_100_xj101: Browning
	{
		count = 100;
		ammo = "Ammo_12mm7_xj101";
		reloadTime = 0.15
		aiRateOfFire=0;
		aiRateOfFireDistance=500;
	};
	class Mag_12mm7_1000_xj101: Mag_12mm7_100_xj101
	{
		count = 1000;
	};

// Mortar Structure Magazine
	class mortar4: Mortar {};
	class Mortar4_xj101: mortar4
	{
        ammo = Mortar4Ammo_xj101;
		count = 5;
		reloadTime=4;
		magazineReloadTime=10;
	};

// LSR, JAM, C8X, ICP
	class LSR_m240: MachineGun7_6Manual {};
	class LSR_M240_xj101: LSR_m240
	{
		weaponType="1 + 16";
	};
    class ICP_PKMMag : MachineGun7_6Manual {};
	class PKM_Mag_xj101 : ICP_PKMMag
	{
		ammo="PKM_AMMO_xj101";
	};
	class PKM_xj101 : PKM_Mag_xj101
	{
		scopeWeapon = public;
		scopeMagazine = private;
		weaponType="1	 + 	16";
		displayName = "PKM";
		picture="\ICP_rfwp\weapics\w_pkm.paa";
		model="\icp_rfwp\icp_pkm.p3d";
		magazines[]={"PKM_Mag_xj101"};
		drySound[]={"weapons\AK74dry",db-40,1};
		reloadMagazineSound[]={"\ICP_rfwp\Sounds\pkreload.wss",0.05,1};
		modelOptics="\ICP_rfwp\pkm_opt.p3d";
		optics = true;
   		opticsZoomMin=0.350000;
   		opticsZoomMax=0.350000;
   		distanceZoomMin=400;
   		distanceZoomMax=400;
		uiPicture="ismg";
		canDrop = true;
	};
	

	class LSR_M24: M21 {};
	class M24_xj101 : LSR_M24
	{
		magazines[] = {"LSR_M24Mag","LSR_M40Mag","HuntingRifleMag","JAM_W762_5mag","M24Mag_xj101"};
		modes[] =  {"Single"};
		class Single
		{
			ammo = "M24Bullet_xj101";
			multiplier = 1;
			burst = 1;
			displayName = "7.62x51 Match";
			soundContinuous =  0;
			sound[] = {"\LSR_uswp\sounds\M24Fire.wss",db+10,1};
			ffCount = 1;
			dispersion = 0.00003;
			reloadTime = 1.100000;
			autofire = 0;
			aiRateOfFire = 5.0000;
			aiRateOfFireDistance = 500;
			UseAction = 0;
			useActionTitle = "";
			recoil = sniperSingle;
		};
	};
	class M24Mag_xj101: M24_xj101
	{
		displayNameMagazine = "7.62x51 5 rd. Clip";
		shortNameMagazine = "7.62x51 5 rd. Clip";
		picture = "\LSR_uswp\weapics\m_M24.paa";
		scopeWeapon = 0;
		scopeMagazine = 2;
		canDrop = 1;
	};

	class ICP_SVD: SVDDragunov {};
	class ICP_SVDS: ICP_svd	{};
	class SVDS_xj101 : ICP_SVDS
	{
		modes[]={"Single"};
		magazines[]={"SVDSMag_xj101"};
		class Single
		{
			ammo="SVDSBullet_xj101";
			multiplier=1;
			burst=1;
			displayName="7.62x54R";
			dispersion=0.00002;
			sound[]={"\ICP_rfwp\sounds\svdfire.wss",1.000000,1.00};
			soundContinuous=0;
			reloadTime=0.400000;
			ffCount=1;
			recoil="sniperSingle";
			recoilFixed="sniperSingle";
			autoFire=0;
			aiRateOfFire=3.000000;
			aiRateOfFireDistance=500;
			useAction=0;
			useActionTitle="";
		};
	};
	class SVDSMag_xj101: SVDS_xj101	
	{
		picture="\ICP_rfwp\weapics\m_svd.paa";
		scopeWeapon=0;
		scopeMagazine=2;	
	};
	

	class JAM_M433grenade: grenadelauncher {};
	class JAM_M433Vest: JAM_M433grenade {};
	class M433Vest_xj101 : JAM_M433Vest
	{
		ammo="Grenade";
		magazineType = 6 * 256;
		reloadTime=5;
	};
	class JAM_VOG25grenade: grenadelauncher {};
	class JAM_VOG25Vest: JAM_VOG25grenade {};
	class VOG25Vest_xj101 : JAM_VOG25Vest
	{
		ammo="Grenade";
		magazineType = 6 * 256;
	};
	class c8xgp25grenade: grenadelauncher {};
	class c8xgp25Vest: c8xgp25grenade {};
	class GP25Vest_xj101 : c8xgp25Vest
	{
		magazineType = 6 * 256;
	};

	class LSR_m16Base : Riffle {};
	class LSR_m16a2 : LSR_m16Base {};
	class LSR_m16a4 : LSR_m16a2 {};
	class LSR_M16a4_M203 : GrenadeLauncher {};
	class M16A4_M203_xj101 : LSR_M16a4_M203
	{
		muzzles[] = {M16Muzzle, M203Muzzle};
		class M16Muzzle : LSR_m16a4
		{
			magazines[] = {"LSR_m16mag","M16","JAM_W556_30Bmag","JAM_W556_30BHDmag"};
		};
		class M203Muzzle : GrenadeLauncher
		{
			displayName="M203";
			modelOptics="\LSR_uswp\opt\opt_m203.p3d";
			optics = 1;
			opticsZoomMin=0.40;
			opticsZoomMax=0.40;
			reloadMagazineSound[]={"\LSR_uswp\sounds\M203_reload.wss",0.010316,1};
			drySound[]={"weapons\M16dry",db-40,1};
			magazines[] = {LSR_M203grenade,LSR_M203Vest,GrenadeLauncher,Flare,FlareGreen,FlareRed,FlareYellow,JAM_M433grenade,JAM_M433Vest,JAM_MarkerGrenades,JAM_MarkerRound,JAM_flareWhite,JAM_flareRed,JAM_flareGreen,JAM_flareYellow, M433Vest_xj101};
		};
	};
	class C8XAK74MBase : Riffle {};
	class C8XAK74Mcobra : C8XAK74MBase {};
	class C8XAK74MGP25cobra : GrenadeLauncher {};
	class AK74MGP25_xj101 : C8XAK74MGP25cobra
	{
		muzzles[] = {AK74MMuzzle, GP25Muzzle};
		class AK74MMuzzle : C8XAK74Mcobra
		{
			magazines[] = {"c8xak74mag"};
		};
		class GP25Muzzle : GrenadeLauncher
		{
			displayName="GP25";
			modelOptics="\c8x_russ\optic_gl.p3d";
			optics = 1;
			opticsZoomMin=0.40;
			opticsZoomMax=0.40;
			reloadMagazineSound[]={"\C8Xmag\sounds\east_g_reload.wss",0.010316,1};
			drySound[]={"weapons\AK74Dry",db-40,1};
			magazines[] = {Flare, FlareGreen, FlareRed, FlareYellow,c8xgp25grenade,c8xgp25vest,grenadelauncher, GP25Vest_xj101};
		};
	};



};

class WeaponCloudsGun {};
class WeaponCloudsMGun: WeaponCloudsGun {};
class CfgVehicleActions
{
	ah64pilot="ah64pilot";
	ah64gunner="ah64gunner";
	CWKZodiacDriverA_xj101 = "CWKZodiacDriverA_xj101";
};
class CfgMovesMC
{
	class Default {};
	class DefaultDie: Default {};
	class States
	{
		class Driver: Default {};
		class ah64Pilot: Driver
		{
			file="\apac\ah64pilotstat.rtm";
			speed=10000000000.000000;
			looped=1
			variantsAI[]={"ah64PilotV1",0.700000,"ah64Pilot"};
			interpolateWith[]={"ah64PilotV1",0.500000};
			equivalentTo="ah64Pilot";
			interpolationSpeed=1
			connectTo[]={"ah64PilotDying",1};
		};
		class ah64PilotV1: ah64Pilot
		{
			file="\apac\ah64pilot.rtm";
			speed="- 4";
			looped=1
		};
		class ah64PilotDying: DefaultDie
		{
			actions="NoActions";
			file="\apac\ah64pilotsmrt.rtm";
			speed="- 1";
			looped=0
			soundEnabled=0
			connectFrom[]={"ah64Pilot",1};
		};
		class ah64PilotDead: ah64PilotDying
		{
			actions="DeadActions";
			file="\apac\ah64pilotsmrt2.rtm";
			speed=10000000000.000000;
			terminal=1
			connectFrom[]={"ah64PilotDying",1};
			connectTo[]={"DeadState",1};
		};
		class ah64Gunner: Driver
		{
			file="\apac\ah64gunnerstat.rtm";
			speed=10000000000.000000;
			looped=1
			variantsAI[]={"ah64GunnerV1",0.700000,"ah64Gunner"};
			interpolateWith[]={"ah64GunnerV1",0.500000};
			equivalentTo="ah64Gunner";
			interpolationSpeed=1
			connectTo[]={"ah64GunnerDying",1};
		};
		class ah64GunnerV1: ah64Gunner
		{
			file="\apac\ah64gunner.rtm";
			speed="- 4";
			looped=1
		};
		class ah64GunnerDying: DefaultDie
		{
			actions="NoActions";
			file="\apac\ah64gunnersmrt.rtm";
			speed="- 1";
			looped=0
			soundEnabled=0
			connectFrom[]={"ah64Gunner",1};
		};
		class ah64GunnerDead: ah64GunnerDying
		{
			actions="DeadActions";
			file="\apac\ah64gunnersmrt2.rtm";
			speed=10000000000.000000;
			terminal=1
			connectFrom[]={"ah64GunnerDying",1};
			connectTo[]={"DeadState",1};
		};

		class pbrdriver: Driver{};
		// zodiac driver **************************
		class CWKZodiacDriverA_xj101: pbrdriver
		{
			file="\cwkzodiac\rtm\cwkZodiacDriver.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]={"cwkzodiacdriverAV1_xj101",0.700000,"cwkzodiacdriverA_xj101"};
			interpolateWith[]={"cwkzodiacdriverAV1_xj101",0.500000};
			equivalentTo="CWKZodiacDriverA_xj101";
			interpolationSpeed=1;
			connectTo[]={"cwkzodiacdriverDyingA_xj101",1};
		};
		class cwkzodiacdriverAV1_xj101: cwkzodiacdriverA_xj101
		{
			file="\cwkzodiac\rtm\cwkZodiacDriver.rtm";
			speed=-4;
			looped=1;
		};
		class cwkzodiacdriverDyingA_xj101: DefaultDie
		{
			actions="NoActions";
			file="\cwkzodiac\rtm\cwkZodiacDriver.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"cwkzodiacdriverA_xj101",1};
		};	
	};
};
class CfgTextureToMaterial
{
	class KamovGlass
	{
		textures[]={"o\vehl\V-80_frontsklo.paa"};
		material="#SpecularGlass";
	};
	class KamovMetal
	{
		textures[]={"\o\vehl\v-80_backwing.pac","\o\vehl\v-80_blade.pac","\o\vehl\v-80_misc1.pac","\o\vehl\v-80_misc2.pac","\o\vehl\v-80_rotor.pac","\o\vehl\v-80_rotor2.pac","\o\vehl\v-80_test4a.pac","\o\vehl\v-80_test4b2.pac","\o\vehl\v-80_testbott4a.pac","\o\vehl\v-80_testbott4b.pac","\o\vehl\v-80_testtop4a.pac","\o\vehl\v-80_testtop4b.pac","\o\vehl\v-80_testwing.pac","\o\vehl\v-80_undergun.pac","\o\vehl\v-80_unguided.pac"};
		material="#Metal";
	};
};

class CfgVehicles
{
	#include "TZK_Objects_1.01\vehicles_inherit.hpp"
// Player Men
	class LeaderW_xj101: SoldierWB
	{
		scope = protected;
		class UserActions
		{
			class MHQBuildMenu
			{
				displayName="MHQ Build Menu";
				position=gunnerview;
				radius=0.01;
				condition="(player == this) && mhqNearby";
				statement="[utMHQ0,150] exec {Player\Dialog BuildMenu.sqs}";
			};
			class MCVBuildMenu
			{
				displayName="MCV Build Menu";
				position=gunnerview;
				radius=0.01;
				condition="(player == this) && MCVNearby";
				statement="[utMCVW,150] exec {Player\Dialog BuildMenu.sqs}";
			};
			class SupBuildMenu
			{
				displayName="Support Vehicle Build Menu";
				position=gunnerview;
				radius=0.01;
				condition="(player == this) && SupNearby";
				statement="[-1,50] exec {Player\Dialog BuildMenu.sqs}";
			};		
		};
	};
	class LeaderE_xj101: SoldierEB
	{
		scope = protected;
		class UserActions
		{
			class MHQBuildMenu
			{
				displayName="MHQ Build Menu";
				position=gunnerview;
				radius=0.01;
				condition="(player == this) && mhqNearby";
				statement="[utMHQ1,150] exec {Player\Dialog BuildMenu.sqs}";
			};
			class MCVBuildMenu
			{
				displayName="MCV Build Menu";
				position=gunnerview;
				radius=0.01;
				condition="(player == this) && MCVNearby";
				statement="[utMCVE,150] exec {Player\Dialog BuildMenu.sqs}";
			};
			class SupBuildMenu
			{
				displayName="Support Vehicle Build Menu";
				position=gunnerview;
				radius=0.01;
				condition="(player == this) && SupNearby";
				statement="[-1,50] exec {Player\Dialog BuildMenu.sqs}";
			};		
		};
	};
	class CommanderW_xj101: OfficerW
	{
		scope = protected;
		class UserActions
		{
			class MHQBuildMenu
			{
				displayName="MHQ Build Menu";
				position=gunnerview;
				radius=0.01;
				condition="(player == this) && mhqNearby";
				statement="[utMHQ0,150] exec {Player\Dialog BuildMenu.sqs}";
			};
			class MCVBuildMenu
			{
				displayName="MCV Build Menu";
				position=gunnerview;
				radius=0.01;
				condition="(player == this) && MCVNearby";
				statement="[utMCVW,150] exec {Player\Dialog BuildMenu.sqs}";
			};
			class SupBuildMenu
			{
				displayName="Support Vehicle Build Menu";
				position=gunnerview;
				radius=0.01;
				condition="(player == this) && SupNearby";
				statement="[-1,50] exec {Player\Dialog BuildMenu.sqs}";
			};		
		};
	};
	class CommanderE_xj101: OfficerE
	{
		scope = protected;
		class UserActions
		{
			class MHQBuildMenu
			{
				displayName="MHQ Build Menu";
				position=gunnerview;
				radius=0.01;
				condition="(player == this) && mhqNearby";
				statement="[utMHQ1,150] exec {Player\Dialog BuildMenu.sqs}";
			};
			class MCVBuildMenu
			{
				displayName="MCV Build Menu";
				position=gunnerview;
				radius=0.01;
				condition="(player == this) && MCVNearby";
				statement="[utMCVE,150] exec {Player\Dialog BuildMenu.sqs}";
			};
			class SupBuildMenu
			{
				displayName="Support Vehicle Build Menu";
				position=gunnerview;
				radius=0.01;
				condition="(player == this) && SupNearby";
				statement="[-1,50] exec {Player\Dialog BuildMenu.sqs}";
			};		
		};
	};
// LAW/AT Sniper
	class LAWSniperW_xj101: SoldierWSniper
	{
		vehicleClass = "TZK_Objects_1.01";
		displayName="LAW Sniper";
		weaponSlots="1	 + 	16	 + 10*		256	 + 2*	4096	 + 	2	 + 4*	32";
		weapons[]={"M21","LAWLauncher","Throw","Put","NVGoggles"};
		magazines[]={"M21","M21","M21","M21","LAWLauncher","LAWLauncher","LAWLauncher"};
		threat[]={1,0.900000,0.100000};
	};
	class ATSniperW_xj101: LAWSniperW_xj101
	{
		displayName="AT Sniper";
		weapons[]={"M21","CarlGustavLauncher","Throw","Put","NVGoggles"};
		magazines[]={"M21","M21","M21","M21","CarlGustavLauncher"};
	};
	class RPGSniperW_xj101: SoldierESniper
	{
		vehicleClass = "TZK_Objects_1.01";
		displayName="RPG Sniper";
		weaponSlots="1	 + 	16	 + 10*		256	 + 2*	4096	 + 	2	 + 4*	32";
		weapons[]={"SVDDragunov","RPGLauncher","Throw","Put","NVGoggles"};
		magazines[]={"SVDDragunov","SVDDragunov","SVDDragunov","SVDDragunov","RPGLauncher","RPGLauncher","RPGLauncher"};
		threat[]={1,0.900000,0.100000};
	};
	class ATSniperE_xj101: RPGSniperW_xj101
	{
		displayName="AT Sniper";
		weapons[]={"SVDDragunov","AT4Launcher","Throw","Put","NVGoggles"};
		magazines[]={"SVDDragunov","SVDDragunov","SVDDragunov","SVDDragunov","AT4Launcher"};
	};

// Tank
	class M1A1_xj101: M1Abrams
	{
		//strengthen M1A1's armor to T80N's level by increasing armorStructural value
		displayName="M1A1"; vehicleClass = "TZK_Objects_1.01";
		armor=1100;
		armorStructural= 2.07;
		threat[]={1, 1, 0.5};
		maxSpeed=65;
		accuracy=1.90;
		class HitEngine {armor=0.8;material=50;name=engine;passThrough=1;};
		class HitHull {armor=0.9;material=50;name=hull;passThrough=1;};
		class HitTurret {armor=1;material=50;name=turet;passThrough=1;};
		class HitGun {armor=1;material=50;name=gun;passThrough=1;};
		class HitLTrack {armor=0.6;material=53;name=pasL;passThrough=1;};
		class HitRTrack {armor=0.6;material=54;name=pasP;passThrough=1;};
		armorHull=1;
		armorTurret=1;
		armorGun=1;
		armorEngine=0.9;
		armorLights=0.4;
		armorTracks=0.6;
		
		brakeDistance= 14;
		camouflage = 8;
		model="M1_abrams.p3d";
		weapons[]={"M1Gun_xj101","MachineGun12_7"};
		magazines[]={"M1Sabot_xj101","M1Heat_xj101","MachineGun12_7","MachineGun12_7"};
		irScanRangeMin = 500
		irScanRangeMax = 4000
		irScanToEyeFactor = 0.616
		irScanGround = true;
		fuelCapacity = 700;
		class EventHandlers
		{
			hit = "_this exec ""\TZK_Objects_1.01\skrypt\hit.sqs""";
			incomingMissile = "if ((_this select 0)==(_this select 0)) then {[_this] exec {\TZK_Objects_1.01\skrypt\alert.sqs}}";
		}; 
	};
	class M1A1_Art_xj101: M1A1_xj101
	{
		weapons[]={"M1Gun_xj101","MachineGun12_7"};
		magazines[]={"M1Heat_xj101","M1Heat_xj101","MachineGun12_7","MachineGun12_7"};
		armor=1138;
		armorStructural= 2;
		displayName="M1A1_Art";
		class UserActions
		{
			class BulletCamTurnON
			{
				displayName="BulletCam Turn ON";
				position="pos gunner";
				radius=5;
				condition="(player == gunner this) && !(bTrackBullet)";
				statement="[] exec {\TZK_Objects_1.01\Scripts_CTI\BulletCamTurnON.sqs}";
			};
			class BulletCamTurnOFF
			{
				displayName="BulletCam Turn OFF";
				position="pos gunner";
				radius=5;
				condition="(player == gunner this) && (bTrackBullet)";
				statement="[] exec {\TZK_Objects_1.01\Scripts_CTI\BulletCamTurnOFF.sqs}";
			};

		};
	};
	class T80Base_xj101: T80
	{
		//basic defination before changing model, in order to avoid error
		scope = private;  vehicleClass = "TZK_Objects_1.01";
		cost = 4000000;
		threat[]={1, 1, 0.5};
		accuracy=1.90;
		armor=1500;
		armorStructural= 2;
		class HitEngine {armor=0.8;material=50;name=engine;passThrough=1;};
		class HitHull {armor=0.9;material=50;name=hull;passThrough=1;};
		class HitTurret {armor=1;material=50;name=turet;passThrough=1;};
		class HitGun {armor=1;material=50;name=gun;passThrough=1;};
		class HitLTrack {armor=0.6;material=53;name=pasL;passThrough=1;};
		class HitRTrack {armor=0.6;material=54;name=pasP;passThrough=1;};
		armorHull=1;
		armorTurret=1;
		armorGun=1;
		armorEngine=0.9;
		armorLights=0.4;
		armorTracks=0.6;
		model="T80.p3d";
		maxSpeed=65;
		brakeDistance= 14;
		camouflage = 8;
		weapons[]={"T80Gun_xj101","MachineGun12_7"};
		magazines[]={"T80Sabot_xj101","T80Heat_xj101","MachineGun12_7","MachineGun12_7"};
		irScanRangeMin = 500
		irScanRangeMax = 4000
		irScanToEyeFactor = 0.616
		irScanGround = true;
		fuelCapacity = 700;
		class EventHandlers
		{
			hit = "_this exec ""\TZK_Objects_1.01\skrypt\hit.sqs""";
			incomingMissile = "if ((_this select 0)==(_this select 0)) then {[_this] exec {\TZK_Objects_1.01\skrypt\alert.sqs}}";
		}; 
	};	
	class T80_xj101: T80Base_xj101
	{
		//change T80's model to the modified
		//set cargoAction as M1A1's
		scope=public;
		model = "\TZK_Objects_1.01\Model\T80_1.01.p3d";
		displayName="T80";
		driverAction="ManActM1A1DriverOut";
		gunnerAction="ManActM1A1Gunner";		
		commanderAction="ManActM1A1CommanderOut";	

		driverInAction="ManActM1A1Driver";
		gunnerInAction="ManActM1A1Gunner";
		commanderInAction="ManActM1A1Commander";
	};
	class T80_Art_xj101: T80_xj101
	{
		weapons[]={"T80Gun_xj101","MachineGun12_7"};
		magazines[]={"T80Heat_xj101","T80Heat_xj101","MachineGun12_7","MachineGun12_7"};
		class UserActions
		{
			class BulletCamTurnON
			{
				displayName="BulletCam Turn ON";
				position="pos gunner";
				radius=5;
				condition="(player == gunner this) && !(bTrackBullet)";
				statement="[] exec {\TZK_Objects_1.01\Scripts_CTI\BulletCamTurnON.sqs}";
			};
			class BulletCamTurnOFF
			{
				displayName="BulletCam Turn OFF";
				position="pos gunner";
				radius=5;
				condition="(player == gunner this) && (bTrackBullet)";
				statement="[] exec {\TZK_Objects_1.01\Scripts_CTI\BulletCamTurnOFF.sqs}";
			};

		};
	};
	class T80Res_xj101: T80Res
	{
		vehicleClass = "TZK_Objects_1.01";
		class HitGun {armor=3;material=52;name=gun;passThrough=1;}; armorGun=3;
	};
	class M60_xj101: M60
	{
		armor=400;
		displayName = M60A3;
		weapons[]={"Gun120","MachineGun7_6"};
		magazines[]={"Heat120","Shell120","MachineGun7_6"};
		vehicleClass = "TZK_Objects_1.01";
		class HitGun {armor=3;material=52;name=gun;passThrough=1;}; armorGun=3;
	};
	class T72_xj101: T72
	{		
		vehicleClass = "TZK_Objects_1.01";
		class HitGun {armor=3;material=52;name=gun;passThrough=1;}; armorGun=3;
	}		
// Car
	class Jeep_xj101: Jeep
	{
		vehicleClass = "TZK_Objects_1.01";
		class UserActions
		{
			class TransportTurnON
			{
				displayName="Transport Turn ON";
				position="pos driver";
				radius=5;
				condition="(driver this in units group player) && !(this in TransportActivatedVehicles)";
				statement="[this] exec {\TZK_Objects_1.01\Scripts_CTI\TransportTurnON.sqs}";
			};
			class TransportTurnOFF
			{
				displayName="Transport Turn OFF";
				position="pos driver";
				radius=5;
				condition="(driver this in units group player) && (this in TransportActivatedVehicles)";
				statement="[this] exec {\TZK_Objects_1.01\Scripts_CTI\TransportTurnOFF.sqs}";
			};
			class EjectOneCargo
			{
				displayName="Eject One Cargo";
				position="pos driver";
				priority=1;
				hideOnUse=false;
				radius=5;
				condition="(driver this in units group player)";
				statement="[this, siPlayer] exec {\TZK_Objects_1.01\Scripts_CTI\EjectOneCargo.sqs}";
			};
			class EjectAllCargo
			{
				displayName="Eject All Cargo";
				position="pos driver";
				priority=2;
				radius=5;
				condition="(driver this in units group player)";
				statement="[this, siPlayer] exec {\TZK_Objects_1.01\Scripts_CTI\EjectAllCargo.sqs}";
			};

		};
	};
	class JeepMG_xj101: JeepMG
	{
		vehicleClass = "TZK_Objects_1.01";
		class HitGun {armor=3;material=52;name=gun;passThrough=1;}; armorGun=3;
		class UserActions
		{
			class SwitchToDriver
			{
				displayName="To driver's seat";
				position="pos gunner";
				radius=5;
				condition="player == gunner this && speed this < 1 && (isNull driver this || local driver this)";
				statement="this exec {\TZK_Objects_1.01\Scripts\SwitchToDriver.sqs}";
			};
			class SwitchToGunner 
			{ 
				displayName="To gunner's seat"; 
				position="pos driver";
				radius=5; 
				condition="player == driver this && speed this < 1 && (isNull gunner this || local gunner this)"; 
				statement="this exec {\TZK_Objects_1.01\Scripts\SwitchToGunner.sqs}";
			};
		};	
	};
	class HMMWV_xj101: Jeep
	{
		vehicleClass = "TZK_Objects_1.01";
		displayName= $STR_DN_HMMV;
		model=\humr\HMMWV.p3d;
		picture=\humr\ihmmwv.paa;
		armor = 80;
		type=VArmor;
		cost=100000;
		dammageHalf[]=
		{
			jeep4x4_glass.paa,jeep4x4_glassB.paa,
			jeep_kab_sklo1.paa,jeep_kab_sklo1B.paa,
			jeep_kab_sklo2.paa,jeep_kab_sklo2B.paa,
			scud_sklo.paa,scud_skloB.paa,
			scud_sklo2.paa,scud_sklo2B.paa,
			scud_sklo3.paa,scud_sklo3B.paa, 
			scud_sklo4.paa,scud_sklo4B.paa
		};
		dammageFull[]=
		{
			jeep4x4_glass.paa,jeep4x4_glassB.paa,
			jeep_kab_sklo1.paa,jeep_kab_sklo1B.paa,
			jeep_kab_sklo2.paa,jeep_kab_sklo2B.paa,
			scud_sklo.paa,scud_skloB.paa,
			scud_sklo2.paa,scud_sklo2B.paa,
			scud_sklo3.paa,scud_sklo3B.paa, 
			scud_sklo4.paa,scud_sklo4B.paa
		};
		armorGlass=0.5;
		armorWheels=0.1;
		soundEngine[]={\humr\HMMWVengine,db-25,1.25};
		typicalCargo[]={Soldier, Soldier, SoldierLAW, Officer};
		class UserActions
		{
			class TransportTurnON
			{
				displayName="Transport Turn ON";
				position="pos driver";
				radius=5;
				condition="(driver this in units group player) && !(this in TransportActivatedVehicles)";
				statement="[this] exec {\TZK_Objects_1.01\Scripts_CTI\TransportTurnON.sqs}";
			};
			class TransportTurnOFF
			{
				displayName="Transport Turn OFF";
				position="pos driver";
				radius=5;
				condition="(driver this in units group player) && (this in TransportActivatedVehicles)";
				statement="[this] exec {\TZK_Objects_1.01\Scripts_CTI\TransportTurnOFF.sqs}";
			};
			class EjectOneCargo
			{
				displayName="Eject One Cargo";
				position="pos driver";
				priority=1;
				hideOnUse=false;
				radius=5;
				condition="(driver this in units group player)";
				statement="[this, siPlayer] exec {\TZK_Objects_1.01\Scripts_CTI\EjectOneCargo.sqs}";
			};
			class EjectAllCargo
			{
				displayName="Eject All Cargo";
				position="pos driver";
				priority=2;
				radius=5;
				condition="(driver this in units group player)";
				statement="[this, siPlayer] exec {\TZK_Objects_1.01\Scripts_CTI\EjectAllCargo.sqs}";
			};

		};
	};	
	class UAZ_xj101: UAZ
	{
		vehicleClass = "TZK_Objects_1.01";
		class UserActions
		{
			class TransportTurnON
			{
				displayName="Transport Turn ON";
				position="pos driver";
				radius=5;
				condition="(driver this in units group player) && !(this in TransportActivatedVehicles)";
				statement="[this] exec {\TZK_Objects_1.01\Scripts_CTI\TransportTurnON.sqs}";
			};
			class TransportTurnOFF
			{
				displayName="Transport Turn OFF";
				position="pos driver";
				radius=5;
				condition="(driver this in units group player) && (this in TransportActivatedVehicles)";
				statement="[this] exec {\TZK_Objects_1.01\Scripts_CTI\TransportTurnOFF.sqs}";
			};
			class EjectOneCargo
			{
				displayName="Eject One Cargo";
				position="pos driver";
				priority=1;
				hideOnUse=false;
				radius=5;
				condition="(driver this in units group player)";
				statement="[this, siPlayer] exec {\TZK_Objects_1.01\Scripts_CTI\EjectOneCargo.sqs}";
			};
			class EjectAllCargo
			{
				displayName="Eject All Cargo";
				position="pos driver";
				priority=2;
				radius=5;
				condition="(driver this in units group player)";
				statement="[this, siPlayer] exec {\TZK_Objects_1.01\Scripts_CTI\EjectAllCargo.sqs}";
			};

		};
	};
	class BRDM_xj101: LandVehicle
	{
		vehicleClass = "TZK_Objects_1.01";
		unloadInCombat = 1;
		fuelCapacity = 100;
		scope = 2;
		crew = SoldierEB;
		side = 0;
		accuracy = 0.5;
		nameSound = APC;
		transportSoldier = 3;
		transportAmmo = 0;
		maxSpeed = 100;
		preferRoads = 1;
		unitInfoType = UnitInfoCar;
		hideUnitInfo = 1;
		cargoAction[] = {ManActUazCoDriver,ManActCargo};
		cargoIsCoDriver[] = {1,0};
		soundEngine[] = {"Vehicles\OldIdle1",0.316228,1.25};
		class ViewPilot
		{
			initAngleX = 10;
			minAngleX = -30;
			maxAngleX = 30;
			initAngleY = 0;
			minAngleY = -100;
			maxAngleY = 100;
			initFov = 0.7;
			minFov = 0.42;
			maxFov = 0.85;
		};
		threat[] = {0.5,0.5,0.1};
		class IndicatorSpeed
		{
			selection = ukaz_rychlo;
			axis = osa_rychlo;
			angle = -240;
			min = 0;
			max = 40;
		};
		class IndicatorRPM 
		{
			selection = ukaz_rpm;
			axis = osa_rpm;
			angle = -170;
			min = 0;
			max = 1;
		};
		icon = bmp;
		soundGear[] = {"Vehicles\Gear_Trans1",0.001,1};
		soundCrash[] = {"Vehicles\crash_small2",0.316228,1};
		soundEnviron[] = {"Objects\noise",0.00316228,0.25};
		displayName = $STR_DN_BRMD;
		model = "\brmd\brmd.p3d";
		picture = "\brmd\ibrmd.paa";
		armor = 80;
		type = VArmor;
		cost = 100000;
		canFloat = 1;
		simulation = car;
		hasDriver = 1;
		hasGunner = 0;
		hasCommander = 0;
		hideProxyInCombat = 0;
		weapons[] = {CarHorn};
		magazines[] = {};
		wheelCircumference = 4.513;
		turnCoef = 6;
		driverAction = ManActV3SDriver;
		dammageHalf[] = {"jeep_kab_sklo1.paa","jeep_kab_sklo1B.paa"};
		dammageFull[] = {"jeep_kab_sklo1.paa","jeep_kab_sklo1B.paa"};
		armorGlass = 0.5;
		armorWheels = 0.15;
		terrainCoef = 2;
		damperSize = 0.1;
		damperForce = 30;
		armorBody = 0.4;
		armorFuel = 1.4;
		armorLights = 0.4;
		scudLaunch = "";
		scudStart = "";
		typicalCargo[] = {Soldier,Soldier,SoldierLAW,Officer};
		class HitEngine
		{
			armor = 1.2;
			material = 60;
			name = engine;
			passThrough = 1;
		};
		formationX = 20;
		formationZ = 20;
		precision = 10;
		brakeDistance = 10;
		steerAheadSimul = 0.5;
		steerAheadPlan = 0.35;
		predictTurnSimul = 1.2;
		predictTurnPlan = 1.2;
		sensitivity = 0.6;
		class IndicatorSpeed2
		{
			selection = ukaz_rychlo2;
			axis = osa_rychlo2;
			angle = -240;
			min = 0;
			max = 16.67;
		};
		class UserActions
		{
			class TransportTurnON
			{
				displayName="Transport Turn ON";
				position="pos driver";
				radius=5;
				condition="(driver this in units group player) && !(this in TransportActivatedVehicles)";
				statement="[this] exec {\TZK_Objects_1.01\Scripts_CTI\TransportTurnON.sqs}";
			};
			class TransportTurnOFF
			{
				displayName="Transport Turn OFF";
				position="pos driver";
				radius=5;
				condition="(driver this in units group player) && (this in TransportActivatedVehicles)";
				statement="[this] exec {\TZK_Objects_1.01\Scripts_CTI\TransportTurnOFF.sqs}";
			};
			class EjectOneCargo
			{
				displayName="Eject One Cargo";
				position="pos driver";
				priority=1;
				hideOnUse=false;
				radius=5;
				condition="(driver this in units group player)";
				statement="[this, siPlayer] exec {\TZK_Objects_1.01\Scripts_CTI\EjectOneCargo.sqs}";
			};
			class EjectAllCargo
			{
				displayName="Eject All Cargo";
				position="pos driver";
				priority=2;
				radius=5;
				condition="(driver this in units group player)";
				statement="[this, siPlayer] exec {\TZK_Objects_1.01\Scripts_CTI\EjectAllCargo.sqs}";
			};

		};
	};
	class Truck5t_xj101: Truck5t
	{
		vehicleClass = "TZK_Objects_1.01";
		class UserActions
		{
			class TransportTurnON
			{
				displayName="Transport Turn ON";
				position="pos driver";
				radius=5;
				condition="(driver this in units group player) && !(this in TransportActivatedVehicles)";
				statement="[this] exec {\TZK_Objects_1.01\Scripts_CTI\TransportTurnON.sqs}";
			};
			class TransportTurnOFF
			{
				displayName="Transport Turn OFF";
				position="pos driver";
				radius=5;
				condition="(driver this in units group player) && (this in TransportActivatedVehicles)";
				statement="[this] exec {\TZK_Objects_1.01\Scripts_CTI\TransportTurnOFF.sqs}";
			};
			class EjectOneCargo
			{
				displayName="Eject One Cargo";
				position="pos driver";
				priority=1;
				hideOnUse=false;
				radius=5;
				condition="(driver this in units group player)";
				statement="[this, siPlayer] exec {\TZK_Objects_1.01\Scripts_CTI\EjectOneCargo.sqs}";
			};
			class EjectAllCargo
			{
				displayName="Eject All Cargo";
				position="pos driver";
				priority=2;
				radius=5;
				condition="(driver this in units group player)";
				statement="[this, siPlayer] exec {\TZK_Objects_1.01\Scripts_CTI\EjectAllCargo.sqs}";
			};

		};
	};
	class Truck5tRepair_xj101: Truck5tRepair
	{
		class UserActions
		{
			class Attach
			{
				displayName="Attach/Detach Vehicle";
				position="pos driver";
				priority=2;
				radius=5;
				condition="alive this && (driver this in units group player || isNull driver this)";
				statement="[this, tsCenter, ttTruck] exec {\TZK_Objects_1.01\Scripts_CTI\AttachDetachVehicle.sqs}";
			};
		};
	};
	class Ural_xj101: Ural
	{
		vehicleClass = "TZK_Objects_1.01";
		class UserActions
		{
			class TransportTurnON
			{
				displayName="Transport Turn ON";
				position="pos driver";
				radius=5;
				condition="(driver this in units group player) && !(this in TransportActivatedVehicles)";
				statement="[this] exec {\TZK_Objects_1.01\Scripts_CTI\TransportTurnON.sqs}";
			};
			class TransportTurnOFF
			{
				displayName="Transport Turn OFF";
				position="pos driver";
				radius=5;
				condition="(driver this in units group player) && (this in TransportActivatedVehicles)";
				statement="[this] exec {\TZK_Objects_1.01\Scripts_CTI\TransportTurnOFF.sqs}";
			};
			class EjectOneCargo
			{
				displayName="Eject One Cargo";
				position="pos driver";
				priority=1;
				hideOnUse=false;
				radius=5;
				condition="(driver this in units group player)";
				statement="[this, siPlayer] exec {\TZK_Objects_1.01\Scripts_CTI\EjectOneCargo.sqs}";
			};
			class EjectAllCargo
			{
				displayName="Eject All Cargo";
				position="pos driver";
				priority=2;
				radius=5;
				condition="(driver this in units group player)";
				statement="[this, siPlayer] exec {\TZK_Objects_1.01\Scripts_CTI\EjectAllCargo.sqs}";
			};

		};
	};
	class UralRepair_xj101: UralRepair
	{
		class UserActions
		{
			class Attach
			{
				displayName="Attach/Detach Vehicle";
				position="pos driver";
				priority=2;
				radius=5;
				condition="alive this && (driver this in units group player || isNull driver this)";
				statement="[this, tsCenter, ttTruck] exec {\TZK_Objects_1.01\Scripts_CTI\AttachDetachVehicle.sqs}";
			};
		};
	};
	// Ship
	class CWKZodiac_xj101: BoatW
	{
		simulation = "ship";
		vehicleClass = "TZK_Objects_1.01";
		scope = private;
		hasGunner= 0 ;
		soundEngine[]={\cwkzodiac\motor.wav,db-44,1};
		picture=\cwkzodiac\icon.paa;
		icon ="\cwkzodiac\zod.paa";
		driverAction= manactCWKZodiacDriverA_xj101;
		hasCommander=0;
		crew="SoldierWB";
		maxSpeed=70;
		side=TWest;
		transportSoldier=6;
		displayName="Zodiac - Grey";
		accuracy=1;
		precision=1;
		fuelCapacity=40;
		brakeDistance=0.00001;
		model="\CWKZodiac\CWKZodiac"
		weapons[]={};		
		magazines[]={};
	};	
	class Zodiac_xj101: CWKZodiac_xj101
	{
		sensitivity=5; sensitivityEar=0.03
		accuracy=0.5
		scope = private;
		armor = 20
		fuelCapacity=100;
		secondaryExplosion = 1;
		side = TCivilian;
		displayName = "Zodiac";
		typicalCargo[]={};
		threat[]={0.1, 0.1, 0.1};
		cost = 10000;
		class UserActions
		{
			class TransportTurnON
			{
				displayName="Transport Turn ON";
				position="pos driver";
				radius=5;
				condition="(driver this in units group player) && !(this in TransportActivatedVehicles)";
				statement="[this] exec {\TZK_Objects_1.01\Scripts_CTI\TransportTurnON.sqs}";
			};
			class TransportTurnOFF
			{
				displayName="Transport Turn OFF";
				position="pos driver";
				radius=5;
				condition="(driver this in units group player) && (this in TransportActivatedVehicles)";
				statement="[this] exec {\TZK_Objects_1.01\Scripts_CTI\TransportTurnOFF.sqs}";
			};
			class EjectOneCargo
			{
				displayName="Eject One Cargo";
				position="pos driver";
				priority=1;
				hideOnUse=false;
				radius=5;
				condition="(driver this in units group player)";
				statement="[this, siPlayer] exec {\TZK_Objects_1.01\Scripts_CTI\EjectOneCargo.sqs}";
			};
			class EjectAllCargo
			{
				displayName="Eject All Cargo";
				position="pos driver";
				priority=2;
				radius=5;
				condition="(driver this in units group player)";
				statement="[this, siPlayer] exec {\TZK_Objects_1.01\Scripts_CTI\EjectAllCargo.sqs}";
			};

		};
	};
	class ZodiacW_xj101: Zodiac_xj101
	{
		displayName = "Zodiac West";
		scope = public;
		side = TWest;
	};
	class ZodiacE_xj101: Zodiac_xj101
	{
		displayName = "Zodiac East";
		scope = public;
		side = TEast;
	};
	class GunBoat_xj101: BoatW
	{
		sensitivity=5; sensitivityEar=0.03;
		accuracy=0.5;
		scope = private;
		side = TCivilian;
		fuelCapacity=1000;
		secondaryExplosion = 1;
		displayName = "Patrol Boat 30mm";
		vehicleClass = "TZK_Objects_1.01";
		weapons[]={Cannon_20HE_xj101, Cannon_20AP_xj101};
		magazines[]={Mag_20HE_800_03_xj101, Mag_20AP_200_03_xj101};
		typicalCargo[]={};
		threat[]={0.9, 0.4, 0.8};
		cost = 100000;
		class UserActions
		{
			class TransportTurnON
			{
				displayName="Transport Turn ON";
				position="pos driver";
				radius=5;
				condition="(driver this in units group player) && !(this in TransportActivatedVehicles)";
				statement="[this] exec {\TZK_Objects_1.01\Scripts_CTI\TransportTurnON.sqs}";
			};
			class TransportTurnOFF
			{
				displayName="Transport Turn OFF";
				position="pos driver";
				radius=5;
				condition="(driver this in units group player) && (this in TransportActivatedVehicles)";
				statement="[this] exec {\TZK_Objects_1.01\Scripts_CTI\TransportTurnOFF.sqs}";
			};
			class EjectOneCargo
			{
				displayName="Eject One Cargo";
				position="pos driver";
				priority=1;
				hideOnUse=false;
				radius=5;
				condition="(driver this in units group player)";
				statement="[this, siPlayer] exec {\TZK_Objects_1.01\Scripts_CTI\EjectOneCargo.sqs}";
			};
			class EjectAllCargo
			{
				displayName="Eject All Cargo";
				position="pos driver";
				priority=2;
				radius=5;
				condition="(driver this in units group player)";
				statement="[this, siPlayer] exec {\TZK_Objects_1.01\Scripts_CTI\EjectAllCargo.sqs}";
			};
			class AttachCenter
			{
				displayName="Attach/Detach Center Vehicle";
				position="pos driver";
				priority=2;
				radius=5;
				condition="alive this && (driver this in units group player || isNull driver this)";
				statement="[this, tsCenter, ttBoat] exec {\TZK_Objects_1.01\Scripts_CTI\AttachDetachVehicle.sqs}";
			};
			class AttachRight
			{
				displayName="Attach/Detach Right Vehicle";
				position="pos driver";
				priority=2;
				radius=5;
				condition="alive this && (driver this in units group player || isNull driver this)";
				statement="[this, tsRight, ttBoat] exec {\TZK_Objects_1.01\Scripts_CTI\AttachDetachVehicle.sqs}";
			};
			class AttachLeft
			{
				displayName="Attach/Detach Left Vehicle";
				position="pos driver";
				priority=2;
				radius=5;
				condition="alive this && (driver this in units group player || isNull driver this)";
				statement="[this, tsLeft, ttBoat] exec {\TZK_Objects_1.01\Scripts_CTI\AttachDetachVehicle.sqs}";
			};
			class SwitchToDriver
			{
				displayName="To driver's seat";
				position="pos gunner";
				radius=5;
				condition="player == gunner this && (isNull driver this || local driver this)";
				statement="this exec {\TZK_Objects_1.01\Scripts\SwitchToDriver.sqs}";
			};
			class SwitchToGunner 
			{ 
				displayName="To gunner's seat"; 
				position="pos driver"; 
				radius=5; 
				condition="player == driver this && (isNull gunner this || local gunner this)"; 
				statement="this exec {\TZK_Objects_1.01\Scripts\SwitchToGunner.sqs}";
			};
			
		};		
	};
	class GunBoatW_xj101: GunBoat_xj101
	{
		displayName = "Patrol Boat 30mm West";
		scope = public;
		side = TWest;
	};
	class GunBoatE_xj101: GunBoat_xj101
	{
		scope = public;
		displayName = "Patrol Boat 30mm East";
		side = TEast;
		transportSoldier=10
	};
// APC
	class M113_xj101: M113
	{
		vehicleClass = "TZK_Objects_1.01";
		class HitGun {armor=4;material=52;name=gun;passThrough=1;}; armorGun=4;
		class UserActions
		{
			class TransportTurnON
			{
				displayName="Transport Turn ON";
				position="pos driver";
				radius=5;
				condition="(driver this in units group player) && !(this in TransportActivatedVehicles)";
				statement="[this] exec {\TZK_Objects_1.01\Scripts_CTI\TransportTurnON.sqs}";
			};
			class TransportTurnOFF
			{
				displayName="Transport Turn OFF";
				position="pos driver";
				radius=5;
				condition="(driver this in units group player) && (this in TransportActivatedVehicles)";
				statement="[this] exec {\TZK_Objects_1.01\Scripts_CTI\TransportTurnOFF.sqs}";
			};
			class EjectOneCargo
			{
				displayName="Eject One Cargo";
				position="pos driver";
				priority=1;
				hideOnUse=false;
				radius=5;
				condition="(driver this in units group player)";
				statement="[this, siPlayer] exec {\TZK_Objects_1.01\Scripts_CTI\EjectOneCargo.sqs}";
			};
			class EjectAllCargo
			{
				displayName="Eject All Cargo";
				position="pos driver";
				priority=2;
				radius=5;
				condition="(driver this in units group player)";
				statement="[this, siPlayer] exec {\TZK_Objects_1.01\Scripts_CTI\EjectAllCargo.sqs}";
			};

		};
	};
	class M113_AA_xj101: M113_xj101
	{
		armor = 360;
		cost = 1000000;
		irScanRange = 4000;
		irScanGround = 0;
		gunnerCanSee = "4+8+16 +1";
		weapons[] = {VulcanCannon_xj101};
		magazines[] = {VulcanCannon_xj101};
		class Turret
		{
			gunAxis = OsaHlavne;
			turretAxis = OsaVeze;
			soundServo[] = {"Vehicles\gun_elevate",0.0316228,1};
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			body = OtocVez;
			gun = OtocHlaven;
			minElev = -3;
			maxElev = 70;
			minTurn = -360;
			maxTurn = 360;
		};
		threat[] = {0.5,0.5,1};
		gunnerOpticsModel = optika_zsu_gunner;
		commanderOpticsModel = optika_tanke_auxiliary;
		gunnerAction = ManActVulcanGunner;
		gunnerInAction = ManActVulcanGunner;
		forceHideGunner = 1;
		viewGunnerInExternal = 1;
	};
	class BMP_xj101: BMP
	{
		vehicleClass = "TZK_Objects_1.01";
		class HitGun {armor=4;material=52;name=gun;passThrough=1;}; armorGun=4;
		class UserActions
		{
			class TransportTurnON
			{
				displayName="Transport Turn ON";
				position="pos driver";
				radius=5;
				condition="(driver this in units group player) && !(this in TransportActivatedVehicles)";
				statement="[this] exec {\TZK_Objects_1.01\Scripts_CTI\TransportTurnON.sqs}";
			};
			class TransportTurnOFF
			{
				displayName="Transport Turn OFF";
				position="pos driver";
				radius=5;
				condition="(driver this in units group player) && (this in TransportActivatedVehicles)";
				statement="[this] exec {\TZK_Objects_1.01\Scripts_CTI\TransportTurnOFF.sqs}";
			};
			class EjectOneCargo
			{
				displayName="Eject One Cargo";
				position="pos driver";
				priority=1;
				hideOnUse=false;
				radius=5;
				condition="(driver this in units group player)";
				statement="[this, siPlayer] exec {\TZK_Objects_1.01\Scripts_CTI\EjectOneCargo.sqs}";
			};
			class EjectAllCargo
			{
				displayName="Eject All Cargo";
				position="pos driver";
				priority=2;
				radius=5;
				condition="(driver this in units group player)";
				statement="[this, siPlayer] exec {\TZK_Objects_1.01\Scripts_CTI\EjectAllCargo.sqs}";
			};

		};
	};
	class Vulcan_xj101: M113
	{
		vehicleClass = "TZK_Objects_1.01";
		class HitGun {armor=4;material=52;name=gun;passThrough=1;}; armorGun=4;
		displayName = $STR_DN_VULCAN;
		picture = "\vulcan\ivulcan.paa";
		icon = "antiAC.paa";
		armor = 180;
		cost = 1000000;
		model = "\vulcan\m163a1vulcan";
		irScanRange = 4000;
		irScanGround = 0;
		gunnerCanSee = "4+8+16 +1";
		weapons[] = {VulcanCannon_xj101};
		magazines[] = {VulcanCannon_xj101};
		class Turret
		{
			gunAxis = OsaHlavne;
			turretAxis = OsaVeze;
			soundServo[] = {"Vehicles\gun_elevate",0.0316228,1};
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			body = OtocVez;
			gun = OtocHlaven;
			minElev = -3;
			maxElev = 70;
			minTurn = -360;
			maxTurn = 360;
		};
		threat[] = {0.5,0.5,1};
		gunnerOpticsModel = optika_zsu_gunner;
		commanderOpticsModel = optika_tanke_auxiliary;
		gunnerAction = ManActVulcanGunner;
		gunnerInAction = ManActVulcanGunner;
		forceHideGunner = 1;
		viewGunnerInExternal = 1;
		transportSoldier = 0;
		class ReloadAnimations 
		{
			class VulcanCannon_xj101
			{
				weapon = VulcanCannon_xj101;
				angle0 = 0;
				angle1 = "-2 * 3.141592654";
				multiplier = 500;
				type = rotation;
				animPeriod = 1;
				selection = gatling;
				begin = "usti hlavne";
				end = "konec hlavne";
			};
		};
	};
	class ZSU_xj101: ZSU
	{
		vehicleClass = "TZK_Objects_1.01";
		class HitGun {armor=4;material=52;name=gun;passThrough=1;}; armorGun=4;
	};
	class Bradley_xj101: M113
	{
		vehicleClass = "TZK_Objects_1.01";
		class HitGun {armor=4;material=52;name=gun;passThrough=1;}; armorGun=4;
		scope = private;
		displayName = $STR_DN_M2A2;
		picture = "\m2a2\im2a2.paa";
		model = "\m2a2\m2a2";
		canFloat = 0;
		armor = 200;
		nameSound = apc;
		weapons[] = {Cannon25HE_xj101,MachineGun7_6,HellfireLauncherM2A2_xj101};
		magazines[] = {Cannon25HE_xj101,MachineGun7_6,HellfireLauncherM2A2_xj101,HellfireLauncherM2A2_xj101,HellfireLauncherM2A2_xj101,HellfireLauncherM2A2_xj101};
		class GunClouds: WeaponCloudsMGun {};
		class Turret
		{
			gunAxis = OsaHlavne;
			turretAxis = OsaVeze;
			soundServo[] = {"Vehicles\gun_elevate",0.0316228,1};
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			body = OtocVez;
			gun = OtocHlaven;
			minElev = -4.5;
			maxElev = 74;
			minTurn = -360;
			maxTurn = 360;
		};
		threat[] = {0.5,0.5,1};
		gunnerOpticsModel = optika_tank_gunner;
		gunnerAction = ManActM2A2GunnerOut;
		gunnerInAction = ManActM2A2Gunner;
		driverAction = ManActM2A2Driver;
		driverInAction = ManActM2A2Driver;
		commanderAction = ManActM2A2CommanderOut;
		commanderInAction = ManActM2A2Commander;
		hasCommander = 1;
		outGunnerMayFire = 0;
		forceHideGunner = 0;
		viewGunnerInExternal = 0;
		commanderUsesPilotView = 1;
		transportSoldier = 6;
		class IndicatorSpeed 
		{
			selection = ukaz_rychlo;
			axis = osa_rychlo;
			angle = -270;
			min = 0;
			max = 37;
		};
	};
	class M2A2_xj101: Bradley_xj101
	{
		scope = public;
		sensitivity=5; sensitivityEar=0.015;
		irScanRangeMin = 500
		irScanRangeMax = 4000
		irScanToEyeFactor = 2
		irScanGround = 0;
		driverCanSee=31;
		gunnerCanSee=31;
		commanderCanSee=31;
		displayName = "M2A2";
		cost = 200000;
		armor = 350;
		class UserActions
		{
			class TransportTurnON
			{
				displayName="Transport Turn ON";
				position="pos driver";
				radius=5;
				condition="(driver this in units group player) && !(this in TransportActivatedVehicles)";
				statement="[this] exec {\TZK_Objects_1.01\Scripts_CTI\TransportTurnON.sqs}";
			};
			class TransportTurnOFF
			{
				displayName="Transport Turn OFF";
				position="pos driver";
				radius=5;
				condition="(driver this in units group player) && (this in TransportActivatedVehicles)";
				statement="[this] exec {\TZK_Objects_1.01\Scripts_CTI\TransportTurnOFF.sqs}";
			};
			class EjectOneCargo
			{
				displayName="Eject One Cargo";
				position="pos driver";
				priority=1;
				hideOnUse=false;
				radius=5;
				condition="(driver this in units group player)";
				statement="[this, siPlayer] exec {\TZK_Objects_1.01\Scripts_CTI\EjectOneCargo.sqs}";
			};
			class EjectAllCargo
			{
				displayName="Eject All Cargo";
				position="pos driver";
				priority=2;
				radius=5;
				condition="(driver this in units group player)";
				statement="[this, siPlayer] exec {\TZK_Objects_1.01\Scripts_CTI\EjectAllCargo.sqs}";
			};

		};
	};
	class M2A2_AT_xj101: M2A2_xj101
	{
		displayName="M2A2 AT";
		cost = 2000000;
		weapons[]={ATLauncherTank_xj101, 50calW_xj101};
		magazines[]=
		{GuidedAT_APC_xj101, GuidedAT_APC_xj101, GuidedAT_APC_xj101, GuidedAT_APC_xj101, GuidedAT_APC_xj101, GuidedAT_APC_xj101, GuidedAT_APC_xj101,
		50calW_xj101, 50calW_xj101,50calW_xj101,50calW_xj101,50calW_xj101,50calW_xj101,50calW_xj101,50calW_xj101,50calW_xj101,50calW_xj101};
		threat[]={1, 1, 0.5};
	};
	class M2A2_AA_xj101: M2A2_xj101
	{
		displayName = "M2A2 AA";
		weapons[]={Stinger_xj101, MachineGun7_6};
		magazines[]={Stinger_xj101, Stinger_xj101, Stinger_xj101, Stinger_xj101, Stinger_xj101, Stinger_xj101, Stinger_xj101, Stinger_xj101, MachineGun7_6};
		threat[]={1, 0.9, 1};
		minFireTime = 1;
	};
	class M2A2_AA_Town_xj101: M2A2_AA_xj101
	{
		irScanToEyeFactor = 1.5;
	};
	class BMP2_Base_xj101: BMP
	{
		vehicleClass = "TZK_Objects_1.01";
		class HitGun {armor=4;material=52;name=gun;passThrough=1;}; armorGun=4;
		scope=private;
		displayName = $STR_DN_BMP2;
		model = "\bmp2\bmp2";
		armor = 250;
		weapons[] = {Cannon30_BMP2_xj101,MachineGun7_6,HellfireLauncherBMP2_xj101};
		magazines[] = {Cannon30HE_BMP2_xj101,Cannon30AP_BMP2_xj101,MachineGun7_6,HellfireLauncherBMP2_xj101};
		class GunClouds: WeaponCloudsMGun {};
		class Turret
		{
			gunAxis = OsaHlavne;
			turretAxis = OsaVeze;
			soundServo[] = {"Vehicles\gun_elevate",0.0316228,1};
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			body = OtocVez;
			gun = OtocHlaven;
			minElev = -4.5;
			maxElev = 74;
			minTurn = -360;
			maxTurn = 360;
		};
		class IndicatorSpeed
		{
			selection = ukaz_rychlo;
			axis = osa_rychlo;
			angle = -320;
			min = 0;
			max = 35;
		};
		threat[] = {0.5,0.5,1};
		transportSoldier = 6;
	};	
	class BMP2_xj101: BMP2_Base_xj101
	{
		scope = public;
		sensitivity=5; sensitivityEar=0.015;
		irScanRangeMin = 500
		irScanRangeMax = 4000
		irScanToEyeFactor = 2
		irScanGround = 0;
		driverCanSee=31;
		gunnerCanSee=31;
		commanderCanSee=31;
		armor = 330
		displayName="BMP2";
		class UserActions
		{
			class TransportTurnON
			{
				displayName="Transport Turn ON";
				position="pos driver";
				radius=5;
				condition="(driver this in units group player) && !(this in TransportActivatedVehicles)";
				statement="[this] exec {\TZK_Objects_1.01\Scripts_CTI\TransportTurnON.sqs}";
			};
			class TransportTurnOFF
			{
				displayName="Transport Turn OFF";
				position="pos driver";
				radius=5;
				condition="(driver this in units group player) && (this in TransportActivatedVehicles)";
				statement="[this] exec {\TZK_Objects_1.01\Scripts_CTI\TransportTurnOFF.sqs}";
			};
			class EjectOneCargo
			{
				displayName="Eject One Cargo";
				position="pos driver";
				priority=1;
				hideOnUse=false;
				radius=5;
				condition="(driver this in units group player)";
				statement="[this, siPlayer] exec {\TZK_Objects_1.01\Scripts_CTI\EjectOneCargo.sqs}";
			};
			class EjectAllCargo
			{
				displayName="Eject All Cargo";
				position="pos driver";
				priority=2;
				radius=5;
				condition="(driver this in units group player)";
				statement="[this, siPlayer] exec {\TZK_Objects_1.01\Scripts_CTI\EjectAllCargo.sqs}";
			};

		};
	};
	class BMP2_AT_xj101: BMP2_xj101
	{
		displayName="BMP2 AT";
		cost = 2000000;
		weapons[]={ATLauncherTank_xj101, 50calE_xj101};
		magazines[]=
		{GuidedAT_APC_xj101, GuidedAT_APC_xj101, GuidedAT_APC_xj101, GuidedAT_APC_xj101, GuidedAT_APC_xj101, GuidedAT_APC_xj101, GuidedAT_APC_xj101,
		50calE_xj101, 50calE_xj101,50calE_xj101,50calE_xj101,50calE_xj101,50calE_xj101,50calE_xj101,50calE_xj101,50calE_xj101,50calE_xj101};
		threat[]={1, 1, 0.5};
	};
	class BMP2_AA_xj101: BMP2_xj101
	{
		displayName="BMP2 AA";
		weapons[]={Strela_xj101, MachineGun7_6};
		magazines[]={Strela_xj101, Strela_xj101, Strela_xj101, Strela_xj101, Strela_xj101, Strela_xj101, Strela_xj101, Strela_xj101, MachineGun7_6};
		threat[]={1, 0.9, 1};
		minFireTime = 1;
	};
	class BMP2_AA_Town_xj101: BMP2_AA_xj101
	{
		irScanToEyeFactor = 1.5;
	};
	class M113Ambul_xj101: M113Ambul
	{
		vehicleClass = "TZK_Objects_1.01";
		class TransportMagazines {};
		attendant=0;
		class UserActions
		{
			class Attach
			{
				displayName="Attach/Detach Vehicle";
				position="pos driver";
				priority=2;
				radius=5;
				condition="alive this && (driver this in units group player || isNull driver this)";
				statement="[this, tsCenter, ttAPC] exec {\TZK_Objects_1.01\Scripts_CTI\AttachDetachVehicle.sqs}";
			};
		};
	};
	class BMPAmbul_xj101: BMPAmbul
	{
		vehicleClass = "TZK_Objects_1.01";
		class TransportMagazines {};
		attendant=0;
		class UserActions
		{
			class Attach
			{
				displayName="Attach/Detach Vehicle";
				position="pos driver";
				priority=2;
				radius=5;
				condition="alive this && (driver this in units group player || isNull driver this)";
				statement="[this, tsCenter, ttAPC] exec {\TZK_Objects_1.01\Scripts_CTI\AttachDetachVehicle.sqs}";
			};
		};
	};
	class MHQW_xj101: M113Ambul_xj101
	{
		class UserActions
		{
			class Attach
			{
				displayName="Attach/Detach Vehicle";
				position="pos driver";
				priority=2;
				radius=5;
				condition="alive this && (driver this in units group player || isNull driver this)";
				statement="[this, tsCenter, ttAPC] exec {\TZK_Objects_1.01\Scripts_CTI\AttachDetachVehicle.sqs}";
			};
			class Unflip
			{
				displayName="Unflip MHQ";
				position="pos driver";
				priority=3;
				radius=8;
				condition="alive this && siPlayer == si0";
				statement="[this] exec {Player\UnflipVehicle.sqs}";
			};
			class UnLock
			{
				displayName="Unlock MHQ";
				position="pos driver";
				priority=4;
				radius=8;
				condition="alive this && siPlayer == si0 && isCommander && locked this";
				statement="[this, !(locked this)] exec {Common\LockVehicle.sqs}";
			};
			class Lock
			{
				displayName="Lock MHQ";
				position="pos driver";
				priority=4;
				radius=8;
				condition="alive this && siPlayer == si0 && isCommander && !(locked this)";
				statement="[this, !(locked this)] exec {Common\LockVehicle.sqs}";
			};
			class RepairMHQ
			{
				displayName="Repair MHQ";
				position="pos driver";
				priority=3;
				radius=8;
				condition="siPlayer == si0 && !(alive this)";
				statement="[this] exec {Player\Action RepairMHQ.sqs}";
			};
		};
	};
	class MHQE_xj101: BMPAmbul_xj101
	{
		class UserActions
		{
			class Attach
			{
				displayName="Attach/Detach Vehicle";
				position="pos driver";
				priority=2;
				radius=5;
				condition="alive this && (driver this in units group player || isNull driver this)";
				statement="[this, tsCenter, ttAPC] exec {\TZK_Objects_1.01\Scripts_CTI\AttachDetachVehicle.sqs}";
			};
			class Unflip
			{
				displayName="Unflip MHQ";
				position="pos driver";
				priority=3;
				radius=8;
				condition="alive this && siPlayer == si1";
				statement="[this] exec {Player\UnflipVehicle.sqs}";
			};
			class UnLock
			{
				displayName="Unlock MHQ";
				position="pos driver";
				priority=4;
				radius=8;
				condition="alive this && siPlayer == si1 && isCommander && locked this";
				statement="[this, !(locked this)] exec {Common\LockVehicle.sqs}";
			};
			class Lock
			{
				displayName="Lock MHQ";
				position="pos driver";
				priority=4;
				radius=8;
				condition="alive this && siPlayer == si1 && isCommander && !(locked this)";
				statement="[this, !(locked this)] exec {Common\LockVehicle.sqs}";
			};
			class RepairMHQ
			{
				displayName="Repair MHQ";
				position="pos driver";
				priority=3;
				radius=8;
				condition="siPlayer == si1 && !(alive this)";
				statement="[this] exec {Player\Action RepairMHQ.sqs}";
			};
		};
	};
	class MCVW_xj101: M113Ambul_xj101
	{
		class UserActions
		{
			class Attach
			{
				displayName="Attach/Detach Vehicle";
				position="pos driver";
				priority=2;
				radius=5;
				condition="alive this && (driver this in units group player || isNull driver this)";
				statement="[this, tsCenter, ttAPC] exec {\TZK_Objects_1.01\Scripts_CTI\AttachDetachVehicle.sqs}";
			};
			class Unflip
			{
				displayName="Unflip MCV";
				position="pos driver";
				priority=3;
				radius=8;
				condition="alive this && siPlayer == si0";
				statement="[this] exec {Player\UnflipVehicle.sqs}";
			};
			class RepairMCV
			{
				displayName="Repair MCV";
				position="pos driver";
				priority=3;
				radius=8;
				condition="siPlayer == si0 && !(alive this)";
				statement="[this] exec {Player\Action RepairMCV.sqs}";
			};
		};
	};
	class MCVE_xj101: BMPAmbul_xj101
	{
		class UserActions
		{
			class Attach
			{
				displayName="Attach/Detach Vehicle";
				position="pos driver";
				priority=2;
				radius=5;
				condition="alive this && (driver this in units group player || isNull driver this)";
				statement="[this, tsCenter, ttAPC] exec {\TZK_Objects_1.01\Scripts_CTI\AttachDetachVehicle.sqs}";
			};
			class Unflip
			{
				displayName="Unflip MCV";
				position="pos driver";
				priority=3;
				radius=8;
				condition="alive this && siPlayer == si1";
				statement="[this] exec {Player\UnflipVehicle.sqs}";
			};
			class RepairMCV
			{
				displayName="Repair MCV";
				position="pos driver";
				priority=3;
				radius=8;
				condition="siPlayer == si1 && !(alive this)";
				statement="[this] exec {Player\Action RepairMCV.sqs}";
			};
		};
	};
	
// Helicopter
	class Mi17_xj101: Mi17
	{
		vehicleClass = "TZK_Objects_1.01";
		accuracy = 1000 // make ai use MG on it (ofp bug)
		class UserActions
		{
			class SetFlightAltitude
			{
				displayName="Set Flight Altitude";
				position="pos driver";
				radius=5;
				condition="driver this in ((units group player) - [player])";
				statement="[this, driver this] exec {Player\Dialog SetFlightAltitude.sqs}";
			};
			class Attach
			{
				displayName="Attach/Detach Vehicle";
				position="pos driver";
				priority=2;
				radius=5;
				condition="alive this && (driver this in units group player || isNull driver this)";
				statement="[this, tsCenter, ttHeli] exec {\TZK_Objects_1.01\Scripts_CTI\AttachDetachVehicle.sqs}";
			};
			class TransportTurnON
			{
				displayName="Transport Turn ON";
				position="pos driver";
				radius=5;
				condition="(driver this in units group player) && !(this in TransportActivatedVehicles)";
				statement="[this] exec {\TZK_Objects_1.01\Scripts_CTI\TransportTurnON.sqs}";
			};
			class TransportTurnOFF
			{
				displayName="Transport Turn OFF";
				position="pos driver";
				radius=5;
				condition="(driver this in units group player) && (this in TransportActivatedVehicles)";
				statement="[this] exec {\TZK_Objects_1.01\Scripts_CTI\TransportTurnOFF.sqs}";
			};
			class EjectOneCargo
			{
				displayName="Eject One Cargo";
				position="pos driver";
				priority=1;
				hideOnUse=false;
				radius=5;
				condition="(driver this in units group player)";
				statement="[this, siPlayer] exec {\TZK_Objects_1.01\Scripts_CTI\EjectOneCargo.sqs}";
			};
			class EjectAllCargo
			{
				displayName="Eject All Cargo";
				position="pos driver";
				priority=2;
				radius=5;
				condition="(driver this in units group player)";
				statement="[this, siPlayer] exec {\TZK_Objects_1.01\Scripts_CTI\EjectAllCargo.sqs}";
			};

		};
	};
	class Mi17_MG_xj101: Mi17_xj101
	{
		displayName = "Mi17 MG";
		weapons[]={Cannon_Heli_xj101};
		magazines[]={Mag_Heli_2000_xj101};
	};
	class Mi17_LGB_xj101: Mi17_xj101
	{
		displayName = "Mi17 LGB";
		laserScanner = true;
		weapons[]={LGBLauncher_xj101};
		magazines[]={Mag_LGB_2_xj101};
	};
	class UH60_xj101: UH60
	{
		vehicleClass = "TZK_Objects_1.01";
		accuracy = 1000;
		class UserActions
		{
			class SetFlightAltitude
			{
				displayName="Set Flight Altitude";
				position="pos driver";
				radius=5;
				condition="driver this in ((units group player) - [player])";
				statement="[this, driver this] exec {Player\Dialog SetFlightAltitude.sqs}";
			};
			class Attach
			{
				displayName="Attach/Detach Vehicle";
				position="pos driver";
				priority=2;
				radius=5;
				condition="alive this && (driver this in units group player || isNull driver this)";
				statement="[this, tsCenter, ttHeli] exec {\TZK_Objects_1.01\Scripts_CTI\AttachDetachVehicle.sqs}";
			};
			class TransportTurnON
			{
				displayName="Transport Turn ON";
				position="pos driver";
				radius=5;
				condition="(driver this in units group player) && !(this in TransportActivatedVehicles)";
				statement="[this] exec {\TZK_Objects_1.01\Scripts_CTI\TransportTurnON.sqs}";
			};
			class TransportTurnOFF
			{
				displayName="Transport Turn OFF";
				position="pos driver";
				radius=5;
				condition="(driver this in units group player) && (this in TransportActivatedVehicles)";
				statement="[this] exec {\TZK_Objects_1.01\Scripts_CTI\TransportTurnOFF.sqs}";
			};
			class EjectOneCargo
			{
				displayName="Eject One Cargo";
				position="pos driver";
				priority=1;
				hideOnUse=false;
				radius=5;
				condition="(driver this in units group player)";
				statement="[this, siPlayer] exec {\TZK_Objects_1.01\Scripts_CTI\EjectOneCargo.sqs}";
			};
			class EjectAllCargo
			{
				displayName="Eject All Cargo";
				position="pos driver";
				priority=2;
				radius=5;
				condition="(driver this in units group player)";
				statement="[this, siPlayer] exec {\TZK_Objects_1.01\Scripts_CTI\EjectAllCargo.sqs}";
			};

		};
	};
	class UH60_MG_xj101: UH60_xj101
	{
		displayName = "UH60 MG";
		weapons[]={Cannon_Heli_xj101};
		magazines[]={Mag_Heli_2000_xj101};
	};
	class UH60_LGB_xj101: UH60_xj101
	{
		displayName = "UH60 LGB";
		laserScanner = true;
		weapons[]={LGBLauncher_xj101};
		magazines[]={Mag_LGB_2_xj101};
	};
	class MH6_Base_xj101: Helicopter
	{
		vehicleClass = "TZK_Objects_1.01";
		displayName="MH-6J";
		nameSound="chopper";	// Pour les "2, Get in chopper..."

		picture=\DrKk_MH6\oh6icon;
		crew = SoldierWPilot;
		scope=private;
		side=TWest;

		type=VAir;
		//threat[] VSoft, VArmor, VAir 
		threat[]={0.6, 0.6, 0.3};

		accuracy=0.3;

		// Commandant ********************************
		hasCommander = false;

		// Pilote **************************************
		driverIsCommander=true;
		castDriverShadow = true;
		driverAction = ManActUH60Pilot;

		// Gunner *************************************
		gunnerUsesPilotView = true;
		castGunnerShadow = true;
		gunnerAction = ManActUH60Pilot;
		
		// Cargo **************************************
		transportSoldier = 6;
		typicalCargo[]={Soldier, Soldier, SoldierLAW, SoldierLAW};
		castCargoShadow = true;

		// Caracteristiques ******************************
		fuelCapacity=140;
		maxSpeed = 305;
		armor=20;
		cost=10000000;

		formationX=10;
		formationZ=20;


		// Sons **************************************
		//soundEngine[]={\DrKk_MH6\MH6J,db+5,1};
		soundEngine[]={\DrKk_MH6\mh6.ogg,db+0,1};
		//soundEngine[]={\DrKk_MH6\MH-6J.wav,0.609333,1};

		// Modelisation ********************************
		model=\DrKk_MH6\DrKk_MH6.p3d;
		rotorBig = vrtule_velka;
		rotorBigBlend = vrtule_velka_bl_;
		rotorSmall = vrtule_mala;
		rotorSmallBlend = vrtule_mala_bl;

		// Detection ennemis ***************************
		driverCanSee=CanSeeEye+CanSeeEar;
		irScanRangeMin = 1000
		irScanToEyeFactor = 0.75
		weapons[]={Cannon_Heli_xj101};
		magazines[]={Mag_Heli_2000_xj101};

		// Degats ************************************
		dammageHalf[]=
		{
			\DrKk_MH6\c130_window.paa, \DrKk_MH6\oh6_window_b.paa,
		};
		dammageFull[]=
		{
			\DrKk_MH6\c130_window.paa, \DrKk_MH6\ovh6_window_c.paa,
		};
		class UserActions
		{
			class SetFlightAltitude
			{
				displayName="Set Flight Altitude";
				position="pos driver";
				radius=5;
				condition="driver this in ((units group player) - [player])";
				statement="[this, driver this] exec {Player\Dialog SetFlightAltitude.sqs}";
			};
			class TransportTurnON
			{
				displayName="Transport Turn ON";
				position="pos driver";
				radius=5;
				condition="(driver this in units group player) && !(this in TransportActivatedVehicles)";
				statement="[this] exec {\TZK_Objects_1.01\Scripts_CTI\TransportTurnON.sqs}";
			};
			class TransportTurnOFF
			{
				displayName="Transport Turn OFF";
				position="pos driver";
				radius=5;
				condition="(driver this in units group player) && (this in TransportActivatedVehicles)";
				statement="[this] exec {\TZK_Objects_1.01\Scripts_CTI\TransportTurnOFF.sqs}";
			};
			class EjectOneCargo
			{
				displayName="Eject One Cargo";
				position="pos driver";
				priority=1;
				hideOnUse=false;
				radius=5;
				condition="(driver this in units group player)";
				statement="[this, siPlayer] exec {\TZK_Objects_1.01\Scripts_CTI\EjectOneCargo.sqs}";
			};
			class EjectAllCargo
			{
				displayName="Eject All Cargo";
				position="pos driver";
				priority=2;
				radius=5;
				condition="(driver this in units group player)";
				statement="[this, siPlayer] exec {\TZK_Objects_1.01\Scripts_CTI\EjectAllCargo.sqs}";
			};

		};
	};
	class MH6_xj101: MH6_Base_xj101
	{
		scope=public;
		accuracy=1000;
	};
	class Mi2NOE_Base_xj101: Helicopter
	{
		scope=private;
		crew="SoldierEPilot";
		picture="\Mi2NO\Mi2icon.paa";
		maxSpeed=215;
		side=TEast;
		displayname="Mi-2";
		vehicleClass = "TZK_Objects_1.01";
		fuelCapacity=150;
		mainRotorSpeed = 1.0;
		backRotorSpeed = -2.5;
		cost=1000000;
		hasGunner=0;
		armor=40;
		soundEngine[]={"\Mi2NO\mi2s.ogg",db+10,0.95};
		driverAction="ManActMi24Pilot";
		transportSoldier=5;
		typicalCargo[]={"Soldier","SoldierLAW"};
		accuracy=0.3;
		model="\Mi2NO\Mi2NO.p3d";
		weapons[]={};
		magazines[]={};
		type=2;
		//threat[] Vsoft,VArmor, VAir
		threat[]={0.1, 1, 0.7};
		armorStructural=1.0;
		armorHull=0.4;
		armorEngine=1.5;
		armorAvionics=0.7;
		armorVRotor=0.7;
		armorHRotor=0.5;
		armorMissiles=0.3;
		armorGlass=0.2;
		class IndicatorAltBaro
		{
			selection = "alt";
			axis = "osa_alt";
			angle = -360;
			min = 0;
			max = 1000;
		};
		class IndicatorAltBaro2
		{
			selection = "alt2";
			axis = "osa_alt2";
			angle = -360;
			min = 0;
			max = 1000;
		};
		class IndicatorAltRadar
		{
			selection = "nm_alt";
			axis = "osa_nm_alt";
			angle = -320;
			min = 0;
			max = 300;
		};
		class IndicatorSpeed
		{
			selection = "mph";
			axis = "osa_mph";
			angle = -340;
			min = 0;
			max = 70;
		};
		class IndicatorRPM
		{
			selection = "rpm";
			axis = "osa_rpm";
			angle = -330;
			min = 0;
			max = 11;
		};
		class IndicatorRPM2
		{
			selection = "rpm2";
			axis = "osa_rpm2";
			angle = -330;
			min = 0;
			max = 11;
		};
		dammageHalf[]={\Mi2NO\glass0.paa,\Mi2NO\glass1.paa,\Mi2NO\glass10.paa,\Mi2NO\glass11.paa};
		dammageFull[]={\Mi2NO\glass0.paa,\Mi2NO\glass2.paa,\Mi2NO\glass10.paa,\Mi2NO\glass12.paa};
		
		class Reflectors
		{
			class Left
			{
				color[] = {0.8, 0.8, 1.0, 1.0};
				ambient[] = {0.07, 0.07, 0.07, 1.0};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 0.85;
				brightness = 1.5;
			};
		};
		class Animations
		{
			class Susp_R
			{
				type="rotation";
				animPeriod=0.1;
				selection="R_susp";
				axis="R_susp_osa";
				angle0=0;
				angle1=0.261799387799149436538553615273292;
			};
			class Susp_L
			{
				type="rotation";
				animPeriod=0.1;
				selection="L_susp";
				axis="L_susp_osa";
				angle0=0;
				angle1=-0.261799387799149436538553615273292;
			};
			class Switch
			{
				type="rotation";
				animPeriod=0.1;
				selection="switch";
				axis="osa switch";
				angle0=0;
				angle1=1;
			};
			class Switch_2
			{
				type="rotation";
				animPeriod=0.1;
				selection="switch_2";
				axis="osa_switch_2";
				angle0=0;
				angle1=1;
			};
			class Cooler
			{
				type="rotation";
				animPeriod=5;
				selection="vent_a";
				axis="vent osa";
				angle0=0;
				angle1=2261.94671058465113169310323596;
			};
			class Temp1
			{
				type="rotation";
				animPeriod=30;
				selection="temp";
				axis="osa_temp";
				angle0=0;
				angle1=-3;
			};
			class Temp2
			{
				type="rotation";
				animPeriod=45;
				selection="temp2";
				axis="osa_temp2";
				angle0=0;
				angle1=-2.8;
			};
			class Fuel
			{
				type="rotation";
				animPeriod=1;
				selection="fuel";
				axis="osa fuel";
				angle0=0;
				angle1=-3.66519;
			};		
		};
		class UserActions
		{
			class SetFlightAltitude
			{
				displayName="Set Flight Altitude";
				position="pos driver";
				radius=5;
				condition="driver this in ((units group player) - [player])";
				statement="[this, driver this] exec {Player\Dialog SetFlightAltitude.sqs}";
			};
			class TransportTurnON
			{
				displayName="Transport Turn ON";
				position="pos driver";
				radius=5;
				condition="(driver this in units group player) && !(this in TransportActivatedVehicles)";
				statement="[this] exec {\TZK_Objects_1.01\Scripts_CTI\TransportTurnON.sqs}";
			};
			class TransportTurnOFF
			{
				displayName="Transport Turn OFF";
				position="pos driver";
				radius=5;
				condition="(driver this in units group player) && (this in TransportActivatedVehicles)";
				statement="[this] exec {\TZK_Objects_1.01\Scripts_CTI\TransportTurnOFF.sqs}";
			};
			class EjectOneCargo
			{
				displayName="Eject One Cargo";
				position="pos driver";
				priority=1;
				hideOnUse=false;
				radius=5;
				condition="(driver this in units group player)";
				statement="[this, siPlayer] exec {\TZK_Objects_1.01\Scripts_CTI\EjectOneCargo.sqs}";
			};
			class EjectAllCargo
			{
				displayName="Eject All Cargo";
				position="pos driver";
				priority=2;
				radius=5;
				condition="(driver this in units group player)";
				statement="[this, siPlayer] exec {\TZK_Objects_1.01\Scripts_CTI\EjectAllCargo.sqs}";
			};

		};
	};
	class Mi2NOE_xj101: Mi2NOE_Base_xj101
	{
		scope=public;
		accuracy=1000;
	};
// Gunship
	class AH1_xj101: Cobra
	{
		sensitivity=2; sensitivityEar=0.015
		camouflage=16; audible=20
		displayName = "AH1";
		vehicleClass = "TZK_Objects_1.01";
		secondaryExplosion = 1;
		laserScanner = true;
		class UserActions
		{
			class SetFlightAltitude
			{
				displayName="Set Flight Altitude";
				position="pos driver";
				radius=5;
				condition="driver this in ((units group player) - [player])";
				statement="[this, driver this] exec {Player\Dialog SetFlightAltitude.sqs}";
			};
		};
	};
	class AH1_AT_xj101: AH1_xj101
	{
		accuracy = 1000
		irScanRangeMin = 1000
		irScanToEyeFactor = 0.75
		armor = 80;
		displayName = "AH1 AT";
		weapons[]={ATLauncherAir_xj101, Cannon_20HE_xj101, Cannon_20AP_xj101};
		magazines[]={GuidedAT_Heli_8_xj101, Mag_20HE_800_01_xj101, Mag_20AP_200_01_xj101};
	};
	class AH64_Base_xj101: Helicopter
	{
		scope=private; vehicleClass = "TZK_Objects_1.01";
		picture = "\apac\iAH64";
		crew = SoldierWPilot;
		side = 1;
		displayName = $STR_DN_AH64;
		nameSound = chopper;
		accuracy = 0.3;
		driverAction = ManActAH64Pilot;
		gunnerAction = ManActAH64Gunner;
		maxSpeed = 296;
		soundEngine[] = {"\apac\ah64engine",3.16228,1};
		armor = 80;
		cost = 10000000;
		model = "\Apac\Apac";
		laserScanner = 1;
		rotorBig = apach_vrtule;
		rotorBigBlend = apach_vrtule;
		rotorSmall = apach_vrtulka;
		rotorSmallBlend = apach_vrtule2;
		weapons[] = {MachineGun30,HellfireLauncherApach_xj101,ZuniLauncher38};
		magazines[] = {MachineGun30,HellfireLauncherApach_xj101,ZuniLauncher38};
		type = VAir;
		threat[] = {0.3,1,0.8};
		dammageHalf[] = {"\apac\apach_in_skla.paa","\apac\apach_in_sklaC.paa"};
		dammageFull[] = {"\apac\apach_in_skla.paa","\apac\apach_in_sklaC.paa"};
		class Turret
		{
			gunAxis = OsaHlavne;
			turretAxis = OsaVeze;
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			soundServo[] = {};
			minElev = -60;
			maxElev = 11;
			minTurn = -86;
			maxTurn = 86;
			body = OtocVez;
			gun = OtocHlaven;
		};
		class IndicatorAltRadar 
		{
			selection = alt;
			axis = osa_alt;
			angle = -360;
			min = 0;
			max = 304;
		};
		class IndicatorAltBaro
		{
			selection = nm_alt;
			axis = osa_nm_alt;
			angle = -180;
			min = 0;
			max = 61;
		};
		class IndicatorSpeed
		{
			selection = mph;
			axis = osa_mph;
			angle = -320;
			min = 0;
			max = 125;
		};
		class IndicatorVertSpeed
		{
			selection = vert_speed;
			axis = osa_vert_speed;
			angle = -300;
			min = -30;
			max = 30;
		};
		class IndicatorRPM
		{
			selection = rpm;
			axis = osa_rpm;
			angle = -320;
			min = 0;
			max = 12;
		};
		class IndicatorCompass2
		{
			selection = kompas2;
			axis = osa_kompas2;
			angle = -360;
			min = -3.14159;
			max = 3.14159;
		};
	};
	class AH64_xj101: AH64_Base_xj101
	{
		scope = public;
		sensitivity=2; sensitivityEar=0.015
		camouflage=16; audible=20
		laserScanner = true;
		displayName = "AH64";
		vehicleClass = "TZK_Objects_1.01";
		secondaryExplosion = 1;
		class UserActions
		{
			class SetFlightAltitude
			{
				displayName="Set Flight Altitude";
				position="pos driver";
				radius=5;
				condition="driver this in ((units group player) - [player])";
				statement="[this, driver this] exec {Player\Dialog SetFlightAltitude.sqs}";
			};
		};
	};
	class AH64_AT_xj101: AH64_xj101
	{
		accuracy = 1000
		irScanRangeMin = 1000
		irScanToEyeFactor = 0.75
		armor = 128; //x1.6
		armorEngine=1.8; //x3
		displayName = "AH64 AT";
		weapons[]={ATLauncherAir_xj101, Cannon_20HE_xj101, Cannon_20AP_xj101};
		magazines[]={GuidedAT_Heli_8_xj101, Mag_20HE_800_01_xj101, Mag_20AP_200_01_xj101};
	};
	class Mi24_xj101: Mi24
	{
		sensitivity=2; sensitivityEar=0.015
		camouflage=16; audible=20
		displayName = "Mi24";
		vehicleClass = "TZK_Objects_1.01";
		secondaryExplosion = 1;
		laserScanner = true;
		class UserActions
		{
			class SetFlightAltitude
			{
				displayName="Set Flight Altitude";
				position="pos driver";
				radius=5;
				condition="driver this in ((units group player) - [player])";
				statement="[this, driver this] exec {Player\Dialog SetFlightAltitude.sqs}";
			};
			class TransportTurnON
			{
				displayName="Transport Turn ON";
				position="pos driver";
				radius=5;
				condition="(driver this in units group player) && !(this in TransportActivatedVehicles)";
				statement="[this] exec {\TZK_Objects_1.01\Scripts_CTI\TransportTurnON.sqs}";
			};
			class TransportTurnOFF
			{
				displayName="Transport Turn OFF";
				position="pos driver";
				radius=5;
				condition="(driver this in units group player) && (this in TransportActivatedVehicles)";
				statement="[this] exec {\TZK_Objects_1.01\Scripts_CTI\TransportTurnOFF.sqs}";
			};
			class EjectOneCargo
			{
				displayName="Eject One Cargo";
				position="pos driver";
				priority=1;
				hideOnUse=false;
				radius=5;
				condition="(driver this in units group player)";
				statement="[this, siPlayer] exec {\TZK_Objects_1.01\Scripts_CTI\EjectOneCargo.sqs}";
			};
			class EjectAllCargo
			{
				displayName="Eject All Cargo";
				position="pos driver";
				priority=2;
				radius=5;
				condition="(driver this in units group player)";
				statement="[this, siPlayer] exec {\TZK_Objects_1.01\Scripts_CTI\EjectAllCargo.sqs}";
			};

		};
	};
	class Mi24_AT_xj101: Mi24_xj101
	{
		accuracy = 1000
		irScanRangeMin = 1000
		irScanToEyeFactor = 0.75
		armor = 160;
		armorEngine=2.4; //x4
		displayName = "Mi24 AT";
		weapons[]={ATLauncherAir_xj101, Cannon_20HE_xj101, Cannon_20AP_xj101};
		magazines[]={GuidedAT_Heli_8_xj101, Mag_20HE_800_01_xj101, Mag_20AP_200_01_xj101};
	};
	class Kamov_Base_xj101: Mi24
	{
		scope=private;
		access=2
		crew="SoldierEPilot";
		picture="imi24";
		maxSpeed=400
		side=0
		displayName="$STR_DN_OUT_HELI_KAM";
		nameSound="chopper";
		accuracy=0.500000;
		cost=4000000
		armor=150
		model="\O\Vehl\V80";
		rotorBig="hip_vrt_v";
		rotorBigBlend="hip_vrtblur_v";
		rotorSmall="vrthind_m";
		rotorSmallBlend="vrthind_m_bl";
		soundEngine[]={"vehicles\mi_helicopter",3.162278,1};
		weapons[]={"Cannon30_Kamov_xj101","HellfireLauncherKamov_xj101","Rocket57x40Kamov_xj101"};
		magazines[]={"Cannon30HE_Kamov_xj101","Cannon30AP_Kamov_xj101","HellfireLauncherKamov_xj101","Rocket57x40Kamov_xj101"};
		driverOpticsModel="\o\vehl\V80_optika.p3d";
		transportSoldier=0
		transportAmmo=0
		type="VAir";
		threat[]={0.600000,1,0.800000};
		typicalCargo[]={"Soldier"};
		hasGunner=0
		driverAction="ManActA10Pilot";
		class Turret
		{
			gunAxis="OsaHlavne";
			turretAxis="OsaVeze";
			soundServo[]={};
			gunBeg="usti hlavne";
			gunEnd="konec hlavne";
			minElev=-45
			maxElev=10
			minTurn=-360
			maxTurn=360
			body="OtocVez";
			gun="OtocHlaven";
		};
		class Viewoptics
		{
			initAngleX=0
			minAngleX=0
			maxAngleX=0
			initAngleY=0
			minAngleY=0
			maxAngleY=0
			initFov=0.100000;
			minFov=0.100000;
			maxFov=1.200000;
		};
		class Reflectors
		{
			class Left
			{
				color[]={0.800000,0.800000,1.000000,1.000000};
				ambient[]={0.070000,0.070000,0.070000,1.000000};
				position="L svetlo";
				direction="konec L svetla";
				hitpoint="L svetlo";
				selection="L svetlo";
				size=0.500000;
				brightness=1.000000;
			};
		};
		class IndicatorAltRadar
		{
			selection="alt";
			axis="osa_alt";
			angle=-360
			min=0
			max=304
		};
		class IndicatorAltBaro
		{
			selection="nm_alt";
			axis="osa_nm_alt";
			angle=-180
			min=0
			max=61
		};
		class IndicatorSpeed
		{
			selection="mph";
			axis="osa_mph";
			angle=-350
			min=0
			max=175
		};
		class IndicatorVertSpeed
		{
			selection="vert_speed";
			axis="osa_vert_speed";
			angle=-300
			min=-35
			max=35
		};
		class IndicatorRPM
		{
			selection="rpm";
			axis="osa_rpm";
			angle=-320
			min=0
			max=12
		};
		class IndicatorWatch
		{
			hour="hodinova";
			minute="minutova";
			axis="osa_time";
			reversed=0
		};
	};
	class Ka50_xj101: Kamov_Base_xj101
	{
		scope = public;
		sensitivity=2; sensitivityEar=0.015
		camouflage=16; audible=20
		picture = "\TZK_Objects_1.01\Texture\Ka50.paa"
		displayName = "Ka50";
		vehicleClass = "TZK_Objects_1.01";
		secondaryExplosion = 1;
		laserScanner = true;
		class UserActions
		{
			class SetFlightAltitude
			{
				displayName="Set Flight Altitude";
				position="pos driver";
				radius=5;
				condition="driver this in ((units group player) - [player])";
				statement="[this, driver this] exec {Player\Dialog SetFlightAltitude.sqs}";
			};
		};
	};
	class Ka50_AT_xj101: Ka50_xj101
	{
		accuracy = 1000
		irScanRangeMin = 1000
		irScanToEyeFactor = 0.75
		armor = 240;
		displayName = "Ka50 AT";
		weapons[]={ATLauncherAir_xj101, Cannon_30APHE_xj101};
		magazines[]={GuidedAT_Heli_12_xj101, Mag_30APHE_1200_01_xj101};
	};
// Plane
	class A10_xj101: A10
	{
		accuracy = 1000
		sensitivity=2; sensitivityEar=0.015
		camouflage=16; audible=20
		armor = 70;
		vehicleClass = "TZK_Objects_1.01";
		class UserActions
		{
			class SetFlightAltitude
			{
				displayName="Set Flight Altitude";
				position="pos driver";
				radius=5;
				condition="driver this in ((units group player) - [player])";
				statement="[this, driver this] exec {Player\Dialog SetFlightAltitude.sqs}";
			};
		};
	};
	class A10_LGB_xj101: A10_xj101
	{
		displayName = "A10 LGB";
		weapons[]={LGBLauncher_xj101, Cannon_30APHE_xj101};
		magazines[]={Mag_LGB_8_xj101, Mag_30APHE_1200_01_xj101};
	};
	class A10_Tomahawk_xj101: A10_LGB_xj101
	{
		camouflage = 100; audible = 50
		displayName = "A10 Tomahawk";
		weapons[]={Tomahawk_xj101};
		magazines[]={Tomahawk_xj101};
	};
	class A10_Support_xj101 : A10_xj101
	{
		weapons[]={};
		magazines[]={};		
	};
	class Su25_Base_xj101: Plane
	{
		scope=private;
		crew = SoldierEPilot;
		picture=\su25\isu25;

		side=TEast;
		displayName=$STR_DN_SU25;
		accuracy=0.30;

		driverAction = ManActA10Pilot;

		maxSpeed = 800;

		armor=24;
		cost=20000000;
		model="\su25\su25";
		weapons[]={Ch29TLauncher_xj101, Rocket57x64, MachineGun30A10};
		magazines[]={Ch29TLauncher_xj101, Rocket57x64, MachineGun30A10};
		fov=0.5;

		type=VAir;
		//threat[] VSoft, VArmor, VAir 
		threat[]={0.1, 1, 0.7};

		class Reflectors
		{
			class Reflector
			{
				color[] = {0.9, 0.8, 0.8, 1.0};
				ambient[] = {0.1, 0.1, 0.1, 1.0};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 0.5;
				brightness = 0.25;
			};
		};

		class IndicatorAltRadar
		{
			// max for this indicator is 1000 feet (i.e. 304m)
			// note: this is actualy Baro altitude (name is wrong)
			selection = "alt";
			axis = "osa_alt";
			angle = -340;
			min = 0;
			max = 1000;
		};
		class IndicatorAltRadar2
		{
			// max for this indicator is 1000 feet (i.e. 304m)
			// note: this is actualy Baro altitude (name is wrong)
			selection = "alt2";
			axis = "osa_alt2";
			angle = -340;
			min = 0;
			max = 1000;
		};
		class IndicatorSpeed
		{
			selection = "mph";
			axis = "osa_mph";
			angle = -350;
			min = 0;
			max = 1000 / 3.6;
		};
		class IndicatorVertSpeed
		{
			selection = "vert_speed";
			axis = "osa_vert_speed";
			angle = -240;
			min = -150;
			max = 150;
		};
		class IndicatorVertSpeed2
		{
			selection = "vert_speed2";
			axis = "osa_vert_speed2";
			angle = -240;
			min = -150;
			max = 150;
		};
	};
	class Su25_xj101: Su25_Base_xj101
	{
		accuracy = 1000
		scope = public;
		sensitivity=2; sensitivityEar=0.015
		camouflage=16; audible=20
		laserScanner = true;
		vehicleClass = "TZK_Objects_1.01";
		class UserActions
		{
			class SetFlightAltitude
			{
				displayName="Set Flight Altitude";
				position="pos driver";
				radius=5;
				condition="driver this in ((units group player) - [player])";
				statement="[this, driver this] exec {Player\Dialog SetFlightAltitude.sqs}";
			};
		};
	};
	class Su25_LGB_xj101: Su25_xj101
	{
		displayName = "Su25 LGB";
		weapons[]={LGBLauncher_xj101, Cannon_30APHE_xj101};
		magazines[]={Mag_LGB_8_xj101, Mag_30APHE_1200_01_xj101};
	};
	class Su25_Raduga_xj101: Su25_LGB_xj101
	{
		camouflage = 100; audible = 50
		displayName = "Su25 Raduga";
		weapons[]={Raduga_xj101};
		magazines[]={Raduga_xj101};
	};
	class Su25_Support_xj101 : Su25_xj101
	{
		weapons[]={};
		magazines[]={};		
	};

// Unuse
	class ScudW_xj101: Scud
	{
		vehicleClass="TZK_Objects_1.01";
		side = TWest;
		class UserActions
		{
			class Introduction
			{
				displayName = "Introduction";
				radius = 3;
				position = "pos driver";
				hideOnUse = 0;
				condition = "player in (crew this)";
				statement = "this groupchat ""The Scud-D will assault co8. Please make sure co8 is set at the correct position before launch.""";
			};
		};
	};
	class ScudE_xj101: ScudW_xj101
	{
		side = TEast;
	};
	class T55C_xj101 : T55G
	{
		vehicleClass="TZK_Objects_1.01";
		side = TCivilian;
	};
	class T55E_xj101 : T55G
	{
		vehicleClass="TZK_Objects_1.01";
		side = TEast;
	};
	
// Mortar Structure
	class Mortar5: M2StaticMG {};
	class Mortar5_W_xj101 : Mortar5
	{
		side = TWest;
		irScanRangeMin = 500
		irScanRangeMax = 4000
		irScanToEyeFactor = 0.616
		irScanGround = true;
		weapons[]={"Mortar4_xj101"};
		magazines[]={"Mortar4_xj101", "Mortar4_xj101", "Mortar4_xj101", "Mortar4_xj101", "Mortar4_xj101", "Mortar4_xj101", "Mortar4_xj101", "Mortar4_xj101", "Mortar4_xj101", "Mortar4_xj101"};
	};
	class Mortar5_E_xj101 : Mortar5_W_xj101
	{
		side = TEast;
	};		
	class Building_xj101: Building
	{
		audible=1; // audible - bigger - better heard
		cost = 10000000;
		accuracy=0.5
		camouflage=0.1
		irTarget = true

		vehicleClass = "TZK_Objects_1.01";
		scope = private;
		side = TCivilian;
		type = VArmor;
		ladders[] = {};
		threat[]={0, 0, 0};
	};
	class CommCenter_xj101: Building_xj101
	{
		armor = 200;
		accuracy=1
		displayName = "Comm Center";
		model = "budova5";
		scope = public;
	};
	class CommCenterW_xj101: CommCenter_xj101
	{
		side = TWest
		displayName = "Comm Center West"
		accuracy=2
	};
	class CommCenterE_xj101: CommCenter_xj101
	{
		side = TEast
		displayName = "Comm Center East"
		accuracy=2
	};
// M2 MG
	class StaticMG_12mm7_xj101: M2StaticMG
	{
		displayName = "Static MG 12.7mm"
		side = TCivilian;
		cost = 100000;
		accuracy = 0.1;
		vehicleClass = "TZK_Objects_1.01";
		secondaryExplosion = 1;
		weapons[] = {StaticMG_12mm7_xj101};
		magazines[] =
		{
			Mag_12mm7_100_xj101,
			Mag_12mm7_100_xj101,
			Mag_12mm7_100_xj101,
			Mag_12mm7_100_xj101,
			Mag_12mm7_100_xj101,
			Mag_12mm7_100_xj101,
			Mag_12mm7_100_xj101,
			Mag_12mm7_100_xj101,
			Mag_12mm7_100_xj101,
			Mag_12mm7_100_xj101,
		};
		threat[]={1, 0.5, 1};
		// hideUnitInfo=true;
	};
	class StaticMG_12mm7_W_xj101: StaticMG_12mm7_xj101
	{
		displayName = "Static MG 12.7mm West";
		side = TWest;
		accuracy = 0.1;
	};
	class StaticMG_12mm7_E_xj101: StaticMG_12mm7_xj101
	{
		displayName = "Static MG 12.7mm East";
		side = TEast;
		accuracy = 0.1;
	};	


};

class CfgMarkers
{
	class UnknownVehicle_Marker_xj101
	{
		name = "Unknown Vehicle";
		icon = "unknown_move.paa";
		color[] = {0.000000,0.600000,0.900000,0.800000};
		size = 16;
	};

	class UnknownStructure_Marker_xj101 : UnknownVehicle_Marker_xj101
	{
		name = "Unknown Structure";
		icon = "unknown_object.paa";
	};
	
	class Soldier_Marker_xj101 : UnknownVehicle_Marker_xj101
	{
		name = "Soldier";
		icon = "soldier.paa";
	};
	
	class Bike_Marker_xj101 : UnknownVehicle_Marker_xj101
	{
		name = "Bike";
		icon = "\O\Vehl\moto.paa";
	};

	class Car_Marker_xj101 : UnknownVehicle_Marker_xj101
	{
		name = "Car";
		icon = "car.paa";
	};
	
	class Truck_Marker_xj101 : UnknownVehicle_Marker_xj101
	{
		name = "Truck";
		icon = "truck.paa";
	};
	
	class APC_Marker_xj101 : UnknownVehicle_Marker_xj101
	{
		name = "APC";
		icon = "bmp.paa";
	};
	
	class Tank_Marker_xj101 : UnknownVehicle_Marker_xj101
	{
		name = "Tank";
		icon = "tank.paa";
	};

	class Parachute_Marker_xj101 : UnknownVehicle_Marker_xj101
	{
		name = "Parachute";
		icon = "padak.paa";
	};

	class MachineGun_Marker_xj101 : UnknownVehicle_Marker_xj101
	{
		name = "Machine Gun";
		icon = "kulomet.paa";
	};

	class AAVehicle_Marker_xj101 : UnknownVehicle_Marker_xj101
	{
		name = "AA Vehicle";
		icon = "antiac.paa";
	};

	class RepairVehicle_Marker_xj101 : UnknownVehicle_Marker_xj101
	{
		name = "Repair Vehicle";
		icon = "repair_move.paa";
		size = 12;
	};

	class AmmoVehicle_Marker_xj101 : UnknownVehicle_Marker_xj101
	{
		name = "Ammo Vehicle";
		icon = "ammo_move.paa";
		size = 12;
	};

	class FuelVehicle_Marker_xj101 : UnknownVehicle_Marker_xj101
	{
		name = "Fuel Vehicle";
		icon = "fuel_move.paa";
		size = 12;
	};

	class MedicVehicle_Marker_xj101 : UnknownVehicle_Marker_xj101
	{
		name = "Medic Vehicle";
		icon = "ambulance_move.paa";
		size = 12;
	};

	class Boat_Marker_xj101 : UnknownVehicle_Marker_xj101
	{
		name = "Boat";
		icon = "ship.paa";
	};
	
	class Helicopter_Marker_xj101 : UnknownVehicle_Marker_xj101
	{
		name = "Helicopter";
		icon = "helicopter.paa";
	};

	class Plane_Marker_xj101 : UnknownVehicle_Marker_xj101
	{
		name = "Plane";
		icon = "a10.paa";
	};

	class RepairStructure_Marker_xj101 : UnknownVehicle_Marker_xj101
	{
		name = "Repair Structure";
		icon = "repair_object.paa";
		size = 12;
	};

	class AmmoStructure_Marker_xj101 : UnknownVehicle_Marker_xj101
	{
		name = "Ammo Structure";
		icon = "ammo_object.paa";
		size = 12;
	};

	class FuelStructure_Marker_xj101 : UnknownVehicle_Marker_xj101
	{
		name = "Fuel Structure";
		icon = "fuel_object.paa";
		size = 12;
	};

	class MedicStructure_Marker_xj101 : UnknownVehicle_Marker_xj101
	{
		name = "Medic Structure";
		icon = "ambulance_object.paa";
		size = 12;
	};
};
class CfgMarkerColors
{
	class ColorCyan_xj101
	{
		name="Cyan";
		color[]={0.000000,0.600000,0.900000,0.800000};
	};
	class ColorDarkPurple_xj101
	{
		name="DarkPurple";
		color[]={0.500000,0.200000,0.900000,0.800000};
	};
	class ColorOrange_xj101
	{
		name="Orange";
		color[]={0.900000,0.300000,0.000000,0.800000};
	};	
	class ColorGrey_xj101
	{
		name="Grey";
		color[]={0.400000,0.400000,0.400000,0.500000};
	};	
	
};
class CfgSounds
{
	sounds[] = {IncomingWarningAir_xj101, Rearming_xj101, AutoRefuel_xj101, NuclearMissileReady_xj101, NuclearMissileLaunched_xj101, MCV_Deployed_xj101};
	class IncomingWarningAir_xj101
	{
			sound[]={"\TZK_Objects_1.01\Sound\4.0 incoming.wss",db+80,1};
			name = "IncomingWarningAir_xj101";
			titles[]={0, "WARNING! Incoming Missile!"};
	};
	class Rearming_xj101
	{
			sound[]={"\Sound\Weapons\missload.wss",db+30,1};
			name = "Rearming_xj101";
			titles[]={0, "Rearm in process."};
	};
	class AutoRefuel_xj101
	{
			sound[]={"\Sound\Weapons\missload.wss",db+40,0.2};
			name = "AutoRefuel_xj101";
			titles[]={};
	};
	class NuclearMissileReady_xj101
	{
			sound[]={"\TZK_Objects_1.01\Sound\snukread.wss",db-10,1};
			name = "NuclearMissileReady_xj101";
			titles[]={};
	};
	class NuclearMissileLaunched_xj101
	{
			sound[]={"\TZK_Objects_1.01\Sound\snuksire.wss",db-10,1};
			name = "NuclearMissileLaunched_xj101";
			titles[]={0, "WARNING! Nuclear Missile Launched!"};
	};
	class MCV_Deployed_xj101
	{
			sound[]={"\TZK_Objects_1.01\Sound\uplace.wss",db-10,1};
			name = "MCV_Deployed_xj101";
			titles[]={};
	};
};