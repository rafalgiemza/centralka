#include "MoveInKitchenSensorFactory.h"

MoveInKitchenSensorFactory::MoveInKitchenSensorFactory(void){}

MoveInKitchenSensorFactory::~MoveInKitchenSensorFactory(void){}

Sensor* MoveInKitchenSensorFactory::create_sensor() {
	return new MoveInKitchenSensor;
}

std::string MoveInKitchenSensorFactory::classId() {
	return std::string("MoveInKitchenSensor");
}
