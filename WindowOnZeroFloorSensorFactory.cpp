#include "WindowOnZeroFloorSensorFactory.h"


WindowOnZeroFloorSensorFactory::WindowOnZeroFloorSensorFactory(void){}


WindowOnZeroFloorSensorFactory::~WindowOnZeroFloorSensorFactory(void){}

Sensor* WindowOnZeroFloorSensorFactory::create_sensor() {
	return new WindowOnZeroFloorSensor;
}

std::string WindowOnZeroFloorSensorFactory::classId() {
	return std::string("WindowOnZeroFloorSensor");
}
