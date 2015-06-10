#pragma once

#include <string>
#include <map>
#include <vector>
#include "Sensor.h"
#include "MoveOnFirstFloorSensor.h"
#include "MoveOnZeroFloorSensor.h"
#include "MoveInHallSensor.h"
#include "MoveInKitchenSensor.h"
#include "WindowOnZeroFloorSensor.h"
#include "UnknownSensor.h"
#include <sstream>

class SensorFactory
{
public:
	virtual Sensor* create_sensor() = 0;
	virtual std::string classId() = 0;
	static int seq_next();
	static std::vector <Sensor*> list_of_sensors;

private:
	static int seq_value;
	
};

