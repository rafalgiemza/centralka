#include "UnknownSensorFactory.h"

UnknownSensorFactory::UnknownSensorFactory(void){}

UnknownSensorFactory::~UnknownSensorFactory(void){}

Sensor* UnknownSensorFactory::create_sensor() {
	return new UnknownSensor;
}

std::string UnknownSensorFactory::classId() {
	return std::string("UnknownSensorFactory");
}
