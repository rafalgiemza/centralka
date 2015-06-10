#pragma once
#include "SensorFactory.h"

class MoveInKitchenSensorFactory :	public SensorFactory
{
public:
	MoveInKitchenSensorFactory(void);
	~MoveInKitchenSensorFactory(void);
	virtual Sensor* create_sensor();
	virtual std::string classId();
};
