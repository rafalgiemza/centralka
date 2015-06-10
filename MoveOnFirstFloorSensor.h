#pragma once
#include "Sensor.h"

class MoveOnFirstFloorSensor: public Sensor {
public:
	virtual void echo();
};