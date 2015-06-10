#pragma once
#include "sensorfactory.h"
class MoveOnZeroFloorSensorFactory :	public SensorFactory
{
public:
	MoveOnZeroFloorSensorFactory(void);
	~MoveOnZeroFloorSensorFactory(void);
	virtual Sensor* create_sensor();
	virtual std::string classId();
};