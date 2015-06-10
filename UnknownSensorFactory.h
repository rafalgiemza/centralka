#pragma once
#include "Sensorfactory.h"
class UnknownSensorFactory : public SensorFactory
{
public:
	UnknownSensorFactory(void);
	~UnknownSensorFactory(void);
	virtual Sensor* create_sensor();
	virtual std::string classId();
};



