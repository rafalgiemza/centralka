#pragma once;
#include "SensorFactory.h"
#include <vector>
#include "Sensor.h"


int SensorFactory::seq_value=0;
int SensorFactory::seq_next() { return seq_value++; }	//niemalejący index sensorów realizowany przez sekwencję
std::vector <Sensor*> SensorFactory::list_of_sensors;
