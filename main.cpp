#include <iostream>
#include "UserCreator.h"
#include "PrivilegesDefinition.h"
#include "PrivilegesController.h"
#include "SensorController.h"
#include "SensorFactory.h"
#include "MoveInHallSensorFactory.h"
#include "SensorController.h"

int main(int argc, char *argv[]){
	
	UserCreator user_creator;
	
	user_creator.addUser();
	user_creator.listUsers();
	user_creator.cleanUp();

std::cout << "Wciœnij cokolwiek aby zakoñczyæ" << std::endl;
int y;
std::cin >> y;
return 0;
}
