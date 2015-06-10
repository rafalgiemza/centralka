#include "MoveOnFirstFloorSensorFactory.h"

MoveOnFirstFloorSensorFactory::MoveOnFirstFloorSensorFactory(void){}

MoveOnFirstFloorSensorFactory::~MoveOnFirstFloorSensorFactory(void){}

Sensor* MoveOnFirstFloorSensorFactory::create_sensor() {
	return new MoveInKitchenSensor;
}

std::string MoveOnFirstFloorSensorFactory::classId() {
	return std::string("MoveInKitchenSensor");
}
