// Unknown, but seems necessary to set sounds out of critical TZK_Objects.pbo, same as markers and colors. Thus although this pbo's name is "Marker", sounds included as well.

class CfgPatches
{
	class TZK_Markers_110
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.96;
	};
};

class CfgMarkers
{
	class UnknownVehicle_Marker_xj110
	{
		name = "Unknown Vehicle";
		icon = "unknown_move.paa";
		color[] = {0.000000,0.600000,0.900000,0.800000};
		size = 16;
	};

	class UnknownStructure_Marker_xj110 : UnknownVehicle_Marker_xj110
	{
		name = "Unknown Structure";
		icon = "unknown_object.paa";
	};
	
	class Soldier_Marker_xj110 : UnknownVehicle_Marker_xj110
	{
		name = "Soldier";
		icon = "soldier.paa";
	};
	
	class Bike_Marker_xj110 : UnknownVehicle_Marker_xj110
	{
		name = "Bike";
		icon = "\O\Vehl\moto.paa";
	};

	class Car_Marker_xj110 : UnknownVehicle_Marker_xj110
	{
		name = "Car";
		icon = "car.paa";
	};
	
	class Truck_Marker_xj110 : UnknownVehicle_Marker_xj110
	{
		name = "Truck";
		icon = "truck.paa";
	};
	
	class APC_Marker_xj110 : UnknownVehicle_Marker_xj110
	{
		name = "APC";
		icon = "bmp.paa";
	};
	
	class Tank_Marker_xj110 : UnknownVehicle_Marker_xj110
	{
		name = "Tank";
		icon = "tank.paa";
	};

	class Parachute_Marker_xj110 : UnknownVehicle_Marker_xj110
	{
		name = "Parachute";
		icon = "padak.paa";
	};

	class MachineGun_Marker_xj110 : UnknownVehicle_Marker_xj110
	{
		name = "Machine Gun";
		icon = "kulomet.paa";
	};

	class AAVehicle_Marker_xj110 : UnknownVehicle_Marker_xj110
	{
		name = "AA Vehicle";
		icon = "antiac.paa";
	};

	class RepairVehicle_Marker_xj110 : UnknownVehicle_Marker_xj110
	{
		name = "Repair Vehicle";
		icon = "repair_move.paa";
		size = 12;
	};

	class AmmoVehicle_Marker_xj110 : UnknownVehicle_Marker_xj110
	{
		name = "Ammo Vehicle";
		icon = "ammo_move.paa";
		size = 12;
	};

	class FuelVehicle_Marker_xj110 : UnknownVehicle_Marker_xj110
	{
		name = "Fuel Vehicle";
		icon = "fuel_move.paa";
		size = 12;
	};

	class MedicVehicle_Marker_xj110 : UnknownVehicle_Marker_xj110
	{
		name = "Medic Vehicle";
		icon = "ambulance_move.paa";
		size = 12;
	};

	class Boat_Marker_xj110 : UnknownVehicle_Marker_xj110
	{
		name = "Boat";
		icon = "ship.paa";
	};
	
	class Helicopter_Marker_xj110 : UnknownVehicle_Marker_xj110
	{
		name = "Helicopter";
		icon = "helicopter.paa";
	};

	class Plane_Marker_xj110 : UnknownVehicle_Marker_xj110
	{
		name = "Plane";
		icon = "a10.paa";
	};

	class RepairStructure_Marker_xj110 : UnknownVehicle_Marker_xj110
	{
		name = "Repair Structure";
		icon = "repair_object.paa";
		size = 12;
	};

	class AmmoStructure_Marker_xj110 : UnknownVehicle_Marker_xj110
	{
		name = "Ammo Structure";
		icon = "ammo_object.paa";
		size = 12;
	};

	class FuelStructure_Marker_xj110 : UnknownVehicle_Marker_xj110
	{
		name = "Fuel Structure";
		icon = "fuel_object.paa";
		size = 12;
	};

	class MedicStructure_Marker_xj110 : UnknownVehicle_Marker_xj110
	{
		name = "Medic Structure";
		icon = "ambulance_object.paa";
		size = 12;
	};
};

class CfgMarkerColors
{
	class ColorCyan_xj110
	{
		name="Cyan";
		color[]={0.000000,0.600000,0.900000,0.800000};
	};
	class ColorDarkPurple_xj110
	{
		name="DarkPurple";
		color[]={0.500000,0.200000,0.900000,0.800000};
	};
	class ColorOrange_xj110
	{
		name="Orange";
		color[]={0.900000,0.300000,0.000000,0.800000};
	};	
	class ColorGrey_xj110
	{
		name="Grey";
		color[]={0.400000,0.400000,0.400000,0.500000};
	};	
	
};

class CfgSounds
{
	sounds[] = {IncomingWarningAir_xj101, Rearming_xj101, AutoRefuel_xj101, NuclearMissileReady_xj101, NuclearMissileLaunched_xj101, MCV_Deployed_xj101, IncomingWarningAir_xj110, Rearming_xj110, AutoRefuel_xj110, NuclearMissileReady_xj110, NuclearMissileLaunched_xj110, MCV_Deployed_xj110};
	class IncomingWarningAir_xj101
	{
			sound[]={"\TZK_Markers\Sounds\4.0 incoming.wss",db+80,1};
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
			sound[]={"\TZK_Markers\Sounds\snukread.wss",db-10,1};
			name = "NuclearMissileReady_xj101";
			titles[]={};
	};
	class NuclearMissileLaunched_xj101
	{
			sound[]={"\TZK_Markers\Sounds\snuksire.wss",db-10,1};
			name = "NuclearMissileLaunched_xj101";
			titles[]={0, "WARNING! Nuclear Missile Launched!"};
	};
	class MCV_Deployed_xj101
	{
			sound[]={"\TZK_Markers\Sounds\uplace.wss",db-10,1};
			name = "MCV_Deployed_xj101";
			titles[]={};
	};
	class IncomingWarningAir_xj110
	{
			sound[]={"\TZK_Markers\Sounds\incoming.wss",db+30,1};
			name = "IncomingWarningAir_xj110";
			titles[]={0, "WARNING! Incoming Missile!"};
	};
	class Rearming_xj110
	{
			sound[]={"\Sound\Weapons\missload.wss",db+30,1};
			name = "Rearming_xj110";
			titles[]={0, "Rearm in process."};
	};
	class AutoRefuel_xj110
	{
			sound[]={"\Sound\Weapons\missload.wss",db+40,0.2};
			name = "AutoRefuel_xj110";
			titles[]={};
	};
	class NuclearMissileReady_xj110
	{
			sound[]={"\TZK_Markers\Sounds\snukread.wss",db-10,1};
			name = "NuclearMissileReady_xj110";
			titles[]={};
	};
	class NuclearMissileLaunched_xj110
	{
			sound[]={"\TZK_Markers\Sounds\snuksire.wss",db-10,1};
			name = "NuclearMissileLaunched_xj110";
			titles[]={0, "WARNING! Nuclear Missile Launched!"};
	};
	class MCV_Deployed_xj110
	{
			sound[]={"\TZK_Markers\Sounds\uplace.wss",db-10,1};
			name = "MCV_Deployed_xj110";
			titles[]={};
	};
};