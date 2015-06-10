#include "SensorController.h"

void SensorController::registerSensor(SensorFactory* sf)
{
	Sensor* s = sf->create_sensor();	
	SensorFactory::list_of_sensors.push_back(s);
}