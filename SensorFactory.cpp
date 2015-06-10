#pragma once;
#include "SensorFactory.h"
#include <vector>
#include "Sensor.h"


int SensorFactory::seq_value=0;
int SensorFactory::seq_next() { return seq_value++; }	//niemalej¹cy index sensorów realizowany przez sekwencjê
std::vector <Sensor*> SensorFactory::list_of_sensors;
