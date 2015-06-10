#include "MoveOnZeroFloorSensorFactory.h"

MoveOnZeroFloorSensorFactory::MoveOnZeroFloorSensorFactory(void){}

MoveOnZeroFloorSensorFactory::~MoveOnZeroFloorSensorFactory(void){}

Sensor* MoveOnZeroFloorSensorFactory::create_sensor() {
	return new MoveOnZeroFloorSensor;
}

std::string MoveOnZeroFloorSensorFactory::classId() {
	return std::string("MoveOnZeroFloorSensor");
}