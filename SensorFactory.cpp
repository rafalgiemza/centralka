#pragma once;
#include "SensorFactory.h"
#include <vector>
#include "Sensor.h"


int SensorFactory::seq_value=0;
int SensorFactory::seq_next() { return seq_value++; }	//niemalej�cy index sensor�w realizowany przez sekwencj�
std::vector <Sensor*> SensorFactory::list_of_sensors;
