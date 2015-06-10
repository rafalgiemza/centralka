#include "PrivilegesController.h"
//std::vector <std::string> PrivilegesController::list_of_privileges;

PrivilegesController::PrivilegesController()
{
	list_of_privileges.push_back("MoveOnFirstFloorSensor");
	list_of_privileges.push_back("MoveOnZeroFloorSensor");
	list_of_privileges.push_back("MoveInHallSensor");
	list_of_privileges.push_back("MoveInKitchenSensor");
	list_of_privileges.push_back("WindowOnZeroFloorSensor");
	list_of_privileges.push_back("UnknowSensor");
}


PrivilegesController::~PrivilegesController(){} 

