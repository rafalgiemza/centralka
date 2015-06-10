#include "MoveInHallSensorFactory.h"

MoveInHallSensorFactory::MoveInHallSensorFactory(void){}

MoveInHallSensorFactory::~MoveInHallSensorFactory(void){}

Sensor* MoveInHallSensorFactory::create_sensor() {
	return new MoveInHallSensor;
}

std::string MoveInHallSensorFactory::classId() {
	return std::string("MoveInHallSensor");
}