#pragma once
#include "SensorFactory.h"

class MoveInHallSensorFactory :	public SensorFactory
{
public:
	MoveInHallSensorFactory(void);
	~MoveInHallSensorFactory(void);
	virtual Sensor* create_sensor();
	virtual std::string classId();
};

