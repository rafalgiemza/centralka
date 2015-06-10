#pragma once
#include "sensorfactory.h"
class WindowOnZeroFloorSensorFactory :	public SensorFactory
{
public:
	WindowOnZeroFloorSensorFactory(void);
	~WindowOnZeroFloorSensorFactory(void);
	virtual Sensor* create_sensor();
	virtual std::string classId();
};