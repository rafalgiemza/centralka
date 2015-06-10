#pragma once
#include "SensorFactory.h"
class MoveOnFirstFloorSensorFactory:	public SensorFactory
{
public:
	MoveOnFirstFloorSensorFactory(void);
	~MoveOnFirstFloorSensorFactory(void);
	virtual Sensor* create_sensor();
	virtual std::string classId();
};



